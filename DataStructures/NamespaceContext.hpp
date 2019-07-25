#pragma once
#include <vector>
#include <map>
#include <stdexcept>
#include "Definitions.hpp"
#include "IContext.hpp"
#include "ClassContext.hpp"
#include "MethodContext.hpp"



namespace Aergia::DataStructures
{
	class NamespaceContext : public IContext
	{
		std::vector<NamespaceContext> _namespaces;
		std::vector<MethodContext> _functions;
		std::vector<ClassContext> _classes;
		std::vector<VariableContext> _globals;
		std::string _name;

	public:
		NamespaceContext( std::string const& name, IContext* const parent ) : _name( name ), IContext( parent ) {}
		NamespaceContext() noexcept : _name( "DEFAULT_NAMESPACE" ), IContext( nullptr ) {}

		std::string const& getName() const noexcept override
		{
			return _name;
		}

		NamespaceContext* getNamespace( std::string const& name ) override
		{
			for (auto& ns : _namespaces)
				if (ns.getName() == name)
					return &ns;
			return nullptr;
		}

		MethodContext* getMethod( std::string const& name ) override
		{
			for (auto& ns : _functions)
				if (ns.getName() == name)
					return &ns;
			return nullptr;
		}

		ClassContext* getClass( std::string const& name ) override
		{
			for (auto& ns : _classes)
				if (ns.getName() == name)
					return &ns;
			return nullptr;
		}

		VariableContext* getVariable( std::string const& name ) noexcept override
		{
			for (auto& ns : _globals)
				if (ns.getName() == name)
					return &ns;
			return nullptr;

		}

		std::vector<IContext*>&& getMembers( std::string const& name ) override
		{
			std::vector<IContext*>result;
			result.push_back( getNamespace( name ) );
			result.push_back( getMethod( name ) );
			result.push_back( getClass( name ) );
			return std::move( result );
		}

		bool appendMember( NamespaceContext&& newMember ) override
		{
			_namespaces.push_back( newMember );
			return true;
		}

		bool appendMember( MethodContext&& newMember ) override
		{
			_functions.push_back( newMember );
			return true;
		}

		bool appendMember( ClassContext&& newMember ) override
		{
			_classes.push_back( newMember );
			return true;
		}

		bool appendMember( VariableContext&& newMember ) override
		{
			_globals.push_back( newMember );
			return true;
		}
	};

}