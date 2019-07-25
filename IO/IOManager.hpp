#pragma once
#include <vector>
#include <string_view>
#include <stdexcept>
#include <fstream>
#include "Configuraton.hpp"

namespace Aergia::IO
{
	class IOManager
	{
		std::ifstream _inputStream;
		std::ofstream _outputstream;
	public:
		IOManager( std::vector<char const*>args );
		std::istream& getInputFile();
		std::ostream& getOutputFile();
		void startProcessing() const;
		void endProcessing() const;
		Configuration getConfiguration() const;
	};
}