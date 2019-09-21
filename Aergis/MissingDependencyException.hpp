#pragma once
#include <stdexcept>
#include <string>

namespace Aergia::Exceptions
{
	class MissingDependencyException : public std::runtime_error
	{
		static std::string formatException( std::string const& assembly, std::string const& dependencyName );
	public:
		MissingDependencyException( std::string const& assembly, std::string const& dependencyName ) : runtime_error( formatException( assembly, dependencyName ) ) {}
	};
}