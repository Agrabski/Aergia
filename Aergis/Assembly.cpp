#include "Assembly.hpp"
#include <algorithm>

Aergia::Assembly::Assembly( Configuration::AssemblyConfiguration const& configuration ) : _configuration(configuration)
{
	_dependencies.reserve( configuration._dependencyNames.size() );
}

void Aergia::Assembly::provideDependency( gsl::not_null<Assembly*> assembly )
{
	auto found = std::find( _dependencies.begin(), _dependencies.end(), assembly );
	if (found != _dependencies.end())
		throw std::exception(); // todo: make better nibba
	_dependencies.push_back( assembly );

}

void Aergia::Assembly::process( gsl::not_null<ProjectProcessor*> processor, std::unique_ptr<DataStructures::NamespaceContext>& currentRoot )
{
	assert( dependenciesSatisifed() );
	_mergedGlobalNamespace = processor->processAssembly( _configuration, _dependencies,currentRoot );
}

bool Aergia::Assembly::dependenciesSatisifed() const noexcept
{
	return _dependencies.size() == _configuration._dependencyNames.size();
}

std::vector<std::string> Aergia::Assembly::getMissingDependencies() const
{
	std::vector<std::string> result;
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
