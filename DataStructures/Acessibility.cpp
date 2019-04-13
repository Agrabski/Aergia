#include "stdafx.h"
#include <map>
#include "Acessibility.hpp"

Aergia::DataStructures::Accessibility Aergia::DataStructures::fromWstring(std::wstring const& str)
{
	auto copy = str;
	copy.erase(remove_if(copy.begin(), copy.end(), iswspace), copy.end());
	if (copy.empty())
		return Accessibility::Private;
	if (copy == L"public")
		return Accessibility::Public;
	if (copy == L"private")
		return Accessibility::Private;
	if (copy == L"protected")
		return Accessibility::Protected;
	throw std::exception("unexpected accessibility specifier");
}

std::wstring const& Aergia::DataStructures::toWstring(Accessibility a)
{
	static std::map<Accessibility, std::wstring> _map =
	{
		{Accessibility::None, L""},
		{Accessibility::Public, L"public"},
		{Accessibility::Private, L"private"},
		{Accessibility::Protected, L"protected"},
	};
	
	return _map[a];
}
