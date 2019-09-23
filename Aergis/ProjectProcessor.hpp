#pragma once
#include "Assembly.hpp"
#include "../Configuration/ProjectConfiguration.hpp"
#include "../DataStructures/NamespaceContext.hpp"
#include "../IO/Configuraton.hpp"

namespace Aergia
{
	using std::vector;
	using std::filesystem::path;
	using Configuration::AssemblyConfiguration;
	using Configuration::ProjectConfiguration;
	using DataStructures::NamespaceContext;
	using gsl::not_null;
	class Assembly;

	class ProjectProcessor
	{
		vector<AssemblyConfiguration> prepareConfigurations( vector<path> const& );
		void resolveDependencies( std::vector<Assembly>& assemblies );
		std::unique_ptr<NamespaceContext> processFile( AssemblyConfiguration const& configuration, vector<not_null<Assembly*>> dependencies, path pathToFile, std::unique_ptr<NamespaceContext>& currentRoot );
	public:
		void processProject( ProjectConfiguration const& confiuration, IO::Configuration const& ioConfig );
		std::unique_ptr<NamespaceContext> processAssembly( AssemblyConfiguration const&, vector<not_null<Assembly*>> dependencies , std::unique_ptr<NamespaceContext>& currentRoot );
	};
}
