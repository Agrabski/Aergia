#include "pch.h"
#include <algorithm>
#include "ClassContext.hpp"

using namespace Aergia::DataStructures;

std::string const& Aergia::DataStructures::ClassContext::getName() const noexcept
{
	return _name;
}

NamespaceContext* Aergia::DataStructures::ClassContext::getNamespace( std::string const& name )
{
	return nullptr;
}

MethodContext* Aergia::DataStructures::ClassContext::getMethod( std::string const& name )
{
	for (MethodContext& method : _methods)
		if (method.getName() == name)
			return &method;
	return nullptr;
}

ClassContext* Aergia::DataStructures::ClassContext::getClass( std::string const& name )
{
	for (auto& c : _internalClasses)
		if (c.getName() == name)
			return &c;
	return nullptr;
}

std::vector<IContext*>&& Aergia::DataStructures::ClassContext::getMembers( std::string const& name )
{
	std::vector<IContext*> result;

	result.push_back( getClass( name ) );
	result.push_back( getMethod( name ) );
	result.erase( std::remove( result.begin(), result.end(), nullptr ) );
	return std::move( result );
}

bool Aergia::DataStructures::ClassContext::appendMember( NamespaceContext&& newMember )
{
	return false;
}

bool Aergia::DataStructures::ClassContext::appendMember( MethodContext&& newMember )
{
	_methods.push_back( newMember );
	return true;
}

bool Aergia::DataStructures::ClassContext::appendMember( ClassContext&& newMember )
{
	_internalClasses.push_back( newMember );
	return true;
}

VariableContext* Aergia::DataStructures::ClassContext::getVariable( std::string const& name )
{
	for (auto& field : _fields)
		if (field.getName() == name)
			return &field;
	return nullptr;
}

bool Aergia::DataStructures::ClassContext::appendMember( VariableContext&& newMember )
{
	_fields.push_back( newMember );
	return false;
}
