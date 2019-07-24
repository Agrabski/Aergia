#pragma once
#include <string>
#include "..//Lexer/AergiaCpp14Parser.h"


namespace Aergia::Utilities
{
	class NameExtractor
	{
	public:
		static std::string& getName( AergiaCpp14Parser::NamespacedefinitionContext* context );
	};
}