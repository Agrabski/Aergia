#include "pch.h"
#include "CppUnitTest.h"
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include "../Aergis/Aergis.hpp"
#include "../Aergis/MissingDependencyException.hpp"
#include <filesystem>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using std::filesystem::path;


namespace ApplicationTests
{
	TEST_CLASS(ApplicationTests)
	{

		std::string exec(const char* cmd) {
			std::array<char, 128> buffer;
			std::string result;
			std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd, "r"), _pclose);
			if (!pipe) {
				throw std::runtime_error("popen() failed!");
			}
			while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
				result += buffer.data();
			}
			return result;
		}

		void runTest(path testcasePath, std::vector<std::string> args, std::string expected)
		{
			auto currentPath = std::filesystem::current_path();
			std::vector<char*> arguments;
			arguments.resize(args.size() + 1);
			std::transform(args.begin(), args.end(), arguments.begin() + 1, [](auto& e) {return e.data(); });
			std::string projectOption = "--project=" + testcasePath.string();
			arguments.push_back(projectOption.data());
			run(arguments.size(), arguments.data());
			auto execPath = (testcasePath.parent_path() / "output" / "bin" / "Application" / "Application.exe").string();
			std::filesystem::current_path(currentPath);
			auto result = exec(execPath.c_str());
			Assert::IsTrue(result == expected);
		}

	public:

		TEST_METHOD(TestMethod1)
		{
			auto p = std::filesystem::current_path();
			p = p.parent_path().parent_path();
			auto a = p / "Tests" / "test1" / "test1.arg";
			runTest(a, std::vector<std::string>(), "3 n5 b");
		}
	};
}
