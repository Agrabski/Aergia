#include "stdafx.h"
#include "Acessibility.hpp"

using namespace Aergia::DataStructures;
Accessibility fromWstring(std::wstring const & str)
{
	if(str.empty())
		return Accessibility::Private;
	if (str == L"public")
		return Accessibility::Public;
	if (str == L"private")
		return Accessibility::Private;
	if (str == L"protected")
		return Accessibility::Protected;
	throw std::runtime_error("unexpected accessibility specifier");
}
