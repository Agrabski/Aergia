#pragma once
#include "antlr4-common.h"
#include "PrettyPrinterConfiguration.hpp"

namespace Aergia::IO
{
	class PrettyPrinter
	{
	public:
		PrettyPrinter( PrettyPrinterConfiguration&& config );
		void prettyPrint( antlr4::TokenStream& tokenStream, std::ostream& outputStream );
	};
}