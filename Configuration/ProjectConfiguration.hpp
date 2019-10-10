#pragma once
#include <vector>
#include "AssemblyConfiguration.hpp"
#include "CompilerConfiguration.hpp"

namespace Aergia::Configuration
{
	struct ProjectConfiguration
	{
		std::string _projectName;
		std::vector<std::filesystem::path> _assemblyDirectories;
		std::filesystem::path _outputDirectory;
		std::filesystem::path _projectDirectory;
		std::string _targetAssemblyName;
		CompilerConfiguration _compilerConfiguration;
		ProjectConfiguration( std::filesystem::path );
	};
}