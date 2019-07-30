/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#include "atn/ATN.h"
#include "atn/Transition.h"
#include "misc/IntervalSet.h"
#include "support/CPPUtils.h"

#include "atn/ATNState.h"

using namespace antlr4::atn;
using namespace antlrcpp;

ATNState::ATNState() {
}

ATNState::~ATNState() {
  for (auto transition : transitions) {
    delete transition;
  }
}

size_t ATNState::hashCode() noexcept {
  return stateNumber;
}

bool ATNState::operator == (const ATNState &other) noexcept
{
  return stateNumber == other.stateNumber;
}

bool ATNState::isNonGreedyExitState() noexcept {
  return false;
}

std::string ATNState::toString() const {
  return std::to_string(stateNumber);
}

void ATNState::addTransition(Transition *e) {
  addTransition(transitions.size(), e);
}

void ATNState::addTransition(size_t index, Transition *e) {
  for (Transition *transition : transitions)
    if (transition->target->stateNumber == e->target->stateNumber) {
      delete e;
      return;
    }

  if (transitions.empty()) {
    epsilonOnlyTransitions = e->isEpsilon();
  } else if (epsilonOnlyTransitions != e->isEpsilon()) {
    std::cerr << "ATN state %d has both epsilon and non-epsilon transitions.\n" << stateNumber;
    epsilonOnlyTransitions = false;
  }

  transitions.insert(transitions.begin() + index, e);
}

Transition *ATNState::removeTransition(size_t index) {
  Transition *result = transitions[index];
  transitions.erase(transitions.begin() + index);
  return result;
}
