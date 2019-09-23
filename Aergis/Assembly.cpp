#include "pch.h"
#include "Assembly.hpp"
#include <algorithm>

using namespace Aergia;

Aergia::Assembly::Assembly( AssemblyConfiguration const& configuration ) : _configuration(configuration)
{
	_dependencies.reserve( configuration._dependencyNames.size() );
}

void Aergia::Assembly::provideDependency( not_null<Assembly*> assembly )
{
	auto found = std::find( _dependencies.begin(), _dependencies.end(), assembly );
	if (found != _dependencies.end())
		throw std::exception(); // todo: make better nibba
	_dependencies.push_back( assembly );

}

void Aergia::Assembly::process( not_null<ProjectProcessor*> processor, std::unique_ptr<NamespaceContext>& currentRoot )
{
	assert( dependenciesSatisifed() );
	_mergedGlobalNamespace = processor->processAssembly( _configuration, _dependencies,currentRoot );
}

bool Aergia::Assembly::dependenciesSatisifed() const noexcept
{
	return _dependencies.size() == _configuration._dependencyNames.size();
}

vector<string> Aergia::Assembly::getMissingDependencies() const
{
	vector<string> result;
	for (auto &dependency : _configuration._dependencyNames)
	{
		auto search = std::find_if( _dependencies.begin(), _dependencies.end(), [&dependency]( auto e )
			{
				return e->assemblyName() == dependency;
			} );
		if (search == _dependencies.end())
			result.push_back( dependency );
	}
	return result;
}
