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
		template<typename T>
		using Collection = vector<unique_ptr<T>>;
		tuple<Collection<Types>...> _contents;

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
							result = Resolver::instance().resolveOnKnownType<T, Importable>( element.get(), name.next() );
					}
			return 0;
		}

		template<typename T, size_t... N>
		T* resolveInternal( QualifiedName name, std::index_sequence<N...> )
		{
			T* result = nullptr;
			auto t = { resolveContent<T>( name,std::get<N>( _contents ),result )... };
			return result;

		}

		template<typename T>
		int moveOnce( Collection<T>& from, Collection<T>& to )
		{
			for (auto& e : from)
			{
				to.push_back( std::move( e ) );
				e->changeParent( this );
			}
			return 0;
		}

		template<>
		int moveOnce( Collection<NamespaceContext>& from, Collection<NamespaceContext>& to )
		{
			for (auto& e : from)
			{
				auto found = std::find_if( to.begin(), to.end(), [&]( auto const& a )
					{
						return a->getName() == e->getName();
					} );
				e->changeParent( this );
				if (found == to.end())
					to.push_back( std::move( e ) );
				else
				{
					*found = (*found)->mergeRoots( std::move( *found ), std::move( e ) );
				}
			}
			return 0;
		}

		template<size_t... N>
		void move( Contains& from, std::index_sequence<N...> )
		{
			auto t = { moveOnce( std::get<N>( from._contents ),std::get<N>( _contents ) )... };
		}

		Contains( Contains& ) = delete;
	protected:

		void moveContents( Contains& from )
		{
			move( from, std::make_index_sequence<sizeof...(Types)>() );
		}

		Contains() : IContext( nullptr, MemberAccessibility::None ) {}

	public:
		template<typename T>
		typename std::enable_if<MetaProgramming::has_type<T, t>::value>::type appendContent( unique_ptr<T>&& import )
		{
			using searched = vector<unique_ptr<T>>;
			auto& collection = MetaProgramming::findInTuple<searched, 0>( _contents );
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
			auto& collection = MetaProgramming::findInTuple<searched, 0>( _contents );
			vector<gsl::not_null<T*>> result;
			for (auto& e : collection)
				result.push_back( e.get() );
			return result;
		}

	};

}