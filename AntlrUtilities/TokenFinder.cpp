#include "pch.h"
#include "..//Lexer/Antlr_include.hpp"
#include "TokenFinder.hpp"

antlr4::Token* Aergia::Utilities::TokenFinder::findFollow( ParserRuleContext const* const production )
{
	return ((ParserRuleContext*)production->parent)->stop;
}

antlr4::Token* Aergia::Utilities::TokenFinder::findTokenBefore( ParserRuleContext const* const production )
{
	return ((ParserRuleContext*)production->parent)->start;
}
