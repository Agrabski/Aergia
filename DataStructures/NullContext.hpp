#pragma once
#include "IContext.hpp"

namespace Aergia::DataStructures
{
	class IContext;
	class Null : public IContext, public IObject
	{
		// Inherited via IContext
		virtual IObject* getMember(std::wstring) noexcept;
		virtual std::wstring toString();
		virtual std::wstring toString() const noexcept;
		IObject* getObject(std::wstring const& memberName) noexcept override;
		void appendVariable(std::wstring name, IObject* link) noexcept override;
		std::optional<std::vector<IObject*>> asCollection() const noexcept override;
	public:
		virtual ~Null() = default;
	};
}