#pragma once
#include <string>
#include <vector>
#include <memory>
#include "IObject.hpp"

namespace Aergia::DataStructures
{

	class Null;
	class IContext
	{
	protected:
		static IContext* const nullContext() noexcept;
	public:
		virtual std::wstring toString() = 0;
		virtual IObject* getObject(std::wstring const& memberName) = 0;
		virtual void appendVariable(std::wstring name, IObject* link) = 0;
	};

}