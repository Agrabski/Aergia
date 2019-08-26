#include "FunctionLibrary.hpp"
using namespace Aergia::Functions;

vector<not_null<IContext*>> Aergia::Functions::FunctionLibrary::resolveCall( vector<not_null<IContext*>>& current, not_null<IContext*> context, FunctionCall const& function )
{
	return _functions[function.name()]( current, context, function );
}
