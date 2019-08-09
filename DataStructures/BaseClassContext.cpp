#include "pch.h"
#include "BaseClassContext.hpp"

Aergia::DataStructures::BaseClassContext::BaseClassContext( gsl::not_null< TypeContext*> parent, MemberAccessibility accessibility, gsl::not_null <TypeContext*> type ) :
	_parent( parent ), _accesibility( accessibility ), _type( type )
{
}

std::string const& Aergia::DataStructures::BaseClassContext::getName() const noexcept
{
	return _name;
}
