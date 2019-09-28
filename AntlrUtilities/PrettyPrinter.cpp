#include "pch.h"
#include "PrettyPrinter.hpp"

void Aergia::Utilities::PrettyPrinter::prettyPrint(std::ostream& stream, gsl::not_null<AergiaCpp14Parser::TranslationunitContext*> treeRoot)
{
	stream << treeRoot->getText();
	//todo: implement
}
