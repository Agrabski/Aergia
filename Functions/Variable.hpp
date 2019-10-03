#pragma once
#include <vector>
#include <variant>
#include "../DataStructures/MemberAccessibility.hpp"
#include "../DataStructures/IContext.hpp"
#include "../MetaProgramming/HasType.hpp"
#include "../MetaProgramming/FindInTupple.hpp"

namespace Aergia::Functions
{
	class Variable
	{
	public:
		using IContextPtr = gsl::not_null< DataStructures::IContext*>;
	private:
		std::variant<IContextPtr, std::vector<IContextPtr>, DataStructures::MemberAccessibility, std::monostate> _value;

	public:
		template<typename T>
		T* as() noexcept
		{
			return std::get_if<T>( &_value );
		}

		template<typename T>
		T const* as() const noexcept
		{
			return std::get_if<T>( &_value );
		}

		template<typename T>
		Variable& operator=( T const& value )
		{
			_value = value;
			return *this;
		}

		template<typename T>
		Variable( T const& value ) : _value( value )
		{
		}

		Variable() noexcept : _value( std::monostate() )
		{

		}

		std::string toString() const
		{
			using namespace std::literals;
			if (as<IContextPtr>() != nullptr)
				return as<IContextPtr>()->get()->getName();
			return ""s;
		}
	};
}