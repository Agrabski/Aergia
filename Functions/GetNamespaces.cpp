#include "GetNamespaces.h"
#include "InvalidTargetException.hpp"
#include "../DataStructures/NamespaceContext.hpp"

Aergia::Functions::Variable Aergia::Functions::GetNamespaces::operator()(Variable& context)
{
	auto const c = context.as<Variable::IContextPtr>();
	if (c)
	{
		auto const ns = dynamic_cast<DataStructures::NamespaceContext const*>(c->get());
		if (ns == nullptr)
			throw InvalidTargetException(context, "namespaces", "namespace", "");
		Variable::ContextCollection result;
		for(auto x : ns->getMembersOfType<DataStructures::NamespaceContext>())
			result.push_back(x);
		return result;
	}
	else
	{
		auto collection = context.as<Variable::ContextCollection>();
		if (collection)
		{
			std::vector<Variable::IContextPtr> result;
			for (auto e : *collection)
				for (auto n : dynamic_cast<DataStructures::NamespaceContext const*> (e.get())->getMembersOfType<DataStructures::NamespaceContext>())
					result.push_back(n);
			return result;
		}
	}
	throw InvalidTargetException(context, "namespaces", "namespace", "");
}
