#pragma once
#include <vector>
#include <map>
#include <functional>
#include "../DataStructures/IContext.hpp"
#include "FunctionCall.hpp"
#include "Variable.hpp"
#include "Typeof.hpp"
#include "Valueof.hpp"
#include "NamespaceOf.hpp"

namespace Aergia::Functions
{
	using std::vector;
	using DataStructures::IContext;
	using std::map;
	using gsl::not_null;
	using namespace std::literals;

	class FunctionLibrary
	{
		VariableProvider& _contextProvider;
		std::map<std::string, std::function<Variable(Variable&, not_null<IContext*>, FunctionCall const&)>> _functions;
	public:
		FunctionLibrary(VariableProvider& contextProvider) noexcept : _contextProvider(contextProvider)
		{
			try 
			{
				using F = std::function<Variable(Variable&, not_null<IContext*>, FunctionCall const&)>;
				_functions = 
				{
					{"typeof"s,F(Typeof())},
					{"valueof",F(Valueof(_contextProvider))},
					{"namespaceof",F(NamespaceOf())}
				};
			}
			catch (...)
			{
				std::terminate();
			}
		}

		void printHelp(std::ostream& stream);
		void printHelp(std::ostream& stream, std::string_view option);
		Variable resolveCall( Variable& current, not_null<IContext*>context, FunctionCall const& function );
	};
}