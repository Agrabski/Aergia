#pragma once
#include "Property.hpp"
#include "IObject.hpp"
#include "NullContext.hpp"

namespace Aergia::DataStructures
{
	template<typename T>
	class CollectionProxy : public IObject, public std::vector<std::unique_ptr<T>>
	{
		inline static std::wstring const _name = L"";
		IObject* getMember(std::wstring) noexcept override
		{
			return Null::get();
		}
		
		std::wstring const& toString() const noexcept override
		{
			return _name;
		}

		std::optional<std::vector<IObject*>> asCollection() const noexcept override
		{
			std::vector<IObject*>result;
			try
			{
				for (auto& e : *this)
					result.push_back(e.get());
				return result;
			}
			catch (std::exception const&)
			{
				// todo: warn
				return std::optional<std::vector<IObject*>>();
			}
		}
	public:
		virtual ~CollectionProxy() = default;

	};

	template<typename T>
	class CollectionProxy<T*> : public IObject, public std::vector<T*>
	{
		inline static std::wstring const _name = L"";
		IObject* getMember(std::wstring) noexcept override
		{
			return Null::get();
		}

		std::wstring const& toString() const noexcept override
		{
			return _name;
		}

		std::optional<std::vector<IObject*>> asCollection() const noexcept override
		{
			std::vector<IObject*>result;
			try
			{
				for (auto& e : *this)
					result.push_back(e);
				return result;
			}
			catch (std::exception const&)
			{
				// todo: warn
				return std::optional<std::vector<IObject*>>();
			}
		}
	public:
		virtual ~CollectionProxy() = default;

	};

}

