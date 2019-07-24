#pragma once
#include <TokenStreamRewriter.h>
#include "Rewrite.hpp"
#include "..//Lexer/AergiaCpp14BaseListener.h"
#include "..//Lexer/AergiaCpp14BaseVisitor.h"

namespace Aergia::Visitors
{
	class BaseVisitor : public AergiaCpp14BaseVisitor
	{
	public:
		virtual std::vector<Rewrite> const& getRewrites() const = 0;

		antlrcpp::Any visitAergiaexpression( AergiaCpp14Parser::AergiaexpressionContext* ctx ) override { return antlrcpp::Any(); }
	};
}