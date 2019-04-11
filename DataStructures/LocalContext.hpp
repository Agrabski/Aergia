#pragma once
#include "IContext.hpp"

namespace Aergia::DataStructures
{
	class LocalContext : public IContext
	{
		std::vector<std::pair<std::wstring, IObject*>>_localVariables;
		IContext* const _parentContext;
	public:
		LocalContext(IContext* parentContext);
		// Inherited via IContext
		std::wstring toString() noexcept override;
		IObject* getObject(std::wstring const& memberName) noexcept override;
		void appendVariable(std::wstring name, IObject* link) override;
	};
}