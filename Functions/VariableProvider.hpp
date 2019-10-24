#pragma once
#include "../DataStructures/IContext.hpp"
#include "../DataStructures/VariableContext.hpp"

namespace Aergia::Functions
{
	class VariableProvider
	{
	public:
		virtual DataStructures::VariableContext* getVariable(std::string name) noexcept = 0;
		virtual DataStructures::IContext const* getVariableValue( std::string const& name ) =0;

	};
}