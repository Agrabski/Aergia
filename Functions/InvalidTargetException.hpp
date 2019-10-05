#pragma once
#include <gsl.h>
#include "../DataStructures/IContext.hpp"
#include "Variable.hpp"
#include "AccessorException.hpp"

namespace Aergia::Functions
{
	class InvalidTargetException : public AccessorException
	{
	public:
		virtual std::string typeSpecificMessage();

		InvalidTargetException(
			Variable& current, 
			std::string accessorName, 
			std::string targetTypeName,
			std::string recievedTypeName);
		std::string _targetTypeName;
		std::string _recievedTypeName;
	};
}