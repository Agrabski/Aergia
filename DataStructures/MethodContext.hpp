#pragma once
#include "Definitions.hpp"
#include "IContext.hpp"
#include "VariableContext.hpp"

namespace Aergia::DataStructures
{
	class MethodContext : public IContext
	{
		std::string const _name;
		std::vector<VariableContext> _paramters;
		TypeContext* _returnValue;

	public:

		TypeContext* returnValue() const noexcept;
		std::vector<VariableContext> const& parameters() const noexcept;

		MethodContext( std::string name, std::vector<VariableContext>&& variables, TypeContext* returnValue, IContext* parent, MemberAccessibility accessibility );

		MethodContext( std::string name, IContext* parent, MemberAccessibility accessibility );


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