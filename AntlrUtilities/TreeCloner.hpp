#pragma once
#include <gsl.h>
#include "..//Lexer/AergiaCpp14Parser.h"

namespace Aergia::Utilities
{
	using antlr4::RuleContext;
	using gsl::not_null;

	class TreeCloner
	{
	public:
		std::unique_ptr<RuleContext> cloneStatementSeq( not_null<AergiaCpp14Parser::StatementseqContext*> original );
	};
}