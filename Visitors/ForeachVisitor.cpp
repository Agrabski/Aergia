#include <algorithm>
#include "ForeachVisitor.hpp"
#include "../DataStructures/IContext.hpp"
#include "../AntlrUtilities/TreeCloner.hpp"

void Aergia::Visitors::ForeachVisitor::handleExpression( std::string variableName, std::vector<gsl::not_null<DataStructures::IContext*>>& values, gsl::not_null<AergiaCpp14Parser::AergiaexpressionContext*> block, gsl::not_null<AergiaCpp14Parser::ForeachContext*> root )
{
	throw std::exception();
}

void Aergia::Visitors::ForeachVisitor::handleBlock( std::string variableName, std::vector<gsl::not_null<DataStructures::IContext*>>& values, gsl::not_null<AergiaCpp14Parser::AergiaBlockContext*> block, gsl::not_null<AergiaCpp14Parser::ForeachContext*> root )
{
	using namespace std::literals;
	using gsl::not_null;
	auto * const sequence = block->statementseq();

	not_null const parent = _contextProvider->createParserContext<AergiaCpp14Parser::CompoundstatementContext>( root, root->invokingState );
	parent->addChild( _contextProvider->createTerminalNode( _contextProvider->getTokenFactory().create( AergiaCpp14Lexer::LeftBrace, "{"s ) ));
	not_null const cloner = Utilities::TreeCloner::instance();
	for (auto& value : values)
	{
		not_null const compoundStatement = _contextProvider->createParserContext<AergiaCpp14Parser::CompoundstatementContext>( parent, parent->invokingState );
		auto lBrace = _contextProvider->createTerminalNode( _contextProvider->getTokenFactory().create( AergiaCpp14Lexer::LeftBrace, "{"s ) );
		auto rBrace = _contextProvider->createTerminalNode( _contextProvider->getTokenFactory().create( AergiaCpp14Lexer::RightBrace, "}"s ) );
		_contextProvider->appendNodeMetadata( compoundStatement, variableName, value );
		compoundStatement->children.push_back( lBrace );
		auto x = compoundStatement->getText();
		compoundStatement->children.push_back( cloner->cloneStatementSeq( block->statementseq() ).release() );
		x = compoundStatement->getText();
		compoundStatement->children.push_back( rBrace );
		x = compoundStatement->getText();
		parent->addChild( compoundStatement );
	}
	parent->addChild( _contextProvider->createTerminalNode( _contextProvider->getTokenFactory().create( AergiaCpp14Lexer::RightBrace, "}"s ) ) );
	root->addChild( parent );
}

antlrcpp::Any Aergia::Visitors::ForeachVisitor::visitForeach( AergiaCpp14Parser::ForeachContext* ctx )
{
	assert( ctx != nullptr );
	using gsl::not_null;

	using DataStructures::IContext;
	auto resolver = _contextProvider->getResolver();
	not_null const callChain = ctx->foreachheader()->callchain();
	auto const variableName = ctx->foreachheader()->Identifier()->getText();
	auto collection = resolver.resolveCallChain<std::vector<gsl::not_null<IContext*>>>( callChain->getText(), _contextProvider->getContext() );

	if (collection)
	{
		not_null const body = ctx->foreachbody();
		if (body->aergiaBlock() != nullptr)
		{
			auto block = body->aergiaBlock();
			ctx->children.clear();
			handleBlock( variableName, *collection, block, ctx );
		}
		else
			if (body->aergiaexpression() != nullptr)
			{
				auto expression = body->aergiaexpression();
				ctx->children.clear();
				handleExpression( variableName, *collection, expression, ctx );
			}
			else
				std::terminate();
	}
	else
		ctx->children.clear();
	return antlrcpp::Any();
}

std::vector<Aergia::Visitors::Rewrite> const& Aergia::Visitors::ForeachVisitor::getRewrites() const
{
	return std::vector<Rewrite>();
}
