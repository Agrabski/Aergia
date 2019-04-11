#include "stdafx.h"
#include "AnonymousDescriptor.hpp"

using namespace Aergia::Parser;

std::vector<AnonymousDescriptor> AnonymousDescriptor::getAnonymousDescriptors(std::wstring const& text)
{
	std::vector<AnonymousDescriptor>result;
	std::wcmatch matches;
	static auto regex = std::wregex(anoymousRegex, std::wregex::optimize);

	for (auto match = std::wsregex_iterator(text.begin(), text.end(), regex); match != std::wsregex_iterator(); match++)
	{
		result.emplace_back();
		result.back()._conent = (*match)[1].str();
		result.back()._positionInInputString = match->position();
	}
	return result;
}
