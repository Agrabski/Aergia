#include "pch.h"
#include "INamespaceImportable.hpp"
#include "NamespaceContext.hpp"

void Aergia::DataStructures::INamespaceImportable::appendNamespaceImport( NamespaceContext* ns )
{
	_imports.push_back( ns );
}
