#pragma once
#include "Definitions.hpp"
#include "IContext.hpp"
#include "VariableContext.hpp"

namespace Aergia::DataStructures
{
	class MethodContext : public IContext
	{
		std::string const _name;
		std::vector<std::unique_ptr<VariableContext>> _paramters;
		TypeContext* _returnValue;

	public:

		TypeContext* returnValue() const noexcept;
		std::vector<std::unique_ptr<VariableContext>> const& parameters() const noexcept;

		MethodContext( std::string name, std::vector<std::unique_ptr<VariableContext>>&& parameters, TypeContext* returnValue, IContext* parent, MemberAccessibility accessibility );

		std::string const& getName() const noexcept override;

	};
}