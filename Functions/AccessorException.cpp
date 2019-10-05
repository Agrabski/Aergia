#include "AccessorException.hpp"

using gsl::not_null;
using Aergia::DataStructures::IContext;
using namespace std::literals;

Aergia::Functions::AccessorException::AccessorException(Variable& current, std::string accessorName, std::exception& innerException) :
	runtime_error("error processing accessor: "s + accessorName + ". inner exception: "s + innerException.what() + " "s + typeSpecificMessage())
{
}

Aergia::Functions::AccessorException::AccessorException(Variable& current, std::string accessorName)
	: runtime_error("error processing accessor: "s + accessorName + " "s + typeSpecificMessage())
{
}

Aergia::Functions::AccessorException::AccessorException(Variable& current, std::string const& accessorName, std::string const& message)
	: runtime_error("error processing accessor: "s + accessorName + " "s + message)
{
}
