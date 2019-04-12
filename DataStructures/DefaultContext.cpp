#include "stdafx.h"
#include <algorithm>
#include "DefaultContext.hpp"
#include "NullContext.hpp"

std::wstring Aergia::DataStructures::DefaultContext::toString()
{
	return std::wstring();
}

Aergia::DataStructures::IObject* Aergia::DataStructures::DefaultContext::getObject(std::wstring const& memberName)
{
	auto tmp = std::find_if(types.begin(), types.end(), [&](std::unique_ptr<TypeInfo> const& e) {return e->toString() == memberName; });
	if (tmp == types.end())
		return Null::get();
	return tmp->get();
}

void Aergia::DataStructures::DefaultContext::appendVariable(std::wstring name, IObject* link)
{
	_variables.emplace_back(name, link);
}

void Aergia::DataStructures::DefaultContext::appendType(std::unique_ptr<TypeInfo>&& type)
{
	types.push_back(std::move(type));
}
