#include "pch.h"
#include <algorithm>
#include "ClassContext.hpp"

using namespace Aergia::DataStructures;

std::vector<gsl::not_null<BaseClassContext*>> const& Aergia::DataStructures::TypeContext::getBases() const noexcept
{
	std::vector<gsl::not_null<BaseClassContext*>> result;
	for (auto& x : _bases)
		result.push_back( x.get() );
	return result;
}

std::string const& Aergia::DataStructures::TypeContext::getName() const noexcept
{
	return _name;
}
