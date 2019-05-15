#pragma once
#include <regex>

namespace Aergia::Parser
{
	struct ForeachDescriptor
	{
		size_t _positionInInputString;
		size_t _textLength;
		std::wstring _variableName;
		std::wstring _collectionCallChain;
		std::wstring _foreachBody;
		static std::vector<ForeachDescriptor> getForeachDescriptors(std::wstring const& text);
		unsigned _lineCount;
	};

}