#include "CallChainResolver.hpp"
#include "../DataStructures/ClassContext.hpp"
#include <regex>

using namespace Aergia::Visitors;

std::vector<CallChainResolver::IContextPtr> Aergia::Visitors::CallChainResolver::getBases( IContextPtr context )
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

bool Aergia::Visitors::CallChainResolver::isFunctionCall( std::string text )
{
	static std::regex regex = std::regex( "[a-zA-Z]+\\([a-zA-Z]+\\)" );
	return std::regex_match( text, regex );
}

std::vector<CallChainResolver::IContextPtr> Aergia::Visitors::CallChainResolver::resolveMemberAccess( std::string text, std::vector<IContextPtr>& currentContext )
{
	using namespace std::literals;

	static std::map < std::string, std::function<std::vector<IContextPtr>( IContextPtr )>> map =
	{
		{"bases"s, [this]( IContextPtr a ) {return getBases( a ); }}
	};


	return std::vector<IContextPtr>();
}

std::vector<CallChainResolver::IContextPtr> Aergia::Visitors::CallChainResolver::resolveCallChainInternal( std::vector<std::string>& calls )
{
	std::vector<IContextPtr> result;

	for (auto const& element : calls)
	{
		if (isFunctionCall( element ))
			result = resolveCall( element, result );

		result = resolveMemberAccess( element, result );
	}
	return result;
}