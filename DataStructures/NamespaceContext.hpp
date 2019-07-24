#pragma once
#include <vector>
#include <map>
#include <stdexcept>
#include "IContext.hpp"
#include "ClassContext.hpp"
#include "MethodContext.hpp"



namespace Aergia::DataStructures
{
	template<bool IsGlobal>
	class NamespaceContext : public IContext {};


	template<>
	class NamespaceContext<true> : public IContext
	{
		std::map<std::string, std::unique_ptr<IContext>> _members;

	public:
		NamespaceContext() :IContext( nullptr ) {}

		std::string const& getName() const noexcept override
		{
			using namespace std::literals;
			return "GLOBAL_NAMESPACE"s;
		}

		IContext* getMember( std::string const& name ) const override
		{
			if (_members.find( name ) != _members.end())
				return _members.at( name ).get();
			return nullptr;
		}

		bool appendMember( std::unique_ptr<IContext>&& newMember ) override
		{
			if (_members.find( newMember->getName() ) != _members.end())
				throw std::runtime_error( "member already exists" );
			_members[newMember->getName()] = std::move( newMember );
			return true;
		}

	};

	template<>
	class NamespaceContext<false> : public IContext
	{
		std::map<std::string, std::unique_ptr<IContext>> _members;
		std::string _name;

	public:
		NamespaceContext( std::string const& name, IContext const* const parent ) : _name( name ), IContext( parent ) {}

		std::string const& getName() const noexcept override
		{
			return _name;
		}

		IContext* getMember( std::string const& name ) const override
		{
			if (_members.find( name ) != _members.end())
				return _members.at( name ).get();
			return nullptr;
		}

		bool appendMember( std::unique_ptr<IContext>&& newMember ) override
		{
			if (_members.find( newMember->getName() ) == _members.end())
				throw std::runtime_error( "member already exists" );
			_members[newMember->getName()] = std::move( newMember );
			return true;
		}

	};

}