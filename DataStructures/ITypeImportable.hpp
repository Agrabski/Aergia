#include <map>
#include "ClassContext.hpp"

namespace Aergia::DataStructures
{
	class ITypeImportable
	{
		std::map<std::string, TypeContext*> _aliases;
	public:
		TypeContext* resolveInAliases( std::string name ) const noexcept;
		void appendTypeAlias( std::string name, TypeContext* type );
	};
}