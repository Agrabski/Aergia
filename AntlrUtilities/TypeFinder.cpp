#include "pch.h"
#include "TypeFinder.hpp"

std::string Aergia::Utilities::TypeFinder::getType( AergiaCpp14Parser::DeclspecifierseqContext* context )
{
	ClassNameExtractionVisitor visitor;
	auto result = visitor.visit( context ).as<std::string>();
	return result;
}

antlrcpp::Any Aergia::Utilities::TypeFinder::ClassNameExtractionVisitor::visitTypespecifier( AergiaCpp14Parser::TypespecifierContext* ctx )
{
	assert( ctx != nullptr );
	return ctx->getText();
}
