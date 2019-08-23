#pragma once
#include <tuple>
#include <vector>
#include <gsl.h>
#include <boost/fusion/include/for_each.hpp>
#include "QualifiedName.hpp"
#include "IContext.hpp"
#include "../MetaProgramming/FindInTupple.hpp"
#include "../MetaProgramming/HasType.hpp"
#include "HasResolveInContents.hpp"
#include "HasResolveInImports.hpp"
#include "Resolver.hpp"

namespace Aergia::DataStructures
{
	using std::vector;
	using std::tuple;
	using gsl::not_null;
	using std::unique_ptr;
	using std::enable_if;

	template<typename... Types>
	class Contains : public virtual IContext
	{

		using t = std::tuple<Types...>;

		tuple<vector<unique_ptr<Types>>...> _imports;

		template<typename T, typename Importable>
		typename std::enable_if<std::is_same<T, Importable>::value, int>::type resolveImportsFinalLevel( QualifiedName name, vector<unique_ptr<Importable>>& im, T*& result )
		{
			if (result != nullptr)
				return 0;
			auto r = std::find_if( im.begin(), im.end(), [&]( auto const& a ) {return a->getName() == name.peekQualificationLevel(); } );
			if (r != im.end())
				result = r->get();
			return r != im.end();

		}

		template<typename T, typename Importable>
		typename std::enable_if<!std::is_same<T, Importable>::value, int>::type resolveImportsFinalLevel( QualifiedName, vector<unique_ptr<Importable>>&, T*& )
		{
			return 0;
		}


		template<typename T, typename Importable>
		int resolveContent( QualifiedName name, vector <unique_ptr<Importable>>& im, T*& result )
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
			if (name.levelCount() > 1)
				auto t = { resolveContent<T>( name,std::get<N>( _imports ),result )... };
			else
				auto l = { resolveImportsFinalLevel<T>( name,std::get<N>( _imports ),result )... };
			return result;

		}

	protected:
		Contains() : IContext( nullptr, MemberAccessibility::None ) {}

	public:
		template<typename T>
		typename std::enable_if<MetaProgramming::has_type<T, t>::value>::type appendContent( unique_ptr<T>&& import )
		{
			using searched = vector<unique_ptr<T>>;
			auto& collection = MetaProgramming::findInTuple<searched, 0>( _imports );
			assert( std::find( collection.begin(), collection.end(), import ) == collection.end() );
			collection.push_back( std::move( import ) );
		}

		template<typename T>
		typename std::enable_if<!MetaProgramming::has_type<T, t>::value>::type appendContent( unique_ptr<T>&& import )
		{
			std::terminate();
		}

		template<typename T>
		T* resolveInContents( QualifiedName name )
		{
			return resolveInternal<T>( name, std::make_index_sequence<sizeof...(Types)>() );
		}

	};

}