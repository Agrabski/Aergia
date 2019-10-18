#include "GetAccessibility.hpp"

using namespace Aergia::Functions;

Variable Aergia::Functions::getAccessibility(Variable& context)
{
	auto c = context.as<Variable::IContextPtr>();
	if (c)
		return (*c)->accessibility();
	return DataStructures::MemberAccessibility::None;
}
