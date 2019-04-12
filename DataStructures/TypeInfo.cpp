#include "stdafx.h"
#include "TypeInfo.hpp"

Aergia::DataStructures::IObject* Aergia::DataStructures::TypeInfo::getMember(std::wstring e) noexcept
{
	try
	{
		if (e == L"properties")
			return &_properties;
		if (e == L"bases")
			return &_bases;
	}
	catch (std::exception const&)
	{
		// todo: warn
	}
	return Null::get();
}

std::wstring const& Aergia::DataStructures::TypeInfo::toString() const noexcept
{
	return _name;
}

std::optional<std::vector<Aergia::DataStructures::IObject*>> Aergia::DataStructures::TypeInfo::asCollection() const noexcept
{
	return std::optional<std::vector<IObject*>>();
}
