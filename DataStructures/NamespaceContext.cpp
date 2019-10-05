#include "pch.h"
#include "NamespaceContext.hpp"


void Aergia::DataStructures::NamespaceContext::bootstrapPrimitives()
{
	using namespace std::literals;
	appendContent( std::make_unique<TypeContext>( "int"s, this, MemberAccessibility::None ) );
	appendContent( std::make_unique<TypeContext>( "float"s, this, MemberAccessibility::None ) );
	appendContent( std::make_unique<TypeContext>( "double"s, this, MemberAccessibility::None ) );
	appendContent( std::make_unique<TypeContext>( "long"s, this, MemberAccessibility::None ) );
}

std::unique_ptr<Aergia::DataStructures::NamespaceContext> Aergia::DataStructures::NamespaceContext::mergeRoots( std::unique_ptr<Aergia::DataStructures::NamespaceContext>&& a, std::unique_ptr<NamespaceContext>&& b )
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
