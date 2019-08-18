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


		NamespaceContext* getNamespace( std::string const& name ) override;

		MethodContext* getMethod( std::string const& name ) override;

		TypeContext* getClass( std::string const& name ) override;

		std::vector<gsl::not_null<IContext*>> getMembers( std::string const& name ) override;

		bool appendMember( std::unique_ptr<NamespaceContext>&& newMember ) override { return false; }

		bool appendMember( std::unique_ptr<MethodContext>&& newMember ) override { return false; }

		bool appendMember( std::unique_ptr<TypeContext>&& newMember ) override { return false; }


		VariableContext* getVariable( std::string const& name ) override;

		bool appendMember( std::unique_ptr<VariableContext>&& newMember ) override;

	};
}