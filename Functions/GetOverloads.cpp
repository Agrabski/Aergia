#include "GetOverloads.hpp"
#include "../DataStructures/MethodContext.hpp"

using namespace Aergia::Functions;

Variable Aergia::Functions::GetOverloads::operator()(Variable& context)
{
	auto method = context.asContext<DataStructures::MethodContext>();
	if (!method)
		return Variable();
	return &(*method)->overloads();

}
