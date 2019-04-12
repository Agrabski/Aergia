#pragma once
#include <string>
#include <vector>
#include <optional>


namespace Aergia::DataStructures
{
	class IObject
	{
	protected:
		IObject* nullContext() const;

	public:
		virtual IObject* getMember(std::wstring) noexcept = 0;
		virtual std::wstring const& toString() const noexcept = 0;
		virtual std::optional<std::vector<IObject*>> asCollection() const noexcept = 0;
	};
}