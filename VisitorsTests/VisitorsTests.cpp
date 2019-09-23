#include <sstream>
#include "pch.h"
#include "CppUnitTest.h"
#include "..//Visitors/CurrentContextVisitor.hpp"
#include "AntlrHelper.hpp"
#include "../Visitors/ForeachVisitor.hpp"
#include "../Visitors/AergiaExpressionVisitor.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std::literals;
using namespace Aergia::DataStructures;

namespace VisitorsTests
{
	using namespace Aergia::DataStructures;

	TEST_CLASS( CurrentContextVisitorTests )
	{
	public:
		TEST_METHOD( PrimitiveClassMembers )
		{
			using namespace std::literals;
			using namespace Aergia::DataStructures;
			std::stringstream input = std::stringstream( "class Test { public: int x,y,z = 3; std::string getString();};"s );

			AntlrHelper helper( input );

			auto& visitor = helper.getVisitor();

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  testClass = visitor.getRootNamespace()->resolveInContents<TypeContext>( "Test"s );
			Assert::IsTrue( testClass != nullptr );
			Assert::IsTrue( testClass->resolveInContents<VariableContext>( "x"s ) != nullptr );
			Assert::IsTrue( testClass->resolveInContents<VariableContext>( "y"s ) != nullptr );
			Assert::IsTrue( testClass->resolveInContents<VariableContext>( "z"s ) != nullptr );
		}

		TEST_METHOD( PrimitiveClassMembersInNamespace )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace XX {class Test { public: int x,y,z = 3; std::string getString();};}"s );

			AntlrHelper helper( input );

			auto& visitor = helper.getVisitor();

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  testClass = visitor.getRootNamespace()->resolveInContents<TypeContext>( "XX::Test"s );
			Assert::IsTrue( testClass != nullptr );
			Assert::IsTrue( testClass->resolveInContents<VariableContext>( "x"s ) != nullptr );
			Assert::IsTrue( testClass->resolveInContents<VariableContext>( "y"s ) != nullptr );
			Assert::IsTrue( testClass->resolveInContents<VariableContext>( "z"s ) != nullptr );
		}

		TEST_METHOD( FullClassQualification )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace XX {class Test { public: int x,y,z = 3; std::string getString();};}"s );

			AntlrHelper helper( input );

