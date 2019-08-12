#include "pch.h"
#include "ITypeImportable.hpp"

Aergia::DataStructures::TypeContext* Aergia::DataStructures::ITypeImportable::resolveInAliases( std::string name )
{
	// todo: add logging.
	auto result = _aliases.find( name );
	if (result != _aliases.end())
		return result->second;
	return nullptr;
}
