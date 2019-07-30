#pragma once


namespace Aergia::Visitors
{
	class ContextProvider
	{
	public:
		virtual DataStructures::IContext* getByQualifiedName( std::string& const qualifiedName ) = 0;
	};
}