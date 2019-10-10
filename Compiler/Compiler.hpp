#pragma once
#include <map>
#include "../Configuration/CompilerConfiguration.hpp"
#include "../Configuration/ProjectConfiguration.hpp"

namespace Aergia::Compiler
{
	class Compiler
	{
		std::string formatOptions(Configuration::TargetCompiler compiler, std::map<std::string, std::string> const& options);
		std::string getCompilerCommandLine(Configuration::TargetCompiler compiler);
	public:
		void compile(Configuration::ProjectConfiguration const& project);
	};
}