#pragma once
#include <tuple>


namespace Aergia::MetaProgramming
{
	template<typename Searched, unsigned I, typename... T>
	typename std::enable_if< std::is_same<Searched,typename std::tuple_element<I, std::tuple<T...>>::type>::value,Searched&>::type
		findInTuple( std::tuple<T...>& tuple )
	{
		return std::get<I>( tuple );
	}

	template<typename Searched, unsigned I, typename... T>
	typename std::enable_if<!std::is_same<Searched, typename std::tuple_element<I, std::tuple<T...>>::type>::value, Searched&>::type
		findInTuple( std::tuple<T...>& tuple )
	{
		return findInTuple<Searched,I+1>( tuple );
	}

	template<typename Searched, unsigned I, typename... T>
	typename std::enable_if< std::is_same<Searched, typename std::tuple_element<I, std::tuple<T...>>::type>::value, Searched const&>::type
		findInTuple(std::tuple<T...> const& tuple)
	{
		return std::get<I>(tuple);
	}

	template<typename Searched, unsigned I, typename... T>
	typename std::enable_if<!std::is_same<Searched, typename std::tuple_element<I, std::tuple<T...>>::type>::value, Searched const&>::type
		findInTuple(std::tuple<T...> const& tuple)
	{
		return findInTuple<Searched, I + 1>(tuple);
	}

}