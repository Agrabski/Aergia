#pragma once
#include <string>
#include <vector>


namespace Aergia::Functions
{
	class FunctionCall
	{
		std::string _name;
		std::vector<std::string> _arguments;
	public:
		FunctionCall( std::string text );
		FunctionCall( std::string name, std::vector<std::string> arguments ) : _name( std::move( name ) ), _arguments( std::move( arguments ) ) {}

		std::string const& name() const noexcept { return _name; }
		std::vector<std::string> const& arguments() const noexcept { return _arguments; }
		std::string toString()const;
	};
}