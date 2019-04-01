#pragma once
#include "Collection.hpp"
#include "Property.hpp"
#include "AergiaString.hpp"

namespace Aergia
{
	namespace DataStructures
	{
		class TypeInfo;
		using TypePointer = TypeInfo*;
		class Property;
		class TypeInfo
		{
			Collection<Property> _properties;
			AergiaString _name;
			Collection<TypePointer> _bases;
		};
	}
}