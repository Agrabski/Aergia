#pragma once
#include <gsl.h>
#include "../Configuration/AssemblyConfiguration.hpp"
#include "../DataStructures/NamespaceContext.hpp"
#include "ProjectProcessor.hpp"


namespace Aergia
{
	class ProjectProcessor;

	class Assembly
	{
		std::unique_ptr<DataStructures::NamespaceContext> _mergedGlobalNamespace;
		Configuration::AssemblyConfiguration _configuration;
		std::vector<gsl::not_null<Assembly*>> _dependencies;
	public:
		std::string const& assemblyName() const noexcept { return _configuration._assemblyName; }
		Assembly( Configuration::AssemblyConfiguration const& configuration );
		void provideDependency( gsl::not_null<Assembly*> assembly );
		bool isProcessed() const noexcept { return _mergedGlobalNamespace != nullptr;}
		void process( gsl::not_null<ProjectProcessor*> processor,std::unique_ptr<DataStructures::NamespaceContext>&currentRoot, std::filesystem::path outputDirectory );
		bool dependenciesSatisifed() const noexcept;
		std::vector<std::string> getMissingDependencies() const;

	};
}