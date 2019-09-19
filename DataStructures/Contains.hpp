#pragma once
#include <tuple>
#include <vector>
#include <gsl.h>
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
	using std::is_same;

	template<typename... Types>
	class Contains : public virtual IContext
	{

		using t = std::tuple<Types...>;

		tuple<vector<unique_ptr<Types>>...> _imports;

		template<typename T, typename Importable>
		typename enable_if<is_same<T, Importable>::value, T>::type* verifyTypeMatch( Importable* im )
		{
			return im;
		}

		template<typename T, typename Importable>
		typename enable_if<!is_same<T, Importable>::value, T>::type* verifyTypeMatch( Importable* im )
		{
			return nullptr;
		}

		template<typename T, typename Importable>
		int resolveContent( QualifiedName name, vector <unique_ptr<Importable>>& im, T*& result )
		{
			if (result == nullptr)
				for (auto& element : im)
					if (element->getName() == name.peekQualificationLevel())
					{
						if (name.levelCount() == 1)
						{
							result = verifyTypeMatch<T, Importable>( element.get() );
							return 0;
						}
						else
							result = Resolver::instance().resolveOnKnownType<T,Importable>( element.get(), name.next() );
					}
			return 0;
		}

		template<typename T, size_t... N>
		T* resolveInternal( QualifiedName name, std::index_sequence<N...> )
		{
			T* result = nullptr;
			auto t = { resolveContent<T>( name,std::get<N>( _imports ),result )... };
			return result;

		}

		Contains( Contains& ) = delete;
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

		template<typename T>
		vector<gsl::not_null<T*>> getMembersOfType()
		{
			using searched = vector<unique_ptr<T>>;
			auto& collection = MetaProgramming::findInTuple<searched, 0>( _imports );
			vector<gsl::not_null<T*>> result;
			for (auto& e : collection)
				result.push_back( e.get() );
			return result;
		}

	};

}