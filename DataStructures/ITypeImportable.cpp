#include "pch.h"
#include "ITypeImportable.hpp"

Aergia::DataStructures::TypeContext* Aergia::DataStructures::ITypeImportable::resolveInAliases( std::string name ) const noexcept
{
	try 
	{
		// todo: add logging.
		auto result = _aliases.find( name );
		if (result != _aliases.end())
			return result->second;
		return nullptr;
	}
	catch (...)
	{
		// shit went sideways so much we cant handle it (std::find is essentially noexcept)
		std::terminate();
	}
}

void Aergia::DataStructures::ITypeImportable::appendTypeAlias( std::string name, TypeContext* type )
{
	assert( _aliases.find( name ) == _aliases.end() );
	_aliases[name] = type;
}
