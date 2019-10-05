#include "pch.h"
#include "VariableContext.hpp"

using namespace Aergia::DataStructures;

Aergia::DataStructures::VariableContext::VariableContext( std::string name, TypeContext* type, IContext* parent, MemberAccessibility accessibility ) :
	_name( name ), _type( type ), IContext( parent, accessibility )
{
}

TypeContext* Aergia::DataStructures::VariableContext::getType()
{
	return _type;
}

std::string const& Aergia::DataStructures::VariableContext::getName() const noexcept
{
	return _name;
}
