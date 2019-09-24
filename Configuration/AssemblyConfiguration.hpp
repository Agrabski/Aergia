#pragma once
#include <vector>
#include <string>
#include <filesystem>

namespace Aergia::Configuration
{
	struct AssemblyConfiguration
	{
		std::vector<std::filesystem::path> _files;
		std::string _assemblyName;
		
		// names of assemblies on which this assembly depends
		std::vector<std::string> _dependencyNames;
		AssemblyConfiguration( std::filesystem::path const& );
	};
}