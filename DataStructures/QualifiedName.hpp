#pragma once
#include <string>
#include <vector>

namespace Aergia::DataStructures
{
	class QualifiedName
	{
		std::vector<std::string> _levels;
	public:
		QualifiedName( std::string name );
		std::vector<std::string>const& getAllQualificationLevels()const noexcept;
		std::string const& peekQualificationLevel() const noexcept;
		void advanceLevel();
		int levelCount() const noexcept;
		QualifiedName next() const;
	};
}