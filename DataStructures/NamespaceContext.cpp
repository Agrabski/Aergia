#include "pch.h"
#include "NamespaceContext.hpp"

void Aergia::DataStructures::NamespaceContext::bootstrapPrimitives()
{
	_classes.emplace_back( std::make_unique<TypeContext>( "int", this, MemberAccessibility::None ) );
	_classes.emplace_back( std::make_unique<TypeContext>( "float", this, MemberAccessibility::None ) );
	_classes.emplace_back( std::make_unique<TypeContext>( "double", this, MemberAccessibility::None ) );
	_classes.emplace_back( std::make_unique<TypeContext>( "long", this, MemberAccessibility::None ) );
}
