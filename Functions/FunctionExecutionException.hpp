#pragma once
#include <exception>
#include "FunctionCall.hpp"

namespace Aergia::Functions
{
	class FunctionExecutionException : public std::runtime_error
	{
	public:
		FunctionExecutionException( FunctionCall const& call ) : runtime_error( call.toString() ) {}
	};
}