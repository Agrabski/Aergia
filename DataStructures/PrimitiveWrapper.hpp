#pragma once
#include "IObject.hpp"
#include "NullContext.hpp"
#include "Acessibility.hpp"


namespace Aergia::DataStructures
{
	template<typename T>
	class PrimitiveWrapper : public IObject
	{
		T _value;
	public:
		T& operator*()
		{
			return _value;
		}

		T* operator->()
		{
			return &_value;
		}
		
		virtual IObject* getMember(std::wstring) noexcept
		{
			return Null::get();
		}

		virtual std::wstring const& toString() const noexcept
		{
			return std::to_wstring(_value);
		}

		virtual std::optional<std::vector<IObject*>> asCollection() const noexcept
		{
			return std::optional<std::vector<IObject*>>();
		}

	};

	template<>
	class PrimitiveWrapper<std::wstring> : public IObject
	{
		using T = std::wstring;
		T _value;
	public:
		T& operator*() noexcept
		{
			return _value;
		}

		T const& operator*() const noexcept
		{
			return _value;
		}

		T* operator->() noexcept
		{
			return &_value;
		}

		virtual IObject* getMember(std::wstring) noexcept
		{
			return Null::get();
		}

		virtual std::wstring const& toString() const noexcept
		{
			return _value;
		}

		virtual std::optional<std::vector<IObject*>> asCollection() const noexcept
		{
			return std::optional<std::vector<IObject*>>();
		}

	};

	template<>
	class PrimitiveWrapper<Accessibility> : public IObject
	{
		using T = Accessibility;
		T _value;
	public:
		T& operator*() noexcept
		{
			return _value;
		}

		T* operator->() noexcept
		{
			return &_value;
		}

		virtual IObject* getMember(std::wstring) noexcept
		{
			return Null::get();
		}

		virtual std::wstring const& toString() const noexcept
		{
			return toWstring(_value);
		}

		virtual std::optional<std::vector<IObject*>> asCollection() const noexcept
		{
			return std::optional<std::vector<IObject*>>();
		}

	};
}