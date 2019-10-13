#pragma once
#include <map>
#include "../Configuration/CompilerConfiguration.hpp"
#include "../Configuration/ProjectConfiguration.hpp"


namespace Aergia::Compiler
{
	class Compiler
	{
	public :
		void compile(Configuration::ProjectConfiguration const& project, std::vector<Aergia::Configuration::AssemblyConfiguration> const& assemblies);
	};
}