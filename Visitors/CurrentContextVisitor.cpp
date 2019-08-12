#include "CurrentContextVisitor.hpp"
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string_regex.hpp>
#include "..//AntlrUtilities/NameExtractor.hpp"
#include "../AntlrUtilities/TypeFinder.hpp"

Aergia::Visitors::CurrentContextVisitor::CurrentContextVisitor() noexcept : _currentContext( &_rootContext )
{
	_contextStack.push( { DataStructures::None } );
}

void Aergia::Visitors::CurrentContextVisitor::enterNamespacedefinition( AergiaCpp14Parser::NamespacedefinitionContext* context )
{
	auto name = Utilities::NameExtractor::getName( context );
	if (_currentContext->getNamespace( name ) == nullptr)
	{
		_currentContext->appendMember( DataStructures::NamespaceContext( name, _currentContext ) );
	}
	_currentContext = _currentContext->getNamespace( name );
	_contextStack.push( { DataStructures::None } );
}

void Aergia::Visitors::CurrentContextVisitor::exitNamespacedefinition( AergiaCpp14Parser::NamespacedefinitionContext* )
{
	_currentContext = _currentContext->parent();
	_contextStack.pop();
}

void Aergia::Visitors::CurrentContextVisitor::enterMemberspecification( AergiaCpp14Parser::MemberspecificationContext* context )
{
	auto accesibilitySpecifier = context->accessspecifier();
	if (accesibilitySpecifier != nullptr)
		_contextStack.push( { DataStructures::parse( accesibilitySpecifier->getText() ) } );
}

void Aergia::Visitors::CurrentContextVisitor::exitMemberspecification( AergiaCpp14Parser::MemberspecificationContext* context )
{
	auto const accesibilitySpecifier = context->accessspecifier();
	if (accesibilitySpecifier != nullptr)
		_contextStack.pop();
}

void Aergia::Visitors::CurrentContextVisitor::enterMemberdeclaration( AergiaCpp14Parser::MemberdeclarationContext* context )
{
	if (context->declspecifierseq() == nullptr)
		return;
	auto type = Utilities::TypeFinder::getType( context->declspecifierseq() );
	auto names = Utilities::NameExtractor::getNames( context );
	for (auto const& name : names)
	{
		_currentContext->appendMember( DataStructures::VariableContext( name, _currentContext->resolve<DataStructures::TypeContext>( type ), _currentContext, _contextStack.top()._currentAccessibility ) );
	}
}

void Aergia::Visitors::CurrentContextVisitor::enterClassspecifier( AergiaCpp14Parser::ClassspecifierContext* context )
{
	auto name = Utilities::NameExtractor::getName( context );
	_currentContext->appendMember( DataStructures::TypeContext( name, _currentContext, _contextStack.top()._currentAccessibility ) );
	_currentContext = _currentContext->getClass( name );
	_contextStack.push( { DataStructures::Private } );
}

void Aergia::Visitors::CurrentContextVisitor::exitClassspecifier( AergiaCpp14Parser::ClassspecifierContext* context )
{
	_currentContext = _currentContext->parent();
	_contextStack.pop();
}

void Aergia::Visitors::CurrentContextVisitor::enterFunctiondefinition( AergiaCpp14Parser::FunctiondefinitionContext* context )
{
	using DataStructures::MethodContext;
	using DataStructures::VariableContext;
	auto const name = Utilities::NameExtractor::getName( context );
	auto type = Utilities::TypeFinder::getType( context->declspecifierseq() );
	_currentContext->appendMember(
		MethodContext( name, std::vector<VariableContext>(), _currentContext->resolve<DataStructures::TypeContext>(type),
			_currentContext, _contextStack.top()._currentAccessibility ) );
}

void Aergia::Visitors::CurrentContextVisitor::enterEveryRule( antlr4::ParserRuleContext* node )
{
	for (auto& child : _visitors)
	{
		auto result = node->accept( child.get() );
		assert( result.isNull() );
	}
}

void Aergia::Visitors::CurrentContextVisitor::applyRewrites( antlr4::TokenStreamRewriter& rewriter ) const
{
	for (auto& visitor : _visitors)
		for (auto& rewrite : visitor->getRewrites())
			rewriter.replace( rewrite._from, rewrite._to, rewrite._replaceBy );
}

gsl::not_null<Aergia::DataStructures::IContext*> Aergia::Visitors::CurrentContextVisitor::getRootNamespace() noexcept
{
	return  &_rootContext;
}
