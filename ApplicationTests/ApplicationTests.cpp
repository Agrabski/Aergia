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

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ApplicationTests
{
	TEST_CLASS(ApplicationTests)
	{

		std::string exec(const char* cmd) {
			std::array<char, 128> buffer;
			std::string result;
			std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
			if (!pipe) {
				throw std::runtime_error("popen() failed!");
			}
			while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
				result += buffer.data();
			}
			return result;
		}

	public:

		TEST_METHOD(TestMethod1)
		{
			Aergia::Exceptions::MissingDependencyException a("","");
			char const* const args[] = { "","--project=\"D:/Test/Aergia_test_project/TestProject.arg\"" };
			run(2, args);

		}
	};
}
