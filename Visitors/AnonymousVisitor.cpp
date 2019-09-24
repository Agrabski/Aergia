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
	using gsl::not_null;
	using Utilities::TokenFinder;
	auto const content = context->anoynmousBody()->getText();

	auto const assigment = formatAssigment( content, getVariableName( context->start->getLine() ) );

	context->children.clear();
	context->addChild( _contextProvider.createTerminalNode( _contextProvider.getTokenFactory().create( 0, assigment ) ) );

	return antlrcpp::Any();
}
