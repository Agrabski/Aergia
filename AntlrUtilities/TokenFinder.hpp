#pragma once
#include "..//Lexer/Antlr_include.hpp"

namespace Aergia::Utilities
{
	using antlr4::Token;
	using antlr4::ParserRuleContext;

	class TokenFinder
	{
	public:
		static Token* findFollow( ParserRuleContext const* const production ) noexcept;
		static Token* findTokenBefore( ParserRuleContext const* const production ) noexcept;
	};
}