#include "stdafx.h"
#include "ForeachHeader.hpp"
#include "RegExLibrar.hpp"

using namespace Aergia::Parser;

std::vector<ForeachDescriptor> Aergia::Parser::ForeachDescriptor::getForeachDescriptors(std::wstring const& text)
{
	std::vector<ForeachDescriptor>result;
	std::wcmatch matches;
	static auto regex = std::wregex(foreachRegex, std::wregex::optimize | std::wregex::ECMAScript);

	for (auto match = std::wsregex_iterator(text.begin(), text.end(), regex); match != std::wsregex_iterator(); match++)
	{
		auto m = *match;
		result.emplace_back();
		result.back()._variableName = m[1].str();
		result.back()._collectionCallChain = m[2].str();
		result.back()._foreachBody = m[4].matched ? m[4].str() : m[3].str();
		result.back()._positionInInputString = match->position();
		result.back()._textLength = m[0].str().length();
	}
	return result;
}
