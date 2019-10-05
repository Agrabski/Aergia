#pragma once
#include "BaseVisitor.hpp"
#include "ContextProvider.hpp"
#include "../DataStructures/IContext.hpp"


namespace Aergia::Visitors
{
	class ForeachVisitor : public BaseVisitor
	{
		gsl::not_null<ContextProvider*> const _contextProvider;
		void handleExpression(std::string variableName, std::vector<gsl::not_null<DataStructures::IContext*>>& values, gsl::not_null<AergiaCpp14Parser::StatementContext*> block, gsl::not_null<AergiaCpp14Parser::ForeachContext*> root);
		void handleBlock( std::string variableName, std::vector<gsl::not_null<DataStructures::IContext*>>& values, gsl::not_null< AergiaCpp14Parser::AergiaBlockContext*> block, gsl::not_null< AergiaCpp14Parser::ForeachContext*> root );
	public:
		ForeachVisitor( gsl::not_null<ContextProvider*> contextProvider ) noexcept : _contextProvider( contextProvider ) {}
		antlrcpp::Any visitForeach( AergiaCpp14Parser::ForeachContext* ctx ) override;


	};
}