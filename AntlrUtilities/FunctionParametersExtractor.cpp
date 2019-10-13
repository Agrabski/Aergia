#include "pch.h"
#include "FunctionParametersExtractor.hpp"
#include <gsl.h>

antlrcpp::Any Aergia::Utilities::FunctionParametersExtractor::FunctionParametersExtractorVisitor::visitParameterdeclaration(AergiaCpp14Parser::ParameterdeclarationContext* context)
{
	auto name = context->declarator()->getText();
	auto indirection = gsl::narrow<unsigned>(std::count(name.begin(), name.end(), '*'));
	name.erase(std::remove(name.begin(), name.end(), '*'));
	_result.push_back(Parameter
		{
			._name = name,
			._type = context->declspecifierseq()->getText(),
			._indirectionLevel = indirection
		});
	return antlrcpp::Any();
}

std::vector<Aergia::Utilities::FunctionParametersExtractor::Parameter> Aergia::Utilities::FunctionParametersExtractor::extractParameters(gsl::not_null<AergiaCpp14Parser::ParametersandqualifiersContext*> context)
{
	FunctionParametersExtractorVisitor visitor;
	visitor.visit(context);
	return visitor._result;
}
