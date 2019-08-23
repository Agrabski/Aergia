#pragma once
#include <gsl.h>
#include "Definitions.hpp"
#include "IContext.hpp"

namespace Aergia::DataStructures
{
	class IContext;
	class VariableContext : public IContext
	{
		std::string _name;
		TypeContext* _type;
	public:

		VariableContext( std::string name, TypeContext* type, IContext* parent, MemberAccessibility accessibility );

		TypeContext* getType();

		std::string const& getName() const noexcept override;

	};
}