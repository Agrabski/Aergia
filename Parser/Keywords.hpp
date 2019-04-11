#pragma once
#include <utility>
#include <string>

namespace Aergia::Parser
{
	enum KeyWords
	{
		None,
		Foreach,
		Anonymous,
	};

	KeyWords recognizeKeyword(std::wstring const& source);
}