#include "pch.h"
#include "PrettyPrinter.hpp"

void Aergia::Utilities::PrettyPrinter::prettyPrint(std::ostream& stream, gsl::not_null<AergiaCpp14Parser::TranslationunitContext*> treeRoot)
{
	PrintingVisitor visitor(stream, _configuration);
	antlr4::tree::ParseTreeWalker::DEFAULT.walk(&visitor, treeRoot.get());
}

constexpr Aergia::Utilities::PrettyPrinter::PrintingVisitor::PrintingVisitor(std::ostream& stream, PrettyPrinterConfiguration const& configuration):
	_stream(stream), _configuration(configuration)
{
}

void Aergia::Utilities::PrettyPrinter::PrintingVisitor::visitTerminal(antlr4::tree::TerminalNode* node)
{
	if (node->getSymbol()->EOF == node->getSymbol()->getType())
		return;
	_stream << node->getText() << " ";
}

void Aergia::Utilities::PrettyPrinter::PrintingVisitor::exitPreprocessorDirective(AergiaCpp14Parser::PreprocessorDirectiveContext* node)
{
	_stream << std::endl;
}
