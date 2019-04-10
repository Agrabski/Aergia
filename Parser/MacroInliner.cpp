#include "stdafx.h"
#include <sstream>
#include "MacroInliner.hpp"
#include "../DataStructures/LocalContext.hpp"

void Aergia::Parser::MacroInliner::processLoop(IOContext& context, std::wstring_view loopContent, IContext* currentContext, std::vector<IContext*> const& collection, std::wstring variableName)
{
	using DataStructures::LocalContext;
	if (collection.empty())
		context._errorStream << context._policy.warnEmptyCollection();
	for (auto const var : collection)
	{
		LocalContext localContext(currentContext);
		localContext.appendVariable(variableName, var);
		std::wstringstream inStream = std::wstringstream(std::wstring(loopContent));
		std::wstringstream outStream;
		IOContext localIOContext(inStream, outStream, context._errorStream, context._policy);
		processMacros(localIOContext, &localContext);
		context._output << outStream.rdbuf();
	}
}
