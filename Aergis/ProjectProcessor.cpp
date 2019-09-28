#include "ProjectProcessor.hpp"
#include <filesystem>
#include <memory>
#include "Assembly.hpp"
#include "MissingDependencyException.hpp"
#include "../DataStructures/NamespaceContext.hpp"
#include "../Visitors/CurrentContextVisitor.hpp"
#include "../Visitors/AnonymousVisitor.hpp"
#include "../Visitors/AergiaExpressionVisitor.hpp"
#include "../Visitors/ForeachVisitor.hpp"
#include "../IO/IOManager.hpp"
#include "../AntlrUtilities/PrettyPrinter.hpp"

using namespace Aergia;
using Configuration::AssemblyConfiguration;
using Configuration::ProjectConfiguration;
using DataStructures::NamespaceContext;
using gsl::not_null;
using std::filesystem::path;

std::vector<Aergia::Configuration::AssemblyConfiguration> Aergia::ProjectProcessor::prepareConfigurations(std::vector<std::filesystem::path> const& paths)
{
	std::vector<Configuration::AssemblyConfiguration> result;
	for (auto const& path : paths)
		result.emplace_back(path);
	return result;
}

void Aergia::ProjectProcessor::resolveDependencies(std::vector<Assembly>& assemblies)
{
	for (auto& assembly : assemblies)
	{
		auto const dependencies = assembly.getMissingDependencies();
		for (std::string const& dependency : dependencies)
		{
			auto result = std::find_if(assemblies.begin(), assemblies.end(),
				[&dependency](Assembly& ass) noexcept
			{
				return ass.assemblyName() == dependency;
			});
			if (result == assemblies.end())
				throw Exceptions::MissingDependencyException(assembly.assemblyName(), dependency);
			assembly.provideDependency(&(*result));
		}
	}

}

std::unique_ptr<NamespaceContext> ProjectProcessor::processSourceFile(AssemblyConfiguration const& configuration, std::vector<not_null<Assembly*>> dependencies, path pathToFile, std::unique_ptr<NamespaceContext>& currentRoot, path outputDirectory)
{
	using namespace Aergia::Visitors;
	auto ioManager = IO::IOManager::instance();
	auto inputStream = ioManager->openInputFile(pathToFile);
	if (inputStream)
	{
		antlr4::ANTLRInputStream stream(*inputStream);
		AergiaCpp14Lexer lexer(&stream);
		antlr4::CommonTokenStream tokens(&lexer);
		AergiaCpp14Parser parser(&tokens);
		auto root = parser.translationunit();
		CurrentContextVisitor contextProvider(parser, lexer, tokens, std::move(currentRoot));
		contextProvider.addVisitor<AnonymousVisitor>(contextProvider);
		contextProvider.addVisitor<ForeachVisitor>(&contextProvider);
		contextProvider.addVisitor<AergiaExpressionVisitor>(contextProvider);
		antlr4::tree::ParseTreeWalker::DEFAULT.walk(&contextProvider, parser.translationunit());

		auto outputStream = ioManager->openOutputFile(outputDirectory / pathToFile.filename());
		if (outputStream)
			Utilities::PrettyPrinter(ioManager->prettyPrinterConfig()).prettyPrint(*outputStream, root);

		return contextProvider.releaseRoot();
	}


	return std::move(currentRoot);
}

std::unique_ptr<NamespaceContext> Aergia::ProjectProcessor::processHeaderFile(Configuration::AssemblyConfiguration const & configuration, vector<gsl::not_null<Assembly*>> dependencies, std::filesystem::path pathToFile, std::unique_ptr<DataStructures::NamespaceContext>& currentRoot, path outputDirectory)
{
	return std::unique_ptr<NamespaceContext>();
}


void Aergia::ProjectProcessor::processProject(Configuration::ProjectConfiguration const& configuration, IO::Configuration const& ioConfig)
{
	std::error_code code;
	std::filesystem::current_path(configuration._projectDirectory, code);
	// todo: do stuff with error code
	std::filesystem::path const outputDirectory = configuration._outputDirectory;

	auto const assemblyConfigurations = prepareConfigurations(configuration._assemblyDirectories);
	std::vector<Assembly> assemblies;
	assemblies.reserve(assemblyConfigurations.size());
	for (auto const& config : assemblyConfigurations)
		assemblies.emplace_back(config);
	resolveDependencies(assemblies);

	auto targetAssembly = std::find_if(assemblies.begin(), assemblies.end(), [&configuration](Assembly const& ass) noexcept
	{return ass.assemblyName() == configuration._targetAssemblyName; }
	);
	assert(targetAssembly != assemblies.end());
	std::unique_ptr<DataStructures::NamespaceContext> x = nullptr;
	targetAssembly->process(this, x, outputDirectory);
}

std::unique_ptr<Aergia::DataStructures::NamespaceContext> Aergia::ProjectProcessor::processAssembly(Configuration::AssemblyConfiguration const& configuration, std::vector<gsl::not_null<Assembly*>> dependencies, std::unique_ptr<DataStructures::NamespaceContext>& currentRoot, std::filesystem::path outputDirectory)
{
	// ensure dependencies are ready
	for (auto dependency : dependencies)
		if (!dependency->isProcessed())
			dependency->process(this, currentRoot, outputDirectory);
	// first, work through headers to gather definitions
	for (auto header : configuration._files)
		if (header.extension() == "hpp" || header.extension() == "h")
		{
			auto newRoot = processHeaderFile(configuration, dependencies, header, currentRoot, outputDirectory / configuration._pathToSelf / header.parent_path());
			currentRoot = DataStructures::NamespaceContext::mergeRoots(std::move(currentRoot), std::move(newRoot));
		}

	// process source files
	for (auto file : configuration._files)
		if (file.extension() == "cpp" || file.extension() == "c")
		{
			auto newRoot = processSourceFile(configuration, dependencies, file, currentRoot, outputDirectory / configuration._pathToSelf / file.parent_path());
			currentRoot = DataStructures::NamespaceContext::mergeRoots(std::move(currentRoot), std::move(newRoot));
		}
	return std::unique_ptr<DataStructures::NamespaceContext>();

}
