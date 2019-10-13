#pragma once
#include <gsl.h>
#include "..//DataStructures/IContext.hpp"
#include "..//DataStructures//NamespaceContext.hpp"
#include "../Functions/CallChainResolver.hpp"
#include "../AntlrUtilities/TokenFactoryProxy.hpp"
#include "../Functions/CallChainResolver.hpp"
#include "../antlr/src/antlr4-common.h"


namespace Aergia::Visitors
{
	class ContextProvider : public Functions::VariableProvider
	{
	private:
		AergiaCpp14Parser& _parser;
		Utilities::TokenFactoryProxy _factory;


	protected:
		virtual gsl::not_null<DataStructures::NamespaceContext*> getRootNamespace() noexcept = 0;
		std::map<antlr4::ParserRuleContext*, std::pair<std::string, DataStructures::IContext*>> _variableMetadata;

		ContextProvider( AergiaCpp14Parser& parser, AergiaCpp14Lexer& lexer, antlr4::BufferedTokenStream& stream ) noexcept :
			_factory( lexer, stream ), _parser( parser ) {}
	public:


		template<typename T, typename... Args>
		T* createParserContext( Args... arguments )
		{
			return _parser.getTreeTracker().createInstance<T>( arguments... );
		}

		Functions::CallChainResolver getResolver() noexcept;

		void appendNodeMetadata( antlr4::ParserRuleContext* node, std::string variableName, DataStructures::IContext* value );

		Utilities::TokenFactoryProxy& getTokenFactory() noexcept { return _factory; }

		virtual gsl::not_null<DataStructures::IContext*> getContext() noexcept = 0;

		antlr4::tree::TerminalNode* createTerminalNode( antlr4::Token* token )
		{
			return _parser.createTerminalNode( token );
		}

	};
}