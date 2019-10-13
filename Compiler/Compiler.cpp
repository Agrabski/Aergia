#include "pch.h"
#include "Compiler.hpp"
#include "../IO/IOManager.hpp"
#include "Gcc.hpp"

using Aergia::Configuration::AssemblyConfiguration;
using Aergia::Configuration::ProjectConfiguration;
using std::filesystem::path;

void Aergia::Compiler::Compiler::compile(ProjectConfiguration const& project, std::vector<AssemblyConfiguration> const& assemblies)
{
	std::unique_ptr<ICompiler> compiler;
	switch (project._compilerConfiguration._target)
	{
	case Configuration::TargetCompiler::Gcc:
		compiler = std::make_unique<Gcc>();
		break;
	default:
		break;
	}
	auto manager = IO::IOManager::instance();
	auto const& config = project._compilerConfiguration;
	manager->reportCompilerSelection(config._target);
	if (config._target == Configuration::TargetCompiler::None)
		return;
	using namespace std::literals;

	for (auto const& assembly : assemblies)
	{
		// create object files
		compiler->build(assembly, project, assemblies);
		// combine into output
		compiler->consolidate(assembly, project);

	}

}
