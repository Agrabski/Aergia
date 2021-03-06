#pragma once
#include <vector>
#include <map>
#include <functional>
#include <exception>
#include "GetBases.hpp"
#include "GetFields.hpp"
#include "GetType.hpp"
#include "../DataStructures/IContext.hpp"
#include "../DataStructures/NamespaceContext.hpp"
#include "../DataStructures/ClassContext.hpp"
#include "../DataStructures/VariableContext.hpp"
#include "Variable.hpp"
#include "GetAccessibility.hpp"
#include "GetOverloads.hpp"
#include "GetNamespaces.h"
#include "BasciAccessor.hpp"

namespace Aergia::Functions
{
	using std::vector;
	using DataStructures::IContext;
	using std::map;
	using gsl::not_null;
	using namespace std::literals;

	class AccessorNotFoundException : public std::runtime_error
	{
	public:
		AccessorNotFoundException(Variable& current, not_null<IContext*> context, std::string accessorName);
	};

	class AccessorLibrary
	{
		static inline std::map<std::string, std::function<Variable(Variable&, not_null<IContext*>)>> _accessors =
		{
			{"bases"s,			[](auto& a,auto b) {return getBases(a); }},
			{"fields"s,			[](auto& a,auto b) {return BasicAccessor<DataStructures::VariableContext,DataStructures::TypeContext>()(a); }},
			{"type"s,			[](auto& a, auto b) {return getType(a); }},
			{"accessibility"s,	[](auto& a, auto b) {return getAccessibility(a); }},
			{"overloads",		[](auto& a, auto b) {return GetOverloads()(a); }},
			{"namespaces",		[](auto& a, auto b) {return BasicAccessor<DataStructures::NamespaceContext,DataStructures::NamespaceContext>()(a); }}

		};
	public:
		static Variable resolveAccess(Variable& current, not_null<IContext*>context, std::string accessorName);
	};
}