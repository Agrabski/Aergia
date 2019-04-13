#pragma once
#include <string>
#include <exception>
#include <algorithm>


namespace Aergia
{
	namespace DataStructures
	{
		enum class Accessibility
		{
			None, Public, Private, Protected
		};

		Accessibility fromWstring(std::wstring const& str);
		std::wstring const& toWstring(Accessibility a);
	}
}