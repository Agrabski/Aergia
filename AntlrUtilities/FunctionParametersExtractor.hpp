#pragma once
#include <vector>
#include <string>
#include "../Lexer/AergiaCpp14Parser.h"
#include "../Lexer/AergiaCpp14BaseVisitor.h"

namespace Aergia::Utilities
{

	class FunctionParametersExtractor
	{
	public:
		struct Parameter;
	private:
		class FunctionParametersExtractorVisitor : public AergiaCpp14BaseVisitor
		{
		public:
			std::vector<Parameter>_result;
			antlrcpp::Any visitParameterdeclaration(AergiaCpp14Parser::ParameterdeclarationContext* context) override;
		};

	public:
		struct Parameter
		{
			std::string _name;
			std::string _type;
		};
		static std::vector<Parameter> extractParameters(gsl::not_null<AergiaCpp14Parser::ParametersandqualifiersContext*> context);

	};
}
