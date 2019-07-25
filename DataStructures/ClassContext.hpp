#pragma once
#include "IContext.hpp"
#include "MethodContext.hpp"
#include "VariableContext.hpp"


namespace Aergia::DataStructures
{
	class IContext;

	class ClassContext : public IContext
	{
		std::string _name;
		std::vector<VariableContext> _fields;
		std::vector<MethodContext> _methods;
		std::vector<ClassContext> _internalClasses;
	public:
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