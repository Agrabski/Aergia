#include "stdafx.h"
#include "IObject.hpp"
#include "NullContext.hpp"


Aergia::DataStructures::IObject* Aergia::DataStructures::IObject::nullContext() const
{
		static IObject* result = new Null();
		return result;
}
