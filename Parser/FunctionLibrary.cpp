#include "stdafx.h"
#include "FunctionLibrary.hpp"

using namespace Aergia::Parser;

Aergia::Parser::FunctionLibrary::FunctionLibrary()
{
	_functions.insert(std::make_pair<std::wstring, std::function<IObject * (IContext*, std::wstring const&)>>(
		std::wstring(L"typeof"),
		[](IContext * c, std::wstring const& args)
		{
			return c->getObject(args);
		} ));
}

IObject* Aergia::Parser::FunctionLibrary::resolveFunction(IContext* currentContext, std::wstring const& name, std::wstring const& args)
{
	auto function = _functions.find(name);
	if (function == _functions.end())
		return nullptr;
	else
		return function->second(currentContext, args);
}
