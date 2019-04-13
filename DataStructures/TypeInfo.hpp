#pragma once
#include "Property.hpp"
#include "AergiaString.hpp"
#include "IContext.hpp"
#include "CollectionProxy.hpp"
#include "Base.hpp"
#include "PrimitiveWrapper.hpp"

namespace Aergia
{
	namespace Parser
	{
		class MacroInliner;
	}
	namespace DataStructures
	{
		class Property;
		class Base;
		
		class TypeInfo : public IObject
		{
			CollectionProxy<Property> _properties;
			PrimitiveWrapper<std::wstring> _name;
			CollectionProxy<Base> _bases;
			friend class Parser::MacroInliner;
		public:
			IObject* getMember(std::wstring) noexcept override;
			std::wstring const& toString() const noexcept override;
			std::optional<std::vector<IObject*>> asCollection() const noexcept override;
			virtual ~TypeInfo() = default;

		};
	}
}