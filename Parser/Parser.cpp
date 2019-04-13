#include "stdafx.h"
#include "Parser.hpp"
#include "RegExLibrar.hpp"
#include "../DataStructures/Acessibility.hpp"

using namespace Aergia::Parser;

void Aergia::Parser::Parser::getBases(InParserClassDescriptor& e, std::wstring const& iterator)
{
	static std::wregex regex = std::wregex(classBasesSectionRegex);
	static std::wregex baseRegex = std::wregex(classBasesRegex);

	for (auto match = std::wsregex_iterator(iterator.begin(), iterator.end(), regex); match != std::wsregex_iterator(); match++)
	{
		auto tmp = match->str();
		for (auto base = std::wsregex_iterator(tmp.begin(), tmp.end(), baseRegex); base != std::wsregex_iterator(); base++)
		{
			e.bases.emplace_back();
			e.bases.back().first = DataStructures::fromWstring((*base)[1]);
			e.bases.back().second = (*base)[2];
		}
	}
}

std::vector<InParserClassDescriptor> Parser::parseClasses(std::wstring const& text)
{
	std::vector<InParserClassDescriptor> result;

	std::wregex regex = std::wregex(classRegex, std::wregex::optimize);

	for (auto match = std::wsregex_iterator(text.begin(), text.end(), regex); match != std::wsregex_iterator(); match++)
	{
		InParserClassDescriptor tmp;
		tmp._name = (*match)[1];
		getBases(tmp, match->str());
		result.push_back(tmp);
	}
	return result;
}
