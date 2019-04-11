#include "stdafx.h"
#include "IContext.hpp"
#include "NullContext.hpp"

using namespace Aergia::DataStructures;

IContext* const Aergia::DataStructures::IContext::nullContext() noexcept
{
	static Null nContext = Null();
	return &nContext;
}
