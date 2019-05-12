#include "stdafx.h"
#include <boost/regex.hpp>
#include "ForeachHeader.hpp"
#include "RegExLibrar.hpp"

using namespace Aergia::Parser;

std::vector<ForeachDescriptor> Aergia::Parser::ForeachDescriptor::getForeachDescriptors(std::wstring const& text)
{
	std::vector<ForeachDescriptor>result;
	std::wcmatch matches;
	static auto regex = boost::wregex(foreachRegex);

	for (auto match = boost::wsregex_iterator(text.begin(), text.end(), regex); match != boost::wsregex_iterator(); match++)
	{
		auto& m = *match;
		result.emplace_back();
		result.back()._variableName = std::wstring(m[1].first, m[1].second);
		result.back()._collectionCallChain = std::wstring( m[2].first, m[2].second );
		result.back()._foreachBody = m[4].matched ? std::wstring( m[4].first, m[4].second ) : std::wstring( m[3].first, m[3].second );
		result.back()._positionInInputString = match->position();
		result.back()._textLength = m[0].str().length();
		auto t1 = m[1].str();
		auto t2 = m[2].str();
		auto t3 = m[3].str();
		auto t4 = m[4].str();
		auto t5 = m[5].str();
		auto t6 = m[6].str();
	}
	return result;
}
