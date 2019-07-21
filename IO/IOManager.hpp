#pragma once
#include <vector>
#include <string_view>
#include <stdexcept>
#include <fstream>

namespace Aergia
{
	class IOManager
	{
		std::ifstream _inputStream;
		std::ofstream _outputstream;
	public:
		IOManager( std::vector<char const*>args ) throw(std::runtime_error);
		std::istream& getInputFile();
		std::ostream& getOutputFile();
		void startProcessing() const;
		void endProcessing() const;
	};
}