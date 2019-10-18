#pragma once
#include "Definitions.hpp"
#include "ClassContext.hpp"

namespace Aergia::DataStructures
{
	class BaseClassContext : public IContext
	{
		gsl::not_null<TypeContext*> const _type;

	public:

		BaseClassContext( gsl::not_null<TypeContext*> parent, MemberAccessibility accessibility, gsl::not_null<TypeContext*> type );
		gsl::not_null<TypeContext*> getType() const noexcept { return _type; }


		std::string const& getName() const noexcept final;

	};
}