#include "IOManager.hpp"
#include <filesystem>
#include <fstream>
#include <iostream>

using namespace Aergia::IO;

void Aergia::IO::IOManager::reportFileOpened(std::filesystem::path const& file, bool isInputFile) const
{
	std::cout << "Opened file: " << file.c_str();
}

void Aergia::IO::IOManager::reportFileOpenFailed(std::filesystem::path const& file, bool isInputFile) const
{
	std::cout << "Failed to open file: " << file.c_str();
	std::terminate();
}

void Aergia::IO::IOManager::setupOptions()
{
	using namespace std::literals;
	using path = std::filesystem::path;
	auto od = [](char const* n, boost::program_options::value_semantic* vs, char const* desc)
	{return boost::shared_ptr<boost::program_options::option_description>(new boost::program_options::option_description(n, vs, desc)); };
	using boost::program_options::value;
	_programOptions.add(od("help", value<void>(), "Show allowed commands"));
	_programOptions.add(od("project", value<path>(), "path to project to be transpiled"));
}

Aergia::IO::IOManager::IOManager(std::vector<gsl::not_null<char const*>> args) : _programOptions("Comand line arguments")
{
	if (args.size() < 3)
	{
		std::cout << "required parameters were not provided";
		throw std::runtime_error("required parameters were not provided");
	}

	_inputStream.open(args[1]);

	if (!_inputStream.is_open())
		throw std::runtime_error("failed to open the input file");

	_outputstream.open(args[2], _outputstream.out);

	if (!_outputstream.is_open())
		throw std::runtime_error("failed to open the output file");

	std::cout << "both files successfully loaded" << std::endl;

	if (_instance != nullptr)
		std::terminate();
	_instance = this;
}

std::istream& Aergia::IO::IOManager::getInputFile()
{
	return _inputStream;
}

std::ostream& Aergia::IO::IOManager::getOutputFile()
{
	return _outputstream;
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
	auto stream = std::ofstream(path, std::ios::out);
	if (stream.is_open())
	{
		reportFileOpened(path, false);
		return stream;
	}
	reportFileOpenFailed(path, false);
	return std::optional<std::ofstream>();
}

