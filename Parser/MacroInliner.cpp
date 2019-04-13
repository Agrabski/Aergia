#include "stdafx.h"
#include <sstream>
#include <algorithm>
#include <boost/algorithm/string.hpp>
#include "MacroInliner.hpp"
#include "../DataStructures/LocalContext.hpp"
#include "Keywords.hpp"
#include "ForeachHeader.hpp"
#include "AnonymousDescriptor.hpp"
#include "CallChainDescriptor.hpp"

void Aergia::Parser::MacroInliner::processLoop(IOContext& context, std::wstring loopContent, IContext* currentContext, std::vector<IObject*> const& collection, std::wstring variableName)
{
	using DataStructures::LocalContext;
	if (collection.empty())
		context._errorStream << context._policy.warnEmptyCollection();
	for (auto const var : collection)
	{
		LocalContext localContext(currentContext);
		localContext.appendVariable(variableName, var);
		std::wstring outBuffer;
		IOContext localIOContext(loopContent, outBuffer, context._errorStream, context._policy);
		processMacros(localIOContext, &localContext);
		context._output.append(outBuffer);
		context._output.append(context._policy.endLine());
	}
}

void Aergia::Parser::MacroInliner::processMacros(IOContext& context, IContext* currentContext)
{
	auto loops = ForeachDescriptor::getForeachDescriptors(context._input);
	auto anonyms = AnonymousDescriptor::getAnonymousDescriptors(context._input);
	auto calls = CallChainDescriptor::getCallChainDescriptors(context._input);

	std::sort(loops.begin(), loops.end(), [](ForeachDescriptor const& a, ForeachDescriptor const& b) {return a._positionInInputString < b._positionInInputString; });
	std::sort(anonyms.begin(), anonyms.end(), [](AnonymousDescriptor const& a, AnonymousDescriptor const& b) {return a._positionInInputString < b._positionInInputString; });
	size_t loopIndex = 0;
	size_t anonymsIndex = 0;
	size_t callIndex = 0;
	size_t line = 0;
	for (size_t i = 0ULL; i < context._input.size(); ++i)
	{
		bool charProcessed = false;
		if (context._input[i] == '\n')
		{
			line++;
			charProcessed = true;
		}
		if (!charProcessed && loops.size() > loopIndex)
		{
			if (i == loops.at(loopIndex)._positionInInputString)
			{
				auto loop = loops.at(loopIndex);

				i += loop._textLength - 1;

				auto const* const object = resolveCallChain(currentContext, loop._collectionCallChain, context._errorStream);

				if (object == nullptr)
				{
					context._errorStream << context._policy.warnCallChainFailed(loop._collectionCallChain, line);
				}
				else
				{
					auto collection = object->asCollection();
					if (collection)
						processLoop(context, loop._foreachBody, currentContext, *collection, loop._variableName);
					else
					{
						context._errorStream << context._policy.warnNotEvaluatedToCollection(loop._collectionCallChain, line);
					}
				}

				loopIndex++;
				charProcessed = true;
			}
		}

		if (!charProcessed && anonyms.size() > anonymsIndex)
		{
			if (i == anonyms.at(anonymsIndex)._positionInInputString)
			{
				processAnonym(context, currentContext, anonyms.at(anonymsIndex)._conent, line);
				i += anonyms.at(anonymsIndex)._textLength - 1;
				anonymsIndex++;
				charProcessed = true;
			}
		}

		if (!charProcessed && calls.size() > callIndex)
		{
			if (i == calls.at(callIndex)._positionInInputString)
			{
				auto const* const object = resolveCallChain(currentContext, calls.at(callIndex)._conent, context._errorStream);
				context._output += object->toString();
				i += calls.at(callIndex)._textLength - 1;
				callIndex++;
				charProcessed = true;
			}
		}

		if (!charProcessed)
			context._output += context._input.at(i);
	}

}

void Aergia::Parser::MacroInliner::processAnonym(IOContext& context, IContext* currentContext, std::wstring const& contents, size_t lineNumber)
{
	context._output += L"__anonymous_" + std::to_wstring(lineNumber) + L"__";
}

Aergia::Parser::IObject* Aergia::Parser::MacroInliner::resolveCallChain(IContext* context, std::wstring const& chain, std::wostream& errorStream)
{
	std::vector<std::wstring> results;
	std::wregex functionRecogniser = std::wregex(L"([a-zA-Z]+)\\(([a-zA-Z]+)\\)", std::wregex::optimize);
	boost::split(results, chain, boost::is_any_of(L"."));
	IObject* object = nullptr;

	for (auto result : results)
	{
		std::wsmatch match;
		if (std::regex_match(result, match, functionRecogniser))
		{
			object = _functionLibrary.resolveFunction(context, match[1], match[2]);
			if (object == nullptr)
				return nullptr;
		}
		else
		{
			if (object == nullptr)
				object = context->getObject(result);
			else
				object = object->getMember(result);
		}
	}
	return object;

}

Aergia::Parser::MacroInliner::MacroInliner(std::vector<InParserClassDescriptor> const& descriptors)
{
	std::vector<std::unique_ptr<Aergia::DataStructures::TypeInfo>> types;

	for (auto const& descriptor : descriptors)
	{
		auto tmp = std::find_if(types.begin(), types.end(), [&](auto & e) {return e->toString() == descriptor._name; });
		if (tmp == types.end())
		{
			types.push_back(std::make_unique<DataStructures::TypeInfo>());
			tmp = --types.end();
			*(*tmp)->_name = descriptor._name;

		}
		auto type = tmp->get();
		for (auto base : descriptor.bases)
		{
			auto pointer = std::find_if(types.begin(), types.end(), [&](auto & e) {return e->toString() == base.second; });
			if (pointer == types.end())
			{
				types.push_back(std::make_unique<DataStructures::TypeInfo>());
				pointer = --types.end();
				*pointer->get()->_name = base.second;
			}
			type->_bases.push_back(std::make_unique<DataStructures::Base>(pointer->get(), base.first));
		}

		for (auto field : descriptor._fields)
		{
			auto pointer = std::find_if(types.begin(), types.end(), [&](auto & e) {return e->toString() == field.second.first; });
			if (pointer == types.end())
			{
				types.push_back(std::make_unique<DataStructures::TypeInfo>());
				pointer = --types.end();
				*pointer->get()->_name = field.second.first;
			}
			type->_properties.push_back(std::make_unique<DataStructures::Property>(field.second.second, pointer->get(), field.first));

		}
	}
	for (auto& type : types)
		_defaultContext.appendType(std::move(type));
}

void Aergia::Parser::MacroInliner::processText(std::wstring const& input, std::wstring& output, std::wostream& errorStream, InliningPolicy const& policy)
{
	IOContext context = IOContext(input, output, errorStream, policy);
	processMacros(context, &_defaultContext);
}
