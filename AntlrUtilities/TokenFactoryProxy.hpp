#pragma once
#include "../antlr/src/antlr4-common.h"
#include "../Lexer/AergiaCpp14Lexer.h"

namespace Aergia::Utilities
{
	class TokenFactoryProxy
	{
		antlr4::BufferedTokenStream& _stream;
		AergiaCpp14Lexer& _lexer;
	public:
		TokenFactoryProxy(AergiaCpp14Lexer&lexer, antlr4::BufferedTokenStream&stream) noexcept;

		antlr4::Token* create( size_t type, std::string text );
	};
}