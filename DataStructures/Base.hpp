#pragma once
#include "IObject.hpp"
#include "TypeInfo.hpp"
#include "Acessibility.hpp"
#include "PrimitiveWrapper.hpp"

namespace Aergia::DataStructures
{
	class TypeInfo;
	class Base : public IObject
	{
		TypeInfo* _type;
		PrimitiveWrapper<Accessibility> _accessibility;
	public:
		Base(TypeInfo* type, Accessibility accessibility);
		virtual IObject* getMember(std::wstring) noexcept;
		virtual std::wstring const& toString() const noexcept;
		virtual std::optional<std::vector<IObject*>> asCollection() const noexcept;

	};
}