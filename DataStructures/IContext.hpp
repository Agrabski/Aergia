#pragma once
#include <string>
#include <memory>
#include <vector>
#include <gsl.h>
#include "Definitions.hpp"
#include "MemberAccessibility.hpp"
#include "QualifiedName.hpp"

namespace Aergia::DataStructures
{
	class MethodContext;
	class TypeContext;

	class IContext
	{
		IContext* const _parent;
		MemberAccessibility _accessability;
	protected:
		IContext* getRoot();
		IContext( IContext* parent, MemberAccessibility accessibility ) noexcept :_parent( parent ), _accessability( accessibility ) {}
	public:
		template<typename T>
		T* findChildOfType( std::string const& name )
		{
			static_assert(sizeof( T ) != sizeof( T ), "not implemented");
		}

		template<>
		TypeContext* findChildOfType( std::string const& name )
		{
			return getClass( name );
		}

		template<>
		MethodContext* findChildOfType( std::string const& name )
		{
			return getMethod( name );
		}

		IContext* parent() noexcept { return _parent; }
		virtual std::string const& getName() const noexcept = 0;

		virtual NamespaceContext* getNamespace( std::string const& name ) = 0;

		virtual MethodContext* getMethod( std::string const& name ) = 0;

		virtual TypeContext* getClass( std::string const& name ) = 0;

		virtual VariableContext* getVariable( std::string const& name ) = 0;

		virtual std::vector<gsl::not_null<IContext*>> getMembers( std::string const& name ) = 0;

		virtual bool appendMember( NamespaceContext&& newMember ) = 0;

		virtual bool appendMember( MethodContext&& newMember ) = 0;

		virtual bool appendMember( TypeContext&& newMember ) = 0;

		virtual bool appendMember( VariableContext&& newMember ) = 0;

		virtual ~IContext() = default;


		/// <summary>
		/// When overriden, finds type in imported namespaces and type aliases
		/// </summary>
		/// <param name="name">Qualified name of searched type, relative to current context (ex: when looking for A::B::C in namespace B is called with C)</param>
		/// <returns></returns>
		virtual TypeContext* resolveTypeInImports( QualifiedName name ) noexcept { return nullptr; }

		virtual MethodContext* resolveMethodInImports( QualifiedName name ) noexcept { return nullptr; }

		virtual VariableContext* resolveVariableInImports( QualifiedName name ) noexcept { return nullptr; }

		MemberAccessibility accesibility() const noexcept { return _accessability; }

		template<typename T>
		T* resolveInImports( QualifiedName name ) noexcept { static_assert(sizeof( T ) != sizeof( T ), "not implemented"); }

		template<>
		TypeContext* resolveInImports( QualifiedName name ) noexcept
		{
			return resolveTypeInImports( name );
		}

		template<>
		MethodContext* resolveInImports( QualifiedName name ) noexcept
		{
			return resolveMethodInImports( name );
		}

		template<typename T>
		T* resolve( QualifiedName qualifiedName, bool fallbackToRoot = true )
		{
			if (qualifiedName.levelCount() == 1)
			{
				auto result = findChildOfType<T>( qualifiedName.peekQualificationLevel() );
				if (result != nullptr)
					return result;
			}

			for (auto member : getMembers( qualifiedName.peekQualificationLevel() ))
			{
				auto result = member->resolve<T>( qualifiedName.next(), fallbackToRoot );
				if (result != nullptr)
					return result;
			}

			auto imported = resolveInImports<T>( qualifiedName );
			if (imported != nullptr)
				return imported;

			auto const root = getRoot();
			if (root != this && fallbackToRoot)
				return getRoot()->resolve<T>( qualifiedName );
			return nullptr;
		}
	};
}