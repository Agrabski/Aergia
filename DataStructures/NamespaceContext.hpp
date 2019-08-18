#pragma once
#include <vector>
#include <map>
#include <stdexcept>
#include "QualifiedName.hpp"
#include "Definitions.hpp"
#include "INamespaceImportable.hpp"
#include "IContext.hpp"
#include "ClassContext.hpp"
#include "MethodContext.hpp"
#include "ITypeImportable.hpp"


namespace Aergia::DataStructures
{
	class NamespaceContext : public IContext, public INamespaceImportable, public ITypeImportable
	{
		std::vector< std::unique_ptr<NamespaceContext>> _namespaces;
		std::vector< std::unique_ptr<MethodContext>> _functions;
		std::vector<std::unique_ptr<TypeContext>> _classes;
		std::vector< std::unique_ptr<VariableContext>> _globals;
		std::string _name;

		void bootstrapPrimitives();
	public:
		NamespaceContext( std::string const& name, IContext* const parent ) : _name( std::move( name ) ), IContext( parent, MemberAccessibility::None ) { }
		NamespaceContext() noexcept : _name( "GLOBAL_NAMESPACE" ), IContext( nullptr, MemberAccessibility::None ) { bootstrapPrimitives(); }

		std::string const& getName() const noexcept override
		{
			return _name;
		}

		NamespaceContext* getNamespace( std::string const& name ) noexcept override
		{
			for (auto& ns : _namespaces)
				if (ns->getName() == name)
					return ns.get();
			return nullptr;
		}

		MethodContext* getMethod( std::string const& name ) noexcept override
		{
			for (auto& ns : _functions)
				if (ns->getName() == name)
					return ns.get();
			return nullptr;
		}

		TypeContext* getClass( std::string const& name ) noexcept override
		{
			for (auto& ns : _classes)
				if (ns->getName() == name)
					return ns.get();
			return nullptr;
		}

		VariableContext* getVariable( std::string const& name ) noexcept override
		{
			for (auto& ns : _globals)
				if (ns->getName() == name)
					return ns.get();
			return nullptr;

		}

		std::vector<gsl::not_null<IContext*>> getMembers( std::string const& name ) override
		{
			std::vector<gsl::not_null<IContext*>>result;
			IContext* tmp = getNamespace( name );
			if (tmp != nullptr)
				result.push_back( tmp );
			tmp = getMethod( name );
			if (tmp != nullptr)
				result.push_back( tmp );
			tmp = getClass( name );
			if (tmp != nullptr)
				result.push_back( getClass( name ) );
			return std::move( result );
		}

		bool appendMember( std::unique_ptr<NamespaceContext> && newMember ) override
		{
			_namespaces.push_back(std::move( newMember));
			return true;
		}

		bool appendMember( std::unique_ptr<MethodContext>&& newMember ) override
		{
			_functions.push_back(std::move( newMember ));
			return true;
		}

		bool appendMember( std::unique_ptr<TypeContext>&& newMember ) override
		{
			_classes.push_back(std::move( newMember  ));
			return true;
		}

		bool appendMember( std::unique_ptr<VariableContext>&& newMember ) override
		{
			_globals.push_back(std::move(newMember ));
			return true;
		}

		TypeContext* resolveTypeInImports( QualifiedName name ) noexcept override
		{
			if (name.levelCount() == 1)
			{
				auto alias = resolveInAliases( name.peekQualificationLevel() );
				if (alias != nullptr)
					return alias;
			}
			return getInImportedNamespace<TypeContext>( name );
		}
	};

}