#include "stdafx.h"
#include "NullContext.hpp"

using namespace Aergia::DataStructures;

IObject* Aergia::DataStructures::Null::getMember(std::wstring) noexcept
{
	return this;
}

std::wstring Aergia::DataStructures::Null::toString()
{
	return toString();
}

std::wstring const& Aergia::DataStructures::Null::toString() const noexcept
{
	return _name;
}

IObject* Aergia::DataStructures::Null::getObject(std::wstring const& memberName) noexcept
{
	return this;
}

std::optional<std::vector<IObject*>> Aergia::DataStructures::Null::asCollection() const noexcept
{
	return std::optional<std::vector<IObject*>>();
}

void Aergia::DataStructures::Null::appendVariable(std::wstring name, IObject* link) noexcept
{
}

