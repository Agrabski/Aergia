#pragma once
#include <ostream>
#include <gsl.h>
#include "../Lexer/AergiaCpp14Parser.h"
#include "../IO/PrettyPrinterConfiguration.hpp"


namespace Aergia::Utilities
{
	using IO::PrettyPrinterConfiguration;

	class PrettyPrinter
	{
		PrettyPrinterConfiguration _configuration;
	public:
		constexpr PrettyPrinter(PrettyPrinterConfiguration& configuration) noexcept : _configuration(configuration) {}
		void prettyPrint(std::ostream&stream, gsl::not_null<AergiaCpp14Parser::TranslationunitContext*> treeRoot);
	};
}