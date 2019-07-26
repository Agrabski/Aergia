#pragma once
#include <string>
#include "..//Lexer/Antlr_include.hpp"

namespace Aergia::Utilities
{
	class NameExtractor
	{

		class NamespaceNameExtractionVisitor : public AergiaCpp14BaseVisitor
		{
		public:
			antlrcpp::Any visitOriginalnamespacedefinition( AergiaCpp14Parser::OriginalnamespacedefinitionContext* context ) override;
			antlrcpp::Any aggregateResult( antlrcpp::Any prevResult, const antlrcpp::Any& nextResult )override;
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

	public:
		static std::string getName( AergiaCpp14Parser::NamespacedefinitionContext* context );
		static std::string getName( AergiaCpp14Parser::ClassspecifierContext* context );
		static std::vector<std::string> getNames( AergiaCpp14Parser::MemberdeclarationContext* context );
	};
}