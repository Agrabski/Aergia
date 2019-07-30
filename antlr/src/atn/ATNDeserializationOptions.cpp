/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#include "atn/ATNDeserializationOptions.h"

using namespace antlr4::atn;

ATNDeserializationOptions ATNDeserializationOptions::defaultOptions;

ATNDeserializationOptions::ATNDeserializationOptions() noexcept
{
	InitializeInstanceFields();
}

ATNDeserializationOptions::ATNDeserializationOptions( ATNDeserializationOptions* options ) noexcept : ATNDeserializationOptions()
{
	this->verifyATN = options->verifyATN;
	this->generateRuleBypassTransitions = options->generateRuleBypassTransitions;
}

ATNDeserializationOptions::~ATNDeserializationOptions()
{
}

const ATNDeserializationOptions& ATNDeserializationOptions::getDefaultOptions() noexcept
{
	return defaultOptions;
}

bool ATNDeserializationOptions::isReadOnly() noexcept
{
	return readOnly;
}

void ATNDeserializationOptions::makeReadOnly() noexcept
{
	readOnly = true;
}

bool ATNDeserializationOptions::isVerifyATN() noexcept
{
	return verifyATN;
}

void ATNDeserializationOptions::setVerifyATN( bool verify )
{
	throwIfReadOnly();
	verifyATN = verify;
}

bool ATNDeserializationOptions::isGenerateRuleBypassTransitions() noexcept
{
	return generateRuleBypassTransitions;
}

void ATNDeserializationOptions::setGenerateRuleBypassTransitions( bool generate )
{
	throwIfReadOnly();
	generateRuleBypassTransitions = generate;
}

void ATNDeserializationOptions::throwIfReadOnly()
{
	if (isReadOnly()) {
		throw "The object is read only.";
	}
}

void ATNDeserializationOptions::InitializeInstanceFields() noexcept
{
	readOnly = false;
	verifyATN = true;
	generateRuleBypassTransitions = false;
}
