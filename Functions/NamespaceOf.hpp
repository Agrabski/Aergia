#pragma once
#include "IFunction.hpp"

namespace Aergia::Functions
{
	class NamespaceOf : public IFunction
	{
		static inline auto const _name = "namespaceof";
		static inline auto const _description =
			"function, returns structure describing the namespace. Use:\nnamespaceof(A)\nA - namespace name.";
	public:
		constexpr NamespaceOf() noexcept : IFunction(_name, _description) {}
		// Inherited via IFunction
		Variable operator()(Variable& current, gsl::not_null<DataStructures::IContext*> context, FunctionCall const& function) final;
	};
}