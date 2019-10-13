#include "pch.h"
#include "AssemblyConfiguration.hpp"
#include <pugixml.hpp>
#include <map>

using namespace Aergia::Configuration;

Target Aergia::Configuration::parse(std::string const& text) noexcept
{
	static std::map<std::string, Target> targets
	{
		{"exe",Target::Exe},
		{"dll",Target::DynamicLibrary},
		{"static",Target::StaticLibrary}
	};
	return targets[text];
}

AssemblyConfiguration::AssemblyConfiguration(std::filesystem::path const& p) : _pathToSelf(p)
{
	pugi::xml_document file;
	file.load_file(p.c_str());
	auto root = file.child("Assembly");
	_assemblyName = root.child("name").child_value();
	for (auto child : root.child("dependencies").children("dependency"))
		_dependencyNames.emplace_back(child.child_value());
	for (auto child : root.child("files").children("file"))
		_files.emplace_back(child.child_value());
	_target = parse(root.child("target").child_value());
}
