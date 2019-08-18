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


		virtual std::string const& getName() const noexcept;

		virtual NamespaceContext* getNamespace( std::string const& name ) { return nullptr; }

		virtual MethodContext* getMethod( std::string const& name ) { return nullptr; }

		virtual TypeContext* getClass( std::string const& name ) { return nullptr; }

		virtual VariableContext* getVariable( std::string const& name ) { return nullptr; }

		virtual std::vector<gsl::not_null<IContext*>> getMembers( std::string const& name ) { return std::vector<gsl::not_null<IContext*>>(); }

		virtual bool appendMember( NamespaceContext&& newMember ) { return false; }

		virtual bool appendMember( MethodContext&& newMember ) { return false; }

		virtual bool appendMember( TypeContext&& newMember ) { return false; }

		virtual bool appendMember( VariableContext&& newMember ) { return false; }
	};
}