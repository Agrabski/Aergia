#pragma once
#include "Definitions.hpp"
#include "QualifiedName.hpp"

namespace Aergia::DataStructures
{
	class INamespaceImportable
	{
		std::vector<NamespaceContext*> _imports;
	public:
		void appendNamespaceImport( NamespaceContext* ns );

		template<typename T>
		T* getInImportedNamespace( QualifiedName name )
		{
			for (auto im : _imports)
			{
				if (im == nullptr)
					std::terminate();
				auto result = im->resolve<T>( name, false );
				if (result != nullptr)
					return result;
			}
			return nullptr;
		}
	};
}