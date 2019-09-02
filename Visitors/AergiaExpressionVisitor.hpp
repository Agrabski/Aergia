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
		AergiaExpressionVisitor( ContextProvider& contextProvider ) : _contextProvider( contextProvider ) {}
		antlrcpp::Any visitAergiaexpression( AergiaCpp14Parser::AergiaexpressionContext* ctx ) override;
	};
}