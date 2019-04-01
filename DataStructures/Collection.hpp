#pragma once
#include <vector>

namespace Aergia
{
	namespace DataStructures
	{
		template<typename T>
		class Collection
		{
			std::vector<T> _data;
		public:
			Collection() = default;
		};
	}
}