#pragma once
#include <gsl.h>
#include <sstream>
#include "..//DataStructures/IContext.hpp"
#include "CallChainResolver.hpp"


namespace Aergia::Visitors
{
	class ContextProvider
	{
	private:
		template<typename TargetType>
		TargetType* advanceQualificationLevel( std::vector<std::string> const& qualifiedName, size_t currentIndex, gsl::not_null< DataStructures::IContext*> currentLevel )
		{
			if (currentIndex == qualifiedName.size() - 1)
				return currentLevel->findChildOfType<TargetType>( qualifiedName.back() );
			for (auto const child : currentLevel->getMembers( qualifiedName[currentIndex] ))
			{
				auto const result = advanceQualificationLevel<TargetType>( qualifiedName, currentIndex + 1, child );
				if (result != nullptr)
					return result;
			}
			return nullptr;
		}

		template<typename TargetType>
		TargetType* findByFullyQualifiedName( std::vector<std::string> const& qualifiedName, gsl::not_null< DataStructures::IContext*> rootNamespace )
		{
			return advanceQualificationLevel<TargetType>( qualifiedName, 0, rootNamespace );
		}

	protected:
		virtual gsl::not_null<DataStructures::IContext*> getRootNamespace() noexcept = 0;
	public:

		template<typename TargetType>
		TargetType* getByQualifiedName( std::string const& qualifiedName )
		{
			std::string tmp = qualifiedName;
			std::replace( tmp.begin(), tmp.end(), ':', ' ' );
			std::stringstream stream( std::move( tmp ) );
			std::vector<std::string> result;
			while (!stream.eof())
			{
				std::string temp;
				stream >> temp;
				result.push_back( temp );
			}
			return findByFullyQualifiedName<TargetType>( result, getRootNamespace() );
		}

		CallChainResolver& getResolver() const noexcept;

	};
}