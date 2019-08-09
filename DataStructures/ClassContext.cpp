#include "pch.h"
#include <algorithm>
#include "ClassContext.hpp"

using namespace Aergia::DataStructures;

std::string const& Aergia::DataStructures::TypeContext::getName() const noexcept
{
	return _name;
}

NamespaceContext* Aergia::DataStructures::TypeContext::getNamespace( std::string const& name ) noexcept
{
	return nullptr;
}

MethodContext* Aergia::DataStructures::TypeContext::getMethod( std::string const& name ) noexcept
{
	for (MethodContext& method : _methods)
		if (method.getName() == name)
			return &method;
	return nullptr;
}

TypeContext* Aergia::DataStructures::TypeContext::getClass( std::string const& name ) noexcept
{
	for (auto& c : _internalClasses)
		if (c.getName() == name)
			return &c;
	return nullptr;
}

std::vector<gsl::not_null<IContext*>> Aergia::DataStructures::TypeContext::getMembers( std::string const& name )
{
	std::vector<gsl::not_null<IContext*>> result;

	result.push_back( getClass( name ) );
	result.push_back( getMethod( name ) );
	result.erase( std::remove( result.begin(), result.end(), nullptr ) );
	return std::move( result );
}

bool Aergia::DataStructures::TypeContext::appendMember( NamespaceContext&& newMember ) noexcept
{
	return false;
}

bool Aergia::DataStructures::TypeContext::appendMember( MethodContext&& newMember )
{
	_methods.push_back( newMember );
	return true;
}

bool Aergia::DataStructures::TypeContext::appendMember( TypeContext&& newMember )
{
	_internalClasses.push_back( newMember );
	return true;
}

VariableContext* Aergia::DataStructures::TypeContext::getVariable( std::string const& name ) noexcept
{
	for (auto& field : _fields)
		if (field.getName() == name)
			return &field;
	return nullptr;
}

bool Aergia::DataStructures::TypeContext::appendMember( VariableContext&& newMember )
{
	_fields.push_back( newMember );
	return false;
}
