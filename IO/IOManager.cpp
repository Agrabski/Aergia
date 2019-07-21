#include "pch.h"
#include "IOManager.hpp"
#include <fstream>
#include <iostream>

Aergia::IOManager::IOManager( std::vector<char const*> args ) throw(std::runtime_error)
{
	if (args.size() < 3)
	{
		std::cout << "required parameters were not provided";
		throw std::runtime_error( "required parameters were not provided" );
	}

	_inputStream.open( args[1] );

	if (!_inputStream.is_open())
		throw std::runtime_error( "failed to open the input file" );

	_outputstream.open( args[2], _outputstream.out );

	if (!_outputstream.is_open())
		throw std::runtime_error( "failed to open the output file" );

	std::cout << "both files successfully loaded" << std::endl;
}

std::istream& Aergia::IOManager::getInputFile()
{
	return _inputStream;
}

std::ostream& Aergia::IOManager::getOutputFile()
{
	return _outputstream;
}
