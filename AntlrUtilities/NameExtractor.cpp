#include "pch.h"
#include "NameExtractor.hpp"

std::string Aergia::Utilities::NameExtractor::getName( AergiaCpp14Parser::NamespacedefinitionContext* context )
{
	NamespaceNameExtractionVisitor visitor;


	auto x = visitor.visit( context ).as<std::string>();
	return x;
}

std::string Aergia::Utilities::NameExtractor::getName( AergiaCpp14Parser::ClassspecifierContext* context )
{
	ClassNameExtractionVisitor visitor;
	auto x = visitor.visit( context ).as<std::string>();
	return x;
}

std::string Aergia::Utilities::NameExtractor::getName( AergiaCpp14Parser::FunctiondefinitionContext* context )
{
	FunctionNameExtractionVisitor visitor;
	auto  t = context->getText();
	auto x = visitor.visit( context ).as<std::string>();
	return x;
}

std::vector<std::string> Aergia::Utilities::NameExtractor::getNames( AergiaCpp14Parser::MemberdeclarationContext* context )
{
	VariableNameExtractionVisitor visitor;
	auto result = visitor.visit( context ).as<std::vector<std::string>>();
	return std::move( result );
}

antlrcpp::Any Aergia::Utilities::NameExtractor::NamespaceNameExtractionVisitor::visitOriginalnamespacedefinition( AergiaCpp14Parser::OriginalnamespacedefinitionContext* context )
{

	return context->Identifier()->getText();
}

antlrcpp::Any Aergia::Utilities::NameExtractor::NamespaceNameExtractionVisitor::aggregateResult( antlrcpp::Any prevResult, const antlrcpp::Any& nextResult )
{
	if (prevResult.isNotNull())
		return prevResult;
	return nextResult;
}

antlrcpp::Any Aergia::Utilities::NameExtractor::ClassNameExtractionVisitor::visitClassname( AergiaCpp14Parser::ClassnameContext* context )
{
	auto result = context->getText();
	return result;
}

antlrcpp::Any Aergia::Utilities::NameExtractor::ClassNameExtractionVisitor::aggregateResult( antlrcpp::Any prevResult, const antlrcpp::Any& nextResult )
{
	if (prevResult.isNotNull())
		return prevResult;
	return nextResult;
}

antlrcpp::Any Aergia::Utilities::NameExtractor::VariableNameExtractionVisitor::visitIdexpression( AergiaCpp14Parser::IdexpressionContext* context )
{
	return std::vector<std::string>{context->getText()};
}

antlrcpp::Any Aergia::Utilities::NameExtractor::VariableNameExtractionVisitor::aggregateResult( antlrcpp::Any prevResult, const antlrcpp::Any& nextResult )
{
	std::vector<std::string>result;
	if (prevResult.isNotNull())
	{
		auto const prev = prevResult.as<std::vector<std::string>>();
		for (auto const& x : prev)
			result.push_back( x );
	}
	if (nextResult.isNotNull())
	{
		auto const prev = nextResult.as<std::vector<std::string>>();
		for (auto const& x : prev)
			result.push_back( x );
	}
	return result;
}

antlrcpp::Any Aergia::Utilities::NameExtractor::FunctionNameExtractionVisitor::visitIdexpression( AergiaCpp14Parser::IdexpressionContext* context)
{
	return context->getText();
}

antlrcpp::Any Aergia::Utilities::NameExtractor::FunctionNameExtractionVisitor::aggregateResult( antlrcpp::Any prevResult, const antlrcpp::Any& nextResult )
{
	if (prevResult.isNotNull())
		return prevResult;
	return nextResult;
}
