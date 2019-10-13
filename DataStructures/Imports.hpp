#pragma once
#include <tuple>
#include <vector>
#include <gsl.h>
#include <algorithm>
#include "QualifiedName.hpp"
#include "IContext.hpp"
#include "../MetaProgramming/FindInTupple.hpp"
#include "../MetaProgramming/HasType.hpp"

namespace Aergia::DataStructures
{
	template<typename... Import>
	class Imports : public virtual IContext
	{

		using t = std::tuple<Import...>;
		template<typename T>
		using Collection = std::vector<gsl::not_null<T*>>;

		std::tuple<Collection<Import>...> _imports;

		template<typename T, typename Importable>
		int resolveImport( QualifiedName name, Collection<Importable>& im, T*& result )
		{
			for (auto& element : im)
				if (result == nullptr)
					result = Resolver::instance().resolveOnKnownType<T, Importable>( element, name );
				else
					break;
			return 0;
		}

		template<typename T, size_t... N>
		T* resolveInternal( QualifiedName name, std::index_sequence<N...> )
		{
			T* result = nullptr;
			auto t = { resolveImport<T>( name,std::get<N>( _imports ),result )... };
			return result;
		}

		template<typename Importable>
		int copyOnce( Collection<Importable>& from, Collection<Importable>& to )
		{
			for (auto e : from)
			{
				auto found = std::find( to.begin(), to.end(), e );
				if (found == to.end())
					to.push_back( e );
			}
			return 0;
		}

		template<size_t... N>
		void copy( Imports& from, std::index_sequence<N...> )
		{
			auto t = { copyOnce( std::get<N>( from._imports ),std::get<N>( _imports ) )... };
		}


	protected:
		Imports() : IContext( nullptr, MemberAccessibility::None ) {}

		void copyImports( Imports& from )
		{
			copy( from, std::make_index_sequence<sizeof...(Import)>() );
		}

	public:
		template<typename T>
		void appendImport( gsl::not_null<T*> im )
		{
			using searched = std::vector<gsl::not_null<T*>>;
			auto& collection = MetaProgramming::findInTuple<searched, 0>( _imports );
			assert( std::find( collection.begin(), collection.end(), im ) == collection.end() );
			collection.push_back( im );
		}

		template<typename T>
		T* resolveImports( QualifiedName name )
		{
			return resolveInternal<T>( name, std::make_index_sequence<sizeof...(Import)>() );
		}


	};

}