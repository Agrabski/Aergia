#pragma once
#include <Token.h>


namespace Aergia::Visitors
{
	struct Rewrite
	{
		antlr4::Token* _from;
		antlr4::Token* _to;
		std::string _replaceBy;
	};
}