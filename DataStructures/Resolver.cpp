#include "pch.h"
#include "Resolver.hpp"

using namespace Aergia::DataStructures;

Resolver& Aergia::DataStructures::Resolver::instance()
{
	if (_instance == nullptr)
		_instance = new Resolver();
	return *_instance;
}
