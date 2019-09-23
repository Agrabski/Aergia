#include <algorithm>
#include "AnonymousVisitor.hpp"
#include "..//AntlrUtilities/TokenFinder.hpp"

std::string Aergia::Visitors::AnonymousVisitor::getVariableName( size_t lineNumber ) const
{
	using namespace std::literals;

	return "__anonymous__"s + std::to_string( lineNumber );
}

std::string Aergia::Visitors::AnonymousVisitor::formatAssigment( std::string const& variableName, std::string const& value )
{
	using namespace std::literals;
	return "auto "s + variableName + " = "s + value + ';';
}

antlrcpp::Any Aergia::Visitors::AnonymousVisitor::visitAnonymousExpression( AergiaCpp14Parser::AnonymousExpressionContext* context )
{
	assert( context != nullptr );
	using Utilities::TokenFinder;
	auto content = context->anoynmousBody()->getText();
	auto before = TokenFinder::findTokenBefore( (antlr4::ParserRuleContext*) context->parent );
	auto follow = TokenFinder::findFollow( (antlr4::ParserRuleContext*)context->parent );

	_rewrites.push_back( { before, follow, formatAssigment( content, getVariableName( context->start->getLine() ) ) } );
	return antlrcpp::Any();
}
