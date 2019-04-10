#pragma once
#include <string>
#include <vector>
#include <memory>

namespace Aergia::DataStructures
{

	class NullContext;
	class IContext
	{
	protected:
		static IContext* const nullContext() noexcept;
	public:
		virtual std::wstring toString() = 0;
		virtual IContext* changeContext(std::wstring const& memberName) = 0;
		virtual std::vector<IContext*> getCollection(std::wstring const& memberName) = 0;
		virtual void appendVariable(std::wstring name, IContext* link) = 0;
	};

}