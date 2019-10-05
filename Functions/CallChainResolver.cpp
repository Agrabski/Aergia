#include "CallChainResolver.hpp"
#include "../DataStructures/ClassContext.hpp"
#include "../IO/IOManager.hpp"
#include <regex>
#include <exception>
#include "FunctionLibrary.hpp"
#include "AccessorLibrary.hpp"

using namespace Aergia::Functions;

bool CallChainResolver::isFunctionCall(std::string text)
{
	static std::regex regex = std::regex("[a-zA-Z]+\\([a-zA-Z]+\\)");
	return std::regex_match(text, regex);
}

Variable CallChainResolver::resolveMemberAccess(std::string text, Variable& currentContext, IContextPtr context)
{
	return AccessorLibrary::resolveAccess(currentContext, context, text);
}

Variable CallChainResolver::resolveCallChainInternal(std::vector<std::string>const& calls, IContextPtr currentContext)
{
	Variable result;

	for (auto const& element : calls)
	{
		if (isFunctionCall(element))
			result = resolveCall(element, result, currentContext);
		else
		{
			auto variable = _variableProvider->getVariableValue(element);
			if (variable != nullptr)
				result = variable;
			else
				result = resolveMemberAccess(element, result, currentContext);
		}
	}
	return result;
}

Aergia::Functions::Variable CallChainResolver::resolveCall(std::string text, Variable& currentValue, IContextPtr context)
{
	return FunctionLibrary::resolveCall(currentValue, context, text);
}

