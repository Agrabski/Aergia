#include "CurrentContextVisitor.hpp"
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string_regex.hpp>
#include "..//AntlrUtilities/NameExtractor.hpp"
#include "../AntlrUtilities/TypeFinder.hpp"
#include "../AntlrUtilities/ImportHelper.hpp"

using namespace Aergia::DataStructures;

Aergia::Visitors::CurrentContextVisitor::CurrentContextVisitor( AergiaCpp14Parser& parser, AergiaCpp14Lexer& lexer, antlr4::BufferedTokenStream& stream ) noexcept : CurrentContextVisitor( parser, lexer, stream, std::make_unique<NamespaceContext>() )
{

}

Aergia::Visitors::CurrentContextVisitor::CurrentContextVisitor( AergiaCpp14Parser& parser, AergiaCpp14Lexer& lexer, antlr4::BufferedTokenStream& stream, std::unique_ptr<NamespaceContext>&& root ) noexcept : ContextProvider( parser, lexer, stream ), _currentContext( root.get() )
{
	try
	{
		_rootContext = std::move( root );
		_contextStack.push_back( { DataStructures::MemberAccessibility::None } );
	}
	catch (const std::exception&)
	{
		std::terminate();
	}
}

void Aergia::Visitors::CurrentContextVisitor::enterNamespacedefinition( AergiaCpp14Parser::NamespacedefinitionContext* context )
{
	using DataStructures::NamespaceContext;
	using DataStructures::QualifiedName;
	using DataStructures::IContext;
	auto name = Utilities::NameExtractor::getName( context );
	_currentContext = _resolver.appendContent<NamespaceContext>( _currentContext, std::make_unique<NamespaceContext>( name, _currentContext ) );

	_contextStack.push_back( { DataStructures::MemberAccessibility::None } );
}

void Aergia::Visitors::CurrentContextVisitor::exitNamespacedefinition( AergiaCpp14Parser::NamespacedefinitionContext* )
{
	_currentContext = _currentContext->parent();
	_contextStack.pop_back();
}

void Aergia::Visitors::CurrentContextVisitor::enterMemberspecification( AergiaCpp14Parser::MemberspecificationContext* context )
{
	assert( context != nullptr );
	auto accesibilitySpecifier = context->accessspecifier();
	if (accesibilitySpecifier != nullptr)
		_contextStack.push_back( { DataStructures::parse( accesibilitySpecifier->getText() ) } );
}

void Aergia::Visitors::CurrentContextVisitor::exitMemberspecification( AergiaCpp14Parser::MemberspecificationContext* context )
{
	assert( context != nullptr );
	auto const* const accesibilitySpecifier = context->accessspecifier();
	if (accesibilitySpecifier != nullptr)
		_contextStack.pop_back();
}

void Aergia::Visitors::CurrentContextVisitor::enterMemberdeclaration( AergiaCpp14Parser::MemberdeclarationContext* context )
{
	assert( context != nullptr );
	using DataStructures::VariableContext;
	if (context->declspecifierseq() == nullptr)
		return;
	auto type = Utilities::TypeFinder::getType( context->declspecifierseq() );
	auto names = Utilities::NameExtractor::getNames( context );
	auto resolvedType = resolve<TypeContext>( _currentContext, type );
	for (auto const& name : names)
	{
		_resolver.appendContent<VariableContext>( _currentContext,
			std::make_unique<VariableContext>( name, resolvedType,
				_currentContext, _contextStack.back()._currentAccessibility ) );
	}
}

void Aergia::Visitors::CurrentContextVisitor::enterClassspecifier( AergiaCpp14Parser::ClassspecifierContext* context )
{
	using  DataStructures::TypeContext;
	assert( context != nullptr );
	auto name = Utilities::NameExtractor::getName( context );
	auto newType = findUnresolvedReference<TypeContext>( _currentContext, name );
	if (newType == nullptr)
		newType = std::make_unique<TypeContext>( name, _currentContext, _contextStack.back()._currentAccessibility );
	else
		newType->changeParent( _currentContext );
	_currentContext = _resolver.appendContent<TypeContext>( _currentContext, std::move( newType ) );

	_contextStack.push_back( { DataStructures::MemberAccessibility::Private } );
}

