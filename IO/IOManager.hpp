#pragma once
#include <vector>
#include <string_view>
#include <stdexcept>
#include <fstream>
#include <optional>
#include <gsl.h>
#include <filesystem>
#include <boost\program_options\options_description.hpp>
#include "Configuraton.hpp"
#include "../Configuration/ProjectConfiguration.hpp"

namespace Aergia::IO
{
	using Aergia::Configuration::ProjectConfiguration;
	class IOManager
	{
		using Options = boost::program_options::options_description;
		Options _programOptions;
		static inline IOManager* _instance = nullptr;
		Configuration _configuration;
		bool _continueExecution = true;
		std::filesystem::path _pathToProject;

		void reportFileOpened(std::filesystem::path const& file, bool isInputFile) const;
		void reportFileOpenFailed(std::filesystem::path const& file, bool isInputFile) const;
		void setupOptions();
	public:
		bool continueExecution() const noexcept { return _continueExecution; }
		IOManager(int argc, char const* const argv[]);
		static gsl::not_null<IOManager*> instance() { return _instance; }
		void startProcessing() const;
		void endProcessing() const;
		Configuration getConfiguration() const;
		std::optional<std::ifstream> openInputFile(std::filesystem::path path);
		std::optional<std::ofstream> openOutputFile(std::filesystem::path path);
		PrettyPrinterConfiguration prettyPrinterConfig() const noexcept { return _configuration._prettyPrinterConfig; }
		ProjectConfiguration getProject() const;
		void reportCallchainError(std::string const& callchain, std::string const& exceptionText);
	};
}