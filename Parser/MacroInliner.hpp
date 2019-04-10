#pragma once
#include <istream>
#include <ostream>
#include "Parser.hpp"
#include "../DataStructures/IContext.hpp"

namespace Aergia::Parser
{
	struct InliningPolicy 
	{
		std::wstring const& warnEmptyCollection() const;
	};
	
	using DataStructures::IContext;

	class MacroInliner
	{
		struct IOContext
		{
			std::wistream& _input;
			std::wostream& _output;
			std::wostream& _errorStream;
			InliningPolicy const& _policy;
			IOContext(std::wistream& input, std::wostream& output, std::wostream& errorStream, InliningPolicy const& policy);
		};

		void processLoop(IOContext& context,std::wstring_view loopContent, IContext* currentContext, std::vector<IContext*> const& collection, std::wstring variableName);
		void processMacros(IOContext& context, IContext* currentContext);
	public:
		MacroInliner(std::vector<InParserClassDescriptor>const& descriptors);
		void processText(std::wistream& input, std::wostream& output, std::wostream& errorStream, InliningPolicy const& policy);
	};
}