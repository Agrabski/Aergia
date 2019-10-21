#pragma once
#include <vector>
#include <gsl.h>
#include "../DataStructures/IContext.hpp"
#include "FunctionCall.hpp"
#include "Variable.hpp"
#include "IFunction.hpp"

namespace Aergia::Functions
{
	class Typeof : public IFunction
	{
		static inline auto const _name = "typeof";
		static inline auto const _description =
			"function, returns structure describing the type. Use:\ntypeof(A)\nA - type name.";
	public:
		Typeof() noexcept :
			IFunction(_name, _description) {}
		Variable operator()(Variable& current, gsl::not_null<DataStructures::IContext*>context, FunctionCall const& function) override;
	};
}