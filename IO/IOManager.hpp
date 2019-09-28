#pragma once
#include <vector>
#include <string_view>
#include <stdexcept>
#include <fstream>
#include <optional>
#include <gsl.h>
#include <boost\program_options\options_description.hpp>
#include "Configuraton.hpp"

namespace Aergia::IO
{
	class IOManager
	{
		using Options = boost::program_options::options_description;
		Options _programOptions;
		std::ifstream _inputStream;
		std::ofstream _outputstream;
		static inline IOManager * _instance = nullptr;
		Configuration _configuration;

		void reportFileOpened(std::filesystem::path const& file, bool isInputFile) const;
		void reportFileOpenFailed(std::filesystem::path const& file, bool isInputFile) const;
		void setupOptions();
	public:
		IOManager( std::vector<gsl::not_null<char const*>>args );
		static gsl::not_null<IOManager*> instance() { return _instance; }
		std::istream& getInputFile();
		std::ostream& getOutputFile();
		void startProcessing() const;
		void endProcessing() const;
		Configuration getConfiguration() const;
		std::optional<std::ifstream> openInputFile(std::filesystem::path path);
		std::optional<std::ofstream> openOutputFile(std::filesystem::path path);
		PrettyPrinterConfiguration prettyPrinterConfig() const noexcept { return _configuration._prettyPrinterConfig; }
	};
}