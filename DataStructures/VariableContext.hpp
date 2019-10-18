#pragma once
#include <string> 
#include <gsl.h>
#include "IContext.hpp"

namespace Aergia::DataStructures
{
	class IContext;
	class TypeContext;
	class VariableContext : public IContext
	{
		std::string _name;
		TypeContext* _type;
		unsigned _pointerIndirectionLevel = 0U;
	public:

		VariableContext( std::string name, TypeContext* type, IContext* parent, MemberAccessibility accessibility, unsigned indirectionLevel );

		unsigned pointerIndirectionLevel() const noexcept { return _pointerIndirectionLevel; }
		TypeContext* getType() noexcept;
		TypeContext const* getType() const noexcept { return _type; }

		std::string const& getName() const noexcept final;

	};
}