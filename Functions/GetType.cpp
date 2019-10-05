#include "GetType.hpp"
#include "Variable.hpp"
#include "../DataStructures/VariableContext.hpp"
#include "../DataStructures/ClassContext.hpp"
#include "../DataStructures/IContext.hpp"
#include "InvalidTargetException.hpp"

namespace Aergia::Functions
{

	Variable handleCollection(std::vector<Variable::IContextPtr>& elements)
	{
		std::vector<Variable::IContextPtr> result;
		for (auto& e : elements)
		{
			using Aergia::DataStructures::VariableContext;
			auto variable = dynamic_cast<VariableContext*>(e.get());
			if (variable != nullptr)
			{
				auto type = variable->getType();
				result.push_back(Variable::IContextPtr(dynamic_cast<Aergia::DataStructures::IContext*>(type)));
			}
		}
		return result;
	}

	Variable handleSingleValue(Variable::IContextPtr element)
	{
		using Aergia::DataStructures::VariableContext;
		auto variable = dynamic_cast<VariableContext*>(element.get());
		if (variable != nullptr)
			return variable->getType();
		using namespace std::literals;
		throw InvalidTargetException(Variable(element), "type"s, "Variable"s, "");
	}

	Variable getType(Variable& context)
	{
		auto collection = context.as< std::vector<Variable::IContextPtr>>();
		if (collection)
			return handleCollection(*collection);
		auto singleValue = context.as< Variable::IContextPtr>();
		if (singleValue)
			return handleSingleValue(*singleValue);
		using namespace std::literals;

		throw InvalidTargetException(context, "type"s, "Variable/Variable_collection"s, ""s);

	}
}