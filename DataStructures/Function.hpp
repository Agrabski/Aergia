#pragma once
#include "Property.hpp"
#include "Acessibility.hpp"
#include "AergiaString.hpp"

namespace Aergia
{
	namespace DataStructures
	{
		class Function
		{
			TypePointer _retrunType;
			std::vector<Property> _argumetns;
			AergiaString _name;
			TypePointer _parentClass;
			Accessibility _accessibility;
		};
	}
}
