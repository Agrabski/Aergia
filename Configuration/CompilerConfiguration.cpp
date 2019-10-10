#include "pch.h"
#include "CompilerConfiguration.hpp"

Aergia::Configuration::CompilerConfiguration::CompilerConfiguration(pugi::xml_node const node)
{
	if (node == nullptr)
		return;
	_target = parse(node.child("target").child_value());
	for (auto& option : node.child("options").children())
		_options[option.name(), option.child_value()];
}

Aergia::Configuration::TargetCompiler Aergia::Configuration::parse(std::string const& text) noexcept
{
	static std::map<std::string, TargetCompiler> _targetCompilers
	{
		{"",TargetCompiler::None},
		{"gcc",TargetCompiler::Gcc},
		{"msvc",TargetCompiler::Msvc}
	};
	auto result = _targetCompilers.find(text);
	if (result != _targetCompilers.end())
		return result->second;
	return TargetCompiler::None;
}
