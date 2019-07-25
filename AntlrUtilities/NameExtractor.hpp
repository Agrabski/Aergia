#pragma once
#include <string>
#include "..//Lexer/Antlr_include.hpp"

namespace Aergia::Utilities
{
	class NameExtractor
	{

		class NameExtractionVisitor : public AergiaCpp14BaseVisitor
		{
		public:
			antlrcpp::Any visitOriginalnamespacedefinition( AergiaCpp14Parser::OriginalnamespacedefinitionContext* context ) override;
		};
	public:
		static std::string getName( AergiaCpp14Parser::NamespacedefinitionContext* context );
	};
}