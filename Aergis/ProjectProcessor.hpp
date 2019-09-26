#pragma once
#include "Assembly.hpp"
#include "../Configuration/ProjectConfiguration.hpp"
#include "../DataStructures/NamespaceContext.hpp"
#include "../IO/Configuraton.hpp"

namespace Aergia
{
	using std::filesystem::path;
	using std::vector;
	using Configuration::AssemblyConfiguration;
	using DataStructures::NamespaceContext;
	class Assembly;

	class ProjectProcessor
	{
		vector<Configuration::AssemblyConfiguration> prepareConfigurations( vector<path> const& );
		void resolveDependencies( vector<Assembly>& assemblies );
		std::unique_ptr<NamespaceContext> processSourceFile( Configuration::AssemblyConfiguration const& configuration, vector<gsl::not_null<Assembly*>> dependencies, std::filesystem::path pathToFile, std::unique_ptr<DataStructures::NamespaceContext>& currentRoot );
		std::unique_ptr<NamespaceContext> processHeaderFile( Configuration::AssemblyConfiguration const& configuration, vector<gsl::not_null<Assembly*>> dependencies, std::filesystem::path pathToFile, std::unique_ptr<DataStructures::NamespaceContext>& currentRoot );
	public:
		void processProject( Configuration::ProjectConfiguration const& confiuration, IO::Configuration const& ioConfig );
		std::unique_ptr<NamespaceContext> processAssembly( AssemblyConfiguration const&, vector<gsl::not_null<Assembly*>> dependencies , std::unique_ptr<DataStructures::NamespaceContext>& currentRoot );
	};
}
