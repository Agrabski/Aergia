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

NamespaceContext* Aergia::DataStructures::MethodContext::getNamespace( std::string const& name )
{
	return nullptr;
}

MethodContext* Aergia::DataStructures::MethodContext::getMethod( std::string const& name )
{
	return nullptr;
}

TypeContext* Aergia::DataStructures::MethodContext::getClass( std::string const& name )
{
	return nullptr;
}

std::vector<gsl::not_null<IContext*>> Aergia::DataStructures::MethodContext::getMembers( std::string const& name )
{
	std::vector<gsl::not_null<IContext*>> result;
	for (auto& parameter : _paramters)
		if (parameter->getName() == name)
			result.push_back( parameter.get() );
	return std::move( result );
}

VariableContext* Aergia::DataStructures::MethodContext::getVariable( std::string const& name )
{
	for (auto& parameter : _paramters)
		if (parameter->getName() == name)
			return parameter.get();
	return nullptr;
}

bool Aergia::DataStructures::MethodContext::appendMember( std::unique_ptr<VariableContext>&& newMember )
{
	return false;
}

