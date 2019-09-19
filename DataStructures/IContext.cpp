#include "pch.h"
#include "IContext.hpp"

using namespace gsl;
using namespace Aergia::DataStructures;

IContext* Aergia::DataStructures::IContext::getRoot()
{
	not_null<IContext*> current = this;
	while (current->parent() != nullptr)
		current = current->parent();
	return current;
}

IContext const* Aergia::DataStructures::IContext::getRoot() const
{
	not_null<IContext const*> current = this;
	while (current->parent() != nullptr)
		current = current->parent();
	return current;
}
