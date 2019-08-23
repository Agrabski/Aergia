#pragma once

namespace Aergia::DataStructures
{
	template <typename T, typename Result>
	class HasResolveInImports
	{
		typedef char one;
		struct two { char x[2]; };

		template <typename C> static one test( decltype( &C::template resolveInImports<Result> ) );
		template <typename C> static two test( ... );

	public:
		static constexpr bool value = sizeof( test<T>( 0 ) ) == sizeof( char ) ;
	};
}