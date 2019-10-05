#include "pch.h"
#include "FunctionParametersExtractor.hpp"

antlrcpp::Any Aergia::Utilities::FunctionParametersExtractor::FunctionParametersExtractorVisitor::visitParameterdeclaration(AergiaCpp14Parser::ParameterdeclarationContext* context)
{
	_result.push_back(Parameter{ ._name = context->declarator()->getText(),._type = context->declspecifierseq()->getText() });
	return antlrcpp::Any();
}

std::vector<Aergia::Utilities::FunctionParametersExtractor::Parameter> Aergia::Utilities::FunctionParametersExtractor::extractParameters(gsl::not_null<AergiaCpp14Parser::ParametersandqualifiersContext*> context)
{
	FunctionParametersExtractorVisitor visitor;
	visitor.visit(context);
	return visitor._result;
}
