#include "pch.h"
#include "MethodContext.hpp"

using namespace Aergia::DataStructures;

TypeContext* Aergia::DataStructures::MethodContext::returnValue() const noexcept
{
	return _returnValue;
}

std::vector<std::unique_ptr<VariableContext>> const& Aergia::DataStructures::MethodContext::parameters() const noexcept
{
	return _paramters;
}

Aergia::DataStructures::MethodContext::MethodContext( std::string name, std::vector<std::unique_ptr<VariableContext>>&& variables, TypeContext* returnValue, IContext* parent, MemberAccessibility accessibility ) :
	_name( std::move( name ) ), _paramters( std::move( variables ) ), _returnValue( returnValue ), IContext( parent, accessibility )
{
}

std::string const& Aergia::DataStructures::MethodContext::getName() const noexcept
{
	return _name;
}

