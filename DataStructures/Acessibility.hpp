#pragma once
#include <string>

namespace Aergia
{
	namespace DataStructures
	{
		enum class Accessibility
		{
			None, Public, Private, Protected
		};
		Accessibility fromWstring(std::wstring const&str);
	}
}