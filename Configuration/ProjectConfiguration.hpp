#pragma once
#include <vector>
#include "AssemblyConfiguration.hpp"

namespace Aergia::Configuration
{
	struct ProjectConfiguration
	{
		std::string _projectName;
		std::vector<std::filesystem::path> _assemblyDirectories;
		std::filesystem::path _outputDirectory;
		std::filesystem::path _projectDirectory;
		std::string _targetAssemblyName;
		ProjectConfiguration( std::filesystem::path );
	};
}