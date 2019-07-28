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
		TEST_METHOD( ClassMembers )
		{
			using namespace std::literals;
			std::stringstream input = std::stringstream( "class Test { public: int x,y,z = 3; std::string getString();};"s );

			AntlrHelper helper( input );

			Aergia::Visitors::CurrentContextVisitor visitor;

			antlr4::tree::ParseTreeWalker::DEFAULT.walk( &visitor, helper.getParser()->translationunit() );

		}
	};
}
