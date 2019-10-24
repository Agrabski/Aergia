#include "GetFields.hpp"
#include "../DataStructures/ClassContext.hpp"

Aergia::Functions::Variable Aergia::Functions::getFields(Variable& context)
{
	using IContextPtr = gsl::not_null<DataStructures::IContext*>;

	auto base = context.as<Variable::IContextPtr>();

	if (base == nullptr)
	{
		auto collection = context.as<std::vector<Variable::IContextPtr>>();
		if (!collection)
			throw std::exception();
		std::vector<Variable::IContextPtr> result;
		for (auto c : *collection)
		{
			auto type = dynamic_cast<DataStructures::TypeContext const*>(c.get());
			auto const bases = type->getMembersOfType<DataStructures::VariableContext>();
			for (auto const& x : bases)
				result.push_back(x);
		}
		return result;
	}
	else
	{
		auto type = dynamic_cast<DataStructures::TypeContext const*>(base->get());
		if (type == nullptr)
			throw std::exception();
		auto bases = type->getMembersOfType<DataStructures::VariableContext>();
		std::vector<Variable::IContextPtr> result;
		for (auto& x : bases)
			result.push_back(x);
		return result;
	}
}
