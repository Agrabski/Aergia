#pragma once
#include <string>
#include "../Lexer/AergiaCpp14Parser.h"
#include "../Lexer/AergiaCpp14BaseVisitor.h"


namespace Aergia::Utilities
{
	class ImportHelper
	{
		class NamespaceNameExtractionVisitor : public AergiaCpp14BaseVisitor
		{
		public:
			antlrcpp::Any visitOriginalnamespacedefinition(AergiaCpp14Parser::OriginalnamespacedefinitionContext* context) override;
			antlrcpp::Any aggregateResult(antlrcpp::Any prevResult, const antlrcpp::Any& nextResult)override;
		};

	public:
		static std::string getQualifiedName( AergiaCpp14Parser::UsingdirectiveContext* context );
	};
}