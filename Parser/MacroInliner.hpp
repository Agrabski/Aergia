#pragma once
#include <istream>
#include <ostream>
#include "Parser.hpp"
#include "../DataStructures/IContext.hpp"
#include "../DataStructures/IObject.hpp"
#include "../DataStructures/DefaultContext.hpp"
#include "FunctionLibrary.hpp"

namespace Aergia::Parser
{
	class CallChainResolutionException : public std::runtime_error
	{
		std::wstring message;
	public:
		CallChainResolutionException(std::wstring call) : message(call), std::runtime_error("substitution failed") {}
		std::wstring what() { return message; }
	};
	struct InliningPolicy
	{
		std::wstring const& warnEmptyCollection() const { return L""; }
		std::wstring endLine() const { return std::wstring(L"\r\n"); }
		std::wstring warnNotEvaluatedToCollection(std::wstring const& callChain, size_t line) const { return L"Call chain did not evaluate to a collection. Call chain:#" + callChain + L"# line number: " + std::to_wstring(line) + endLine(); }
		std::wstring warnCallChainFailed(std::wstring const& callChain, size_t line) const { return L"Call chain returned null. Call chain:#" + callChain + L"# line number: " + std::to_wstring(line) + endLine(); }
	};

	using DataStructures::IContext;
	using DataStructures::IObject;
	using DataStructures::DefaultContext;

	class MacroInliner
	{
		struct IOContext
		{
			std::wstring const& _input;
			std::wstring& _output;
			std::wostream& _errorStream;
			InliningPolicy const& _policy;
			IOContext(std::wstring const& input, std::wstring& output, std::wostream& errorStream, InliningPolicy const& policy) noexcept :
				_input(input), _output(output), _errorStream(errorStream), _policy(policy) {}
		};

		DefaultContext _defaultContext;
		FunctionLibrary _functionLibrary;

		void processLoop(IOContext& context, std::wstring loopContent, IContext* currentContext, std::vector<IObject*> const& collection, std::wstring variableName, int& line);
		void processMacros(IOContext& context, IContext* currentContext, int& line);
		void processAnonym(IOContext& context, IContext* currentContext, std::wstring const& contents, size_t lineNumber);
		IObject* resolveCallChain(IContext* context, std::wstring const& chain, std::wostream& errorStream);
	public:
		MacroInliner(std::vector<InParserClassDescriptor>const& descriptors);
		void processText(std::wstring const& input, std::wstring& output, std::wostream& errorStream, InliningPolicy const& policy);
	};
}