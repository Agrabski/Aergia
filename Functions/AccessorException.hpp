#pragma once
#include <exception>
#include <gsl.h>
#include "../DataStructures/IContext.hpp"
#include "Variable.hpp"

namespace Aergia::Functions
{
	class AccessorException : public std::runtime_error
	{
	protected:
		virtual std::string typeSpecificMessage() { using namespace std::literals; return ""s; }
	public:
		AccessorException(Variable& current, std::string accessorName, std::exception& innerException);
		AccessorException(Variable& current, std::string accessorName);
		AccessorException(Variable& current, std::string const& accessorName, std::string const& message);
	};
}
