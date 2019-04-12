#pragma once
#include "IObject.hpp"
#include "IContext.hpp"

namespace Aergia::DataStructures
{
	class IContext;
	class IObject;
	class Null : public IContext, public IObject
	{
		inline static std::wstring _name = L"null";
		// Inherited via IContext
		IObject* getMember(std::wstring) noexcept override;
		std::wstring toString() override;
		std::wstring const& toString() const noexcept override;
		IObject* getObject(std::wstring const& memberName) noexcept override;
		void appendVariable(std::wstring name, IObject* link) noexcept override;
		std::optional<std::vector<IObject*>> asCollection() const noexcept override;
		
	public:
		virtual ~Null() = default;
		static Null* get() noexcept
		{
			static Null null;
			return &null;
		}
	};
}