#include "stdafx.h"
#include "IContext.hpp"
#include "NullContext.hpp"

using namespace Aergia::DataStructures;

IContext* const Aergia::DataStructures::IContext::nullContext() noexcept
{
	static NullContext nContext = NullContext();
	return &nContext;
}
