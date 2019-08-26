#pragma once
#include <vector>
#include <map>
#include <functional>
#include "../DataStructures/IContext.hpp"
#include "FunctionCall.hpp"


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
		static inline std::map<std::string, std::function<vector<not_null<IContext*>>( vector<not_null<IContext*>>&, not_null<IContext*>, FunctionCall const& )>> _functions =
		{
			{"typeof"s,&typeof}
		};
	public:
		static vector<not_null<IContext*>> resolveCall( vector<not_null<IContext*>>& current, not_null<IContext*>context, FunctionCall const& function );
	};
}