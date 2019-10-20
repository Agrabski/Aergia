#pragma once
#include "Definitions.hpp"
#include "IContext.hpp"
#include "VariableContext.hpp"

namespace Aergia::DataStructures
{
	class MethodContext : public IContext
	{
	public:
		struct Overload;
	private:
		std::string const _name;
		std::vector<Overload> _overloads;
	public:
		MethodContext(MethodContext const&) = delete;
		struct Overload
		{
			TypeContext* _returnValue;
			std::vector<std::unique_ptr<VariableContext>>_parameters;
		};


		MethodContext(std::string name, IContext* parent, MemberAccessibility accessibility);

		size_t addOverload(Overload&& o)
		{
			auto const overload = std::find_if(_overloads.begin(), _overloads.end(), [&](Overload const& e)
			{
				if (o._returnValue == e._returnValue)
					if (e._parameters.size() == o._parameters.size())
					{
						for (size_t i = 0; i < e._parameters.size(); ++i)
							if (e._parameters[i]->getType() != o._parameters[i]->getType())
								return false;
						return true;
					}
				return false;
			});
			if (overload != _overloads.end())
				return overload - _overloads.begin();
				_overloads.push_back(std::move(o));
			return _overloads.size() - 1;
		}

		size_t findOverloadIndex(std::vector<std::string>const& typeNames);

		std::vector<Overload>& overloads() noexcept { return _overloads; }
		std::vector<Overload> const& overloads() const noexcept { return _overloads; }

		std::string const& getName() const noexcept override;

	};
}