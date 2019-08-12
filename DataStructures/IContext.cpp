#include "pch.h"
#include "IContext.hpp"

using namespace Aergia::DataStructures;

IContext* Aergia::DataStructures::IContext::getRoot()
{
	IContext* current = this;
	while (current->parent() != nullptr)
		current = current->parent();
	return current;
}