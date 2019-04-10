#pragma once
#include "IContext.hpp"

namespace Aergia::DataStructures
{
	class LocalContext : public IContext
	{
		std::vector<std::pair<std::wstring, IContext*>>_localVariables;
		IContext* const _parentContext;
	public:
		LocalContext(IContext* parentContext);
		// Inherited via IContext
		std::wstring toString() noexcept override;
		IContext* changeContext(std::wstring const& memberName) override;
		std::vector<IContext*> getCollection(std::wstring const& memberName) noexcept override;
		void appendVariable(std::wstring name, IContext* link) override;
	};
}