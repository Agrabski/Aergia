#pragma once
#include <vector>
#include <variant>
#include <optional>
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
		using Text = std::string;
		using ContextCollection= std::vector<IContextPtr>;
		using Accessibility = DataStructures::MemberAccessibility;
	private:
		std::variant<IContextPtr, std::vector<IContextPtr>, DataStructures::MemberAccessibility, std::string, std::monostate> _value;

	public:
		template<typename T>
		std::optional<T> as() noexcept
		{
			auto result = std::get_if<T>( &_value );
			if (result == nullptr)
				return std::optional<T>();
			return *result;
		}

		template<typename T>
		std::optional<T> const as() const noexcept
		{
			auto result = std::get_if<T>(&_value);
			if (result == nullptr)
				return std::optional<T>();
			return *result;
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
			if (as<std::string>())
				return *as<std::string>();
			if (as<IContextPtr>() != nullptr)
				return as<IContextPtr>()->get()->getName();
			return ""s;
		}
	};
}