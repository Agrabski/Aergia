#pragma once
#include <istream>
#include <ostream>
#include "Parser.hpp"
#include "../DataStructures/IContext.hpp"
#include "../DataStructures/IObject.hpp"

namespace Aergia::Parser
{
	struct InliningPolicy 
	{
		std::wstring const& warnEmptyCollection() const;
	};
	
	using DataStructures::IContext;
	using DataStructures::IObject;


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

		void processLoop(IOContext& context,std::wstring_view loopContent, IContext* currentContext, std::vector<IObject*> const& collection, std::wstring variableName);
		void processMacros(IOContext& context, IContext* currentContext);
		void processAnonym(IOContext& context, IContext* currentContext, std::wstring const& contents);
		IObject* resolveCallChain(IContext* context, std::wstring const& chain, std::wostream& errorStream);
	public:
		MacroInliner(std::vector<InParserClassDescriptor>const& descriptors);
		void processText(std::wstring& input, std::wstring& output, std::wostream& errorStream, InliningPolicy const& policy);
	};
}