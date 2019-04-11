#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Parser/RegExLibrar.hpp"
#include "../Parser/ForeachHeader.hpp"
#include "../Parser/AnonymousDescriptor.hpp"
#include "../Parser/Parser.hpp"

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

		TEST_METHOD(emptyClassWithBase)
		{
			auto test = L"class Test : public Tex {   }  ;";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassWithBase1)
		{
			auto test = L"class Test : public Tex, private KL {   }  ;";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassWithBase2)
		{
			auto test = L"class Test : Tex {   }  ;";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassWithBase3)
		{
			auto test = L"class Test : protected Tex {   }  ;";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassWithBase4)
		{
			auto test = L"class Test : public Tex   , private KL {   }  ;";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

		TEST_METHOD(emptyClassWithBase5)
		{
			auto test = L"class Test : public Tex,private KL {   }  ;";
			auto regex = std::wregex(classRegex);
			Assert::IsTrue(std::regex_match(test, regex));
		}

	};

	TEST_CLASS(parserTests)
	{
		TEST_METHOD(findBases)
		{
			auto test = L"class Test : public Tex   , private KL {   }  ;";
			auto parser = Parser();
			auto result = parser.parseClasses(test);
			Assert::IsTrue(result.size() == 1);
			Assert::IsTrue(result[0].bases.size() == 2);
			Assert::IsTrue(result[0].bases[0].first == Accessibility::Public);
			Assert::IsTrue(result[0].bases[1].first == Accessibility::Private);
		}

		TEST_METHOD(findBases1)
		{
			auto test = L"class Test : public Tex   , KL {   }  ;";
			auto parser = Parser();
			auto result = parser.parseClasses(test);
			Assert::IsTrue(result.size() == 1);
			Assert::IsTrue(result[0].bases.size() == 2);
			Assert::IsTrue(result[0].bases[0].first == Accessibility::Public);
			Assert::IsTrue(result[0].bases[1].first == Accessibility::Private);
		}

		TEST_METHOD(findBases2)
		{
			auto test = L"class Test : protected Tex   , \r\nprivate KL {   }  ;";
			auto parser = Parser();
			auto result = parser.parseClasses(test);
			Assert::IsTrue(result.size() == 1);
			Assert::IsTrue(result[0].bases.size() == 2);
			Assert::IsTrue(result[0].bases[0].first == Accessibility::Protected);
			Assert::IsTrue(result[0].bases[1].first == Accessibility::Private);
		}

		TEST_METHOD(findBases3)
		{
			auto test = L"class Test : public Tex   , \r\n KL {   }  ;";
			auto parser = Parser();
			auto result = parser.parseClasses(test);
			Assert::IsTrue(result.size() == 1);
			Assert::IsTrue(result[0].bases.size() == 2);
			Assert::IsTrue(result[0].bases[0].first == Accessibility::Public);
			Assert::IsTrue(result[0].bases[1].first == Accessibility::Private);
		}
	};

	TEST_CLASS(MacroRecognisionTests)
	{
	public:
		TEST_METHOD(singleForeach)
		{
			auto test = L"$foreach($var in $typeof(Type).fields.fsax)\n${ asdfaffhdfhfh\n\n\n$}";
			auto tmp = ForeachDescriptor::getForeachDescriptors(test);
			Assert::IsTrue(tmp.size() == 1);

		}

		TEST_METHOD(singleAnonymous)
		{
			auto test = L"$anonymous(unique_lock(mutex))$$";
			auto tmp = AnonymousDescriptor::getAnonymousDescriptors(test);
			Assert::IsTrue(tmp.size() == 1);

		}
	};
}