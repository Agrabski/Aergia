#pragma once

namespace Aergia::DataStructures
{
	template <typename T, typename Result>
	class HasResolveInAliases
	{
		typedef char one;
		struct two { char x[2]; };

		template <typename C> static one test( decltype(&C:: template resolveInAliases<Result>) );
		template <typename C> static two test( ... );

	public:
		static constexpr bool value = sizeof( test<T>( 0 ) ) == sizeof( char );
	};
}