#pragma once
#include "../DataStructures/IContext.hpp"

namespace Aergia::Functions
{
	class VariableProvider
	{
	public:

		virtual DataStructures::IContext* getVariableValue( std::string const& name ) =0;

	};
}