#include "Typeof.hpp"
#include "InvalidArgumentCount.hpp"
#include "Variable.hpp"
#include "../DataStructures/Resolver.hpp"
#include "../DataStructures/ClassContext.hpp"
#include "../DataStructures/NamespaceContext.hpp"

using namespace Aergia::Functions;

Variable Aergia::Functions::Typeof::operator()(Variable & current, gsl::not_null<DataStructures::IContext*> context, FunctionCall const & function)
{
	using namespace DataStructures;
	auto& resolver = Resolver::instance();
	if (function.arguments().size() != 1)
		throw InvalidArgumentCountException(function, 1U, function.arguments().size());
	std::vector<gsl::not_null<IContext*>> result;
	auto resolved = resolver.resolve<DataStructures::TypeContext>(context, function.arguments().front());
	return resolved;
}
