#pragma once
#include <string>
#include <vector>

namespace Aergia::DataStructures
{
	class QualifiedName
	{
		std::vector<std::string> _levels;
	public:
		explicit QualifiedName( std::vector<std::string>&& v ) noexcept : _levels( std::move( v ) ) {}
		explicit QualifiedName() = default;
		QualifiedName(std::string name);
		QualifiedName operator+(std::string const& other);
		std::vector<std::string>const& getAllQualificationLevels()const noexcept;
		std::string const& peekQualificationLevel() const noexcept;
		std::string const& objectName() const;
		void advanceLevel();
		int levelCount() const noexcept;
		QualifiedName next() const;
	};
}