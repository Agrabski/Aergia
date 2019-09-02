#pragma once
#include <vector>
#include <gsl.h>
#include "../DataStructures/IContext.hpp"
#include "FunctionCall.hpp"
#include "Variable.hpp"

namespace Aergia::Functions
{
	using std::vector;
	using gsl::not_null;
	using DataStructures::IContext;

	Variable typeof( Variable& current, not_null<IContext*>context, FunctionCall const& function );
}