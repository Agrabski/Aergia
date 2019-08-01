#include "pch.h"
#include "MethodContext.hpp"

using namespace Aergia::DataStructures;

Aergia::DataStructures::MethodContext::MethodContext( std::string name, std::vector<VariableContext>&& variables, ClassContext* returnValue, IContext* parent, MemberAccessibility accessibility ) :
	_name( std::move( name ) ), _paramters( variables ), _returnValue( returnValue ), IContext( parent,accessibility )
{
}

Aergia::DataStructures::MethodContext::MethodContext( std::string name, IContext* parent, MemberAccessibility accessibility ) : _name( std::move( name ) ), IContext( parent, accessibility )
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

ClassContext* Aergia::DataStructures::MethodContext::getClass( std::string const& name )
{
	return nullptr;
}

std::vector<gsl::not_null<IContext*>> Aergia::DataStructures::MethodContext::getMembers( std::string const& name )
{
	std::vector<gsl::not_null<IContext*>> result;
	for (auto& parameter : _paramters)
		if (parameter.getName() == name)
			result.push_back( &parameter );
	return std::move( result );
}

bool Aergia::DataStructures::MethodContext::appendMember( NamespaceContext&& newMember )
{
	return false;
}

bool Aergia::DataStructures::MethodContext::appendMember( MethodContext&& newMember )
{
	return false;
}

bool Aergia::DataStructures::MethodContext::appendMember( ClassContext&& newMember )
{
	return false;
}

VariableContext* Aergia::DataStructures::MethodContext::getVariable( std::string const& name )
{
	for (auto& parameter : _paramters)
		if (parameter.getName() == name)
			return &parameter;
	return nullptr;
}

bool Aergia::DataStructures::MethodContext::appendMember( VariableContext&& newMember )
{
	return false;
}
