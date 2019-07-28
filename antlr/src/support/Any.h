/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

// A standard C++ class loosely modeled after boost::Any.

#pragma once

#include "antlr4-common.h"

#ifdef _MSC_VER
  #pragma warning(push)
  #pragma warning(disable: 4521) // 'antlrcpp::Any': multiple copy constructors specified
#endif

namespace antlrcpp {

template<class T>
  using StorageType = typename std::decay<T>::type;

struct ANTLR4CPP_PUBLIC Any
{
  bool isNull() const noexcept { return _ptr == nullptr; }
  bool isNotNull() const noexcept { return _ptr != nullptr; }

  Any() : _ptr(nullptr) {
  }

  Any(Any& that) NOEXCEPT : _ptr(that.clone()) {
  }

  Any(Any&& that) NOEXCEPT : _ptr(std::move(that._ptr)) {
    that._ptr = nullptr;
  }

  Any(const Any& that) NOEXCEPT : _ptr(that.clone()) {
  }

  Any(const Any&& that) NOEXCEPT : _ptr(that.clone()) {
  }

  template<typename U>
  Any(U&& value) : _ptr(new Derived<StorageType<U>>(std::forward<U>(value))) {
  }

  template<class U>
  bool is() const {
    auto derived = getDerived<U>(false);

    return derived != nullptr;
  }

  template<class U>
  StorageType<U>& as() {
    auto derived = getDerived<U>(true);

    return derived->value;
  }

  template<class U>
  const StorageType<U>& as() const {
    auto derived = getDerived<U>(true);

    return derived->value;
  }

  template<class U>
  operator U() {
    return as<StorageType<U>>();
  }

  template<class U>
  operator const U() const {
    return as<const StorageType<U>>();
  }

  Any& operator = (const Any& a) NOEXCEPT {
    if (_ptr.get() == a._ptr.get())
      return *this;

    _ptr = a.clone();

    return *this;
  }

  Any& operator = (Any&& a) NOEXCEPT {
    if (_ptr.get() == a._ptr.get())
      return *this;

    std::swap(_ptr, a._ptr);

    return *this;
  }

  virtual ~Any() {}

  virtual bool equals(Any other) const {
    return _ptr == other._ptr;
  }

private:
  struct Base {
    virtual ~Base() {};
    virtual std::unique_ptr<Base> clone() const noexcept = 0;
  };

  template<typename T>
  struct Derived : Base
  {
    template<typename U> Derived(U&& value_) : value(std::forward<U>(value_)) {
    }

    T value;

    std::unique_ptr<Base> clone() const NOEXCEPT override {
      return clone<>();
    }

  private:
    template<int N = 0, typename std::enable_if<N == N && std::is_nothrow_copy_constructible<T>::value, int>::type = 0>
    std::unique_ptr<Base> clone() const NOEXCEPT {
      return std::make_unique<Derived<T>>(value);
    }

    template<int N = 0, typename std::enable_if<N == N && !std::is_nothrow_copy_constructible<T>::value, int>::type = 0>
    std::unique_ptr<Base> clone() const NOEXCEPT {
      return nullptr;
    }

  };

  std::unique_ptr<Base> clone() const NOEXCEPT
  {
    if (_ptr)
      return _ptr->clone();
    else
      return nullptr;
  }

  template<class U>
  Derived<StorageType<U>>* getDerived(bool checkCast) const {
    typedef StorageType<U> T;

    auto derived = dynamic_cast<Derived<T>*>(_ptr.get());

    if (checkCast && !derived)
      throw std::bad_cast();

    return derived;
  }

  std::unique_ptr<Base>_ptr;

};

  template<> inline
  Any::Any(std::nullptr_t&& ) NOEXCEPT : _ptr(nullptr) {
  }


} // namespace antlrcpp

#ifdef _MSC_VER
#pragma warning(pop)
#endif
