#pragma once
#include "..//Lexer/AergiaCpp14Parser.h"
#include "..//Visitors/BaseVisitor.hpp"
#include "..//IO/Configuraton.hpp"
#include "..//Visitors/CurrentContextVisitor.hpp"

namespace Aergia
{
	class Processor
	{
		Visitors::CurrentContextVisitor _contextProvider;
		std::vector<std::unique_ptr<Visitors::BaseVisitor>> _visitors;
	public:
		Processor( IO::Configuration const& );

		void parseText( AergiaCpp14Parser::TranslationunitContext* root );
		void setupRewriter( antlr4::TokenStreamRewriter& rewriter );
	};
}
