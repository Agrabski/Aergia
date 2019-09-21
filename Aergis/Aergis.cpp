// Aergis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"

#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include "gsl.h"
#include "Processor.hpp"
#include "..//Lexer/Antlr_include.hpp"
#include "..//IO/IOManager.hpp"
#include "..//Visitors/AnonymousVisitor.hpp"



int main( int argc, char const* const argv[] )
{
	using namespace Aergia;
	if (argv == nullptr)
		return -1;

	// IO setup
	std::vector<char const*> inputArgs;
	inputArgs.reserve( argc );
	for (int i = 0; i < argc; ++i)
	{
		assert( argv[i] != nullptr );
		inputArgs.emplace_back( argv[i] );
	}
	IO::IOManager ioManager( inputArgs );


	auto& inputStream = ioManager.getInputFile();
	if (!inputStream.good())
	{
		std::wcout << L"Failed to open input stream!" << std::endl;
		getchar();
		return 1;
	}

	auto& outputStream = ioManager.getOutputFile();
	if (!outputStream.good())
	{
		std::wcout << L"Failed to open output stream!" << std::endl;
		getchar();
		return 1;
	}

	// parser setup
	antlr4::ANTLRInputStream stream( inputStream );
	AergiaCpp14Lexer lexer( &stream );
	antlr4::CommonTokenStream tokens( &lexer );
	AergiaCpp14Parser parser( &tokens );

	gsl::not_null<AergiaCpp14Parser::TranslationunitContext*> const root = parser.translationunit();
	Processor processor( ioManager.getConfiguration(), parser, lexer, tokens );

	std::cout << root->getText() << std::endl;




	processor.parseText( root );

	antlr4::TokenStreamRewriter rewriter( &tokens );



	tokens.reset();
	outputStream << rewriter.getText();


	return 0;
}

