#pragma once
#include <string>
#include <regex>
#include "InParserClassDescriptor.hpp"


namespace Aergia::Parser
{
	class Parser
	{
		void getBases(InParserClassDescriptor&e, std::wstring const&iterator);
	public:
		std::vector<InParserClassDescriptor> parseClasses(std::wstring const& text);
	};
}