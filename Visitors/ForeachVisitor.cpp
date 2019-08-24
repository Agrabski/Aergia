#include <algorithm>
#include "ForeachVisitor.hpp"
#include "../DataStructures/IContext.hpp"

void Aergia::Visitors::ForeachVisitor::handleExpression( std::string variableName, std::vector<gsl::not_null<DataStructures::IContext*>>& values, gsl::not_null<AergiaCpp14Parser::AergiaexpressionContext*> block, gsl::not_null<AergiaCpp14Parser::ForeachContext*> root )
{
	throw std::exception();
}

void Aergia::Visitors::ForeachVisitor::handleBlock( std::string variableName, std::vector<gsl::not_null<DataStructures::IContext*>>& values, gsl::not_null<AergiaCpp14Parser::AergiaBlockContext*> block, gsl::not_null<AergiaCpp14Parser::ForeachContext*> root )
{
	auto sequence = block->statementseq();

	

	for (auto& value : values)
	{
		using namespace std::literals;
		auto compoundStatement = _contextProvider->createParserContext<AergiaCpp14Parser::CompoundstatementContext>( root, root->invokingState );
		auto lBrace = _contextProvider->createTerminalNode( _contextProvider->getTokenFactory().create( AergiaCpp14Lexer::LeftBrace, "{"s ));
		auto rBrace = _contextProvider->createTerminalNode( _contextProvider->getTokenFactory().create( AergiaCpp14Lexer::RightBrace, "}"s ));
		_contextProvider->appendNodeMetadata( compoundStatement, variableName, value );
		compoundStatement->children.push_back( lBrace );
		compoundStatement->children.push_back( root->foreachbody()->aergiaBlock()->statementseq() );
		compoundStatement->children.push_back( rBrace );
	}
}

antlrcpp::Any Aergia::Visitors::ForeachVisitor::visitForeach( AergiaCpp14Parser::ForeachContext* ctx )
{
	assert( ctx != nullptr );

	using DataStructures::IContext;
	auto resolver = _contextProvider->getResolver();
	auto const callChain = ctx->foreachheader()->callchain();
	auto const variableName = ctx->foreachheader()->Identifier()->getText();
	auto collection = resolver.resolveCallChain<std::vector<gsl::not_null<IContext*>>>( callChain, _contextProvider->getContext() );

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
