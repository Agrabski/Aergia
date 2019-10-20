#include "pch.h"
#include "ImportHelper.hpp"

std::string Aergia::Utilities::ImportHelper::getQualifiedName( AergiaCpp14Parser::UsingdirectiveContext* context )
{
	assert(context != nullptr);
	auto* const nestedns = context->nestednamespecifier();
	gsl::not_null const name = context->namespacename();
	std::string result;
	if (nestedns != nullptr)
		result += nestedns->getText();
	result += name->getText();
	return result;
}
