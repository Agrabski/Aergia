#pragma once
#include <vector>
#include <map>
#include <functional>
#include "../DataStructures/IContext.hpp"
#include "FunctionCall.hpp"
#include "Variable.hpp"
#include "Typeof.hpp"

namespace Aergia::Functions
{
	using std::vector;
	using DataStructures::IContext;
	using std::map;
	using gsl::not_null;
	using namespace std::literals;

	class FunctionLibrary
	{
		static inline std::map<std::string, std::function<Variable( Variable&, not_null<IContext*>, FunctionCall const& )>> _functions =
		{
			{"typeof"s,&typeof}
		};
	public:
		static Variable resolveCall( Variable& current, not_null<IContext*>context, FunctionCall const& function );
	};
}