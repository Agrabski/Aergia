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
#include "../Configuration/CompilerConfiguration.hpp"

namespace Aergia::IO
{
	using namespace std::literals;
	using Aergia::Configuration::ProjectConfiguration;
	class IOManager
	{
		static inline auto const _project = "project"s;
		static inline auto const _clean = "clean"s;
		static inline auto const _help = "help"s;

		using Options = boost::program_options::options_description;
		Options _programOptions;
		static inline std::unique_ptr<IOManager> _instance = nullptr;
		Configuration _configuration;
		bool _continueExecution = false;
		std::filesystem::path _pathToProject;
		
		
		void cleanProject(std::filesystem::path path) const noexcept;
		void reportFileOpened(std::filesystem::path const& file, bool isInputFile) const;
		void reportFileOpenFailed(std::filesystem::path const& file, bool isInputFile) const;
		void setupOptions();
	public:
		void reportCompilerSelection(Aergia::Configuration::TargetCompiler compiler) const noexcept;
		bool continueExecution() const noexcept { return _continueExecution; }
		IOManager(int argc, char const* const argv[]);
		static gsl::not_null<IOManager*> instance() noexcept { return _instance.get(); }
		void startProcessing() const;
		void endProcessing() const;
		Configuration getConfiguration() const noexcept;
		std::optional<std::ifstream> openInputFile(std::filesystem::path path);
		std::optional<std::ofstream> openOutputFile(std::filesystem::path path);
		PrettyPrinterConfiguration prettyPrinterConfig() const noexcept { return _configuration._prettyPrinterConfig; }
		ProjectConfiguration getProject() const;
		void reportCallchainError(std::string const& callchain, std::string const& exceptionText);
	};
}