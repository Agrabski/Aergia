#pragma once
#include <gsl.h>
#include "../DataStructures/Definitions.hpp"
#include "../DataStructures/NamespaceContext.hpp"
#include "../DataStructures/IContext.hpp"
#include "../DataStructures/UnconfirmedReference.hpp"
#include "../MetaProgramming/FindInTupple.hpp"
#include "ContextProvider.hpp"
#include "BaseVisitor.hpp"
#include "AnonymousVisitor.hpp"
#include "../DataStructures/Resolver.hpp"
#include "../Functions/VariableProvider.hpp"

namespace Aergia::Visitors
{
	using DataStructures::IContext;
	using DataStructures::VariableContext;

	template<typename T>
	using UnconfirmedReferenceCollection = std::vector<DataStructures::UnconfirmedReference<T>>;

	class CurrentContextVisitor : public AergiaCpp14BaseListener, public ContextProvider
	{
		struct ContextData
		{
			gsl::not_null<IContext*> _currentContext;
			DataStructures::MemberAccessibility _currentAccessibility;
			long long _currentOverload = -1;
			std::vector<std::unique_ptr<VariableContext>> _locals;
			std::map<std::string, DataStructures::IContext*> _variables;
			ContextData(gsl::not_null<IContext*> c, DataStructures::MemberAccessibility ma) :
				_currentContext(c), _currentAccessibility(ma) {}
			ContextData(ContextData&&e) noexcept : _currentContext(e._currentContext)
			{
				_currentAccessibility = e._currentAccessibility;
				_currentOverload = e._currentOverload;
				_variables = e._variables;
				_locals = std::move(e._locals);
			}
		};

		std::vector<std::unique_ptr<BaseVisitor>> _visitors;
		std::unique_ptr<DataStructures::NamespaceContext>_rootContext;
		gsl::not_null<DataStructures::IContext*> _currentContext;
		std::vector<ContextData> _contextStack;
		std::tuple<
			UnconfirmedReferenceCollection<DataStructures::TypeContext>,
			UnconfirmedReferenceCollection<DataStructures::MethodContext>
		> _unconfirmedReferences;
		DataStructures::Resolver& _resolver = DataStructures::Resolver::instance();

		void pushContextStack(gsl::not_null<IContext*> current, gsl::not_null<IContext*> newContext, DataStructures::MemberAccessibility accessibility);
		void popContextStack();

		template<typename T>
		T* resolve( gsl::not_null<DataStructures::IContext*> source, DataStructures::QualifiedName name );

		template<typename T>
		std::unique_ptr<T> findUnresolvedReference( gsl::not_null<DataStructures::IContext const*> currentContext, DataStructures::QualifiedName name );

	public:
		std::unique_ptr<DataStructures::NamespaceContext>releaseRoot() noexcept { return std::move( _rootContext ); }

		CurrentContextVisitor( AergiaCpp14Parser& parser, AergiaCpp14Lexer& lexer, antlr4::BufferedTokenStream& stream ) noexcept;
		CurrentContextVisitor( AergiaCpp14Parser& parser, AergiaCpp14Lexer& lexer, antlr4::BufferedTokenStream& stream, std::unique_ptr<DataStructures::NamespaceContext>&& rootnamespace ) noexcept;

		template<typename T, typename... Args>
		void addVisitor( Args&& ... arguments )
		{
			_visitors.push_back( std::make_unique<T>( std::forward<Args>( arguments )... ) );
		}

		template<typename T>
		void addVisitor()
		{
			_visitors.push_back( std::make_unique<T>() );
		}


		void enterNamespacedefinition( AergiaCpp14Parser::NamespacedefinitionContext* /*ctx*/ ) final;
		void exitNamespacedefinition( AergiaCpp14Parser::NamespacedefinitionContext* /*ctx*/ ) final;

