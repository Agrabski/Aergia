#pragma once
#include <regex>

namespace Aergia::Parser
{
	auto const classRegex = L"class[\\s]+([a-zA-Z_][a-zA-Z0-9_]*)[\\s]*(|:[\\s]*((|public|private|protected)[\\s]+[a-zA-Z_][a-zA-Z0-9_]*[\\s]*(|,)*[\\s]*)+)\\{([\\sa-zA-Z0-9=*\\-\\(\\)+\\[\\];](?!class))*\\}.*;";
	auto const classBasesSectionRegex = L":(.|[\\s])*\\{";
	auto const classBasesRegex = L"[\\s]*(|public|protected|private)[\\s]+([a-zA-Z_][a-zA-Z_0-9]*)";
	auto const foreachRegex = L"(?:\\$foreach\\()[\\s]*\\$([a-zA-Z][a-zA-Z0-9]*)[\\s]+in[\\s]+\\$((?:[a-zA-Z0-9]+(?:|\\.|\\([a-zA-Z0-9]+\\)(?:|\\.)))+)[\\s]*\\)[\\s]*(\\$[^$]+\\$\\$|\\$\\{\\s*(((?R)|\\$[^$]+\\$\\$|[^$]+)+)\\s*\\$\\})";
	auto const anoymousRegex = L"\\$anonymous\\((.+)\\)\\$\\$";
	auto const callRegex = L"\\$(?!anonymous)((?:[^$\\s])+)\\$\\$";

}