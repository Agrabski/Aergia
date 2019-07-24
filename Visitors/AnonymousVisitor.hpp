#pragma once
#include "..//Lexer/AergiaCpp14BaseListener.h"
#include "BaseVisitor.hpp"
#include <TokenStreamRewriter.h>

namespace Aergia::Visitors
{
	using antlr4::Token;
	class AnonymousVisitor : public BaseVisitor
	{

		std::vector<Rewrite> _rewrites;
		std::string getVariableName( size_t lineNumber ) const;
		static std::string formatAssigment( std::string const& variableName, std::string const& value );
	public:
		antlrcpp::Any visitAnonymousExpression( AergiaCpp14Parser::AnonymousExpressionContext* context ) override;
		std::vector<Rewrite> const& getRewrites() const override;
	};
}