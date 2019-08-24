#pragma once
#include <vector>
#include <map>
#include "../DataStructures/IContext.hpp"

namespace Aergia::Visitors
{
	using std::vector;
	using DataStructures::IContext;
	using std::map;
	using gsl::not_null;

	class FunctionLibrary
	{
	public:
		vector<not_null<IContext*>> resolveCall( vector<not_null<IContext*>>&current, not_null<IContext*>context,std::string function )
	};
}