// Aergis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include <gsl.h>
#include "../IO/IOManager.hpp"
#include "ProjectProcessor.hpp"


int run(int argc, char const* const argv[])
{
	if (argv == nullptr)
		return -1;

	// IO setup
	Aergia::IO::IOManager* ioManager = new Aergia::IO::IOManager(argc, argv);
	if (ioManager->continueExecution())
	{
		ioManager->startProcessing();
		Aergia::ProjectProcessor processor;
		processor.processProject(ioManager->getProject(), ioManager->getConfiguration());
		ioManager->endProcessing();
	}

	return 0;
}

