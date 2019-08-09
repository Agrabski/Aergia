#pragma once
#include "Definitions.hpp"
#include "IContext.hpp"
#include "MethodContext.hpp"
#include "VariableContext.hpp"
#include "BaseClassContext.hpp"


namespace Aergia::DataStructures
{
	class IContext;
	class BaseClassContext;

	class TypeContext : public IContext
	{
		std::string _name;
		std::vector<VariableContext> _fields;
		std::vector<MethodContext> _methods;
		std::vector<TypeContext> _internalClasses;
		std::vector<BaseClassContext> _bases;
	public:

		std::vector<BaseClassContext> const& getBases() const noexcept { return _bases; }

		void appendBase( BaseClassContext&& base ) { _bases.push_back( base ); }

		TypeContext( std::string name, IContext* parent, MemberAccessibility accessibility ) : _name( std::move( name ) ), IContext( parent, accessibility ) {}

		std::string const& getName() const noexcept override;

		NamespaceContext* getNamespace( std::string const& name ) noexcept override;

		MethodContext* getMethod( std::string const& name ) noexcept override;

		TypeContext* getClass( std::string const& name ) noexcept override;

		std::vector<gsl::not_null<IContext*>> getMembers( std::string const& name ) override;

		bool appendMember( NamespaceContext&& newMember ) noexcept override;

		bool appendMember( MethodContext&& newMember ) override;

		bool appendMember( TypeContext&& newMember ) override;

		VariableContext* getVariable( std::string const& name ) noexcept override;

		bool appendMember( VariableContext&& newMember ) override;


	};
}