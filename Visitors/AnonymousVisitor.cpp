#include <algorithm>
#include "AnonymousVisitor.hpp"
#include "..//AntlrUtilities/TokenFinder.hpp"

std::string Aergia::Visitors::AnonymousVisitor::getVariableName( size_t lineNumber ) const
{
	using namespace std::literals;

	return "__anonymous__"s + std::to_string( lineNumber);
}

std::string Aergia::Visitors::AnonymousVisitor::formatAssigment( std::string const& variableName, std::string const& value )
{
	using namespace std::literals;
	return "auto "s + variableName + " = "s + value + ';';
}

void Aergia::Visitors::AnonymousVisitor::enterAnonymousExpression( AergiaCpp14Parser::AnonymousExpressionContext* context )
{
	using Utilities::TokenFinder;
	auto content = context->anoynmousBody()->getText();
	auto before = TokenFinder::findTokenBefore( (antlr4::ParserRuleContext*) context->parent );
	auto follow = TokenFinder::findFollow( (antlr4::ParserRuleContext*)context->parent );

	_rewrites.push_back( AnonymousRewriteData( before, follow, content, getVariableName( context->start->getLine() ) ) );
}

void Aergia::Visitors::AnonymousVisitor::setupRewriter( antlr4::TokenStreamRewriter& rewriter ) const
{
	for (auto const& rewrite : _rewrites)
	{
		rewriter.replace( rewrite._before, rewrite._after, formatAssigment( rewrite._variableName, rewrite._body ) );
	}
}
