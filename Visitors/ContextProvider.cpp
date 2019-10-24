#include "ContextProvider.hpp"
#include "../Functions/CallChainResolver.hpp"

Aergia::Functions::CallChainResolver Aergia::Visitors::ContextProvider::getResolver() noexcept
{
	return Functions::CallChainResolver( gsl::not_null( this ) );
}

void Aergia::Visitors::ContextProvider::appendNodeMetadata( antlr4::ParserRuleContext* node, std::string variableName, gsl::not_null<DataStructures::IContext const*> value )
{
	assert( _variableMetadata.find( node ) == _variableMetadata.end() );
	_variableMetadata[node] = std::make_pair( variableName, value );
}
