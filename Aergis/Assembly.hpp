#pragma once
#include <gsl.h>
#include "../Configuration/AssemblyConfiguration.hpp"
#include "../DataStructures/NamespaceContext.hpp"
#include "ProjectProcessor.hpp"


namespace Aergia
{
	using Aergia::DataStructures::NamespaceContext;
	using Aergia::Configuration::AssemblyConfiguration;
	using gsl::not_null;
	using std::string;
	using std::vector;

	class ProjectProcessor;

	class Assembly
	{
		std::unique_ptr<NamespaceContext> _mergedGlobalNamespace;
		AssemblyConfiguration _configuration;
		vector<not_null<Assembly*>> _dependencies;
	public:
		string const& assemblyName() const noexcept { return _configuration._assemblyName; }
		Assembly( AssemblyConfiguration const& configuration );
		void provideDependency( not_null<Assembly*> assembly );
		bool isProcessed() const noexcept { return _mergedGlobalNamespace != nullptr;}
		void process( not_null<ProjectProcessor*> processor,std::unique_ptr<NamespaceContext>&currentRoot );
		bool dependenciesSatisifed() const noexcept;
		vector<string> getMissingDependencies() const;

	};
}