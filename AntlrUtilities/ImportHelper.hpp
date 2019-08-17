#pragma once
#include <string>
#include "../Lexer/AergiaCpp14Parser.h"


namespace Aergia::Utilities
{
	class ImportHelper
	{
	public:
		static std::string getQualifiedName( AergiaCpp14Parser::UsingdirectiveContext* context );
	};
}