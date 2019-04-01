#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Parser/RegExLibrar.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ParserTests
{		
	using namespace Aergia::Parser;
	TEST_CLASS(ClassRegExTests)
	{
	public:
		
		TEST_METHOD(emptyClassNoWhitespace)
		{
			auto test = L"class Test{};";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassNoWhitespace1)
		{
			auto test = L"class Test_1{};";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}


		TEST_METHOD(emptyClassNoWhitespace2)
		{
			auto test = L"class Test_asd{};";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassNoWhitespace3)
		{
			auto test = L"class _sdC{};";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassNoWhitespace4)
		{
			auto test = L"class _sdC123{};";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassWithWhitespace)
		{
			auto test = L"class Test{ };";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassWithWhitespace1)
		{
			auto test = L"class Test { };";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassWithWhitespace2)
		{
			auto test = L"class Test { } ;";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassWithWhitespace3)
		{
			auto test = L"class   Test {   }  ;";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}
	};
}