#pragma once
#include <string>
#include <any>
#include "../DataStructures/IContext.hpp"
#include "../Lexer/AergiaCpp14Parser.h"


namespace Aergia::Functions
{
	class CallChainResolver
	{
		using IContextPtr = gsl::not_null<DataStructures::IContext*>;

		std::vector<IContextPtr> getBases( IContextPtr context );


		bool isFunctionCall( std::string text );

		std::vector<IContextPtr> resolveCall( std::string text, std::vector<IContextPtr>& currentContext, IContextPtr context );

		std::vector<IContextPtr> resolveMemberAccess( std::string text, std::vector<IContextPtr>& currentContext, IContextPtr context );

		std::vector<IContextPtr> resolveCallChainInternal( std::vector<std::string>& calls, IContextPtr currentContext );


	public:

		template<typename T>
		T resolveCallChain( std::string callChain, IContextPtr currentContext ) { std::terminate(); }

		template<>
		std::vector<DataStructures::IContext*> resolveCallChain( std::string callChain, IContextPtr currentContext ) { std::terminate(); }

		template<typename T>
		T resolveCallChain( gsl::not_null<AergiaCpp14Parser::CallchainContext*> callChain, IContextPtr currentContext ) { throw std::exception(); }

		template<>
		std::vector<gsl::not_null<DataStructures::IContext*>> resolveCallChain( gsl::not_null<AergiaCpp14Parser::CallchainContext*> callChain,IContextPtr currentContext )
		{
			std::string tmp = callChain->getText();
			std::replace( tmp.begin(), tmp.end(), '.', ' ' );
			std::stringstream stream( std::move( tmp ) );
			std::vector<std::string> result;
			while (!stream.eof())
			{
				std::string temp;
				stream >> temp;
				result.push_back( temp );
			}

			return resolveCallChainInternal(result,currentContext);
		}
	};
}