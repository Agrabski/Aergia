#pragma once
#include <gsl.h>
#include <type_traits>
#include "QualifiedName.hpp"


namespace Aergia::DataStructures
{
	using gsl::not_null;
	using std::unique_ptr;
	using std::enable_if;
	class Resolver
	{
		template<typename T, typename Value, typename  N = void>
		bool appendContent( T* source, unique_ptr<Value>& value )
		{
			if (source != nullptr)
				source->appendContent( std::move( value ) );
			return source != nullptr;
		}

		template<typename T, typename Importable>
		static typename enable_if<HasResolveInContents<Importable, T>::value, T>::type* resolveInChildContents( QualifiedName name, Importable& im )
		{
			if(name.peekQualificationLevel() == im.getName())
				return im.resolveInContents<T>( name.next() );
			return nullptr;
		}

		template<typename T, typename Importable>
		static typename enable_if<!HasResolveInContents<Importable, T>::value, T>::type* resolveInChildContents( QualifiedName name, Importable& im ) { return nullptr; }

		template<typename T, typename Importable>
		static typename enable_if<HasResolveInImports<Importable, T>::value, T>::type* resolveInImports( QualifiedName name, Importable& im )
		{
			return im.resolveInImports<T>( name );
		}

		template<typename T, typename Importable>
		static typename enable_if<!HasResolveInImports<Importable, T>::value, T>::type* resolveInImports( QualifiedName name, Importable& im ) { return nullptr; }


	public:
		template<typename Target, typename Source>
		static int resolveOnKnownType( Source& im, QualifiedName name, Target*& result )
		{
			static_assert(std::is_base_of<IContext, Source>::value);
			if (result != nullptr)
				result = resolveInImports<Target, Source>( name, im );
			if (result != nullptr)
				return 0;

			result = resolveInChildContents<Target, Source>( name, im );
			if (result != nullptr)
				return 0;
		}


		template<typename T>
		T* resolve( not_null<IContext*> source, QualifiedName name )
		{
			auto ns = dynamic_cast<NamespaceContext*>(source.get());
			if (ns != nullptr)
			{
				T* result = nullptr;
				resolveOnKnownType<T>( *ns, name, result );
				return result;
			}
		}

		template<typename T>
		T* appendImport( not_null<IContext*> source, QualifiedName name ){ std::terminate(); }

		template<typename T>
		T* appendAlias( not_null<IContext*> source, std::string aliasName, QualifiedName path ){ std::terminate(); }

		template<typename T>
		T* appendContent( not_null<IContext*> source, unique_ptr<T>&& value )
		{
			auto result = value.get();
			if (appendContent<NamespaceContext, T>( dynamic_cast<NamespaceContext*>(source.get()), value ))
				return result;
			if (appendContent( dynamic_cast<TypeContext*>(source.get()), value ))
				return result;
			std::terminate();
		}

	};
}