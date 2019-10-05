#include "pch.h"
#include "MemberAccessibility.hpp"
#include <map>

Aergia::DataStructures::MemberAccessibility Aergia::DataStructures::parse( std::string const& text )
{
	using namespace std::literals;
	static std::map<std::string, MemberAccessibility> accessibilityMap
	{
		{"public"s, MemberAccessibility::Public},
		{"private"s, MemberAccessibility::Private},
		{"protected"s, MemberAccessibility::Protected},
		{""s, MemberAccessibility::Private},
	};
	auto result = accessibilityMap.find( text );
	return result != accessibilityMap.end() ? result->second : MemberAccessibility::None;
}
