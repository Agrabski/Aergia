#include "AergiaExpressionVisitor.hpp"

antlrcpp::Any Aergia::Visitors::AergiaExpressionVisitor::visitAergiaexpression( AergiaCpp14Parser::AergiaexpressionContext* ctx )
{
	using gsl::not_null;
	assert( ctx != nullptr );
	auto expressionNode = ctx->callchain();
	if (expressionNode == nullptr)
		return antlrcpp::Any();
	not_null currentContext = _contextProvider.getContext();
	auto callChain = expressionNode->getText();
	auto result = _contextProvider.getResolver().resolveCallChain<std::string>( callChain, currentContext );
	ctx->children.clear();
	ctx->addChild( _contextProvider.createTerminalNode( _contextProvider.getTokenFactory().create( 0, *result ) ) );
	return antlrcpp::Any();
}
