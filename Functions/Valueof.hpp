#pragma once
#include <vector>
#include <gsl.h>
#include "../DataStructures/IContext.hpp"
#include "VariableProvider.hpp"
#include "FunctionCall.hpp"
#include "Variable.hpp"

namespace Aergia::Functions
{
	using std::vector;
	using gsl::not_null;
	using DataStructures::IContext;
	class Valueof
	{
		VariableProvider& _contextProvider;
	public:
		Valueof(VariableProvider& contextProvider) noexcept : _contextProvider(contextProvider) {}
		Variable operator()(Variable& current, not_null<IContext*>context, FunctionCall const& function);
	};
}