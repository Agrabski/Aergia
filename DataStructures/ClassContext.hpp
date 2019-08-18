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
		std::vector< std::unique_ptr<VariableContext>> _fields;
		std::vector< std::unique_ptr<MethodContext>> _methods;
		std::vector<std::unique_ptr<TypeContext>> _internalClasses;
		std::vector<std::unique_ptr<BaseClassContext>> _bases;
	public:

		std::vector<gsl::not_null<BaseClassContext*>> const& getBases() const noexcept;

		void appendBase( BaseClassContext&& base );

		TypeContext( std::string name, IContext* parent, MemberAccessibility accessibility ) : _name( std::move( name ) ), IContext( parent, accessibility ) {}

		std::string const& getName() const noexcept override;

		NamespaceContext* getNamespace( std::string const& name ) noexcept override;

		MethodContext* getMethod( std::string const& name ) noexcept override;

		TypeContext* getClass( std::string const& name ) noexcept override;

		std::vector<gsl::not_null<IContext*>> getMembers( std::string const& name ) override;

		bool appendMember( std::unique_ptr<NamespaceContext>&& newMember ) noexcept override;

		bool appendMember( std::unique_ptr < MethodContext>&& newMember ) override;

		bool appendMember( std::unique_ptr < TypeContext>&& newMember ) override;

		VariableContext* getVariable( std::string const& name ) noexcept override;

		bool appendMember( std::unique_ptr < VariableContext>&& newMember ) override;


	};
}