#pragma once
#include <string>
#include <any>
#include "../Lexer/AergiaCpp14Parser.h"
#include "../DataStructures/IContext.hpp"
#include "ContextProvider.hpp"


namespace Aergia::Visitors
{
	class ContextProvider;
	class CallChainResolver
	{
		using IContextPtr = gsl::not_null<DataStructures::IContext*>;
		gsl::not_null<ContextProvider*> _contextProvider;

		std::vector<IContextPtr> getBases( IContextPtr context );


		bool isFunctionCall( std::string text );

		std::vector<IContextPtr> resolveCall( std::string text, std::vector<IContextPtr>& currentContext );

		std::vector<IContextPtr> resolveMemberAccess( std::string text, std::vector<IContextPtr>& currentContext );

		std::vector<IContextPtr> resolveCallChainInternal( std::vector<std::string>& calls );


	public:
		CallChainResolver( gsl::not_null<ContextProvider*> contextPovider ) noexcept :_contextProvider( contextPovider ) {}

		template<typename T>
		T resolveCallChain( std::string callChain );

		template<>
		std::vector<DataStructures::IContext*> resolveCallChain( std::string callChain );

		template<typename T>
		T resolveCallChain( gsl::not_null<AergiaCpp14Parser::CallchainContext*> callChain ) { throw std::exception(); }

		template<>
		std::vector<gsl::not_null<DataStructures::IContext*>> resolveCallChain( gsl::not_null<AergiaCpp14Parser::CallchainContext*> callChain )
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

			return resolveCallChainInternal(result);
		}
	};
}