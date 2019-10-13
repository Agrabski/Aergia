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
		static inline std::unique_ptr<TreeCloner> _instance = nullptr;
	public:
		TreeCloner( antlr4::CommonTokenStream& tokens ) noexcept : _tokens( tokens )
		{
			_instance = std::unique_ptr<TreeCloner>(this);
		}
		static TreeCloner* instance() noexcept { return _instance.get(); }
		std::unique_ptr<RuleContext> cloneStatementSeq( not_null<AergiaCpp14Parser::StatementseqContext*> original );
		std::unique_ptr<RuleContext> cloneStatement( not_null<AergiaCpp14Parser::StatementContext*> original );
	};
}