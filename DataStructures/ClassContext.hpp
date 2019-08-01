#pragma once
#include "IContext.hpp"
#include "MethodContext.hpp"
#include "VariableContext.hpp"
#include "BaseClassContext.hpp"


namespace Aergia::DataStructures
{
	class IContext;
	class BaseClassContext;

	class ClassContext : public IContext
	{
		std::string _name;
		std::vector<VariableContext> _fields;
		std::vector<MethodContext> _methods;
		std::vector<ClassContext> _internalClasses;
		std::vector<BaseClassContext> _bases;
	public:

		std::vector<BaseClassContext> const& getBases() const noexcept { return _bases; }

		void appendBase( BaseClassContext&& base ) { _bases.push_back( base ); }

		ClassContext( std::string name, IContext* parent, MemberAccessibility accessibility ) : _name( std::move( name ) ), IContext( parent, accessibility ) {}

		std::string const& getName() const noexcept override;

		NamespaceContext* getNamespace( std::string const& name ) override;

		MethodContext* getMethod( std::string const& name ) override;

		ClassContext* getClass( std::string const& name ) override;

		std::vector<gsl::not_null<IContext*>> getMembers( std::string const& name ) override;

		bool appendMember( NamespaceContext&& newMember ) override;

		bool appendMember( MethodContext&& newMember ) override;

		bool appendMember( ClassContext&& newMember ) override;

		VariableContext* getVariable( std::string const& name ) override;

		bool appendMember( VariableContext&& newMember ) override;


	};
}