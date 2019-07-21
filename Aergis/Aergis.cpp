// Aergis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"

#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include <antlr4-runtime.h>
#include "gsl.h"
#include "../Lexer/AergiaCpp14Lexer.h"
#include "..//IO/IOManager.hpp"
#include "../Lexer/AergiaCpp14Parser.h"
#include "..//Visitors/AnonymousVisitor.hpp"

int main( int argc, char const* const argv[] )
{
	if (argv == nullptr)
		return -1;

	// IO setup
	std::vector<char const*> inputArgs;
	inputArgs.reserve( argc );
	for (int i = 0; i < argc; ++i)
		inputArgs.emplace_back( argv[i] );
	Aergia::IOManager ioManager( inputArgs );


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

	auto root = parser.translationunit();

	auto anonymousVisitor = Aergia::Visitors::AnonymousVisitor( &parser );
	parser.addParseListener( &anonymousVisitor );
	std::cout << root->getText();
	antlr4::tree::ParseTreeWalker::DEFAULT.walk( &anonymousVisitor, root );
	antlr4::TokenStreamRewriter rewriter( &tokens );

	anonymousVisitor.setupRewriter( rewriter );


	std::cout << rewriter.getText();


	return 0;
}

