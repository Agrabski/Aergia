#include "pch.h"
#include <algorithm>
#include "ClassContext.hpp"


std::vector<gsl::not_null<Aergia::DataStructures::BaseClassContext*>> const Aergia::DataStructures::TypeContext::getBases()
{
	return getMembersOfType<BaseClassContext>();
}

std::string const& Aergia::DataStructures::TypeContext::getName() const noexcept
{
	return _name;
}
