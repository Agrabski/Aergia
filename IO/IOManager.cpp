#include "IOManager.hpp"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <boost/program_options/parsers.hpp>
#include <boost/program_options/variables_map.hpp>

using namespace Aergia::IO;

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
	using path = std::filesystem::path;
	using boost::program_options::value;
	_programOptions.add_options()
		("help", "Show allowed commands")
		("project", value<path>()->value_name("path"s), "Path to project to be transpiled")
		("clean", "Clean the indicated projects output directory. Project option must be supplied");
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
	namespace fs = std::filesystem;

	setupOptions();
	po::variables_map vm;
	try
	{
		po::store(po::parse_command_line(argc, argv, _programOptions), vm);
	}
	catch (std::exception const& e)
	{
		std::cout << e.what();
		_continueExecution = false;
		return;
	}

	if (vm.contains("help"))
	{
		std::cout << _programOptions;
		_continueExecution = false;
		return;
	}

	if (vm.contains("project"))
	{
		this->_pathToProject = vm["project"].as<fs::path>();
		_continueExecution = true;
	}
	if (_instance != nullptr)
		std::terminate();
	_instance = this;
}

Aergia::IO::Configuration Aergia::IO::IOManager::getConfiguration() const
{
	return Configuration();
}

std::optional<std::ifstream> Aergia::IO::IOManager::openInputFile(std::filesystem::path path)
{
	auto stream = std::ifstream(path, std::ios::in);
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
	auto stream = std::ofstream(path, std::ios::out | std::ios::trunc);
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

