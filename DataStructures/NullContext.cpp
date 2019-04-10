#include "stdafx.h"
#include "NullContext.hpp"

using namespace Aergia::DataStructures;

std::wstring NullContext::toString()
{
	return L"Null";
}

IContext* Aergia::DataStructures::NullContext::changeContext(std::wstring const& memberName) noexcept
{
	return this;
}

std::vector<IContext*> Aergia::DataStructures::NullContext::getCollection(std::wstring const& memberName) noexcept
{
	return std::vector<IContext*>();
}

void Aergia::DataStructures::NullContext::appendVariable(std::wstring name, IContext* link) noexcept
{
}
