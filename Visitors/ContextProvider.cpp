#include "ContextProvider.hpp"
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string_regex.hpp>

Aergia::Visitors::CallChainResolver Aergia::Visitors::ContextProvider::getResolver() noexcept
{
	return CallChainResolver( this );
}

void Aergia::Visitors::ContextProvider::appendNodeMetadata( antlr4::ParserRuleContext* node, std::string variableName, DataStructures::IContext* value )
{
	assert( _variableMetadata.find( node ) == _variableMetadata.end() );
	_variableMetadata[node] = std::make_pair( variableName, value );
}