		void enterMemberspecification( AergiaCpp14Parser::MemberspecificationContext* context ) final;
		void exitMemberspecification( AergiaCpp14Parser::MemberspecificationContext* context ) final;

		void enterMemberdeclaration( AergiaCpp14Parser::MemberdeclarationContext* context ) final;

		void enterClassspecifier( AergiaCpp14Parser::ClassspecifierContext* context ) final;
		void exitClassspecifier( AergiaCpp14Parser::ClassspecifierContext* context ) final;

		void enterFunctiondefinition( AergiaCpp14Parser::FunctiondefinitionContext* ) final;
		void exitFunctiondefinition(AergiaCpp14Parser::FunctiondefinitionContext* /*ctx*/) final;

		void enterMemberFunctionDeclaration(AergiaCpp14Parser::MemberFunctionDeclarationContext* /*ctx*/) final;
		void exitMemberFunctionDeclaration(AergiaCpp14Parser::MemberFunctionDeclarationContext* /*ctx*/) final;

		void enterUsingdirective( AergiaCpp14Parser::UsingdirectiveContext* context ) final;

		void enterClasshead( AergiaCpp14Parser::ClassheadContext* /*ctx*/ ) final { }

		void enterAliasdeclaration( AergiaCpp14Parser::AliasdeclarationContext* /*ctx*/ ) final;

		void enterEveryRule( antlr4::ParserRuleContext* /*ctx*/ ) final;

		void enterBasespecifier( AergiaCpp14Parser::BasespecifierContext* /*ctx*/ ) final;


		gsl::not_null<DataStructures::NamespaceContext*> getRootNamespace() noexcept final;

		gsl::not_null<DataStructures::IContext*> getContext() noexcept final { return _currentContext; }

		DataStructures::IContext* getVariableValue( std::string const& name ) final;

		DataStructures::VariableContext* getVariable(std::string name) noexcept final;

	};





	template<typename T>
	inline T* CurrentContextVisitor::resolve( gsl::not_null<DataStructures::IContext*> source, DataStructures::QualifiedName name )
	{
		auto result = _resolver.resolve<T>( source, name );
		if (result == nullptr)
		{
			using DataStructures::MemberAccessibility;
			using namespace MetaProgramming;
			auto& collection = findInTuple<UnconfirmedReferenceCollection<T>, 0>( _unconfirmedReferences );
			auto reference = std::make_unique<T>( name.objectName(), nullptr, MemberAccessibility::None );
			result = reference.get();
			collection.push_back( UnconfirmedReference<T>( std::move( reference ), { source,name } ) );
		}
		return result;
	}

	template<typename T>
	inline std::unique_ptr<T> CurrentContextVisitor::findUnresolvedReference( gsl::not_null<DataStructures::IContext const*> currentContext, DataStructures::QualifiedName name )
	{
		using namespace DataStructures;
		auto& collection =MetaProgramming::findInTuple<UnconfirmedReferenceCollection<T>, 0>( _unconfirmedReferences );
		if (collection.size())
		{

		}
		auto& objectName = name.objectName();
		for (auto& reference : collection)
			if (reference.referenceName() == objectName)
			{
				auto& referenceContext = reference.context();
				auto parentName = referenceContext._fullReferenceName.getAllQualificationLevels();
				parentName.erase( parentName.end() - 1 );
				if (parentName.size() == 0UL)
					return reference.releaseReference();
				IContext const* resolved = nullptr;
				if (dynamic_cast<NamespaceContext const*>(currentContext.get()) != nullptr)
					resolved = _resolver.resolve<NamespaceContext>( referenceContext._context, QualifiedName( parentName ) );
				else
					if (dynamic_cast<TypeContext const*>(currentContext.get()) != nullptr)
						resolved = _resolver.resolve<TypeContext>( referenceContext._context, QualifiedName( parentName ) );

				if (resolved == currentContext)
					return reference.releaseReference();
			}
		return std::unique_ptr<T>();
	}
}