#include "Valueof.hpp"
#include "InvalidArgumentCount.hpp"
#include "../DataStructures/VariableContext.hpp"
#include "AccessorException.hpp"
#include "InvalidTargetException.hpp"

namespace Aergia::Functions
{

	std::string formatAssigment(gsl::not_null<DataStructures::VariableContext*> var, std::string const& parentName)
	{
		auto indirectionLevel = var->pointerIndirectionLevel();
		if (indirectionLevel == 0U)
			return parentName + "." + var->getName();
		std::string result{"("};
		for (unsigned i = 1; i < indirectionLevel; ++i)
			result += "*";
		result += ")->" + var->getName();
		return result;
	}

	Variable Aergia::Functions::valueof(Variable& current, not_null<IContext*> context, FunctionCall const& function)
	{
		using namespace DataStructures;
		if (function.arguments().size() != 1)
			throw InvalidArgumentCountException(function, 1U, function.arguments().size());
		auto const value = current.as<Variable::IContextPtr>();
		if (!value)
			throw InvalidTargetException(current,"valueof", "variable","");
		auto const variable = dynamic_cast<DataStructures::VariableContext*>(value->get());
		if (variable == nullptr)
			throw InvalidTargetException(current, "valueof", "variable", "");

		return formatAssigment(variable, function.arguments().front());
	}
}