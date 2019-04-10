#pragma once
#include "IContext.hpp"

namespace Aergia::DataStructures
{
	class IContext;
	class NullContext : public IContext
	{
		// Inherited via IContext
		std::wstring toString() override;
		IContext* changeContext(std::wstring const& memberName) noexcept override;
		std::vector<IContext*> getCollection(std::wstring const& memberName) noexcept override;
		void appendVariable(std::wstring name, IContext* link) noexcept override;
	public:
		virtual ~NullContext() = default;
	};
}