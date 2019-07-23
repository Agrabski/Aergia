#pragma once
#include "..//Lexer/AergiaCpp14BaseListener.h"
#include "BaseVisitor.hpp"
#include <TokenStreamRewriter.h>

namespace Aergia::Visitors
{
	using antlr4::Token;
	class AnonymousVisitor : public BaseVisitor
	{
		struct AnonymousRewriteData
		{
			AnonymousRewriteData( Token* before, Token* follow, std::string const& body, std::string const& name ) :
				_before( before ), _after( follow ), _body( body ), _variableName( name ) {}
			Token* _before;
			Token* _after;
			std::string _body;
			std::string _variableName;
		};

		std::vector<AnonymousRewriteData> _rewrites;
		std::string getVariableName( size_t lineNumber ) const;
		static std::string formatAssigment( std::string const& variableName, std::string const& value );
	public:
		void enterAnonymousExpression( AergiaCpp14Parser::AnonymousExpressionContext* context ) override;
		void setupRewriter( antlr4::TokenStreamRewriter& const rewriter )const;
	};
}