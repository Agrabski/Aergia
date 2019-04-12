#pragma once
#include "TypeInfo.hpp"
#include "IObject.hpp"
#include "Acessibility.hpp"

namespace Aergia
{
	namespace Parser
	{
		class MacroInliner;
	}

	namespace DataStructures
	{
		class TypeInfo;

		class Property : public IObject
		{
			std::wstring _name;
			TypeInfo* _type;
			Accessibility _accessibility;
			friend class Parser::MacroInliner;
		public:
			Property(std::wstring const& name, TypeInfo* type, Accessibility accessibility);
			virtual IObject* getMember(std::wstring es) noexcept;
			virtual std::wstring const& toString() const noexcept;
			virtual std::optional<std::vector<IObject*>> asCollection() const noexcept;

		};
	}
}
