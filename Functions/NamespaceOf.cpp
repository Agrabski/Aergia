#include "NamespaceOf.hpp"
#include "../DataStructures/Resolver.hpp"
#include "InvalidArgumentCount.hpp"
#include "../DataStructures/IContext.hpp"
#include "../DataStructures/NamespaceContext.hpp"

using namespace Aergia::Functions;
using namespace Aergia::DataStructures;

Variable NamespaceOf::operator()(Variable& current, gsl::not_null<IContext*> context, FunctionCall const& function)
{
	using namespace DataStructures;
	auto& resolver = Resolver::instance();
	if (function.arguments().size() != 1)
		throw InvalidArgumentCountException(function, 1U, function.arguments().size());
	std::vector<gsl::not_null<IContext*>> result;
	auto resolved = resolver.resolve<DataStructures::NamespaceContext>(context, function.arguments().front());
	return resolved;
}
