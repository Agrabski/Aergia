// Aergis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include "../Parser/Parser.hpp"
#include "../Parser/MacroInliner.hpp"

int main(int argc, char* argv[])
{
	std::wcout << L"Aergia preprocessor starting" << std::endl;
	if (argc < 3)
	{
		std::wcout << L"Not enough input parameters provided! Minimum is 2 (input file and output file). Provided: " << argc << std::endl;
		getchar();
		return 1;
	}
	using Aergia::Parser::Parser;
	using Aergia::Parser::MacroInliner;
	using Aergia::Parser::InliningPolicy;

	
	// IO setup
	std::wifstream inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		std::wcout << L"Failed to open input file! File name was:" << argv[1]<<std::endl;
		getchar();
		return 1;
	}

	std::wofstream outputFile(argv[2]);
	if (!outputFile.is_open())
	{
		std::wcout << L"Failed to open otput file! File name was:" << argv[2] << std::endl;
		getchar();
		return 1;
	}

	std::wstring const text((std::istreambuf_iterator<wchar_t>(inputFile)), std::istreambuf_iterator<wchar_t>());
	std::wstring output;


	Parser parser;
	auto const types = parser.parseClasses(text);
	MacroInliner inliner(types);
	InliningPolicy policy;
	
	std::wcout << L"Starting text processing" << std::endl;
	inliner.processText(text, output, std::wcout, policy);
	std::wcout << L"Text processing finished" << std::endl;
	outputFile << output;
	outputFile.close();
	inputFile.close();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
