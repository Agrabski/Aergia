#include <string>

namespace Aergia::DataStructures
{
	enum MemberAccessibility { Public, Protected, Private, None };

	MemberAccessibility parse( std::string const& );
}