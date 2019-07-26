#pragma once
#include <string>
#include "..//Lexer/Antlr_include.hpp"


namespace Aergia::Utilities
{
	class TypeFinder
	{
		class ClassNameExtractionVisitor : public AergiaCpp14BaseVisitor
		{
		public:
			antlrcpp::Any visitTypespecifier( AergiaCpp14Parser::TypespecifierContext* ctx ) override;
		};
	public:
		static std::string getType( AergiaCpp14Parser::DeclspecifierseqContext* context );
	};
}