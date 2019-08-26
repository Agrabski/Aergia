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

	auto a = parser.statementseq();
	return std::unique_ptr<RuleContext>( a );

}
