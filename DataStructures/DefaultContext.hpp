#pragma once
#include "TypeInfo.hpp"
#include "IContext.hpp"


namespace Aergia::DataStructures
{
	class DefaultContext : public IContext
	{
		std::vector<std::unique_ptr<TypeInfo>> types;
		std::vector<std::pair<std::wstring, IObject*>>_variables;
	public:
		// Inherited via IContext
		virtual std::wstring toString() override;
		virtual IObject* getObject(std::wstring const& memberName) override;
		virtual void appendVariable(std::wstring name, IObject* link) override;
		void appendType(std::unique_ptr<TypeInfo>&& type);
	};
}