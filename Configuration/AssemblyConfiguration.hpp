#pragma once
#include <vector>
#include <string>
#include <filesystem>

namespace Aergia::Configuration
{
	using std::vector;
	using std::filesystem::path;
	using std::string;
	struct AssemblyConfiguration
	{
		vector<path> _files;
		string _assemblyName;
		
		// names of assemblies on which this assembly depends
		vector<string> _dependencyNames;
		AssemblyConfiguration( std::filesystem::path const& );
	};
}