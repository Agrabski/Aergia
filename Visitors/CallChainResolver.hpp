#pragma once
#include <string>
#include <any>
#include "../Lexer/AergiaCpp14Parser.h"
#include "../DataStructures/IContext.hpp"


namespace Aergia::Visitors
{
	class CallChainResolver
	{
	public:
		template<typename T>
		T resolveCallChain( std::string callChain );

		template<>
		std::vector<DataStructures::IContext*> resolveCallChain( std::string callChain );

		template<typename T>
		T resolveCallChain( gsl::not_null<AergiaCpp14Parser::CallchainContext*> callChain );

		template<>
		std::vector<gsl::not_null<DataStructures::IContext*>> resolveCallChain( gsl::not_null<AergiaCpp14Parser::CallchainContext*> callChain );
	};
}