#include "pch.h"
#include "ProjectConfiguration.hpp"
#include <pugixml.hpp>

Aergia::Configuration::ProjectConfiguration::ProjectConfiguration( std::filesystem::path p)
{
	using namespace pugi;
	pugi::xml_document configFile;
	if (!configFile.load_file(p.c_str()))
		std::terminate();
	auto root = configFile.child("Project");
	_projectName = root.child( "projectName" ).child_value();
	_outputDirectory = root.child( "outputDirectory" ).child_value();
	_projectDirectory = p.parent_path();
	_targetAssemblyName = root.child( "targetAssembly" ).child_value();
	for (auto child : root.child( "assemblies" ).children( "assembly" ))
		_assemblyDirectories.push_back( child.child_value() );
}
