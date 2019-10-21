#pragma once
#include <vector>
#include <gsl.h>
#include "../DataStructures/IContext.hpp"
#include "VariableProvider.hpp"
#include "FunctionCall.hpp"
#include "Variable.hpp"
#include "IFunction.hpp"

namespace Aergia::Functions
{
	using std::vector;
	using gsl::not_null;
	using DataStructures::IContext;
	class Valueof : public IFunction
	{
		static inline auto const _name = "valueof";
		static inline auto const _description = 
			"variable method, used to access value of member field. Use:\nvar.valueof(object)\nvar - variable to be accessed\nobject - parent";
		VariableProvider& _contextProvider;
	public:
		Valueof(VariableProvider& contextProvider) noexcept : 
			_contextProvider(contextProvider),
			IFunction(_name, _description) {}
		Variable operator()(Variable& current, not_null<IContext*>context, FunctionCall const& function) override;
	};
}