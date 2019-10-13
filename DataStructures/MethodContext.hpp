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
		TypeContext* _returnValue;
		std::vector<Overload> _overloads;
	public:
		MethodContext(MethodContext const&) = delete;
		struct Overload
		{
			TypeContext* _returnValue;
			std::vector<std::unique_ptr<VariableContext>>_parameters;
		};

		TypeContext* returnValue() const noexcept;

		MethodContext( std::string name, IContext* parent, MemberAccessibility accessibility );

		unsigned addOverload(Overload&& o)
		{
			// todo: verify uniquness
			_overloads.push_back(std::move(o));
			return _overloads.size() - 1;
		}

		int findOverloadIndex(std::vector<std::string>const& typeNames);

		std::vector<Overload>& overloads() noexcept { return _overloads; }
		std::vector<Overload> const& overloads() const noexcept { return _overloads; }

		std::string const& getName() const noexcept override;

	};
}