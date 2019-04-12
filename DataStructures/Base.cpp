#include "stdafx.h"
#include "Base.hpp"

using namespace Aergia::DataStructures;

Aergia::DataStructures::Base::Base(TypeInfo* type, Accessibility accessibility) : _type(type), _accessibility(accessibility)
{
}

IObject* Aergia::DataStructures::Base::getMember(std::wstring e) noexcept
{
	//todo: finish
	try
	{
		if (e == L"type")
			return _type;
	}
	catch(std::exception const&)
	{
		return Null::get();
	}
	return nullptr;
}

std::wstring const& Aergia::DataStructures::Base::toString() const noexcept
{
	return _type->toString();
}

std::optional<std::vector<IObject*>> Aergia::DataStructures::Base::asCollection() const noexcept
{
	return std::optional<std::vector<IObject*>>();
}
