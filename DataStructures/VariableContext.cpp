#include "pch.h"
#include "VariableContext.hpp"

using namespace Aergia::DataStructures;

Aergia::DataStructures::VariableContext::VariableContext(std::string name, TypeContext* type, IContext* parent, MemberAccessibility accessibility, unsigned indirectionLevel) :
	_name(name), _type(type), IContext(parent, accessibility), _pointerIndirectionLevel(indirectionLevel)
{
}

TypeContext* Aergia::DataStructures::VariableContext::getType() noexcept
{
	return _type;
}

std::string const& Aergia::DataStructures::VariableContext::getName() const noexcept
{
	return _name;
}
