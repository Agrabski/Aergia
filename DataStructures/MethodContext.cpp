#include "pch.h"
#include "MethodContext.hpp"

using namespace Aergia::DataStructures;

TypeContext* Aergia::DataStructures::MethodContext::returnValue() const noexcept
{
	return _returnValue;
}

Aergia::DataStructures::MethodContext::MethodContext( std::string name, IContext* parent, MemberAccessibility accessibility ) :
	_name( std::move( name ) ), IContext( parent, accessibility )
{
}

std::string const& Aergia::DataStructures::MethodContext::getName() const noexcept
{
	return _name;
}

