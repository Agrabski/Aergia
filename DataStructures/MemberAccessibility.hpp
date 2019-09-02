#pragma once
#include <string>

namespace Aergia::DataStructures
{
	enum class MemberAccessibility { Public, Protected, Private, None };

	MemberAccessibility parse( std::string const& );
}