#include "IOManager.hpp"
#include <filesystem>
#include <exception>
#include <fstream>
#include <iostream>
#include <boost/program_options/parsers.hpp>
#include <boost/program_options/variables_map.hpp>

using namespace Aergia::IO;

void Aergia::IO::IOManager::cleanProject(std::filesystem::path path) const noexcept
{
	try
	{
		auto project = ProjectConfiguration(path);
		std::error_code error;
		auto const p = path.parent_path() / project._outputDirectory;
		if (!std::filesystem::remove_all(p, error))
			std::cout << "error cleaning output directory. Error code: " << error << std::endl;
		else
			std::cout << "directory: \"" << p.string() << "\" removed sucessfully" << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << "error cleaning output directory. Exception: " << e.what();
	}
}
void Aergia::IO::IOManager::reportFileOpened(std::filesystem::path const& file, bool isInputFile) const
{
	std::wcout << L"Opened file: " << file.native() << std::endl;
}

void Aergia::IO::IOManager::reportFileOpenFailed(std::filesystem::path const& file, bool isInputFile) const
{
	std::wcout << L"Failed to open file: " << file.native() << std::endl;
	std::terminate();
}

void Aergia::IO::IOManager::setupOptions()
{
	using namespace std::literals;
	using boost::program_options::value;
	_programOptions.add_options()
		(_help.c_str(), "Show allowed commands")
		(_project.c_str(), value<std::filesystem::path>()->value_name("path"s), "Path to project to be transpiled")
		(_clean.c_str(), "Clean the indicated projects output directory. Project option must be supplied");
}

void Aergia::IO::IOManager::reportCompilerSelection(Aergia::Configuration::TargetCompiler compiler) const noexcept
{
	try
	{
		using Aergia::Configuration::TargetCompiler;
		using Aergia::Configuration::toString;
		if (compiler == TargetCompiler::None)
		{
			std::cout << "No compiler selected" << std::endl;
			return;
		}
		std::cout << "Starting compiler: " << toString(compiler) << std::endl;
	}
	catch (...) {}
}

void Aergia::IO::IOManager::startProcessing() const
{
	std::cout << "Precompilation started" << std::endl;
}

void Aergia::IO::IOManager::endProcessing() const
{
	std::cout << "Precompilation finished" << std::endl;
}

Aergia::IO::IOManager::IOManager(int argc, char const* const argv[]) : _programOptions("Comand line arguments")
{
	namespace po = boost::program_options;
	using namespace po::command_line_style;
	using std::filesystem::path;

	setupOptions();
	po::variables_map vm;
	try
	{
		po::store(po::command_line_parser(argc, argv)
			.options(_programOptions)
			.allow_unregistered()
			.run(), vm);
	}
	catch (std::exception const& e)
	{
		std::cout << e.what();
		_continueExecution = false;
		return;
	}

	if (vm.contains(_clean))
		if (vm.contains(_project))
			cleanProject(vm[_project].as<path>());
		else
		{
			std::cout << "path to project not supplied" << std::endl;
			_continueExecution = false;
		}
	else
		if (vm.contains(_help))
		{
			std::cout << _programOptions;
			_continueExecution = false;
			return;
		}
		else
			if (vm.contains(_project))
			{
				this->_pathToProject = vm[_project].as<path>();
				_continueExecution = true;
			}
	_instance = std::unique_ptr<IOManager>(this);
}

Aergia::IO::Configuration Aergia::IO::IOManager::getConfiguration() const noexcept
{
	return Configuration();
}

std::optional<std::ifstream> Aergia::IO::IOManager::openInputFile(std::filesystem::path path)
{
	std::ifstream stream(path, std::ios::in);
	if (stream.is_open())
	{
		reportFileOpened(path, true);
		return stream;
	}
	reportFileOpenFailed(path, true);
	return std::optional<std::ifstream>();
}

std::optional<std::ofstream> Aergia::IO::IOManager::openOutputFile(std::filesystem::path path)
{
	std::filesystem::create_directory(path.parent_path());
	std::ofstream stream(path, std::ios::out | std::ios::trunc);
	if (stream.is_open())
	{
		reportFileOpened(path, false);
		return stream;
	}
	reportFileOpenFailed(path, false);
	return std::optional<std::ofstream>();
}

ProjectConfiguration Aergia::IO::IOManager::getProject() const
{
	return ProjectConfiguration(_pathToProject);
}

void Aergia::IO::IOManager::reportCallchainError(std::string const& callchain, std::string const& exceptionText)
{
	std::cout << "error occured while processing callchain:\"";
	std::cout << callchain << "\"" << std::endl;
	std::cout << "exception text was: " << exceptionText;
	std::terminate();
}

