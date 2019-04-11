#include "stdafx.h"
#include "Keywords.hpp"
#include <regex>
#include "RegExLibrar.hpp"

using namespace Aergia::Parser;

KeyWords Aergia::Parser::recognizeKeyword(std::wstring const& source)
{
	if (std::regex_match(source, std::wregex(foreachRegex)))
		return Foreach;
	if (std::regex_match(source, std::wregex(anoymousRegex)))
		return Anonymous;
	return None;
}
