#pragma once
#include <vector>
#include <variant>
#include <optional>
#include "../DataStructures/MemberAccessibility.hpp"
#include "../DataStructures/IContext.hpp"
#include "../MetaProgramming/HasType.hpp"
#include "../MetaProgramming/FindInTupple.hpp"
#include "../DataStructures/MethodContext.hpp"

namespace Aergia::Functions
{
	class Variable
	{
	public:
		using IContextPtr = gsl::not_null< DataStructures::IContext const*>;
		using Text = std::string;
		using ContextCollection= std::vector<IContextPtr>;
		using Accessibility = DataStructures::MemberAccessibility;
		using OverloadSet = gsl::not_null<std::vector<DataStructures::MethodContext::Overload> const*>;
	private:
		std::variant<IContextPtr, ContextCollection, Accessibility, Text, OverloadSet, std::monostate> _value;

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
		std::optional<gsl::not_null<T const*>> const asContext() const noexcept
		{
			static_assert(std::is_base_of<DataStructures::IContext, T>());
			auto result = std::get_if<IContextPtr>(&_value);
			if (result == nullptr)
				return std::optional<gsl::not_null<T const*>>();
			auto r = dynamic_cast<T const*>(result->get());
			if (r != nullptr)
				return r;
			return std::optional<gsl::not_null<T const*>>();
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

		template<typename T>
		Variable(T && value) : _value(std::move(value))
		{
		}

		Variable() noexcept : _value( std::monostate() )
		{

		}

		std::string toString() const
		{
			using namespace std::literals;
			if (as<Text>())
				return *as<Text>();
			if (as<IContextPtr>() != nullptr)
				return as<IContextPtr>()->get()->getName();
			return ""s;
		}
	};
}