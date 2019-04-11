#pragma once
#include <string>
#include "RegExLibrar.hpp"

namespace Aergia::Parser
{
	struct AnonymousDescriptor
	{
		std::wstring _conent;
		size_t _positionInInputString;
		size_t _textLength;
		static std::vector<AnonymousDescriptor> getAnonymousDescriptors(std::wstring const& text);
	};
}