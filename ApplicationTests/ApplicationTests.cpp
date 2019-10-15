#include "pch.h"
#include "CppUnitTest.h"
#include "../Aergis/Aergis.hpp"
#include "../Aergis/MissingDependencyException.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ApplicationTests
{
	TEST_CLASS(ApplicationTests)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Aergia::Exceptions::MissingDependencyException a("","");
			char const* const args[] = { "","--project=\"D:/Test/Aergia_test_project/TestProject.arg\"" };
			run(2, args);
		}
	};
}
