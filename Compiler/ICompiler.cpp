#include "pch.h"
#include "ICompiler.hpp"

std::filesystem::path Aergia::Compiler::ICompiler::getOutputBinaryPath(ProjectConfiguration const& project, AssemblyConfiguration const& assembly, std::filesystem::path const& file)
{
	using std::filesystem::rename;
	auto filename = file.filename().string();
	filename = filename.substr(0, filename.find_last_of('.'));
	std::string extension;
	if (assembly._target == Configuration::Target::Exe)
		extension = ".exe";
	else
		extension = ".o";
	auto f = filename +  extension;
	return project._outputDirectory / project._compilerConfiguration._outputBinaryPath / assembly._assemblyName / f;
}

std::filesystem::path Aergia::Compiler::ICompiler::getPathToDependency(ProjectConfiguration const& project, AssemblyConfiguration const& assembly)
{
	return project._outputDirectory / project._compilerConfiguration._outputBinaryPath / assembly._assemblyName / (assembly._assemblyName + ".a");
}
