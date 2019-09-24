#pragma once
#include <memory>
#include "QualifiedName.hpp"
#include "IContext.hpp"

namespace Aergia::DataStructures
{

	struct UncofrimedReferenceContext
	{
		IContext* _context;
		QualifiedName _fullReferenceName;
	};

	template<typename T>
	class UnconfirmedReference
	{
		std::unique_ptr<T> _reference;
		UncofrimedReferenceContext _context;
	public:
		bool satisifed() const noexcept { return _reference == nullptr; }
		UnconfirmedReference(T&& value, UncofrimedReferenceContext&& context) : _reference(value), _context(std::move(context)) {}
		UnconfirmedReference(std::unique_ptr<T>&& value, UncofrimedReferenceContext&& context) : _reference(std::move(value)), _context(std::move(context)) {}
		std::string const& referenceName() const noexcept
		{
			return _reference->getName();
		}
		std::unique_ptr<T> releaseReference() noexcept
		{
			return std::move( _reference );
		}

		UncofrimedReferenceContext const& context() noexcept
		{
			return _context;
		}
	};

}