#pragma once
#include "TypeInfo.hpp"
#include "AergiaString.hpp"

namespace Aergia
{
	namespace DataStructures
	{
		class TypeInfo;

		class Property
		{
			AergiaString _name;
			TypePointer _type;
		public:
			Property(AergiaString name, TypePointer type);
		};
	}
}
