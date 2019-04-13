#pragma once
#include <map>
#include <string>
#include <functional>
#include "../DataStructures/IObject.hpp"
#include "../DataStructures/IContext.hpp"


namespace Aergia::Parser
{
	using DataStructures::IObject;
	using DataStructures::IContext;
	class FunctionLibrary
	{
		std::map <std::wstring, std::function<IObject* (IContext*, std::wstring const&)>> _functions;
	public:
		FunctionLibrary();
		IObject* resolveFunction(IContext* currentContext, std::wstring const& name, std::wstring const& args);
	};
}