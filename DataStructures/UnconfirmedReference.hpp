#pragma once
#include <memory>
#include "QualifiedName.hpp"
#include "IContext.hpp"

namespace Aergia::DataStructures
{
	using std::unique_ptr;

	struct UncofrimedReferenceContext
	{
		IContext* _context;
		QualifiedName _fullReferenceName;
	};

	template<typename T>
	class UnconfirmedReference
	{
		unique_ptr<T> _reference;
		UncofrimedReferenceContext _context;
	public:
		bool satisifed() const noexcept { return _reference == nullptr; }
		UnconfirmedReference(T&& value, UncofrimedReferenceContext&& context) : _reference(value), _context(std::move(context)) {}
		UnconfirmedReference(unique_ptr<T>&& value, UncofrimedReferenceContext&& context) : _reference(value), _context(std::move(context)) {}
		std::string const& referenceName() const noexcept
		{
			return _reference->getName();
		}
		unique_ptr<T> releaseReference() noexcept
		{
			return std::move( _reference );
		}

		UncofrimedReferenceContext const& context() noexcept
		{
			return _context;
		}
	};

}