#pragma once
#include <regex>

namespace Aergia::Parser
{
	std::wstring classRegex = L"class[\\s]+[a-zA-Z_][a-zA-Z0-9_]*[\\s]*\\{.*\\}.*;";
}