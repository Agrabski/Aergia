#pragma once
#include "Definitions.hpp"
#include "ClassContext.hpp"
#include "IContext.hpp"

namespace Aergia::DataStructures
{
	class BaseClassContext : public IContext
	{
		ClassContext* const _type;
		static const inline std::string _name;
	public:
		BaseClassContext( ClassContext* parent, MemberAccessibility accessibility, ClassContext* type );
		ClassContext* getType() const { return _type; }

		std::string const& getName() const noexcept override;

		NamespaceContext* getNamespace( std::string const& name )override { return nullptr; }

		MethodContext* getMethod( std::string const& name )override { return nullptr; }

		ClassContext* getClass( std::string const& name )override { return nullptr; }

		VariableContext* getVariable( std::string const& name )override { return nullptr; }

		std::vector<IContext*> getMembers( std::string const& name )override { return std::vector<IContext*>(); }

		bool appendMember( NamespaceContext&& newMember )override { return false; }

		bool appendMember( MethodContext&& newMember )override { return false; }

		bool appendMember( ClassContext&& newMember )override { return false; }

		bool appendMember( VariableContext&& newMember )override { return false; }

	};
}