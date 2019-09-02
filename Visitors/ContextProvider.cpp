#include "ContextProvider.hpp"
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string_regex.hpp>
#include "../Functions/CallChainResolver.hpp"

Aergia::Functions::CallChainResolver Aergia::Visitors::ContextProvider::getResolver() noexcept
{
	return Functions::CallChainResolver( gsl::not_null( this ) );
}

void Aergia::Visitors::ContextProvider::appendNodeMetadata( antlr4::ParserRuleContext* node, std::string variableName, DataStructures::IContext* value )
{
	assert( _variableMetadata.find( node ) == _variableMetadata.end() );
	_variableMetadata[node] = std::make_pair( variableName, value );
}
