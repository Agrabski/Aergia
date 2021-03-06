#pragma once
#include <vector>
#include <map>
#include "QualifiedName.hpp"
#include "Definitions.hpp"
#include "IContext.hpp"
#include "ClassContext.hpp"
#include "MethodContext.hpp"
#include "Imports.hpp"
#include "Aliases.hpp"

namespace Aergia::DataStructures
{
	class NamespaceContext : public virtual IContext, 
		public Imports<NamespaceContext, TypeContext>,
		public Contains<NamespaceContext,MethodContext,TypeContext,VariableContext>,
		public Aliases<NamespaceContext,TypeContext>
	{
		std::string _name;

		void bootstrapPrimitives();
	public:
		NamespaceContext( std::string const& name, IContext* const parent ) : _name( name ), IContext( parent, MemberAccessibility::None ) { }
		NamespaceContext() noexcept : _name( "GLOBAL_NAMESPACE" ), IContext( nullptr, MemberAccessibility::None ) { bootstrapPrimitives(); }

		std::string const& getName() const noexcept override
		{
			return _name;
		}

		static std::unique_ptr<NamespaceContext> mergeRoots( std::unique_ptr<NamespaceContext>&& a, std::unique_ptr<NamespaceContext>&& b );


	};

}