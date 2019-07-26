#pragma once
#include <string>
#include <memory>
#include <vector>
#include "Definitions.hpp"
#include "MemberAccessibility.hpp"

namespace Aergia::DataStructures
{
	class MethodContext;
	class ClassContext;

	class IContext
	{
		IContext* const _parent;
		MemberAccessibility _accessability;
	protected:
		IContext( IContext* parent, MemberAccessibility accessibility ) noexcept :_parent( parent ), _accessability( accessibility ) {}
	public:
		template<typename T>
		T* findInChildren( std::string const& name )
		{
			throw std::runtime_error( "not implemented" );
		}

		template<>
		ClassContext* findInChildren( std::string const& name )
		{
			IContext* current = this;
			while (current != nullptr)
			{
				auto result = current->getClass( name );
				if (result != nullptr)
					return result;
				current = current->parent();
			}
			return nullptr;
		}

		IContext* parent() noexcept { return _parent; }
		virtual std::string const& getName() const noexcept = 0;

		virtual NamespaceContext* getNamespace( std::string const& name ) = 0;

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