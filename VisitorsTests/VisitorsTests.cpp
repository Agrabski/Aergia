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

			auto  testClass = visitor.getRootNamespace()->getNamespace( "XX" )->getClass( "Test" );
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

			auto  testClass = visitor.getByQualifiedName<Aergia::DataStructures::TypeContext>( "XX::Test" );
			Assert::IsTrue( testClass != nullptr );
			Assert::IsTrue( testClass->getVariable( "x" ) != nullptr );
			Assert::IsTrue( testClass->getVariable( "y" ) != nullptr );
			Assert::IsTrue( testClass->getVariable( "z" ) != nullptr );
		}

		TEST_METHOD( FreeFunctionFullQualification )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace XX {int main() {return 0;}}"s );

			AntlrHelper helper( input );

			Aergia::Visitors::CurrentContextVisitor visitor;

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  main = visitor.getByQualifiedName<Aergia::DataStructures::MethodContext>( "XX::main" );
			Assert::IsTrue( main != nullptr );
			Assert::IsTrue( main->accesibility() == Aergia::DataStructures::MemberAccessibility::None );
			Assert::IsTrue( main->returnValue() == visitor.getRootNamespace()->resolve<Aergia::DataStructures::TypeContext>( "int"s ) );
		}

		TEST_METHOD( PrimitivesPresent )
		{
			using namespace Aergia::DataStructures;
			using namespace std::string_literals;
			Aergia::Visitors::CurrentContextVisitor visitor;
			auto const root = visitor.getRootNamespace();
			auto primitives =
			{
				"int"s, "long"s, "double"s, "float"s
			};
			for (auto const& primive : primitives)
			{
				auto type = root->getClass( primive );
				Assert::IsTrue( type != nullptr );
				Assert::IsTrue( type->accesibility() == MemberAccessibility::None );
				Assert::IsTrue( type->getBases().size() == 0 );
				Assert::IsTrue( type->getName() == primive );
			}
		}

		TEST_METHOD( NamespaceImportToNamespace )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace YY{class T{};} namespace XX {using namespace YY; int main() {return 0;}}"s );

			AntlrHelper helper( input );

			Aergia::Visitors::CurrentContextVisitor visitor;

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  xx = visitor.getRootNamespace()->getNamespace( "XX"s );
			Assert::IsTrue( xx != nullptr );
			auto resoved = visitor.getRootNamespace()->resolve<Aergia::DataStructures::TypeContext>( "YY::T"s );
			auto imported = xx->resolve<Aergia::DataStructures::TypeContext>( "T"s );
			Assert::IsTrue( resoved == imported );


		}

		TEST_METHOD( NamespaceQualifiedReturnType )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace YY{class T{};} namespace XX {YY::T main() {return 0;}}"s );

			AntlrHelper helper( input );

			Aergia::Visitors::CurrentContextVisitor visitor;

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  xx = visitor.getRootNamespace()->getNamespace( "XX"s );
			Assert::IsTrue( xx != nullptr );
			Assert::IsTrue( xx->getMethod( "main"s ) != nullptr );
			Assert::IsTrue( xx->getMethod( "main"s )->returnValue() == visitor.getRootNamespace()->resolve<Aergia::DataStructures::TypeContext>( "YY::T"s ) );

		}

		TEST_METHOD( TypeImportToNamespace )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace YY{class T{};} namespace XX {using Lssss = YY::T; int main() {return 0;}}"s );

			AntlrHelper helper( input );

			Aergia::Visitors::CurrentContextVisitor visitor;

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  xx = visitor.getRootNamespace()->getNamespace( "XX"s );
			Assert::IsTrue( xx != nullptr );
			auto resoved = visitor.getRootNamespace()->resolve<Aergia::DataStructures::TypeContext>( "YY::T"s );
			auto imported = xx->resolve<Aergia::DataStructures::TypeContext>( "Lssss"s );
			Assert::IsTrue( resoved == imported );
		}
	};
}
