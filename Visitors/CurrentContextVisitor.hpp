#pragma once
#include <gsl.h>
#include "..//Lexer/Antlr_include.hpp"
#include "..//DataStructures/Definitions.hpp"
#include "..//DataStructures/NamespaceContext.hpp"
#include "..//DataStructures/IContext.hpp"
#include "ContextProvider.hpp"
#include "BaseVisitor.hpp"
#include "AnonymousVisitor.hpp"
#include "../DataStructures/Resolver.hpp"

namespace Aergia::Visitors
{
	class CurrentContextVisitor : public AergiaCpp14BaseListener, public ContextProvider
	{
		struct ContextData
		{
			DataStructures::MemberAccessibility _currentAccessibility;
			std::map<std::string, DataStructures::IContext*> _variables;
		};

		std::vector<std::unique_ptr<BaseVisitor>> _visitors;
		DataStructures::NamespaceContext _rootContext;
		gsl::not_null<DataStructures::IContext*> _currentContext;
		std::stack<ContextData> _contextStack;
		DataStructures::Resolver _resolver;

	public:
		CurrentContextVisitor( AergiaCpp14Parser& parser, AergiaCpp14Lexer& lexer, antlr4::TokenStream& stream ) noexcept;

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


		void enterNamespacedefinition( AergiaCpp14Parser::NamespacedefinitionContext* /*ctx*/ ) override;
		void exitNamespacedefinition( AergiaCpp14Parser::NamespacedefinitionContext* /*ctx*/ ) override;

		void enterMemberspecification( AergiaCpp14Parser::MemberspecificationContext* context ) override;
		void exitMemberspecification( AergiaCpp14Parser::MemberspecificationContext* context ) override;

		void enterMemberdeclaration( AergiaCpp14Parser::MemberdeclarationContext* context ) override;


		void enterClassspecifier( AergiaCpp14Parser::ClassspecifierContext* context ) override;
		void exitClassspecifier( AergiaCpp14Parser::ClassspecifierContext* context ) override;

		void enterFunctiondefinition( AergiaCpp14Parser::FunctiondefinitionContext* ) override;
		void exitFunctiondefinition( AergiaCpp14Parser::FunctiondefinitionContext* /*ctx*/ ) override {}

		void enterUsingdirective( AergiaCpp14Parser::UsingdirectiveContext* context ) override;

		void enterClasshead( AergiaCpp14Parser::ClassheadContext* /*ctx*/ ) override { }

		void enterAliasdeclaration( AergiaCpp14Parser::AliasdeclarationContext* /*ctx*/ ) override;

		void enterEveryRule( antlr4::ParserRuleContext* /*ctx*/ ) override;

		void enterBasespecifier( AergiaCpp14Parser::BasespecifierContext* /*ctx*/ ) override;

		void applyRewrites( antlr4::TokenStreamRewriter& rewriter ) const;



		gsl::not_null<DataStructures::NamespaceContext*> getRootNamespace() noexcept override;

		virtual gsl::not_null<DataStructures::IContext*> getContext() noexcept { return _currentContext; }



	};
}