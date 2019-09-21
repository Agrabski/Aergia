#include "pch.h"
#include "ProjectProcessor.hpp"
#include <filesystem>
#include <set>
#include <memory>
#include "Assembly.hpp"
#include "MissingDependencyException.hpp"
#include "../Visitors/CurrentContextVisitor.hpp"
#include "../Visitors/AnonymousVisitor.hpp"
#include "../Visitors/AergiaExpressionVisitor.hpp"
#include "../Visitors/ForeachVisitor.hpp"

using namespace Aergia;
using namespace Aergia::DataStructures;

vector<AssemblyConfiguration> Aergia::ProjectProcessor::prepareConfigurations( vector<path> const& paths )
{
	vector<AssemblyConfiguration> result;
	for (auto const& path : paths)
		result.emplace_back( path );
	return result;
}

void Aergia::ProjectProcessor::resolveDependencies( std::vector<Assembly>& assemblies )
{
	using Exceptions::MissingDependencyException;
	for (auto& assembly : assemblies)
	{
		auto const dependencies = assembly.getMissingDependencies();
		for (std::string const& dependency : dependencies)
		{
			auto result = std::find_if( assemblies.begin(), assemblies.end(),
				[&dependency]( Assembly& ass ) noexcept
				{
					return ass.assemblyName() == dependency;
				} );
			if (result == assemblies.end())
				throw MissingDependencyException( assembly.assemblyName(), dependency );
			assembly.provideDependency( &(*result) );
		}
	}

}

std::unique_ptr<NamespaceContext> Aergia::ProjectProcessor::processFile( AssemblyConfiguration const& configuration, vector<not_null<Assembly*>> dependencies, path pathToFile, std::unique_ptr<NamespaceContext>& currentRoot )
{


	return std::unique_ptr<NamespaceContext>();
}


void Aergia::ProjectProcessor::processProject( ProjectConfiguration const& configuration, IO::Configuration const& ioConfig )
{
	using Aergia::Configuration::AssemblyConfiguration;
	using std::filesystem::path;
	using std::vector;
	std::error_code code;
	std::filesystem::current_path( configuration._projectDirectory, code );
	// todo: do stuff with error code
	path const outputDirectory = configuration._outputDirectory;

	auto const assemblyConfigurations = prepareConfigurations( configuration._assemblyDirectories );
	std::vector<Assembly> assemblies;
	assemblies.reserve( assemblyConfigurations.size() );
	for (auto const& config : assemblyConfigurations)
		assemblies.emplace_back( config );
	resolveDependencies( assemblies );

	auto targetAssembly = std::find_if( assemblies.begin(), assemblies.end(), [&configuration]( Assembly const& ass ) noexcept
		{return ass.assemblyName() == configuration._targetAssemblyName; }
	);
	assert( targetAssembly != assemblies.end() );
	std::unique_ptr<NamespaceContext> x = nullptr;
	targetAssembly->process( this, x );
}

std::unique_ptr<NamespaceContext> Aergia::ProjectProcessor::processAssembly( AssemblyConfiguration const& configuration, vector<not_null<Assembly*>> dependencies, std::unique_ptr<NamespaceContext>& currentRoot )
{
	// ensure dependencies are ready
	for (auto dependency : dependencies)
		if (!dependency->isProcessed())
			dependency->process( this, currentRoot );
	for (auto file : configuration._files)
	{

		auto newRoot = processFile( configuration, dependencies, file, currentRoot );
		currentRoot = NamespaceContext::mergeRoots( std::move( currentRoot ), std::move( newRoot ) );
	}
	return std::unique_ptr<NamespaceContext>();

}
