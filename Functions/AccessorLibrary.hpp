#pragma once
#include <vector>
#include <map>
#include <functional>
#include <exception>
#include "GetBases.hpp"
#include "GetFields.hpp"
#include "../DataStructures/IContext.hpp"
#include "Variable.hpp"

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

	class AccessorException : public std::runtime_error
	{
	public:
		AccessorException(Variable& current, not_null<IContext*> context, std::string accessorName, std::exception& innerException);
	};

	class AccessorLibrary
	{
		static inline std::map<std::string, std::function<Variable(Variable&, not_null<IContext*>)>> _accessors =
		{
			{"bases"s, [](auto& a,auto b) {return getBases(a); }},
			{"fields"s,[](auto& a,auto b) {return getFields(a); }}

		};
	public:
		static Variable resolveAccess(Variable& current, not_null<IContext*>context, std::string accessorName);
	};
}