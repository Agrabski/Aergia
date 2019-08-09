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

		NamespaceContext* getNamespace( std::string const& name ) override;

		MethodContext* getMethod( std::string const& name ) override;

		TypeContext* getClass( std::string const& name ) override;

		std::vector<gsl::not_null<IContext*>> getMembers( std::string const& name ) override;

		bool appendMember( NamespaceContext&& newMember ) override;

		bool appendMember( MethodContext&& newMember ) override;

		bool appendMember( TypeContext&& newMember ) override;

		VariableContext* getVariable( std::string const& name ) override;

		bool appendMember( VariableContext&& newMember ) override;

	};
}