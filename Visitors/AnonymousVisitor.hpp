#pragma once
#include "..//Lexer/Antlr_include.hpp"
#include "BaseVisitor.hpp"
#include "ContextProvider.hpp"

namespace Aergia::Visitors
{
	using antlr4::Token;
	class AnonymousVisitor : public BaseVisitor
	{
		ContextProvider& _contextProvider;
		std::string getVariableName( size_t lineNumber ) const;
		static std::string formatAssigment( std::string const& variableName, std::string const& value );
	public:
		constexpr AnonymousVisitor( ContextProvider& contextProvider ) noexcept : _contextProvider( contextProvider ) {}
		antlrcpp::Any visitAnonymousExpression( AergiaCpp14Parser::AnonymousExpressionContext* context ) override;
	};
}