			auto& visitor = helper.getVisitor();

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  testClass = visitor.getRootNamespace()->resolveInContents<Aergia::DataStructures::TypeContext>( "XX::Test"s );
			Assert::IsTrue( testClass != nullptr );
			Assert::IsTrue( testClass->resolveInContents<VariableContext>( "x"s ) != nullptr );
			Assert::IsTrue( testClass->resolveInContents<VariableContext>( "y"s ) != nullptr );
			Assert::IsTrue( testClass->resolveInContents<VariableContext>( "z"s ) != nullptr );
		}

		TEST_METHOD( FreeFunctionFullQualification )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace XX {int main() {return 0;}}"s );

			AntlrHelper helper( input );

			auto& visitor = helper.getVisitor();

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  main = visitor.getRootNamespace()->resolveInContents<Aergia::DataStructures::MethodContext>( "XX::main"s );
			Assert::IsTrue( main != nullptr );
			Assert::IsTrue( main->accessibility() == Aergia::DataStructures::MemberAccessibility::None );
			Assert::IsTrue( main->returnValue() == visitor.getRootNamespace()->resolveInContents<Aergia::DataStructures::TypeContext>( "int"s ) );
		}

		TEST_METHOD( PrimitivesPresent )
		{
			using namespace Aergia::DataStructures;
			using namespace std::string_literals;
			std::stringstream input = std::stringstream( "namespace XX {int main() {return 0;}}"s );

			AntlrHelper helper( input );

			auto& visitor = helper.getVisitor();
			auto const root = visitor.getRootNamespace();
			auto primitives =
			{
				"int"s, "long"s, "double"s, "float"s
			};
			for (auto const& primive : primitives)
			{
				auto type = root->resolveInContents<TypeContext>( primive );
				Assert::IsTrue( type != nullptr );
				Assert::IsTrue( type->accessibility() == MemberAccessibility::None );
				Assert::IsTrue( type->getBases().size() == 0 );
				Assert::IsTrue( type->getName() == primive );
			}
		}

		TEST_METHOD( NamespaceImportToNamespace )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace YY{class T{};} namespace XX {using namespace YY; int main() {return 0;}}"s );

			AntlrHelper helper( input );

			auto& visitor = helper.getVisitor();

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  xx = visitor.getRootNamespace()->resolveInContents<NamespaceContext>( "XX"s );
			Assert::IsTrue( xx != nullptr );
			auto resoved = visitor.getRootNamespace()->resolveInContents<Aergia::DataStructures::TypeContext>( "YY::T"s );
			auto& r = Aergia::DataStructures::Resolver::instance();
			auto imported = r.resolve<TypeContext>( visitor.getRootNamespace(), "XX::T"s );
			Assert::IsTrue( resoved == imported );


		}

		TEST_METHOD( NamespaceQualifiedReturnType )
		{
			std::stringstream input = std::stringstream( "namespace YY{class T{};} namespace XX {YY::T main() {return 0;}}"s );

			AntlrHelper helper( input );

			auto& visitor = helper.getVisitor();

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  xx = visitor.getRootNamespace()->resolveInContents<NamespaceContext>( "XX"s );
			Assert::IsTrue( xx != nullptr );
			auto main = Resolver::instance().resolve<MethodContext>( visitor.getRootNamespace(), "XX::main"s );
			auto t = Resolver::instance().resolve<TypeContext>( visitor.getRootNamespace(), "YY::T"s );
			Assert::IsTrue( main != nullptr );
			Assert::IsTrue( main->returnValue() == t );

		}

		TEST_METHOD( TypeImportToNamespace )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace YY{class T{};} namespace XX {using Lssss = YY::T; int main() {return 0;}}"s );

			AntlrHelper helper( input );

			auto& visitor = helper.getVisitor();
			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  xx = visitor.getRootNamespace()->resolveInContents<NamespaceContext>( "XX"s );
			Assert::IsTrue( xx != nullptr );
			auto resoved = visitor.getRootNamespace()->resolveInContents<Aergia::DataStructures::TypeContext>( "YY::T"s );
			auto imported = xx->resolveInAliases<Aergia::DataStructures::TypeContext>( "Lssss"s );
			Assert::IsTrue( resoved == imported );
		}

		TEST_METHOD( InterdependentTypes )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "namespace t{ class B; class A {B* n;}; class B{};}"s );

			AntlrHelper helper( input );

			auto& visitor = helper.getVisitor();
			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

			auto  xx = visitor.getRootNamespace()->resolveInContents<NamespaceContext>( "XX"s );
			Assert::IsTrue( xx != nullptr );
			auto resoved = visitor.getRootNamespace()->resolveInContents<Aergia::DataStructures::TypeContext>( "YY::T"s );
			auto imported = xx->resolveInAliases<Aergia::DataStructures::TypeContext>( "Lssss"s );
			Assert::IsTrue( resoved == imported );
		}

		TEST_METHOD( s )
		{
			using namespace std::literals;
			using namespace Aergia::Visitors;
			std::stringstream input = std::stringstream( "class A{}; class B{}; class C : public A, B{}; int main(){ $foreach($x in $typeof(C).bases) ${ $x$$ $}}"s );

			AntlrHelper helper( input );
			auto translationUnit = helper.getParser()->translationunit();
			auto l = helper.getParser()->translationunit()->getText();
			auto& visitor = helper.getVisitor();
			visitor.addVisitor<ForeachVisitor>( &visitor );
			visitor.addVisitor<AergiaExpressionVisitor>( visitor );

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, translationUnit );

			auto g = translationUnit->getText();
			Assert::IsTrue( g == "classA{};classB{};classC:publicA,B{};intmain(){{{A}{B}}}<EOF>"s );
		}
	};
}
