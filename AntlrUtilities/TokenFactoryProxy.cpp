#include "pch.h"
#include "TokenFactoryProxy.hpp"

Aergia::Utilities::TokenFactoryProxy::TokenFactoryProxy( AergiaCpp14Lexer& lexer, antlr4::BufferedTokenStream& stream ) noexcept :
	_stream( stream ), _lexer( lexer )
{
}

antlr4::Token* Aergia::Utilities::TokenFactoryProxy::create( size_t type, std::string text )
{
	auto tokenFactory = _lexer.getTokenFactory();
	auto pointer = tokenFactory->create( type, text );
	auto result = pointer.get();
	std::vector<std::unique_ptr<antlr4::Token>> tokens;
	tokens.push_back( std::move( pointer ) );
	_stream.recieveTokens( std::move( tokens ) );

	return result;
}
