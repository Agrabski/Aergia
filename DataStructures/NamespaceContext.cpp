#include "pch.h"
#include "NamespaceContext.hpp"

void Aergia::DataStructures::NamespaceContext::bootstrapPrimitives()
{
	_classes = std::vector
	{
		TypeContext( "int",this,MemberAccessibility::None ),
		TypeContext( "float",this,MemberAccessibility::None ),
		TypeContext( "double",this,MemberAccessibility::None ),
		TypeContext( "long",this,MemberAccessibility::None )
	};
}
