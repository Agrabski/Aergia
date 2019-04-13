#pragma once
#include <string>
#include <vector>


namespace Aergia::Parser
{
	struct CallChainDescriptor
	{
		std::wstring _conent;
		size_t _positionInInputString;
		size_t _textLength;
		static std::vector<CallChainDescriptor> getCallChainDescriptors(std::wstring const& text);
	};
}