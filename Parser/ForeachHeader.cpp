#include "stdafx.h"
#include "ForeachHeader.hpp"
#include "RegExLibrar.hpp"

using namespace Aergia::Parser;

std::vector<ForeachDescriptor> Aergia::Parser::ForeachDescriptor::getForeachDescriptors(std::wstring const& text)
{
	std::vector<ForeachDescriptor>result;
	std::wcmatch matches;
	static auto regex = std::wregex(foreachRegex, std::wregex::optimize);

	for (auto match = std::wsregex_iterator(text.begin(), text.end(), regex); match != std::wsregex_iterator(); match++)
	{
		result.emplace_back();
		result.back()._variableName = (*match)[1].str();
		result.back()._collectionCallChain = (*match)[2].str();
		result.back()._foreachBody = match->size() == 5 ? (*match)[4].str() : (*match)[3].str();
		result.back()._positionInInputString = match->position();
		result.back()._textLength = (*match)[0].str().length();
	}
	return result;
}
