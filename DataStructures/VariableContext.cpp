#include "pch.h"
#include "VariableContext.hpp"

using namespace Aergia::DataStructures;

Aergia::DataStructures::VariableContext::VariableContext( std::string name, ClassContext* type, IContext* parent, MemberAccessibility accessibility ) :
	_name( name ), _type( type ), IContext( parent, accessibility )
{
}

ClassContext* Aergia::DataStructures::VariableContext::getType()
{
	return _type;
}

std::string const& Aergia::DataStructures::VariableContext::getName() const noexcept
{
	return _name;
}

NamespaceContext* Aergia::DataStructures::VariableContext::getNamespace( std::string const& name )
{
	return nullptr;
}

MethodContext* Aergia::DataStructures::VariableContext::getMethod( std::string const& name )
{
	return nullptr;
}

ClassContext* Aergia::DataStructures::VariableContext::getClass( std::string const& name )
{
	return nullptr;
}

std::vector<IContext*>&& Aergia::DataStructures::VariableContext::getMembers( std::string const& name )
{
	return std::move( std::vector<IContext*>() );
}

bool Aergia::DataStructures::VariableContext::appendMember( NamespaceContext&& newMember )
{
	return false;
}

bool Aergia::DataStructures::VariableContext::appendMember( MethodContext&& newMember )
{
	return false;
}

bool Aergia::DataStructures::VariableContext::appendMember( ClassContext&& newMember )
{
	return false;
}

VariableContext* Aergia::DataStructures::VariableContext::getVariable( std::string const& name )
{
	return nullptr;
}

bool Aergia::DataStructures::VariableContext::appendMember( VariableContext&& newMember )
{
	return false;
}
