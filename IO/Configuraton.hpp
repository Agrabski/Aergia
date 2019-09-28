#pragma once
#include "PrettyPrinterConfiguration.hpp"


namespace Aergia::IO
{
	struct Configuration
	{
		PrettyPrinterConfiguration _prettyPrinterConfig;
		bool _stopOnFileOpenFailed;
	};
}