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
		NamespaceContext( std::string const& name, IContext* const parent ) : _name( std::move( name ) ), IContext( parent, MemberAccessibility::None ) { }
		NamespaceContext() noexcept : _name( "GLOBAL_NAMESPACE" ), IContext( nullptr, MemberAccessibility::None ) { bootstrapPrimitives(); }

		virtual std::string const& getName() const 
		{
			return _name;
		}

	};

}