#pragma once
#include <gsl.h>
#include <type_traits>
#include "IContext.hpp"
#include "QualifiedName.hpp"
#include "HasResolveInAliases.hpp"
#include "HasResolveInContents.hpp"
#include "HasResolveInImports.hpp"


namespace Aergia::DataStructures
{
	class Resolver
	{

		template<typename T, typename Value, typename  N = void>
		bool appendContent( T* source, std::unique_ptr<Value>& value )
		{
			if (source != nullptr)
				source->appendContent( std::move( value ) );
			return source != nullptr;
		}

		template<typename T, typename Importable>
		typename std::enable_if<HasResolveInContents<Importable, T>::value, T>::type* resolveInChildContents( QualifiedName name, Importable& im )
		{
			return im.resolveInContents<T>( name );
		}

		template<typename T, typename Importable>
		typename std::enable_if<!HasResolveInContents<Importable, T>::value, T>::type* resolveInChildContents( QualifiedName name, Importable& im ) { return nullptr; }

		template<typename T, typename Importable, typename std::enable_if<HasResolveInImports<Importable, T>::value, int>::type = 0>
		T* resolveInImports( QualifiedName name, Importable& im ) { return im.resolveImports<T>( name ); }

		template<typename T, typename Importable, typename std::enable_if<!HasResolveInImports<Importable, T>::value, int>::type = 0>
		T* resolveInImports( QualifiedName name, Importable& im ) { return nullptr; }

		template<typename T, typename Importable, typename std::enable_if<HasResolveInImports<Importable, T>::value, int>::type = 0>
		T const* resolveInImports( QualifiedName name, Importable const& im ) { return im.resolveImports<T>( name ); }

		template<typename T, typename Importable, typename std::enable_if<!HasResolveInImports<Importable, T>::value, int>::type = 0>
		T const* resolveInImports( QualifiedName name, Importable const& im ) { return nullptr; }

		template<typename T, typename Importable, typename std::enable_if<HasResolveInAliases<Importable, T>::value, int>::type = 0>
		T* resolveInAliases( QualifiedName name, Importable& im )
		{
			return im.resolveInAliases<T>( name );
		}

		template<typename T, typename Importable>
		typename std::enable_if<!HasResolveInAliases<Importable, T>::value, T>::type* resolveInAliases( QualifiedName name, Importable& im ) { return nullptr; }

		template<typename Result, typename Source>
		Result* tryResolveOnType( gsl::not_null<IContext*> source, QualifiedName name )
		{
			static_assert(std::is_base_of<IContext, Source>::value);
			auto ns = dynamic_cast<Source*>(source.get());
			if (ns != nullptr)
				return resolveOnKnownType<Result, Source>( ns, name );
			return nullptr;
		}

		template<typename Result, typename Source>
		Result const* tryResolveOnType( gsl::not_null<IContext const*> source, QualifiedName name )
		{
			static_assert(std::is_base_of<IContext, Source>::value);
			auto ns = dynamic_cast<Source const*>(source.get());
			if (ns != nullptr)
				return resolveOnKnownType<Result>( *ns, name );
			return nullptr;
		}

		template<typename Import, typename Target, typename std::enable_if<sizeof( Target ) == sizeof( Target ) && HasResolveInAliases<Target, Import>::value, int>::type = 0>
		bool tryImport( gsl::not_null<Import*> import, std::string name, gsl::not_null<IContext*>target )
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
		template<typename Import, typename Target, typename  std::enable_if<sizeof( Target ) == sizeof( Target ) && !HasResolveInAliases<Target, Import>::value, int>::type = 0 >
		bool tryImport( gsl::not_null<Import*> import, std::string name, gsl::not_null<IContext*>target )
		{
			return false;
		}

		template<typename T, typename X>
		T* validateTypeMatch( X* a )
		{
			return nullptr;
		}

		template<typename T>
		T* validateTypeMatch( T* a )
		{
			return a;
		}

		template<typename T, typename X>
		T const* validateTypeMatch( X const* a )
		{
			return nullptr;
		}

		template<typename T>
		T const* validateTypeMatch( T const* a )
		{
			return a;
		}

		static inline Resolver* _instance;
		Resolver() = default;
	public:

		static Resolver& instance();

		template<typename Target, typename Source>
		Target* resolveOnKnownType( gsl::not_null< Source*> im, QualifiedName name )
		{
			using std::vector;
			using std::function;
			static_assert(std::is_base_of<IContext, Source>::value);
			vector<function<Target * (QualifiedName, Source&)>> functions =
			{
				[this]( auto a, auto& b ) {return resolveInImports<Target, Source>( a,b ); },
				[this]( auto a, auto& b ) {return resolveInChildContents<Target, Source>( a,b ); },
				[this]( auto a, auto& b ) {return resolveInAliases<Target, Source>( a,b ); },
			};
			for (auto f : functions)
			{
				auto result = f( name, *im );
				if (result != nullptr)
					return result;
			}
			return nullptr;
		}

		template<typename Target, typename Source>
		Target const* resolveOnKnownType( gsl::not_null< Source const*> im, QualifiedName name ) const
		{
			using std::array;
			using std::function;
			static_assert(std::is_base_of<IContext, Source>::value);
			array<function<Target const* (QualifiedName, Source const&)>> functions =
			{
				&resolveInImports<Target, Source>,
				&resolveInChildContents<Target, Source>,
				&resolveInAliases<Target, Source>
			};
			for (auto f : functions)
			{
				auto result = f( name, *im );
				if (result != nullptr)
					return result;
			}
			return nullptr;
		}

		template<typename T>
		T* resolve( gsl::not_null<IContext*> source, QualifiedName name )
		{
			if (name.levelCount() == 0)
				return validateTypeMatch<T>(source.get());
			T* result = tryResolveOnType<T, NamespaceContext>( source, name );
			if (result != nullptr)
				return result;
			result = tryResolveOnType<T, TypeContext>( source, name );
			if (result != nullptr)
				return result;
			if (source->parent() != nullptr)
				return resolve<T>( source->parent(), name );
			return nullptr;
		}

		template<typename T>
		T const* resolve( gsl::not_null<IContext const*> source, QualifiedName name ) const
		{
			if (name.levelCount() == 0)
				return validateTypeMatch<T>( source.get() );
			T* result = tryResolveOnType<T, NamespaceContext>( source, name );
			if (result != nullptr)
				return result;
			result = tryResolveOnType<T, TypeContext>( source, name );
			if (result != nullptr)
				return result;
			if (source->parent() != nullptr)
				return resolve<T>( source->parent(), name );
			return nullptr;
		}

		template<typename T>
		T* appendImport( gsl::not_null<IContext*> source, QualifiedName name )
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
		T* appendAlias( gsl::not_null<IContext*> source, std::string aliasName, QualifiedName path )
		{
			auto resolvedType = resolve<T>( source, path );

			if (tryImport<T, NamespaceContext>( resolvedType, aliasName, source ))
				return resolvedType;
			if (tryImport<T, TypeContext>( resolvedType, aliasName, source ))
				return resolvedType;
			std::terminate();
		}

		template<typename T>
		T* appendContent( gsl::not_null<IContext*> source, std::unique_ptr<T>&& value )
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