#include "Typeof.hpp"
#include "InvalidArgumentCount.hpp"
#include "Variable.hpp"
#include "../DataStructures/Resolver.hpp"
#include "../DataStructures/ClassContext.hpp"
#include "../DataStructures/NamespaceContext.hpp"

using namespace Aergia::Functions;
Aergia::Functions::Variable Aergia::Functions::typeof( Aergia::Functions::Variable& current, not_null<IContext*> context, FunctionCall const& function )
{
	DataStructures::Resolver resolver;
	if (function.arguments().size() != 1)
		throw InvalidArgumentCountException( function,1U,function.arguments().size() );
	vector<not_null<IContext*>> result;
	auto resolved = resolver.resolve<DataStructures::TypeContext>( context, function.arguments().front() );
	return resolved;
}
