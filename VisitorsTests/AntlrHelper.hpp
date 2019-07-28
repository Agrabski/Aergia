#pragma once
#include <iostream>
#include "..//antlr/src/antlr4-common.h"
#include "..//antlr/src/TokenStream.h"
#include "..//Lexer/AergiaCpp14Parser.h"
#include "..//Lexer/AergiaCpp14Lexer.h"


class AntlrHelper
{
	antlr4::ANTLRInputStream _stream;
	AergiaCpp14Lexer _lexer;
	antlr4::CommonTokenStream tokens;
	AergiaCpp14Parser parser;

public:
	AntlrHelper( std::istream& stream ) : _stream( stream ), _lexer( &_stream ), tokens( &_lexer ), parser( &tokens )
	{

	}

	AergiaCpp14Parser* getParser() { return &parser; }
};