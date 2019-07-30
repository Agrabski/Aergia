/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#include "Exceptions.h"

#include "tree/pattern/RuleTagToken.h"

using namespace antlr4::tree::pattern;

RuleTagToken::RuleTagToken(const std::string &/*ruleName*/, int _bypassTokenType) noexcept : bypassTokenType(_bypassTokenType) {
}

RuleTagToken::RuleTagToken(const std::string &ruleName, size_t bypassTokenType, const std::string &label)
  : ruleName(ruleName), bypassTokenType(bypassTokenType), label(label) {
  if (ruleName.empty()) {
    throw IllegalArgumentException("ruleName cannot be null or empty.");
  }

}

std::string RuleTagToken::getRuleName() const {
  return ruleName;
}

std::string RuleTagToken::getLabel() const {
  return label;
}

size_t RuleTagToken::getChannel() const noexcept {
  return DEFAULT_CHANNEL;
}

std::string RuleTagToken::getText() const {
  if (label != "") {
    return std::string("<") + label + std::string(":") + ruleName + std::string(">");
  }

  return std::string("<") + ruleName + std::string(">");
}

size_t RuleTagToken::getType() const  noexcept {
  return bypassTokenType;
}

size_t RuleTagToken::getLine() const noexcept {
  return 0;
}

size_t RuleTagToken::getCharPositionInLine() const noexcept {
  return INVALID_INDEX;
}

size_t RuleTagToken::getTokenIndex() const noexcept {
  return INVALID_INDEX;
}

size_t RuleTagToken::getStartIndex() const noexcept {
  return INVALID_INDEX;
}

size_t RuleTagToken::getStopIndex() const noexcept {
  return INVALID_INDEX;
}

antlr4::TokenSource *RuleTagToken::getTokenSource() const noexcept {
  return nullptr;
}

antlr4::CharStream *RuleTagToken::getInputStream() const noexcept {
  return nullptr;
}

std::string RuleTagToken::toString() const {
  return ruleName + ":" + std::to_string(bypassTokenType);
}
