#include "pch.h"
#include "PrettyPrinter.hpp"
#include "TokenStream.h"
#include "Token.h"

Aergia::IO::PrettyPrinter::PrettyPrinter( PrettyPrinterConfiguration&& config )
{
}

void Aergia::IO::PrettyPrinter::prettyPrint( antlr4::TokenStream& tokenStream, std::ostream& outputStream )
{
	while (tokenStream.size() - tokenStream.index() > 2)
	{
		outputStream << tokenStream.get( tokenStream.index() )->getText() << " ";
		tokenStream.consume();
	}
}
