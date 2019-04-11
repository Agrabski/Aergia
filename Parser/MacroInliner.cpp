#include "stdafx.h"
#include <sstream>
#include <algorithm>
#include "MacroInliner.hpp"
#include "../DataStructures/LocalContext.hpp"
#include "Keywords.hpp"
#include "ForeachHeader.hpp"
#include "AnonymousDescriptor.hpp"
#include <boost/tokenizer.hpp>

void Aergia::Parser::MacroInliner::processLoop(IOContext& context, std::wstring_view loopContent, IContext* currentContext, std::vector<IObject*> const& collection, std::wstring variableName)
{
	using DataStructures::LocalContext;
	if (collection.empty())
		context._errorStream << context._policy.warnEmptyCollection();
	for (auto const var : collection)
	{
		LocalContext localContext(currentContext);
		localContext.appendVariable(variableName, var);
		std::wstring outBuffer;
		IOContext localIOContext(std::wstring(loopContent), outBuffer, context._errorStream, context._policy);
		processMacros(localIOContext, &localContext);
		context._output.append(outBuffer);
	}
}

void Aergia::Parser::MacroInliner::processMacros(IOContext& context, IContext* currentContext)
{
	auto loops = ForeachDescriptor::getForeachDescriptors(context._input);
	auto anonyms = AnonymousDescriptor::getAnonymousDescriptors(context._input);

	std::sort(loops.begin(), loops.end(), [](ForeachDescriptor const& a, ForeachDescriptor const& b) {return a._positionInInputString > b._positionInInputString; });
	std::sort(anonyms.begin(), anonyms.end(), [](AnonymousDescriptor const& a, AnonymousDescriptor const& b) {return a._positionInInputString > b._positionInInputString; });
	size_t loopIndex = 0;
	size_t anonymsIndex = 0;
	for (size_t i = 0ULL; i < context._input.size(); ++i)
	{
		bool charProcessed = false;
		if (!charProcessed && loops.size() > loopIndex)
		{
			if (i == loops[loopIndex]._positionInInputString)
			{
				auto loop = loops[loopIndex];

				i += loop._textLength;

				auto const object = resolveCallChain(currentContext, loop._collectionCallChain,context._errorStream);

				if (object == nullptr)
				{
					// TODO: warn
				}
				else
				{
					auto collection = object->asCollection();
					if(collection)
						processLoop(context, loop._foreachBody, currentContext, *collection, loop._variableName);
					else
					{
						// TODO: warn
					}
				}
				
				loopIndex++;
				charProcessed = true;
			}
		}

		if (!charProcessed && anonyms.size() > anonymsIndex)
		{
			if(i == anonyms[anonymsIndex]._positionInInputString)
			{
				processAnonym(context, currentContext, anonyms[anonymsIndex]._conent);
				i += anonyms[anonymsIndex]._textLength;
				anonymsIndex++;
				charProcessed = true;
			}
		}
	}

}

Aergia::Parser::IObject* Aergia::Parser::MacroInliner::resolveCallChain(IContext* context, std::wstring const& chain, std::wostream& errorStream)
{
	throw std::exception();

	typedef boost::char_separator<wchar_t> separator;
	boost::tokenizer<separator, std::wstring::const_iterator, std::wstring> tokens(chain, separator(L".$"));
	if (tokens.begin() != tokens.end())
	{
		//auto collection = context->getObject(*tokens.begin());
		//for (auto token = tokens.begin()++; token != tokens.end(); token++)
		//{
		//}
		// TODO: warn
	}
}
