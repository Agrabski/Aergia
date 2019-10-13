#include "pch.h"
#include "CompilerConfiguration.hpp"

Aergia::Configuration::CompilerConfiguration::CompilerConfiguration(pugi::xml_node const node)
{
	if (node == nullptr)
		return;
	_target = parseTargetCompiler(node.child("target").child_value());
	for (auto& option : node.child("options").children())
		_options[option.name(), option.child_value()];
	_outputBinaryPath = node.child("outputPath").child_value();
}

Aergia::Configuration::TargetCompiler Aergia::Configuration::parseTargetCompiler(std::string const& text) noexcept
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

std::string_view Aergia::Configuration::toString(TargetCompiler compiler) noexcept
{
	static std::map<TargetCompiler,std::string> _targetCompilers
	{
		{TargetCompiler::None,""},
		{TargetCompiler::Gcc,"gcc"},
		{TargetCompiler::Msvc,"msvc"}
	};
	auto result = _targetCompilers.find(compiler);
	if (result != _targetCompilers.end())
		return result->second;
	return _targetCompilers[TargetCompiler::None];
}
