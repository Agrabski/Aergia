#pragma once
#include "../packages/Microsoft.Gsl.0.1.2.1/build/native/include/gsl.h"
#include "..//Lexer/AergiaCpp14Parser.h"

namespace Aergia::Utilities
{
	using antlr4::RuleContext;
	using gsl::not_null;

	class TreeCloner
	{
		antlr4::CommonTokenStream& _tokens;
		static inline TreeCloner* _instance = nullptr;
	public:
		TreeCloner( antlr4::CommonTokenStream& tokens ) : _tokens( tokens )
		{
			delete _instance;
			_instance = this;
		}
		static TreeCloner* instance() noexcept { return _instance; }
		std::unique_ptr<RuleContext> cloneStatementSeq( not_null<AergiaCpp14Parser::StatementseqContext*> original );
	};
}