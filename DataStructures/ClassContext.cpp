#include "pch.h"
#include <algorithm>
#include "ClassContext.hpp"

using namespace Aergia::DataStructures;

std::vector<gsl::not_null<BaseClassContext*>> const& Aergia::DataStructures::TypeContext::getBases() const noexcept
{
	std::vector<gsl::not_null<BaseClassContext*>> result;
	for (auto& x : _bases)
		result.push_back( x.get() );
	return result;
}

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
	for (auto& method : _methods)
		if (method->getName() == name)
			return method.get();
	return nullptr;
}

TypeContext* Aergia::DataStructures::TypeContext::getClass( std::string const& name ) noexcept
{
	for (auto& c : _internalClasses)
		if (c->getName() == name)
			return c.get();
	return nullptr;
}

std::vector<gsl::not_null<IContext*>> Aergia::DataStructures::TypeContext::getMembers( std::string const& name )
{
	std::vector<gsl::not_null<IContext*>> result;

	auto c = getClass( name );
	if (c != nullptr)
		result.push_back( c );
	auto m = getMethod( name );
	if (m != nullptr)
		result.push_back( m );
	return std::move( result );
}

bool Aergia::DataStructures::TypeContext::appendMember( std::unique_ptr < NamespaceContext>&& newMember ) noexcept
{
	return false;
}

bool Aergia::DataStructures::TypeContext::appendMember( std::unique_ptr < MethodContext>&& newMember )
{
	_methods.push_back(std::move(newMember ));
	return true;
}

bool Aergia::DataStructures::TypeContext::appendMember( std::unique_ptr < TypeContext>&& newMember )
{
	_internalClasses.push_back( std::move(newMember ));
	return true;
}

VariableContext* Aergia::DataStructures::TypeContext::getVariable( std::string const& name ) noexcept
{
	for (auto& field : _fields)
		if (field->getName() == name)
			return field.get();
	return nullptr;
}

bool Aergia::DataStructures::TypeContext::appendMember( std::unique_ptr < VariableContext>&& newMember )
{
	_fields.push_back(std::move( newMember ));
	return true;
}
