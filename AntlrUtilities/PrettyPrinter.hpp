#pragma once
#include <ostream>
#include <gsl.h>
#include "../Lexer/AergiaCpp14Parser.h"
#include "../Lexer/AergiaCpp14BaseListener.h"
#include "../IO/PrettyPrinterConfiguration.hpp"


namespace Aergia::Utilities
{
	using IO::PrettyPrinterConfiguration;

	class PrettyPrinter
	{
		PrettyPrinterConfiguration _configuration;
		class PrintingVisitor : public AergiaCpp14BaseListener
		{
			std::ostream& _stream;
			PrettyPrinterConfiguration const& _configuration;
			unsigned _indentationLevel = 0U;
		public:
			constexpr PrintingVisitor(std::ostream& stream, PrettyPrinterConfiguration const& configuration);
			void visitTerminal(antlr4::tree::TerminalNode* node) final;
			void exitPreprocessorDirective(AergiaCpp14Parser::PreprocessorDirectiveContext* node) final;
		};
	public:
		constexpr PrettyPrinter(PrettyPrinterConfiguration& configuration) noexcept : _configuration(configuration) {}
		void prettyPrint(std::ostream&stream, gsl::not_null<AergiaCpp14Parser::TranslationunitContext*> treeRoot);
	};
}