#include "pch.h"
#include "AssemblyConfiguration.hpp"
#include <pugixml.hpp>

Aergia::Configuration::AssemblyConfiguration::AssemblyConfiguration( std::filesystem::path const& p)
{
	pugi::xml_document file;
	file.load_file( p.c_str() );
	_assemblyName = file.child( "name" ).value();
	for (auto child : file.child( "dependencies" ).children( "dependency" ))
		_dependencyNames.emplace_back( child.value() );
	for (auto child : file.child( "files" ).children( "file" ))
		_files.emplace_back( child.value() );
}
