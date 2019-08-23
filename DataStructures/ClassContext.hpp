#pragma once
#include "Definitions.hpp"
#include "IContext.hpp"
#include "MethodContext.hpp"
#include "VariableContext.hpp"
#include "BaseClassContext.hpp"
#include "Contains.hpp"


namespace Aergia::DataStructures
{
	class IContext;
	class BaseClassContext;

	class TypeContext : public virtual IContext,public Contains<TypeContext,VariableContext,MethodContext,BaseClassContext>
	{
		std::string _name;
		std::vector< std::unique_ptr<VariableContext>> _fields;
		std::vector< std::unique_ptr<MethodContext>> _methods;
		std::vector<std::unique_ptr<TypeContext>> _internalClasses;
		std::vector<std::unique_ptr<BaseClassContext>> _bases;
	public:

		std::vector<gsl::not_null<BaseClassContext*>> const& getBases() const noexcept;

		TypeContext( std::string name, IContext* parent, MemberAccessibility accessibility ) : _name( std::move( name ) ), IContext( parent, accessibility ) {}

		std::string const& getName() const noexcept override;

	};
}