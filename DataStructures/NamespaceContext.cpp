#include "pch.h"
#include "NamespaceContext.hpp"

void Aergia::DataStructures::NamespaceContext::bootstrapPrimitives()
{
	appendContent( std::make_unique<TypeContext>( "int", this, MemberAccessibility::None ) );
	appendContent( std::make_unique<TypeContext>( "float", this, MemberAccessibility::None ) );
	appendContent( std::make_unique<TypeContext>( "double", this, MemberAccessibility::None ) );
	appendContent( std::make_unique<TypeContext>( "long", this, MemberAccessibility::None ) );
}
