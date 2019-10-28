#include "pch.h"
#include "Gcc.hpp"

std::string Aergia::Compiler::Gcc::formatOptions(std::map<std::string, std::string> const& options)
{
	std::string result;
	for (auto const& option : options)
	{
		result += " ";
		result += "-";
		result += option.first;
		if (option.second.size() != 0)
			result += '=' + option.second;
	}
	return result;
}

std::string Aergia::Compiler::Gcc::getFileOptions(ProjectConfiguration const& project, Aergia::Configuration::AssemblyConfiguration const& assembly, std::vector<AssemblyConfiguration> const& assemblies)
{
	using namespace std::literals;
	auto result = " "s;
	for (auto const& file : assembly._files)
	{
		result += '\"' + (project._outputDirectory / assembly._pathToSelf.parent_path() / file).string() + '\"';
		result += " "s;
	}
	for (auto const& dependency : assembly._dependencyNames)
	{
		auto dep = std::find_if(assemblies.begin(), assemblies.end(), [&](auto const& e) {return e._assemblyName == dependency; });
		result += " "s + getPathToDependency(project, *dep).string();
	}
	return result;
}

std::string Aergia::Compiler::Gcc::formatTargetOptions(AssemblyConfiguration const& assembly, std::filesystem::path const& outputPath)
{
	if (assembly._target != Configuration::Target::Exe)
		return "-c \"" + (assembly._assemblyName) + "\"";
	else
		return "-o \"" + (assembly._assemblyName) + "\"";
}

void Aergia::Compiler::Gcc::build(AssemblyConfiguration const& assembly, ProjectConfiguration const& project, std::vector<AssemblyConfiguration> const& assemblies)
{
	auto const& config = project._compilerConfiguration;
	using namespace std::literals;
	// compile to *.o files
	std::string commandText;
	commandText += "g++ ";
	commandText += formatOptions(config._options);
	commandText += " "s + getFileOptions(project, assembly, assemblies);
	commandText += " "s + formatTargetOptions(assembly, project._compilerConfiguration._outputBinaryPath);
	commandText += "\r\n"s;
	system(commandText.c_str());
	// move *.o to bin directory
	if (assembly._target != Configuration::Target::Exe)
	{
		for (auto const file : assembly._files)
			if (file.extension() == ".cpp")
			{
				using std::filesystem::rename;
				auto filename = file.filename().string();
				filename = filename.substr(0, filename.find_last_of('.'));
				auto f = filename + ".o";

				auto path = getOutputBinaryPath(project, assembly, file);
				std::filesystem::create_directories(path.parent_path());
				rename(f, path);
			}
	}
	else
	{
		auto path = getPathToDependency(project, assembly).parent_path() / (assembly._assemblyName + ".exe");
		std::filesystem::create_directories(path.parent_path());
		rename(assembly._assemblyName + ".exe", path);
	}
}

void Aergia::Compiler::Gcc::consolidate(AssemblyConfiguration const& assembly, ProjectConfiguration const& project)
{
	using Configuration::Target;
	std::string result;
	using std::filesystem::rename;
	std::string filename;
	auto path = getPathToDependency(project, assembly);
	std::filesystem::create_directories(path.parent_path());

	switch (assembly._target)
	{
	case Target::StaticLibrary:
		filename = assembly._assemblyName + ".a";
		result += "ar rcs ";
		result += filename;
		for (auto const& file : assembly._files)
			if (file.extension() == ".cpp")
				result += " " + getOutputBinaryPath(project, assembly, file).string();
		system(result.c_str());
		rename(filename, path.string());
		break;
	case Target::Exe:
		break;

	default:
		break;
	}
}
