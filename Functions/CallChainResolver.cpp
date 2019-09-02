#include "CallChainResolver.hpp"
#include "../DataStructures/ClassContext.hpp"
#include <regex>
#include "FunctionLibrary.hpp"

using namespace Aergia::Functions;

Variable CallChainResolver::getBases( IContextPtr context )
{
	auto casted = dynamic_cast<DataStructures::TypeContext*>(context.get());

	if (casted == nullptr)
		throw std::exception(); // todo: add custom exception

	auto bases = casted->getBases();
	std::vector<CallChainResolver::IContextPtr> result;
	for (auto& x : bases)
		result.push_back( x );
	return result;
}

bool CallChainResolver::isFunctionCall( std::string text )
{
	static std::regex regex = std::regex( "[a-zA-Z]+\\([a-zA-Z]+\\)" );
	return std::regex_match( text, regex );
}

Variable CallChainResolver::resolveMemberAccess( std::string text, Variable& currentContext, IContextPtr context )
{
	using namespace std::literals;
	
	static std::map < std::string, std::function<Variable( IContextPtr )>> map =
	{
		{"bases"s, [this]( IContextPtr a ) {return getBases( a ); }}
	};
	if (currentContext.as<IContextPtr>() != nullptr)
		return map[text]( *currentContext.as<IContextPtr>() );
	else
		if (currentContext.as<Collection>() != nullptr)
		{
			auto& current = *currentContext.as<Collection>();
			Collection result;
			for (auto& element : current)
			{
				auto tmp = map[text]( element );
				if (tmp.as<IContextPtr>() != nullptr)
					result.push_back( *tmp.as<IContextPtr>() );
				else
				{
					auto collectionResult = *tmp.as<Collection>();
					result.insert( result.end(), collectionResult.begin(), collectionResult.end() );
				}
			}
			return result;
		}
	std::terminate();
}

Variable CallChainResolver::resolveCallChainInternal( std::vector<std::string>const& calls, IContextPtr currentContext )
{
	Variable result;

	for (auto const& element : calls)
	{
		if (isFunctionCall( element ))
			result = resolveCall( element, result, currentContext );
		else
		{
			auto variable = _variableProvider->getVariableValue( element );
			if (variable != nullptr)
				result = variable;
			else
				result = resolveMemberAccess( element, result, currentContext );
		}
	}
	return result;
}

Aergia::Functions::Variable CallChainResolver::resolveCall( std::string text, Variable& currentValue, IContextPtr context )
{
	//todo: error handling
	return FunctionLibrary::resolveCall( currentValue, context, text );
}

