#pragma once
#include "..//Lexer/Antlr_include.hpp"
#include "Rewrite.hpp"

namespace Aergia::Visitors
{
	class BaseVisitor : public AergiaCpp14BaseVisitor
	{
	public:

		antlrcpp::Any visitAergiaexpression( AergiaCpp14Parser::AergiaexpressionContext* ctx ) override { return antlrcpp::Any(); }

		antlrcpp::Any visitChildren( antlr4::tree::ParseTree* node ) override { return antlrcpp::Any(); }
	};
}