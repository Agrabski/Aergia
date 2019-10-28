#include "pch.h"
#include "Compiler.hpp"
#include "../IO/IOManager.hpp"
#include "Gcc.hpp"

using Aergia::Configuration::AssemblyConfiguration;
using Aergia::Configuration::ProjectConfiguration;
using std::filesystem::path;

void sortAssemblies(
	std::vector<AssemblyConfiguration> const& assemblies,
	std::set<std::string>& done,
	std::vector<AssemblyConfiguration const*>& sortedAssemblies,
	AssemblyConfiguration const& toAdd)
{
	if (done.contains(toAdd._assemblyName))
		return;
	for (auto const& dependency : toAdd._dependencyNames)
	{
		if (!done.contains(dependency))
		{
			auto const& found = *std::find_if(assemblies.begin(), assemblies.end(),
				[&](AssemblyConfiguration const& e) {return e._assemblyName == dependency; });
			sortAssemblies(assemblies, done, sortedAssemblies, found);
		}
	}
	sortedAssemblies.push_back(&toAdd);
	done.insert(toAdd._assemblyName);
}

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
	std::vector<AssemblyConfiguration const*> sortedAssemblies;
	std::set<std::string> done;
	for (auto const& assembly : assemblies)
		sortAssemblies(assemblies, done, sortedAssemblies, assembly);

	for (auto const& assembly : sortedAssemblies)
	{
		// create object files
		compiler->build(*assembly, project, assemblies);
		// combine into output
		compiler->consolidate(*assembly, project);
	}
}
