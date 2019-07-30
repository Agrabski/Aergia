#pragma once
#include "IContext.hpp"
#include "VariableContext.hpp"

namespace Aergia::DataStructures
{
	class MethodContext : public IContext
	{
		std::string const _name;
		std::vector<VariableContext> _paramters;
		ClassContext* _returnValue;

	public:

		MethodContext( std::string name, std::vector<VariableContext>&& variables, ClassContext* returnValue, IContext* parent, MemberAccessibility accessibility );

		MethodContext( std::string name, IContext* parent, MemberAccessibility accessibility );


		std::string const& getName() const noexcept override;


		NamespaceContext* getNamespace( std::string const& name ) override;

		MethodContext* getMethod( std::string const& name ) override;

		ClassContext* getClass( std::string const& name ) override;

		std::vector<IContext*> getMembers( std::string const& name ) override;

		bool appendMember( NamespaceContext&& newMember ) override;

		bool appendMember( MethodContext&& newMember ) override;

		bool appendMember( ClassContext&& newMember ) override;


		VariableContext* getVariable( std::string const& name ) override;

		bool appendMember( VariableContext&& newMember ) override;

	};
}