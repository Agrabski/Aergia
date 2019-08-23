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
		IContext* parent() noexcept { return _parent; }
		IContext const* parent() const noexcept { return _parent; }
		MemberAccessibility accessibility() const noexcept { return _accessability; }
		virtual std::string const& getName() const = 0;

		virtual ~IContext() = default;


	};
}