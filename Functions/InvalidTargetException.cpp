#include "InvalidTargetException.hpp"

std::string Aergia::Functions::InvalidTargetException::typeSpecificMessage()
{
	using namespace std::literals;
	return "expected type: "s + _targetTypeName + " got type: "s + _recievedTypeName;
}

Aergia::Functions::InvalidTargetException::InvalidTargetException(Variable& current, std::string accessorName, std::string targetTypeName, std::string recievedTypeName)
	: AccessorException(current, accessorName), _targetTypeName(targetTypeName), _recievedTypeName(recievedTypeName)
{
}
