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
		struct Overload
		{
			TypeContext* _returnValue;
			std::vector<std::unique_ptr<VariableContext>>_parameters;
		};

		TypeContext* returnValue() const noexcept;

		MethodContext( std::string name, IContext* parent, MemberAccessibility accessibility );

		void addOverload(Overload&& o)
		{
			_overloads.push_back(std::move(o));
		}

		std::string const& getName() const noexcept override;

	};
}