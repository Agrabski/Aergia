#include "MissingDependencyException.hpp"

std::string Aergia::Exceptions::MissingDependencyException::formatException( std::string const& assembly, std::string const& dependencyName )
{
	using namespace std::literals;
	return assembly + " has a dependency on "s + dependencyName + " which was not satisfied"s;
}
