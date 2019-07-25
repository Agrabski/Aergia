#include "pch.h"
#include "IOManager.hpp"
#include <fstream>
#include <iostream>

Aergia::IO::IOManager::IOManager( std::vector<char const*> args )
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

std::istream& Aergia::IO::IOManager::getInputFile()
{
	return _inputStream;
}

std::ostream& Aergia::IO::IOManager::getOutputFile()
{
	return _outputstream;
}

Aergia::IO::Configuration Aergia::IO::IOManager::getConfiguration() const
{
	return Configuration();
}

