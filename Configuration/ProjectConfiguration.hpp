#pragma once
#include <vector>
#include "AssemblyConfiguration.hpp"

namespace Aergia::Configuration
{
	struct ProjectConfiguration
	{
		string _projectName;
		vector<path> _assemblyDirectories;
		path _outputDirectory;
		path _projectDirectory;
		string _targetAssemblyName;
		ProjectConfiguration( path );
	};
}