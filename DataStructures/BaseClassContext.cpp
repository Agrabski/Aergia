#include "pch.h"
#include "BaseClassContext.hpp"

Aergia::DataStructures::BaseClassContext::BaseClassContext( gsl::not_null< TypeContext*> parent, MemberAccessibility accessibility, gsl::not_null <TypeContext*> type ) :
	_type( type ), IContext( parent, accessibility )
{
}

std::string const& Aergia::DataStructures::BaseClassContext::getName() const noexcept
{
	return _type->getName();
}

