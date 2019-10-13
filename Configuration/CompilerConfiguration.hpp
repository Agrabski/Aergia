#pragma once
#include <string>
#include <map>
#include <filesystem>
#include <pugixml.hpp>

namespace Aergia::Configuration
{
	enum class TargetCompiler
	{
		None,	// dont generate any aditional files
		Gcc,	// generate gcc files
		Msvc,	// generate visual studio solution
	};

	TargetCompiler parseTargetCompiler(std::string const& text) noexcept;
	std::string_view toString(TargetCompiler) noexcept;

	struct CompilerConfiguration
	{
		TargetCompiler _target = TargetCompiler::None;
		std::map<std::string, std::string> _options;
		std::filesystem::path _outputBinaryPath;
		CompilerConfiguration() = default;
		CompilerConfiguration(pugi::xml_node const node);

	};
}