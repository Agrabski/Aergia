#pragma once
#include "Property.hpp"
#include "AergiaString.hpp"
#include "IContext.hpp"

namespace Aergia
{
	namespace DataStructures
	{
		class TypeInfo;
		using TypePointer = TypeInfo*;
		class Property;
		class TypeInfo : public IContext
		{
			std::vector<Property> _properties;
			AergiaString _name;
			std::vector<TypePointer> _bases;
		};
	}
}