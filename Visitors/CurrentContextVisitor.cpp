#include "CurrentContextVisitor.hpp"

void Aergia::Visitors::CurrentContextVisitor::enterEveryRule( antlr4::ParserRuleContext* node )
{
	for (auto& child : _visitors)
		node->accept( child.get() );
}

void Aergia::Visitors::CurrentContextVisitor::applyRewrites( antlr4::TokenStreamRewriter& rewriter ) const
{
	for (auto& visitor : _visitors)
		for (auto& rewrite : visitor->getRewrites())
			rewriter.replace( rewrite._from, rewrite._to, rewrite._replaceBy );
}
