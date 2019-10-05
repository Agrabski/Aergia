#pragma once
#include <string>
#include <variant>
#include <optional>
#include "../DataStructures/IContext.hpp"
#include "../Lexer/AergiaCpp14Parser.h"
#include "../IO/IOManager.hpp"
#include "Variable.hpp"
#include "VariableProvider.hpp"

namespace Aergia::Functions
{
	class CallChainResolver
	{
		using IContextPtr = gsl::not_null<DataStructures::IContext*>;
		using Collection = std::vector<IContextPtr>;
		using ResolutionResult = std::variant<std::vector<IContextPtr>, std::string, DataStructures::MemberAccessibility>;

		gsl::not_null<VariableProvider*> _variableProvider;

		bool isFunctionCall(std::string text);


		Variable resolveCall(std::string text, Variable& currentValue, IContextPtr context);

		Variable resolveMemberAccess(std::string text, Variable& currentContext, IContextPtr context);

		Variable resolveCallChainInternal(std::vector<std::string>const& calls, IContextPtr currentContext);

		ResolutionResult resolveSingleValue(std::string text, std::vector<IContextPtr>& currentContext, IContextPtr context);

		std::vector<std::string> prepareCalls(std::string callChain)
		{
			std::replace(callChain.begin(), callChain.end(), '.', ' ');
			std::stringstream stream(std::move(callChain));
			std::vector<std::string> result;
			while (!stream.eof())
			{
				std::string temp;
				stream >> temp;
				result.push_back(temp);
			}
			return result;
		}

	public:

		CallChainResolver(gsl::not_null<VariableProvider*> variableProvider) noexcept : _variableProvider(variableProvider) {}

		template<typename T>
		std::optional<T> resolveCallChain(std::string callChain, IContextPtr currentContext)
		{
			try
			{
				auto r = resolveCallChainInternal(prepareCalls(callChain), currentContext);
				return r.as<T>();
			}
			catch (std::exception const& e)
			{
				IO::IOManager::instance()->reportCallchainError(callChain, e.what());
				return std::optional<T>();
			}

		}

		template<>
		std::optional<std::string> resolveCallChain(std::string callChain, IContextPtr currentContext)
		{
			auto r = resolveCallChainInternal(prepareCalls(callChain), currentContext);
			return r.toString();

		}
	};
}