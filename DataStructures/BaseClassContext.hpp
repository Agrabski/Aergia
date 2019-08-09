#pragma once
#include "Definitions.hpp"
#include "ClassContext.hpp"

namespace Aergia::DataStructures
{
	class BaseClassContext
	{
		gsl::not_null<TypeContext*> const _type;
		static const inline std::string _name;
		MemberAccessibility _accesibility;
		gsl::not_null<TypeContext*> _parent;
	public:
		BaseClassContext( gsl::not_null<TypeContext*> parent, MemberAccessibility accessibility, gsl::not_null<TypeContext*> type );
		gsl::not_null<TypeContext*> getType() const noexcept { return _type; }
		MemberAccessibility accesibility() const noexcept { return _accesibility; }
		std::string const& getName() const noexcept;
	};
}