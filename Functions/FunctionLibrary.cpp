#include "FunctionLibrary.hpp"
using namespace Aergia::Functions;

Aergia::Functions::Variable Aergia::Functions::FunctionLibrary::resolveCall( Variable& current, not_null<IContext*> context, FunctionCall const& function )
{
	return _functions[function.name()]( current, context, function );
}
