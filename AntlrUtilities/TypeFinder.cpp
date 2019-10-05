#include "pch.h"
#include "TypeFinder.hpp"

using gsl::not_null;

std::string Aergia::Utilities::TypeFinder::getType( not_null<AergiaCpp14Parser::DeclspecifierseqContext*> context )
{
	ClassNameExtractionVisitor visitor;
	auto result = visitor.visit( context ).as<std::string>();
	return result;
}

std::string Aergia::Utilities::TypeFinder::getType( not_null<AergiaCpp14Parser::BasespecifierContext*> context )
{
	assert( context->basetypespecifier() != nullptr );
	return context->basetypespecifier()->getText();
}

antlrcpp::Any Aergia::Utilities::TypeFinder::ClassNameExtractionVisitor::visitTypespecifier( AergiaCpp14Parser::TypespecifierContext* ctx )
{
	assert( ctx != nullptr );
	return ctx->getText();
}
