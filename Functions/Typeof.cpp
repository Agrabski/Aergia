#include "Typeof.hpp"
#include "InvalidArgumentCount.hpp"
#include "../DataStructures/Resolver.hpp"
#include "../DataStructures/ClassContext.hpp"
#include "../DataStructures/NamespaceContext.hpp"

using namespace Aergia::Functions;
vector<not_null<IContext*>> Aergia::Functions::typeof( vector<not_null<IContext*>>& current, not_null<IContext*> context, FunctionCall const& function )
{
	DataStructures::Resolver resolver;
	if (function.arguments().size() != 1)
		throw InvalidArgumentCountException( function,1,function.arguments().size() );
	vector<not_null<IContext*>> result;
	auto resolved = resolver.resolve<DataStructures::TypeContext>( context, function.arguments().front() );
	return { resolved };
}
