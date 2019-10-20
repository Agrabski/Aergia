#include "pch.h"
#include "QualifiedName.hpp"
#include <span.h>
#include <sstream>

using namespace Aergia::DataStructures;

Aergia::DataStructures::QualifiedName::QualifiedName(std::string name)
{
	std::replace(name.begin(), name.end(), ':', ' ');
	std::stringstream stream(std::move(name));
	while (!stream.eof())
	{
		std::string temp;
		stream >> temp;
		_levels.push_back(temp);
	}

}

QualifiedName Aergia::DataStructures::QualifiedName::operator+(std::string const& other)
{
	auto list = _levels;
	list.push_back(other);
	return QualifiedName(list);
}

std::vector<std::string> const& Aergia::DataStructures::QualifiedName::getAllQualificationLevels() const noexcept
{
	return _levels;
}

std::string const& Aergia::DataStructures::QualifiedName::peekQualificationLevel() const noexcept
{
	return _levels.front();
}

std::string const& Aergia::DataStructures::QualifiedName::objectName() const noexcept
{
	return _levels.back();
}

void Aergia::DataStructures::QualifiedName::advanceLevel()
{
	_levels.erase(_levels.begin());
}

int Aergia::DataStructures::QualifiedName::levelCount() const noexcept
{
	return _levels.size();
}

Aergia::DataStructures::QualifiedName Aergia::DataStructures::QualifiedName::next() const
{
	QualifiedName result = *this;
	result.advanceLevel();
	return std::move(result);
}
