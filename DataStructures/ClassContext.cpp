#include "pch.h"
#include <algorithm>
#include "ClassContext.hpp"

using namespace Aergia::DataStructures;

std::vector<gsl::not_null<BaseClassContext*>> const Aergia::DataStructures::TypeContext::getBases()
{
	return getMembersOfType<BaseClassContext>();
}

std::string const& Aergia::DataStructures::TypeContext::getName() const noexcept
{
	return _name;
}
