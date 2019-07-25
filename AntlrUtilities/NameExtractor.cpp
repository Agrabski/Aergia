#include "pch.h"
#include "NameExtractor.hpp"

std::string Aergia::Utilities::NameExtractor::getName( AergiaCpp14Parser::NamespacedefinitionContext* context )
{
	NameExtractionVisitor visitor;


	auto x = visitor.visit( context ).as<std::string>();
	return x;
}

antlrcpp::Any Aergia::Utilities::NameExtractor::NameExtractionVisitor::visitOriginalnamespacedefinition( AergiaCpp14Parser::OriginalnamespacedefinitionContext* context )
{

	return context->Identifier()->getText();
}
