#include "Valueof.hpp"
#include "InvalidArgumentCount.hpp"
#include "../DataStructures/VariableContext.hpp"
#include "../DataStructures/NamespaceContext.hpp"
#include "../DataStructures/Resolver.hpp"
#include "AccessorException.hpp"
#include "InvalidTargetException.hpp"

namespace Aergia::Functions
{

	std::string formatAssigment(gsl::not_null<DataStructures::VariableContext*> var, gsl::not_null<DataStructures::VariableContext*> parent)
	{
		auto parentIndirectionLevel = parent->pointerIndirectionLevel();
		auto indirectionLevel = var->pointerIndirectionLevel();
		std::string result;

		if (indirectionLevel != 0U)
			for (unsigned i = 1; i < indirectionLevel; ++i)
				result += "*";


		if (parentIndirectionLevel == 0U)
			result += parent->getName() + ".";
		else
		{
			result += '(';
			for (auto i = 1U; i < parentIndirectionLevel; ++i)
				result += '*';
			result += parent->getName() + ")->";
		}
		result += var->getName();
		return result;
	}

	Variable Valueof::operator()(Variable& current, not_null<IContext*> context, FunctionCall const& function)
	{
		using namespace DataStructures;
		if (function.arguments().size() != 1)
			throw InvalidArgumentCountException(function, 1U, function.arguments().size());
		auto const value = current.as<Variable::IContextPtr>();
		if (!value)
			throw InvalidTargetException(current, "valueof", "variable", "");
		auto const variable = dynamic_cast<DataStructures::VariableContext*>(value->get());
		if (variable == nullptr)
			throw InvalidTargetException(current, "valueof", "variable", "");
		auto parent = DataStructures::Resolver::instance().resolve<DataStructures::VariableContext>(context, function.arguments().front());
		if (parent == nullptr)
			parent = _contextProvider.getVariable(function.arguments().front());
		return formatAssigment(variable, parent);
	}
}