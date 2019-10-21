#pragma once
#include "Variable.hpp"

namespace Aergia::Functions
{
	class IAccessor
	{
	public:
		virtual Variable operator()(Variable& context) = 0;
	};
}