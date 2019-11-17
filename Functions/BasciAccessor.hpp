#pragma once
#include "IAccessor.hpp"

namespace Aergia::Functions
{
	template<typename T, typename Source>
	class BasicAccessor : public IAccessor
	{
	public:
		// Inherited via IAccessor
		Variable operator()(Variable& context) final
		{
			using IContextPtr = Variable::IContextPtr;

			auto base = context.as<IContextPtr>();

			if (base == nullptr)
			{
				auto collection = context.as<std::vector<IContextPtr>>();
				if (!collection)
					throw std::exception();
				std::vector<IContextPtr> result;
				for (auto c : *collection)
				{
					auto type = dynamic_cast<Source const*>(c.get());
					auto const bases = type->getMembersOfType<T>();
					for (auto const& x : bases)
						result.push_back(x);
				}
				return result;
			}
			else
			{
				auto source = dynamic_cast<Source const*>(base->get());
				if (source == nullptr)
					throw std::exception();
				auto almostResults = source->getMembersOfType<T>();
				std::vector<IContextPtr> result;
				for (auto& x : almostResults)
					result.push_back(x);
				return result;
			}
		}
	};
}
