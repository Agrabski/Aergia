#include "stdafx.h"
#include "Property.hpp"

using namespace Aergia::DataStructures;

Aergia::DataStructures::Property::Property(std::wstring const& name, TypeInfo* type, Accessibility access) : _name(name), _type(type), _accessibility(access)
{
}

IObject* Aergia::DataStructures::Property::getMember(std::wstring es) noexcept
{
	try
	{
		if (es == L"type")
			return _type;
		// TODO: finish
	}
	catch (std::exception const&)
	{
		return Null::get();
	}
}

std::wstring const& Aergia::DataStructures::Property::toString() const noexcept
{
	return _name;
}

std::optional<std::vector<IObject*>> Aergia::DataStructures::Property::asCollection() const noexcept
{
	return std::optional<std::vector<IObject*>>();
}
