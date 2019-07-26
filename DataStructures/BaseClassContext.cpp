#include "pch.h"
#include "BaseClassContext.hpp"

Aergia::DataStructures::BaseClassContext::BaseClassContext( ClassContext* parent, MemberAccessibility accessibility, ClassContext* type ) : 
	IContext( static_cast<IContext*>(parent), accessibility ), _type( type )
{
}

std::string const& Aergia::DataStructures::BaseClassContext::getName() const noexcept
{
	return _name;
}
