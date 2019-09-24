#include "pch.h"
#include "ProjectConfiguration.hpp"
#include <pugixml.hpp>

Aergia::Configuration::ProjectConfiguration::ProjectConfiguration( std::filesystem::path p)
{
	using namespace pugi;
	pugi::xml_document configFile;
	configFile.load_file( p.c_str() );
	_projectName = configFile.child( "projectName" ).value();
	_outputDirectory = configFile.child( "outputDirectory" ).value();
	_projectDirectory = p;
	_targetAssemblyName = configFile.child( "targetAssembly" ).value();
	for (auto child : configFile.child( "assemblies" ).children( "assembly" ))
		_assemblyDirectories.push_back( child.value() );
}
