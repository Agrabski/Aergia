#include "pch.h"
#include "Compiler.hpp"

void Aergia::Compiler::Compiler::compile(Configuration::ProjectConfiguration const& project)
{
	auto const& config = project._compilerConfiguration;
	using namespace std::literals;
	std::string commandText = getCompilerCommandLine(config._target);
	commandText += " "s + formatOptions(config._target, config._options);
}
