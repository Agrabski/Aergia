#include <sstream>
#include "pch.h"
#include "CppUnitTest.h"
#include "..//Visitors/CurrentContextVisitor.hpp"
#include "AntlrHelper.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VisitorsTests
{
	TEST_CLASS( CurrentContextVisitorTests )
	{
	public:
		TEST_METHOD( PrimitiveClassMembers )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "class Test { public: int x,y,z = 3; std::string getString();};"s );

			AntlrHelper helper( input );

			Aergia::Visitors::CurrentContextVisitor visitor;

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  testClass = visitor.getRootNamespace()->getClass( "Test" );
			Assert::IsTrue( testClass != nullptr );
			Assert::IsTrue( testClass->getVariable( "x" ) != nullptr );
			Assert::IsTrue( testClass->getVariable( "y" ) != nullptr );
			Assert::IsTrue( testClass->getVariable( "z" ) != nullptr );
		}

		TEST_METHOD( PrimitiveClassMembersInNamespace )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace XX {class Test { public: int x,y,z = 3; std::string getString();};}"s );

			AntlrHelper helper( input );

			Aergia::Visitors::CurrentContextVisitor visitor;

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  testClass = visitor.getRootNamespace()->getNamespace("XX")->getClass( "Test" );
			Assert::IsTrue( testClass != nullptr );
			Assert::IsTrue( testClass->getVariable( "x" ) != nullptr );
			Assert::IsTrue( testClass->getVariable( "y" ) != nullptr );
			Assert::IsTrue( testClass->getVariable( "z" ) != nullptr );
		}

		TEST_METHOD( FullClassQualification )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace XX {class Test { public: int x,y,z = 3; std::string getString();};}"s );

			AntlrHelper helper( input );

			Aergia::Visitors::CurrentContextVisitor visitor;

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  testClass = visitor.getByQualifiedName<Aergia::DataStructures::ClassContext>( "XX::Test" );
			Assert::IsTrue( testClass != nullptr );
			Assert::IsTrue( testClass->getVariable( "x" ) != nullptr );
			Assert::IsTrue( testClass->getVariable( "y" ) != nullptr );
			Assert::IsTrue( testClass->getVariable( "z" ) != nullptr );
		}

	};
}
