#include "stdafx.h"
#include "CallChainDescriptor.hpp"
#include <regex>
#include "RegExLibrar.hpp"

using namespace Aergia::Parser;

std::vector<CallChainDescriptor> Aergia::Parser::CallChainDescriptor::getCallChainDescriptors(std::wstring const& text)
{
	std::vector<CallChainDescriptor>result;
	std::wcmatch matches;
	static auto regex = std::wregex(callRegex, std::wregex::optimize);

	for (auto match = std::wsregex_iterator(text.begin(), text.end(), regex); match != std::wsregex_iterator(); match++)
	{
		result.emplace_back();
		result.back()._conent = (*match)[1].str();
		result.back()._positionInInputString = match->position();
		result.back()._textLength = (*match)[0].str().length();
	}
	return result;
}
