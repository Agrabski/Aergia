#include "pch.h"
#include "Processor.hpp"
#include "../Visitors/AnonymousVisitor.hpp"
#include "../Visitors/ForeachVisitor.hpp"

Aergia::Processor::Processor( IO::Configuration const&, AergiaCpp14Parser& parser, AergiaCpp14Lexer& lexer, antlr4::TokenStream& stream ) : _contextProvider( parser, lexer, stream )
{
	using namespace Aergia::Visitors;
	_contextProvider.addVisitor<AnonymousVisitor>();
	_contextProvider.addVisitor<ForeachVisitor>( &_contextProvider );
}

void Aergia::Processor::parseText( AergiaCpp14Parser::TranslationunitContext* root )
{
	antlr4::tree::ParseTreeWalker::DEFAULT.walk( &_contextProvider, root );
}

void Aergia::Processor::setupRewriter( antlr4::TokenStreamRewriter& rewriter )
{
	_contextProvider.applyRewrites( rewriter );
}
