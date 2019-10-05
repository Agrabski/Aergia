#include "AergiaExpressionVisitor.hpp"

antlrcpp::Any Aergia::Visitors::AergiaExpressionVisitor::visitAergiaExpression_type_target(AergiaCpp14Parser::AergiaExpression_type_targetContext* ctx)
{
	using gsl::not_null;
	assert(ctx != nullptr);
	auto expressionNode = ctx->aergiaexpression()->callchain();
	if (expressionNode == nullptr)
		return antlrcpp::Any();
	not_null currentContext = _contextProvider.getContext();
	auto callChain = expressionNode->getText();
	auto result = _contextProvider.getResolver().resolveCallChain<Functions::Variable::IContextPtr>(callChain, currentContext);
	if (result)
	{
		auto const type = *result;
		ctx->children.clear();
		ctx->addChild(_contextProvider.createTerminalNode(_contextProvider.getTokenFactory().create(0, type->getName())));
	}
	return antlrcpp::Any();
}

antlrcpp::Any Aergia::Visitors::AergiaExpressionVisitor::visitAergiaExpression_value_target(AergiaCpp14Parser::AergiaExpression_value_targetContext* ctx)
{
	using gsl::not_null;
	assert(ctx != nullptr);
	auto expressionNode = ctx->aergiaexpression()->callchain();
	if (expressionNode == nullptr)
		return antlrcpp::Any();
	not_null currentContext = _contextProvider.getContext();
	auto callChain = expressionNode->getText();
	auto result = _contextProvider.getResolver().resolveCallChain<std::string>(callChain, currentContext);
	ctx->children.clear();
	ctx->addChild(_contextProvider.createTerminalNode(_contextProvider.getTokenFactory().create(0, *result)));
	return antlrcpp::Any();
}

antlrcpp::Any Aergia::Visitors::AergiaExpressionVisitor::visitAergiaExpression_identifier_target(AergiaCpp14Parser::AergiaExpression_identifier_targetContext* ctx)
{
	return antlrcpp::Any();
}
