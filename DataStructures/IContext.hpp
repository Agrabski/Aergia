#pragma once
#include <string>
#include <memory>


namespace Aergia::DataStructures
{
	class IContext
	{
		IContext const* const _parent;
	protected:
		IContext( IContext const* const parent ) :_parent( parent ) {}
	public:
		IContext const* parent() { return _parent; }
		virtual std::string const& getName() const noexcept = 0;
		virtual IContext * getMember( std::string const& name ) const = 0;
		virtual bool appendMember( std::unique_ptr<IContext>&& newMember ) = 0;
	};
}