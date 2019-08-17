#include <algorithm>
#include "ForeachVisitor.hpp"
#include "../DataStructures/IContext.hpp"

void Aergia::Visitors::ForeachVisitor::handleBlock( std::string variableName, std::vector<gsl::not_null<DataStructures::IContext*>>& values, gsl::not_null<AergiaCpp14Parser::AergiaBlockContext*> block, gsl::not_null<AergiaCpp14Parser::ForeachContext*> root )
{

}

antlrcpp::Any Aergia::Visitors::ForeachVisitor::visitForeach( AergiaCpp14Parser::ForeachContext* ctx )
{
	assert( ctx != nullptr );

	using DataStructures::IContext;
	auto resolver = _contextProvider->getResolver();
	auto const callChain = ctx->foreachheader()->callchain();
	auto const variableName = ctx->foreachheader()->Identifier()->getText();
	auto collection = resolver.resolveCallChain<std::vector<gsl::not_null<IContext*>>>( callChain );

	auto body = ctx->foreachbody();
	if (body->aergiaBlock() != nullptr)
	{
		auto block = body->aergiaBlock();
		ctx->children.clear();
		handleBlock( variableName, collection, block, ctx );
	}
	else
		if (body->aergiaexpression() != nullptr)
		{
			auto expression = body->aergiaexpression();
			ctx->children.clear();
			handleExpression( variableName, collection, expression, ctx );
		}
		else
			std::terminate();

	return antlrcpp::Any();
}

std::vector<Aergia::Visitors::Rewrite> const& Aergia::Visitors::ForeachVisitor::getRewrites() const
{
	return std::vector<Rewrite>();
}
