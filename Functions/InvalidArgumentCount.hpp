#pragma once
#include "FunctionExecutionException.hpp"

namespace Aergia::Functions
{
	class InvalidArgumentCountException : public FunctionExecutionException
	{
	public:
		InvalidArgumentCountException( FunctionCall const& call,unsigned expected,unsigned got ) : FunctionExecutionException( call ) {}
	};
}