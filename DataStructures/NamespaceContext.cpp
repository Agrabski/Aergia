#include "pch.h"
#include "NamespaceContext.hpp"

using namespace Aergia::DataStructures;

void NamespaceContext::bootstrapPrimitives()
{
	appendContent( std::make_unique<TypeContext>( "int", this, MemberAccessibility::None ) );
	appendContent( std::make_unique<TypeContext>( "float", this, MemberAccessibility::None ) );
	appendContent( std::make_unique<TypeContext>( "double", this, MemberAccessibility::None ) );
	appendContent( std::make_unique<TypeContext>( "long", this, MemberAccessibility::None ) );
}

std::unique_ptr<NamespaceContext> NamespaceContext::mergeRoots( std::unique_ptr<NamespaceContext>&& a, std::unique_ptr<NamespaceContext>&& b )
{
	if (a == nullptr)
		return std::move( b );
	if (b == nullptr)
		return std::move( a );
	auto result = std::move( a );
	result->copyImports( *b );
	result->moveContents( *b );
	result->copyAliases( *b );
	return std::move( result );
}
