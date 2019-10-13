#include "ICompiler.hpp"

namespace Aergia::Compiler
{
	class Gcc final : public ICompiler
	{
		std::string formatOptions(std::map<std::string, std::string> const& options);
		std::string getFileOptions(ProjectConfiguration const& project, AssemblyConfiguration const& assembly,std::vector<AssemblyConfiguration> const&assemblies );
		std::string formatTargetOptions(AssemblyConfiguration const& assembly, std::filesystem::path const& outputPath);
		// Inherited via ICompiler
		void build(AssemblyConfiguration const& assembly, ProjectConfiguration const& project, std::vector<AssemblyConfiguration> const& assemblies) final;
		void consolidate(AssemblyConfiguration const& assembly, ProjectConfiguration const& project) final;
	};
}