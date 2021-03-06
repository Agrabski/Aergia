#include "pch.h"
#include "NameExtractor.hpp"

std::string Aergia::Utilities::NameExtractor::getName( gsl::not_null<AergiaCpp14Parser::NamespacedefinitionContext*> context )
{
	NamespaceNameExtractionVisitor visitor;

	auto t = context->getText();
	auto x = visitor.visit( context );
	if (x.isNull())
		throw NameNotFoundException( context->start->getLine(), context->start->getCharPositionInLine() );
	assert( x.is<std::string>() );
	return x.as<std::string>();
}

std::string Aergia::Utilities::NameExtractor::getName( AergiaCpp14Parser::ClassspecifierContext* context )
{
	ClassNameExtractionVisitor visitor;
	auto x = visitor.visit( context ).as<std::string>();
	return x;
}

std::string Aergia::Utilities::NameExtractor::getName( AergiaCpp14Parser::FunctiondefinitionContext* context )
{
	assert( context != nullptr );

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
	assert( context != nullptr );

	return context->Identifier()->getText();
}

antlrcpp::Any Aergia::Utilities::NameExtractor::NamespaceNameExtractionVisitor::aggregateResult( antlrcpp::Any prevResult, const antlrcpp::Any& nextResult ) noexcept
{
	if (prevResult.isNotNull())
		return prevResult;
	return nextResult;
}

antlrcpp::Any Aergia::Utilities::NameExtractor::ClassNameExtractionVisitor::visitClassname( AergiaCpp14Parser::ClassnameContext* context )
{
	assert(context != nullptr);
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
	assert(context != nullptr);
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
	assert(context != nullptr);
	return context->getText();
}

antlrcpp::Any Aergia::Utilities::NameExtractor::FunctionNameExtractionVisitor::aggregateResult( antlrcpp::Any prevResult, const antlrcpp::Any& nextResult ) noexcept
{
	if (prevResult.isNotNull())
		return prevResult;
	return nextResult;
}