void Aergia::Visitors::CurrentContextVisitor::exitClassspecifier( AergiaCpp14Parser::ClassspecifierContext* context )
{
	assert( context != nullptr );
	_currentContext = _currentContext->parent();
	_contextStack.pop_back();
}

void Aergia::Visitors::CurrentContextVisitor::enterFunctiondefinition( AergiaCpp14Parser::FunctiondefinitionContext* context )
{
	assert( context != nullptr );
	using DataStructures::MethodContext;
	using DataStructures::VariableContext;
	using DataStructures::TypeContext;
	using gsl::not_null;
	auto type = Utilities::TypeFinder::getType( context->declspecifierseq() );
	auto const name = Utilities::NameExtractor::getName( context );
	auto const returnType = resolve<TypeContext>( _currentContext, type );

	auto content = std::make_unique<MethodContext>( name, std::vector<std::unique_ptr<VariableContext>>(), returnType, _currentContext, _contextStack.back()._currentAccessibility );

	_resolver.appendContent<MethodContext>( _currentContext, std::move( content ) );
}

void Aergia::Visitors::CurrentContextVisitor::enterUsingdirective( AergiaCpp14Parser::UsingdirectiveContext* context )
{
	using Aergia::DataStructures::NamespaceContext;
	using Aergia::Utilities::ImportHelper;

	auto qualifiedName = ImportHelper::getQualifiedName( context );
	_resolver.appendImport<NamespaceContext>( _currentContext, qualifiedName );
}

void Aergia::Visitors::CurrentContextVisitor::enterAliasdeclaration( AergiaCpp14Parser::AliasdeclarationContext* context )
{
	assert( context != nullptr );
	using Aergia::DataStructures::ITypeImportable;
	using Aergia::DataStructures::TypeContext;

	auto l = context->getText();

	auto importedName = context->thetypeid()->getText();

	_resolver.appendAlias<TypeContext>( _currentContext, context->Identifier()->getText(), importedName );
}

void Aergia::Visitors::CurrentContextVisitor::enterEveryRule( antlr4::ParserRuleContext* node )
{
	assert( node != nullptr );
	if (_variableMetadata.find( node ) != _variableMetadata.end())
	{
		auto variable = _variableMetadata[node];
		_contextStack.back()._variables[variable.first] = variable.second;
	}
	for (auto& child : _visitors)
	{
		auto result = node->accept( child.get() );
		assert( result.isNull() );
	}
}

void Aergia::Visitors::CurrentContextVisitor::enterBasespecifier( AergiaCpp14Parser::BasespecifierContext* ctx )
{
	assert( ctx != nullptr );
	using DataStructures::BaseClassContext;
	using DataStructures::TypeContext;
	using namespace std::literals;
	auto typeName = Utilities::TypeFinder::getType( ctx );
	auto accessibilityNode = ctx->accessspecifier();
	auto accessibility = DataStructures::parse( accessibilityNode == nullptr ? ""s : accessibilityNode->getText() );
	auto baseClass = _resolver.resolve<TypeContext>( _currentContext, typeName );
	//todo: is it virtual?
	_resolver.appendContent<BaseClassContext>( _currentContext,
		std::make_unique<BaseClassContext>( dynamic_cast<TypeContext*>(_currentContext.get()), accessibility, baseClass ) );
}

gsl::not_null<Aergia::DataStructures::NamespaceContext*> Aergia::Visitors::CurrentContextVisitor::getRootNamespace() noexcept
{
	return _rootContext.get();
}

Aergia::DataStructures::IContext* Aergia::Visitors::CurrentContextVisitor::getVariableValue( std::string const& name )
{
	for (auto i = _contextStack.rbegin(); i != _contextStack.rend(); ++i)
		if (i->_variables.contains( name ))
			return i->_variables[name];
	// todo: log fail
	return nullptr;
}
