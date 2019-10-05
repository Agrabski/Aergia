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
		static std::string getType( gsl::not_null< AergiaCpp14Parser::DeclspecifierseqContext*> context );
		static std::string getType( gsl::not_null<AergiaCpp14Parser::BasespecifierContext*> context );

	};
}