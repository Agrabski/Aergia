#include "CurrentContextVisitor.hpp"
#include "..//AntlrUtilities/NameExtractor.hpp"

Aergia::Visitors::CurrentContextVisitor::CurrentContextVisitor() : _currentContext( &_rootContext )
{
}

void Aergia::Visitors::CurrentContextVisitor::enterNamespacedefinition( AergiaCpp14Parser::NamespacedefinitionContext* context )
{
	auto name = Utilities::NameExtractor::getName( context );
	if (_currentContext->getMember( name ) == nullptr)
	{
		_currentContext->appendMember( std::make_unique<DataStructures::NamespaceContext<false>>( name, _currentContext ) );
	}
	_currentContext = _currentContext->getMember( name );
}

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
