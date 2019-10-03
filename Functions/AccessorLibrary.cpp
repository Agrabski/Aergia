#include "AccessorLibrary.hpp"
#include "../IO/IOManager.hpp"

using namespace Aergia::Functions;

Variable Aergia::Functions::AccessorLibrary::resolveAccess(Variable& current, not_null<IContext*> context, std::string accessorName)
{
	auto function = _accessors.find(accessorName);
	if (function != _accessors.end())
		try
	{
		return function->second(current, context);
	}
	catch (std::exception & e)
	{
		throw AccessorException(current, context, accessorName, e);
	}
	throw AccessorNotFoundException(current, context, accessorName);
}
using namespace std::literals;

Aergia::Functions::AccessorException::AccessorException(Variable& current, not_null<IContext*> context, std::string accessorName, std::exception& innerException) :
	runtime_error("error processing accessor: "s + accessorName + ". inner exception: "s + innerException.what())
{
}

Aergia::Functions::AccessorNotFoundException::AccessorNotFoundException(Variable& current, not_null<IContext*> context, std::string accessorName)
	: runtime_error("accessor not found: " + accessorName)
{
}
