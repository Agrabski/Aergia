#pragma once
#include <string>
#include <memory>
#include <vector>
#include "Definitions.hpp"

namespace Aergia::DataStructures
{
	class MethodContext;
	class ClassContext;

	class IContext
	{
		IContext * const _parent;
	protected:
		IContext( IContext * const parent ) noexcept :_parent( parent ) {}
	public:
		IContext * parent() noexcept { return _parent; }
		virtual std::string const& getName() const noexcept = 0;

		virtual NamespaceContext * getNamespace( std::string const& name ) = 0;

		virtual MethodContext* getMethod( std::string const& name ) = 0;

		virtual ClassContext* getClass( std::string const& name ) = 0;

		virtual VariableContext* getVariable( std::string const& name ) = 0;

		virtual std::vector<IContext*>&& getMembers( std::string const& name ) = 0;

		virtual bool appendMember( NamespaceContext&& newMember ) = 0;

		virtual bool appendMember( MethodContext&& newMember ) = 0;

		virtual bool appendMember( ClassContext&& newMember ) = 0;

		virtual bool appendMember( VariableContext&& newMember ) = 0;

		virtual ~IContext() = default;
	};
}