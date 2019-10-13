#pragma once
#include <vector>
#include <string>
#include <filesystem>

namespace Aergia::Configuration
{
	enum class Target
	{
		StaticLibrary,
		Exe,
		DynamicLibrary
	};
	Target parse(std::string const&) noexcept;

	struct AssemblyConfiguration
	{
		std::filesystem::path _pathToSelf;
		std::vector<std::filesystem::path> _files;
		std::string _assemblyName;
		Target _target;
		
		// names of assemblies on which this assembly depends
		std::vector<std::string> _dependencyNames;
		AssemblyConfiguration( std::filesystem::path const& );
	};
}