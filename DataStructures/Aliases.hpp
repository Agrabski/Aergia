#pragma once
#include <map>
#include "IContext.hpp"
#include "Resolver.hpp"


namespace Aergia::DataStructures
{
	using std::map;
	using std::tuple;
	using gsl::not_null;
	using std::pair;

	template<typename... Types>
	class Aliases : public virtual IContext
	{
		template<typename T>
		using Collection = map<std::string, not_null<T*>>;

		tuple<Collection<Types>...> _aliases;


		template<typename T, typename Importable, typename enable_if<is_same<T, Importable>::value, int>::type = 0>
		constexpr T* verifyTypeMatch( Importable* im )
		{
			return im;
		}

		template<typename T, typename Importable, typename enable_if<!is_same<T, Importable>::value, int>::type = 0>
		constexpr T* verifyTypeMatch( Importable* im )
		{
			return nullptr;
		}

		template<typename T, typename Importable>
		int resolveImport( QualifiedName name, Collection<Importable>& im, T*& result )
		{
			auto& resolver = Resolver::instance();
			if (result == nullptr)
				for (auto& element : im)
					if (element.first == name.peekQualificationLevel())
					{
						if (name.levelCount() == 1)
						{
							result = verifyTypeMatch<T, Importable>( element.second.get() );
							return 0;
						}
						else
							result = resolver.resolveOnKnownType<T, Importable>( element.second.get(), name.next() );
					}
			return 0;
		}

		template<typename T, size_t... N>
		T* resolveInternal( QualifiedName name, std::index_sequence<N...> )
		{
			T* result = nullptr;
			auto t = { resolveImport<T>( name,std::get<N>( _aliases ),result )... };
			return result;

		}

		template<typename Importable>
		int copyOnce( Collection<Importable>& from, Collection<Importable>& to )
		{
			for (auto e : from)
			{
				auto found = to.find( e.first );
				if (found == to.end())
					to.insert( { e.first,e.second } );
			}
			return 0;
		}

		template<size_t... N>
		void copy( Aliases& from, std::index_sequence<N...> )
		{
			auto t = { copyOnce( std::get<N>( from._aliases ),std::get<N>( _aliases ) )... };
		}

	protected:
		Aliases() noexcept : IContext( nullptr, MemberAccessibility::None ) {}
		void copyAliases( Aliases& from )
		{
			copy( from, std::make_index_sequence<sizeof...(Types)>() );
		}
	public:
		template<typename T>
		void appendAlias( std::string name, not_null<T*> import )
		{
			using searched = Collection<T>;
			auto& collection = MetaProgramming::findInTuple<searched, 0>( _aliases );
			collection.insert( std::make_pair( name, import ) );
		}

		template<typename T>
		T* resolveInAliases( QualifiedName name )
		{
			return resolveInternal<T>( name, std::make_index_sequence<sizeof...(Types)>() );
		}

	};
}