#include "GetBases.hpp"

Aergia::Functions::Variable Aergia::Functions::getBases(Variable& context)
{
	using IContextPtr = gsl::not_null<DataStructures::IContext const*>;

	auto base = context.as<Variable::IContextPtr>();

	if (base == nullptr)
	{
		auto collection = context.as<std::vector<IContextPtr>>();
		if (!collection)
			throw std::exception();
		std::vector<IContextPtr> result;
		for (auto c : *collection)
		{
			auto type = dynamic_cast<DataStructures::TypeContext const*>(c.get());
			auto const bases = type->getBases();
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
		auto bases = type->getBases();
		std::vector<IContextPtr> result;
		for (auto& x : bases)
			result.push_back(x);
		return result;
	}
}
