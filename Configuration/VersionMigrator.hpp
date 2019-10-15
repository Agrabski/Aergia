#pragma once
#include <pugixml.hpp>

namespace Aergia::Configuration
{
	class VersionMigrator
	{

	public:
		pugi::xml_document migrateAssembly(pugi::xml_document original);
		pugi::xml_document migrateProject(pugi::xml_document original);
		pugi::xml_document migrateCompiler(pugi::xml_document original);
	};
}