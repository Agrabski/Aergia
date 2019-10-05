#include "FunctionCall.hpp"
#include <regex>
#include <sstream>

Aergia::Functions::FunctionCall::FunctionCall( std::string text )
{
	using namespace std::literals;
	static std::regex nameRegex = std::regex( "([a-zA-Z]+)\\s*\\(([a-zA-Z,\\s]*)\\)"s, std::regex::flag_type::ECMAScript | std::regex::flag_type::optimize );
	static std::regex argsRegex = std::regex( "([a-zA-Z]+)"s, std::regex::flag_type::ECMAScript | std::regex::flag_type::optimize );
	std::smatch match;
	if (!std::regex_search( text, match, nameRegex ))
	{
		// todo: throw
	}
	else
	{
		_name = match[1];
		auto args = match[2];
		std::smatch argsMatch;
		bool skip = true;
		if (std::regex_search( text, argsMatch, argsRegex ))
			for (auto& arg : argsMatch)
				if (!skip)
					_arguments.push_back( args );
				else
					skip = !skip;
	}
}

std::string Aergia::Functions::FunctionCall::toString() const
{
	std::stringstream stringBuilder;
	stringBuilder << _name<<'(';
	for (auto const& arg : _arguments)
		stringBuilder << arg << ',';
	stringBuilder.seekp( -1, std::ios_base::end );
	stringBuilder << ')';
	return stringBuilder.str();

}
