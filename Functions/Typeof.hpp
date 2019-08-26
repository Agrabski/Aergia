#pragma once
#include <vector>
#include <gsl.h>
#include "../DataStructures/IContext.hpp"
#include "FunctionCall.hpp"

namespace Aergia::Functions
{
	using std::vector;
	using gsl::not_null;
	using DataStructures::IContext;

	vector<not_null<IContext*>> typeof( vector<not_null<IContext*>>& current, not_null<IContext*>context, FunctionCall const& function );
}