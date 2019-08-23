#pragma once
#include <tuple>
#include <vector>
#include <gsl.h>
#include <boost/fusion/include/for_each.hpp>
#include "QualifiedName.hpp"
#include "IContext.hpp"
#include "../MetaProgramming/FindInTupple.hpp"
#include "../MetaProgramming/HasType.hpp"

namespace Aergia::DataStructures
{
	using std::vector;
	using std::tuple;
	using gsl::not_null;


	template<typename... Import>
	class Imports : public virtual IContext
	{

		using t = std::tuple<Import...>;

		tuple<vector<not_null<Import*>>...> _imports;

		template<typename T, typename Importable>
		typename enable_if<HasResolveInContents<Importable, T>::value, T>::type* resolveInChildContents( QualifiedName name, Importable& im )
		{
			return im.resolveInContents<T>( name );
		}

		template<typename T, typename Importable>
		typename enable_if<!HasResolveInContents<Importable, T>::value, T>::type* resolveInChildContents( QualifiedName name, Importable& im ) { return nullptr; }

		template<typename T, typename Importable>
		typename enable_if<HasResolveInImports<Importable, T>::value, T>::type* resolveInImports( QualifiedName name, Importable& im )
		{
			return im.resolveInContents<T>( name );
		}

		template<typename T, typename Importable>
		typename enable_if<!HasResolveInImports<Importable, T>::value, T>::type* resolveInImports( QualifiedName name, Importable& im ) { return nullptr; }



		template<typename T, typename Importable>
		typename std::enable_if<std::is_same<T, Importable>::value, int>::type resolveImportsFinalLevel( QualifiedName name, vector<not_null<Importable*>>& im, T*& result )
		{
			if (result == nullptr)
				return 0;
			auto r = std::find_if( im.begin(), im.end(), [&]( auto const& a ) {return a->getName() == name.peekQualificationLevel(); } );
			if (r != im.end())
				result = r->get();
			return r != im.end();

		}

		template<typename T, typename Importable>
		typename std::enable_if<!std::is_same<T, Importable>::value, int>::type resolveImportsFinalLevel( QualifiedName, vector<not_null<Importable*>>&, T*& )
		{
			return 0;
		}


		template<typename T, typename Importable>
		int resolveImport( QualifiedName name, Importable& im, T*& result )
		{
			if (result != nullptr)
				result = resolveInImports<T, Importable>( name, im );
			if (result != nullptr)
				return 0;

			result = resolveInChildContents<T, Importable>( name, im );
			if (result != nullptr)
				return 0;
			return 0;
		}

		template<typename T, size_t... N>
		T* resolveInternal( QualifiedName name, std::index_sequence<N...> )
		{
			T* result = nullptr;
			if (name.levelCount() > 1)
				auto t = { resolveImport<T>( name,std::get<N>( _imports ),result )... };
			else
				auto l = { resolveImportsFinalLevel<T>( name,std::get<N>( _imports ),result )... };
			return result;

		}


	protected:
		Imports() : IContext( nullptr, MemberAccessibility::None ) {}

	public:
		template<typename T>
		void appendImport( not_null<T*> import )
		{
			std::enable_if<MetaProgramming::has_type<T, t>()>::type;
			using searched = vector<not_null<T*>>;
			auto& collection = MetaProgramming::findInTuple<searched, 0>( _imports );
			assert( std::find( collection.begin(), collection.end(), import ) == collection.end() );
			collection.push_back( import );
		}

		template<typename T>
		T* resolveImports( QualifiedName name )
		{
			if (name.levelCount() == 1)
			{
				return resolveInternal<T>( name, std::make_index_sequence<sizeof...(Import)>() );
			}
		}

	};

}