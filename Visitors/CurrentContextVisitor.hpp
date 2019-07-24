#pragma once
#include <gsl.h>
#include "..//Lexer/AergiaCpp14BaseListener.h"
#include "..//DataStructures/NamespaceContext.hpp"
#include "ContextProvider.hpp"
#include "BaseVisitor.hpp"
#include "AnonymousVisitor.hpp"

namespace Aergia::Visitors
{
	class CurrentContextVisitor : public AergiaCpp14BaseListener, public ContextProvider
	{

		std::vector<std::unique_ptr<BaseVisitor>> _visitors;
		DataStructures::NamespaceContext<true> _rootContext;
		gsl::not_null<DataStructures::IContext*> _currentContext;
	public:
		CurrentContextVisitor();

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

		void enterClassspecifier( AergiaCpp14Parser::ClassspecifierContext* context ) override { }
		void exitClassspecifier( AergiaCpp14Parser::ClassspecifierContext* /*ctx*/ ) override { }

		void enterClasshead( AergiaCpp14Parser::ClassheadContext* /*ctx*/ ) override { }

		void enterMemberspecification( AergiaCpp14Parser::MemberspecificationContext* /*ctx*/ ) override { }


		void enterEveryRule( antlr4::ParserRuleContext* /*ctx*/ ) override;

		void applyRewrites( antlr4::TokenStreamRewriter& rewriter ) const;

	};
}