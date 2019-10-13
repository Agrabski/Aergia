#pragma once
#include <string>
#include "../Configuration/CompilerConfiguration.hpp"
#include "../Configuration/ProjectConfiguration.hpp"

namespace Aergia::Compiler
{
	using Configuration::ProjectConfiguration;
	using Configuration::AssemblyConfiguration;

	class ICompiler
	{
	protected:
		std::filesystem::path getOutputPath(std::filesystem::path const& outputPath, AssemblyConfiguration const& assembly, std::filesystem::path const& file);
		std::filesystem::path getOutputBinaryPath(ProjectConfiguration const& project, AssemblyConfiguration const& assembly, std::filesystem::path const& file);
		std::filesystem::path getPathToDependency(ProjectConfiguration const& project, AssemblyConfiguration const& assembly);
	public:
		virtual void build(AssemblyConfiguration const& assembly, ProjectConfiguration const& project, std::vector<AssemblyConfiguration> const& assemblyConfigurations) = 0;
		virtual void consolidate(AssemblyConfiguration const& assembly, ProjectConfiguration const& project) = 0;
	};
}