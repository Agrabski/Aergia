#pragma once
#include <gsl.h>
#include <type_traits>
#include "QualifiedName.hpp"
#include "HasResolveInAliases.hpp"


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
			return im.resolveInContents<T>( name );
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

		template<typename T, typename Importable>
		static typename enable_if<HasResolveInAliases<Importable, T>::value, T>::type* resolveInAliases( QualifiedName name, Importable& im )
		{
			return im.resolveInAliases<T>( name );
		}

		template<typename T, typename Importable>
		static typename enable_if<!HasResolveInAliases<Importable, T>::value, T>::type* resolveInAliases( QualifiedName name, Importable& im ) { return nullptr; }

		template<typename Result, typename Source>
		Result* tryResolveOnType( not_null<IContext*> source, QualifiedName name )
		{
			static_assert(std::is_base_of<IContext, Source>::value);
			auto ns = dynamic_cast<Source*>(source.get());
			if (ns != nullptr)
			{
				Result* result = nullptr;
				resolveOnKnownType<Result>( *ns, name, result );
				return result;
			}
			return nullptr;
		}

		template<typename Import, typename Target>
		typename enable_if<HasResolveInAliases<Target, Import>::value, bool>::type tryImport( not_null<Import*> import, std::string name, not_null<IContext*>target )
		{
			static_assert(std::is_base_of<IContext, Target>::value, "is not a context");
			auto n = dynamic_cast<Target*>(target.get());
			if (n != nullptr)
			{
				n->appendAlias( name, import );
				return true;
			}
			return false;
		}
		template<typename Import, typename Target>
		typename enable_if<!HasResolveInAliases<Target, Import>::value, bool>::type tryImport( not_null<Import*> import, std::string name, not_null<IContext*>target )
		{
			return false;
		}

	public:
		template<typename Target, typename Source>
		static int resolveOnKnownType( Source& im, QualifiedName name, Target*& result )
		{
			static_assert(std::is_base_of<IContext, Source>::value);
			if (result == nullptr)
				result = resolveInImports<Target, Source>( name, im );
			if (result == nullptr)
				result = resolveInChildContents<Target, Source>( name, im );
			if (result == nullptr)
				result = resolveInAliases<Target, Source>( name, im );
			return 0;
		}


		template<typename T>
		T* resolve( not_null<IContext*> source, QualifiedName name, bool fallbackToRoot = true )
		{
			T* result = tryResolveOnType<T, NamespaceContext>( source, name );
			if (result != nullptr)
				return result;
			result = tryResolveOnType<T, TypeContext>( source, name );
			if (result != nullptr)
				return result;
			if (fallbackToRoot)
				return resolve<T>( source->getRoot(), name, false );
			return nullptr;
		}

		template<typename T>
		T* appendImport( not_null<IContext*> source, QualifiedName name )
		{
			auto ns = dynamic_cast<NamespaceContext*>(source.get());
			if (ns != nullptr)
			{
				auto import = resolve<T>( source, name );
				ns->appendImport<T>( import );
				return import;
			}
			std::terminate();
		}

		template<typename T>
		T* appendAlias( not_null<IContext*> source, std::string aliasName, QualifiedName path )
		{
			auto resolvedType = resolve<T>( source, path );

			if (tryImport<T, NamespaceContext>( resolvedType, aliasName, source ))
				return resolvedType;
			if (tryImport<T, TypeContext>( resolvedType, aliasName, source ))
				return resolvedType;
			std::terminate();
		}

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