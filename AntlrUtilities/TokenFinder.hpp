#pragma once
#include <Token.h>


namespace Aergia::Utilities
{
	using antlr4::Token;
	using antlr4::ParserRuleContext;

	class TokenFinder
	{
	public:
		static Token* findFollow( ParserRuleContext const* const production );
		static Token* findTokenBefore( ParserRuleContext const* const production );
	};
}