#include "stdafx.h"
#include "Parser.hpp"
#include "RegExLibrar.hpp"

using namespace Aergia::Parser;

std::vector<InParserClassDescriptor> Parser::parseClasses(std::wstring const& text)
{
	std::vector<InParserClassDescriptor> result;

	std::wregex regex = std::wregex(classRegex);

	for (auto match = std::wsregex_iterator(text.begin(), text.end(), regex); match != std::wsregex_iterator(); match++)
	{
		InParserClassDescriptor tmp;
		getBases(tmp, match->str());
	}
	return result;
}
