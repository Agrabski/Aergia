#pragma once
#include <string>
#include <vector>
#include "../DataStructures/Acessibility.hpp"

namespace Aergia::Parser
{
	using DataStructures::Accessibility;

	struct InParserClassDescriptor
	{
		std::vector<std::pair<Accessibility, std::wstring>> bases;
		std::vector < std::pair<Accessibility, std::pair<std::wstring, std::wstring>>> _fields;
	};
}