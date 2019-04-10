#include "stdafx.h"
#include <algorithm>
#include "LocalContext.hpp"

using namespace Aergia::DataStructures;

std::wstring LocalContext::toString() noexcept
{
	// TODO: add warning
	return std::wstring();
}

IContext* Aergia::DataStructures::LocalContext::changeContext(std::wstring const& memberName)
{
	auto tmp = std::find_if(_localVariables.begin(), _localVariables.end(), [&](auto const& e) {return e.first == memberName; });
	if (tmp == _localVariables.end())
	{
		return _parentContext->changeContext(memberName);
	}
	else
		return tmp->second;
}

std::vector<IContext*> Aergia::DataStructures::LocalContext::getCollection(std::wstring const& memberName) noexcept
{
	// TODO: add warning
	return std::vector<IContext*>();
}

void Aergia::DataStructures::LocalContext::appendVariable(std::wstring name, IContext* link)
{
	_localVariables.emplace_back(name, link);
}
