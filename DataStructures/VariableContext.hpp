#pragma once
#include "IContext.hpp"


namespace Aergia::DataStructures
{
	class VariableContext : public IContext
	{
		std::string _name;
		ClassContext* _type;
	public:

		VariableContext( std::string name, ClassContext* type, IContext* parent, MemberAccessibility accessibility );

		ClassContext* getType();

		std::string const& getName() const noexcept override;

		NamespaceContext* getNamespace( std::string const& name ) override;

		MethodContext* getMethod( std::string const& name ) override;

		ClassContext* getClass( std::string const& name ) override;

		std::vector<IContext*>&& getMembers( std::string const& name ) override;

		bool appendMember( NamespaceContext&& newMember ) override;

		bool appendMember( MethodContext&& newMember ) override;

		bool appendMember( ClassContext&& newMember ) override;

		VariableContext* getVariable( std::string const& name ) override;

		bool appendMember( VariableContext&& newMember ) override;

	};
}