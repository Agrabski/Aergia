#pragma once
#include <tuple>
#include <vector>
#include <gsl.h>
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
		int resolveImport( QualifiedName name, Importable& im, T*& result )
		{
			if (result == nullptr)
				for (auto& element : im)
					Resolver::resolveOnKnownType( *element, name, result );
			return 0;
		}

		template<typename T, size_t... N>
		T* resolveInternal( QualifiedName name, std::index_sequence<N...> )
		{
			T* result = nullptr;
			auto t = { resolveImport<T>( name,std::get<N>( _imports ),result )... };
			return result;

		}


	protected:
		Imports() : IContext( nullptr, MemberAccessibility::None ) {}

	public:
		template<typename T>
		void appendImport( not_null<T*> import )
		{
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