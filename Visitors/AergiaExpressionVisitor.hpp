#pragma once
#include "BaseVisitor.hpp"
#include "../Functions/CallChainResolver.hpp"
#include "ContextProvider.hpp"


namespace Aergia::Visitors
{
	class AergiaExpressionVisitor : public BaseVisitor
	{
		ContextProvider& _contextProvider;
	public:
		constexpr AergiaExpressionVisitor( ContextProvider& contextProvider ) noexcept : _contextProvider( contextProvider ) {}
		antlrcpp::Any visitAergiaExpression_type_target(AergiaCpp14Parser::AergiaExpression_type_targetContext* ctx) final;

		antlrcpp::Any visitAergiaExpression_value_target(AergiaCpp14Parser::AergiaExpression_value_targetContext* ctx) final;

		antlrcpp::Any visitAergiaExpression_identifier_target(AergiaCpp14Parser::AergiaExpression_identifier_targetContext* ctx) final;
		antlrcpp::Any visitAergiaString(AergiaCpp14Parser::AergiaStringContext* ctx) final;


	};
}