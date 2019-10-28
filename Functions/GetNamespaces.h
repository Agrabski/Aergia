#pragma once
#include "IAccessor.hpp"

namespace Aergia::Functions
{
	class GetNamespaces : public IAccessor
	{
	public:
		// Inherited via IAccessor
		Variable operator()(Variable& context) final;
	};
}