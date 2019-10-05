/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#pragma once

#include "antlr4-common.h"

namespace antlr4 {
namespace atn {

  class ANTLR4CPP_PUBLIC ATNDeserializationOptions {
  private:
    static ATNDeserializationOptions defaultOptions;

    bool readOnly;
    bool verifyATN;
    bool generateRuleBypassTransitions;

  public:
    ATNDeserializationOptions() noexcept;
    ATNDeserializationOptions(ATNDeserializationOptions *options) noexcept;
    ATNDeserializationOptions(ATNDeserializationOptions const&) = default;
    virtual ~ATNDeserializationOptions();
    ATNDeserializationOptions& operator=(ATNDeserializationOptions const&) = default;

    static const ATNDeserializationOptions& getDefaultOptions() noexcept;

    bool isReadOnly() noexcept;

    void makeReadOnly() noexcept;

    bool isVerifyATN() noexcept;

    void setVerifyATN(bool verify);

    bool isGenerateRuleBypassTransitions() noexcept;

    void setGenerateRuleBypassTransitions(bool generate);

  protected:
    virtual void throwIfReadOnly();

  private:
    void InitializeInstanceFields() noexcept;
  };

} // namespace atn
} // namespace antlr4
