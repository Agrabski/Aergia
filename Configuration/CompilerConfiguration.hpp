#pragma once
#include <string>
#include <map>
#include <pugixml.hpp>

namespace Aergia::Configuration
{
	enum class TargetCompiler
	{
		None,	// dont generate any aditional files
		Gcc,	// generate gcc files
		Msvc,	// generate visual studio solution
	};

	TargetCompiler parse(std::string const& text) noexcept;

	struct CompilerConfiguration
	{
		TargetCompiler _target = TargetCompiler::None;
		std::map<std::string, std::string> _options;
		CompilerConfiguration() = default;
		CompilerConfiguration(pugi::xml_node const node);

	};
}