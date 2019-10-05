#include "Processor.hpp"
#include "../Visitors/AnonymousVisitor.hpp"
#include "../Visitors/ForeachVisitor.hpp"
#include "../Visitors/AergiaExpressionVisitor.hpp"

Aergia::Processor::Processor( IO::Configuration const&, AergiaCpp14Parser& parser, AergiaCpp14Lexer& lexer, antlr4::BufferedTokenStream& stream ) : _contextProvider( parser, lexer, stream )
{
	using namespace Aergia::Visitors;
	_contextProvider.addVisitor<AnonymousVisitor>( _contextProvider );
	_contextProvider.addVisitor<ForeachVisitor>( &_contextProvider );
	_contextProvider.addVisitor<AergiaExpressionVisitor>( _contextProvider );
}

void Aergia::Processor::parseText( AergiaCpp14Parser::TranslationunitContext* root )
{
	antlr4::tree::ParseTreeWalker::DEFAULT.walk( &_contextProvider, root );
}
