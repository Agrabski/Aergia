#pragma once
#include <string>
#include "Definitions.hpp"
#include "ClassContext.hpp"

namespace Aergia::DataStructures
{
	struct TypeAlias
	{
		std::string _alias;
		TypeContext* _type;
		MemberAccessibility _accessibility = MemberAccessibility::None;
	};
}