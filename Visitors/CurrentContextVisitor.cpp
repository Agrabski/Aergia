#include "CurrentContextVisitor.hpp"
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string_regex.hpp>
#include "..//AntlrUtilities/NameExtractor.hpp"
#include "../AntlrUtilities/TypeFinder.hpp"
#include "../AntlrUtilities/ImportHelper.hpp"

Aergia::Visitors::CurrentContextVisitor::CurrentContextVisitor( AergiaCpp14Parser& parser, AergiaCpp14Lexer& lexer, antlr4::TokenStream& stream ) noexcept : _currentContext( &_rootContext ), ContextProvider( parser, lexer, stream )
{
	try
	{
		_contextStack.push( { DataStructures::MemberAccessibility::None } );
	}
	catch (const std::exception&)
	{
		std::terminate();
	}
}

void Aergia::Visitors::CurrentContextVisitor::enterNamespacedefinition( AergiaCpp14Parser::NamespacedefinitionContext* context )
{
	using DataStructures::NamespaceContext;
	auto name = Utilities::NameExtractor::getName( context );
	if (_currentContext->getNamespace( name ) == nullptr)
	{
		_currentContext->appendMember( std::make_unique<NamespaceContext>( name, _currentContext ) );
	}
	_currentContext = _currentContext->getNamespace( name );
	_contextStack.push( { DataStructures::MemberAccessibility::None } );
}

void Aergia::Visitors::CurrentContextVisitor::exitNamespacedefinition( AergiaCpp14Parser::NamespacedefinitionContext* )
{
	_currentContext = _currentContext->parent();
	_contextStack.pop();
}

void Aergia::Visitors::CurrentContextVisitor::enterMemberspecification( AergiaCpp14Parser::MemberspecificationContext* context )
{
	assert( context != nullptr );
	auto accesibilitySpecifier = context->accessspecifier();
	if (accesibilitySpecifier != nullptr)
		_contextStack.push( { DataStructures::parse( accesibilitySpecifier->getText() ) } );
}

void Aergia::Visitors::CurrentContextVisitor::exitMemberspecification( AergiaCpp14Parser::MemberspecificationContext* context )
{
	assert( context != nullptr );
	auto const* const accesibilitySpecifier = context->accessspecifier();
	if (accesibilitySpecifier != nullptr)
		_contextStack.pop();
}

void Aergia::Visitors::CurrentContextVisitor::enterMemberdeclaration( AergiaCpp14Parser::MemberdeclarationContext* context )
{
	assert( context != nullptr );
	using DataStructures::VariableContext;
	if (context->declspecifierseq() == nullptr)
		return;
	auto type = Utilities::TypeFinder::getType( context->declspecifierseq() );
	auto names = Utilities::NameExtractor::getNames( context );
	for (auto const& name : names)
	{
		_currentContext->appendMember( std::make_unique<VariableContext>( name, _currentContext->resolve<DataStructures::TypeContext>( type ), _currentContext, _contextStack.top()._currentAccessibility ) );
	}
}

void Aergia::Visitors::CurrentContextVisitor::enterClassspecifier( AergiaCpp14Parser::ClassspecifierContext* context )
{
	using  DataStructures::TypeContext;
	assert( context != nullptr );
	auto name = Utilities::NameExtractor::getName( context );
	_currentContext->appendMember( std::make_unique<TypeContext>( name, _currentContext, _contextStack.top()._currentAccessibility ) );
	_currentContext = _currentContext->getClass( name );
	_contextStack.push( { DataStructures::MemberAccessibility::Private } );
}

void Aergia::Visitors::CurrentContextVisitor::exitClassspecifier( AergiaCpp14Parser::ClassspecifierContext* context )
{
	assert( context != nullptr );
	_currentContext = _currentContext->parent();
	_contextStack.pop();
}

void Aergia::Visitors::CurrentContextVisitor::enterFunctiondefinition( AergiaCpp14Parser::FunctiondefinitionContext* context )
{
	assert( context != nullptr );
	using DataStructures::MethodContext;
	using DataStructures::VariableContext;
	auto const name = Utilities::NameExtractor::getName( context );
	auto type = Utilities::TypeFinder::getType( context->declspecifierseq() );
	_currentContext->appendMember(
		std::make_unique<MethodContext>( name, std::vector<std::unique_ptr<VariableContext>>(), _currentContext->resolve<DataStructures::TypeContext>( type ),
			_currentContext, _contextStack.top()._currentAccessibility ) );
}

void Aergia::Visitors::CurrentContextVisitor::enterUsingdirective( AergiaCpp14Parser::UsingdirectiveContext* context )
{
	using Aergia::DataStructures::INamespaceImportable;
	using Aergia::DataStructures::NamespaceContext;
	using Aergia::DataStructures::QualifiedName;
	using Aergia::Utilities::ImportHelper;
	gsl::not_null const casted = dynamic_cast<INamespaceImportable*>(_currentContext.get());
	auto qualifiedName = ImportHelper::getQualifiedName( context );
	auto ns = _currentContext->resolve<NamespaceContext>( qualifiedName );
	casted->appendNamespaceImport( ns );
}

void Aergia::Visitors::CurrentContextVisitor::enterAliasdeclaration( AergiaCpp14Parser::AliasdeclarationContext* context )
{
	using Aergia::DataStructures::ITypeImportable;
	using Aergia::DataStructures::TypeContext;

	auto l = context->getText();

	gsl::not_null casted = dynamic_cast<ITypeImportable*>(_currentContext.get());

	auto importedName = context->thetypeid()->getText();

	casted->appendTypeAlias( context->Identifier()->getText(), _currentContext->resolve<TypeContext>( importedName ) );
}

void Aergia::Visitors::CurrentContextVisitor::enterEveryRule( antlr4::ParserRuleContext* node )
{
	assert( node != nullptr );
	if (_variableMetadata.find( node ) != _variableMetadata.end())
	{
		auto variable = _variableMetadata[node];
		_contextStack.top()._variables[variable.first] = variable.second;
	}
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
