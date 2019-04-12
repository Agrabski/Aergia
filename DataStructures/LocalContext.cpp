#include "stdafx.h"
#include <algorithm>
#include "LocalContext.hpp"

using namespace Aergia::DataStructures;

Aergia::DataStructures::LocalContext::LocalContext(IContext* parentContext) : _parentContext(parentContext)
{
}

std::wstring LocalContext::toString() noexcept
{
	// TODO: add warning
	return std::wstring();
}

IObject* Aergia::DataStructures::LocalContext::getObject(std::wstring const& memberName) noexcept
{
	auto tmp = std::find_if(_localVariables.begin(), _localVariables.end(), [&](auto const& e) {return e.first == memberName; });
	if (tmp == _localVariables.end())
	{
		return _parentContext->getObject(memberName);
	}
	else
		return tmp->second;
}

void Aergia::DataStructures::LocalContext::appendVariable(std::wstring name, IObject* link)
{
	_localVariables.emplace_back(name, link);
}
