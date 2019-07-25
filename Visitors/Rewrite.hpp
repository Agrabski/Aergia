#pragma once
#include "..//Lexer/Antlr_include.hpp"

namespace Aergia::Visitors
{
	struct Rewrite
	{
		antlr4::Token* _from;
		antlr4::Token* _to;
		std::string _replaceBy;
	};
}