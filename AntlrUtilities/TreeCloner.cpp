#include "pch.h"
#include "TreeCloner.hpp"
#include "../Lexer/AergiaCpp14Lexer.h"

using namespace Aergia::Utilities;

std::unique_ptr<RuleContext> Aergia::Utilities::TreeCloner::cloneStatementSeq( not_null<AergiaCpp14Parser::StatementseqContext*> original )
{
	auto buffer = original->getText();
	antlr4::ANTLRInputStream stream( buffer );
	AergiaCpp14Lexer lexer( &stream );
	antlr4::CommonTokenStream tokens( &lexer );
	AergiaCpp14Parser parser( &tokens );

	gsl::not_null a = parser.statementseq();
	auto g = a->getText();

	_tokens.recieveTokens( std::move( tokens.releaseTokens() ) );
	g = a->getText();
	return std::unique_ptr<RuleContext>( a );

}

std::unique_ptr<RuleContext> Aergia::Utilities::TreeCloner::cloneStatement(not_null<AergiaCpp14Parser::StatementContext*> original)
{
	auto buffer = original->getText();
	antlr4::ANTLRInputStream stream(buffer);
	AergiaCpp14Lexer lexer(&stream);
	antlr4::CommonTokenStream tokens(&lexer);
	AergiaCpp14Parser parser(&tokens);

	gsl::not_null a = parser.statement();
	auto g = a->getText();

	_tokens.recieveTokens(std::move(tokens.releaseTokens()));
	g = a->getText();
	return std::unique_ptr<RuleContext>(a);
}
