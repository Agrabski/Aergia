#pragma once
#include <string>
#include "..//Lexer/Antlr_include.hpp"

namespace Aergia::Utilities
{
	using namespace std::literals;

	class NameExtractor
	{

		class NamespaceNameExtractionVisitor : public AergiaCpp14BaseVisitor
		{
		public:
			antlrcpp::Any visitOriginalnamespacedefinition( AergiaCpp14Parser::OriginalnamespacedefinitionContext* context ) override;
			antlrcpp::Any aggregateResult( antlrcpp::Any prevResult, const antlrcpp::Any& nextResult ) noexcept override;
		};

		class ClassNameExtractionVisitor : public AergiaCpp14BaseVisitor
		{
		public:
			antlrcpp::Any visitClassname( AergiaCpp14Parser::ClassnameContext* context ) override;
			antlrcpp::Any aggregateResult( antlrcpp::Any prevResult, const antlrcpp::Any& nextResult )override;

		};

		class VariableNameExtractionVisitor : public AergiaCpp14BaseVisitor
		{
			antlrcpp::Any visitIdexpression( AergiaCpp14Parser::IdexpressionContext* context ) override;
			antlrcpp::Any aggregateResult( antlrcpp::Any prevResult, const antlrcpp::Any& nextResult )override;
		};

		class FunctionNameExtractionVisitor : public AergiaCpp14BaseVisitor
		{
			antlrcpp::Any visitIdexpression( AergiaCpp14Parser::IdexpressionContext* ) override;
			antlrcpp::Any aggregateResult( antlrcpp::Any prevResult, const antlrcpp::Any& nextResult ) noexcept override;
		};

	public:
		class NameNotFoundException : public std::runtime_error
		{
		public:
			NameNotFoundException( unsigned line, unsigned character ) : 
				runtime_error( "requested name was not found. You might have a syntax error! Position: (line, character):"s + std::to_string( line ) + ", "s + std::to_string( character ) ) {}
		};
		static std::string getName( gsl::not_null<AergiaCpp14Parser::NamespacedefinitionContext*> context );
		static std::string getName( AergiaCpp14Parser::ClassspecifierContext* context );
		static std::string getName( AergiaCpp14Parser::FunctiondefinitionContext* context );
		static std::vector<std::string> getNames( AergiaCpp14Parser::MemberdeclarationContext* context );
	};
}