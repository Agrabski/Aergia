#pragma once
#include <TokenStreamRewriter.h>
#include "..//Lexer/AergiaCpp14BaseListener.h"

namespace Aergia::Visitors
{
	class BaseVisitor : public AergiaCpp14BaseListener
	{
	public:
		virtual void setupRewriter( antlr4::TokenStreamRewriter& const rewriter )const = 0;
	};
}