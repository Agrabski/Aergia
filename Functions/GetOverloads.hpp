#pragma once
#include "IAccessor.hpp"


namespace Aergia::Functions
{
	class GetOverloads : public IAccessor
	{
	public:
		// Inherited via IAccessor
		Variable operator()(Variable& context) override;
	};
}