#pragma once
#include "Variable.hpp"
#include "FunctionCall.hpp"
#include "../DataStructures/IContext.hpp"


namespace Aergia::Functions
{
	class IFunction
	{
		std::string_view _name;
		std::string_view _description;
	protected:
		IFunction(std::string_view name, std::string_view description) noexcept :
			_name(std::move(name)), _description(std::move(description)) {}
	public:
		virtual void operator()(Variable& current, gsl::not_null<DataStructures::IContext*>context, FunctionCall const& function) = 0;
		std::string_view const name() const noexcept { return _name; }
		std::string_view const description() const noexcept { return _description; }

	};
}