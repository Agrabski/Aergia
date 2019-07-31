#pragma once
#include <gsl.h>
#include "..//Lexer/Antlr_include.hpp"
#include "..//DataStructures/Definitions.hpp"
#include "..//DataStructures/NamespaceContext.hpp"
#include "..//DataStructures/IContext.hpp"
#include "ContextProvider.hpp"
#include "BaseVisitor.hpp"
#include "AnonymousVisitor.hpp"

namespace Aergia::Visitors
{
	class CurrentContextVisitor : public AergiaCpp14BaseListener, public ContextProvider
	{
		struct ContextData
		{
			DataStructures::MemberAccessibility _currentAccessibility;
			std::map<std::string, gsl::not_null<DataStructures::IContext*>> _variables;
		};

		std::vector<std::unique_ptr<BaseVisitor>> _visitors;
		DataStructures::NamespaceContext _rootContext;
		gsl::not_null<DataStructures::IContext*> _currentContext;
		std::stack<ContextData> _contextStack;

	public:
		CurrentContextVisitor() noexcept;

		template<typename T, typename... Args>
		void addVisitor( Args&& ... arguments )
		{
			_visitors.push_back( std::make_unique<T>( std::forward( Args )... ) );
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

		void enterClasshead( AergiaCpp14Parser::ClassheadContext* /*ctx*/ ) override { }

		void enterEveryRule( antlr4::ParserRuleContext* /*ctx*/ ) override;

		void applyRewrites( antlr4::TokenStreamRewriter& rewriter ) const;

		gsl::not_null<DataStructures::IContext*> getRootNamespace() noexcept override;


	};
}