#include "pch.h"
#include "Processor.hpp"
#include "../Visitors/AnonymousVisitor.hpp"

Aergia::Processor::Processor( IO::Configuration const& )
{
	using namespace Aergia::Visitors;
	_visitors.push_back( std::make_unique<AnonymousVisitor>() );
}

void Aergia::Processor::parseText( AergiaCpp14Parser::TranslationunitContext* root )
{
	for (auto& visitor : _visitors)
	{
		antlr4::tree::ParseTreeWalker::DEFAULT.walk( visitor.get(), root );
	}
}

void Aergia::Processor::setupRewriter( antlr4::TokenStreamRewriter& rewriter )
{
	for (auto& visitor : _visitors)
	{
		visitor->setupRewriter( rewriter );
	}
}
