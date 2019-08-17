#include "pch.h"
#include "Processor.hpp"
#include "../Visitors/AnonymousVisitor.hpp"
#include "../Visitors/ForeachVisitor.hpp"

Aergia::Processor::Processor( IO::Configuration const& )
{
	using namespace Aergia::Visitors;
	_contextProvider.addVisitor<AnonymousVisitor>();
	_contextProvider.addVisitor<ForeachVisitor>(&_contextProvider);
}

void Aergia::Processor::parseText( AergiaCpp14Parser::TranslationunitContext* root )
{
	antlr4::tree::ParseTreeWalker::DEFAULT.walk( &_contextProvider, root );
}

void Aergia::Processor::setupRewriter( antlr4::TokenStreamRewriter& rewriter )
{
	_contextProvider.applyRewrites( rewriter );
}
