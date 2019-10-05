
// Generated from AergiaCpp14.g4 by ANTLR 4.7.2


#include "AergiaCpp14Listener.h"
#include "AergiaCpp14Visitor.h"

#include "AergiaCpp14Parser.h"


using namespace antlrcpp;
using namespace antlr4;

AergiaCpp14Parser::AergiaCpp14Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

AergiaCpp14Parser::~AergiaCpp14Parser() {
  delete _interpreter;
}

std::string AergiaCpp14Parser::getGrammarFileName() const {
  return "AergiaCpp14.g4";
}

const std::vector<std::string>& AergiaCpp14Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& AergiaCpp14Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TranslationunitContext ------------------------------------------------------------------

AergiaCpp14Parser::TranslationunitContext::TranslationunitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::TranslationunitContext::EOF() {
  return getToken(AergiaCpp14Parser::EOF, 0);
}

AergiaCpp14Parser::DeclarationseqContext* AergiaCpp14Parser::TranslationunitContext::declarationseq() {
  return getRuleContext<AergiaCpp14Parser::DeclarationseqContext>(0);
}


size_t AergiaCpp14Parser::TranslationunitContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTranslationunit;
}

void AergiaCpp14Parser::TranslationunitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationunit(this);
}

void AergiaCpp14Parser::TranslationunitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationunit(this);
}


antlrcpp::Any AergiaCpp14Parser::TranslationunitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTranslationunit(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TranslationunitContext* AergiaCpp14Parser::translationunit() {
  TranslationunitContext *_localctx = _tracker.createInstance<TranslationunitContext>(_ctx, getState());
  enterRule(_localctx, 0, AergiaCpp14Parser::RuleTranslationunit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(429);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
      | (1ULL << AergiaCpp14Parser::T__10)
      | (1ULL << AergiaCpp14Parser::MultiLineMacro)
      | (1ULL << AergiaCpp14Parser::Directive)
      | (1ULL << AergiaCpp14Parser::Alignas)
      | (1ULL << AergiaCpp14Parser::Asm)
      | (1ULL << AergiaCpp14Parser::Auto)
      | (1ULL << AergiaCpp14Parser::Bool)
      | (1ULL << AergiaCpp14Parser::Char)
      | (1ULL << AergiaCpp14Parser::Char16)
      | (1ULL << AergiaCpp14Parser::Char32)
      | (1ULL << AergiaCpp14Parser::Class)
      | (1ULL << AergiaCpp14Parser::Const)
      | (1ULL << AergiaCpp14Parser::Constexpr)
      | (1ULL << AergiaCpp14Parser::Decltype)
      | (1ULL << AergiaCpp14Parser::Double)
      | (1ULL << AergiaCpp14Parser::Enum)
      | (1ULL << AergiaCpp14Parser::Explicit)
      | (1ULL << AergiaCpp14Parser::Extern)
      | (1ULL << AergiaCpp14Parser::Float)
      | (1ULL << AergiaCpp14Parser::Friend)
      | (1ULL << AergiaCpp14Parser::Inline)
      | (1ULL << AergiaCpp14Parser::Int)
      | (1ULL << AergiaCpp14Parser::Long)
      | (1ULL << AergiaCpp14Parser::Mutable)
      | (1ULL << AergiaCpp14Parser::Namespace)
      | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Register - 65))
      | (1ULL << (AergiaCpp14Parser::Short - 65))
      | (1ULL << (AergiaCpp14Parser::Signed - 65))
      | (1ULL << (AergiaCpp14Parser::Static - 65))
      | (1ULL << (AergiaCpp14Parser::Static_assert - 65))
      | (1ULL << (AergiaCpp14Parser::Struct - 65))
      | (1ULL << (AergiaCpp14Parser::Template - 65))
      | (1ULL << (AergiaCpp14Parser::Thread_local - 65))
      | (1ULL << (AergiaCpp14Parser::Typedef - 65))
      | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
      | (1ULL << (AergiaCpp14Parser::Union - 65))
      | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
      | (1ULL << (AergiaCpp14Parser::Using - 65))
      | (1ULL << (AergiaCpp14Parser::Virtual - 65))
      | (1ULL << (AergiaCpp14Parser::Void - 65))
      | (1ULL << (AergiaCpp14Parser::Volatile - 65))
      | (1ULL << (AergiaCpp14Parser::Wchar - 65))
      | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
      | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
      | (1ULL << (AergiaCpp14Parser::Star - 65))
      | (1ULL << (AergiaCpp14Parser::And - 65))
      | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 137)) & ((1ULL << (AergiaCpp14Parser::Doublecolon - 137))
      | (1ULL << (AergiaCpp14Parser::Semi - 137))
      | (1ULL << (AergiaCpp14Parser::Ellipsis - 137))
      | (1ULL << (AergiaCpp14Parser::Identifier - 137)))) != 0)) {
      setState(428);
      declarationseq(0);
    }
    setState(431);
    match(AergiaCpp14Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AergiaexpressionbeginContext ------------------------------------------------------------------

AergiaCpp14Parser::AergiaexpressionbeginContext::AergiaexpressionbeginContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AergiaCpp14Parser::AergiaexpressionbeginContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAergiaexpressionbegin;
}

void AergiaCpp14Parser::AergiaexpressionbeginContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAergiaexpressionbegin(this);
}

void AergiaCpp14Parser::AergiaexpressionbeginContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAergiaexpressionbegin(this);
}


antlrcpp::Any AergiaCpp14Parser::AergiaexpressionbeginContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAergiaexpressionbegin(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AergiaexpressionbeginContext* AergiaCpp14Parser::aergiaexpressionbegin() {
  AergiaexpressionbeginContext *_localctx = _tracker.createInstance<AergiaexpressionbeginContext>(_ctx, getState());
  enterRule(_localctx, 2, AergiaCpp14Parser::RuleAergiaexpressionbegin);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    match(AergiaCpp14Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AergiaexpressionendContext ------------------------------------------------------------------

AergiaCpp14Parser::AergiaexpressionendContext::AergiaexpressionendContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AergiaCpp14Parser::AergiaexpressionendContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAergiaexpressionend;
}

void AergiaCpp14Parser::AergiaexpressionendContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAergiaexpressionend(this);
}

void AergiaCpp14Parser::AergiaexpressionendContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAergiaexpressionend(this);
}


antlrcpp::Any AergiaCpp14Parser::AergiaexpressionendContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAergiaexpressionend(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AergiaexpressionendContext* AergiaCpp14Parser::aergiaexpressionend() {
  AergiaexpressionendContext *_localctx = _tracker.createInstance<AergiaexpressionendContext>(_ctx, getState());
  enterRule(_localctx, 4, AergiaCpp14Parser::RuleAergiaexpressionend);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(435);
    match(AergiaCpp14Parser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AergiaBlockContext ------------------------------------------------------------------

AergiaCpp14Parser::AergiaBlockContext::AergiaBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::StatementseqContext* AergiaCpp14Parser::AergiaBlockContext::statementseq() {
  return getRuleContext<AergiaCpp14Parser::StatementseqContext>(0);
}


size_t AergiaCpp14Parser::AergiaBlockContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAergiaBlock;
}

void AergiaCpp14Parser::AergiaBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAergiaBlock(this);
}

void AergiaCpp14Parser::AergiaBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAergiaBlock(this);
}


antlrcpp::Any AergiaCpp14Parser::AergiaBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAergiaBlock(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AergiaBlockContext* AergiaCpp14Parser::aergiaBlock() {
  AergiaBlockContext *_localctx = _tracker.createInstance<AergiaBlockContext>(_ctx, getState());
  enterRule(_localctx, 6, AergiaCpp14Parser::RuleAergiaBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(437);
    match(AergiaCpp14Parser::T__2);
    setState(438);
    statementseq(0);
    setState(439);
    match(AergiaCpp14Parser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AergiaexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::AergiaexpressionContext::AergiaexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AergiaexpressionbeginContext* AergiaCpp14Parser::AergiaexpressionContext::aergiaexpressionbegin() {
  return getRuleContext<AergiaCpp14Parser::AergiaexpressionbeginContext>(0);
}

AergiaCpp14Parser::CallchainContext* AergiaCpp14Parser::AergiaexpressionContext::callchain() {
  return getRuleContext<AergiaCpp14Parser::CallchainContext>(0);
}

AergiaCpp14Parser::AergiaexpressionendContext* AergiaCpp14Parser::AergiaexpressionContext::aergiaexpressionend() {
  return getRuleContext<AergiaCpp14Parser::AergiaexpressionendContext>(0);
}

AergiaCpp14Parser::AnonymousExpressionContext* AergiaCpp14Parser::AergiaexpressionContext::anonymousExpression() {
  return getRuleContext<AergiaCpp14Parser::AnonymousExpressionContext>(0);
}


size_t AergiaCpp14Parser::AergiaexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAergiaexpression;
}

void AergiaCpp14Parser::AergiaexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAergiaexpression(this);
}

void AergiaCpp14Parser::AergiaexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAergiaexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::AergiaexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAergiaexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AergiaexpressionContext* AergiaCpp14Parser::aergiaexpression() {
  AergiaexpressionContext *_localctx = _tracker.createInstance<AergiaexpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, AergiaCpp14Parser::RuleAergiaexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(449);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(441);
      aergiaexpressionbegin();
      setState(442);
      callchain();
      setState(443);
      aergiaexpressionend();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(445);
      aergiaexpressionbegin();
      setState(446);
      anonymousExpression();
      setState(447);
      aergiaexpressionend();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AergiaExpression_type_targetContext ------------------------------------------------------------------

AergiaCpp14Parser::AergiaExpression_type_targetContext::AergiaExpression_type_targetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AergiaexpressionContext* AergiaCpp14Parser::AergiaExpression_type_targetContext::aergiaexpression() {
  return getRuleContext<AergiaCpp14Parser::AergiaexpressionContext>(0);
}


size_t AergiaCpp14Parser::AergiaExpression_type_targetContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAergiaExpression_type_target;
}

void AergiaCpp14Parser::AergiaExpression_type_targetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAergiaExpression_type_target(this);
}

void AergiaCpp14Parser::AergiaExpression_type_targetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAergiaExpression_type_target(this);
}


antlrcpp::Any AergiaCpp14Parser::AergiaExpression_type_targetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAergiaExpression_type_target(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AergiaExpression_type_targetContext* AergiaCpp14Parser::aergiaExpression_type_target() {
  AergiaExpression_type_targetContext *_localctx = _tracker.createInstance<AergiaExpression_type_targetContext>(_ctx, getState());
  enterRule(_localctx, 10, AergiaCpp14Parser::RuleAergiaExpression_type_target);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    aergiaexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AergiaExpression_value_targetContext ------------------------------------------------------------------

AergiaCpp14Parser::AergiaExpression_value_targetContext::AergiaExpression_value_targetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AergiaexpressionContext* AergiaCpp14Parser::AergiaExpression_value_targetContext::aergiaexpression() {
  return getRuleContext<AergiaCpp14Parser::AergiaexpressionContext>(0);
}


size_t AergiaCpp14Parser::AergiaExpression_value_targetContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAergiaExpression_value_target;
}

void AergiaCpp14Parser::AergiaExpression_value_targetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAergiaExpression_value_target(this);
}

void AergiaCpp14Parser::AergiaExpression_value_targetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAergiaExpression_value_target(this);
}


antlrcpp::Any AergiaCpp14Parser::AergiaExpression_value_targetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAergiaExpression_value_target(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AergiaExpression_value_targetContext* AergiaCpp14Parser::aergiaExpression_value_target() {
  AergiaExpression_value_targetContext *_localctx = _tracker.createInstance<AergiaExpression_value_targetContext>(_ctx, getState());
  enterRule(_localctx, 12, AergiaCpp14Parser::RuleAergiaExpression_value_target);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    aergiaexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AergiaExpression_identifier_targetContext ------------------------------------------------------------------

AergiaCpp14Parser::AergiaExpression_identifier_targetContext::AergiaExpression_identifier_targetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AergiaexpressionContext* AergiaCpp14Parser::AergiaExpression_identifier_targetContext::aergiaexpression() {
  return getRuleContext<AergiaCpp14Parser::AergiaexpressionContext>(0);
}


size_t AergiaCpp14Parser::AergiaExpression_identifier_targetContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAergiaExpression_identifier_target;
}

void AergiaCpp14Parser::AergiaExpression_identifier_targetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAergiaExpression_identifier_target(this);
}

void AergiaCpp14Parser::AergiaExpression_identifier_targetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAergiaExpression_identifier_target(this);
}


antlrcpp::Any AergiaCpp14Parser::AergiaExpression_identifier_targetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAergiaExpression_identifier_target(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AergiaExpression_identifier_targetContext* AergiaCpp14Parser::aergiaExpression_identifier_target() {
  AergiaExpression_identifier_targetContext *_localctx = _tracker.createInstance<AergiaExpression_identifier_targetContext>(_ctx, getState());
  enterRule(_localctx, 14, AergiaCpp14Parser::RuleAergiaExpression_identifier_target);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    aergiaexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnonymousExpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::AnonymousExpressionContext::AnonymousExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::AnonymousExpressionContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::AnoynmousBodyContext* AergiaCpp14Parser::AnonymousExpressionContext::anoynmousBody() {
  return getRuleContext<AergiaCpp14Parser::AnoynmousBodyContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::AnonymousExpressionContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}


size_t AergiaCpp14Parser::AnonymousExpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAnonymousExpression;
}

void AergiaCpp14Parser::AnonymousExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousExpression(this);
}

void AergiaCpp14Parser::AnonymousExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousExpression(this);
}


antlrcpp::Any AergiaCpp14Parser::AnonymousExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAnonymousExpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AnonymousExpressionContext* AergiaCpp14Parser::anonymousExpression() {
  AnonymousExpressionContext *_localctx = _tracker.createInstance<AnonymousExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, AergiaCpp14Parser::RuleAnonymousExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    match(AergiaCpp14Parser::T__4);
    setState(458);
    match(AergiaCpp14Parser::LeftParen);
    setState(459);
    anoynmousBody();
    setState(460);
    match(AergiaCpp14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnoynmousBodyContext ------------------------------------------------------------------

AergiaCpp14Parser::AnoynmousBodyContext::AnoynmousBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::InitializerclauseContext* AergiaCpp14Parser::AnoynmousBodyContext::initializerclause() {
  return getRuleContext<AergiaCpp14Parser::InitializerclauseContext>(0);
}


size_t AergiaCpp14Parser::AnoynmousBodyContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAnoynmousBody;
}

void AergiaCpp14Parser::AnoynmousBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnoynmousBody(this);
}

void AergiaCpp14Parser::AnoynmousBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnoynmousBody(this);
}


antlrcpp::Any AergiaCpp14Parser::AnoynmousBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAnoynmousBody(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AnoynmousBodyContext* AergiaCpp14Parser::anoynmousBody() {
  AnoynmousBodyContext *_localctx = _tracker.createInstance<AnoynmousBodyContext>(_ctx, getState());
  enterRule(_localctx, 18, AergiaCpp14Parser::RuleAnoynmousBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    initializerclause();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachContext ------------------------------------------------------------------

AergiaCpp14Parser::ForeachContext::ForeachContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ForeachheaderContext* AergiaCpp14Parser::ForeachContext::foreachheader() {
  return getRuleContext<AergiaCpp14Parser::ForeachheaderContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ForeachContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::ForeachbodyContext* AergiaCpp14Parser::ForeachContext::foreachbody() {
  return getRuleContext<AergiaCpp14Parser::ForeachbodyContext>(0);
}


size_t AergiaCpp14Parser::ForeachContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleForeach;
}

void AergiaCpp14Parser::ForeachContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeach(this);
}

void AergiaCpp14Parser::ForeachContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeach(this);
}


antlrcpp::Any AergiaCpp14Parser::ForeachContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitForeach(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ForeachContext* AergiaCpp14Parser::foreach() {
  ForeachContext *_localctx = _tracker.createInstance<ForeachContext>(_ctx, getState());
  enterRule(_localctx, 20, AergiaCpp14Parser::RuleForeach);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    match(AergiaCpp14Parser::T__5);
    setState(465);
    foreachheader();
    setState(466);
    match(AergiaCpp14Parser::RightParen);
    setState(467);
    foreachbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachheaderContext ------------------------------------------------------------------

AergiaCpp14Parser::ForeachheaderContext::ForeachheaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AergiaCpp14Parser::AergiaexpressionbeginContext *> AergiaCpp14Parser::ForeachheaderContext::aergiaexpressionbegin() {
  return getRuleContexts<AergiaCpp14Parser::AergiaexpressionbeginContext>();
}

AergiaCpp14Parser::AergiaexpressionbeginContext* AergiaCpp14Parser::ForeachheaderContext::aergiaexpressionbegin(size_t i) {
  return getRuleContext<AergiaCpp14Parser::AergiaexpressionbeginContext>(i);
}

tree::TerminalNode* AergiaCpp14Parser::ForeachheaderContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

AergiaCpp14Parser::CallchainContext* AergiaCpp14Parser::ForeachheaderContext::callchain() {
  return getRuleContext<AergiaCpp14Parser::CallchainContext>(0);
}


size_t AergiaCpp14Parser::ForeachheaderContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleForeachheader;
}

void AergiaCpp14Parser::ForeachheaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeachheader(this);
}

void AergiaCpp14Parser::ForeachheaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeachheader(this);
}


antlrcpp::Any AergiaCpp14Parser::ForeachheaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitForeachheader(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ForeachheaderContext* AergiaCpp14Parser::foreachheader() {
  ForeachheaderContext *_localctx = _tracker.createInstance<ForeachheaderContext>(_ctx, getState());
  enterRule(_localctx, 22, AergiaCpp14Parser::RuleForeachheader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    aergiaexpressionbegin();
    setState(470);
    match(AergiaCpp14Parser::Identifier);
    setState(471);
    match(AergiaCpp14Parser::T__6);
    setState(472);
    aergiaexpressionbegin();
    setState(473);
    callchain();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachbodyContext ------------------------------------------------------------------

AergiaCpp14Parser::ForeachbodyContext::ForeachbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::StatementContext* AergiaCpp14Parser::ForeachbodyContext::statement() {
  return getRuleContext<AergiaCpp14Parser::StatementContext>(0);
}

AergiaCpp14Parser::AergiaBlockContext* AergiaCpp14Parser::ForeachbodyContext::aergiaBlock() {
  return getRuleContext<AergiaCpp14Parser::AergiaBlockContext>(0);
}


size_t AergiaCpp14Parser::ForeachbodyContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleForeachbody;
}

void AergiaCpp14Parser::ForeachbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeachbody(this);
}

void AergiaCpp14Parser::ForeachbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeachbody(this);
}


antlrcpp::Any AergiaCpp14Parser::ForeachbodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitForeachbody(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ForeachbodyContext* AergiaCpp14Parser::foreachbody() {
  ForeachbodyContext *_localctx = _tracker.createInstance<ForeachbodyContext>(_ctx, getState());
  enterRule(_localctx, 24, AergiaCpp14Parser::RuleForeachbody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(477);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::T__0:
      case AergiaCpp14Parser::T__5:
      case AergiaCpp14Parser::T__8:
      case AergiaCpp14Parser::T__9:
      case AergiaCpp14Parser::T__10:
      case AergiaCpp14Parser::Alignas:
      case AergiaCpp14Parser::Alignof:
      case AergiaCpp14Parser::Asm:
      case AergiaCpp14Parser::Auto:
      case AergiaCpp14Parser::Bool:
      case AergiaCpp14Parser::Break:
      case AergiaCpp14Parser::Case:
      case AergiaCpp14Parser::Char:
      case AergiaCpp14Parser::Char16:
      case AergiaCpp14Parser::Char32:
      case AergiaCpp14Parser::Class:
      case AergiaCpp14Parser::Const:
      case AergiaCpp14Parser::Constexpr:
      case AergiaCpp14Parser::Const_cast:
      case AergiaCpp14Parser::Continue:
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Default:
      case AergiaCpp14Parser::Delete:
      case AergiaCpp14Parser::Do:
      case AergiaCpp14Parser::Double:
      case AergiaCpp14Parser::Dynamic_cast:
      case AergiaCpp14Parser::Enum:
      case AergiaCpp14Parser::Explicit:
      case AergiaCpp14Parser::Extern:
      case AergiaCpp14Parser::False:
      case AergiaCpp14Parser::Float:
      case AergiaCpp14Parser::For:
      case AergiaCpp14Parser::Friend:
      case AergiaCpp14Parser::Goto:
      case AergiaCpp14Parser::If:
      case AergiaCpp14Parser::Inline:
      case AergiaCpp14Parser::Int:
      case AergiaCpp14Parser::Long:
      case AergiaCpp14Parser::Mutable:
      case AergiaCpp14Parser::Namespace:
      case AergiaCpp14Parser::New:
      case AergiaCpp14Parser::Noexcept:
      case AergiaCpp14Parser::Nullptr:
      case AergiaCpp14Parser::Operator:
      case AergiaCpp14Parser::Register:
      case AergiaCpp14Parser::Reinterpret_cast:
      case AergiaCpp14Parser::Return:
      case AergiaCpp14Parser::Short:
      case AergiaCpp14Parser::Signed:
      case AergiaCpp14Parser::Sizeof:
      case AergiaCpp14Parser::Static:
      case AergiaCpp14Parser::Static_assert:
      case AergiaCpp14Parser::Static_cast:
      case AergiaCpp14Parser::Struct:
      case AergiaCpp14Parser::Switch:
      case AergiaCpp14Parser::This:
      case AergiaCpp14Parser::Thread_local:
      case AergiaCpp14Parser::Throw:
      case AergiaCpp14Parser::True:
      case AergiaCpp14Parser::Try:
      case AergiaCpp14Parser::Typedef:
      case AergiaCpp14Parser::Typeid_:
      case AergiaCpp14Parser::Typename_:
      case AergiaCpp14Parser::Union:
      case AergiaCpp14Parser::Unsigned:
      case AergiaCpp14Parser::Using:
      case AergiaCpp14Parser::Virtual:
      case AergiaCpp14Parser::Void:
      case AergiaCpp14Parser::Volatile:
      case AergiaCpp14Parser::Wchar:
      case AergiaCpp14Parser::While:
      case AergiaCpp14Parser::LeftParen:
      case AergiaCpp14Parser::LeftBracket:
      case AergiaCpp14Parser::LeftBrace:
      case AergiaCpp14Parser::Plus:
      case AergiaCpp14Parser::Minus:
      case AergiaCpp14Parser::Star:
      case AergiaCpp14Parser::And:
      case AergiaCpp14Parser::Or:
      case AergiaCpp14Parser::Tilde:
      case AergiaCpp14Parser::PlusPlus:
      case AergiaCpp14Parser::MinusMinus:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Semi:
      case AergiaCpp14Parser::Ellipsis:
      case AergiaCpp14Parser::Identifier:
      case AergiaCpp14Parser::Integerliteral:
      case AergiaCpp14Parser::Characterliteral:
      case AergiaCpp14Parser::Floatingliteral:
      case AergiaCpp14Parser::Stringliteral:
      case AergiaCpp14Parser::Userdefinedintegerliteral:
      case AergiaCpp14Parser::Userdefinedfloatingliteral:
      case AergiaCpp14Parser::Userdefinedstringliteral:
      case AergiaCpp14Parser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(475);
        statement();
        break;
      }

      case AergiaCpp14Parser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(476);
        aergiaBlock();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallchainContext ------------------------------------------------------------------

AergiaCpp14Parser::CallchainContext::CallchainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AergiaCpp14Parser::CallchainContext::Identifier() {
  return getTokens(AergiaCpp14Parser::Identifier);
}

tree::TerminalNode* AergiaCpp14Parser::CallchainContext::Identifier(size_t i) {
  return getToken(AergiaCpp14Parser::Identifier, i);
}

tree::TerminalNode* AergiaCpp14Parser::CallchainContext::Dot() {
  return getToken(AergiaCpp14Parser::Dot, 0);
}

AergiaCpp14Parser::CallchainContext* AergiaCpp14Parser::CallchainContext::callchain() {
  return getRuleContext<AergiaCpp14Parser::CallchainContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::CallchainContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::CallchainContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}


size_t AergiaCpp14Parser::CallchainContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleCallchain;
}

void AergiaCpp14Parser::CallchainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallchain(this);
}

void AergiaCpp14Parser::CallchainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallchain(this);
}


antlrcpp::Any AergiaCpp14Parser::CallchainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitCallchain(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::CallchainContext* AergiaCpp14Parser::callchain() {
  CallchainContext *_localctx = _tracker.createInstance<CallchainContext>(_ctx, getState());
  enterRule(_localctx, 26, AergiaCpp14Parser::RuleCallchain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(492);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(479);
      match(AergiaCpp14Parser::Identifier);
      setState(480);
      match(AergiaCpp14Parser::Dot);
      setState(481);
      callchain();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(482);
      match(AergiaCpp14Parser::Identifier);
      setState(483);
      match(AergiaCpp14Parser::LeftParen);
      setState(484);
      match(AergiaCpp14Parser::Identifier);
      setState(485);
      match(AergiaCpp14Parser::T__7);
      setState(486);
      callchain();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(487);
      match(AergiaCpp14Parser::Identifier);
      setState(488);
      match(AergiaCpp14Parser::LeftParen);
      setState(489);
      match(AergiaCpp14Parser::Identifier);
      setState(490);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(491);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::PrimaryexpressionContext::PrimaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::LiteralContext* AergiaCpp14Parser::PrimaryexpressionContext::literal() {
  return getRuleContext<AergiaCpp14Parser::LiteralContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PrimaryexpressionContext::This() {
  return getToken(AergiaCpp14Parser::This, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PrimaryexpressionContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::PrimaryexpressionContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PrimaryexpressionContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::IdexpressionContext* AergiaCpp14Parser::PrimaryexpressionContext::idexpression() {
  return getRuleContext<AergiaCpp14Parser::IdexpressionContext>(0);
}

AergiaCpp14Parser::LambdaexpressionContext* AergiaCpp14Parser::PrimaryexpressionContext::lambdaexpression() {
  return getRuleContext<AergiaCpp14Parser::LambdaexpressionContext>(0);
}


size_t AergiaCpp14Parser::PrimaryexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RulePrimaryexpression;
}

void AergiaCpp14Parser::PrimaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryexpression(this);
}

void AergiaCpp14Parser::PrimaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::PrimaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitPrimaryexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::PrimaryexpressionContext* AergiaCpp14Parser::primaryexpression() {
  PrimaryexpressionContext *_localctx = _tracker.createInstance<PrimaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, AergiaCpp14Parser::RulePrimaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(502);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::False:
      case AergiaCpp14Parser::Nullptr:
      case AergiaCpp14Parser::True:
      case AergiaCpp14Parser::Integerliteral:
      case AergiaCpp14Parser::Characterliteral:
      case AergiaCpp14Parser::Floatingliteral:
      case AergiaCpp14Parser::Stringliteral:
      case AergiaCpp14Parser::Userdefinedintegerliteral:
      case AergiaCpp14Parser::Userdefinedfloatingliteral:
      case AergiaCpp14Parser::Userdefinedstringliteral:
      case AergiaCpp14Parser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(494);
        literal();
        break;
      }

      case AergiaCpp14Parser::This: {
        enterOuterAlt(_localctx, 2);
        setState(495);
        match(AergiaCpp14Parser::This);
        break;
      }

      case AergiaCpp14Parser::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(496);
        match(AergiaCpp14Parser::LeftParen);
        setState(497);
        expression(0);
        setState(498);
        match(AergiaCpp14Parser::RightParen);
        break;
      }

      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Operator:
      case AergiaCpp14Parser::Tilde:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(500);
        idexpression();
        break;
      }

      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 5);
        setState(501);
        lambdaexpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::IdexpressionContext::IdexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::UnqualifiedidContext* AergiaCpp14Parser::IdexpressionContext::unqualifiedid() {
  return getRuleContext<AergiaCpp14Parser::UnqualifiedidContext>(0);
}

AergiaCpp14Parser::QualifiedidContext* AergiaCpp14Parser::IdexpressionContext::qualifiedid() {
  return getRuleContext<AergiaCpp14Parser::QualifiedidContext>(0);
}


size_t AergiaCpp14Parser::IdexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleIdexpression;
}

void AergiaCpp14Parser::IdexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdexpression(this);
}

void AergiaCpp14Parser::IdexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::IdexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitIdexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::IdexpressionContext* AergiaCpp14Parser::idexpression() {
  IdexpressionContext *_localctx = _tracker.createInstance<IdexpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, AergiaCpp14Parser::RuleIdexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(506);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(504);
      unqualifiedid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(505);
      qualifiedid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnqualifiedidContext ------------------------------------------------------------------

AergiaCpp14Parser::UnqualifiedidContext::UnqualifiedidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::UnqualifiedidContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

AergiaCpp14Parser::OperatorfunctionidContext* AergiaCpp14Parser::UnqualifiedidContext::operatorfunctionid() {
  return getRuleContext<AergiaCpp14Parser::OperatorfunctionidContext>(0);
}

AergiaCpp14Parser::ConversionfunctionidContext* AergiaCpp14Parser::UnqualifiedidContext::conversionfunctionid() {
  return getRuleContext<AergiaCpp14Parser::ConversionfunctionidContext>(0);
}

AergiaCpp14Parser::LiteraloperatoridContext* AergiaCpp14Parser::UnqualifiedidContext::literaloperatorid() {
  return getRuleContext<AergiaCpp14Parser::LiteraloperatoridContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::UnqualifiedidContext::Tilde() {
  return getToken(AergiaCpp14Parser::Tilde, 0);
}

AergiaCpp14Parser::ClassnameContext* AergiaCpp14Parser::UnqualifiedidContext::classname() {
  return getRuleContext<AergiaCpp14Parser::ClassnameContext>(0);
}

AergiaCpp14Parser::DecltypespecifierContext* AergiaCpp14Parser::UnqualifiedidContext::decltypespecifier() {
  return getRuleContext<AergiaCpp14Parser::DecltypespecifierContext>(0);
}

AergiaCpp14Parser::TemplateidContext* AergiaCpp14Parser::UnqualifiedidContext::templateid() {
  return getRuleContext<AergiaCpp14Parser::TemplateidContext>(0);
}


size_t AergiaCpp14Parser::UnqualifiedidContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleUnqualifiedid;
}

void AergiaCpp14Parser::UnqualifiedidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnqualifiedid(this);
}

void AergiaCpp14Parser::UnqualifiedidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnqualifiedid(this);
}


antlrcpp::Any AergiaCpp14Parser::UnqualifiedidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitUnqualifiedid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::UnqualifiedidContext* AergiaCpp14Parser::unqualifiedid() {
  UnqualifiedidContext *_localctx = _tracker.createInstance<UnqualifiedidContext>(_ctx, getState());
  enterRule(_localctx, 32, AergiaCpp14Parser::RuleUnqualifiedid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(517);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(508);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(509);
      operatorfunctionid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(510);
      conversionfunctionid();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(511);
      literaloperatorid();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(512);
      match(AergiaCpp14Parser::Tilde);
      setState(513);
      classname();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(514);
      match(AergiaCpp14Parser::Tilde);
      setState(515);
      decltypespecifier();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(516);
      templateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedidContext ------------------------------------------------------------------

AergiaCpp14Parser::QualifiedidContext::QualifiedidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::QualifiedidContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}

AergiaCpp14Parser::UnqualifiedidContext* AergiaCpp14Parser::QualifiedidContext::unqualifiedid() {
  return getRuleContext<AergiaCpp14Parser::UnqualifiedidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::QualifiedidContext::Template() {
  return getToken(AergiaCpp14Parser::Template, 0);
}


size_t AergiaCpp14Parser::QualifiedidContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleQualifiedid;
}

void AergiaCpp14Parser::QualifiedidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedid(this);
}

void AergiaCpp14Parser::QualifiedidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedid(this);
}


antlrcpp::Any AergiaCpp14Parser::QualifiedidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitQualifiedid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::QualifiedidContext* AergiaCpp14Parser::qualifiedid() {
  QualifiedidContext *_localctx = _tracker.createInstance<QualifiedidContext>(_ctx, getState());
  enterRule(_localctx, 34, AergiaCpp14Parser::RuleQualifiedid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(519);
    nestednamespecifier(0);
    setState(521);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Template) {
      setState(520);
      match(AergiaCpp14Parser::Template);
    }
    setState(523);
    unqualifiedid();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestednamespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::NestednamespecifierContext::NestednamespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::NestednamespecifierContext::Doublecolon() {
  return getToken(AergiaCpp14Parser::Doublecolon, 0);
}

AergiaCpp14Parser::ThetypenameContext* AergiaCpp14Parser::NestednamespecifierContext::thetypename() {
  return getRuleContext<AergiaCpp14Parser::ThetypenameContext>(0);
}

AergiaCpp14Parser::NamespacenameContext* AergiaCpp14Parser::NestednamespecifierContext::namespacename() {
  return getRuleContext<AergiaCpp14Parser::NamespacenameContext>(0);
}

AergiaCpp14Parser::DecltypespecifierContext* AergiaCpp14Parser::NestednamespecifierContext::decltypespecifier() {
  return getRuleContext<AergiaCpp14Parser::DecltypespecifierContext>(0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::NestednamespecifierContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NestednamespecifierContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

AergiaCpp14Parser::SimpletemplateidContext* AergiaCpp14Parser::NestednamespecifierContext::simpletemplateid() {
  return getRuleContext<AergiaCpp14Parser::SimpletemplateidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NestednamespecifierContext::Template() {
  return getToken(AergiaCpp14Parser::Template, 0);
}


size_t AergiaCpp14Parser::NestednamespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNestednamespecifier;
}

void AergiaCpp14Parser::NestednamespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestednamespecifier(this);
}

void AergiaCpp14Parser::NestednamespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestednamespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::NestednamespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNestednamespecifier(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::nestednamespecifier() {
   return nestednamespecifier(0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::nestednamespecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::NestednamespecifierContext *_localctx = _tracker.createInstance<NestednamespecifierContext>(_ctx, parentState);
  AergiaCpp14Parser::NestednamespecifierContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, AergiaCpp14Parser::RuleNestednamespecifier, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(536);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(526);
      match(AergiaCpp14Parser::Doublecolon);
      break;
    }

    case 2: {
      setState(527);
      thetypename();
      setState(528);
      match(AergiaCpp14Parser::Doublecolon);
      break;
    }

    case 3: {
      setState(530);
      namespacename();
      setState(531);
      match(AergiaCpp14Parser::Doublecolon);
      break;
    }

    case 4: {
      setState(533);
      decltypespecifier();
      setState(534);
      match(AergiaCpp14Parser::Doublecolon);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(550);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(548);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NestednamespecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestednamespecifier);
          setState(538);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(539);
          match(AergiaCpp14Parser::Identifier);
          setState(540);
          match(AergiaCpp14Parser::Doublecolon);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NestednamespecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestednamespecifier);
          setState(541);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(543);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == AergiaCpp14Parser::Template) {
            setState(542);
            match(AergiaCpp14Parser::Template);
          }
          setState(545);
          simpletemplateid();
          setState(546);
          match(AergiaCpp14Parser::Doublecolon);
          break;
        }

        } 
      }
      setState(552);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LambdaexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::LambdaexpressionContext::LambdaexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::LambdaintroducerContext* AergiaCpp14Parser::LambdaexpressionContext::lambdaintroducer() {
  return getRuleContext<AergiaCpp14Parser::LambdaintroducerContext>(0);
}

AergiaCpp14Parser::CompoundstatementContext* AergiaCpp14Parser::LambdaexpressionContext::compoundstatement() {
  return getRuleContext<AergiaCpp14Parser::CompoundstatementContext>(0);
}

AergiaCpp14Parser::LambdadeclaratorContext* AergiaCpp14Parser::LambdaexpressionContext::lambdadeclarator() {
  return getRuleContext<AergiaCpp14Parser::LambdadeclaratorContext>(0);
}


size_t AergiaCpp14Parser::LambdaexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleLambdaexpression;
}

void AergiaCpp14Parser::LambdaexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaexpression(this);
}

void AergiaCpp14Parser::LambdaexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::LambdaexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitLambdaexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::LambdaexpressionContext* AergiaCpp14Parser::lambdaexpression() {
  LambdaexpressionContext *_localctx = _tracker.createInstance<LambdaexpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, AergiaCpp14Parser::RuleLambdaexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    lambdaintroducer();
    setState(555);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::LeftParen) {
      setState(554);
      lambdadeclarator();
    }
    setState(557);
    compoundstatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaintroducerContext ------------------------------------------------------------------

AergiaCpp14Parser::LambdaintroducerContext::LambdaintroducerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::LambdaintroducerContext::LeftBracket() {
  return getToken(AergiaCpp14Parser::LeftBracket, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LambdaintroducerContext::RightBracket() {
  return getToken(AergiaCpp14Parser::RightBracket, 0);
}

AergiaCpp14Parser::LambdacaptureContext* AergiaCpp14Parser::LambdaintroducerContext::lambdacapture() {
  return getRuleContext<AergiaCpp14Parser::LambdacaptureContext>(0);
}


size_t AergiaCpp14Parser::LambdaintroducerContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleLambdaintroducer;
}

void AergiaCpp14Parser::LambdaintroducerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaintroducer(this);
}

void AergiaCpp14Parser::LambdaintroducerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaintroducer(this);
}


antlrcpp::Any AergiaCpp14Parser::LambdaintroducerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitLambdaintroducer(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::LambdaintroducerContext* AergiaCpp14Parser::lambdaintroducer() {
  LambdaintroducerContext *_localctx = _tracker.createInstance<LambdaintroducerContext>(_ctx, getState());
  enterRule(_localctx, 40, AergiaCpp14Parser::RuleLambdaintroducer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
    match(AergiaCpp14Parser::LeftBracket);
    setState(561);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 77) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 77)) & ((1ULL << (AergiaCpp14Parser::This - 77))
      | (1ULL << (AergiaCpp14Parser::And - 77))
      | (1ULL << (AergiaCpp14Parser::Assign - 77)))) != 0) || _la == AergiaCpp14Parser::Identifier) {
      setState(560);
      lambdacapture();
    }
    setState(563);
    match(AergiaCpp14Parser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdacaptureContext ------------------------------------------------------------------

AergiaCpp14Parser::LambdacaptureContext::LambdacaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::CapturedefaultContext* AergiaCpp14Parser::LambdacaptureContext::capturedefault() {
  return getRuleContext<AergiaCpp14Parser::CapturedefaultContext>(0);
}

AergiaCpp14Parser::CapturelistContext* AergiaCpp14Parser::LambdacaptureContext::capturelist() {
  return getRuleContext<AergiaCpp14Parser::CapturelistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::LambdacaptureContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::LambdacaptureContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleLambdacapture;
}

void AergiaCpp14Parser::LambdacaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdacapture(this);
}

void AergiaCpp14Parser::LambdacaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdacapture(this);
}


antlrcpp::Any AergiaCpp14Parser::LambdacaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitLambdacapture(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::LambdacaptureContext* AergiaCpp14Parser::lambdacapture() {
  LambdacaptureContext *_localctx = _tracker.createInstance<LambdacaptureContext>(_ctx, getState());
  enterRule(_localctx, 42, AergiaCpp14Parser::RuleLambdacapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(571);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(565);
      capturedefault();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(566);
      capturelist(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(567);
      capturedefault();
      setState(568);
      match(AergiaCpp14Parser::Comma);
      setState(569);
      capturelist(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CapturedefaultContext ------------------------------------------------------------------

AergiaCpp14Parser::CapturedefaultContext::CapturedefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::CapturedefaultContext::And() {
  return getToken(AergiaCpp14Parser::And, 0);
}

tree::TerminalNode* AergiaCpp14Parser::CapturedefaultContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}


size_t AergiaCpp14Parser::CapturedefaultContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleCapturedefault;
}

void AergiaCpp14Parser::CapturedefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapturedefault(this);
}

void AergiaCpp14Parser::CapturedefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapturedefault(this);
}


antlrcpp::Any AergiaCpp14Parser::CapturedefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitCapturedefault(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::CapturedefaultContext* AergiaCpp14Parser::capturedefault() {
  CapturedefaultContext *_localctx = _tracker.createInstance<CapturedefaultContext>(_ctx, getState());
  enterRule(_localctx, 44, AergiaCpp14Parser::RuleCapturedefault);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(573);
    _la = _input->LA(1);
    if (!(_la == AergiaCpp14Parser::And

    || _la == AergiaCpp14Parser::Assign)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CapturelistContext ------------------------------------------------------------------

AergiaCpp14Parser::CapturelistContext::CapturelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::CaptureContext* AergiaCpp14Parser::CapturelistContext::capture() {
  return getRuleContext<AergiaCpp14Parser::CaptureContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::CapturelistContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

AergiaCpp14Parser::CapturelistContext* AergiaCpp14Parser::CapturelistContext::capturelist() {
  return getRuleContext<AergiaCpp14Parser::CapturelistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::CapturelistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::CapturelistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleCapturelist;
}

void AergiaCpp14Parser::CapturelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapturelist(this);
}

void AergiaCpp14Parser::CapturelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapturelist(this);
}


antlrcpp::Any AergiaCpp14Parser::CapturelistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitCapturelist(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::CapturelistContext* AergiaCpp14Parser::capturelist() {
   return capturelist(0);
}

AergiaCpp14Parser::CapturelistContext* AergiaCpp14Parser::capturelist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::CapturelistContext *_localctx = _tracker.createInstance<CapturelistContext>(_ctx, parentState);
  AergiaCpp14Parser::CapturelistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, AergiaCpp14Parser::RuleCapturelist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(576);
    capture();
    setState(578);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(577);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(588);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<CapturelistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleCapturelist);
        setState(580);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(581);
        match(AergiaCpp14Parser::Comma);
        setState(582);
        capture();
        setState(584);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          setState(583);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(590);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CaptureContext ------------------------------------------------------------------

AergiaCpp14Parser::CaptureContext::CaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::SimplecaptureContext* AergiaCpp14Parser::CaptureContext::simplecapture() {
  return getRuleContext<AergiaCpp14Parser::SimplecaptureContext>(0);
}

AergiaCpp14Parser::InitcaptureContext* AergiaCpp14Parser::CaptureContext::initcapture() {
  return getRuleContext<AergiaCpp14Parser::InitcaptureContext>(0);
}


size_t AergiaCpp14Parser::CaptureContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleCapture;
}

void AergiaCpp14Parser::CaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapture(this);
}

void AergiaCpp14Parser::CaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapture(this);
}


antlrcpp::Any AergiaCpp14Parser::CaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitCapture(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::CaptureContext* AergiaCpp14Parser::capture() {
  CaptureContext *_localctx = _tracker.createInstance<CaptureContext>(_ctx, getState());
  enterRule(_localctx, 48, AergiaCpp14Parser::RuleCapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(593);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(591);
      simplecapture();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(592);
      initcapture();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimplecaptureContext ------------------------------------------------------------------

AergiaCpp14Parser::SimplecaptureContext::SimplecaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::SimplecaptureContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimplecaptureContext::And() {
  return getToken(AergiaCpp14Parser::And, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimplecaptureContext::This() {
  return getToken(AergiaCpp14Parser::This, 0);
}


size_t AergiaCpp14Parser::SimplecaptureContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleSimplecapture;
}

void AergiaCpp14Parser::SimplecaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimplecapture(this);
}

void AergiaCpp14Parser::SimplecaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimplecapture(this);
}


antlrcpp::Any AergiaCpp14Parser::SimplecaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitSimplecapture(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::SimplecaptureContext* AergiaCpp14Parser::simplecapture() {
  SimplecaptureContext *_localctx = _tracker.createInstance<SimplecaptureContext>(_ctx, getState());
  enterRule(_localctx, 50, AergiaCpp14Parser::RuleSimplecapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(599);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(595);
        match(AergiaCpp14Parser::Identifier);
        break;
      }

      case AergiaCpp14Parser::And: {
        enterOuterAlt(_localctx, 2);
        setState(596);
        match(AergiaCpp14Parser::And);
        setState(597);
        match(AergiaCpp14Parser::Identifier);
        break;
      }

      case AergiaCpp14Parser::This: {
        enterOuterAlt(_localctx, 3);
        setState(598);
        match(AergiaCpp14Parser::This);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitcaptureContext ------------------------------------------------------------------

AergiaCpp14Parser::InitcaptureContext::InitcaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::InitcaptureContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

AergiaCpp14Parser::InitializerContext* AergiaCpp14Parser::InitcaptureContext::initializer() {
  return getRuleContext<AergiaCpp14Parser::InitializerContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::InitcaptureContext::And() {
  return getToken(AergiaCpp14Parser::And, 0);
}


size_t AergiaCpp14Parser::InitcaptureContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleInitcapture;
}

void AergiaCpp14Parser::InitcaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitcapture(this);
}

void AergiaCpp14Parser::InitcaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitcapture(this);
}


antlrcpp::Any AergiaCpp14Parser::InitcaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitInitcapture(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::InitcaptureContext* AergiaCpp14Parser::initcapture() {
  InitcaptureContext *_localctx = _tracker.createInstance<InitcaptureContext>(_ctx, getState());
  enterRule(_localctx, 52, AergiaCpp14Parser::RuleInitcapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(606);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(601);
        match(AergiaCpp14Parser::Identifier);
        setState(602);
        initializer();
        break;
      }

      case AergiaCpp14Parser::And: {
        enterOuterAlt(_localctx, 2);
        setState(603);
        match(AergiaCpp14Parser::And);
        setState(604);
        match(AergiaCpp14Parser::Identifier);
        setState(605);
        initializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdadeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::LambdadeclaratorContext::LambdadeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::LambdadeclaratorContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ParameterdeclarationclauseContext* AergiaCpp14Parser::LambdadeclaratorContext::parameterdeclarationclause() {
  return getRuleContext<AergiaCpp14Parser::ParameterdeclarationclauseContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::LambdadeclaratorContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LambdadeclaratorContext::Mutable() {
  return getToken(AergiaCpp14Parser::Mutable, 0);
}

AergiaCpp14Parser::ExceptionspecificationContext* AergiaCpp14Parser::LambdadeclaratorContext::exceptionspecification() {
  return getRuleContext<AergiaCpp14Parser::ExceptionspecificationContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::LambdadeclaratorContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::TrailingreturntypeContext* AergiaCpp14Parser::LambdadeclaratorContext::trailingreturntype() {
  return getRuleContext<AergiaCpp14Parser::TrailingreturntypeContext>(0);
}


size_t AergiaCpp14Parser::LambdadeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleLambdadeclarator;
}

void AergiaCpp14Parser::LambdadeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdadeclarator(this);
}

void AergiaCpp14Parser::LambdadeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdadeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::LambdadeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitLambdadeclarator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::LambdadeclaratorContext* AergiaCpp14Parser::lambdadeclarator() {
  LambdadeclaratorContext *_localctx = _tracker.createInstance<LambdadeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 54, AergiaCpp14Parser::RuleLambdadeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(608);
    match(AergiaCpp14Parser::LeftParen);
    setState(609);
    parameterdeclarationclause();
    setState(610);
    match(AergiaCpp14Parser::RightParen);
    setState(612);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Mutable) {
      setState(611);
      match(AergiaCpp14Parser::Mutable);
    }
    setState(615);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Noexcept

    || _la == AergiaCpp14Parser::Throw) {
      setState(614);
      exceptionspecification();
    }
    setState(618);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(617);
      attributespecifierseq(0);
    }
    setState(621);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Arrow) {
      setState(620);
      trailingreturntype();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::PostfixexpressionContext::PostfixexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::PrimaryexpressionContext* AergiaCpp14Parser::PostfixexpressionContext::primaryexpression() {
  return getRuleContext<AergiaCpp14Parser::PrimaryexpressionContext>(0);
}

AergiaCpp14Parser::SimpletypespecifierContext* AergiaCpp14Parser::PostfixexpressionContext::simpletypespecifier() {
  return getRuleContext<AergiaCpp14Parser::SimpletypespecifierContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::ExpressionlistContext* AergiaCpp14Parser::PostfixexpressionContext::expressionlist() {
  return getRuleContext<AergiaCpp14Parser::ExpressionlistContext>(0);
}

AergiaCpp14Parser::TypenamespecifierContext* AergiaCpp14Parser::PostfixexpressionContext::typenamespecifier() {
  return getRuleContext<AergiaCpp14Parser::TypenamespecifierContext>(0);
}

AergiaCpp14Parser::BracedinitlistContext* AergiaCpp14Parser::PostfixexpressionContext::bracedinitlist() {
  return getRuleContext<AergiaCpp14Parser::BracedinitlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::Dynamic_cast() {
  return getToken(AergiaCpp14Parser::Dynamic_cast, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::Less() {
  return getToken(AergiaCpp14Parser::Less, 0);
}

AergiaCpp14Parser::ThetypeidContext* AergiaCpp14Parser::PostfixexpressionContext::thetypeid() {
  return getRuleContext<AergiaCpp14Parser::ThetypeidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::Greater() {
  return getToken(AergiaCpp14Parser::Greater, 0);
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::PostfixexpressionContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::Static_cast() {
  return getToken(AergiaCpp14Parser::Static_cast, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::Reinterpret_cast() {
  return getToken(AergiaCpp14Parser::Reinterpret_cast, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::Const_cast() {
  return getToken(AergiaCpp14Parser::Const_cast, 0);
}

AergiaCpp14Parser::TypeidofthetypeidContext* AergiaCpp14Parser::PostfixexpressionContext::typeidofthetypeid() {
  return getRuleContext<AergiaCpp14Parser::TypeidofthetypeidContext>(0);
}

AergiaCpp14Parser::PostfixexpressionContext* AergiaCpp14Parser::PostfixexpressionContext::postfixexpression() {
  return getRuleContext<AergiaCpp14Parser::PostfixexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::LeftBracket() {
  return getToken(AergiaCpp14Parser::LeftBracket, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::RightBracket() {
  return getToken(AergiaCpp14Parser::RightBracket, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::Dot() {
  return getToken(AergiaCpp14Parser::Dot, 0);
}

AergiaCpp14Parser::IdexpressionContext* AergiaCpp14Parser::PostfixexpressionContext::idexpression() {
  return getRuleContext<AergiaCpp14Parser::IdexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::Template() {
  return getToken(AergiaCpp14Parser::Template, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::Arrow() {
  return getToken(AergiaCpp14Parser::Arrow, 0);
}

AergiaCpp14Parser::PseudodestructornameContext* AergiaCpp14Parser::PostfixexpressionContext::pseudodestructorname() {
  return getRuleContext<AergiaCpp14Parser::PseudodestructornameContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::PlusPlus() {
  return getToken(AergiaCpp14Parser::PlusPlus, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PostfixexpressionContext::MinusMinus() {
  return getToken(AergiaCpp14Parser::MinusMinus, 0);
}


size_t AergiaCpp14Parser::PostfixexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RulePostfixexpression;
}

void AergiaCpp14Parser::PostfixexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixexpression(this);
}

void AergiaCpp14Parser::PostfixexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::PostfixexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitPostfixexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::PostfixexpressionContext* AergiaCpp14Parser::postfixexpression() {
   return postfixexpression(0);
}

AergiaCpp14Parser::PostfixexpressionContext* AergiaCpp14Parser::postfixexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::PostfixexpressionContext *_localctx = _tracker.createInstance<PostfixexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::PostfixexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, AergiaCpp14Parser::RulePostfixexpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(687);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(624);
      primaryexpression();
      break;
    }

    case 2: {
      setState(625);
      simpletypespecifier();
      setState(626);
      match(AergiaCpp14Parser::LeftParen);
      setState(628);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
        | (1ULL << AergiaCpp14Parser::T__8)
        | (1ULL << AergiaCpp14Parser::T__9)
        | (1ULL << AergiaCpp14Parser::Alignof)
        | (1ULL << AergiaCpp14Parser::Auto)
        | (1ULL << AergiaCpp14Parser::Bool)
        | (1ULL << AergiaCpp14Parser::Char)
        | (1ULL << AergiaCpp14Parser::Char16)
        | (1ULL << AergiaCpp14Parser::Char32)
        | (1ULL << AergiaCpp14Parser::Const_cast)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Delete)
        | (1ULL << AergiaCpp14Parser::Double)
        | (1ULL << AergiaCpp14Parser::Dynamic_cast)
        | (1ULL << AergiaCpp14Parser::False)
        | (1ULL << AergiaCpp14Parser::Float)
        | (1ULL << AergiaCpp14Parser::Int)
        | (1ULL << AergiaCpp14Parser::Long)
        | (1ULL << AergiaCpp14Parser::New)
        | (1ULL << AergiaCpp14Parser::Noexcept)
        | (1ULL << AergiaCpp14Parser::Nullptr)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
        | (1ULL << (AergiaCpp14Parser::Short - 66))
        | (1ULL << (AergiaCpp14Parser::Signed - 66))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
        | (1ULL << (AergiaCpp14Parser::This - 66))
        | (1ULL << (AergiaCpp14Parser::Throw - 66))
        | (1ULL << (AergiaCpp14Parser::True - 66))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
        | (1ULL << (AergiaCpp14Parser::Void - 66))
        | (1ULL << (AergiaCpp14Parser::Wchar - 66))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
        | (1ULL << (AergiaCpp14Parser::LeftBrace - 66))
        | (1ULL << (AergiaCpp14Parser::Plus - 66))
        | (1ULL << (AergiaCpp14Parser::Minus - 66))
        | (1ULL << (AergiaCpp14Parser::Star - 66))
        | (1ULL << (AergiaCpp14Parser::And - 66))
        | (1ULL << (AergiaCpp14Parser::Or - 66))
        | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
        | (1ULL << (AergiaCpp14Parser::Identifier - 130))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
        setState(627);
        expressionlist();
      }
      setState(630);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 3: {
      setState(632);
      typenamespecifier();
      setState(633);
      match(AergiaCpp14Parser::LeftParen);
      setState(635);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
        | (1ULL << AergiaCpp14Parser::T__8)
        | (1ULL << AergiaCpp14Parser::T__9)
        | (1ULL << AergiaCpp14Parser::Alignof)
        | (1ULL << AergiaCpp14Parser::Auto)
        | (1ULL << AergiaCpp14Parser::Bool)
        | (1ULL << AergiaCpp14Parser::Char)
        | (1ULL << AergiaCpp14Parser::Char16)
        | (1ULL << AergiaCpp14Parser::Char32)
        | (1ULL << AergiaCpp14Parser::Const_cast)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Delete)
        | (1ULL << AergiaCpp14Parser::Double)
        | (1ULL << AergiaCpp14Parser::Dynamic_cast)
        | (1ULL << AergiaCpp14Parser::False)
        | (1ULL << AergiaCpp14Parser::Float)
        | (1ULL << AergiaCpp14Parser::Int)
        | (1ULL << AergiaCpp14Parser::Long)
        | (1ULL << AergiaCpp14Parser::New)
        | (1ULL << AergiaCpp14Parser::Noexcept)
        | (1ULL << AergiaCpp14Parser::Nullptr)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
        | (1ULL << (AergiaCpp14Parser::Short - 66))
        | (1ULL << (AergiaCpp14Parser::Signed - 66))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
        | (1ULL << (AergiaCpp14Parser::This - 66))
        | (1ULL << (AergiaCpp14Parser::Throw - 66))
        | (1ULL << (AergiaCpp14Parser::True - 66))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
        | (1ULL << (AergiaCpp14Parser::Void - 66))
        | (1ULL << (AergiaCpp14Parser::Wchar - 66))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
        | (1ULL << (AergiaCpp14Parser::LeftBrace - 66))
        | (1ULL << (AergiaCpp14Parser::Plus - 66))
        | (1ULL << (AergiaCpp14Parser::Minus - 66))
        | (1ULL << (AergiaCpp14Parser::Star - 66))
        | (1ULL << (AergiaCpp14Parser::And - 66))
        | (1ULL << (AergiaCpp14Parser::Or - 66))
        | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
        | (1ULL << (AergiaCpp14Parser::Identifier - 130))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
        setState(634);
        expressionlist();
      }
      setState(637);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 4: {
      setState(639);
      simpletypespecifier();
      setState(640);
      bracedinitlist();
      break;
    }

    case 5: {
      setState(642);
      typenamespecifier();
      setState(643);
      bracedinitlist();
      break;
    }

    case 6: {
      setState(645);
      match(AergiaCpp14Parser::Dynamic_cast);
      setState(646);
      match(AergiaCpp14Parser::Less);
      setState(647);
      thetypeid();
      setState(648);
      match(AergiaCpp14Parser::Greater);
      setState(649);
      match(AergiaCpp14Parser::LeftParen);
      setState(650);
      expression(0);
      setState(651);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 7: {
      setState(653);
      match(AergiaCpp14Parser::Static_cast);
      setState(654);
      match(AergiaCpp14Parser::Less);
      setState(655);
      thetypeid();
      setState(656);
      match(AergiaCpp14Parser::Greater);
      setState(657);
      match(AergiaCpp14Parser::LeftParen);
      setState(658);
      expression(0);
      setState(659);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 8: {
      setState(661);
      match(AergiaCpp14Parser::Reinterpret_cast);
      setState(662);
      match(AergiaCpp14Parser::Less);
      setState(663);
      thetypeid();
      setState(664);
      match(AergiaCpp14Parser::Greater);
      setState(665);
      match(AergiaCpp14Parser::LeftParen);
      setState(666);
      expression(0);
      setState(667);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 9: {
      setState(669);
      match(AergiaCpp14Parser::Const_cast);
      setState(670);
      match(AergiaCpp14Parser::Less);
      setState(671);
      thetypeid();
      setState(672);
      match(AergiaCpp14Parser::Greater);
      setState(673);
      match(AergiaCpp14Parser::LeftParen);
      setState(674);
      expression(0);
      setState(675);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 10: {
      setState(677);
      typeidofthetypeid();
      setState(678);
      match(AergiaCpp14Parser::LeftParen);
      setState(679);
      expression(0);
      setState(680);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 11: {
      setState(682);
      typeidofthetypeid();
      setState(683);
      match(AergiaCpp14Parser::LeftParen);
      setState(684);
      thetypeid();
      setState(685);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(729);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(727);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(689);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(690);
          match(AergiaCpp14Parser::LeftBracket);
          setState(691);
          expression(0);
          setState(692);
          match(AergiaCpp14Parser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(694);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(695);
          match(AergiaCpp14Parser::LeftBracket);
          setState(696);
          bracedinitlist();
          setState(697);
          match(AergiaCpp14Parser::RightBracket);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(699);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(700);
          match(AergiaCpp14Parser::LeftParen);
          setState(702);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
            | (1ULL << AergiaCpp14Parser::T__8)
            | (1ULL << AergiaCpp14Parser::T__9)
            | (1ULL << AergiaCpp14Parser::Alignof)
            | (1ULL << AergiaCpp14Parser::Auto)
            | (1ULL << AergiaCpp14Parser::Bool)
            | (1ULL << AergiaCpp14Parser::Char)
            | (1ULL << AergiaCpp14Parser::Char16)
            | (1ULL << AergiaCpp14Parser::Char32)
            | (1ULL << AergiaCpp14Parser::Const_cast)
            | (1ULL << AergiaCpp14Parser::Decltype)
            | (1ULL << AergiaCpp14Parser::Delete)
            | (1ULL << AergiaCpp14Parser::Double)
            | (1ULL << AergiaCpp14Parser::Dynamic_cast)
            | (1ULL << AergiaCpp14Parser::False)
            | (1ULL << AergiaCpp14Parser::Float)
            | (1ULL << AergiaCpp14Parser::Int)
            | (1ULL << AergiaCpp14Parser::Long)
            | (1ULL << AergiaCpp14Parser::New)
            | (1ULL << AergiaCpp14Parser::Noexcept)
            | (1ULL << AergiaCpp14Parser::Nullptr)
            | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
            | (1ULL << (AergiaCpp14Parser::Short - 66))
            | (1ULL << (AergiaCpp14Parser::Signed - 66))
            | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
            | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
            | (1ULL << (AergiaCpp14Parser::This - 66))
            | (1ULL << (AergiaCpp14Parser::Throw - 66))
            | (1ULL << (AergiaCpp14Parser::True - 66))
            | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
            | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
            | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
            | (1ULL << (AergiaCpp14Parser::Void - 66))
            | (1ULL << (AergiaCpp14Parser::Wchar - 66))
            | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
            | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
            | (1ULL << (AergiaCpp14Parser::LeftBrace - 66))
            | (1ULL << (AergiaCpp14Parser::Plus - 66))
            | (1ULL << (AergiaCpp14Parser::Minus - 66))
            | (1ULL << (AergiaCpp14Parser::Star - 66))
            | (1ULL << (AergiaCpp14Parser::And - 66))
            | (1ULL << (AergiaCpp14Parser::Or - 66))
            | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
            | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
            | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
            | (1ULL << (AergiaCpp14Parser::Identifier - 130))
            | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
            setState(701);
            expressionlist();
          }
          setState(704);
          match(AergiaCpp14Parser::RightParen);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(705);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(706);
          match(AergiaCpp14Parser::Dot);
          setState(708);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == AergiaCpp14Parser::Template) {
            setState(707);
            match(AergiaCpp14Parser::Template);
          }
          setState(710);
          idexpression();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(711);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(712);
          match(AergiaCpp14Parser::Arrow);
          setState(714);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == AergiaCpp14Parser::Template) {
            setState(713);
            match(AergiaCpp14Parser::Template);
          }
          setState(716);
          idexpression();
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(717);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(718);
          match(AergiaCpp14Parser::Dot);
          setState(719);
          pseudodestructorname();
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(720);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(721);
          match(AergiaCpp14Parser::Arrow);
          setState(722);
          pseudodestructorname();
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(723);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(724);
          match(AergiaCpp14Parser::PlusPlus);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(725);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(726);
          match(AergiaCpp14Parser::MinusMinus);
          break;
        }

        } 
      }
      setState(731);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeidofexprContext ------------------------------------------------------------------

AergiaCpp14Parser::TypeidofexprContext::TypeidofexprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::TypeidofexprContext::Typeid_() {
  return getToken(AergiaCpp14Parser::Typeid_, 0);
}


size_t AergiaCpp14Parser::TypeidofexprContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTypeidofexpr;
}

void AergiaCpp14Parser::TypeidofexprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeidofexpr(this);
}

void AergiaCpp14Parser::TypeidofexprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeidofexpr(this);
}


antlrcpp::Any AergiaCpp14Parser::TypeidofexprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTypeidofexpr(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TypeidofexprContext* AergiaCpp14Parser::typeidofexpr() {
  TypeidofexprContext *_localctx = _tracker.createInstance<TypeidofexprContext>(_ctx, getState());
  enterRule(_localctx, 58, AergiaCpp14Parser::RuleTypeidofexpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(732);
    match(AergiaCpp14Parser::Typeid_);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeidofthetypeidContext ------------------------------------------------------------------

AergiaCpp14Parser::TypeidofthetypeidContext::TypeidofthetypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::TypeidofthetypeidContext::Typeid_() {
  return getToken(AergiaCpp14Parser::Typeid_, 0);
}


size_t AergiaCpp14Parser::TypeidofthetypeidContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTypeidofthetypeid;
}

void AergiaCpp14Parser::TypeidofthetypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeidofthetypeid(this);
}

void AergiaCpp14Parser::TypeidofthetypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeidofthetypeid(this);
}


antlrcpp::Any AergiaCpp14Parser::TypeidofthetypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTypeidofthetypeid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TypeidofthetypeidContext* AergiaCpp14Parser::typeidofthetypeid() {
  TypeidofthetypeidContext *_localctx = _tracker.createInstance<TypeidofthetypeidContext>(_ctx, getState());
  enterRule(_localctx, 60, AergiaCpp14Parser::RuleTypeidofthetypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(734);
    match(AergiaCpp14Parser::Typeid_);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionlistContext ------------------------------------------------------------------

AergiaCpp14Parser::ExpressionlistContext::ExpressionlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::InitializerlistContext* AergiaCpp14Parser::ExpressionlistContext::initializerlist() {
  return getRuleContext<AergiaCpp14Parser::InitializerlistContext>(0);
}


size_t AergiaCpp14Parser::ExpressionlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleExpressionlist;
}

void AergiaCpp14Parser::ExpressionlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionlist(this);
}

void AergiaCpp14Parser::ExpressionlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionlist(this);
}


antlrcpp::Any AergiaCpp14Parser::ExpressionlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitExpressionlist(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ExpressionlistContext* AergiaCpp14Parser::expressionlist() {
  ExpressionlistContext *_localctx = _tracker.createInstance<ExpressionlistContext>(_ctx, getState());
  enterRule(_localctx, 62, AergiaCpp14Parser::RuleExpressionlist);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(736);
    initializerlist(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudodestructornameContext ------------------------------------------------------------------

AergiaCpp14Parser::PseudodestructornameContext::PseudodestructornameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AergiaCpp14Parser::ThetypenameContext *> AergiaCpp14Parser::PseudodestructornameContext::thetypename() {
  return getRuleContexts<AergiaCpp14Parser::ThetypenameContext>();
}

AergiaCpp14Parser::ThetypenameContext* AergiaCpp14Parser::PseudodestructornameContext::thetypename(size_t i) {
  return getRuleContext<AergiaCpp14Parser::ThetypenameContext>(i);
}

tree::TerminalNode* AergiaCpp14Parser::PseudodestructornameContext::Doublecolon() {
  return getToken(AergiaCpp14Parser::Doublecolon, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PseudodestructornameContext::Tilde() {
  return getToken(AergiaCpp14Parser::Tilde, 0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::PseudodestructornameContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PseudodestructornameContext::Template() {
  return getToken(AergiaCpp14Parser::Template, 0);
}

AergiaCpp14Parser::SimpletemplateidContext* AergiaCpp14Parser::PseudodestructornameContext::simpletemplateid() {
  return getRuleContext<AergiaCpp14Parser::SimpletemplateidContext>(0);
}

AergiaCpp14Parser::DecltypespecifierContext* AergiaCpp14Parser::PseudodestructornameContext::decltypespecifier() {
  return getRuleContext<AergiaCpp14Parser::DecltypespecifierContext>(0);
}


size_t AergiaCpp14Parser::PseudodestructornameContext::getRuleIndex() const {
  return AergiaCpp14Parser::RulePseudodestructorname;
}

void AergiaCpp14Parser::PseudodestructornameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPseudodestructorname(this);
}

void AergiaCpp14Parser::PseudodestructornameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPseudodestructorname(this);
}


antlrcpp::Any AergiaCpp14Parser::PseudodestructornameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitPseudodestructorname(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::PseudodestructornameContext* AergiaCpp14Parser::pseudodestructorname() {
  PseudodestructornameContext *_localctx = _tracker.createInstance<PseudodestructornameContext>(_ctx, getState());
  enterRule(_localctx, 64, AergiaCpp14Parser::RulePseudodestructorname);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(760);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(739);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
      case 1: {
        setState(738);
        nestednamespecifier(0);
        break;
      }

      }
      setState(741);
      thetypename();
      setState(742);
      match(AergiaCpp14Parser::Doublecolon);
      setState(743);
      match(AergiaCpp14Parser::Tilde);
      setState(744);
      thetypename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(746);
      nestednamespecifier(0);
      setState(747);
      match(AergiaCpp14Parser::Template);
      setState(748);
      simpletemplateid();
      setState(749);
      match(AergiaCpp14Parser::Doublecolon);
      setState(750);
      match(AergiaCpp14Parser::Tilde);
      setState(751);
      thetypename();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(754);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Decltype || _la == AergiaCpp14Parser::Doublecolon

      || _la == AergiaCpp14Parser::Identifier) {
        setState(753);
        nestednamespecifier(0);
      }
      setState(756);
      match(AergiaCpp14Parser::Tilde);
      setState(757);
      thetypename();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(758);
      match(AergiaCpp14Parser::Tilde);
      setState(759);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::UnaryexpressionContext::UnaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::PostfixexpressionContext* AergiaCpp14Parser::UnaryexpressionContext::postfixexpression() {
  return getRuleContext<AergiaCpp14Parser::PostfixexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryexpressionContext::PlusPlus() {
  return getToken(AergiaCpp14Parser::PlusPlus, 0);
}

AergiaCpp14Parser::CastexpressionContext* AergiaCpp14Parser::UnaryexpressionContext::castexpression() {
  return getRuleContext<AergiaCpp14Parser::CastexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryexpressionContext::MinusMinus() {
  return getToken(AergiaCpp14Parser::MinusMinus, 0);
}

AergiaCpp14Parser::UnaryoperatorContext* AergiaCpp14Parser::UnaryexpressionContext::unaryoperator() {
  return getRuleContext<AergiaCpp14Parser::UnaryoperatorContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryexpressionContext::Sizeof() {
  return getToken(AergiaCpp14Parser::Sizeof, 0);
}

AergiaCpp14Parser::UnaryexpressionContext* AergiaCpp14Parser::UnaryexpressionContext::unaryexpression() {
  return getRuleContext<AergiaCpp14Parser::UnaryexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryexpressionContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ThetypeidContext* AergiaCpp14Parser::UnaryexpressionContext::thetypeid() {
  return getRuleContext<AergiaCpp14Parser::ThetypeidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryexpressionContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryexpressionContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryexpressionContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryexpressionContext::Alignof() {
  return getToken(AergiaCpp14Parser::Alignof, 0);
}

AergiaCpp14Parser::NoexceptexpressionContext* AergiaCpp14Parser::UnaryexpressionContext::noexceptexpression() {
  return getRuleContext<AergiaCpp14Parser::NoexceptexpressionContext>(0);
}

AergiaCpp14Parser::NewexpressionContext* AergiaCpp14Parser::UnaryexpressionContext::newexpression() {
  return getRuleContext<AergiaCpp14Parser::NewexpressionContext>(0);
}

AergiaCpp14Parser::DeleteexpressionContext* AergiaCpp14Parser::UnaryexpressionContext::deleteexpression() {
  return getRuleContext<AergiaCpp14Parser::DeleteexpressionContext>(0);
}


size_t AergiaCpp14Parser::UnaryexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleUnaryexpression;
}

void AergiaCpp14Parser::UnaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryexpression(this);
}

void AergiaCpp14Parser::UnaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::UnaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitUnaryexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::UnaryexpressionContext* AergiaCpp14Parser::unaryexpression() {
  UnaryexpressionContext *_localctx = _tracker.createInstance<UnaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 66, AergiaCpp14Parser::RuleUnaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(790);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(762);
      postfixexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(763);
      match(AergiaCpp14Parser::PlusPlus);
      setState(764);
      castexpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(765);
      match(AergiaCpp14Parser::MinusMinus);
      setState(766);
      castexpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(767);
      unaryoperator();
      setState(768);
      castexpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(770);
      match(AergiaCpp14Parser::Sizeof);
      setState(771);
      unaryexpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(772);
      match(AergiaCpp14Parser::Sizeof);
      setState(773);
      match(AergiaCpp14Parser::LeftParen);
      setState(774);
      thetypeid();
      setState(775);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(777);
      match(AergiaCpp14Parser::Sizeof);
      setState(778);
      match(AergiaCpp14Parser::Ellipsis);
      setState(779);
      match(AergiaCpp14Parser::LeftParen);
      setState(780);
      match(AergiaCpp14Parser::Identifier);
      setState(781);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(782);
      match(AergiaCpp14Parser::Alignof);
      setState(783);
      match(AergiaCpp14Parser::LeftParen);
      setState(784);
      thetypeid();
      setState(785);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(787);
      noexceptexpression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(788);
      newexpression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(789);
      deleteexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryoperatorContext ------------------------------------------------------------------

AergiaCpp14Parser::UnaryoperatorContext::UnaryoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::UnaryoperatorContext::Or() {
  return getToken(AergiaCpp14Parser::Or, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryoperatorContext::Star() {
  return getToken(AergiaCpp14Parser::Star, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryoperatorContext::And() {
  return getToken(AergiaCpp14Parser::And, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryoperatorContext::Plus() {
  return getToken(AergiaCpp14Parser::Plus, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryoperatorContext::Tilde() {
  return getToken(AergiaCpp14Parser::Tilde, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UnaryoperatorContext::Minus() {
  return getToken(AergiaCpp14Parser::Minus, 0);
}


size_t AergiaCpp14Parser::UnaryoperatorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleUnaryoperator;
}

void AergiaCpp14Parser::UnaryoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryoperator(this);
}

void AergiaCpp14Parser::UnaryoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryoperator(this);
}


antlrcpp::Any AergiaCpp14Parser::UnaryoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitUnaryoperator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::UnaryoperatorContext* AergiaCpp14Parser::unaryoperator() {
  UnaryoperatorContext *_localctx = _tracker.createInstance<UnaryoperatorContext>(_ctx, getState());
  enterRule(_localctx, 68, AergiaCpp14Parser::RuleUnaryoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(792);
    _la = _input->LA(1);
    if (!(_la == AergiaCpp14Parser::T__8

    || _la == AergiaCpp14Parser::T__9 || ((((_la - 99) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 99)) & ((1ULL << (AergiaCpp14Parser::Plus - 99))
      | (1ULL << (AergiaCpp14Parser::Minus - 99))
      | (1ULL << (AergiaCpp14Parser::Star - 99))
      | (1ULL << (AergiaCpp14Parser::And - 99))
      | (1ULL << (AergiaCpp14Parser::Or - 99))
      | (1ULL << (AergiaCpp14Parser::Tilde - 99)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::NewexpressionContext::NewexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::NewexpressionContext::New() {
  return getToken(AergiaCpp14Parser::New, 0);
}

AergiaCpp14Parser::NewtypeidContext* AergiaCpp14Parser::NewexpressionContext::newtypeid() {
  return getRuleContext<AergiaCpp14Parser::NewtypeidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NewexpressionContext::Doublecolon() {
  return getToken(AergiaCpp14Parser::Doublecolon, 0);
}

AergiaCpp14Parser::NewplacementContext* AergiaCpp14Parser::NewexpressionContext::newplacement() {
  return getRuleContext<AergiaCpp14Parser::NewplacementContext>(0);
}

AergiaCpp14Parser::NewinitializerContext* AergiaCpp14Parser::NewexpressionContext::newinitializer() {
  return getRuleContext<AergiaCpp14Parser::NewinitializerContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NewexpressionContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ThetypeidContext* AergiaCpp14Parser::NewexpressionContext::thetypeid() {
  return getRuleContext<AergiaCpp14Parser::ThetypeidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NewexpressionContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}


size_t AergiaCpp14Parser::NewexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNewexpression;
}

void AergiaCpp14Parser::NewexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewexpression(this);
}

void AergiaCpp14Parser::NewexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::NewexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNewexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NewexpressionContext* AergiaCpp14Parser::newexpression() {
  NewexpressionContext *_localctx = _tracker.createInstance<NewexpressionContext>(_ctx, getState());
  enterRule(_localctx, 70, AergiaCpp14Parser::RuleNewexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(818);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(795);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Doublecolon) {
        setState(794);
        match(AergiaCpp14Parser::Doublecolon);
      }
      setState(797);
      match(AergiaCpp14Parser::New);
      setState(799);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::LeftParen) {
        setState(798);
        newplacement();
      }
      setState(801);
      newtypeid();
      setState(803);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(802);
        newinitializer();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(806);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Doublecolon) {
        setState(805);
        match(AergiaCpp14Parser::Doublecolon);
      }
      setState(808);
      match(AergiaCpp14Parser::New);
      setState(810);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
      case 1: {
        setState(809);
        newplacement();
        break;
      }

      }
      setState(812);
      match(AergiaCpp14Parser::LeftParen);
      setState(813);
      thetypeid();
      setState(814);
      match(AergiaCpp14Parser::RightParen);
      setState(816);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
      case 1: {
        setState(815);
        newinitializer();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewplacementContext ------------------------------------------------------------------

AergiaCpp14Parser::NewplacementContext::NewplacementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::NewplacementContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ExpressionlistContext* AergiaCpp14Parser::NewplacementContext::expressionlist() {
  return getRuleContext<AergiaCpp14Parser::ExpressionlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NewplacementContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}


size_t AergiaCpp14Parser::NewplacementContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNewplacement;
}

void AergiaCpp14Parser::NewplacementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewplacement(this);
}

void AergiaCpp14Parser::NewplacementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewplacement(this);
}


antlrcpp::Any AergiaCpp14Parser::NewplacementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNewplacement(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NewplacementContext* AergiaCpp14Parser::newplacement() {
  NewplacementContext *_localctx = _tracker.createInstance<NewplacementContext>(_ctx, getState());
  enterRule(_localctx, 72, AergiaCpp14Parser::RuleNewplacement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(820);
    match(AergiaCpp14Parser::LeftParen);
    setState(821);
    expressionlist();
    setState(822);
    match(AergiaCpp14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewtypeidContext ------------------------------------------------------------------

AergiaCpp14Parser::NewtypeidContext::NewtypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::TypespecifierseqContext* AergiaCpp14Parser::NewtypeidContext::typespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::TypespecifierseqContext>(0);
}

AergiaCpp14Parser::NewdeclaratorContext* AergiaCpp14Parser::NewtypeidContext::newdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NewdeclaratorContext>(0);
}


size_t AergiaCpp14Parser::NewtypeidContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNewtypeid;
}

void AergiaCpp14Parser::NewtypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewtypeid(this);
}

void AergiaCpp14Parser::NewtypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewtypeid(this);
}


antlrcpp::Any AergiaCpp14Parser::NewtypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNewtypeid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NewtypeidContext* AergiaCpp14Parser::newtypeid() {
  NewtypeidContext *_localctx = _tracker.createInstance<NewtypeidContext>(_ctx, getState());
  enterRule(_localctx, 74, AergiaCpp14Parser::RuleNewtypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(824);
    typespecifierseq();
    setState(826);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(825);
      newdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewdeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::NewdeclaratorContext::NewdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::PtroperatorContext* AergiaCpp14Parser::NewdeclaratorContext::ptroperator() {
  return getRuleContext<AergiaCpp14Parser::PtroperatorContext>(0);
}

AergiaCpp14Parser::NewdeclaratorContext* AergiaCpp14Parser::NewdeclaratorContext::newdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NewdeclaratorContext>(0);
}

AergiaCpp14Parser::NoptrnewdeclaratorContext* AergiaCpp14Parser::NewdeclaratorContext::noptrnewdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NoptrnewdeclaratorContext>(0);
}


size_t AergiaCpp14Parser::NewdeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNewdeclarator;
}

void AergiaCpp14Parser::NewdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewdeclarator(this);
}

void AergiaCpp14Parser::NewdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewdeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::NewdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNewdeclarator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NewdeclaratorContext* AergiaCpp14Parser::newdeclarator() {
  NewdeclaratorContext *_localctx = _tracker.createInstance<NewdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 76, AergiaCpp14Parser::RuleNewdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(833);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::T__10:
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Star:
      case AergiaCpp14Parser::And:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(828);
        ptroperator();
        setState(830);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
        case 1: {
          setState(829);
          newdeclarator();
          break;
        }

        }
        break;
      }

      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(832);
        noptrnewdeclarator(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrnewdeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::NoptrnewdeclaratorContext::NoptrnewdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::NoptrnewdeclaratorContext::LeftBracket() {
  return getToken(AergiaCpp14Parser::LeftBracket, 0);
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::NoptrnewdeclaratorContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NoptrnewdeclaratorContext::RightBracket() {
  return getToken(AergiaCpp14Parser::RightBracket, 0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::NoptrnewdeclaratorContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::NoptrnewdeclaratorContext* AergiaCpp14Parser::NoptrnewdeclaratorContext::noptrnewdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NoptrnewdeclaratorContext>(0);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::NoptrnewdeclaratorContext::constantexpression() {
  return getRuleContext<AergiaCpp14Parser::ConstantexpressionContext>(0);
}


size_t AergiaCpp14Parser::NoptrnewdeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNoptrnewdeclarator;
}

void AergiaCpp14Parser::NoptrnewdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrnewdeclarator(this);
}

void AergiaCpp14Parser::NoptrnewdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrnewdeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::NoptrnewdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNoptrnewdeclarator(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::NoptrnewdeclaratorContext* AergiaCpp14Parser::noptrnewdeclarator() {
   return noptrnewdeclarator(0);
}

AergiaCpp14Parser::NoptrnewdeclaratorContext* AergiaCpp14Parser::noptrnewdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::NoptrnewdeclaratorContext *_localctx = _tracker.createInstance<NoptrnewdeclaratorContext>(_ctx, parentState);
  AergiaCpp14Parser::NoptrnewdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, AergiaCpp14Parser::RuleNoptrnewdeclarator, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(836);
    match(AergiaCpp14Parser::LeftBracket);
    setState(837);
    expression(0);
    setState(838);
    match(AergiaCpp14Parser::RightBracket);
    setState(840);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(839);
      attributespecifierseq(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(851);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoptrnewdeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoptrnewdeclarator);
        setState(842);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(843);
        match(AergiaCpp14Parser::LeftBracket);
        setState(844);
        constantexpression();
        setState(845);
        match(AergiaCpp14Parser::RightBracket);
        setState(847);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
        case 1: {
          setState(846);
          attributespecifierseq(0);
          break;
        }

        } 
      }
      setState(853);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NewinitializerContext ------------------------------------------------------------------

AergiaCpp14Parser::NewinitializerContext::NewinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::NewinitializerContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::NewinitializerContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::ExpressionlistContext* AergiaCpp14Parser::NewinitializerContext::expressionlist() {
  return getRuleContext<AergiaCpp14Parser::ExpressionlistContext>(0);
}

AergiaCpp14Parser::BracedinitlistContext* AergiaCpp14Parser::NewinitializerContext::bracedinitlist() {
  return getRuleContext<AergiaCpp14Parser::BracedinitlistContext>(0);
}


size_t AergiaCpp14Parser::NewinitializerContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNewinitializer;
}

void AergiaCpp14Parser::NewinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewinitializer(this);
}

void AergiaCpp14Parser::NewinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewinitializer(this);
}


antlrcpp::Any AergiaCpp14Parser::NewinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNewinitializer(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NewinitializerContext* AergiaCpp14Parser::newinitializer() {
  NewinitializerContext *_localctx = _tracker.createInstance<NewinitializerContext>(_ctx, getState());
  enterRule(_localctx, 80, AergiaCpp14Parser::RuleNewinitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(860);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(854);
        match(AergiaCpp14Parser::LeftParen);
        setState(856);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
          | (1ULL << AergiaCpp14Parser::T__8)
          | (1ULL << AergiaCpp14Parser::T__9)
          | (1ULL << AergiaCpp14Parser::Alignof)
          | (1ULL << AergiaCpp14Parser::Auto)
          | (1ULL << AergiaCpp14Parser::Bool)
          | (1ULL << AergiaCpp14Parser::Char)
          | (1ULL << AergiaCpp14Parser::Char16)
          | (1ULL << AergiaCpp14Parser::Char32)
          | (1ULL << AergiaCpp14Parser::Const_cast)
          | (1ULL << AergiaCpp14Parser::Decltype)
          | (1ULL << AergiaCpp14Parser::Delete)
          | (1ULL << AergiaCpp14Parser::Double)
          | (1ULL << AergiaCpp14Parser::Dynamic_cast)
          | (1ULL << AergiaCpp14Parser::False)
          | (1ULL << AergiaCpp14Parser::Float)
          | (1ULL << AergiaCpp14Parser::Int)
          | (1ULL << AergiaCpp14Parser::Long)
          | (1ULL << AergiaCpp14Parser::New)
          | (1ULL << AergiaCpp14Parser::Noexcept)
          | (1ULL << AergiaCpp14Parser::Nullptr)
          | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
          | (1ULL << (AergiaCpp14Parser::Short - 66))
          | (1ULL << (AergiaCpp14Parser::Signed - 66))
          | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
          | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
          | (1ULL << (AergiaCpp14Parser::This - 66))
          | (1ULL << (AergiaCpp14Parser::Throw - 66))
          | (1ULL << (AergiaCpp14Parser::True - 66))
          | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
          | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
          | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
          | (1ULL << (AergiaCpp14Parser::Void - 66))
          | (1ULL << (AergiaCpp14Parser::Wchar - 66))
          | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
          | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
          | (1ULL << (AergiaCpp14Parser::LeftBrace - 66))
          | (1ULL << (AergiaCpp14Parser::Plus - 66))
          | (1ULL << (AergiaCpp14Parser::Minus - 66))
          | (1ULL << (AergiaCpp14Parser::Star - 66))
          | (1ULL << (AergiaCpp14Parser::And - 66))
          | (1ULL << (AergiaCpp14Parser::Or - 66))
          | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
          | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
          | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
          | (1ULL << (AergiaCpp14Parser::Identifier - 130))
          | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
          | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
          | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
          | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
          | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
          | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
          | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
          | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
          setState(855);
          expressionlist();
        }
        setState(858);
        match(AergiaCpp14Parser::RightParen);
        break;
      }

      case AergiaCpp14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(859);
        bracedinitlist();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::DeleteexpressionContext::DeleteexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::DeleteexpressionContext::Delete() {
  return getToken(AergiaCpp14Parser::Delete, 0);
}

AergiaCpp14Parser::CastexpressionContext* AergiaCpp14Parser::DeleteexpressionContext::castexpression() {
  return getRuleContext<AergiaCpp14Parser::CastexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::DeleteexpressionContext::Doublecolon() {
  return getToken(AergiaCpp14Parser::Doublecolon, 0);
}

tree::TerminalNode* AergiaCpp14Parser::DeleteexpressionContext::LeftBracket() {
  return getToken(AergiaCpp14Parser::LeftBracket, 0);
}

tree::TerminalNode* AergiaCpp14Parser::DeleteexpressionContext::RightBracket() {
  return getToken(AergiaCpp14Parser::RightBracket, 0);
}


size_t AergiaCpp14Parser::DeleteexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleDeleteexpression;
}

void AergiaCpp14Parser::DeleteexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteexpression(this);
}

void AergiaCpp14Parser::DeleteexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::DeleteexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitDeleteexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::DeleteexpressionContext* AergiaCpp14Parser::deleteexpression() {
  DeleteexpressionContext *_localctx = _tracker.createInstance<DeleteexpressionContext>(_ctx, getState());
  enterRule(_localctx, 82, AergiaCpp14Parser::RuleDeleteexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(874);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(863);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Doublecolon) {
        setState(862);
        match(AergiaCpp14Parser::Doublecolon);
      }
      setState(865);
      match(AergiaCpp14Parser::Delete);
      setState(866);
      castexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(868);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Doublecolon) {
        setState(867);
        match(AergiaCpp14Parser::Doublecolon);
      }
      setState(870);
      match(AergiaCpp14Parser::Delete);
      setState(871);
      match(AergiaCpp14Parser::LeftBracket);
      setState(872);
      match(AergiaCpp14Parser::RightBracket);
      setState(873);
      castexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoexceptexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::NoexceptexpressionContext::NoexceptexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::NoexceptexpressionContext::Noexcept() {
  return getToken(AergiaCpp14Parser::Noexcept, 0);
}

tree::TerminalNode* AergiaCpp14Parser::NoexceptexpressionContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::NoexceptexpressionContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NoexceptexpressionContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}


size_t AergiaCpp14Parser::NoexceptexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNoexceptexpression;
}

void AergiaCpp14Parser::NoexceptexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoexceptexpression(this);
}

void AergiaCpp14Parser::NoexceptexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoexceptexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::NoexceptexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNoexceptexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NoexceptexpressionContext* AergiaCpp14Parser::noexceptexpression() {
  NoexceptexpressionContext *_localctx = _tracker.createInstance<NoexceptexpressionContext>(_ctx, getState());
  enterRule(_localctx, 84, AergiaCpp14Parser::RuleNoexceptexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(876);
    match(AergiaCpp14Parser::Noexcept);
    setState(877);
    match(AergiaCpp14Parser::LeftParen);
    setState(878);
    expression(0);
    setState(879);
    match(AergiaCpp14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::CastexpressionContext::CastexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::UnaryexpressionContext* AergiaCpp14Parser::CastexpressionContext::unaryexpression() {
  return getRuleContext<AergiaCpp14Parser::UnaryexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::CastexpressionContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ThetypeidContext* AergiaCpp14Parser::CastexpressionContext::thetypeid() {
  return getRuleContext<AergiaCpp14Parser::ThetypeidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::CastexpressionContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::CastexpressionContext* AergiaCpp14Parser::CastexpressionContext::castexpression() {
  return getRuleContext<AergiaCpp14Parser::CastexpressionContext>(0);
}


size_t AergiaCpp14Parser::CastexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleCastexpression;
}

void AergiaCpp14Parser::CastexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastexpression(this);
}

void AergiaCpp14Parser::CastexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::CastexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitCastexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::CastexpressionContext* AergiaCpp14Parser::castexpression() {
  CastexpressionContext *_localctx = _tracker.createInstance<CastexpressionContext>(_ctx, getState());
  enterRule(_localctx, 86, AergiaCpp14Parser::RuleCastexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(887);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(881);
      unaryexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(882);
      match(AergiaCpp14Parser::LeftParen);
      setState(883);
      thetypeid();
      setState(884);
      match(AergiaCpp14Parser::RightParen);
      setState(885);
      castexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PmexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::PmexpressionContext::PmexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::CastexpressionContext* AergiaCpp14Parser::PmexpressionContext::castexpression() {
  return getRuleContext<AergiaCpp14Parser::CastexpressionContext>(0);
}

AergiaCpp14Parser::PmexpressionContext* AergiaCpp14Parser::PmexpressionContext::pmexpression() {
  return getRuleContext<AergiaCpp14Parser::PmexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PmexpressionContext::DotStar() {
  return getToken(AergiaCpp14Parser::DotStar, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PmexpressionContext::ArrowStar() {
  return getToken(AergiaCpp14Parser::ArrowStar, 0);
}


size_t AergiaCpp14Parser::PmexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RulePmexpression;
}

void AergiaCpp14Parser::PmexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPmexpression(this);
}

void AergiaCpp14Parser::PmexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPmexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::PmexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitPmexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::PmexpressionContext* AergiaCpp14Parser::pmexpression() {
   return pmexpression(0);
}

AergiaCpp14Parser::PmexpressionContext* AergiaCpp14Parser::pmexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::PmexpressionContext *_localctx = _tracker.createInstance<PmexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::PmexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 88;
  enterRecursionRule(_localctx, 88, AergiaCpp14Parser::RulePmexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(890);
    castexpression();
    _ctx->stop = _input->LT(-1);
    setState(900);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(898);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PmexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePmexpression);
          setState(892);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(893);
          match(AergiaCpp14Parser::DotStar);
          setState(894);
          castexpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PmexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePmexpression);
          setState(895);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(896);
          match(AergiaCpp14Parser::ArrowStar);
          setState(897);
          castexpression();
          break;
        }

        } 
      }
      setState(902);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::MultiplicativeexpressionContext::MultiplicativeexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::PmexpressionContext* AergiaCpp14Parser::MultiplicativeexpressionContext::pmexpression() {
  return getRuleContext<AergiaCpp14Parser::PmexpressionContext>(0);
}

AergiaCpp14Parser::MultiplicativeexpressionContext* AergiaCpp14Parser::MultiplicativeexpressionContext::multiplicativeexpression() {
  return getRuleContext<AergiaCpp14Parser::MultiplicativeexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::MultiplicativeexpressionContext::Star() {
  return getToken(AergiaCpp14Parser::Star, 0);
}

tree::TerminalNode* AergiaCpp14Parser::MultiplicativeexpressionContext::Div() {
  return getToken(AergiaCpp14Parser::Div, 0);
}

tree::TerminalNode* AergiaCpp14Parser::MultiplicativeexpressionContext::Mod() {
  return getToken(AergiaCpp14Parser::Mod, 0);
}


size_t AergiaCpp14Parser::MultiplicativeexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleMultiplicativeexpression;
}

void AergiaCpp14Parser::MultiplicativeexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeexpression(this);
}

void AergiaCpp14Parser::MultiplicativeexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::MultiplicativeexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitMultiplicativeexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::MultiplicativeexpressionContext* AergiaCpp14Parser::multiplicativeexpression() {
   return multiplicativeexpression(0);
}

AergiaCpp14Parser::MultiplicativeexpressionContext* AergiaCpp14Parser::multiplicativeexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::MultiplicativeexpressionContext *_localctx = _tracker.createInstance<MultiplicativeexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::MultiplicativeexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 90;
  enterRecursionRule(_localctx, 90, AergiaCpp14Parser::RuleMultiplicativeexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(904);
    pmexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(917);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(915);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(906);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(907);
          match(AergiaCpp14Parser::Star);
          setState(908);
          pmexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(909);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(910);
          match(AergiaCpp14Parser::Div);
          setState(911);
          pmexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(912);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(913);
          match(AergiaCpp14Parser::Mod);
          setState(914);
          pmexpression(0);
          break;
        }

        } 
      }
      setState(919);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::AdditiveexpressionContext::AdditiveexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::MultiplicativeexpressionContext* AergiaCpp14Parser::AdditiveexpressionContext::multiplicativeexpression() {
  return getRuleContext<AergiaCpp14Parser::MultiplicativeexpressionContext>(0);
}

AergiaCpp14Parser::AdditiveexpressionContext* AergiaCpp14Parser::AdditiveexpressionContext::additiveexpression() {
  return getRuleContext<AergiaCpp14Parser::AdditiveexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::AdditiveexpressionContext::Plus() {
  return getToken(AergiaCpp14Parser::Plus, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AdditiveexpressionContext::Minus() {
  return getToken(AergiaCpp14Parser::Minus, 0);
}


size_t AergiaCpp14Parser::AdditiveexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAdditiveexpression;
}

void AergiaCpp14Parser::AdditiveexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveexpression(this);
}

void AergiaCpp14Parser::AdditiveexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::AdditiveexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAdditiveexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::AdditiveexpressionContext* AergiaCpp14Parser::additiveexpression() {
   return additiveexpression(0);
}

AergiaCpp14Parser::AdditiveexpressionContext* AergiaCpp14Parser::additiveexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::AdditiveexpressionContext *_localctx = _tracker.createInstance<AdditiveexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::AdditiveexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 92;
  enterRecursionRule(_localctx, 92, AergiaCpp14Parser::RuleAdditiveexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(921);
    multiplicativeexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(931);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(929);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(923);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(924);
          match(AergiaCpp14Parser::Plus);
          setState(925);
          multiplicativeexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(926);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(927);
          match(AergiaCpp14Parser::Minus);
          setState(928);
          multiplicativeexpression(0);
          break;
        }

        } 
      }
      setState(933);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::ShiftexpressionContext::ShiftexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AdditiveexpressionContext* AergiaCpp14Parser::ShiftexpressionContext::additiveexpression() {
  return getRuleContext<AergiaCpp14Parser::AdditiveexpressionContext>(0);
}

AergiaCpp14Parser::ShiftexpressionContext* AergiaCpp14Parser::ShiftexpressionContext::shiftexpression() {
  return getRuleContext<AergiaCpp14Parser::ShiftexpressionContext>(0);
}

AergiaCpp14Parser::ShiftoperatorContext* AergiaCpp14Parser::ShiftexpressionContext::shiftoperator() {
  return getRuleContext<AergiaCpp14Parser::ShiftoperatorContext>(0);
}


size_t AergiaCpp14Parser::ShiftexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleShiftexpression;
}

void AergiaCpp14Parser::ShiftexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftexpression(this);
}

void AergiaCpp14Parser::ShiftexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::ShiftexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitShiftexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::ShiftexpressionContext* AergiaCpp14Parser::shiftexpression() {
   return shiftexpression(0);
}

AergiaCpp14Parser::ShiftexpressionContext* AergiaCpp14Parser::shiftexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::ShiftexpressionContext *_localctx = _tracker.createInstance<ShiftexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::ShiftexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 94;
  enterRecursionRule(_localctx, 94, AergiaCpp14Parser::RuleShiftexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(935);
    additiveexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(943);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ShiftexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleShiftexpression);
        setState(937);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(938);
        shiftoperator();
        setState(939);
        additiveexpression(0); 
      }
      setState(945);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftoperatorContext ------------------------------------------------------------------

AergiaCpp14Parser::ShiftoperatorContext::ShiftoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::ShiftoperatorContext::RightShift() {
  return getToken(AergiaCpp14Parser::RightShift, 0);
}

tree::TerminalNode* AergiaCpp14Parser::ShiftoperatorContext::LeftShift() {
  return getToken(AergiaCpp14Parser::LeftShift, 0);
}


size_t AergiaCpp14Parser::ShiftoperatorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleShiftoperator;
}

void AergiaCpp14Parser::ShiftoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftoperator(this);
}

void AergiaCpp14Parser::ShiftoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftoperator(this);
}


antlrcpp::Any AergiaCpp14Parser::ShiftoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitShiftoperator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ShiftoperatorContext* AergiaCpp14Parser::shiftoperator() {
  ShiftoperatorContext *_localctx = _tracker.createInstance<ShiftoperatorContext>(_ctx, getState());
  enterRule(_localctx, 96, AergiaCpp14Parser::RuleShiftoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(946);
    _la = _input->LA(1);
    if (!(_la == AergiaCpp14Parser::LeftShift

    || _la == AergiaCpp14Parser::RightShift)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::RelationalexpressionContext::RelationalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ShiftexpressionContext* AergiaCpp14Parser::RelationalexpressionContext::shiftexpression() {
  return getRuleContext<AergiaCpp14Parser::ShiftexpressionContext>(0);
}

AergiaCpp14Parser::RelationalexpressionContext* AergiaCpp14Parser::RelationalexpressionContext::relationalexpression() {
  return getRuleContext<AergiaCpp14Parser::RelationalexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::RelationalexpressionContext::Less() {
  return getToken(AergiaCpp14Parser::Less, 0);
}

tree::TerminalNode* AergiaCpp14Parser::RelationalexpressionContext::Greater() {
  return getToken(AergiaCpp14Parser::Greater, 0);
}

tree::TerminalNode* AergiaCpp14Parser::RelationalexpressionContext::LessEqual() {
  return getToken(AergiaCpp14Parser::LessEqual, 0);
}

tree::TerminalNode* AergiaCpp14Parser::RelationalexpressionContext::GreaterEqual() {
  return getToken(AergiaCpp14Parser::GreaterEqual, 0);
}


size_t AergiaCpp14Parser::RelationalexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleRelationalexpression;
}

void AergiaCpp14Parser::RelationalexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalexpression(this);
}

void AergiaCpp14Parser::RelationalexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::RelationalexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitRelationalexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::RelationalexpressionContext* AergiaCpp14Parser::relationalexpression() {
   return relationalexpression(0);
}

AergiaCpp14Parser::RelationalexpressionContext* AergiaCpp14Parser::relationalexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::RelationalexpressionContext *_localctx = _tracker.createInstance<RelationalexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::RelationalexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 98;
  enterRecursionRule(_localctx, 98, AergiaCpp14Parser::RuleRelationalexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(949);
    shiftexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(965);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(963);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(951);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(952);
          match(AergiaCpp14Parser::Less);
          setState(953);
          shiftexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(954);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(955);
          match(AergiaCpp14Parser::Greater);
          setState(956);
          shiftexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(957);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(958);
          match(AergiaCpp14Parser::LessEqual);
          setState(959);
          shiftexpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(960);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(961);
          match(AergiaCpp14Parser::GreaterEqual);
          setState(962);
          shiftexpression(0);
          break;
        }

        } 
      }
      setState(967);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::EqualityexpressionContext::EqualityexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::RelationalexpressionContext* AergiaCpp14Parser::EqualityexpressionContext::relationalexpression() {
  return getRuleContext<AergiaCpp14Parser::RelationalexpressionContext>(0);
}

AergiaCpp14Parser::EqualityexpressionContext* AergiaCpp14Parser::EqualityexpressionContext::equalityexpression() {
  return getRuleContext<AergiaCpp14Parser::EqualityexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::EqualityexpressionContext::Equal() {
  return getToken(AergiaCpp14Parser::Equal, 0);
}

tree::TerminalNode* AergiaCpp14Parser::EqualityexpressionContext::NotEqual() {
  return getToken(AergiaCpp14Parser::NotEqual, 0);
}


size_t AergiaCpp14Parser::EqualityexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleEqualityexpression;
}

void AergiaCpp14Parser::EqualityexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityexpression(this);
}

void AergiaCpp14Parser::EqualityexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::EqualityexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitEqualityexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::EqualityexpressionContext* AergiaCpp14Parser::equalityexpression() {
   return equalityexpression(0);
}

AergiaCpp14Parser::EqualityexpressionContext* AergiaCpp14Parser::equalityexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::EqualityexpressionContext *_localctx = _tracker.createInstance<EqualityexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::EqualityexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 100;
  enterRecursionRule(_localctx, 100, AergiaCpp14Parser::RuleEqualityexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(969);
    relationalexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(979);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(977);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(971);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(972);
          match(AergiaCpp14Parser::Equal);
          setState(973);
          relationalexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(974);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(975);
          match(AergiaCpp14Parser::NotEqual);
          setState(976);
          relationalexpression(0);
          break;
        }

        } 
      }
      setState(981);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::AndexpressionContext::AndexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::EqualityexpressionContext* AergiaCpp14Parser::AndexpressionContext::equalityexpression() {
  return getRuleContext<AergiaCpp14Parser::EqualityexpressionContext>(0);
}

AergiaCpp14Parser::AndexpressionContext* AergiaCpp14Parser::AndexpressionContext::andexpression() {
  return getRuleContext<AergiaCpp14Parser::AndexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::AndexpressionContext::And() {
  return getToken(AergiaCpp14Parser::And, 0);
}


size_t AergiaCpp14Parser::AndexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAndexpression;
}

void AergiaCpp14Parser::AndexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndexpression(this);
}

void AergiaCpp14Parser::AndexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::AndexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAndexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::AndexpressionContext* AergiaCpp14Parser::andexpression() {
   return andexpression(0);
}

AergiaCpp14Parser::AndexpressionContext* AergiaCpp14Parser::andexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::AndexpressionContext *_localctx = _tracker.createInstance<AndexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::AndexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 102;
  enterRecursionRule(_localctx, 102, AergiaCpp14Parser::RuleAndexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(983);
    equalityexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(990);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndexpression);
        setState(985);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(986);
        match(AergiaCpp14Parser::And);
        setState(987);
        equalityexpression(0); 
      }
      setState(992);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveorexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::ExclusiveorexpressionContext::ExclusiveorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AndexpressionContext* AergiaCpp14Parser::ExclusiveorexpressionContext::andexpression() {
  return getRuleContext<AergiaCpp14Parser::AndexpressionContext>(0);
}

AergiaCpp14Parser::ExclusiveorexpressionContext* AergiaCpp14Parser::ExclusiveorexpressionContext::exclusiveorexpression() {
  return getRuleContext<AergiaCpp14Parser::ExclusiveorexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ExclusiveorexpressionContext::Caret() {
  return getToken(AergiaCpp14Parser::Caret, 0);
}


size_t AergiaCpp14Parser::ExclusiveorexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleExclusiveorexpression;
}

void AergiaCpp14Parser::ExclusiveorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveorexpression(this);
}

void AergiaCpp14Parser::ExclusiveorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveorexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::ExclusiveorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitExclusiveorexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::ExclusiveorexpressionContext* AergiaCpp14Parser::exclusiveorexpression() {
   return exclusiveorexpression(0);
}

AergiaCpp14Parser::ExclusiveorexpressionContext* AergiaCpp14Parser::exclusiveorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::ExclusiveorexpressionContext *_localctx = _tracker.createInstance<ExclusiveorexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::ExclusiveorexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 104;
  enterRecursionRule(_localctx, 104, AergiaCpp14Parser::RuleExclusiveorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(994);
    andexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(1001);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveorexpression);
        setState(996);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(997);
        match(AergiaCpp14Parser::Caret);
        setState(998);
        andexpression(0); 
      }
      setState(1003);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InclusiveorexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::InclusiveorexpressionContext::InclusiveorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ExclusiveorexpressionContext* AergiaCpp14Parser::InclusiveorexpressionContext::exclusiveorexpression() {
  return getRuleContext<AergiaCpp14Parser::ExclusiveorexpressionContext>(0);
}

AergiaCpp14Parser::InclusiveorexpressionContext* AergiaCpp14Parser::InclusiveorexpressionContext::inclusiveorexpression() {
  return getRuleContext<AergiaCpp14Parser::InclusiveorexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::InclusiveorexpressionContext::Or() {
  return getToken(AergiaCpp14Parser::Or, 0);
}


size_t AergiaCpp14Parser::InclusiveorexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleInclusiveorexpression;
}

void AergiaCpp14Parser::InclusiveorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusiveorexpression(this);
}

void AergiaCpp14Parser::InclusiveorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusiveorexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::InclusiveorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitInclusiveorexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::InclusiveorexpressionContext* AergiaCpp14Parser::inclusiveorexpression() {
   return inclusiveorexpression(0);
}

AergiaCpp14Parser::InclusiveorexpressionContext* AergiaCpp14Parser::inclusiveorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::InclusiveorexpressionContext *_localctx = _tracker.createInstance<InclusiveorexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::InclusiveorexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 106;
  enterRecursionRule(_localctx, 106, AergiaCpp14Parser::RuleInclusiveorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1005);
    exclusiveorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(1012);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveorexpression);
        setState(1007);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1008);
        match(AergiaCpp14Parser::Or);
        setState(1009);
        exclusiveorexpression(0); 
      }
      setState(1014);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalandexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::LogicalandexpressionContext::LogicalandexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::InclusiveorexpressionContext* AergiaCpp14Parser::LogicalandexpressionContext::inclusiveorexpression() {
  return getRuleContext<AergiaCpp14Parser::InclusiveorexpressionContext>(0);
}

AergiaCpp14Parser::LogicalandexpressionContext* AergiaCpp14Parser::LogicalandexpressionContext::logicalandexpression() {
  return getRuleContext<AergiaCpp14Parser::LogicalandexpressionContext>(0);
}


size_t AergiaCpp14Parser::LogicalandexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleLogicalandexpression;
}

void AergiaCpp14Parser::LogicalandexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalandexpression(this);
}

void AergiaCpp14Parser::LogicalandexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalandexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::LogicalandexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitLogicalandexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::LogicalandexpressionContext* AergiaCpp14Parser::logicalandexpression() {
   return logicalandexpression(0);
}

AergiaCpp14Parser::LogicalandexpressionContext* AergiaCpp14Parser::logicalandexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::LogicalandexpressionContext *_localctx = _tracker.createInstance<LogicalandexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::LogicalandexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 108;
  enterRecursionRule(_localctx, 108, AergiaCpp14Parser::RuleLogicalandexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1016);
    inclusiveorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(1026);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1024);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<LogicalandexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalandexpression);
          setState(1018);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1019);
          match(AergiaCpp14Parser::T__10);
          setState(1020);
          inclusiveorexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<LogicalandexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalandexpression);
          setState(1021);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1022);
          match(AergiaCpp14Parser::T__11);
          setState(1023);
          inclusiveorexpression(0);
          break;
        }

        } 
      }
      setState(1028);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalorexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::LogicalorexpressionContext::LogicalorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::LogicalandexpressionContext* AergiaCpp14Parser::LogicalorexpressionContext::logicalandexpression() {
  return getRuleContext<AergiaCpp14Parser::LogicalandexpressionContext>(0);
}

AergiaCpp14Parser::LogicalorexpressionContext* AergiaCpp14Parser::LogicalorexpressionContext::logicalorexpression() {
  return getRuleContext<AergiaCpp14Parser::LogicalorexpressionContext>(0);
}


size_t AergiaCpp14Parser::LogicalorexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleLogicalorexpression;
}

void AergiaCpp14Parser::LogicalorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalorexpression(this);
}

void AergiaCpp14Parser::LogicalorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalorexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::LogicalorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitLogicalorexpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::LogicalorexpressionContext* AergiaCpp14Parser::logicalorexpression() {
   return logicalorexpression(0);
}

AergiaCpp14Parser::LogicalorexpressionContext* AergiaCpp14Parser::logicalorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::LogicalorexpressionContext *_localctx = _tracker.createInstance<LogicalorexpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::LogicalorexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 110;
  enterRecursionRule(_localctx, 110, AergiaCpp14Parser::RuleLogicalorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1030);
    logicalandexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(1040);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1038);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<LogicalorexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalorexpression);
          setState(1032);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1033);
          match(AergiaCpp14Parser::T__12);
          setState(1034);
          logicalandexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<LogicalorexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalorexpression);
          setState(1035);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1036);
          match(AergiaCpp14Parser::T__13);
          setState(1037);
          logicalandexpression(0);
          break;
        }

        } 
      }
      setState(1042);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::ConditionalexpressionContext::ConditionalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::LogicalorexpressionContext* AergiaCpp14Parser::ConditionalexpressionContext::logicalorexpression() {
  return getRuleContext<AergiaCpp14Parser::LogicalorexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ConditionalexpressionContext::Question() {
  return getToken(AergiaCpp14Parser::Question, 0);
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::ConditionalexpressionContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ConditionalexpressionContext::Colon() {
  return getToken(AergiaCpp14Parser::Colon, 0);
}

AergiaCpp14Parser::AssignmentexpressionContext* AergiaCpp14Parser::ConditionalexpressionContext::assignmentexpression() {
  return getRuleContext<AergiaCpp14Parser::AssignmentexpressionContext>(0);
}


size_t AergiaCpp14Parser::ConditionalexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleConditionalexpression;
}

void AergiaCpp14Parser::ConditionalexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalexpression(this);
}

void AergiaCpp14Parser::ConditionalexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::ConditionalexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitConditionalexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ConditionalexpressionContext* AergiaCpp14Parser::conditionalexpression() {
  ConditionalexpressionContext *_localctx = _tracker.createInstance<ConditionalexpressionContext>(_ctx, getState());
  enterRule(_localctx, 112, AergiaCpp14Parser::RuleConditionalexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1050);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1043);
      logicalorexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1044);
      logicalorexpression(0);
      setState(1045);
      match(AergiaCpp14Parser::Question);
      setState(1046);
      expression(0);
      setState(1047);
      match(AergiaCpp14Parser::Colon);
      setState(1048);
      assignmentexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::AssignmentexpressionContext::AssignmentexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ConditionalexpressionContext* AergiaCpp14Parser::AssignmentexpressionContext::conditionalexpression() {
  return getRuleContext<AergiaCpp14Parser::ConditionalexpressionContext>(0);
}

AergiaCpp14Parser::LogicalorexpressionContext* AergiaCpp14Parser::AssignmentexpressionContext::logicalorexpression() {
  return getRuleContext<AergiaCpp14Parser::LogicalorexpressionContext>(0);
}

AergiaCpp14Parser::AssignmentoperatorContext* AergiaCpp14Parser::AssignmentexpressionContext::assignmentoperator() {
  return getRuleContext<AergiaCpp14Parser::AssignmentoperatorContext>(0);
}

AergiaCpp14Parser::InitializerclauseContext* AergiaCpp14Parser::AssignmentexpressionContext::initializerclause() {
  return getRuleContext<AergiaCpp14Parser::InitializerclauseContext>(0);
}

AergiaCpp14Parser::ThrowexpressionContext* AergiaCpp14Parser::AssignmentexpressionContext::throwexpression() {
  return getRuleContext<AergiaCpp14Parser::ThrowexpressionContext>(0);
}


size_t AergiaCpp14Parser::AssignmentexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAssignmentexpression;
}

void AergiaCpp14Parser::AssignmentexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentexpression(this);
}

void AergiaCpp14Parser::AssignmentexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::AssignmentexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAssignmentexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AssignmentexpressionContext* AergiaCpp14Parser::assignmentexpression() {
  AssignmentexpressionContext *_localctx = _tracker.createInstance<AssignmentexpressionContext>(_ctx, getState());
  enterRule(_localctx, 114, AergiaCpp14Parser::RuleAssignmentexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1058);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1052);
      conditionalexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1053);
      logicalorexpression(0);
      setState(1054);
      assignmentoperator();
      setState(1055);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1057);
      throwexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentoperatorContext ------------------------------------------------------------------

AergiaCpp14Parser::AssignmentoperatorContext::AssignmentoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::AssignmentoperatorContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AssignmentoperatorContext::StarAssign() {
  return getToken(AergiaCpp14Parser::StarAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AssignmentoperatorContext::DivAssign() {
  return getToken(AergiaCpp14Parser::DivAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AssignmentoperatorContext::ModAssign() {
  return getToken(AergiaCpp14Parser::ModAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AssignmentoperatorContext::PlusAssign() {
  return getToken(AergiaCpp14Parser::PlusAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AssignmentoperatorContext::MinusAssign() {
  return getToken(AergiaCpp14Parser::MinusAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AssignmentoperatorContext::RightShiftAssign() {
  return getToken(AergiaCpp14Parser::RightShiftAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AssignmentoperatorContext::LeftShiftAssign() {
  return getToken(AergiaCpp14Parser::LeftShiftAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AssignmentoperatorContext::AndAssign() {
  return getToken(AergiaCpp14Parser::AndAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AssignmentoperatorContext::XorAssign() {
  return getToken(AergiaCpp14Parser::XorAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AssignmentoperatorContext::OrAssign() {
  return getToken(AergiaCpp14Parser::OrAssign, 0);
}


size_t AergiaCpp14Parser::AssignmentoperatorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAssignmentoperator;
}

void AergiaCpp14Parser::AssignmentoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentoperator(this);
}

void AergiaCpp14Parser::AssignmentoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentoperator(this);
}


antlrcpp::Any AergiaCpp14Parser::AssignmentoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAssignmentoperator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AssignmentoperatorContext* AergiaCpp14Parser::assignmentoperator() {
  AssignmentoperatorContext *_localctx = _tracker.createInstance<AssignmentoperatorContext>(_ctx, getState());
  enterRule(_localctx, 116, AergiaCpp14Parser::RuleAssignmentoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1060);
    _la = _input->LA(1);
    if (!(((((_la - 109) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 109)) & ((1ULL << (AergiaCpp14Parser::Assign - 109))
      | (1ULL << (AergiaCpp14Parser::PlusAssign - 109))
      | (1ULL << (AergiaCpp14Parser::MinusAssign - 109))
      | (1ULL << (AergiaCpp14Parser::StarAssign - 109))
      | (1ULL << (AergiaCpp14Parser::DivAssign - 109))
      | (1ULL << (AergiaCpp14Parser::ModAssign - 109))
      | (1ULL << (AergiaCpp14Parser::XorAssign - 109))
      | (1ULL << (AergiaCpp14Parser::AndAssign - 109))
      | (1ULL << (AergiaCpp14Parser::OrAssign - 109))
      | (1ULL << (AergiaCpp14Parser::LeftShiftAssign - 109))
      | (1ULL << (AergiaCpp14Parser::RightShiftAssign - 109)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AssignmentexpressionContext* AergiaCpp14Parser::ExpressionContext::assignmentexpression() {
  return getRuleContext<AergiaCpp14Parser::AssignmentexpressionContext>(0);
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::ExpressionContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ExpressionContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::ExpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleExpression;
}

void AergiaCpp14Parser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void AergiaCpp14Parser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any AergiaCpp14Parser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::expression() {
   return expression(0);
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  AergiaCpp14Parser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 118;
  enterRecursionRule(_localctx, 118, AergiaCpp14Parser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1063);
    assignmentexpression();
    _ctx->stop = _input->LT(-1);
    setState(1070);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(1065);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1066);
        match(AergiaCpp14Parser::Comma);
        setState(1067);
        assignmentexpression(); 
      }
      setState(1072);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstantexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::ConstantexpressionContext::ConstantexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ConditionalexpressionContext* AergiaCpp14Parser::ConstantexpressionContext::conditionalexpression() {
  return getRuleContext<AergiaCpp14Parser::ConditionalexpressionContext>(0);
}


size_t AergiaCpp14Parser::ConstantexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleConstantexpression;
}

void AergiaCpp14Parser::ConstantexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantexpression(this);
}

void AergiaCpp14Parser::ConstantexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::ConstantexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitConstantexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::constantexpression() {
  ConstantexpressionContext *_localctx = _tracker.createInstance<ConstantexpressionContext>(_ctx, getState());
  enterRule(_localctx, 120, AergiaCpp14Parser::RuleConstantexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1073);
    conditionalexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

AergiaCpp14Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::LabeledstatementContext* AergiaCpp14Parser::StatementContext::labeledstatement() {
  return getRuleContext<AergiaCpp14Parser::LabeledstatementContext>(0);
}

AergiaCpp14Parser::ExpressionstatementContext* AergiaCpp14Parser::StatementContext::expressionstatement() {
  return getRuleContext<AergiaCpp14Parser::ExpressionstatementContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::StatementContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::CompoundstatementContext* AergiaCpp14Parser::StatementContext::compoundstatement() {
  return getRuleContext<AergiaCpp14Parser::CompoundstatementContext>(0);
}

AergiaCpp14Parser::SelectionstatementContext* AergiaCpp14Parser::StatementContext::selectionstatement() {
  return getRuleContext<AergiaCpp14Parser::SelectionstatementContext>(0);
}

AergiaCpp14Parser::IterationstatementContext* AergiaCpp14Parser::StatementContext::iterationstatement() {
  return getRuleContext<AergiaCpp14Parser::IterationstatementContext>(0);
}

AergiaCpp14Parser::JumpstatementContext* AergiaCpp14Parser::StatementContext::jumpstatement() {
  return getRuleContext<AergiaCpp14Parser::JumpstatementContext>(0);
}

AergiaCpp14Parser::DeclarationstatementContext* AergiaCpp14Parser::StatementContext::declarationstatement() {
  return getRuleContext<AergiaCpp14Parser::DeclarationstatementContext>(0);
}

AergiaCpp14Parser::AergiaexpressionContext* AergiaCpp14Parser::StatementContext::aergiaexpression() {
  return getRuleContext<AergiaCpp14Parser::AergiaexpressionContext>(0);
}

AergiaCpp14Parser::ForeachContext* AergiaCpp14Parser::StatementContext::foreach() {
  return getRuleContext<AergiaCpp14Parser::ForeachContext>(0);
}

AergiaCpp14Parser::TryblockContext* AergiaCpp14Parser::StatementContext::tryblock() {
  return getRuleContext<AergiaCpp14Parser::TryblockContext>(0);
}


size_t AergiaCpp14Parser::StatementContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleStatement;
}

void AergiaCpp14Parser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void AergiaCpp14Parser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any AergiaCpp14Parser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::StatementContext* AergiaCpp14Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 122, AergiaCpp14Parser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1103);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1075);
      labeledstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1077);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
      case 1: {
        setState(1076);
        attributespecifierseq(0);
        break;
      }

      }
      setState(1079);
      expressionstatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1081);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1080);
        attributespecifierseq(0);
      }
      setState(1083);
      compoundstatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1085);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1084);
        attributespecifierseq(0);
      }
      setState(1087);
      selectionstatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1089);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1088);
        attributespecifierseq(0);
      }
      setState(1091);
      iterationstatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1093);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1092);
        attributespecifierseq(0);
      }
      setState(1095);
      jumpstatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1096);
      declarationstatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1097);
      aergiaexpression();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1098);
      foreach();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1100);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1099);
        attributespecifierseq(0);
      }
      setState(1102);
      tryblock();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledstatementContext ------------------------------------------------------------------

AergiaCpp14Parser::LabeledstatementContext::LabeledstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::LabeledstatementContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LabeledstatementContext::Colon() {
  return getToken(AergiaCpp14Parser::Colon, 0);
}

AergiaCpp14Parser::StatementContext* AergiaCpp14Parser::LabeledstatementContext::statement() {
  return getRuleContext<AergiaCpp14Parser::StatementContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::LabeledstatementContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::LabeledstatementContext::Case() {
  return getToken(AergiaCpp14Parser::Case, 0);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::LabeledstatementContext::constantexpression() {
  return getRuleContext<AergiaCpp14Parser::ConstantexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::LabeledstatementContext::Default() {
  return getToken(AergiaCpp14Parser::Default, 0);
}


size_t AergiaCpp14Parser::LabeledstatementContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleLabeledstatement;
}

void AergiaCpp14Parser::LabeledstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledstatement(this);
}

void AergiaCpp14Parser::LabeledstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledstatement(this);
}


antlrcpp::Any AergiaCpp14Parser::LabeledstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitLabeledstatement(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::LabeledstatementContext* AergiaCpp14Parser::labeledstatement() {
  LabeledstatementContext *_localctx = _tracker.createInstance<LabeledstatementContext>(_ctx, getState());
  enterRule(_localctx, 124, AergiaCpp14Parser::RuleLabeledstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1106);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1105);
        attributespecifierseq(0);
      }
      setState(1108);
      match(AergiaCpp14Parser::Identifier);
      setState(1109);
      match(AergiaCpp14Parser::Colon);
      setState(1110);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1112);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1111);
        attributespecifierseq(0);
      }
      setState(1114);
      match(AergiaCpp14Parser::Case);
      setState(1115);
      constantexpression();
      setState(1116);
      match(AergiaCpp14Parser::Colon);
      setState(1117);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1120);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1119);
        attributespecifierseq(0);
      }
      setState(1122);
      match(AergiaCpp14Parser::Default);
      setState(1123);
      match(AergiaCpp14Parser::Colon);
      setState(1124);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionstatementContext ------------------------------------------------------------------

AergiaCpp14Parser::ExpressionstatementContext::ExpressionstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::ExpressionstatementContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::ExpressionstatementContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}


size_t AergiaCpp14Parser::ExpressionstatementContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleExpressionstatement;
}

void AergiaCpp14Parser::ExpressionstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionstatement(this);
}

void AergiaCpp14Parser::ExpressionstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionstatement(this);
}


antlrcpp::Any AergiaCpp14Parser::ExpressionstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitExpressionstatement(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ExpressionstatementContext* AergiaCpp14Parser::expressionstatement() {
  ExpressionstatementContext *_localctx = _tracker.createInstance<ExpressionstatementContext>(_ctx, getState());
  enterRule(_localctx, 126, AergiaCpp14Parser::RuleExpressionstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__8)
      | (1ULL << AergiaCpp14Parser::T__9)
      | (1ULL << AergiaCpp14Parser::Alignof)
      | (1ULL << AergiaCpp14Parser::Auto)
      | (1ULL << AergiaCpp14Parser::Bool)
      | (1ULL << AergiaCpp14Parser::Char)
      | (1ULL << AergiaCpp14Parser::Char16)
      | (1ULL << AergiaCpp14Parser::Char32)
      | (1ULL << AergiaCpp14Parser::Const_cast)
      | (1ULL << AergiaCpp14Parser::Decltype)
      | (1ULL << AergiaCpp14Parser::Delete)
      | (1ULL << AergiaCpp14Parser::Double)
      | (1ULL << AergiaCpp14Parser::Dynamic_cast)
      | (1ULL << AergiaCpp14Parser::False)
      | (1ULL << AergiaCpp14Parser::Float)
      | (1ULL << AergiaCpp14Parser::Int)
      | (1ULL << AergiaCpp14Parser::Long)
      | (1ULL << AergiaCpp14Parser::New)
      | (1ULL << AergiaCpp14Parser::Noexcept)
      | (1ULL << AergiaCpp14Parser::Nullptr)
      | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
      | (1ULL << (AergiaCpp14Parser::Short - 66))
      | (1ULL << (AergiaCpp14Parser::Signed - 66))
      | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
      | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
      | (1ULL << (AergiaCpp14Parser::This - 66))
      | (1ULL << (AergiaCpp14Parser::Throw - 66))
      | (1ULL << (AergiaCpp14Parser::True - 66))
      | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
      | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
      | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
      | (1ULL << (AergiaCpp14Parser::Void - 66))
      | (1ULL << (AergiaCpp14Parser::Wchar - 66))
      | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
      | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
      | (1ULL << (AergiaCpp14Parser::Plus - 66))
      | (1ULL << (AergiaCpp14Parser::Minus - 66))
      | (1ULL << (AergiaCpp14Parser::Star - 66))
      | (1ULL << (AergiaCpp14Parser::And - 66))
      | (1ULL << (AergiaCpp14Parser::Or - 66))
      | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
      | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
      | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
      | (1ULL << (AergiaCpp14Parser::Identifier - 130))
      | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
      setState(1127);
      expression(0);
    }
    setState(1130);
    match(AergiaCpp14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundstatementContext ------------------------------------------------------------------

AergiaCpp14Parser::CompoundstatementContext::CompoundstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::CompoundstatementContext::LeftBrace() {
  return getToken(AergiaCpp14Parser::LeftBrace, 0);
}

tree::TerminalNode* AergiaCpp14Parser::CompoundstatementContext::RightBrace() {
  return getToken(AergiaCpp14Parser::RightBrace, 0);
}

AergiaCpp14Parser::StatementseqContext* AergiaCpp14Parser::CompoundstatementContext::statementseq() {
  return getRuleContext<AergiaCpp14Parser::StatementseqContext>(0);
}


size_t AergiaCpp14Parser::CompoundstatementContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleCompoundstatement;
}

void AergiaCpp14Parser::CompoundstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundstatement(this);
}

void AergiaCpp14Parser::CompoundstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundstatement(this);
}


antlrcpp::Any AergiaCpp14Parser::CompoundstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitCompoundstatement(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::CompoundstatementContext* AergiaCpp14Parser::compoundstatement() {
  CompoundstatementContext *_localctx = _tracker.createInstance<CompoundstatementContext>(_ctx, getState());
  enterRule(_localctx, 128, AergiaCpp14Parser::RuleCompoundstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1132);
    match(AergiaCpp14Parser::LeftBrace);
    setState(1134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
      | (1ULL << AergiaCpp14Parser::T__5)
      | (1ULL << AergiaCpp14Parser::T__8)
      | (1ULL << AergiaCpp14Parser::T__9)
      | (1ULL << AergiaCpp14Parser::T__10)
      | (1ULL << AergiaCpp14Parser::Alignas)
      | (1ULL << AergiaCpp14Parser::Alignof)
      | (1ULL << AergiaCpp14Parser::Asm)
      | (1ULL << AergiaCpp14Parser::Auto)
      | (1ULL << AergiaCpp14Parser::Bool)
      | (1ULL << AergiaCpp14Parser::Break)
      | (1ULL << AergiaCpp14Parser::Case)
      | (1ULL << AergiaCpp14Parser::Char)
      | (1ULL << AergiaCpp14Parser::Char16)
      | (1ULL << AergiaCpp14Parser::Char32)
      | (1ULL << AergiaCpp14Parser::Class)
      | (1ULL << AergiaCpp14Parser::Const)
      | (1ULL << AergiaCpp14Parser::Constexpr)
      | (1ULL << AergiaCpp14Parser::Const_cast)
      | (1ULL << AergiaCpp14Parser::Continue)
      | (1ULL << AergiaCpp14Parser::Decltype)
      | (1ULL << AergiaCpp14Parser::Default)
      | (1ULL << AergiaCpp14Parser::Delete)
      | (1ULL << AergiaCpp14Parser::Do)
      | (1ULL << AergiaCpp14Parser::Double)
      | (1ULL << AergiaCpp14Parser::Dynamic_cast)
      | (1ULL << AergiaCpp14Parser::Enum)
      | (1ULL << AergiaCpp14Parser::Explicit)
      | (1ULL << AergiaCpp14Parser::Extern)
      | (1ULL << AergiaCpp14Parser::False)
      | (1ULL << AergiaCpp14Parser::Float)
      | (1ULL << AergiaCpp14Parser::For)
      | (1ULL << AergiaCpp14Parser::Friend)
      | (1ULL << AergiaCpp14Parser::Goto)
      | (1ULL << AergiaCpp14Parser::If)
      | (1ULL << AergiaCpp14Parser::Inline)
      | (1ULL << AergiaCpp14Parser::Int)
      | (1ULL << AergiaCpp14Parser::Long)
      | (1ULL << AergiaCpp14Parser::Mutable)
      | (1ULL << AergiaCpp14Parser::Namespace)
      | (1ULL << AergiaCpp14Parser::New)
      | (1ULL << AergiaCpp14Parser::Noexcept)
      | (1ULL << AergiaCpp14Parser::Nullptr)
      | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Register - 65))
      | (1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
      | (1ULL << (AergiaCpp14Parser::Return - 65))
      | (1ULL << (AergiaCpp14Parser::Short - 65))
      | (1ULL << (AergiaCpp14Parser::Signed - 65))
      | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
      | (1ULL << (AergiaCpp14Parser::Static - 65))
      | (1ULL << (AergiaCpp14Parser::Static_assert - 65))
      | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
      | (1ULL << (AergiaCpp14Parser::Struct - 65))
      | (1ULL << (AergiaCpp14Parser::Switch - 65))
      | (1ULL << (AergiaCpp14Parser::This - 65))
      | (1ULL << (AergiaCpp14Parser::Thread_local - 65))
      | (1ULL << (AergiaCpp14Parser::Throw - 65))
      | (1ULL << (AergiaCpp14Parser::True - 65))
      | (1ULL << (AergiaCpp14Parser::Try - 65))
      | (1ULL << (AergiaCpp14Parser::Typedef - 65))
      | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
      | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
      | (1ULL << (AergiaCpp14Parser::Union - 65))
      | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
      | (1ULL << (AergiaCpp14Parser::Using - 65))
      | (1ULL << (AergiaCpp14Parser::Virtual - 65))
      | (1ULL << (AergiaCpp14Parser::Void - 65))
      | (1ULL << (AergiaCpp14Parser::Volatile - 65))
      | (1ULL << (AergiaCpp14Parser::Wchar - 65))
      | (1ULL << (AergiaCpp14Parser::While - 65))
      | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
      | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
      | (1ULL << (AergiaCpp14Parser::LeftBrace - 65))
      | (1ULL << (AergiaCpp14Parser::Plus - 65))
      | (1ULL << (AergiaCpp14Parser::Minus - 65))
      | (1ULL << (AergiaCpp14Parser::Star - 65))
      | (1ULL << (AergiaCpp14Parser::And - 65))
      | (1ULL << (AergiaCpp14Parser::Or - 65))
      | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
      | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
      | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
      | (1ULL << (AergiaCpp14Parser::Semi - 130))
      | (1ULL << (AergiaCpp14Parser::Ellipsis - 130))
      | (1ULL << (AergiaCpp14Parser::Identifier - 130))
      | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
      setState(1133);
      statementseq(0);
    }
    setState(1136);
    match(AergiaCpp14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementseqContext ------------------------------------------------------------------

AergiaCpp14Parser::StatementseqContext::StatementseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::StatementContext* AergiaCpp14Parser::StatementseqContext::statement() {
  return getRuleContext<AergiaCpp14Parser::StatementContext>(0);
}

AergiaCpp14Parser::StatementseqContext* AergiaCpp14Parser::StatementseqContext::statementseq() {
  return getRuleContext<AergiaCpp14Parser::StatementseqContext>(0);
}


size_t AergiaCpp14Parser::StatementseqContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleStatementseq;
}

void AergiaCpp14Parser::StatementseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementseq(this);
}

void AergiaCpp14Parser::StatementseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementseq(this);
}


antlrcpp::Any AergiaCpp14Parser::StatementseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitStatementseq(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::StatementseqContext* AergiaCpp14Parser::statementseq() {
   return statementseq(0);
}

AergiaCpp14Parser::StatementseqContext* AergiaCpp14Parser::statementseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::StatementseqContext *_localctx = _tracker.createInstance<StatementseqContext>(_ctx, parentState);
  AergiaCpp14Parser::StatementseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 130;
  enterRecursionRule(_localctx, 130, AergiaCpp14Parser::RuleStatementseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1139);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(1145);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatementseq);
        setState(1141);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1142);
        statement(); 
      }
      setState(1147);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SelectionstatementContext ------------------------------------------------------------------

AergiaCpp14Parser::SelectionstatementContext::SelectionstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::SelectionstatementContext::If() {
  return getToken(AergiaCpp14Parser::If, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SelectionstatementContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ConditionContext* AergiaCpp14Parser::SelectionstatementContext::condition() {
  return getRuleContext<AergiaCpp14Parser::ConditionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::SelectionstatementContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

std::vector<AergiaCpp14Parser::StatementContext *> AergiaCpp14Parser::SelectionstatementContext::statement() {
  return getRuleContexts<AergiaCpp14Parser::StatementContext>();
}

AergiaCpp14Parser::StatementContext* AergiaCpp14Parser::SelectionstatementContext::statement(size_t i) {
  return getRuleContext<AergiaCpp14Parser::StatementContext>(i);
}

tree::TerminalNode* AergiaCpp14Parser::SelectionstatementContext::Else() {
  return getToken(AergiaCpp14Parser::Else, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SelectionstatementContext::Switch() {
  return getToken(AergiaCpp14Parser::Switch, 0);
}


size_t AergiaCpp14Parser::SelectionstatementContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleSelectionstatement;
}

void AergiaCpp14Parser::SelectionstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionstatement(this);
}

void AergiaCpp14Parser::SelectionstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionstatement(this);
}


antlrcpp::Any AergiaCpp14Parser::SelectionstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitSelectionstatement(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::SelectionstatementContext* AergiaCpp14Parser::selectionstatement() {
  SelectionstatementContext *_localctx = _tracker.createInstance<SelectionstatementContext>(_ctx, getState());
  enterRule(_localctx, 132, AergiaCpp14Parser::RuleSelectionstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1168);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1148);
      match(AergiaCpp14Parser::If);
      setState(1149);
      match(AergiaCpp14Parser::LeftParen);
      setState(1150);
      condition();
      setState(1151);
      match(AergiaCpp14Parser::RightParen);
      setState(1152);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1154);
      match(AergiaCpp14Parser::If);
      setState(1155);
      match(AergiaCpp14Parser::LeftParen);
      setState(1156);
      condition();
      setState(1157);
      match(AergiaCpp14Parser::RightParen);
      setState(1158);
      statement();
      setState(1159);
      match(AergiaCpp14Parser::Else);
      setState(1160);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1162);
      match(AergiaCpp14Parser::Switch);
      setState(1163);
      match(AergiaCpp14Parser::LeftParen);
      setState(1164);
      condition();
      setState(1165);
      match(AergiaCpp14Parser::RightParen);
      setState(1166);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

AergiaCpp14Parser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::ConditionContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}

AergiaCpp14Parser::DeclspecifierseqContext* AergiaCpp14Parser::ConditionContext::declspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::DeclspecifierseqContext>(0);
}

AergiaCpp14Parser::DeclaratorContext* AergiaCpp14Parser::ConditionContext::declarator() {
  return getRuleContext<AergiaCpp14Parser::DeclaratorContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ConditionContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}

AergiaCpp14Parser::InitializerclauseContext* AergiaCpp14Parser::ConditionContext::initializerclause() {
  return getRuleContext<AergiaCpp14Parser::InitializerclauseContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::ConditionContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::BracedinitlistContext* AergiaCpp14Parser::ConditionContext::bracedinitlist() {
  return getRuleContext<AergiaCpp14Parser::BracedinitlistContext>(0);
}


size_t AergiaCpp14Parser::ConditionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleCondition;
}

void AergiaCpp14Parser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void AergiaCpp14Parser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any AergiaCpp14Parser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ConditionContext* AergiaCpp14Parser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 134, AergiaCpp14Parser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1186);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1170);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1172);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1171);
        attributespecifierseq(0);
      }
      setState(1174);
      declspecifierseq();
      setState(1175);
      declarator();
      setState(1176);
      match(AergiaCpp14Parser::Assign);
      setState(1177);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1180);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1179);
        attributespecifierseq(0);
      }
      setState(1182);
      declspecifierseq();
      setState(1183);
      declarator();
      setState(1184);
      bracedinitlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationstatementContext ------------------------------------------------------------------

AergiaCpp14Parser::IterationstatementContext::IterationstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::IterationstatementContext::While() {
  return getToken(AergiaCpp14Parser::While, 0);
}

tree::TerminalNode* AergiaCpp14Parser::IterationstatementContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ConditionContext* AergiaCpp14Parser::IterationstatementContext::condition() {
  return getRuleContext<AergiaCpp14Parser::ConditionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::IterationstatementContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::StatementContext* AergiaCpp14Parser::IterationstatementContext::statement() {
  return getRuleContext<AergiaCpp14Parser::StatementContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::IterationstatementContext::Do() {
  return getToken(AergiaCpp14Parser::Do, 0);
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::IterationstatementContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::IterationstatementContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}

tree::TerminalNode* AergiaCpp14Parser::IterationstatementContext::For() {
  return getToken(AergiaCpp14Parser::For, 0);
}

AergiaCpp14Parser::ForinitstatementContext* AergiaCpp14Parser::IterationstatementContext::forinitstatement() {
  return getRuleContext<AergiaCpp14Parser::ForinitstatementContext>(0);
}

AergiaCpp14Parser::ForrangedeclarationContext* AergiaCpp14Parser::IterationstatementContext::forrangedeclaration() {
  return getRuleContext<AergiaCpp14Parser::ForrangedeclarationContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::IterationstatementContext::Colon() {
  return getToken(AergiaCpp14Parser::Colon, 0);
}

AergiaCpp14Parser::ForrangeinitializerContext* AergiaCpp14Parser::IterationstatementContext::forrangeinitializer() {
  return getRuleContext<AergiaCpp14Parser::ForrangeinitializerContext>(0);
}


size_t AergiaCpp14Parser::IterationstatementContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleIterationstatement;
}

void AergiaCpp14Parser::IterationstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationstatement(this);
}

void AergiaCpp14Parser::IterationstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationstatement(this);
}


antlrcpp::Any AergiaCpp14Parser::IterationstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitIterationstatement(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::IterationstatementContext* AergiaCpp14Parser::iterationstatement() {
  IterationstatementContext *_localctx = _tracker.createInstance<IterationstatementContext>(_ctx, getState());
  enterRule(_localctx, 136, AergiaCpp14Parser::RuleIterationstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1223);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1188);
      match(AergiaCpp14Parser::While);
      setState(1189);
      match(AergiaCpp14Parser::LeftParen);
      setState(1190);
      condition();
      setState(1191);
      match(AergiaCpp14Parser::RightParen);
      setState(1192);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1194);
      match(AergiaCpp14Parser::Do);
      setState(1195);
      statement();
      setState(1196);
      match(AergiaCpp14Parser::While);
      setState(1197);
      match(AergiaCpp14Parser::LeftParen);
      setState(1198);
      expression(0);
      setState(1199);
      match(AergiaCpp14Parser::RightParen);
      setState(1200);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1202);
      match(AergiaCpp14Parser::For);
      setState(1203);
      match(AergiaCpp14Parser::LeftParen);
      setState(1204);
      forinitstatement();
      setState(1206);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
        | (1ULL << AergiaCpp14Parser::T__8)
        | (1ULL << AergiaCpp14Parser::T__9)
        | (1ULL << AergiaCpp14Parser::Alignas)
        | (1ULL << AergiaCpp14Parser::Alignof)
        | (1ULL << AergiaCpp14Parser::Auto)
        | (1ULL << AergiaCpp14Parser::Bool)
        | (1ULL << AergiaCpp14Parser::Char)
        | (1ULL << AergiaCpp14Parser::Char16)
        | (1ULL << AergiaCpp14Parser::Char32)
        | (1ULL << AergiaCpp14Parser::Class)
        | (1ULL << AergiaCpp14Parser::Const)
        | (1ULL << AergiaCpp14Parser::Constexpr)
        | (1ULL << AergiaCpp14Parser::Const_cast)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Delete)
        | (1ULL << AergiaCpp14Parser::Double)
        | (1ULL << AergiaCpp14Parser::Dynamic_cast)
        | (1ULL << AergiaCpp14Parser::Enum)
        | (1ULL << AergiaCpp14Parser::Explicit)
        | (1ULL << AergiaCpp14Parser::Extern)
        | (1ULL << AergiaCpp14Parser::False)
        | (1ULL << AergiaCpp14Parser::Float)
        | (1ULL << AergiaCpp14Parser::Friend)
        | (1ULL << AergiaCpp14Parser::Inline)
        | (1ULL << AergiaCpp14Parser::Int)
        | (1ULL << AergiaCpp14Parser::Long)
        | (1ULL << AergiaCpp14Parser::Mutable)
        | (1ULL << AergiaCpp14Parser::New)
        | (1ULL << AergiaCpp14Parser::Noexcept)
        | (1ULL << AergiaCpp14Parser::Nullptr)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Register - 65))
        | (1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Short - 65))
        | (1ULL << (AergiaCpp14Parser::Signed - 65))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
        | (1ULL << (AergiaCpp14Parser::Static - 65))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Struct - 65))
        | (1ULL << (AergiaCpp14Parser::This - 65))
        | (1ULL << (AergiaCpp14Parser::Thread_local - 65))
        | (1ULL << (AergiaCpp14Parser::Throw - 65))
        | (1ULL << (AergiaCpp14Parser::True - 65))
        | (1ULL << (AergiaCpp14Parser::Typedef - 65))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
        | (1ULL << (AergiaCpp14Parser::Union - 65))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
        | (1ULL << (AergiaCpp14Parser::Virtual - 65))
        | (1ULL << (AergiaCpp14Parser::Void - 65))
        | (1ULL << (AergiaCpp14Parser::Volatile - 65))
        | (1ULL << (AergiaCpp14Parser::Wchar - 65))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
        | (1ULL << (AergiaCpp14Parser::Plus - 65))
        | (1ULL << (AergiaCpp14Parser::Minus - 65))
        | (1ULL << (AergiaCpp14Parser::Star - 65))
        | (1ULL << (AergiaCpp14Parser::And - 65))
        | (1ULL << (AergiaCpp14Parser::Or - 65))
        | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
        | (1ULL << (AergiaCpp14Parser::Identifier - 130))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
        setState(1205);
        condition();
      }
      setState(1208);
      match(AergiaCpp14Parser::Semi);
      setState(1210);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__8)
        | (1ULL << AergiaCpp14Parser::T__9)
        | (1ULL << AergiaCpp14Parser::Alignof)
        | (1ULL << AergiaCpp14Parser::Auto)
        | (1ULL << AergiaCpp14Parser::Bool)
        | (1ULL << AergiaCpp14Parser::Char)
        | (1ULL << AergiaCpp14Parser::Char16)
        | (1ULL << AergiaCpp14Parser::Char32)
        | (1ULL << AergiaCpp14Parser::Const_cast)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Delete)
        | (1ULL << AergiaCpp14Parser::Double)
        | (1ULL << AergiaCpp14Parser::Dynamic_cast)
        | (1ULL << AergiaCpp14Parser::False)
        | (1ULL << AergiaCpp14Parser::Float)
        | (1ULL << AergiaCpp14Parser::Int)
        | (1ULL << AergiaCpp14Parser::Long)
        | (1ULL << AergiaCpp14Parser::New)
        | (1ULL << AergiaCpp14Parser::Noexcept)
        | (1ULL << AergiaCpp14Parser::Nullptr)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
        | (1ULL << (AergiaCpp14Parser::Short - 66))
        | (1ULL << (AergiaCpp14Parser::Signed - 66))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
        | (1ULL << (AergiaCpp14Parser::This - 66))
        | (1ULL << (AergiaCpp14Parser::Throw - 66))
        | (1ULL << (AergiaCpp14Parser::True - 66))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
        | (1ULL << (AergiaCpp14Parser::Void - 66))
        | (1ULL << (AergiaCpp14Parser::Wchar - 66))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
        | (1ULL << (AergiaCpp14Parser::Plus - 66))
        | (1ULL << (AergiaCpp14Parser::Minus - 66))
        | (1ULL << (AergiaCpp14Parser::Star - 66))
        | (1ULL << (AergiaCpp14Parser::And - 66))
        | (1ULL << (AergiaCpp14Parser::Or - 66))
        | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
        | (1ULL << (AergiaCpp14Parser::Identifier - 130))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
        setState(1209);
        expression(0);
      }
      setState(1212);
      match(AergiaCpp14Parser::RightParen);
      setState(1213);
      statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1215);
      match(AergiaCpp14Parser::For);
      setState(1216);
      match(AergiaCpp14Parser::LeftParen);
      setState(1217);
      forrangedeclaration();
      setState(1218);
      match(AergiaCpp14Parser::Colon);
      setState(1219);
      forrangeinitializer();
      setState(1220);
      match(AergiaCpp14Parser::RightParen);
      setState(1221);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForinitstatementContext ------------------------------------------------------------------

AergiaCpp14Parser::ForinitstatementContext::ForinitstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ExpressionstatementContext* AergiaCpp14Parser::ForinitstatementContext::expressionstatement() {
  return getRuleContext<AergiaCpp14Parser::ExpressionstatementContext>(0);
}

AergiaCpp14Parser::SimpledeclarationContext* AergiaCpp14Parser::ForinitstatementContext::simpledeclaration() {
  return getRuleContext<AergiaCpp14Parser::SimpledeclarationContext>(0);
}


size_t AergiaCpp14Parser::ForinitstatementContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleForinitstatement;
}

void AergiaCpp14Parser::ForinitstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForinitstatement(this);
}

void AergiaCpp14Parser::ForinitstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForinitstatement(this);
}


antlrcpp::Any AergiaCpp14Parser::ForinitstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitForinitstatement(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ForinitstatementContext* AergiaCpp14Parser::forinitstatement() {
  ForinitstatementContext *_localctx = _tracker.createInstance<ForinitstatementContext>(_ctx, getState());
  enterRule(_localctx, 138, AergiaCpp14Parser::RuleForinitstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1227);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1225);
      expressionstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1226);
      simpledeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForrangedeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::ForrangedeclarationContext::ForrangedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::DeclspecifierseqContext* AergiaCpp14Parser::ForrangedeclarationContext::declspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::DeclspecifierseqContext>(0);
}

AergiaCpp14Parser::DeclaratorContext* AergiaCpp14Parser::ForrangedeclarationContext::declarator() {
  return getRuleContext<AergiaCpp14Parser::DeclaratorContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::ForrangedeclarationContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}


size_t AergiaCpp14Parser::ForrangedeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleForrangedeclaration;
}

void AergiaCpp14Parser::ForrangedeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForrangedeclaration(this);
}

void AergiaCpp14Parser::ForrangedeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForrangedeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::ForrangedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitForrangedeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ForrangedeclarationContext* AergiaCpp14Parser::forrangedeclaration() {
  ForrangedeclarationContext *_localctx = _tracker.createInstance<ForrangedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 140, AergiaCpp14Parser::RuleForrangedeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1230);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(1229);
      attributespecifierseq(0);
    }
    setState(1232);
    declspecifierseq();
    setState(1233);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForrangeinitializerContext ------------------------------------------------------------------

AergiaCpp14Parser::ForrangeinitializerContext::ForrangeinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::ForrangeinitializerContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}

AergiaCpp14Parser::BracedinitlistContext* AergiaCpp14Parser::ForrangeinitializerContext::bracedinitlist() {
  return getRuleContext<AergiaCpp14Parser::BracedinitlistContext>(0);
}


size_t AergiaCpp14Parser::ForrangeinitializerContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleForrangeinitializer;
}

void AergiaCpp14Parser::ForrangeinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForrangeinitializer(this);
}

void AergiaCpp14Parser::ForrangeinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForrangeinitializer(this);
}


antlrcpp::Any AergiaCpp14Parser::ForrangeinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitForrangeinitializer(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ForrangeinitializerContext* AergiaCpp14Parser::forrangeinitializer() {
  ForrangeinitializerContext *_localctx = _tracker.createInstance<ForrangeinitializerContext>(_ctx, getState());
  enterRule(_localctx, 142, AergiaCpp14Parser::RuleForrangeinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1237);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::T__8:
      case AergiaCpp14Parser::T__9:
      case AergiaCpp14Parser::Alignof:
      case AergiaCpp14Parser::Auto:
      case AergiaCpp14Parser::Bool:
      case AergiaCpp14Parser::Char:
      case AergiaCpp14Parser::Char16:
      case AergiaCpp14Parser::Char32:
      case AergiaCpp14Parser::Const_cast:
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Delete:
      case AergiaCpp14Parser::Double:
      case AergiaCpp14Parser::Dynamic_cast:
      case AergiaCpp14Parser::False:
      case AergiaCpp14Parser::Float:
      case AergiaCpp14Parser::Int:
      case AergiaCpp14Parser::Long:
      case AergiaCpp14Parser::New:
      case AergiaCpp14Parser::Noexcept:
      case AergiaCpp14Parser::Nullptr:
      case AergiaCpp14Parser::Operator:
      case AergiaCpp14Parser::Reinterpret_cast:
      case AergiaCpp14Parser::Short:
      case AergiaCpp14Parser::Signed:
      case AergiaCpp14Parser::Sizeof:
      case AergiaCpp14Parser::Static_cast:
      case AergiaCpp14Parser::This:
      case AergiaCpp14Parser::Throw:
      case AergiaCpp14Parser::True:
      case AergiaCpp14Parser::Typeid_:
      case AergiaCpp14Parser::Typename_:
      case AergiaCpp14Parser::Unsigned:
      case AergiaCpp14Parser::Void:
      case AergiaCpp14Parser::Wchar:
      case AergiaCpp14Parser::LeftParen:
      case AergiaCpp14Parser::LeftBracket:
      case AergiaCpp14Parser::Plus:
      case AergiaCpp14Parser::Minus:
      case AergiaCpp14Parser::Star:
      case AergiaCpp14Parser::And:
      case AergiaCpp14Parser::Or:
      case AergiaCpp14Parser::Tilde:
      case AergiaCpp14Parser::PlusPlus:
      case AergiaCpp14Parser::MinusMinus:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Identifier:
      case AergiaCpp14Parser::Integerliteral:
      case AergiaCpp14Parser::Characterliteral:
      case AergiaCpp14Parser::Floatingliteral:
      case AergiaCpp14Parser::Stringliteral:
      case AergiaCpp14Parser::Userdefinedintegerliteral:
      case AergiaCpp14Parser::Userdefinedfloatingliteral:
      case AergiaCpp14Parser::Userdefinedstringliteral:
      case AergiaCpp14Parser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(1235);
        expression(0);
        break;
      }

      case AergiaCpp14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1236);
        bracedinitlist();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpstatementContext ------------------------------------------------------------------

AergiaCpp14Parser::JumpstatementContext::JumpstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::JumpstatementContext::Break() {
  return getToken(AergiaCpp14Parser::Break, 0);
}

tree::TerminalNode* AergiaCpp14Parser::JumpstatementContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}

tree::TerminalNode* AergiaCpp14Parser::JumpstatementContext::Continue() {
  return getToken(AergiaCpp14Parser::Continue, 0);
}

tree::TerminalNode* AergiaCpp14Parser::JumpstatementContext::Return() {
  return getToken(AergiaCpp14Parser::Return, 0);
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::JumpstatementContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}

AergiaCpp14Parser::BracedinitlistContext* AergiaCpp14Parser::JumpstatementContext::bracedinitlist() {
  return getRuleContext<AergiaCpp14Parser::BracedinitlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::JumpstatementContext::Goto() {
  return getToken(AergiaCpp14Parser::Goto, 0);
}

tree::TerminalNode* AergiaCpp14Parser::JumpstatementContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}


size_t AergiaCpp14Parser::JumpstatementContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleJumpstatement;
}

void AergiaCpp14Parser::JumpstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpstatement(this);
}

void AergiaCpp14Parser::JumpstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpstatement(this);
}


antlrcpp::Any AergiaCpp14Parser::JumpstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitJumpstatement(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::JumpstatementContext* AergiaCpp14Parser::jumpstatement() {
  JumpstatementContext *_localctx = _tracker.createInstance<JumpstatementContext>(_ctx, getState());
  enterRule(_localctx, 144, AergiaCpp14Parser::RuleJumpstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1255);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1239);
      match(AergiaCpp14Parser::Break);
      setState(1240);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1241);
      match(AergiaCpp14Parser::Continue);
      setState(1242);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1243);
      match(AergiaCpp14Parser::Return);
      setState(1245);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__8)
        | (1ULL << AergiaCpp14Parser::T__9)
        | (1ULL << AergiaCpp14Parser::Alignof)
        | (1ULL << AergiaCpp14Parser::Auto)
        | (1ULL << AergiaCpp14Parser::Bool)
        | (1ULL << AergiaCpp14Parser::Char)
        | (1ULL << AergiaCpp14Parser::Char16)
        | (1ULL << AergiaCpp14Parser::Char32)
        | (1ULL << AergiaCpp14Parser::Const_cast)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Delete)
        | (1ULL << AergiaCpp14Parser::Double)
        | (1ULL << AergiaCpp14Parser::Dynamic_cast)
        | (1ULL << AergiaCpp14Parser::False)
        | (1ULL << AergiaCpp14Parser::Float)
        | (1ULL << AergiaCpp14Parser::Int)
        | (1ULL << AergiaCpp14Parser::Long)
        | (1ULL << AergiaCpp14Parser::New)
        | (1ULL << AergiaCpp14Parser::Noexcept)
        | (1ULL << AergiaCpp14Parser::Nullptr)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
        | (1ULL << (AergiaCpp14Parser::Short - 66))
        | (1ULL << (AergiaCpp14Parser::Signed - 66))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
        | (1ULL << (AergiaCpp14Parser::This - 66))
        | (1ULL << (AergiaCpp14Parser::Throw - 66))
        | (1ULL << (AergiaCpp14Parser::True - 66))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
        | (1ULL << (AergiaCpp14Parser::Void - 66))
        | (1ULL << (AergiaCpp14Parser::Wchar - 66))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
        | (1ULL << (AergiaCpp14Parser::Plus - 66))
        | (1ULL << (AergiaCpp14Parser::Minus - 66))
        | (1ULL << (AergiaCpp14Parser::Star - 66))
        | (1ULL << (AergiaCpp14Parser::And - 66))
        | (1ULL << (AergiaCpp14Parser::Or - 66))
        | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
        | (1ULL << (AergiaCpp14Parser::Identifier - 130))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
        setState(1244);
        expression(0);
      }
      setState(1247);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1248);
      match(AergiaCpp14Parser::Return);
      setState(1249);
      bracedinitlist();
      setState(1250);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1252);
      match(AergiaCpp14Parser::Goto);
      setState(1253);
      match(AergiaCpp14Parser::Identifier);
      setState(1254);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationstatementContext ------------------------------------------------------------------

AergiaCpp14Parser::DeclarationstatementContext::DeclarationstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::BlockdeclarationContext* AergiaCpp14Parser::DeclarationstatementContext::blockdeclaration() {
  return getRuleContext<AergiaCpp14Parser::BlockdeclarationContext>(0);
}


size_t AergiaCpp14Parser::DeclarationstatementContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleDeclarationstatement;
}

void AergiaCpp14Parser::DeclarationstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationstatement(this);
}

void AergiaCpp14Parser::DeclarationstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationstatement(this);
}


antlrcpp::Any AergiaCpp14Parser::DeclarationstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitDeclarationstatement(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::DeclarationstatementContext* AergiaCpp14Parser::declarationstatement() {
  DeclarationstatementContext *_localctx = _tracker.createInstance<DeclarationstatementContext>(_ctx, getState());
  enterRule(_localctx, 146, AergiaCpp14Parser::RuleDeclarationstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1257);
    blockdeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationseqContext ------------------------------------------------------------------

AergiaCpp14Parser::DeclarationseqContext::DeclarationseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::DeclarationContext* AergiaCpp14Parser::DeclarationseqContext::declaration() {
  return getRuleContext<AergiaCpp14Parser::DeclarationContext>(0);
}

AergiaCpp14Parser::DeclarationseqContext* AergiaCpp14Parser::DeclarationseqContext::declarationseq() {
  return getRuleContext<AergiaCpp14Parser::DeclarationseqContext>(0);
}


size_t AergiaCpp14Parser::DeclarationseqContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleDeclarationseq;
}

void AergiaCpp14Parser::DeclarationseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationseq(this);
}

void AergiaCpp14Parser::DeclarationseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationseq(this);
}


antlrcpp::Any AergiaCpp14Parser::DeclarationseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitDeclarationseq(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::DeclarationseqContext* AergiaCpp14Parser::declarationseq() {
   return declarationseq(0);
}

AergiaCpp14Parser::DeclarationseqContext* AergiaCpp14Parser::declarationseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::DeclarationseqContext *_localctx = _tracker.createInstance<DeclarationseqContext>(_ctx, parentState);
  AergiaCpp14Parser::DeclarationseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 148;
  enterRecursionRule(_localctx, 148, AergiaCpp14Parser::RuleDeclarationseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1260);
    declaration();
    _ctx->stop = _input->LT(-1);
    setState(1266);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DeclarationseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDeclarationseq);
        setState(1262);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1263);
        declaration(); 
      }
      setState(1268);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::BlockdeclarationContext* AergiaCpp14Parser::DeclarationContext::blockdeclaration() {
  return getRuleContext<AergiaCpp14Parser::BlockdeclarationContext>(0);
}

AergiaCpp14Parser::FunctiondefinitionContext* AergiaCpp14Parser::DeclarationContext::functiondefinition() {
  return getRuleContext<AergiaCpp14Parser::FunctiondefinitionContext>(0);
}

AergiaCpp14Parser::TemplatedeclarationContext* AergiaCpp14Parser::DeclarationContext::templatedeclaration() {
  return getRuleContext<AergiaCpp14Parser::TemplatedeclarationContext>(0);
}

AergiaCpp14Parser::ExplicitinstantiationContext* AergiaCpp14Parser::DeclarationContext::explicitinstantiation() {
  return getRuleContext<AergiaCpp14Parser::ExplicitinstantiationContext>(0);
}

AergiaCpp14Parser::ExplicitspecializationContext* AergiaCpp14Parser::DeclarationContext::explicitspecialization() {
  return getRuleContext<AergiaCpp14Parser::ExplicitspecializationContext>(0);
}

AergiaCpp14Parser::LinkagespecificationContext* AergiaCpp14Parser::DeclarationContext::linkagespecification() {
  return getRuleContext<AergiaCpp14Parser::LinkagespecificationContext>(0);
}

AergiaCpp14Parser::NamespacedefinitionContext* AergiaCpp14Parser::DeclarationContext::namespacedefinition() {
  return getRuleContext<AergiaCpp14Parser::NamespacedefinitionContext>(0);
}

AergiaCpp14Parser::EmptydeclarationContext* AergiaCpp14Parser::DeclarationContext::emptydeclaration() {
  return getRuleContext<AergiaCpp14Parser::EmptydeclarationContext>(0);
}

AergiaCpp14Parser::AttributedeclarationContext* AergiaCpp14Parser::DeclarationContext::attributedeclaration() {
  return getRuleContext<AergiaCpp14Parser::AttributedeclarationContext>(0);
}

AergiaCpp14Parser::PreprocessorDirectiveContext* AergiaCpp14Parser::DeclarationContext::preprocessorDirective() {
  return getRuleContext<AergiaCpp14Parser::PreprocessorDirectiveContext>(0);
}


size_t AergiaCpp14Parser::DeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleDeclaration;
}

void AergiaCpp14Parser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void AergiaCpp14Parser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::DeclarationContext* AergiaCpp14Parser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 150, AergiaCpp14Parser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1279);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1269);
      blockdeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1270);
      functiondefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1271);
      templatedeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1272);
      explicitinstantiation();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1273);
      explicitspecialization();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1274);
      linkagespecification();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1275);
      namespacedefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1276);
      emptydeclaration();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1277);
      attributedeclaration();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1278);
      preprocessorDirective();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockdeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::BlockdeclarationContext::BlockdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::SimpledeclarationContext* AergiaCpp14Parser::BlockdeclarationContext::simpledeclaration() {
  return getRuleContext<AergiaCpp14Parser::SimpledeclarationContext>(0);
}

AergiaCpp14Parser::AsmdefinitionContext* AergiaCpp14Parser::BlockdeclarationContext::asmdefinition() {
  return getRuleContext<AergiaCpp14Parser::AsmdefinitionContext>(0);
}

AergiaCpp14Parser::NamespacealiasdefinitionContext* AergiaCpp14Parser::BlockdeclarationContext::namespacealiasdefinition() {
  return getRuleContext<AergiaCpp14Parser::NamespacealiasdefinitionContext>(0);
}

AergiaCpp14Parser::UsingdeclarationContext* AergiaCpp14Parser::BlockdeclarationContext::usingdeclaration() {
  return getRuleContext<AergiaCpp14Parser::UsingdeclarationContext>(0);
}

AergiaCpp14Parser::UsingdirectiveContext* AergiaCpp14Parser::BlockdeclarationContext::usingdirective() {
  return getRuleContext<AergiaCpp14Parser::UsingdirectiveContext>(0);
}

AergiaCpp14Parser::Static_assertdeclarationContext* AergiaCpp14Parser::BlockdeclarationContext::static_assertdeclaration() {
  return getRuleContext<AergiaCpp14Parser::Static_assertdeclarationContext>(0);
}

AergiaCpp14Parser::AliasdeclarationContext* AergiaCpp14Parser::BlockdeclarationContext::aliasdeclaration() {
  return getRuleContext<AergiaCpp14Parser::AliasdeclarationContext>(0);
}

AergiaCpp14Parser::OpaqueenumdeclarationContext* AergiaCpp14Parser::BlockdeclarationContext::opaqueenumdeclaration() {
  return getRuleContext<AergiaCpp14Parser::OpaqueenumdeclarationContext>(0);
}


size_t AergiaCpp14Parser::BlockdeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleBlockdeclaration;
}

void AergiaCpp14Parser::BlockdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockdeclaration(this);
}

void AergiaCpp14Parser::BlockdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockdeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::BlockdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitBlockdeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::BlockdeclarationContext* AergiaCpp14Parser::blockdeclaration() {
  BlockdeclarationContext *_localctx = _tracker.createInstance<BlockdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 152, AergiaCpp14Parser::RuleBlockdeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1289);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1281);
      simpledeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1282);
      asmdefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1283);
      namespacealiasdefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1284);
      usingdeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1285);
      usingdirective();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1286);
      static_assertdeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1287);
      aliasdeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1288);
      opaqueenumdeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasdeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::AliasdeclarationContext::AliasdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::AliasdeclarationContext::Using() {
  return getToken(AergiaCpp14Parser::Using, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AliasdeclarationContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AliasdeclarationContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}

AergiaCpp14Parser::ThetypeidContext* AergiaCpp14Parser::AliasdeclarationContext::thetypeid() {
  return getRuleContext<AergiaCpp14Parser::ThetypeidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::AliasdeclarationContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::AliasdeclarationContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}


size_t AergiaCpp14Parser::AliasdeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAliasdeclaration;
}

void AergiaCpp14Parser::AliasdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliasdeclaration(this);
}

void AergiaCpp14Parser::AliasdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliasdeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::AliasdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAliasdeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AliasdeclarationContext* AergiaCpp14Parser::aliasdeclaration() {
  AliasdeclarationContext *_localctx = _tracker.createInstance<AliasdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 154, AergiaCpp14Parser::RuleAliasdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1291);
    match(AergiaCpp14Parser::Using);
    setState(1292);
    match(AergiaCpp14Parser::Identifier);
    setState(1294);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(1293);
      attributespecifierseq(0);
    }
    setState(1296);
    match(AergiaCpp14Parser::Assign);
    setState(1297);
    thetypeid();
    setState(1298);
    match(AergiaCpp14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpledeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::SimpledeclarationContext::SimpledeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::SimpledeclarationContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}

AergiaCpp14Parser::DeclspecifierseqContext* AergiaCpp14Parser::SimpledeclarationContext::declspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::DeclspecifierseqContext>(0);
}

AergiaCpp14Parser::InitdeclaratorlistContext* AergiaCpp14Parser::SimpledeclarationContext::initdeclaratorlist() {
  return getRuleContext<AergiaCpp14Parser::InitdeclaratorlistContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::SimpledeclarationContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}


size_t AergiaCpp14Parser::SimpledeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleSimpledeclaration;
}

void AergiaCpp14Parser::SimpledeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpledeclaration(this);
}

void AergiaCpp14Parser::SimpledeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpledeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::SimpledeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitSimpledeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::SimpledeclarationContext* AergiaCpp14Parser::simpledeclaration() {
  SimpledeclarationContext *_localctx = _tracker.createInstance<SimpledeclarationContext>(_ctx, getState());
  enterRule(_localctx, 156, AergiaCpp14Parser::RuleSimpledeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1314);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::T__0:
      case AergiaCpp14Parser::T__10:
      case AergiaCpp14Parser::Auto:
      case AergiaCpp14Parser::Bool:
      case AergiaCpp14Parser::Char:
      case AergiaCpp14Parser::Char16:
      case AergiaCpp14Parser::Char32:
      case AergiaCpp14Parser::Class:
      case AergiaCpp14Parser::Const:
      case AergiaCpp14Parser::Constexpr:
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Double:
      case AergiaCpp14Parser::Enum:
      case AergiaCpp14Parser::Explicit:
      case AergiaCpp14Parser::Extern:
      case AergiaCpp14Parser::Float:
      case AergiaCpp14Parser::Friend:
      case AergiaCpp14Parser::Inline:
      case AergiaCpp14Parser::Int:
      case AergiaCpp14Parser::Long:
      case AergiaCpp14Parser::Mutable:
      case AergiaCpp14Parser::Operator:
      case AergiaCpp14Parser::Register:
      case AergiaCpp14Parser::Short:
      case AergiaCpp14Parser::Signed:
      case AergiaCpp14Parser::Static:
      case AergiaCpp14Parser::Struct:
      case AergiaCpp14Parser::Thread_local:
      case AergiaCpp14Parser::Typedef:
      case AergiaCpp14Parser::Typename_:
      case AergiaCpp14Parser::Union:
      case AergiaCpp14Parser::Unsigned:
      case AergiaCpp14Parser::Virtual:
      case AergiaCpp14Parser::Void:
      case AergiaCpp14Parser::Volatile:
      case AergiaCpp14Parser::Wchar:
      case AergiaCpp14Parser::LeftParen:
      case AergiaCpp14Parser::Star:
      case AergiaCpp14Parser::And:
      case AergiaCpp14Parser::Tilde:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Semi:
      case AergiaCpp14Parser::Ellipsis:
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1301);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
        case 1: {
          setState(1300);
          declspecifierseq();
          break;
        }

        }
        setState(1304);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__10)
          | (1ULL << AergiaCpp14Parser::Decltype)
          | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 93)) & ((1ULL << (AergiaCpp14Parser::LeftParen - 93))
          | (1ULL << (AergiaCpp14Parser::Star - 93))
          | (1ULL << (AergiaCpp14Parser::And - 93))
          | (1ULL << (AergiaCpp14Parser::Tilde - 93))
          | (1ULL << (AergiaCpp14Parser::Doublecolon - 93))
          | (1ULL << (AergiaCpp14Parser::Ellipsis - 93))
          | (1ULL << (AergiaCpp14Parser::Identifier - 93)))) != 0)) {
          setState(1303);
          initdeclaratorlist(0);
        }
        setState(1306);
        match(AergiaCpp14Parser::Semi);
        break;
      }

      case AergiaCpp14Parser::Alignas:
      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1307);
        attributespecifierseq(0);
        setState(1309);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
        case 1: {
          setState(1308);
          declspecifierseq();
          break;
        }

        }
        setState(1311);
        initdeclaratorlist(0);
        setState(1312);
        match(AergiaCpp14Parser::Semi);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Static_assertdeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::Static_assertdeclarationContext::Static_assertdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::Static_assertdeclarationContext::Static_assert() {
  return getToken(AergiaCpp14Parser::Static_assert, 0);
}

tree::TerminalNode* AergiaCpp14Parser::Static_assertdeclarationContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::Static_assertdeclarationContext::constantexpression() {
  return getRuleContext<AergiaCpp14Parser::ConstantexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::Static_assertdeclarationContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}

tree::TerminalNode* AergiaCpp14Parser::Static_assertdeclarationContext::Stringliteral() {
  return getToken(AergiaCpp14Parser::Stringliteral, 0);
}

tree::TerminalNode* AergiaCpp14Parser::Static_assertdeclarationContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::Static_assertdeclarationContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}


size_t AergiaCpp14Parser::Static_assertdeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleStatic_assertdeclaration;
}

void AergiaCpp14Parser::Static_assertdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatic_assertdeclaration(this);
}

void AergiaCpp14Parser::Static_assertdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatic_assertdeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::Static_assertdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitStatic_assertdeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::Static_assertdeclarationContext* AergiaCpp14Parser::static_assertdeclaration() {
  Static_assertdeclarationContext *_localctx = _tracker.createInstance<Static_assertdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 158, AergiaCpp14Parser::RuleStatic_assertdeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1316);
    match(AergiaCpp14Parser::Static_assert);
    setState(1317);
    match(AergiaCpp14Parser::LeftParen);
    setState(1318);
    constantexpression();
    setState(1319);
    match(AergiaCpp14Parser::Comma);
    setState(1320);
    match(AergiaCpp14Parser::Stringliteral);
    setState(1321);
    match(AergiaCpp14Parser::RightParen);
    setState(1322);
    match(AergiaCpp14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptydeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::EmptydeclarationContext::EmptydeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::EmptydeclarationContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}


size_t AergiaCpp14Parser::EmptydeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleEmptydeclaration;
}

void AergiaCpp14Parser::EmptydeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptydeclaration(this);
}

void AergiaCpp14Parser::EmptydeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptydeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::EmptydeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitEmptydeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::EmptydeclarationContext* AergiaCpp14Parser::emptydeclaration() {
  EmptydeclarationContext *_localctx = _tracker.createInstance<EmptydeclarationContext>(_ctx, getState());
  enterRule(_localctx, 160, AergiaCpp14Parser::RuleEmptydeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1324);
    match(AergiaCpp14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributedeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::AttributedeclarationContext::AttributedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::AttributedeclarationContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::AttributedeclarationContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}


size_t AergiaCpp14Parser::AttributedeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAttributedeclaration;
}

void AergiaCpp14Parser::AttributedeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributedeclaration(this);
}

void AergiaCpp14Parser::AttributedeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributedeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::AttributedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAttributedeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AttributedeclarationContext* AergiaCpp14Parser::attributedeclaration() {
  AttributedeclarationContext *_localctx = _tracker.createInstance<AttributedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 162, AergiaCpp14Parser::RuleAttributedeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1326);
    attributespecifierseq(0);
    setState(1327);
    match(AergiaCpp14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclspecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::DeclspecifierContext::DeclspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::StorageclassspecifierContext* AergiaCpp14Parser::DeclspecifierContext::storageclassspecifier() {
  return getRuleContext<AergiaCpp14Parser::StorageclassspecifierContext>(0);
}

AergiaCpp14Parser::TypespecifierContext* AergiaCpp14Parser::DeclspecifierContext::typespecifier() {
  return getRuleContext<AergiaCpp14Parser::TypespecifierContext>(0);
}

AergiaCpp14Parser::FunctionspecifierContext* AergiaCpp14Parser::DeclspecifierContext::functionspecifier() {
  return getRuleContext<AergiaCpp14Parser::FunctionspecifierContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::DeclspecifierContext::Friend() {
  return getToken(AergiaCpp14Parser::Friend, 0);
}

tree::TerminalNode* AergiaCpp14Parser::DeclspecifierContext::Typedef() {
  return getToken(AergiaCpp14Parser::Typedef, 0);
}

tree::TerminalNode* AergiaCpp14Parser::DeclspecifierContext::Constexpr() {
  return getToken(AergiaCpp14Parser::Constexpr, 0);
}


size_t AergiaCpp14Parser::DeclspecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleDeclspecifier;
}

void AergiaCpp14Parser::DeclspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclspecifier(this);
}

void AergiaCpp14Parser::DeclspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclspecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::DeclspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitDeclspecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::DeclspecifierContext* AergiaCpp14Parser::declspecifier() {
  DeclspecifierContext *_localctx = _tracker.createInstance<DeclspecifierContext>(_ctx, getState());
  enterRule(_localctx, 164, AergiaCpp14Parser::RuleDeclspecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1335);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Extern:
      case AergiaCpp14Parser::Mutable:
      case AergiaCpp14Parser::Register:
      case AergiaCpp14Parser::Static:
      case AergiaCpp14Parser::Thread_local: {
        enterOuterAlt(_localctx, 1);
        setState(1329);
        storageclassspecifier();
        break;
      }

      case AergiaCpp14Parser::T__0:
      case AergiaCpp14Parser::Auto:
      case AergiaCpp14Parser::Bool:
      case AergiaCpp14Parser::Char:
      case AergiaCpp14Parser::Char16:
      case AergiaCpp14Parser::Char32:
      case AergiaCpp14Parser::Class:
      case AergiaCpp14Parser::Const:
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Double:
      case AergiaCpp14Parser::Enum:
      case AergiaCpp14Parser::Float:
      case AergiaCpp14Parser::Int:
      case AergiaCpp14Parser::Long:
      case AergiaCpp14Parser::Short:
      case AergiaCpp14Parser::Signed:
      case AergiaCpp14Parser::Struct:
      case AergiaCpp14Parser::Typename_:
      case AergiaCpp14Parser::Union:
      case AergiaCpp14Parser::Unsigned:
      case AergiaCpp14Parser::Void:
      case AergiaCpp14Parser::Volatile:
      case AergiaCpp14Parser::Wchar:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1330);
        typespecifier();
        break;
      }

      case AergiaCpp14Parser::Explicit:
      case AergiaCpp14Parser::Inline:
      case AergiaCpp14Parser::Virtual: {
        enterOuterAlt(_localctx, 3);
        setState(1331);
        functionspecifier();
        break;
      }

      case AergiaCpp14Parser::Friend: {
        enterOuterAlt(_localctx, 4);
        setState(1332);
        match(AergiaCpp14Parser::Friend);
        break;
      }

      case AergiaCpp14Parser::Typedef: {
        enterOuterAlt(_localctx, 5);
        setState(1333);
        match(AergiaCpp14Parser::Typedef);
        break;
      }

      case AergiaCpp14Parser::Constexpr: {
        enterOuterAlt(_localctx, 6);
        setState(1334);
        match(AergiaCpp14Parser::Constexpr);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclspecifierseqContext ------------------------------------------------------------------

AergiaCpp14Parser::DeclspecifierseqContext::DeclspecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::DeclspecifierContext* AergiaCpp14Parser::DeclspecifierseqContext::declspecifier() {
  return getRuleContext<AergiaCpp14Parser::DeclspecifierContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::DeclspecifierseqContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::DeclspecifierseqContext* AergiaCpp14Parser::DeclspecifierseqContext::declspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::DeclspecifierseqContext>(0);
}


size_t AergiaCpp14Parser::DeclspecifierseqContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleDeclspecifierseq;
}

void AergiaCpp14Parser::DeclspecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclspecifierseq(this);
}

void AergiaCpp14Parser::DeclspecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclspecifierseq(this);
}


antlrcpp::Any AergiaCpp14Parser::DeclspecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitDeclspecifierseq(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::DeclspecifierseqContext* AergiaCpp14Parser::declspecifierseq() {
  DeclspecifierseqContext *_localctx = _tracker.createInstance<DeclspecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 166, AergiaCpp14Parser::RuleDeclspecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1344);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1337);
      declspecifier();
      setState(1339);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
      case 1: {
        setState(1338);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1341);
      declspecifier();
      setState(1342);
      declspecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageclassspecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::StorageclassspecifierContext::StorageclassspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::StorageclassspecifierContext::Register() {
  return getToken(AergiaCpp14Parser::Register, 0);
}

tree::TerminalNode* AergiaCpp14Parser::StorageclassspecifierContext::Static() {
  return getToken(AergiaCpp14Parser::Static, 0);
}

tree::TerminalNode* AergiaCpp14Parser::StorageclassspecifierContext::Thread_local() {
  return getToken(AergiaCpp14Parser::Thread_local, 0);
}

tree::TerminalNode* AergiaCpp14Parser::StorageclassspecifierContext::Extern() {
  return getToken(AergiaCpp14Parser::Extern, 0);
}

tree::TerminalNode* AergiaCpp14Parser::StorageclassspecifierContext::Mutable() {
  return getToken(AergiaCpp14Parser::Mutable, 0);
}


size_t AergiaCpp14Parser::StorageclassspecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleStorageclassspecifier;
}

void AergiaCpp14Parser::StorageclassspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageclassspecifier(this);
}

void AergiaCpp14Parser::StorageclassspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageclassspecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::StorageclassspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitStorageclassspecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::StorageclassspecifierContext* AergiaCpp14Parser::storageclassspecifier() {
  StorageclassspecifierContext *_localctx = _tracker.createInstance<StorageclassspecifierContext>(_ctx, getState());
  enterRule(_localctx, 168, AergiaCpp14Parser::RuleStorageclassspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1346);
    _la = _input->LA(1);
    if (!(((((_la - 44) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 44)) & ((1ULL << (AergiaCpp14Parser::Extern - 44))
      | (1ULL << (AergiaCpp14Parser::Mutable - 44))
      | (1ULL << (AergiaCpp14Parser::Register - 44))
      | (1ULL << (AergiaCpp14Parser::Static - 44))
      | (1ULL << (AergiaCpp14Parser::Thread_local - 44)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionspecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::FunctionspecifierContext::FunctionspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::FunctionspecifierContext::Inline() {
  return getToken(AergiaCpp14Parser::Inline, 0);
}

tree::TerminalNode* AergiaCpp14Parser::FunctionspecifierContext::Virtual() {
  return getToken(AergiaCpp14Parser::Virtual, 0);
}

tree::TerminalNode* AergiaCpp14Parser::FunctionspecifierContext::Explicit() {
  return getToken(AergiaCpp14Parser::Explicit, 0);
}


size_t AergiaCpp14Parser::FunctionspecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleFunctionspecifier;
}

void AergiaCpp14Parser::FunctionspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionspecifier(this);
}

void AergiaCpp14Parser::FunctionspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionspecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::FunctionspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitFunctionspecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::FunctionspecifierContext* AergiaCpp14Parser::functionspecifier() {
  FunctionspecifierContext *_localctx = _tracker.createInstance<FunctionspecifierContext>(_ctx, getState());
  enterRule(_localctx, 170, AergiaCpp14Parser::RuleFunctionspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1348);
    _la = _input->LA(1);
    if (!(((((_la - 42) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 42)) & ((1ULL << (AergiaCpp14Parser::Explicit - 42))
      | (1ULL << (AergiaCpp14Parser::Inline - 42))
      | (1ULL << (AergiaCpp14Parser::Virtual - 42)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedefnameContext ------------------------------------------------------------------

AergiaCpp14Parser::TypedefnameContext::TypedefnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::TypedefnameContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}


size_t AergiaCpp14Parser::TypedefnameContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTypedefname;
}

void AergiaCpp14Parser::TypedefnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedefname(this);
}

void AergiaCpp14Parser::TypedefnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedefname(this);
}


antlrcpp::Any AergiaCpp14Parser::TypedefnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTypedefname(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TypedefnameContext* AergiaCpp14Parser::typedefname() {
  TypedefnameContext *_localctx = _tracker.createInstance<TypedefnameContext>(_ctx, getState());
  enterRule(_localctx, 172, AergiaCpp14Parser::RuleTypedefname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1350);
    match(AergiaCpp14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::TypespecifierContext::TypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::TrailingtypespecifierContext* AergiaCpp14Parser::TypespecifierContext::trailingtypespecifier() {
  return getRuleContext<AergiaCpp14Parser::TrailingtypespecifierContext>(0);
}

AergiaCpp14Parser::ClassspecifierContext* AergiaCpp14Parser::TypespecifierContext::classspecifier() {
  return getRuleContext<AergiaCpp14Parser::ClassspecifierContext>(0);
}

AergiaCpp14Parser::EnumspecifierContext* AergiaCpp14Parser::TypespecifierContext::enumspecifier() {
  return getRuleContext<AergiaCpp14Parser::EnumspecifierContext>(0);
}

AergiaCpp14Parser::AergiaExpression_type_targetContext* AergiaCpp14Parser::TypespecifierContext::aergiaExpression_type_target() {
  return getRuleContext<AergiaCpp14Parser::AergiaExpression_type_targetContext>(0);
}


size_t AergiaCpp14Parser::TypespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTypespecifier;
}

void AergiaCpp14Parser::TypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypespecifier(this);
}

void AergiaCpp14Parser::TypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::TypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTypespecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TypespecifierContext* AergiaCpp14Parser::typespecifier() {
  TypespecifierContext *_localctx = _tracker.createInstance<TypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 174, AergiaCpp14Parser::RuleTypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1356);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1352);
      trailingtypespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1353);
      classspecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1354);
      enumspecifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1355);
      aergiaExpression_type_target();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingtypespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::TrailingtypespecifierContext::TrailingtypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::SimpletypespecifierContext* AergiaCpp14Parser::TrailingtypespecifierContext::simpletypespecifier() {
  return getRuleContext<AergiaCpp14Parser::SimpletypespecifierContext>(0);
}

AergiaCpp14Parser::ElaboratedtypespecifierContext* AergiaCpp14Parser::TrailingtypespecifierContext::elaboratedtypespecifier() {
  return getRuleContext<AergiaCpp14Parser::ElaboratedtypespecifierContext>(0);
}

AergiaCpp14Parser::TypenamespecifierContext* AergiaCpp14Parser::TrailingtypespecifierContext::typenamespecifier() {
  return getRuleContext<AergiaCpp14Parser::TypenamespecifierContext>(0);
}

AergiaCpp14Parser::CvqualifierContext* AergiaCpp14Parser::TrailingtypespecifierContext::cvqualifier() {
  return getRuleContext<AergiaCpp14Parser::CvqualifierContext>(0);
}


size_t AergiaCpp14Parser::TrailingtypespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTrailingtypespecifier;
}

void AergiaCpp14Parser::TrailingtypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingtypespecifier(this);
}

void AergiaCpp14Parser::TrailingtypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingtypespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::TrailingtypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTrailingtypespecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TrailingtypespecifierContext* AergiaCpp14Parser::trailingtypespecifier() {
  TrailingtypespecifierContext *_localctx = _tracker.createInstance<TrailingtypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 176, AergiaCpp14Parser::RuleTrailingtypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1362);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Auto:
      case AergiaCpp14Parser::Bool:
      case AergiaCpp14Parser::Char:
      case AergiaCpp14Parser::Char16:
      case AergiaCpp14Parser::Char32:
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Double:
      case AergiaCpp14Parser::Float:
      case AergiaCpp14Parser::Int:
      case AergiaCpp14Parser::Long:
      case AergiaCpp14Parser::Short:
      case AergiaCpp14Parser::Signed:
      case AergiaCpp14Parser::Unsigned:
      case AergiaCpp14Parser::Void:
      case AergiaCpp14Parser::Wchar:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1358);
        simpletypespecifier();
        break;
      }

      case AergiaCpp14Parser::Class:
      case AergiaCpp14Parser::Enum:
      case AergiaCpp14Parser::Struct:
      case AergiaCpp14Parser::Union: {
        enterOuterAlt(_localctx, 2);
        setState(1359);
        elaboratedtypespecifier();
        break;
      }

      case AergiaCpp14Parser::Typename_: {
        enterOuterAlt(_localctx, 3);
        setState(1360);
        typenamespecifier();
        break;
      }

      case AergiaCpp14Parser::Const:
      case AergiaCpp14Parser::Volatile: {
        enterOuterAlt(_localctx, 4);
        setState(1361);
        cvqualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypespecifierseqContext ------------------------------------------------------------------

AergiaCpp14Parser::TypespecifierseqContext::TypespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::TypespecifierContext* AergiaCpp14Parser::TypespecifierseqContext::typespecifier() {
  return getRuleContext<AergiaCpp14Parser::TypespecifierContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::TypespecifierseqContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::TypespecifierseqContext* AergiaCpp14Parser::TypespecifierseqContext::typespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::TypespecifierseqContext>(0);
}


size_t AergiaCpp14Parser::TypespecifierseqContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTypespecifierseq;
}

void AergiaCpp14Parser::TypespecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypespecifierseq(this);
}

void AergiaCpp14Parser::TypespecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypespecifierseq(this);
}


antlrcpp::Any AergiaCpp14Parser::TypespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTypespecifierseq(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TypespecifierseqContext* AergiaCpp14Parser::typespecifierseq() {
  TypespecifierseqContext *_localctx = _tracker.createInstance<TypespecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 178, AergiaCpp14Parser::RuleTypespecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1371);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1364);
      typespecifier();
      setState(1366);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
      case 1: {
        setState(1365);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1368);
      typespecifier();
      setState(1369);
      typespecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingtypespecifierseqContext ------------------------------------------------------------------

AergiaCpp14Parser::TrailingtypespecifierseqContext::TrailingtypespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::TrailingtypespecifierContext* AergiaCpp14Parser::TrailingtypespecifierseqContext::trailingtypespecifier() {
  return getRuleContext<AergiaCpp14Parser::TrailingtypespecifierContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::TrailingtypespecifierseqContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::TrailingtypespecifierseqContext* AergiaCpp14Parser::TrailingtypespecifierseqContext::trailingtypespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::TrailingtypespecifierseqContext>(0);
}


size_t AergiaCpp14Parser::TrailingtypespecifierseqContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTrailingtypespecifierseq;
}

void AergiaCpp14Parser::TrailingtypespecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingtypespecifierseq(this);
}

void AergiaCpp14Parser::TrailingtypespecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingtypespecifierseq(this);
}


antlrcpp::Any AergiaCpp14Parser::TrailingtypespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTrailingtypespecifierseq(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TrailingtypespecifierseqContext* AergiaCpp14Parser::trailingtypespecifierseq() {
  TrailingtypespecifierseqContext *_localctx = _tracker.createInstance<TrailingtypespecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 180, AergiaCpp14Parser::RuleTrailingtypespecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1380);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1373);
      trailingtypespecifier();
      setState(1375);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
      case 1: {
        setState(1374);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1377);
      trailingtypespecifier();
      setState(1378);
      trailingtypespecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpletypespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::SimpletypespecifierContext::SimpletypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ThetypenameContext* AergiaCpp14Parser::SimpletypespecifierContext::thetypename() {
  return getRuleContext<AergiaCpp14Parser::ThetypenameContext>(0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::SimpletypespecifierContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Template() {
  return getToken(AergiaCpp14Parser::Template, 0);
}

AergiaCpp14Parser::SimpletemplateidContext* AergiaCpp14Parser::SimpletypespecifierContext::simpletemplateid() {
  return getRuleContext<AergiaCpp14Parser::SimpletemplateidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Char() {
  return getToken(AergiaCpp14Parser::Char, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Char16() {
  return getToken(AergiaCpp14Parser::Char16, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Char32() {
  return getToken(AergiaCpp14Parser::Char32, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Wchar() {
  return getToken(AergiaCpp14Parser::Wchar, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Bool() {
  return getToken(AergiaCpp14Parser::Bool, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Short() {
  return getToken(AergiaCpp14Parser::Short, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Int() {
  return getToken(AergiaCpp14Parser::Int, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Long() {
  return getToken(AergiaCpp14Parser::Long, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Signed() {
  return getToken(AergiaCpp14Parser::Signed, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Unsigned() {
  return getToken(AergiaCpp14Parser::Unsigned, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Float() {
  return getToken(AergiaCpp14Parser::Float, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Double() {
  return getToken(AergiaCpp14Parser::Double, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Void() {
  return getToken(AergiaCpp14Parser::Void, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletypespecifierContext::Auto() {
  return getToken(AergiaCpp14Parser::Auto, 0);
}

AergiaCpp14Parser::DecltypespecifierContext* AergiaCpp14Parser::SimpletypespecifierContext::decltypespecifier() {
  return getRuleContext<AergiaCpp14Parser::DecltypespecifierContext>(0);
}


size_t AergiaCpp14Parser::SimpletypespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleSimpletypespecifier;
}

void AergiaCpp14Parser::SimpletypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpletypespecifier(this);
}

void AergiaCpp14Parser::SimpletypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpletypespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::SimpletypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitSimpletypespecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::SimpletypespecifierContext* AergiaCpp14Parser::simpletypespecifier() {
  SimpletypespecifierContext *_localctx = _tracker.createInstance<SimpletypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 182, AergiaCpp14Parser::RuleSimpletypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1405);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1383);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
      case 1: {
        setState(1382);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1385);
      thetypename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1386);
      nestednamespecifier(0);
      setState(1387);
      match(AergiaCpp14Parser::Template);
      setState(1388);
      simpletemplateid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1390);
      match(AergiaCpp14Parser::Char);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1391);
      match(AergiaCpp14Parser::Char16);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1392);
      match(AergiaCpp14Parser::Char32);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1393);
      match(AergiaCpp14Parser::Wchar);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1394);
      match(AergiaCpp14Parser::Bool);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1395);
      match(AergiaCpp14Parser::Short);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1396);
      match(AergiaCpp14Parser::Int);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1397);
      match(AergiaCpp14Parser::Long);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1398);
      match(AergiaCpp14Parser::Signed);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1399);
      match(AergiaCpp14Parser::Unsigned);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1400);
      match(AergiaCpp14Parser::Float);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1401);
      match(AergiaCpp14Parser::Double);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1402);
      match(AergiaCpp14Parser::Void);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1403);
      match(AergiaCpp14Parser::Auto);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1404);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThetypenameContext ------------------------------------------------------------------

AergiaCpp14Parser::ThetypenameContext::ThetypenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ClassnameContext* AergiaCpp14Parser::ThetypenameContext::classname() {
  return getRuleContext<AergiaCpp14Parser::ClassnameContext>(0);
}

AergiaCpp14Parser::EnumnameContext* AergiaCpp14Parser::ThetypenameContext::enumname() {
  return getRuleContext<AergiaCpp14Parser::EnumnameContext>(0);
}

AergiaCpp14Parser::TypedefnameContext* AergiaCpp14Parser::ThetypenameContext::typedefname() {
  return getRuleContext<AergiaCpp14Parser::TypedefnameContext>(0);
}

AergiaCpp14Parser::SimpletemplateidContext* AergiaCpp14Parser::ThetypenameContext::simpletemplateid() {
  return getRuleContext<AergiaCpp14Parser::SimpletemplateidContext>(0);
}


size_t AergiaCpp14Parser::ThetypenameContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleThetypename;
}

void AergiaCpp14Parser::ThetypenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThetypename(this);
}

void AergiaCpp14Parser::ThetypenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThetypename(this);
}


antlrcpp::Any AergiaCpp14Parser::ThetypenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitThetypename(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ThetypenameContext* AergiaCpp14Parser::thetypename() {
  ThetypenameContext *_localctx = _tracker.createInstance<ThetypenameContext>(_ctx, getState());
  enterRule(_localctx, 184, AergiaCpp14Parser::RuleThetypename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1411);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1407);
      classname();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1408);
      enumname();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1409);
      typedefname();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1410);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecltypespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::DecltypespecifierContext::DecltypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::DecltypespecifierContext::Decltype() {
  return getToken(AergiaCpp14Parser::Decltype, 0);
}

tree::TerminalNode* AergiaCpp14Parser::DecltypespecifierContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ExpressionContext* AergiaCpp14Parser::DecltypespecifierContext::expression() {
  return getRuleContext<AergiaCpp14Parser::ExpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::DecltypespecifierContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::DecltypespecifierContext::Auto() {
  return getToken(AergiaCpp14Parser::Auto, 0);
}


size_t AergiaCpp14Parser::DecltypespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleDecltypespecifier;
}

void AergiaCpp14Parser::DecltypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecltypespecifier(this);
}

void AergiaCpp14Parser::DecltypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecltypespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::DecltypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitDecltypespecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::DecltypespecifierContext* AergiaCpp14Parser::decltypespecifier() {
  DecltypespecifierContext *_localctx = _tracker.createInstance<DecltypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 186, AergiaCpp14Parser::RuleDecltypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1422);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1413);
      match(AergiaCpp14Parser::Decltype);
      setState(1414);
      match(AergiaCpp14Parser::LeftParen);
      setState(1415);
      expression(0);
      setState(1416);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1418);
      match(AergiaCpp14Parser::Decltype);
      setState(1419);
      match(AergiaCpp14Parser::LeftParen);
      setState(1420);
      match(AergiaCpp14Parser::Auto);
      setState(1421);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElaboratedtypespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::ElaboratedtypespecifierContext::ElaboratedtypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ClasskeyContext* AergiaCpp14Parser::ElaboratedtypespecifierContext::classkey() {
  return getRuleContext<AergiaCpp14Parser::ClasskeyContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ElaboratedtypespecifierContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::ElaboratedtypespecifierContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::ElaboratedtypespecifierContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}

AergiaCpp14Parser::SimpletemplateidContext* AergiaCpp14Parser::ElaboratedtypespecifierContext::simpletemplateid() {
  return getRuleContext<AergiaCpp14Parser::SimpletemplateidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ElaboratedtypespecifierContext::Template() {
  return getToken(AergiaCpp14Parser::Template, 0);
}

tree::TerminalNode* AergiaCpp14Parser::ElaboratedtypespecifierContext::Enum() {
  return getToken(AergiaCpp14Parser::Enum, 0);
}


size_t AergiaCpp14Parser::ElaboratedtypespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleElaboratedtypespecifier;
}

void AergiaCpp14Parser::ElaboratedtypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElaboratedtypespecifier(this);
}

void AergiaCpp14Parser::ElaboratedtypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElaboratedtypespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::ElaboratedtypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitElaboratedtypespecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ElaboratedtypespecifierContext* AergiaCpp14Parser::elaboratedtypespecifier() {
  ElaboratedtypespecifierContext *_localctx = _tracker.createInstance<ElaboratedtypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 188, AergiaCpp14Parser::RuleElaboratedtypespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1448);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1424);
      classkey();
      setState(1426);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1425);
        attributespecifierseq(0);
      }
      setState(1429);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
      case 1: {
        setState(1428);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1431);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1433);
      classkey();
      setState(1434);
      simpletemplateid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1436);
      classkey();
      setState(1437);
      nestednamespecifier(0);
      setState(1439);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Template) {
        setState(1438);
        match(AergiaCpp14Parser::Template);
      }
      setState(1441);
      simpletemplateid();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1443);
      match(AergiaCpp14Parser::Enum);
      setState(1445);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
      case 1: {
        setState(1444);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1447);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumnameContext ------------------------------------------------------------------

AergiaCpp14Parser::EnumnameContext::EnumnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::EnumnameContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}


size_t AergiaCpp14Parser::EnumnameContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleEnumname;
}

void AergiaCpp14Parser::EnumnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumname(this);
}

void AergiaCpp14Parser::EnumnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumname(this);
}


antlrcpp::Any AergiaCpp14Parser::EnumnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitEnumname(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::EnumnameContext* AergiaCpp14Parser::enumname() {
  EnumnameContext *_localctx = _tracker.createInstance<EnumnameContext>(_ctx, getState());
  enterRule(_localctx, 190, AergiaCpp14Parser::RuleEnumname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1450);
    match(AergiaCpp14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumspecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::EnumspecifierContext::EnumspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::EnumheadContext* AergiaCpp14Parser::EnumspecifierContext::enumhead() {
  return getRuleContext<AergiaCpp14Parser::EnumheadContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::EnumspecifierContext::LeftBrace() {
  return getToken(AergiaCpp14Parser::LeftBrace, 0);
}

tree::TerminalNode* AergiaCpp14Parser::EnumspecifierContext::RightBrace() {
  return getToken(AergiaCpp14Parser::RightBrace, 0);
}

AergiaCpp14Parser::EnumeratorlistContext* AergiaCpp14Parser::EnumspecifierContext::enumeratorlist() {
  return getRuleContext<AergiaCpp14Parser::EnumeratorlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::EnumspecifierContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::EnumspecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleEnumspecifier;
}

void AergiaCpp14Parser::EnumspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumspecifier(this);
}

void AergiaCpp14Parser::EnumspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumspecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::EnumspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitEnumspecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::EnumspecifierContext* AergiaCpp14Parser::enumspecifier() {
  EnumspecifierContext *_localctx = _tracker.createInstance<EnumspecifierContext>(_ctx, getState());
  enterRule(_localctx, 192, AergiaCpp14Parser::RuleEnumspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1465);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1452);
      enumhead();
      setState(1453);
      match(AergiaCpp14Parser::LeftBrace);
      setState(1455);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(1454);
        enumeratorlist(0);
      }
      setState(1457);
      match(AergiaCpp14Parser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1459);
      enumhead();
      setState(1460);
      match(AergiaCpp14Parser::LeftBrace);
      setState(1461);
      enumeratorlist(0);
      setState(1462);
      match(AergiaCpp14Parser::Comma);
      setState(1463);
      match(AergiaCpp14Parser::RightBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumheadContext ------------------------------------------------------------------

AergiaCpp14Parser::EnumheadContext::EnumheadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::EnumkeyContext* AergiaCpp14Parser::EnumheadContext::enumkey() {
  return getRuleContext<AergiaCpp14Parser::EnumkeyContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::EnumheadContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::EnumheadContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

AergiaCpp14Parser::EnumbaseContext* AergiaCpp14Parser::EnumheadContext::enumbase() {
  return getRuleContext<AergiaCpp14Parser::EnumbaseContext>(0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::EnumheadContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}


size_t AergiaCpp14Parser::EnumheadContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleEnumhead;
}

void AergiaCpp14Parser::EnumheadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumhead(this);
}

void AergiaCpp14Parser::EnumheadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumhead(this);
}


antlrcpp::Any AergiaCpp14Parser::EnumheadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitEnumhead(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::EnumheadContext* AergiaCpp14Parser::enumhead() {
  EnumheadContext *_localctx = _tracker.createInstance<EnumheadContext>(_ctx, getState());
  enterRule(_localctx, 194, AergiaCpp14Parser::RuleEnumhead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1486);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1467);
      enumkey();
      setState(1469);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1468);
        attributespecifierseq(0);
      }
      setState(1472);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(1471);
        match(AergiaCpp14Parser::Identifier);
      }
      setState(1475);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Colon) {
        setState(1474);
        enumbase();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1477);
      enumkey();
      setState(1479);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1478);
        attributespecifierseq(0);
      }
      setState(1481);
      nestednamespecifier(0);
      setState(1482);
      match(AergiaCpp14Parser::Identifier);
      setState(1484);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Colon) {
        setState(1483);
        enumbase();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpaqueenumdeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::OpaqueenumdeclarationContext::OpaqueenumdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::EnumkeyContext* AergiaCpp14Parser::OpaqueenumdeclarationContext::enumkey() {
  return getRuleContext<AergiaCpp14Parser::EnumkeyContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::OpaqueenumdeclarationContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

tree::TerminalNode* AergiaCpp14Parser::OpaqueenumdeclarationContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::OpaqueenumdeclarationContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::EnumbaseContext* AergiaCpp14Parser::OpaqueenumdeclarationContext::enumbase() {
  return getRuleContext<AergiaCpp14Parser::EnumbaseContext>(0);
}


size_t AergiaCpp14Parser::OpaqueenumdeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleOpaqueenumdeclaration;
}

void AergiaCpp14Parser::OpaqueenumdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpaqueenumdeclaration(this);
}

void AergiaCpp14Parser::OpaqueenumdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpaqueenumdeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::OpaqueenumdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitOpaqueenumdeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::OpaqueenumdeclarationContext* AergiaCpp14Parser::opaqueenumdeclaration() {
  OpaqueenumdeclarationContext *_localctx = _tracker.createInstance<OpaqueenumdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 196, AergiaCpp14Parser::RuleOpaqueenumdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1488);
    enumkey();
    setState(1490);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(1489);
      attributespecifierseq(0);
    }
    setState(1492);
    match(AergiaCpp14Parser::Identifier);
    setState(1494);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Colon) {
      setState(1493);
      enumbase();
    }
    setState(1496);
    match(AergiaCpp14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumkeyContext ------------------------------------------------------------------

AergiaCpp14Parser::EnumkeyContext::EnumkeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::EnumkeyContext::Enum() {
  return getToken(AergiaCpp14Parser::Enum, 0);
}

tree::TerminalNode* AergiaCpp14Parser::EnumkeyContext::Class() {
  return getToken(AergiaCpp14Parser::Class, 0);
}

tree::TerminalNode* AergiaCpp14Parser::EnumkeyContext::Struct() {
  return getToken(AergiaCpp14Parser::Struct, 0);
}


size_t AergiaCpp14Parser::EnumkeyContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleEnumkey;
}

void AergiaCpp14Parser::EnumkeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumkey(this);
}

void AergiaCpp14Parser::EnumkeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumkey(this);
}


antlrcpp::Any AergiaCpp14Parser::EnumkeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitEnumkey(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::EnumkeyContext* AergiaCpp14Parser::enumkey() {
  EnumkeyContext *_localctx = _tracker.createInstance<EnumkeyContext>(_ctx, getState());
  enterRule(_localctx, 198, AergiaCpp14Parser::RuleEnumkey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1503);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1498);
      match(AergiaCpp14Parser::Enum);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1499);
      match(AergiaCpp14Parser::Enum);
      setState(1500);
      match(AergiaCpp14Parser::Class);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1501);
      match(AergiaCpp14Parser::Enum);
      setState(1502);
      match(AergiaCpp14Parser::Struct);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumbaseContext ------------------------------------------------------------------

AergiaCpp14Parser::EnumbaseContext::EnumbaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::EnumbaseContext::Colon() {
  return getToken(AergiaCpp14Parser::Colon, 0);
}

AergiaCpp14Parser::TypespecifierseqContext* AergiaCpp14Parser::EnumbaseContext::typespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::TypespecifierseqContext>(0);
}


size_t AergiaCpp14Parser::EnumbaseContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleEnumbase;
}

void AergiaCpp14Parser::EnumbaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumbase(this);
}

void AergiaCpp14Parser::EnumbaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumbase(this);
}


antlrcpp::Any AergiaCpp14Parser::EnumbaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitEnumbase(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::EnumbaseContext* AergiaCpp14Parser::enumbase() {
  EnumbaseContext *_localctx = _tracker.createInstance<EnumbaseContext>(_ctx, getState());
  enterRule(_localctx, 200, AergiaCpp14Parser::RuleEnumbase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1505);
    match(AergiaCpp14Parser::Colon);
    setState(1506);
    typespecifierseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorlistContext ------------------------------------------------------------------

AergiaCpp14Parser::EnumeratorlistContext::EnumeratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::EnumeratordefinitionContext* AergiaCpp14Parser::EnumeratorlistContext::enumeratordefinition() {
  return getRuleContext<AergiaCpp14Parser::EnumeratordefinitionContext>(0);
}

AergiaCpp14Parser::EnumeratorlistContext* AergiaCpp14Parser::EnumeratorlistContext::enumeratorlist() {
  return getRuleContext<AergiaCpp14Parser::EnumeratorlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::EnumeratorlistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::EnumeratorlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleEnumeratorlist;
}

void AergiaCpp14Parser::EnumeratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorlist(this);
}

void AergiaCpp14Parser::EnumeratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorlist(this);
}


antlrcpp::Any AergiaCpp14Parser::EnumeratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitEnumeratorlist(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::EnumeratorlistContext* AergiaCpp14Parser::enumeratorlist() {
   return enumeratorlist(0);
}

AergiaCpp14Parser::EnumeratorlistContext* AergiaCpp14Parser::enumeratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::EnumeratorlistContext *_localctx = _tracker.createInstance<EnumeratorlistContext>(_ctx, parentState);
  AergiaCpp14Parser::EnumeratorlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 202;
  enterRecursionRule(_localctx, 202, AergiaCpp14Parser::RuleEnumeratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1509);
    enumeratordefinition();
    _ctx->stop = _input->LT(-1);
    setState(1516);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EnumeratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEnumeratorlist);
        setState(1511);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1512);
        match(AergiaCpp14Parser::Comma);
        setState(1513);
        enumeratordefinition(); 
      }
      setState(1518);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EnumeratordefinitionContext ------------------------------------------------------------------

AergiaCpp14Parser::EnumeratordefinitionContext::EnumeratordefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::EnumeratorContext* AergiaCpp14Parser::EnumeratordefinitionContext::enumerator() {
  return getRuleContext<AergiaCpp14Parser::EnumeratorContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::EnumeratordefinitionContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::EnumeratordefinitionContext::constantexpression() {
  return getRuleContext<AergiaCpp14Parser::ConstantexpressionContext>(0);
}


size_t AergiaCpp14Parser::EnumeratordefinitionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleEnumeratordefinition;
}

void AergiaCpp14Parser::EnumeratordefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratordefinition(this);
}

void AergiaCpp14Parser::EnumeratordefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratordefinition(this);
}


antlrcpp::Any AergiaCpp14Parser::EnumeratordefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitEnumeratordefinition(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::EnumeratordefinitionContext* AergiaCpp14Parser::enumeratordefinition() {
  EnumeratordefinitionContext *_localctx = _tracker.createInstance<EnumeratordefinitionContext>(_ctx, getState());
  enterRule(_localctx, 204, AergiaCpp14Parser::RuleEnumeratordefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1524);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1519);
      enumerator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1520);
      enumerator();
      setState(1521);
      match(AergiaCpp14Parser::Assign);
      setState(1522);
      constantexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

AergiaCpp14Parser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::EnumeratorContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}


size_t AergiaCpp14Parser::EnumeratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleEnumerator;
}

void AergiaCpp14Parser::EnumeratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerator(this);
}

void AergiaCpp14Parser::EnumeratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerator(this);
}


antlrcpp::Any AergiaCpp14Parser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitEnumerator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::EnumeratorContext* AergiaCpp14Parser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 206, AergiaCpp14Parser::RuleEnumerator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1526);
    match(AergiaCpp14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacenameContext ------------------------------------------------------------------

AergiaCpp14Parser::NamespacenameContext::NamespacenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::OriginalnamespacenameContext* AergiaCpp14Parser::NamespacenameContext::originalnamespacename() {
  return getRuleContext<AergiaCpp14Parser::OriginalnamespacenameContext>(0);
}

AergiaCpp14Parser::NamespacealiasContext* AergiaCpp14Parser::NamespacenameContext::namespacealias() {
  return getRuleContext<AergiaCpp14Parser::NamespacealiasContext>(0);
}


size_t AergiaCpp14Parser::NamespacenameContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNamespacename;
}

void AergiaCpp14Parser::NamespacenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacename(this);
}

void AergiaCpp14Parser::NamespacenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacename(this);
}


antlrcpp::Any AergiaCpp14Parser::NamespacenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNamespacename(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NamespacenameContext* AergiaCpp14Parser::namespacename() {
  NamespacenameContext *_localctx = _tracker.createInstance<NamespacenameContext>(_ctx, getState());
  enterRule(_localctx, 208, AergiaCpp14Parser::RuleNamespacename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1530);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1528);
      originalnamespacename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1529);
      namespacealias();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalnamespacenameContext ------------------------------------------------------------------

AergiaCpp14Parser::OriginalnamespacenameContext::OriginalnamespacenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::OriginalnamespacenameContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}


size_t AergiaCpp14Parser::OriginalnamespacenameContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleOriginalnamespacename;
}

void AergiaCpp14Parser::OriginalnamespacenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOriginalnamespacename(this);
}

void AergiaCpp14Parser::OriginalnamespacenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOriginalnamespacename(this);
}


antlrcpp::Any AergiaCpp14Parser::OriginalnamespacenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitOriginalnamespacename(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::OriginalnamespacenameContext* AergiaCpp14Parser::originalnamespacename() {
  OriginalnamespacenameContext *_localctx = _tracker.createInstance<OriginalnamespacenameContext>(_ctx, getState());
  enterRule(_localctx, 210, AergiaCpp14Parser::RuleOriginalnamespacename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1532);
    match(AergiaCpp14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacedefinitionContext ------------------------------------------------------------------

AergiaCpp14Parser::NamespacedefinitionContext::NamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::NamednamespacedefinitionContext* AergiaCpp14Parser::NamespacedefinitionContext::namednamespacedefinition() {
  return getRuleContext<AergiaCpp14Parser::NamednamespacedefinitionContext>(0);
}

AergiaCpp14Parser::UnnamednamespacedefinitionContext* AergiaCpp14Parser::NamespacedefinitionContext::unnamednamespacedefinition() {
  return getRuleContext<AergiaCpp14Parser::UnnamednamespacedefinitionContext>(0);
}


size_t AergiaCpp14Parser::NamespacedefinitionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNamespacedefinition;
}

void AergiaCpp14Parser::NamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacedefinition(this);
}

void AergiaCpp14Parser::NamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacedefinition(this);
}


antlrcpp::Any AergiaCpp14Parser::NamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NamespacedefinitionContext* AergiaCpp14Parser::namespacedefinition() {
  NamespacedefinitionContext *_localctx = _tracker.createInstance<NamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 212, AergiaCpp14Parser::RuleNamespacedefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1536);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 143, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1534);
      namednamespacedefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1535);
      unnamednamespacedefinition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamednamespacedefinitionContext ------------------------------------------------------------------

AergiaCpp14Parser::NamednamespacedefinitionContext::NamednamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::OriginalnamespacedefinitionContext* AergiaCpp14Parser::NamednamespacedefinitionContext::originalnamespacedefinition() {
  return getRuleContext<AergiaCpp14Parser::OriginalnamespacedefinitionContext>(0);
}


size_t AergiaCpp14Parser::NamednamespacedefinitionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNamednamespacedefinition;
}

void AergiaCpp14Parser::NamednamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamednamespacedefinition(this);
}

void AergiaCpp14Parser::NamednamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamednamespacedefinition(this);
}


antlrcpp::Any AergiaCpp14Parser::NamednamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNamednamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NamednamespacedefinitionContext* AergiaCpp14Parser::namednamespacedefinition() {
  NamednamespacedefinitionContext *_localctx = _tracker.createInstance<NamednamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 214, AergiaCpp14Parser::RuleNamednamespacedefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1538);
    originalnamespacedefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalnamespacedefinitionContext ------------------------------------------------------------------

AergiaCpp14Parser::OriginalnamespacedefinitionContext::OriginalnamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::OriginalnamespacedefinitionContext::Namespace() {
  return getToken(AergiaCpp14Parser::Namespace, 0);
}

tree::TerminalNode* AergiaCpp14Parser::OriginalnamespacedefinitionContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

tree::TerminalNode* AergiaCpp14Parser::OriginalnamespacedefinitionContext::LeftBrace() {
  return getToken(AergiaCpp14Parser::LeftBrace, 0);
}

AergiaCpp14Parser::NamespacebodyContext* AergiaCpp14Parser::OriginalnamespacedefinitionContext::namespacebody() {
  return getRuleContext<AergiaCpp14Parser::NamespacebodyContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::OriginalnamespacedefinitionContext::RightBrace() {
  return getToken(AergiaCpp14Parser::RightBrace, 0);
}

tree::TerminalNode* AergiaCpp14Parser::OriginalnamespacedefinitionContext::Inline() {
  return getToken(AergiaCpp14Parser::Inline, 0);
}


size_t AergiaCpp14Parser::OriginalnamespacedefinitionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleOriginalnamespacedefinition;
}

void AergiaCpp14Parser::OriginalnamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOriginalnamespacedefinition(this);
}

void AergiaCpp14Parser::OriginalnamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOriginalnamespacedefinition(this);
}


antlrcpp::Any AergiaCpp14Parser::OriginalnamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitOriginalnamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::OriginalnamespacedefinitionContext* AergiaCpp14Parser::originalnamespacedefinition() {
  OriginalnamespacedefinitionContext *_localctx = _tracker.createInstance<OriginalnamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 216, AergiaCpp14Parser::RuleOriginalnamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1541);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Inline) {
      setState(1540);
      match(AergiaCpp14Parser::Inline);
    }
    setState(1543);
    match(AergiaCpp14Parser::Namespace);
    setState(1544);
    match(AergiaCpp14Parser::Identifier);
    setState(1545);
    match(AergiaCpp14Parser::LeftBrace);
    setState(1546);
    namespacebody();
    setState(1547);
    match(AergiaCpp14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnnamednamespacedefinitionContext ------------------------------------------------------------------

AergiaCpp14Parser::UnnamednamespacedefinitionContext::UnnamednamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::UnnamednamespacedefinitionContext::Namespace() {
  return getToken(AergiaCpp14Parser::Namespace, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UnnamednamespacedefinitionContext::LeftBrace() {
  return getToken(AergiaCpp14Parser::LeftBrace, 0);
}

AergiaCpp14Parser::NamespacebodyContext* AergiaCpp14Parser::UnnamednamespacedefinitionContext::namespacebody() {
  return getRuleContext<AergiaCpp14Parser::NamespacebodyContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::UnnamednamespacedefinitionContext::RightBrace() {
  return getToken(AergiaCpp14Parser::RightBrace, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UnnamednamespacedefinitionContext::Inline() {
  return getToken(AergiaCpp14Parser::Inline, 0);
}


size_t AergiaCpp14Parser::UnnamednamespacedefinitionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleUnnamednamespacedefinition;
}

void AergiaCpp14Parser::UnnamednamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnnamednamespacedefinition(this);
}

void AergiaCpp14Parser::UnnamednamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnnamednamespacedefinition(this);
}


antlrcpp::Any AergiaCpp14Parser::UnnamednamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitUnnamednamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::UnnamednamespacedefinitionContext* AergiaCpp14Parser::unnamednamespacedefinition() {
  UnnamednamespacedefinitionContext *_localctx = _tracker.createInstance<UnnamednamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 218, AergiaCpp14Parser::RuleUnnamednamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1550);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Inline) {
      setState(1549);
      match(AergiaCpp14Parser::Inline);
    }
    setState(1552);
    match(AergiaCpp14Parser::Namespace);
    setState(1553);
    match(AergiaCpp14Parser::LeftBrace);
    setState(1554);
    namespacebody();
    setState(1555);
    match(AergiaCpp14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacebodyContext ------------------------------------------------------------------

AergiaCpp14Parser::NamespacebodyContext::NamespacebodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::DeclarationseqContext* AergiaCpp14Parser::NamespacebodyContext::declarationseq() {
  return getRuleContext<AergiaCpp14Parser::DeclarationseqContext>(0);
}


size_t AergiaCpp14Parser::NamespacebodyContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNamespacebody;
}

void AergiaCpp14Parser::NamespacebodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacebody(this);
}

void AergiaCpp14Parser::NamespacebodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacebody(this);
}


antlrcpp::Any AergiaCpp14Parser::NamespacebodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNamespacebody(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NamespacebodyContext* AergiaCpp14Parser::namespacebody() {
  NamespacebodyContext *_localctx = _tracker.createInstance<NamespacebodyContext>(_ctx, getState());
  enterRule(_localctx, 220, AergiaCpp14Parser::RuleNamespacebody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1558);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
      | (1ULL << AergiaCpp14Parser::T__10)
      | (1ULL << AergiaCpp14Parser::MultiLineMacro)
      | (1ULL << AergiaCpp14Parser::Directive)
      | (1ULL << AergiaCpp14Parser::Alignas)
      | (1ULL << AergiaCpp14Parser::Asm)
      | (1ULL << AergiaCpp14Parser::Auto)
      | (1ULL << AergiaCpp14Parser::Bool)
      | (1ULL << AergiaCpp14Parser::Char)
      | (1ULL << AergiaCpp14Parser::Char16)
      | (1ULL << AergiaCpp14Parser::Char32)
      | (1ULL << AergiaCpp14Parser::Class)
      | (1ULL << AergiaCpp14Parser::Const)
      | (1ULL << AergiaCpp14Parser::Constexpr)
      | (1ULL << AergiaCpp14Parser::Decltype)
      | (1ULL << AergiaCpp14Parser::Double)
      | (1ULL << AergiaCpp14Parser::Enum)
      | (1ULL << AergiaCpp14Parser::Explicit)
      | (1ULL << AergiaCpp14Parser::Extern)
      | (1ULL << AergiaCpp14Parser::Float)
      | (1ULL << AergiaCpp14Parser::Friend)
      | (1ULL << AergiaCpp14Parser::Inline)
      | (1ULL << AergiaCpp14Parser::Int)
      | (1ULL << AergiaCpp14Parser::Long)
      | (1ULL << AergiaCpp14Parser::Mutable)
      | (1ULL << AergiaCpp14Parser::Namespace)
      | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Register - 65))
      | (1ULL << (AergiaCpp14Parser::Short - 65))
      | (1ULL << (AergiaCpp14Parser::Signed - 65))
      | (1ULL << (AergiaCpp14Parser::Static - 65))
      | (1ULL << (AergiaCpp14Parser::Static_assert - 65))
      | (1ULL << (AergiaCpp14Parser::Struct - 65))
      | (1ULL << (AergiaCpp14Parser::Template - 65))
      | (1ULL << (AergiaCpp14Parser::Thread_local - 65))
      | (1ULL << (AergiaCpp14Parser::Typedef - 65))
      | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
      | (1ULL << (AergiaCpp14Parser::Union - 65))
      | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
      | (1ULL << (AergiaCpp14Parser::Using - 65))
      | (1ULL << (AergiaCpp14Parser::Virtual - 65))
      | (1ULL << (AergiaCpp14Parser::Void - 65))
      | (1ULL << (AergiaCpp14Parser::Volatile - 65))
      | (1ULL << (AergiaCpp14Parser::Wchar - 65))
      | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
      | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
      | (1ULL << (AergiaCpp14Parser::Star - 65))
      | (1ULL << (AergiaCpp14Parser::And - 65))
      | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 137)) & ((1ULL << (AergiaCpp14Parser::Doublecolon - 137))
      | (1ULL << (AergiaCpp14Parser::Semi - 137))
      | (1ULL << (AergiaCpp14Parser::Ellipsis - 137))
      | (1ULL << (AergiaCpp14Parser::Identifier - 137)))) != 0)) {
      setState(1557);
      declarationseq(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacealiasContext ------------------------------------------------------------------

AergiaCpp14Parser::NamespacealiasContext::NamespacealiasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::NamespacealiasContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}


size_t AergiaCpp14Parser::NamespacealiasContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNamespacealias;
}

void AergiaCpp14Parser::NamespacealiasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacealias(this);
}

void AergiaCpp14Parser::NamespacealiasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacealias(this);
}


antlrcpp::Any AergiaCpp14Parser::NamespacealiasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNamespacealias(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NamespacealiasContext* AergiaCpp14Parser::namespacealias() {
  NamespacealiasContext *_localctx = _tracker.createInstance<NamespacealiasContext>(_ctx, getState());
  enterRule(_localctx, 222, AergiaCpp14Parser::RuleNamespacealias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1560);
    match(AergiaCpp14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacealiasdefinitionContext ------------------------------------------------------------------

AergiaCpp14Parser::NamespacealiasdefinitionContext::NamespacealiasdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::NamespacealiasdefinitionContext::Namespace() {
  return getToken(AergiaCpp14Parser::Namespace, 0);
}

tree::TerminalNode* AergiaCpp14Parser::NamespacealiasdefinitionContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

tree::TerminalNode* AergiaCpp14Parser::NamespacealiasdefinitionContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}

AergiaCpp14Parser::QualifiednamespacespecifierContext* AergiaCpp14Parser::NamespacealiasdefinitionContext::qualifiednamespacespecifier() {
  return getRuleContext<AergiaCpp14Parser::QualifiednamespacespecifierContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NamespacealiasdefinitionContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}


size_t AergiaCpp14Parser::NamespacealiasdefinitionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNamespacealiasdefinition;
}

void AergiaCpp14Parser::NamespacealiasdefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacealiasdefinition(this);
}

void AergiaCpp14Parser::NamespacealiasdefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacealiasdefinition(this);
}


antlrcpp::Any AergiaCpp14Parser::NamespacealiasdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNamespacealiasdefinition(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NamespacealiasdefinitionContext* AergiaCpp14Parser::namespacealiasdefinition() {
  NamespacealiasdefinitionContext *_localctx = _tracker.createInstance<NamespacealiasdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 224, AergiaCpp14Parser::RuleNamespacealiasdefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1562);
    match(AergiaCpp14Parser::Namespace);
    setState(1563);
    match(AergiaCpp14Parser::Identifier);
    setState(1564);
    match(AergiaCpp14Parser::Assign);
    setState(1565);
    qualifiednamespacespecifier();
    setState(1566);
    match(AergiaCpp14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiednamespacespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::QualifiednamespacespecifierContext::QualifiednamespacespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::NamespacenameContext* AergiaCpp14Parser::QualifiednamespacespecifierContext::namespacename() {
  return getRuleContext<AergiaCpp14Parser::NamespacenameContext>(0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::QualifiednamespacespecifierContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}


size_t AergiaCpp14Parser::QualifiednamespacespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleQualifiednamespacespecifier;
}

void AergiaCpp14Parser::QualifiednamespacespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiednamespacespecifier(this);
}

void AergiaCpp14Parser::QualifiednamespacespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiednamespacespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::QualifiednamespacespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitQualifiednamespacespecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::QualifiednamespacespecifierContext* AergiaCpp14Parser::qualifiednamespacespecifier() {
  QualifiednamespacespecifierContext *_localctx = _tracker.createInstance<QualifiednamespacespecifierContext>(_ctx, getState());
  enterRule(_localctx, 226, AergiaCpp14Parser::RuleQualifiednamespacespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1569);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx)) {
    case 1: {
      setState(1568);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1571);
    namespacename();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingdeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::UsingdeclarationContext::UsingdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::UsingdeclarationContext::Using() {
  return getToken(AergiaCpp14Parser::Using, 0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::UsingdeclarationContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}

AergiaCpp14Parser::UnqualifiedidContext* AergiaCpp14Parser::UsingdeclarationContext::unqualifiedid() {
  return getRuleContext<AergiaCpp14Parser::UnqualifiedidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::UsingdeclarationContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UsingdeclarationContext::Typename_() {
  return getToken(AergiaCpp14Parser::Typename_, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UsingdeclarationContext::Doublecolon() {
  return getToken(AergiaCpp14Parser::Doublecolon, 0);
}


size_t AergiaCpp14Parser::UsingdeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleUsingdeclaration;
}

void AergiaCpp14Parser::UsingdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingdeclaration(this);
}

void AergiaCpp14Parser::UsingdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingdeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::UsingdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitUsingdeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::UsingdeclarationContext* AergiaCpp14Parser::usingdeclaration() {
  UsingdeclarationContext *_localctx = _tracker.createInstance<UsingdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 228, AergiaCpp14Parser::RuleUsingdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1586);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1573);
      match(AergiaCpp14Parser::Using);
      setState(1575);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Typename_) {
        setState(1574);
        match(AergiaCpp14Parser::Typename_);
      }
      setState(1577);
      nestednamespecifier(0);
      setState(1578);
      unqualifiedid();
      setState(1579);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1581);
      match(AergiaCpp14Parser::Using);
      setState(1582);
      match(AergiaCpp14Parser::Doublecolon);
      setState(1583);
      unqualifiedid();
      setState(1584);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingdirectiveContext ------------------------------------------------------------------

AergiaCpp14Parser::UsingdirectiveContext::UsingdirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::UsingdirectiveContext::Using() {
  return getToken(AergiaCpp14Parser::Using, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UsingdirectiveContext::Namespace() {
  return getToken(AergiaCpp14Parser::Namespace, 0);
}

AergiaCpp14Parser::NamespacenameContext* AergiaCpp14Parser::UsingdirectiveContext::namespacename() {
  return getRuleContext<AergiaCpp14Parser::NamespacenameContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::UsingdirectiveContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::UsingdirectiveContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::UsingdirectiveContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}


size_t AergiaCpp14Parser::UsingdirectiveContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleUsingdirective;
}

void AergiaCpp14Parser::UsingdirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingdirective(this);
}

void AergiaCpp14Parser::UsingdirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingdirective(this);
}


antlrcpp::Any AergiaCpp14Parser::UsingdirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitUsingdirective(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::UsingdirectiveContext* AergiaCpp14Parser::usingdirective() {
  UsingdirectiveContext *_localctx = _tracker.createInstance<UsingdirectiveContext>(_ctx, getState());
  enterRule(_localctx, 230, AergiaCpp14Parser::RuleUsingdirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1589);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(1588);
      attributespecifierseq(0);
    }
    setState(1591);
    match(AergiaCpp14Parser::Using);
    setState(1592);
    match(AergiaCpp14Parser::Namespace);
    setState(1594);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx)) {
    case 1: {
      setState(1593);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1596);
    namespacename();
    setState(1597);
    match(AergiaCpp14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsmdefinitionContext ------------------------------------------------------------------

AergiaCpp14Parser::AsmdefinitionContext::AsmdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::AsmdefinitionContext::Asm() {
  return getToken(AergiaCpp14Parser::Asm, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AsmdefinitionContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AsmdefinitionContext::Stringliteral() {
  return getToken(AergiaCpp14Parser::Stringliteral, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AsmdefinitionContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AsmdefinitionContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}


size_t AergiaCpp14Parser::AsmdefinitionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAsmdefinition;
}

void AergiaCpp14Parser::AsmdefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsmdefinition(this);
}

void AergiaCpp14Parser::AsmdefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsmdefinition(this);
}


antlrcpp::Any AergiaCpp14Parser::AsmdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAsmdefinition(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AsmdefinitionContext* AergiaCpp14Parser::asmdefinition() {
  AsmdefinitionContext *_localctx = _tracker.createInstance<AsmdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 232, AergiaCpp14Parser::RuleAsmdefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1599);
    match(AergiaCpp14Parser::Asm);
    setState(1600);
    match(AergiaCpp14Parser::LeftParen);
    setState(1601);
    match(AergiaCpp14Parser::Stringliteral);
    setState(1602);
    match(AergiaCpp14Parser::RightParen);
    setState(1603);
    match(AergiaCpp14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinkagespecificationContext ------------------------------------------------------------------

AergiaCpp14Parser::LinkagespecificationContext::LinkagespecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::LinkagespecificationContext::Extern() {
  return getToken(AergiaCpp14Parser::Extern, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LinkagespecificationContext::Stringliteral() {
  return getToken(AergiaCpp14Parser::Stringliteral, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LinkagespecificationContext::LeftBrace() {
  return getToken(AergiaCpp14Parser::LeftBrace, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LinkagespecificationContext::RightBrace() {
  return getToken(AergiaCpp14Parser::RightBrace, 0);
}

AergiaCpp14Parser::DeclarationseqContext* AergiaCpp14Parser::LinkagespecificationContext::declarationseq() {
  return getRuleContext<AergiaCpp14Parser::DeclarationseqContext>(0);
}

AergiaCpp14Parser::DeclarationContext* AergiaCpp14Parser::LinkagespecificationContext::declaration() {
  return getRuleContext<AergiaCpp14Parser::DeclarationContext>(0);
}


size_t AergiaCpp14Parser::LinkagespecificationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleLinkagespecification;
}

void AergiaCpp14Parser::LinkagespecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLinkagespecification(this);
}

void AergiaCpp14Parser::LinkagespecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLinkagespecification(this);
}


antlrcpp::Any AergiaCpp14Parser::LinkagespecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitLinkagespecification(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::LinkagespecificationContext* AergiaCpp14Parser::linkagespecification() {
  LinkagespecificationContext *_localctx = _tracker.createInstance<LinkagespecificationContext>(_ctx, getState());
  enterRule(_localctx, 234, AergiaCpp14Parser::RuleLinkagespecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1615);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1605);
      match(AergiaCpp14Parser::Extern);
      setState(1606);
      match(AergiaCpp14Parser::Stringliteral);
      setState(1607);
      match(AergiaCpp14Parser::LeftBrace);
      setState(1609);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
        | (1ULL << AergiaCpp14Parser::T__10)
        | (1ULL << AergiaCpp14Parser::MultiLineMacro)
        | (1ULL << AergiaCpp14Parser::Directive)
        | (1ULL << AergiaCpp14Parser::Alignas)
        | (1ULL << AergiaCpp14Parser::Asm)
        | (1ULL << AergiaCpp14Parser::Auto)
        | (1ULL << AergiaCpp14Parser::Bool)
        | (1ULL << AergiaCpp14Parser::Char)
        | (1ULL << AergiaCpp14Parser::Char16)
        | (1ULL << AergiaCpp14Parser::Char32)
        | (1ULL << AergiaCpp14Parser::Class)
        | (1ULL << AergiaCpp14Parser::Const)
        | (1ULL << AergiaCpp14Parser::Constexpr)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Double)
        | (1ULL << AergiaCpp14Parser::Enum)
        | (1ULL << AergiaCpp14Parser::Explicit)
        | (1ULL << AergiaCpp14Parser::Extern)
        | (1ULL << AergiaCpp14Parser::Float)
        | (1ULL << AergiaCpp14Parser::Friend)
        | (1ULL << AergiaCpp14Parser::Inline)
        | (1ULL << AergiaCpp14Parser::Int)
        | (1ULL << AergiaCpp14Parser::Long)
        | (1ULL << AergiaCpp14Parser::Mutable)
        | (1ULL << AergiaCpp14Parser::Namespace)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Register - 65))
        | (1ULL << (AergiaCpp14Parser::Short - 65))
        | (1ULL << (AergiaCpp14Parser::Signed - 65))
        | (1ULL << (AergiaCpp14Parser::Static - 65))
        | (1ULL << (AergiaCpp14Parser::Static_assert - 65))
        | (1ULL << (AergiaCpp14Parser::Struct - 65))
        | (1ULL << (AergiaCpp14Parser::Template - 65))
        | (1ULL << (AergiaCpp14Parser::Thread_local - 65))
        | (1ULL << (AergiaCpp14Parser::Typedef - 65))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
        | (1ULL << (AergiaCpp14Parser::Union - 65))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
        | (1ULL << (AergiaCpp14Parser::Using - 65))
        | (1ULL << (AergiaCpp14Parser::Virtual - 65))
        | (1ULL << (AergiaCpp14Parser::Void - 65))
        | (1ULL << (AergiaCpp14Parser::Volatile - 65))
        | (1ULL << (AergiaCpp14Parser::Wchar - 65))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
        | (1ULL << (AergiaCpp14Parser::Star - 65))
        | (1ULL << (AergiaCpp14Parser::And - 65))
        | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 137)) & ((1ULL << (AergiaCpp14Parser::Doublecolon - 137))
        | (1ULL << (AergiaCpp14Parser::Semi - 137))
        | (1ULL << (AergiaCpp14Parser::Ellipsis - 137))
        | (1ULL << (AergiaCpp14Parser::Identifier - 137)))) != 0)) {
        setState(1608);
        declarationseq(0);
      }
      setState(1611);
      match(AergiaCpp14Parser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1612);
      match(AergiaCpp14Parser::Extern);
      setState(1613);
      match(AergiaCpp14Parser::Stringliteral);
      setState(1614);
      declaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributespecifierseqContext ------------------------------------------------------------------

AergiaCpp14Parser::AttributespecifierseqContext::AttributespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AttributespecifierContext* AergiaCpp14Parser::AttributespecifierseqContext::attributespecifier() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::AttributespecifierseqContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}


size_t AergiaCpp14Parser::AttributespecifierseqContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAttributespecifierseq;
}

void AergiaCpp14Parser::AttributespecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributespecifierseq(this);
}

void AergiaCpp14Parser::AttributespecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributespecifierseq(this);
}


antlrcpp::Any AergiaCpp14Parser::AttributespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAttributespecifierseq(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::attributespecifierseq() {
   return attributespecifierseq(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::attributespecifierseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::AttributespecifierseqContext *_localctx = _tracker.createInstance<AttributespecifierseqContext>(_ctx, parentState);
  AergiaCpp14Parser::AttributespecifierseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 236;
  enterRecursionRule(_localctx, 236, AergiaCpp14Parser::RuleAttributespecifierseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1618);
    attributespecifier();
    _ctx->stop = _input->LT(-1);
    setState(1624);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AttributespecifierseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAttributespecifierseq);
        setState(1620);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1621);
        attributespecifier(); 
      }
      setState(1626);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AttributespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::AttributespecifierContext::AttributespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AergiaCpp14Parser::AttributespecifierContext::LeftBracket() {
  return getTokens(AergiaCpp14Parser::LeftBracket);
}

tree::TerminalNode* AergiaCpp14Parser::AttributespecifierContext::LeftBracket(size_t i) {
  return getToken(AergiaCpp14Parser::LeftBracket, i);
}

AergiaCpp14Parser::AttributelistContext* AergiaCpp14Parser::AttributespecifierContext::attributelist() {
  return getRuleContext<AergiaCpp14Parser::AttributelistContext>(0);
}

std::vector<tree::TerminalNode *> AergiaCpp14Parser::AttributespecifierContext::RightBracket() {
  return getTokens(AergiaCpp14Parser::RightBracket);
}

tree::TerminalNode* AergiaCpp14Parser::AttributespecifierContext::RightBracket(size_t i) {
  return getToken(AergiaCpp14Parser::RightBracket, i);
}

AergiaCpp14Parser::AlignmentspecifierContext* AergiaCpp14Parser::AttributespecifierContext::alignmentspecifier() {
  return getRuleContext<AergiaCpp14Parser::AlignmentspecifierContext>(0);
}


size_t AergiaCpp14Parser::AttributespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAttributespecifier;
}

void AergiaCpp14Parser::AttributespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributespecifier(this);
}

void AergiaCpp14Parser::AttributespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::AttributespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAttributespecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AttributespecifierContext* AergiaCpp14Parser::attributespecifier() {
  AttributespecifierContext *_localctx = _tracker.createInstance<AttributespecifierContext>(_ctx, getState());
  enterRule(_localctx, 238, AergiaCpp14Parser::RuleAttributespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1634);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1627);
        match(AergiaCpp14Parser::LeftBracket);
        setState(1628);
        match(AergiaCpp14Parser::LeftBracket);
        setState(1629);
        attributelist(0);
        setState(1630);
        match(AergiaCpp14Parser::RightBracket);
        setState(1631);
        match(AergiaCpp14Parser::RightBracket);
        break;
      }

      case AergiaCpp14Parser::Alignas: {
        enterOuterAlt(_localctx, 2);
        setState(1633);
        alignmentspecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlignmentspecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::AlignmentspecifierContext::AlignmentspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::AlignmentspecifierContext::Alignas() {
  return getToken(AergiaCpp14Parser::Alignas, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AlignmentspecifierContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ThetypeidContext* AergiaCpp14Parser::AlignmentspecifierContext::thetypeid() {
  return getRuleContext<AergiaCpp14Parser::ThetypeidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::AlignmentspecifierContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AlignmentspecifierContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::AlignmentspecifierContext::constantexpression() {
  return getRuleContext<AergiaCpp14Parser::ConstantexpressionContext>(0);
}


size_t AergiaCpp14Parser::AlignmentspecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAlignmentspecifier;
}

void AergiaCpp14Parser::AlignmentspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlignmentspecifier(this);
}

void AergiaCpp14Parser::AlignmentspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlignmentspecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::AlignmentspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAlignmentspecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AlignmentspecifierContext* AergiaCpp14Parser::alignmentspecifier() {
  AlignmentspecifierContext *_localctx = _tracker.createInstance<AlignmentspecifierContext>(_ctx, getState());
  enterRule(_localctx, 240, AergiaCpp14Parser::RuleAlignmentspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1652);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1636);
      match(AergiaCpp14Parser::Alignas);
      setState(1637);
      match(AergiaCpp14Parser::LeftParen);
      setState(1638);
      thetypeid();
      setState(1640);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Ellipsis) {
        setState(1639);
        match(AergiaCpp14Parser::Ellipsis);
      }
      setState(1642);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1644);
      match(AergiaCpp14Parser::Alignas);
      setState(1645);
      match(AergiaCpp14Parser::LeftParen);
      setState(1646);
      constantexpression();
      setState(1648);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Ellipsis) {
        setState(1647);
        match(AergiaCpp14Parser::Ellipsis);
      }
      setState(1650);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributelistContext ------------------------------------------------------------------

AergiaCpp14Parser::AttributelistContext::AttributelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AttributeContext* AergiaCpp14Parser::AttributelistContext::attribute() {
  return getRuleContext<AergiaCpp14Parser::AttributeContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::AttributelistContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

AergiaCpp14Parser::AttributelistContext* AergiaCpp14Parser::AttributelistContext::attributelist() {
  return getRuleContext<AergiaCpp14Parser::AttributelistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::AttributelistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::AttributelistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAttributelist;
}

void AergiaCpp14Parser::AttributelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributelist(this);
}

void AergiaCpp14Parser::AttributelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributelist(this);
}


antlrcpp::Any AergiaCpp14Parser::AttributelistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAttributelist(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::AttributelistContext* AergiaCpp14Parser::attributelist() {
   return attributelist(0);
}

AergiaCpp14Parser::AttributelistContext* AergiaCpp14Parser::attributelist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::AttributelistContext *_localctx = _tracker.createInstance<AttributelistContext>(_ctx, parentState);
  AergiaCpp14Parser::AttributelistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 242;
  enterRecursionRule(_localctx, 242, AergiaCpp14Parser::RuleAttributelist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1661);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx)) {
    case 1: {
      setState(1656);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
      case 1: {
        setState(1655);
        attribute();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1658);
      attribute();
      setState(1659);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1675);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1673);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AttributelistContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributelist);
          setState(1663);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1664);
          match(AergiaCpp14Parser::Comma);
          setState(1666);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx)) {
          case 1: {
            setState(1665);
            attribute();
            break;
          }

          }
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AttributelistContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributelist);
          setState(1668);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1669);
          match(AergiaCpp14Parser::Comma);
          setState(1670);
          attribute();
          setState(1671);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(1677);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

AergiaCpp14Parser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AttributetokenContext* AergiaCpp14Parser::AttributeContext::attributetoken() {
  return getRuleContext<AergiaCpp14Parser::AttributetokenContext>(0);
}

AergiaCpp14Parser::AttributeargumentclauseContext* AergiaCpp14Parser::AttributeContext::attributeargumentclause() {
  return getRuleContext<AergiaCpp14Parser::AttributeargumentclauseContext>(0);
}


size_t AergiaCpp14Parser::AttributeContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAttribute;
}

void AergiaCpp14Parser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void AergiaCpp14Parser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}


antlrcpp::Any AergiaCpp14Parser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AttributeContext* AergiaCpp14Parser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 244, AergiaCpp14Parser::RuleAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1678);
    attributetoken();
    setState(1680);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
    case 1: {
      setState(1679);
      attributeargumentclause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributetokenContext ------------------------------------------------------------------

AergiaCpp14Parser::AttributetokenContext::AttributetokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::AttributetokenContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

AergiaCpp14Parser::AttributescopedtokenContext* AergiaCpp14Parser::AttributetokenContext::attributescopedtoken() {
  return getRuleContext<AergiaCpp14Parser::AttributescopedtokenContext>(0);
}


size_t AergiaCpp14Parser::AttributetokenContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAttributetoken;
}

void AergiaCpp14Parser::AttributetokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributetoken(this);
}

void AergiaCpp14Parser::AttributetokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributetoken(this);
}


antlrcpp::Any AergiaCpp14Parser::AttributetokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAttributetoken(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AttributetokenContext* AergiaCpp14Parser::attributetoken() {
  AttributetokenContext *_localctx = _tracker.createInstance<AttributetokenContext>(_ctx, getState());
  enterRule(_localctx, 246, AergiaCpp14Parser::RuleAttributetoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1684);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1682);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1683);
      attributescopedtoken();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributescopedtokenContext ------------------------------------------------------------------

AergiaCpp14Parser::AttributescopedtokenContext::AttributescopedtokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AttributenamespaceContext* AergiaCpp14Parser::AttributescopedtokenContext::attributenamespace() {
  return getRuleContext<AergiaCpp14Parser::AttributenamespaceContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::AttributescopedtokenContext::Doublecolon() {
  return getToken(AergiaCpp14Parser::Doublecolon, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AttributescopedtokenContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}


size_t AergiaCpp14Parser::AttributescopedtokenContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAttributescopedtoken;
}

void AergiaCpp14Parser::AttributescopedtokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributescopedtoken(this);
}

void AergiaCpp14Parser::AttributescopedtokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributescopedtoken(this);
}


antlrcpp::Any AergiaCpp14Parser::AttributescopedtokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAttributescopedtoken(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AttributescopedtokenContext* AergiaCpp14Parser::attributescopedtoken() {
  AttributescopedtokenContext *_localctx = _tracker.createInstance<AttributescopedtokenContext>(_ctx, getState());
  enterRule(_localctx, 248, AergiaCpp14Parser::RuleAttributescopedtoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1686);
    attributenamespace();
    setState(1687);
    match(AergiaCpp14Parser::Doublecolon);
    setState(1688);
    match(AergiaCpp14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributenamespaceContext ------------------------------------------------------------------

AergiaCpp14Parser::AttributenamespaceContext::AttributenamespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::AttributenamespaceContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}


size_t AergiaCpp14Parser::AttributenamespaceContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAttributenamespace;
}

void AergiaCpp14Parser::AttributenamespaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributenamespace(this);
}

void AergiaCpp14Parser::AttributenamespaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributenamespace(this);
}


antlrcpp::Any AergiaCpp14Parser::AttributenamespaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAttributenamespace(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AttributenamespaceContext* AergiaCpp14Parser::attributenamespace() {
  AttributenamespaceContext *_localctx = _tracker.createInstance<AttributenamespaceContext>(_ctx, getState());
  enterRule(_localctx, 250, AergiaCpp14Parser::RuleAttributenamespace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1690);
    match(AergiaCpp14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeargumentclauseContext ------------------------------------------------------------------

AergiaCpp14Parser::AttributeargumentclauseContext::AttributeargumentclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::AttributeargumentclauseContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::BalancedtokenseqContext* AergiaCpp14Parser::AttributeargumentclauseContext::balancedtokenseq() {
  return getRuleContext<AergiaCpp14Parser::BalancedtokenseqContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::AttributeargumentclauseContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}


size_t AergiaCpp14Parser::AttributeargumentclauseContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAttributeargumentclause;
}

void AergiaCpp14Parser::AttributeargumentclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeargumentclause(this);
}

void AergiaCpp14Parser::AttributeargumentclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeargumentclause(this);
}


antlrcpp::Any AergiaCpp14Parser::AttributeargumentclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAttributeargumentclause(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AttributeargumentclauseContext* AergiaCpp14Parser::attributeargumentclause() {
  AttributeargumentclauseContext *_localctx = _tracker.createInstance<AttributeargumentclauseContext>(_ctx, getState());
  enterRule(_localctx, 252, AergiaCpp14Parser::RuleAttributeargumentclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1692);
    match(AergiaCpp14Parser::LeftParen);
    setState(1693);
    balancedtokenseq(0);
    setState(1694);
    match(AergiaCpp14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BalancedtokenseqContext ------------------------------------------------------------------

AergiaCpp14Parser::BalancedtokenseqContext::BalancedtokenseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::BalancedtokenContext* AergiaCpp14Parser::BalancedtokenseqContext::balancedtoken() {
  return getRuleContext<AergiaCpp14Parser::BalancedtokenContext>(0);
}

AergiaCpp14Parser::BalancedtokenseqContext* AergiaCpp14Parser::BalancedtokenseqContext::balancedtokenseq() {
  return getRuleContext<AergiaCpp14Parser::BalancedtokenseqContext>(0);
}


size_t AergiaCpp14Parser::BalancedtokenseqContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleBalancedtokenseq;
}

void AergiaCpp14Parser::BalancedtokenseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedtokenseq(this);
}

void AergiaCpp14Parser::BalancedtokenseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedtokenseq(this);
}


antlrcpp::Any AergiaCpp14Parser::BalancedtokenseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitBalancedtokenseq(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::BalancedtokenseqContext* AergiaCpp14Parser::balancedtokenseq() {
   return balancedtokenseq(0);
}

AergiaCpp14Parser::BalancedtokenseqContext* AergiaCpp14Parser::balancedtokenseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::BalancedtokenseqContext *_localctx = _tracker.createInstance<BalancedtokenseqContext>(_ctx, parentState);
  AergiaCpp14Parser::BalancedtokenseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 254;
  enterRecursionRule(_localctx, 254, AergiaCpp14Parser::RuleBalancedtokenseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1698);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx)) {
    case 1: {
      setState(1697);
      balancedtoken();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1704);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BalancedtokenseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBalancedtokenseq);
        setState(1700);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1701);
        balancedtoken(); 
      }
      setState(1706);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BalancedtokenContext ------------------------------------------------------------------

AergiaCpp14Parser::BalancedtokenContext::BalancedtokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::BalancedtokenContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::BalancedtokenseqContext* AergiaCpp14Parser::BalancedtokenContext::balancedtokenseq() {
  return getRuleContext<AergiaCpp14Parser::BalancedtokenseqContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::BalancedtokenContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::BalancedtokenContext::LeftBracket() {
  return getToken(AergiaCpp14Parser::LeftBracket, 0);
}

tree::TerminalNode* AergiaCpp14Parser::BalancedtokenContext::RightBracket() {
  return getToken(AergiaCpp14Parser::RightBracket, 0);
}

tree::TerminalNode* AergiaCpp14Parser::BalancedtokenContext::LeftBrace() {
  return getToken(AergiaCpp14Parser::LeftBrace, 0);
}

tree::TerminalNode* AergiaCpp14Parser::BalancedtokenContext::RightBrace() {
  return getToken(AergiaCpp14Parser::RightBrace, 0);
}


size_t AergiaCpp14Parser::BalancedtokenContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleBalancedtoken;
}

void AergiaCpp14Parser::BalancedtokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedtoken(this);
}

void AergiaCpp14Parser::BalancedtokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedtoken(this);
}


antlrcpp::Any AergiaCpp14Parser::BalancedtokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitBalancedtoken(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::BalancedtokenContext* AergiaCpp14Parser::balancedtoken() {
  BalancedtokenContext *_localctx = _tracker.createInstance<BalancedtokenContext>(_ctx, getState());
  enterRule(_localctx, 256, AergiaCpp14Parser::RuleBalancedtoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1719);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(1707);
        match(AergiaCpp14Parser::LeftParen);
        setState(1708);
        balancedtokenseq(0);
        setState(1709);
        match(AergiaCpp14Parser::RightParen);
        break;
      }

      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1711);
        match(AergiaCpp14Parser::LeftBracket);
        setState(1712);
        balancedtokenseq(0);
        setState(1713);
        match(AergiaCpp14Parser::RightBracket);
        break;
      }

      case AergiaCpp14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 3);
        setState(1715);
        match(AergiaCpp14Parser::LeftBrace);
        setState(1716);
        balancedtokenseq(0);
        setState(1717);
        match(AergiaCpp14Parser::RightBrace);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitdeclaratorlistContext ------------------------------------------------------------------

AergiaCpp14Parser::InitdeclaratorlistContext::InitdeclaratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::InitdeclaratorContext* AergiaCpp14Parser::InitdeclaratorlistContext::initdeclarator() {
  return getRuleContext<AergiaCpp14Parser::InitdeclaratorContext>(0);
}

AergiaCpp14Parser::InitdeclaratorlistContext* AergiaCpp14Parser::InitdeclaratorlistContext::initdeclaratorlist() {
  return getRuleContext<AergiaCpp14Parser::InitdeclaratorlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::InitdeclaratorlistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::InitdeclaratorlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleInitdeclaratorlist;
}

void AergiaCpp14Parser::InitdeclaratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitdeclaratorlist(this);
}

void AergiaCpp14Parser::InitdeclaratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitdeclaratorlist(this);
}


antlrcpp::Any AergiaCpp14Parser::InitdeclaratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitInitdeclaratorlist(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::InitdeclaratorlistContext* AergiaCpp14Parser::initdeclaratorlist() {
   return initdeclaratorlist(0);
}

AergiaCpp14Parser::InitdeclaratorlistContext* AergiaCpp14Parser::initdeclaratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::InitdeclaratorlistContext *_localctx = _tracker.createInstance<InitdeclaratorlistContext>(_ctx, parentState);
  AergiaCpp14Parser::InitdeclaratorlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 258;
  enterRecursionRule(_localctx, 258, AergiaCpp14Parser::RuleInitdeclaratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1722);
    initdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(1729);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitdeclaratorlist);
        setState(1724);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1725);
        match(AergiaCpp14Parser::Comma);
        setState(1726);
        initdeclarator(); 
      }
      setState(1731);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InitdeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::InitdeclaratorContext::InitdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::DeclaratorContext* AergiaCpp14Parser::InitdeclaratorContext::declarator() {
  return getRuleContext<AergiaCpp14Parser::DeclaratorContext>(0);
}

AergiaCpp14Parser::InitializerContext* AergiaCpp14Parser::InitdeclaratorContext::initializer() {
  return getRuleContext<AergiaCpp14Parser::InitializerContext>(0);
}


size_t AergiaCpp14Parser::InitdeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleInitdeclarator;
}

void AergiaCpp14Parser::InitdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitdeclarator(this);
}

void AergiaCpp14Parser::InitdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitdeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::InitdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitInitdeclarator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::InitdeclaratorContext* AergiaCpp14Parser::initdeclarator() {
  InitdeclaratorContext *_localctx = _tracker.createInstance<InitdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 260, AergiaCpp14Parser::RuleInitdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1732);
    declarator();
    setState(1734);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
    case 1: {
      setState(1733);
      initializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::PtrdeclaratorContext* AergiaCpp14Parser::DeclaratorContext::ptrdeclarator() {
  return getRuleContext<AergiaCpp14Parser::PtrdeclaratorContext>(0);
}

AergiaCpp14Parser::NoptrdeclaratorContext* AergiaCpp14Parser::DeclaratorContext::noptrdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NoptrdeclaratorContext>(0);
}

AergiaCpp14Parser::ParametersandqualifiersContext* AergiaCpp14Parser::DeclaratorContext::parametersandqualifiers() {
  return getRuleContext<AergiaCpp14Parser::ParametersandqualifiersContext>(0);
}

AergiaCpp14Parser::TrailingreturntypeContext* AergiaCpp14Parser::DeclaratorContext::trailingreturntype() {
  return getRuleContext<AergiaCpp14Parser::TrailingreturntypeContext>(0);
}


size_t AergiaCpp14Parser::DeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleDeclarator;
}

void AergiaCpp14Parser::DeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarator(this);
}

void AergiaCpp14Parser::DeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::DeclaratorContext* AergiaCpp14Parser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 262, AergiaCpp14Parser::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1741);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1736);
      ptrdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1737);
      noptrdeclarator(0);
      setState(1738);
      parametersandqualifiers();
      setState(1739);
      trailingreturntype();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrdeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::PtrdeclaratorContext::PtrdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::NoptrdeclaratorContext* AergiaCpp14Parser::PtrdeclaratorContext::noptrdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NoptrdeclaratorContext>(0);
}

AergiaCpp14Parser::PtroperatorContext* AergiaCpp14Parser::PtrdeclaratorContext::ptroperator() {
  return getRuleContext<AergiaCpp14Parser::PtroperatorContext>(0);
}

AergiaCpp14Parser::PtrdeclaratorContext* AergiaCpp14Parser::PtrdeclaratorContext::ptrdeclarator() {
  return getRuleContext<AergiaCpp14Parser::PtrdeclaratorContext>(0);
}


size_t AergiaCpp14Parser::PtrdeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RulePtrdeclarator;
}

void AergiaCpp14Parser::PtrdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrdeclarator(this);
}

void AergiaCpp14Parser::PtrdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrdeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::PtrdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitPtrdeclarator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::PtrdeclaratorContext* AergiaCpp14Parser::ptrdeclarator() {
  PtrdeclaratorContext *_localctx = _tracker.createInstance<PtrdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 264, AergiaCpp14Parser::RulePtrdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1747);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1743);
      noptrdeclarator(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1744);
      ptroperator();
      setState(1745);
      ptrdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrdeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::NoptrdeclaratorContext::NoptrdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::DeclaratoridContext* AergiaCpp14Parser::NoptrdeclaratorContext::declaratorid() {
  return getRuleContext<AergiaCpp14Parser::DeclaratoridContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::NoptrdeclaratorContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NoptrdeclaratorContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::PtrdeclaratorContext* AergiaCpp14Parser::NoptrdeclaratorContext::ptrdeclarator() {
  return getRuleContext<AergiaCpp14Parser::PtrdeclaratorContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NoptrdeclaratorContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::NoptrdeclaratorContext* AergiaCpp14Parser::NoptrdeclaratorContext::noptrdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NoptrdeclaratorContext>(0);
}

AergiaCpp14Parser::ParametersandqualifiersContext* AergiaCpp14Parser::NoptrdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<AergiaCpp14Parser::ParametersandqualifiersContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NoptrdeclaratorContext::LeftBracket() {
  return getToken(AergiaCpp14Parser::LeftBracket, 0);
}

tree::TerminalNode* AergiaCpp14Parser::NoptrdeclaratorContext::RightBracket() {
  return getToken(AergiaCpp14Parser::RightBracket, 0);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::NoptrdeclaratorContext::constantexpression() {
  return getRuleContext<AergiaCpp14Parser::ConstantexpressionContext>(0);
}


size_t AergiaCpp14Parser::NoptrdeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNoptrdeclarator;
}

void AergiaCpp14Parser::NoptrdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrdeclarator(this);
}

void AergiaCpp14Parser::NoptrdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrdeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::NoptrdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNoptrdeclarator(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::NoptrdeclaratorContext* AergiaCpp14Parser::noptrdeclarator() {
   return noptrdeclarator(0);
}

AergiaCpp14Parser::NoptrdeclaratorContext* AergiaCpp14Parser::noptrdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::NoptrdeclaratorContext *_localctx = _tracker.createInstance<NoptrdeclaratorContext>(_ctx, parentState);
  AergiaCpp14Parser::NoptrdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 266;
  enterRecursionRule(_localctx, 266, AergiaCpp14Parser::RuleNoptrdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1758);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Operator:
      case AergiaCpp14Parser::Tilde:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Ellipsis:
      case AergiaCpp14Parser::Identifier: {
        setState(1750);
        declaratorid();
        setState(1752);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx)) {
        case 1: {
          setState(1751);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case AergiaCpp14Parser::LeftParen: {
        setState(1754);
        match(AergiaCpp14Parser::LeftParen);
        setState(1755);
        ptrdeclarator();
        setState(1756);
        match(AergiaCpp14Parser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1773);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1771);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1760);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1761);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1762);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1763);
          match(AergiaCpp14Parser::LeftBracket);
          setState(1765);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__8)
            | (1ULL << AergiaCpp14Parser::T__9)
            | (1ULL << AergiaCpp14Parser::Alignof)
            | (1ULL << AergiaCpp14Parser::Auto)
            | (1ULL << AergiaCpp14Parser::Bool)
            | (1ULL << AergiaCpp14Parser::Char)
            | (1ULL << AergiaCpp14Parser::Char16)
            | (1ULL << AergiaCpp14Parser::Char32)
            | (1ULL << AergiaCpp14Parser::Const_cast)
            | (1ULL << AergiaCpp14Parser::Decltype)
            | (1ULL << AergiaCpp14Parser::Delete)
            | (1ULL << AergiaCpp14Parser::Double)
            | (1ULL << AergiaCpp14Parser::Dynamic_cast)
            | (1ULL << AergiaCpp14Parser::False)
            | (1ULL << AergiaCpp14Parser::Float)
            | (1ULL << AergiaCpp14Parser::Int)
            | (1ULL << AergiaCpp14Parser::Long)
            | (1ULL << AergiaCpp14Parser::New)
            | (1ULL << AergiaCpp14Parser::Noexcept)
            | (1ULL << AergiaCpp14Parser::Nullptr)
            | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
            | (1ULL << (AergiaCpp14Parser::Short - 66))
            | (1ULL << (AergiaCpp14Parser::Signed - 66))
            | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
            | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
            | (1ULL << (AergiaCpp14Parser::This - 66))
            | (1ULL << (AergiaCpp14Parser::True - 66))
            | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
            | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
            | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
            | (1ULL << (AergiaCpp14Parser::Void - 66))
            | (1ULL << (AergiaCpp14Parser::Wchar - 66))
            | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
            | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
            | (1ULL << (AergiaCpp14Parser::Plus - 66))
            | (1ULL << (AergiaCpp14Parser::Minus - 66))
            | (1ULL << (AergiaCpp14Parser::Star - 66))
            | (1ULL << (AergiaCpp14Parser::And - 66))
            | (1ULL << (AergiaCpp14Parser::Or - 66))
            | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
            | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
            | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
            | (1ULL << (AergiaCpp14Parser::Identifier - 130))
            | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
            setState(1764);
            constantexpression();
          }
          setState(1767);
          match(AergiaCpp14Parser::RightBracket);
          setState(1769);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, _ctx)) {
          case 1: {
            setState(1768);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1775);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParametersandqualifiersContext ------------------------------------------------------------------

AergiaCpp14Parser::ParametersandqualifiersContext::ParametersandqualifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::ParametersandqualifiersContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ParameterdeclarationclauseContext* AergiaCpp14Parser::ParametersandqualifiersContext::parameterdeclarationclause() {
  return getRuleContext<AergiaCpp14Parser::ParameterdeclarationclauseContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ParametersandqualifiersContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::CvqualifierseqContext* AergiaCpp14Parser::ParametersandqualifiersContext::cvqualifierseq() {
  return getRuleContext<AergiaCpp14Parser::CvqualifierseqContext>(0);
}

AergiaCpp14Parser::RefqualifierContext* AergiaCpp14Parser::ParametersandqualifiersContext::refqualifier() {
  return getRuleContext<AergiaCpp14Parser::RefqualifierContext>(0);
}

AergiaCpp14Parser::ExceptionspecificationContext* AergiaCpp14Parser::ParametersandqualifiersContext::exceptionspecification() {
  return getRuleContext<AergiaCpp14Parser::ExceptionspecificationContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::ParametersandqualifiersContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}


size_t AergiaCpp14Parser::ParametersandqualifiersContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleParametersandqualifiers;
}

void AergiaCpp14Parser::ParametersandqualifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametersandqualifiers(this);
}

void AergiaCpp14Parser::ParametersandqualifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametersandqualifiers(this);
}


antlrcpp::Any AergiaCpp14Parser::ParametersandqualifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitParametersandqualifiers(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ParametersandqualifiersContext* AergiaCpp14Parser::parametersandqualifiers() {
  ParametersandqualifiersContext *_localctx = _tracker.createInstance<ParametersandqualifiersContext>(_ctx, getState());
  enterRule(_localctx, 268, AergiaCpp14Parser::RuleParametersandqualifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1776);
    match(AergiaCpp14Parser::LeftParen);
    setState(1777);
    parameterdeclarationclause();
    setState(1778);
    match(AergiaCpp14Parser::RightParen);
    setState(1780);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 179, _ctx)) {
    case 1: {
      setState(1779);
      cvqualifierseq();
      break;
    }

    }
    setState(1783);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx)) {
    case 1: {
      setState(1782);
      refqualifier();
      break;
    }

    }
    setState(1786);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx)) {
    case 1: {
      setState(1785);
      exceptionspecification();
      break;
    }

    }
    setState(1789);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 182, _ctx)) {
    case 1: {
      setState(1788);
      attributespecifierseq(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingreturntypeContext ------------------------------------------------------------------

AergiaCpp14Parser::TrailingreturntypeContext::TrailingreturntypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::TrailingreturntypeContext::Arrow() {
  return getToken(AergiaCpp14Parser::Arrow, 0);
}

AergiaCpp14Parser::TrailingtypespecifierseqContext* AergiaCpp14Parser::TrailingreturntypeContext::trailingtypespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::TrailingtypespecifierseqContext>(0);
}

AergiaCpp14Parser::AbstractdeclaratorContext* AergiaCpp14Parser::TrailingreturntypeContext::abstractdeclarator() {
  return getRuleContext<AergiaCpp14Parser::AbstractdeclaratorContext>(0);
}


size_t AergiaCpp14Parser::TrailingreturntypeContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTrailingreturntype;
}

void AergiaCpp14Parser::TrailingreturntypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingreturntype(this);
}

void AergiaCpp14Parser::TrailingreturntypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingreturntype(this);
}


antlrcpp::Any AergiaCpp14Parser::TrailingreturntypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTrailingreturntype(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TrailingreturntypeContext* AergiaCpp14Parser::trailingreturntype() {
  TrailingreturntypeContext *_localctx = _tracker.createInstance<TrailingreturntypeContext>(_ctx, getState());
  enterRule(_localctx, 270, AergiaCpp14Parser::RuleTrailingreturntype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1791);
    match(AergiaCpp14Parser::Arrow);
    setState(1792);
    trailingtypespecifierseq();
    setState(1794);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx)) {
    case 1: {
      setState(1793);
      abstractdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtroperatorContext ------------------------------------------------------------------

AergiaCpp14Parser::PtroperatorContext::PtroperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::PtroperatorContext::Star() {
  return getToken(AergiaCpp14Parser::Star, 0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::PtroperatorContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::CvqualifierseqContext* AergiaCpp14Parser::PtroperatorContext::cvqualifierseq() {
  return getRuleContext<AergiaCpp14Parser::CvqualifierseqContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::PtroperatorContext::And() {
  return getToken(AergiaCpp14Parser::And, 0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::PtroperatorContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}


size_t AergiaCpp14Parser::PtroperatorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RulePtroperator;
}

void AergiaCpp14Parser::PtroperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtroperator(this);
}

void AergiaCpp14Parser::PtroperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtroperator(this);
}


antlrcpp::Any AergiaCpp14Parser::PtroperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitPtroperator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::PtroperatorContext* AergiaCpp14Parser::ptroperator() {
  PtroperatorContext *_localctx = _tracker.createInstance<PtroperatorContext>(_ctx, getState());
  enterRule(_localctx, 272, AergiaCpp14Parser::RulePtroperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1819);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Star: {
        enterOuterAlt(_localctx, 1);
        setState(1796);
        match(AergiaCpp14Parser::Star);
        setState(1798);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, _ctx)) {
        case 1: {
          setState(1797);
          attributespecifierseq(0);
          break;
        }

        }
        setState(1801);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx)) {
        case 1: {
          setState(1800);
          cvqualifierseq();
          break;
        }

        }
        break;
      }

      case AergiaCpp14Parser::And: {
        enterOuterAlt(_localctx, 2);
        setState(1803);
        match(AergiaCpp14Parser::And);
        setState(1805);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx)) {
        case 1: {
          setState(1804);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case AergiaCpp14Parser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(1807);
        match(AergiaCpp14Parser::T__10);
        setState(1809);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
        case 1: {
          setState(1808);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(1811);
        nestednamespecifier(0);
        setState(1812);
        match(AergiaCpp14Parser::Star);
        setState(1814);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx)) {
        case 1: {
          setState(1813);
          attributespecifierseq(0);
          break;
        }

        }
        setState(1817);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, _ctx)) {
        case 1: {
          setState(1816);
          cvqualifierseq();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvqualifierseqContext ------------------------------------------------------------------

AergiaCpp14Parser::CvqualifierseqContext::CvqualifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::CvqualifierContext* AergiaCpp14Parser::CvqualifierseqContext::cvqualifier() {
  return getRuleContext<AergiaCpp14Parser::CvqualifierContext>(0);
}

AergiaCpp14Parser::CvqualifierseqContext* AergiaCpp14Parser::CvqualifierseqContext::cvqualifierseq() {
  return getRuleContext<AergiaCpp14Parser::CvqualifierseqContext>(0);
}


size_t AergiaCpp14Parser::CvqualifierseqContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleCvqualifierseq;
}

void AergiaCpp14Parser::CvqualifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvqualifierseq(this);
}

void AergiaCpp14Parser::CvqualifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvqualifierseq(this);
}


antlrcpp::Any AergiaCpp14Parser::CvqualifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitCvqualifierseq(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::CvqualifierseqContext* AergiaCpp14Parser::cvqualifierseq() {
  CvqualifierseqContext *_localctx = _tracker.createInstance<CvqualifierseqContext>(_ctx, getState());
  enterRule(_localctx, 274, AergiaCpp14Parser::RuleCvqualifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1821);
    cvqualifier();
    setState(1823);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx)) {
    case 1: {
      setState(1822);
      cvqualifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvqualifierContext ------------------------------------------------------------------

AergiaCpp14Parser::CvqualifierContext::CvqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::CvqualifierContext::Const() {
  return getToken(AergiaCpp14Parser::Const, 0);
}

tree::TerminalNode* AergiaCpp14Parser::CvqualifierContext::Volatile() {
  return getToken(AergiaCpp14Parser::Volatile, 0);
}


size_t AergiaCpp14Parser::CvqualifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleCvqualifier;
}

void AergiaCpp14Parser::CvqualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvqualifier(this);
}

void AergiaCpp14Parser::CvqualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvqualifier(this);
}


antlrcpp::Any AergiaCpp14Parser::CvqualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitCvqualifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::CvqualifierContext* AergiaCpp14Parser::cvqualifier() {
  CvqualifierContext *_localctx = _tracker.createInstance<CvqualifierContext>(_ctx, getState());
  enterRule(_localctx, 276, AergiaCpp14Parser::RuleCvqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1825);
    _la = _input->LA(1);
    if (!(_la == AergiaCpp14Parser::Const

    || _la == AergiaCpp14Parser::Volatile)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RefqualifierContext ------------------------------------------------------------------

AergiaCpp14Parser::RefqualifierContext::RefqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::RefqualifierContext::And() {
  return getToken(AergiaCpp14Parser::And, 0);
}


size_t AergiaCpp14Parser::RefqualifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleRefqualifier;
}

void AergiaCpp14Parser::RefqualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRefqualifier(this);
}

void AergiaCpp14Parser::RefqualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRefqualifier(this);
}


antlrcpp::Any AergiaCpp14Parser::RefqualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitRefqualifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::RefqualifierContext* AergiaCpp14Parser::refqualifier() {
  RefqualifierContext *_localctx = _tracker.createInstance<RefqualifierContext>(_ctx, getState());
  enterRule(_localctx, 278, AergiaCpp14Parser::RuleRefqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1827);
    _la = _input->LA(1);
    if (!(_la == AergiaCpp14Parser::T__10 || _la == AergiaCpp14Parser::And)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratoridContext ------------------------------------------------------------------

AergiaCpp14Parser::DeclaratoridContext::DeclaratoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::IdexpressionContext* AergiaCpp14Parser::DeclaratoridContext::idexpression() {
  return getRuleContext<AergiaCpp14Parser::IdexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::DeclaratoridContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}


size_t AergiaCpp14Parser::DeclaratoridContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleDeclaratorid;
}

void AergiaCpp14Parser::DeclaratoridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaratorid(this);
}

void AergiaCpp14Parser::DeclaratoridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaratorid(this);
}


antlrcpp::Any AergiaCpp14Parser::DeclaratoridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitDeclaratorid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::DeclaratoridContext* AergiaCpp14Parser::declaratorid() {
  DeclaratoridContext *_localctx = _tracker.createInstance<DeclaratoridContext>(_ctx, getState());
  enterRule(_localctx, 280, AergiaCpp14Parser::RuleDeclaratorid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1830);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Ellipsis) {
      setState(1829);
      match(AergiaCpp14Parser::Ellipsis);
    }
    setState(1832);
    idexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThetypeidContext ------------------------------------------------------------------

AergiaCpp14Parser::ThetypeidContext::ThetypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::TypespecifierseqContext* AergiaCpp14Parser::ThetypeidContext::typespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::TypespecifierseqContext>(0);
}

AergiaCpp14Parser::AbstractdeclaratorContext* AergiaCpp14Parser::ThetypeidContext::abstractdeclarator() {
  return getRuleContext<AergiaCpp14Parser::AbstractdeclaratorContext>(0);
}


size_t AergiaCpp14Parser::ThetypeidContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleThetypeid;
}

void AergiaCpp14Parser::ThetypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThetypeid(this);
}

void AergiaCpp14Parser::ThetypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThetypeid(this);
}


antlrcpp::Any AergiaCpp14Parser::ThetypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitThetypeid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ThetypeidContext* AergiaCpp14Parser::thetypeid() {
  ThetypeidContext *_localctx = _tracker.createInstance<ThetypeidContext>(_ctx, getState());
  enterRule(_localctx, 282, AergiaCpp14Parser::RuleThetypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1834);
    typespecifierseq();
    setState(1836);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
    case 1: {
      setState(1835);
      abstractdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractdeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::AbstractdeclaratorContext::AbstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::PtrabstractdeclaratorContext* AergiaCpp14Parser::AbstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<AergiaCpp14Parser::PtrabstractdeclaratorContext>(0);
}

AergiaCpp14Parser::ParametersandqualifiersContext* AergiaCpp14Parser::AbstractdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<AergiaCpp14Parser::ParametersandqualifiersContext>(0);
}

AergiaCpp14Parser::TrailingreturntypeContext* AergiaCpp14Parser::AbstractdeclaratorContext::trailingreturntype() {
  return getRuleContext<AergiaCpp14Parser::TrailingreturntypeContext>(0);
}

AergiaCpp14Parser::NoptrabstractdeclaratorContext* AergiaCpp14Parser::AbstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NoptrabstractdeclaratorContext>(0);
}

AergiaCpp14Parser::AbstractpackdeclaratorContext* AergiaCpp14Parser::AbstractdeclaratorContext::abstractpackdeclarator() {
  return getRuleContext<AergiaCpp14Parser::AbstractpackdeclaratorContext>(0);
}


size_t AergiaCpp14Parser::AbstractdeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAbstractdeclarator;
}

void AergiaCpp14Parser::AbstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractdeclarator(this);
}

void AergiaCpp14Parser::AbstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractdeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::AbstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAbstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AbstractdeclaratorContext* AergiaCpp14Parser::abstractdeclarator() {
  AbstractdeclaratorContext *_localctx = _tracker.createInstance<AbstractdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 284, AergiaCpp14Parser::RuleAbstractdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1846);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1838);
      ptrabstractdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1840);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx)) {
      case 1: {
        setState(1839);
        noptrabstractdeclarator(0);
        break;
      }

      }
      setState(1842);
      parametersandqualifiers();
      setState(1843);
      trailingreturntype();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1845);
      abstractpackdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrabstractdeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::PtrabstractdeclaratorContext::PtrabstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::NoptrabstractdeclaratorContext* AergiaCpp14Parser::PtrabstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NoptrabstractdeclaratorContext>(0);
}

AergiaCpp14Parser::PtroperatorContext* AergiaCpp14Parser::PtrabstractdeclaratorContext::ptroperator() {
  return getRuleContext<AergiaCpp14Parser::PtroperatorContext>(0);
}

AergiaCpp14Parser::PtrabstractdeclaratorContext* AergiaCpp14Parser::PtrabstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<AergiaCpp14Parser::PtrabstractdeclaratorContext>(0);
}


size_t AergiaCpp14Parser::PtrabstractdeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RulePtrabstractdeclarator;
}

void AergiaCpp14Parser::PtrabstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrabstractdeclarator(this);
}

void AergiaCpp14Parser::PtrabstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrabstractdeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::PtrabstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitPtrabstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::PtrabstractdeclaratorContext* AergiaCpp14Parser::ptrabstractdeclarator() {
  PtrabstractdeclaratorContext *_localctx = _tracker.createInstance<PtrabstractdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 286, AergiaCpp14Parser::RulePtrabstractdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1853);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::LeftParen:
      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1848);
        noptrabstractdeclarator(0);
        break;
      }

      case AergiaCpp14Parser::T__10:
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Star:
      case AergiaCpp14Parser::And:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1849);
        ptroperator();
        setState(1851);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
        case 1: {
          setState(1850);
          ptrabstractdeclarator();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrabstractdeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::NoptrabstractdeclaratorContext::NoptrabstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ParametersandqualifiersContext* AergiaCpp14Parser::NoptrabstractdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<AergiaCpp14Parser::ParametersandqualifiersContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NoptrabstractdeclaratorContext::LeftBracket() {
  return getToken(AergiaCpp14Parser::LeftBracket, 0);
}

tree::TerminalNode* AergiaCpp14Parser::NoptrabstractdeclaratorContext::RightBracket() {
  return getToken(AergiaCpp14Parser::RightBracket, 0);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::NoptrabstractdeclaratorContext::constantexpression() {
  return getRuleContext<AergiaCpp14Parser::ConstantexpressionContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::NoptrabstractdeclaratorContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NoptrabstractdeclaratorContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::PtrabstractdeclaratorContext* AergiaCpp14Parser::NoptrabstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<AergiaCpp14Parser::PtrabstractdeclaratorContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NoptrabstractdeclaratorContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::NoptrabstractdeclaratorContext* AergiaCpp14Parser::NoptrabstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NoptrabstractdeclaratorContext>(0);
}


size_t AergiaCpp14Parser::NoptrabstractdeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNoptrabstractdeclarator;
}

void AergiaCpp14Parser::NoptrabstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrabstractdeclarator(this);
}

void AergiaCpp14Parser::NoptrabstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrabstractdeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::NoptrabstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNoptrabstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::NoptrabstractdeclaratorContext* AergiaCpp14Parser::noptrabstractdeclarator() {
   return noptrabstractdeclarator(0);
}

AergiaCpp14Parser::NoptrabstractdeclaratorContext* AergiaCpp14Parser::noptrabstractdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::NoptrabstractdeclaratorContext *_localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(_ctx, parentState);
  AergiaCpp14Parser::NoptrabstractdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 288;
  enterRecursionRule(_localctx, 288, AergiaCpp14Parser::RuleNoptrabstractdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1869);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx)) {
    case 1: {
      setState(1856);
      parametersandqualifiers();
      break;
    }

    case 2: {
      setState(1857);
      match(AergiaCpp14Parser::LeftBracket);
      setState(1859);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__8)
        | (1ULL << AergiaCpp14Parser::T__9)
        | (1ULL << AergiaCpp14Parser::Alignof)
        | (1ULL << AergiaCpp14Parser::Auto)
        | (1ULL << AergiaCpp14Parser::Bool)
        | (1ULL << AergiaCpp14Parser::Char)
        | (1ULL << AergiaCpp14Parser::Char16)
        | (1ULL << AergiaCpp14Parser::Char32)
        | (1ULL << AergiaCpp14Parser::Const_cast)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Delete)
        | (1ULL << AergiaCpp14Parser::Double)
        | (1ULL << AergiaCpp14Parser::Dynamic_cast)
        | (1ULL << AergiaCpp14Parser::False)
        | (1ULL << AergiaCpp14Parser::Float)
        | (1ULL << AergiaCpp14Parser::Int)
        | (1ULL << AergiaCpp14Parser::Long)
        | (1ULL << AergiaCpp14Parser::New)
        | (1ULL << AergiaCpp14Parser::Noexcept)
        | (1ULL << AergiaCpp14Parser::Nullptr)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
        | (1ULL << (AergiaCpp14Parser::Short - 66))
        | (1ULL << (AergiaCpp14Parser::Signed - 66))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
        | (1ULL << (AergiaCpp14Parser::This - 66))
        | (1ULL << (AergiaCpp14Parser::True - 66))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
        | (1ULL << (AergiaCpp14Parser::Void - 66))
        | (1ULL << (AergiaCpp14Parser::Wchar - 66))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
        | (1ULL << (AergiaCpp14Parser::Plus - 66))
        | (1ULL << (AergiaCpp14Parser::Minus - 66))
        | (1ULL << (AergiaCpp14Parser::Star - 66))
        | (1ULL << (AergiaCpp14Parser::And - 66))
        | (1ULL << (AergiaCpp14Parser::Or - 66))
        | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
        | (1ULL << (AergiaCpp14Parser::Identifier - 130))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
        setState(1858);
        constantexpression();
      }
      setState(1861);
      match(AergiaCpp14Parser::RightBracket);
      setState(1863);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx)) {
      case 1: {
        setState(1862);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 3: {
      setState(1865);
      match(AergiaCpp14Parser::LeftParen);
      setState(1866);
      ptrabstractdeclarator();
      setState(1867);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1884);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1882);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1871);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1872);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1873);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1874);
          match(AergiaCpp14Parser::LeftBracket);
          setState(1876);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__8)
            | (1ULL << AergiaCpp14Parser::T__9)
            | (1ULL << AergiaCpp14Parser::Alignof)
            | (1ULL << AergiaCpp14Parser::Auto)
            | (1ULL << AergiaCpp14Parser::Bool)
            | (1ULL << AergiaCpp14Parser::Char)
            | (1ULL << AergiaCpp14Parser::Char16)
            | (1ULL << AergiaCpp14Parser::Char32)
            | (1ULL << AergiaCpp14Parser::Const_cast)
            | (1ULL << AergiaCpp14Parser::Decltype)
            | (1ULL << AergiaCpp14Parser::Delete)
            | (1ULL << AergiaCpp14Parser::Double)
            | (1ULL << AergiaCpp14Parser::Dynamic_cast)
            | (1ULL << AergiaCpp14Parser::False)
            | (1ULL << AergiaCpp14Parser::Float)
            | (1ULL << AergiaCpp14Parser::Int)
            | (1ULL << AergiaCpp14Parser::Long)
            | (1ULL << AergiaCpp14Parser::New)
            | (1ULL << AergiaCpp14Parser::Noexcept)
            | (1ULL << AergiaCpp14Parser::Nullptr)
            | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
            | (1ULL << (AergiaCpp14Parser::Short - 66))
            | (1ULL << (AergiaCpp14Parser::Signed - 66))
            | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
            | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
            | (1ULL << (AergiaCpp14Parser::This - 66))
            | (1ULL << (AergiaCpp14Parser::True - 66))
            | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
            | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
            | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
            | (1ULL << (AergiaCpp14Parser::Void - 66))
            | (1ULL << (AergiaCpp14Parser::Wchar - 66))
            | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
            | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
            | (1ULL << (AergiaCpp14Parser::Plus - 66))
            | (1ULL << (AergiaCpp14Parser::Minus - 66))
            | (1ULL << (AergiaCpp14Parser::Star - 66))
            | (1ULL << (AergiaCpp14Parser::And - 66))
            | (1ULL << (AergiaCpp14Parser::Or - 66))
            | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
            | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
            | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
            | (1ULL << (AergiaCpp14Parser::Identifier - 130))
            | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
            setState(1875);
            constantexpression();
          }
          setState(1878);
          match(AergiaCpp14Parser::RightBracket);
          setState(1880);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx)) {
          case 1: {
            setState(1879);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1886);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AbstractpackdeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::AbstractpackdeclaratorContext::AbstractpackdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::NoptrabstractpackdeclaratorContext* AergiaCpp14Parser::AbstractpackdeclaratorContext::noptrabstractpackdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NoptrabstractpackdeclaratorContext>(0);
}

AergiaCpp14Parser::PtroperatorContext* AergiaCpp14Parser::AbstractpackdeclaratorContext::ptroperator() {
  return getRuleContext<AergiaCpp14Parser::PtroperatorContext>(0);
}

AergiaCpp14Parser::AbstractpackdeclaratorContext* AergiaCpp14Parser::AbstractpackdeclaratorContext::abstractpackdeclarator() {
  return getRuleContext<AergiaCpp14Parser::AbstractpackdeclaratorContext>(0);
}


size_t AergiaCpp14Parser::AbstractpackdeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAbstractpackdeclarator;
}

void AergiaCpp14Parser::AbstractpackdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractpackdeclarator(this);
}

void AergiaCpp14Parser::AbstractpackdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractpackdeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::AbstractpackdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAbstractpackdeclarator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AbstractpackdeclaratorContext* AergiaCpp14Parser::abstractpackdeclarator() {
  AbstractpackdeclaratorContext *_localctx = _tracker.createInstance<AbstractpackdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 290, AergiaCpp14Parser::RuleAbstractpackdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1891);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Ellipsis: {
        enterOuterAlt(_localctx, 1);
        setState(1887);
        noptrabstractpackdeclarator(0);
        break;
      }

      case AergiaCpp14Parser::T__10:
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Star:
      case AergiaCpp14Parser::And:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1888);
        ptroperator();
        setState(1889);
        abstractpackdeclarator();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrabstractpackdeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::NoptrabstractpackdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

AergiaCpp14Parser::NoptrabstractpackdeclaratorContext* AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::noptrabstractpackdeclarator() {
  return getRuleContext<AergiaCpp14Parser::NoptrabstractpackdeclaratorContext>(0);
}

AergiaCpp14Parser::ParametersandqualifiersContext* AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<AergiaCpp14Parser::ParametersandqualifiersContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::LeftBracket() {
  return getToken(AergiaCpp14Parser::LeftBracket, 0);
}

tree::TerminalNode* AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::RightBracket() {
  return getToken(AergiaCpp14Parser::RightBracket, 0);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::constantexpression() {
  return getRuleContext<AergiaCpp14Parser::ConstantexpressionContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}


size_t AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNoptrabstractpackdeclarator;
}

void AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrabstractpackdeclarator(this);
}

void AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrabstractpackdeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::NoptrabstractpackdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNoptrabstractpackdeclarator(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::NoptrabstractpackdeclaratorContext* AergiaCpp14Parser::noptrabstractpackdeclarator() {
   return noptrabstractpackdeclarator(0);
}

AergiaCpp14Parser::NoptrabstractpackdeclaratorContext* AergiaCpp14Parser::noptrabstractpackdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::NoptrabstractpackdeclaratorContext *_localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(_ctx, parentState);
  AergiaCpp14Parser::NoptrabstractpackdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 292;
  enterRecursionRule(_localctx, 292, AergiaCpp14Parser::RuleNoptrabstractpackdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1894);
    match(AergiaCpp14Parser::Ellipsis);
    _ctx->stop = _input->LT(-1);
    setState(1909);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1907);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1896);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1897);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1898);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1899);
          match(AergiaCpp14Parser::LeftBracket);
          setState(1901);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__8)
            | (1ULL << AergiaCpp14Parser::T__9)
            | (1ULL << AergiaCpp14Parser::Alignof)
            | (1ULL << AergiaCpp14Parser::Auto)
            | (1ULL << AergiaCpp14Parser::Bool)
            | (1ULL << AergiaCpp14Parser::Char)
            | (1ULL << AergiaCpp14Parser::Char16)
            | (1ULL << AergiaCpp14Parser::Char32)
            | (1ULL << AergiaCpp14Parser::Const_cast)
            | (1ULL << AergiaCpp14Parser::Decltype)
            | (1ULL << AergiaCpp14Parser::Delete)
            | (1ULL << AergiaCpp14Parser::Double)
            | (1ULL << AergiaCpp14Parser::Dynamic_cast)
            | (1ULL << AergiaCpp14Parser::False)
            | (1ULL << AergiaCpp14Parser::Float)
            | (1ULL << AergiaCpp14Parser::Int)
            | (1ULL << AergiaCpp14Parser::Long)
            | (1ULL << AergiaCpp14Parser::New)
            | (1ULL << AergiaCpp14Parser::Noexcept)
            | (1ULL << AergiaCpp14Parser::Nullptr)
            | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
            | (1ULL << (AergiaCpp14Parser::Short - 66))
            | (1ULL << (AergiaCpp14Parser::Signed - 66))
            | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
            | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
            | (1ULL << (AergiaCpp14Parser::This - 66))
            | (1ULL << (AergiaCpp14Parser::True - 66))
            | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
            | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
            | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
            | (1ULL << (AergiaCpp14Parser::Void - 66))
            | (1ULL << (AergiaCpp14Parser::Wchar - 66))
            | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
            | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
            | (1ULL << (AergiaCpp14Parser::Plus - 66))
            | (1ULL << (AergiaCpp14Parser::Minus - 66))
            | (1ULL << (AergiaCpp14Parser::Star - 66))
            | (1ULL << (AergiaCpp14Parser::And - 66))
            | (1ULL << (AergiaCpp14Parser::Or - 66))
            | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
            | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
            | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
            | (1ULL << (AergiaCpp14Parser::Identifier - 130))
            | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
            | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
            setState(1900);
            constantexpression();
          }
          setState(1903);
          match(AergiaCpp14Parser::RightBracket);
          setState(1905);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, _ctx)) {
          case 1: {
            setState(1904);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1911);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterdeclarationclauseContext ------------------------------------------------------------------

AergiaCpp14Parser::ParameterdeclarationclauseContext::ParameterdeclarationclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ParameterdeclarationlistContext* AergiaCpp14Parser::ParameterdeclarationclauseContext::parameterdeclarationlist() {
  return getRuleContext<AergiaCpp14Parser::ParameterdeclarationlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ParameterdeclarationclauseContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

tree::TerminalNode* AergiaCpp14Parser::ParameterdeclarationclauseContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::ParameterdeclarationclauseContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleParameterdeclarationclause;
}

void AergiaCpp14Parser::ParameterdeclarationclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterdeclarationclause(this);
}

void AergiaCpp14Parser::ParameterdeclarationclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterdeclarationclause(this);
}


antlrcpp::Any AergiaCpp14Parser::ParameterdeclarationclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitParameterdeclarationclause(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ParameterdeclarationclauseContext* AergiaCpp14Parser::parameterdeclarationclause() {
  ParameterdeclarationclauseContext *_localctx = _tracker.createInstance<ParameterdeclarationclauseContext>(_ctx, getState());
  enterRule(_localctx, 294, AergiaCpp14Parser::RuleParameterdeclarationclause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1922);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1913);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
        | (1ULL << AergiaCpp14Parser::Alignas)
        | (1ULL << AergiaCpp14Parser::Auto)
        | (1ULL << AergiaCpp14Parser::Bool)
        | (1ULL << AergiaCpp14Parser::Char)
        | (1ULL << AergiaCpp14Parser::Char16)
        | (1ULL << AergiaCpp14Parser::Char32)
        | (1ULL << AergiaCpp14Parser::Class)
        | (1ULL << AergiaCpp14Parser::Const)
        | (1ULL << AergiaCpp14Parser::Constexpr)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Double)
        | (1ULL << AergiaCpp14Parser::Enum)
        | (1ULL << AergiaCpp14Parser::Explicit)
        | (1ULL << AergiaCpp14Parser::Extern)
        | (1ULL << AergiaCpp14Parser::Float)
        | (1ULL << AergiaCpp14Parser::Friend)
        | (1ULL << AergiaCpp14Parser::Inline)
        | (1ULL << AergiaCpp14Parser::Int)
        | (1ULL << AergiaCpp14Parser::Long)
        | (1ULL << AergiaCpp14Parser::Mutable))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Register - 65))
        | (1ULL << (AergiaCpp14Parser::Short - 65))
        | (1ULL << (AergiaCpp14Parser::Signed - 65))
        | (1ULL << (AergiaCpp14Parser::Static - 65))
        | (1ULL << (AergiaCpp14Parser::Struct - 65))
        | (1ULL << (AergiaCpp14Parser::Thread_local - 65))
        | (1ULL << (AergiaCpp14Parser::Typedef - 65))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
        | (1ULL << (AergiaCpp14Parser::Union - 65))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
        | (1ULL << (AergiaCpp14Parser::Virtual - 65))
        | (1ULL << (AergiaCpp14Parser::Void - 65))
        | (1ULL << (AergiaCpp14Parser::Volatile - 65))
        | (1ULL << (AergiaCpp14Parser::Wchar - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 65)))) != 0) || _la == AergiaCpp14Parser::Doublecolon

      || _la == AergiaCpp14Parser::Identifier) {
        setState(1912);
        parameterdeclarationlist(0);
      }
      setState(1916);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Ellipsis) {
        setState(1915);
        match(AergiaCpp14Parser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1918);
      parameterdeclarationlist(0);
      setState(1919);
      match(AergiaCpp14Parser::Comma);
      setState(1920);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterdeclarationlistContext ------------------------------------------------------------------

AergiaCpp14Parser::ParameterdeclarationlistContext::ParameterdeclarationlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ParameterdeclarationContext* AergiaCpp14Parser::ParameterdeclarationlistContext::parameterdeclaration() {
  return getRuleContext<AergiaCpp14Parser::ParameterdeclarationContext>(0);
}

AergiaCpp14Parser::ParameterdeclarationlistContext* AergiaCpp14Parser::ParameterdeclarationlistContext::parameterdeclarationlist() {
  return getRuleContext<AergiaCpp14Parser::ParameterdeclarationlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ParameterdeclarationlistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::ParameterdeclarationlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleParameterdeclarationlist;
}

void AergiaCpp14Parser::ParameterdeclarationlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterdeclarationlist(this);
}

void AergiaCpp14Parser::ParameterdeclarationlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterdeclarationlist(this);
}


antlrcpp::Any AergiaCpp14Parser::ParameterdeclarationlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitParameterdeclarationlist(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::ParameterdeclarationlistContext* AergiaCpp14Parser::parameterdeclarationlist() {
   return parameterdeclarationlist(0);
}

AergiaCpp14Parser::ParameterdeclarationlistContext* AergiaCpp14Parser::parameterdeclarationlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::ParameterdeclarationlistContext *_localctx = _tracker.createInstance<ParameterdeclarationlistContext>(_ctx, parentState);
  AergiaCpp14Parser::ParameterdeclarationlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 296;
  enterRecursionRule(_localctx, 296, AergiaCpp14Parser::RuleParameterdeclarationlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1925);
    parameterdeclaration();
    _ctx->stop = _input->LT(-1);
    setState(1932);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParameterdeclarationlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameterdeclarationlist);
        setState(1927);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1928);
        match(AergiaCpp14Parser::Comma);
        setState(1929);
        parameterdeclaration(); 
      }
      setState(1934);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterdeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::ParameterdeclarationContext::ParameterdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::DeclspecifierseqContext* AergiaCpp14Parser::ParameterdeclarationContext::declspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::DeclspecifierseqContext>(0);
}

AergiaCpp14Parser::DeclaratorContext* AergiaCpp14Parser::ParameterdeclarationContext::declarator() {
  return getRuleContext<AergiaCpp14Parser::DeclaratorContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::ParameterdeclarationContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ParameterdeclarationContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}

AergiaCpp14Parser::InitializerclauseContext* AergiaCpp14Parser::ParameterdeclarationContext::initializerclause() {
  return getRuleContext<AergiaCpp14Parser::InitializerclauseContext>(0);
}

AergiaCpp14Parser::AbstractdeclaratorContext* AergiaCpp14Parser::ParameterdeclarationContext::abstractdeclarator() {
  return getRuleContext<AergiaCpp14Parser::AbstractdeclaratorContext>(0);
}


size_t AergiaCpp14Parser::ParameterdeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleParameterdeclaration;
}

void AergiaCpp14Parser::ParameterdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterdeclaration(this);
}

void AergiaCpp14Parser::ParameterdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterdeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::ParameterdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitParameterdeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ParameterdeclarationContext* AergiaCpp14Parser::parameterdeclaration() {
  ParameterdeclarationContext *_localctx = _tracker.createInstance<ParameterdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 298, AergiaCpp14Parser::RuleParameterdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1966);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 220, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1936);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1935);
        attributespecifierseq(0);
      }
      setState(1938);
      declspecifierseq();
      setState(1939);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1942);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1941);
        attributespecifierseq(0);
      }
      setState(1944);
      declspecifierseq();
      setState(1945);
      declarator();
      setState(1946);
      match(AergiaCpp14Parser::Assign);
      setState(1947);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1950);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1949);
        attributespecifierseq(0);
      }
      setState(1952);
      declspecifierseq();
      setState(1954);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 217, _ctx)) {
      case 1: {
        setState(1953);
        abstractdeclarator();
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1957);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1956);
        attributespecifierseq(0);
      }
      setState(1959);
      declspecifierseq();
      setState(1961);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::T__10

      || _la == AergiaCpp14Parser::Decltype || ((((_la - 93) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 93)) & ((1ULL << (AergiaCpp14Parser::LeftParen - 93))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 93))
        | (1ULL << (AergiaCpp14Parser::Star - 93))
        | (1ULL << (AergiaCpp14Parser::And - 93))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 93))
        | (1ULL << (AergiaCpp14Parser::Ellipsis - 93))
        | (1ULL << (AergiaCpp14Parser::Identifier - 93)))) != 0)) {
        setState(1960);
        abstractdeclarator();
      }
      setState(1963);
      match(AergiaCpp14Parser::Assign);
      setState(1964);
      initializerclause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondefinitionContext ------------------------------------------------------------------

AergiaCpp14Parser::FunctiondefinitionContext::FunctiondefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::DeclaratorContext* AergiaCpp14Parser::FunctiondefinitionContext::declarator() {
  return getRuleContext<AergiaCpp14Parser::DeclaratorContext>(0);
}

AergiaCpp14Parser::FunctionbodyContext* AergiaCpp14Parser::FunctiondefinitionContext::functionbody() {
  return getRuleContext<AergiaCpp14Parser::FunctionbodyContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::FunctiondefinitionContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::DeclspecifierseqContext* AergiaCpp14Parser::FunctiondefinitionContext::declspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::DeclspecifierseqContext>(0);
}

AergiaCpp14Parser::VirtspecifierseqContext* AergiaCpp14Parser::FunctiondefinitionContext::virtspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::VirtspecifierseqContext>(0);
}


size_t AergiaCpp14Parser::FunctiondefinitionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleFunctiondefinition;
}

void AergiaCpp14Parser::FunctiondefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiondefinition(this);
}

void AergiaCpp14Parser::FunctiondefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiondefinition(this);
}


antlrcpp::Any AergiaCpp14Parser::FunctiondefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitFunctiondefinition(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::FunctiondefinitionContext* AergiaCpp14Parser::functiondefinition() {
  FunctiondefinitionContext *_localctx = _tracker.createInstance<FunctiondefinitionContext>(_ctx, getState());
  enterRule(_localctx, 300, AergiaCpp14Parser::RuleFunctiondefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1969);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(1968);
      attributespecifierseq(0);
    }
    setState(1972);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 222, _ctx)) {
    case 1: {
      setState(1971);
      declspecifierseq();
      break;
    }

    }
    setState(1974);
    declarator();
    setState(1976);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Final

    || _la == AergiaCpp14Parser::Override) {
      setState(1975);
      virtspecifierseq(0);
    }
    setState(1978);
    functionbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionbodyContext ------------------------------------------------------------------

AergiaCpp14Parser::FunctionbodyContext::FunctionbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::CompoundstatementContext* AergiaCpp14Parser::FunctionbodyContext::compoundstatement() {
  return getRuleContext<AergiaCpp14Parser::CompoundstatementContext>(0);
}

AergiaCpp14Parser::CtorinitializerContext* AergiaCpp14Parser::FunctionbodyContext::ctorinitializer() {
  return getRuleContext<AergiaCpp14Parser::CtorinitializerContext>(0);
}

AergiaCpp14Parser::FunctiontryblockContext* AergiaCpp14Parser::FunctionbodyContext::functiontryblock() {
  return getRuleContext<AergiaCpp14Parser::FunctiontryblockContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::FunctionbodyContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::FunctionbodyContext::Default() {
  return getToken(AergiaCpp14Parser::Default, 0);
}

tree::TerminalNode* AergiaCpp14Parser::FunctionbodyContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}

tree::TerminalNode* AergiaCpp14Parser::FunctionbodyContext::Delete() {
  return getToken(AergiaCpp14Parser::Delete, 0);
}


size_t AergiaCpp14Parser::FunctionbodyContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleFunctionbody;
}

void AergiaCpp14Parser::FunctionbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionbody(this);
}

void AergiaCpp14Parser::FunctionbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionbody(this);
}


antlrcpp::Any AergiaCpp14Parser::FunctionbodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitFunctionbody(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::FunctionbodyContext* AergiaCpp14Parser::functionbody() {
  FunctionbodyContext *_localctx = _tracker.createInstance<FunctionbodyContext>(_ctx, getState());
  enterRule(_localctx, 302, AergiaCpp14Parser::RuleFunctionbody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1991);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 225, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1981);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Colon) {
        setState(1980);
        ctorinitializer();
      }
      setState(1983);
      compoundstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1984);
      functiontryblock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1985);
      match(AergiaCpp14Parser::Assign);
      setState(1986);
      match(AergiaCpp14Parser::Default);
      setState(1987);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1988);
      match(AergiaCpp14Parser::Assign);
      setState(1989);
      match(AergiaCpp14Parser::Delete);
      setState(1990);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

AergiaCpp14Parser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::BraceorequalinitializerContext* AergiaCpp14Parser::InitializerContext::braceorequalinitializer() {
  return getRuleContext<AergiaCpp14Parser::BraceorequalinitializerContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::InitializerContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ExpressionlistContext* AergiaCpp14Parser::InitializerContext::expressionlist() {
  return getRuleContext<AergiaCpp14Parser::ExpressionlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::InitializerContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}


size_t AergiaCpp14Parser::InitializerContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleInitializer;
}

void AergiaCpp14Parser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void AergiaCpp14Parser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}


antlrcpp::Any AergiaCpp14Parser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::InitializerContext* AergiaCpp14Parser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 304, AergiaCpp14Parser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1998);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::LeftBrace:
      case AergiaCpp14Parser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1993);
        braceorequalinitializer();
        break;
      }

      case AergiaCpp14Parser::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(1994);
        match(AergiaCpp14Parser::LeftParen);
        setState(1995);
        expressionlist();
        setState(1996);
        match(AergiaCpp14Parser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BraceorequalinitializerContext ------------------------------------------------------------------

AergiaCpp14Parser::BraceorequalinitializerContext::BraceorequalinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::BraceorequalinitializerContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}

AergiaCpp14Parser::InitializerclauseContext* AergiaCpp14Parser::BraceorequalinitializerContext::initializerclause() {
  return getRuleContext<AergiaCpp14Parser::InitializerclauseContext>(0);
}

AergiaCpp14Parser::BracedinitlistContext* AergiaCpp14Parser::BraceorequalinitializerContext::bracedinitlist() {
  return getRuleContext<AergiaCpp14Parser::BracedinitlistContext>(0);
}


size_t AergiaCpp14Parser::BraceorequalinitializerContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleBraceorequalinitializer;
}

void AergiaCpp14Parser::BraceorequalinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBraceorequalinitializer(this);
}

void AergiaCpp14Parser::BraceorequalinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBraceorequalinitializer(this);
}


antlrcpp::Any AergiaCpp14Parser::BraceorequalinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitBraceorequalinitializer(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::BraceorequalinitializerContext* AergiaCpp14Parser::braceorequalinitializer() {
  BraceorequalinitializerContext *_localctx = _tracker.createInstance<BraceorequalinitializerContext>(_ctx, getState());
  enterRule(_localctx, 306, AergiaCpp14Parser::RuleBraceorequalinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2003);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(2000);
        match(AergiaCpp14Parser::Assign);
        setState(2001);
        initializerclause();
        break;
      }

      case AergiaCpp14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(2002);
        bracedinitlist();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerclauseContext ------------------------------------------------------------------

AergiaCpp14Parser::InitializerclauseContext::InitializerclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::AssignmentexpressionContext* AergiaCpp14Parser::InitializerclauseContext::assignmentexpression() {
  return getRuleContext<AergiaCpp14Parser::AssignmentexpressionContext>(0);
}

AergiaCpp14Parser::BracedinitlistContext* AergiaCpp14Parser::InitializerclauseContext::bracedinitlist() {
  return getRuleContext<AergiaCpp14Parser::BracedinitlistContext>(0);
}

AergiaCpp14Parser::AergiaExpression_value_targetContext* AergiaCpp14Parser::InitializerclauseContext::aergiaExpression_value_target() {
  return getRuleContext<AergiaCpp14Parser::AergiaExpression_value_targetContext>(0);
}


size_t AergiaCpp14Parser::InitializerclauseContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleInitializerclause;
}

void AergiaCpp14Parser::InitializerclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerclause(this);
}

void AergiaCpp14Parser::InitializerclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerclause(this);
}


antlrcpp::Any AergiaCpp14Parser::InitializerclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitInitializerclause(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::InitializerclauseContext* AergiaCpp14Parser::initializerclause() {
  InitializerclauseContext *_localctx = _tracker.createInstance<InitializerclauseContext>(_ctx, getState());
  enterRule(_localctx, 308, AergiaCpp14Parser::RuleInitializerclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2008);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::T__8:
      case AergiaCpp14Parser::T__9:
      case AergiaCpp14Parser::Alignof:
      case AergiaCpp14Parser::Auto:
      case AergiaCpp14Parser::Bool:
      case AergiaCpp14Parser::Char:
      case AergiaCpp14Parser::Char16:
      case AergiaCpp14Parser::Char32:
      case AergiaCpp14Parser::Const_cast:
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Delete:
      case AergiaCpp14Parser::Double:
      case AergiaCpp14Parser::Dynamic_cast:
      case AergiaCpp14Parser::False:
      case AergiaCpp14Parser::Float:
      case AergiaCpp14Parser::Int:
      case AergiaCpp14Parser::Long:
      case AergiaCpp14Parser::New:
      case AergiaCpp14Parser::Noexcept:
      case AergiaCpp14Parser::Nullptr:
      case AergiaCpp14Parser::Operator:
      case AergiaCpp14Parser::Reinterpret_cast:
      case AergiaCpp14Parser::Short:
      case AergiaCpp14Parser::Signed:
      case AergiaCpp14Parser::Sizeof:
      case AergiaCpp14Parser::Static_cast:
      case AergiaCpp14Parser::This:
      case AergiaCpp14Parser::Throw:
      case AergiaCpp14Parser::True:
      case AergiaCpp14Parser::Typeid_:
      case AergiaCpp14Parser::Typename_:
      case AergiaCpp14Parser::Unsigned:
      case AergiaCpp14Parser::Void:
      case AergiaCpp14Parser::Wchar:
      case AergiaCpp14Parser::LeftParen:
      case AergiaCpp14Parser::LeftBracket:
      case AergiaCpp14Parser::Plus:
      case AergiaCpp14Parser::Minus:
      case AergiaCpp14Parser::Star:
      case AergiaCpp14Parser::And:
      case AergiaCpp14Parser::Or:
      case AergiaCpp14Parser::Tilde:
      case AergiaCpp14Parser::PlusPlus:
      case AergiaCpp14Parser::MinusMinus:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Identifier:
      case AergiaCpp14Parser::Integerliteral:
      case AergiaCpp14Parser::Characterliteral:
      case AergiaCpp14Parser::Floatingliteral:
      case AergiaCpp14Parser::Stringliteral:
      case AergiaCpp14Parser::Userdefinedintegerliteral:
      case AergiaCpp14Parser::Userdefinedfloatingliteral:
      case AergiaCpp14Parser::Userdefinedstringliteral:
      case AergiaCpp14Parser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(2005);
        assignmentexpression();
        break;
      }

      case AergiaCpp14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(2006);
        bracedinitlist();
        break;
      }

      case AergiaCpp14Parser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(2007);
        aergiaExpression_value_target();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerlistContext ------------------------------------------------------------------

AergiaCpp14Parser::InitializerlistContext::InitializerlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::InitializerclauseContext* AergiaCpp14Parser::InitializerlistContext::initializerclause() {
  return getRuleContext<AergiaCpp14Parser::InitializerclauseContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::InitializerlistContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

AergiaCpp14Parser::InitializerlistContext* AergiaCpp14Parser::InitializerlistContext::initializerlist() {
  return getRuleContext<AergiaCpp14Parser::InitializerlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::InitializerlistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::InitializerlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleInitializerlist;
}

void AergiaCpp14Parser::InitializerlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerlist(this);
}

void AergiaCpp14Parser::InitializerlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerlist(this);
}


antlrcpp::Any AergiaCpp14Parser::InitializerlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitInitializerlist(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::InitializerlistContext* AergiaCpp14Parser::initializerlist() {
   return initializerlist(0);
}

AergiaCpp14Parser::InitializerlistContext* AergiaCpp14Parser::initializerlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::InitializerlistContext *_localctx = _tracker.createInstance<InitializerlistContext>(_ctx, parentState);
  AergiaCpp14Parser::InitializerlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 310;
  enterRecursionRule(_localctx, 310, AergiaCpp14Parser::RuleInitializerlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2011);
    initializerclause();
    setState(2013);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 229, _ctx)) {
    case 1: {
      setState(2012);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2023);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 231, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerlist);
        setState(2015);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2016);
        match(AergiaCpp14Parser::Comma);
        setState(2017);
        initializerclause();
        setState(2019);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 230, _ctx)) {
        case 1: {
          setState(2018);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(2025);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 231, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BracedinitlistContext ------------------------------------------------------------------

AergiaCpp14Parser::BracedinitlistContext::BracedinitlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::BracedinitlistContext::LeftBrace() {
  return getToken(AergiaCpp14Parser::LeftBrace, 0);
}

AergiaCpp14Parser::InitializerlistContext* AergiaCpp14Parser::BracedinitlistContext::initializerlist() {
  return getRuleContext<AergiaCpp14Parser::InitializerlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::BracedinitlistContext::RightBrace() {
  return getToken(AergiaCpp14Parser::RightBrace, 0);
}

tree::TerminalNode* AergiaCpp14Parser::BracedinitlistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::BracedinitlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleBracedinitlist;
}

void AergiaCpp14Parser::BracedinitlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracedinitlist(this);
}

void AergiaCpp14Parser::BracedinitlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracedinitlist(this);
}


antlrcpp::Any AergiaCpp14Parser::BracedinitlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitBracedinitlist(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::BracedinitlistContext* AergiaCpp14Parser::bracedinitlist() {
  BracedinitlistContext *_localctx = _tracker.createInstance<BracedinitlistContext>(_ctx, getState());
  enterRule(_localctx, 312, AergiaCpp14Parser::RuleBracedinitlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2035);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2026);
      match(AergiaCpp14Parser::LeftBrace);
      setState(2027);
      initializerlist(0);
      setState(2029);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Comma) {
        setState(2028);
        match(AergiaCpp14Parser::Comma);
      }
      setState(2031);
      match(AergiaCpp14Parser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2033);
      match(AergiaCpp14Parser::LeftBrace);
      setState(2034);
      match(AergiaCpp14Parser::RightBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassnameContext ------------------------------------------------------------------

AergiaCpp14Parser::ClassnameContext::ClassnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::ClassnameContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

AergiaCpp14Parser::SimpletemplateidContext* AergiaCpp14Parser::ClassnameContext::simpletemplateid() {
  return getRuleContext<AergiaCpp14Parser::SimpletemplateidContext>(0);
}


size_t AergiaCpp14Parser::ClassnameContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleClassname;
}

void AergiaCpp14Parser::ClassnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassname(this);
}

void AergiaCpp14Parser::ClassnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassname(this);
}


antlrcpp::Any AergiaCpp14Parser::ClassnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitClassname(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ClassnameContext* AergiaCpp14Parser::classname() {
  ClassnameContext *_localctx = _tracker.createInstance<ClassnameContext>(_ctx, getState());
  enterRule(_localctx, 314, AergiaCpp14Parser::RuleClassname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2039);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 234, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2037);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2038);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassspecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::ClassspecifierContext::ClassspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ClassheadContext* AergiaCpp14Parser::ClassspecifierContext::classhead() {
  return getRuleContext<AergiaCpp14Parser::ClassheadContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ClassspecifierContext::LeftBrace() {
  return getToken(AergiaCpp14Parser::LeftBrace, 0);
}

tree::TerminalNode* AergiaCpp14Parser::ClassspecifierContext::RightBrace() {
  return getToken(AergiaCpp14Parser::RightBrace, 0);
}

AergiaCpp14Parser::MemberspecificationContext* AergiaCpp14Parser::ClassspecifierContext::memberspecification() {
  return getRuleContext<AergiaCpp14Parser::MemberspecificationContext>(0);
}


size_t AergiaCpp14Parser::ClassspecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleClassspecifier;
}

void AergiaCpp14Parser::ClassspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassspecifier(this);
}

void AergiaCpp14Parser::ClassspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassspecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::ClassspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitClassspecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ClassspecifierContext* AergiaCpp14Parser::classspecifier() {
  ClassspecifierContext *_localctx = _tracker.createInstance<ClassspecifierContext>(_ctx, getState());
  enterRule(_localctx, 316, AergiaCpp14Parser::RuleClassspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2041);
    classhead();
    setState(2042);
    match(AergiaCpp14Parser::LeftBrace);
    setState(2044);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
      | (1ULL << AergiaCpp14Parser::T__10)
      | (1ULL << AergiaCpp14Parser::Alignas)
      | (1ULL << AergiaCpp14Parser::Auto)
      | (1ULL << AergiaCpp14Parser::Bool)
      | (1ULL << AergiaCpp14Parser::Char)
      | (1ULL << AergiaCpp14Parser::Char16)
      | (1ULL << AergiaCpp14Parser::Char32)
      | (1ULL << AergiaCpp14Parser::Class)
      | (1ULL << AergiaCpp14Parser::Const)
      | (1ULL << AergiaCpp14Parser::Constexpr)
      | (1ULL << AergiaCpp14Parser::Decltype)
      | (1ULL << AergiaCpp14Parser::Double)
      | (1ULL << AergiaCpp14Parser::Enum)
      | (1ULL << AergiaCpp14Parser::Explicit)
      | (1ULL << AergiaCpp14Parser::Extern)
      | (1ULL << AergiaCpp14Parser::Float)
      | (1ULL << AergiaCpp14Parser::Friend)
      | (1ULL << AergiaCpp14Parser::Inline)
      | (1ULL << AergiaCpp14Parser::Int)
      | (1ULL << AergiaCpp14Parser::Long)
      | (1ULL << AergiaCpp14Parser::Mutable)
      | (1ULL << AergiaCpp14Parser::Operator)
      | (1ULL << AergiaCpp14Parser::Private)
      | (1ULL << AergiaCpp14Parser::Protected))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (AergiaCpp14Parser::Public - 64))
      | (1ULL << (AergiaCpp14Parser::Register - 64))
      | (1ULL << (AergiaCpp14Parser::Short - 64))
      | (1ULL << (AergiaCpp14Parser::Signed - 64))
      | (1ULL << (AergiaCpp14Parser::Static - 64))
      | (1ULL << (AergiaCpp14Parser::Static_assert - 64))
      | (1ULL << (AergiaCpp14Parser::Struct - 64))
      | (1ULL << (AergiaCpp14Parser::Template - 64))
      | (1ULL << (AergiaCpp14Parser::Thread_local - 64))
      | (1ULL << (AergiaCpp14Parser::Typedef - 64))
      | (1ULL << (AergiaCpp14Parser::Typename_ - 64))
      | (1ULL << (AergiaCpp14Parser::Union - 64))
      | (1ULL << (AergiaCpp14Parser::Unsigned - 64))
      | (1ULL << (AergiaCpp14Parser::Using - 64))
      | (1ULL << (AergiaCpp14Parser::Virtual - 64))
      | (1ULL << (AergiaCpp14Parser::Void - 64))
      | (1ULL << (AergiaCpp14Parser::Volatile - 64))
      | (1ULL << (AergiaCpp14Parser::Wchar - 64))
      | (1ULL << (AergiaCpp14Parser::LeftParen - 64))
      | (1ULL << (AergiaCpp14Parser::LeftBracket - 64))
      | (1ULL << (AergiaCpp14Parser::Star - 64))
      | (1ULL << (AergiaCpp14Parser::And - 64))
      | (1ULL << (AergiaCpp14Parser::Tilde - 64)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (AergiaCpp14Parser::Colon - 136))
      | (1ULL << (AergiaCpp14Parser::Doublecolon - 136))
      | (1ULL << (AergiaCpp14Parser::Semi - 136))
      | (1ULL << (AergiaCpp14Parser::Ellipsis - 136))
      | (1ULL << (AergiaCpp14Parser::Identifier - 136)))) != 0)) {
      setState(2043);
      memberspecification();
    }
    setState(2046);
    match(AergiaCpp14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassheadContext ------------------------------------------------------------------

AergiaCpp14Parser::ClassheadContext::ClassheadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ClasskeyContext* AergiaCpp14Parser::ClassheadContext::classkey() {
  return getRuleContext<AergiaCpp14Parser::ClasskeyContext>(0);
}

AergiaCpp14Parser::ClassheadnameContext* AergiaCpp14Parser::ClassheadContext::classheadname() {
  return getRuleContext<AergiaCpp14Parser::ClassheadnameContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::ClassheadContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::ClassvirtspecifierContext* AergiaCpp14Parser::ClassheadContext::classvirtspecifier() {
  return getRuleContext<AergiaCpp14Parser::ClassvirtspecifierContext>(0);
}

AergiaCpp14Parser::BaseclauseContext* AergiaCpp14Parser::ClassheadContext::baseclause() {
  return getRuleContext<AergiaCpp14Parser::BaseclauseContext>(0);
}


size_t AergiaCpp14Parser::ClassheadContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleClasshead;
}

void AergiaCpp14Parser::ClassheadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClasshead(this);
}

void AergiaCpp14Parser::ClassheadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClasshead(this);
}


antlrcpp::Any AergiaCpp14Parser::ClassheadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitClasshead(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ClassheadContext* AergiaCpp14Parser::classhead() {
  ClassheadContext *_localctx = _tracker.createInstance<ClassheadContext>(_ctx, getState());
  enterRule(_localctx, 318, AergiaCpp14Parser::RuleClasshead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2066);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2048);
      classkey();
      setState(2050);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2049);
        attributespecifierseq(0);
      }
      setState(2052);
      classheadname();
      setState(2054);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Final) {
        setState(2053);
        classvirtspecifier();
      }
      setState(2057);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Colon) {
        setState(2056);
        baseclause();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2059);
      classkey();
      setState(2061);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2060);
        attributespecifierseq(0);
      }
      setState(2064);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Colon) {
        setState(2063);
        baseclause();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassheadnameContext ------------------------------------------------------------------

AergiaCpp14Parser::ClassheadnameContext::ClassheadnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ClassnameContext* AergiaCpp14Parser::ClassheadnameContext::classname() {
  return getRuleContext<AergiaCpp14Parser::ClassnameContext>(0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::ClassheadnameContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}


size_t AergiaCpp14Parser::ClassheadnameContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleClassheadname;
}

void AergiaCpp14Parser::ClassheadnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassheadname(this);
}

void AergiaCpp14Parser::ClassheadnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassheadname(this);
}


antlrcpp::Any AergiaCpp14Parser::ClassheadnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitClassheadname(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ClassheadnameContext* AergiaCpp14Parser::classheadname() {
  ClassheadnameContext *_localctx = _tracker.createInstance<ClassheadnameContext>(_ctx, getState());
  enterRule(_localctx, 320, AergiaCpp14Parser::RuleClassheadname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2069);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 242, _ctx)) {
    case 1: {
      setState(2068);
      nestednamespecifier(0);
      break;
    }

    }
    setState(2071);
    classname();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassvirtspecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::ClassvirtspecifierContext::ClassvirtspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::ClassvirtspecifierContext::Final() {
  return getToken(AergiaCpp14Parser::Final, 0);
}


size_t AergiaCpp14Parser::ClassvirtspecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleClassvirtspecifier;
}

void AergiaCpp14Parser::ClassvirtspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassvirtspecifier(this);
}

void AergiaCpp14Parser::ClassvirtspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassvirtspecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::ClassvirtspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitClassvirtspecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ClassvirtspecifierContext* AergiaCpp14Parser::classvirtspecifier() {
  ClassvirtspecifierContext *_localctx = _tracker.createInstance<ClassvirtspecifierContext>(_ctx, getState());
  enterRule(_localctx, 322, AergiaCpp14Parser::RuleClassvirtspecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2073);
    match(AergiaCpp14Parser::Final);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClasskeyContext ------------------------------------------------------------------

AergiaCpp14Parser::ClasskeyContext::ClasskeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::ClasskeyContext::Class() {
  return getToken(AergiaCpp14Parser::Class, 0);
}

tree::TerminalNode* AergiaCpp14Parser::ClasskeyContext::Struct() {
  return getToken(AergiaCpp14Parser::Struct, 0);
}

tree::TerminalNode* AergiaCpp14Parser::ClasskeyContext::Union() {
  return getToken(AergiaCpp14Parser::Union, 0);
}


size_t AergiaCpp14Parser::ClasskeyContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleClasskey;
}

void AergiaCpp14Parser::ClasskeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClasskey(this);
}

void AergiaCpp14Parser::ClasskeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClasskey(this);
}


antlrcpp::Any AergiaCpp14Parser::ClasskeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitClasskey(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ClasskeyContext* AergiaCpp14Parser::classkey() {
  ClasskeyContext *_localctx = _tracker.createInstance<ClasskeyContext>(_ctx, getState());
  enterRule(_localctx, 324, AergiaCpp14Parser::RuleClasskey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2075);
    _la = _input->LA(1);
    if (!(((((_la - 29) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 29)) & ((1ULL << (AergiaCpp14Parser::Class - 29))
      | (1ULL << (AergiaCpp14Parser::Struct - 29))
      | (1ULL << (AergiaCpp14Parser::Union - 29)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberspecificationContext ------------------------------------------------------------------

AergiaCpp14Parser::MemberspecificationContext::MemberspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::MemberdeclarationContext* AergiaCpp14Parser::MemberspecificationContext::memberdeclaration() {
  return getRuleContext<AergiaCpp14Parser::MemberdeclarationContext>(0);
}

AergiaCpp14Parser::MemberspecificationContext* AergiaCpp14Parser::MemberspecificationContext::memberspecification() {
  return getRuleContext<AergiaCpp14Parser::MemberspecificationContext>(0);
}

AergiaCpp14Parser::AccessspecifierContext* AergiaCpp14Parser::MemberspecificationContext::accessspecifier() {
  return getRuleContext<AergiaCpp14Parser::AccessspecifierContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::MemberspecificationContext::Colon() {
  return getToken(AergiaCpp14Parser::Colon, 0);
}


size_t AergiaCpp14Parser::MemberspecificationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleMemberspecification;
}

void AergiaCpp14Parser::MemberspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberspecification(this);
}

void AergiaCpp14Parser::MemberspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberspecification(this);
}


antlrcpp::Any AergiaCpp14Parser::MemberspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitMemberspecification(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::MemberspecificationContext* AergiaCpp14Parser::memberspecification() {
  MemberspecificationContext *_localctx = _tracker.createInstance<MemberspecificationContext>(_ctx, getState());
  enterRule(_localctx, 326, AergiaCpp14Parser::RuleMemberspecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2086);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::T__0:
      case AergiaCpp14Parser::T__10:
      case AergiaCpp14Parser::Alignas:
      case AergiaCpp14Parser::Auto:
      case AergiaCpp14Parser::Bool:
      case AergiaCpp14Parser::Char:
      case AergiaCpp14Parser::Char16:
      case AergiaCpp14Parser::Char32:
      case AergiaCpp14Parser::Class:
      case AergiaCpp14Parser::Const:
      case AergiaCpp14Parser::Constexpr:
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Double:
      case AergiaCpp14Parser::Enum:
      case AergiaCpp14Parser::Explicit:
      case AergiaCpp14Parser::Extern:
      case AergiaCpp14Parser::Float:
      case AergiaCpp14Parser::Friend:
      case AergiaCpp14Parser::Inline:
      case AergiaCpp14Parser::Int:
      case AergiaCpp14Parser::Long:
      case AergiaCpp14Parser::Mutable:
      case AergiaCpp14Parser::Operator:
      case AergiaCpp14Parser::Register:
      case AergiaCpp14Parser::Short:
      case AergiaCpp14Parser::Signed:
      case AergiaCpp14Parser::Static:
      case AergiaCpp14Parser::Static_assert:
      case AergiaCpp14Parser::Struct:
      case AergiaCpp14Parser::Template:
      case AergiaCpp14Parser::Thread_local:
      case AergiaCpp14Parser::Typedef:
      case AergiaCpp14Parser::Typename_:
      case AergiaCpp14Parser::Union:
      case AergiaCpp14Parser::Unsigned:
      case AergiaCpp14Parser::Using:
      case AergiaCpp14Parser::Virtual:
      case AergiaCpp14Parser::Void:
      case AergiaCpp14Parser::Volatile:
      case AergiaCpp14Parser::Wchar:
      case AergiaCpp14Parser::LeftParen:
      case AergiaCpp14Parser::LeftBracket:
      case AergiaCpp14Parser::Star:
      case AergiaCpp14Parser::And:
      case AergiaCpp14Parser::Tilde:
      case AergiaCpp14Parser::Colon:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Semi:
      case AergiaCpp14Parser::Ellipsis:
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(2077);
        memberdeclaration();
        setState(2079);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
          | (1ULL << AergiaCpp14Parser::T__10)
          | (1ULL << AergiaCpp14Parser::Alignas)
          | (1ULL << AergiaCpp14Parser::Auto)
          | (1ULL << AergiaCpp14Parser::Bool)
          | (1ULL << AergiaCpp14Parser::Char)
          | (1ULL << AergiaCpp14Parser::Char16)
          | (1ULL << AergiaCpp14Parser::Char32)
          | (1ULL << AergiaCpp14Parser::Class)
          | (1ULL << AergiaCpp14Parser::Const)
          | (1ULL << AergiaCpp14Parser::Constexpr)
          | (1ULL << AergiaCpp14Parser::Decltype)
          | (1ULL << AergiaCpp14Parser::Double)
          | (1ULL << AergiaCpp14Parser::Enum)
          | (1ULL << AergiaCpp14Parser::Explicit)
          | (1ULL << AergiaCpp14Parser::Extern)
          | (1ULL << AergiaCpp14Parser::Float)
          | (1ULL << AergiaCpp14Parser::Friend)
          | (1ULL << AergiaCpp14Parser::Inline)
          | (1ULL << AergiaCpp14Parser::Int)
          | (1ULL << AergiaCpp14Parser::Long)
          | (1ULL << AergiaCpp14Parser::Mutable)
          | (1ULL << AergiaCpp14Parser::Operator)
          | (1ULL << AergiaCpp14Parser::Private)
          | (1ULL << AergiaCpp14Parser::Protected))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (AergiaCpp14Parser::Public - 64))
          | (1ULL << (AergiaCpp14Parser::Register - 64))
          | (1ULL << (AergiaCpp14Parser::Short - 64))
          | (1ULL << (AergiaCpp14Parser::Signed - 64))
          | (1ULL << (AergiaCpp14Parser::Static - 64))
          | (1ULL << (AergiaCpp14Parser::Static_assert - 64))
          | (1ULL << (AergiaCpp14Parser::Struct - 64))
          | (1ULL << (AergiaCpp14Parser::Template - 64))
          | (1ULL << (AergiaCpp14Parser::Thread_local - 64))
          | (1ULL << (AergiaCpp14Parser::Typedef - 64))
          | (1ULL << (AergiaCpp14Parser::Typename_ - 64))
          | (1ULL << (AergiaCpp14Parser::Union - 64))
          | (1ULL << (AergiaCpp14Parser::Unsigned - 64))
          | (1ULL << (AergiaCpp14Parser::Using - 64))
          | (1ULL << (AergiaCpp14Parser::Virtual - 64))
          | (1ULL << (AergiaCpp14Parser::Void - 64))
          | (1ULL << (AergiaCpp14Parser::Volatile - 64))
          | (1ULL << (AergiaCpp14Parser::Wchar - 64))
          | (1ULL << (AergiaCpp14Parser::LeftParen - 64))
          | (1ULL << (AergiaCpp14Parser::LeftBracket - 64))
          | (1ULL << (AergiaCpp14Parser::Star - 64))
          | (1ULL << (AergiaCpp14Parser::And - 64))
          | (1ULL << (AergiaCpp14Parser::Tilde - 64)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 136)) & ((1ULL << (AergiaCpp14Parser::Colon - 136))
          | (1ULL << (AergiaCpp14Parser::Doublecolon - 136))
          | (1ULL << (AergiaCpp14Parser::Semi - 136))
          | (1ULL << (AergiaCpp14Parser::Ellipsis - 136))
          | (1ULL << (AergiaCpp14Parser::Identifier - 136)))) != 0)) {
          setState(2078);
          memberspecification();
        }
        break;
      }

      case AergiaCpp14Parser::Private:
      case AergiaCpp14Parser::Protected:
      case AergiaCpp14Parser::Public: {
        enterOuterAlt(_localctx, 2);
        setState(2081);
        accessspecifier();
        setState(2082);
        match(AergiaCpp14Parser::Colon);
        setState(2084);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
          | (1ULL << AergiaCpp14Parser::T__10)
          | (1ULL << AergiaCpp14Parser::Alignas)
          | (1ULL << AergiaCpp14Parser::Auto)
          | (1ULL << AergiaCpp14Parser::Bool)
          | (1ULL << AergiaCpp14Parser::Char)
          | (1ULL << AergiaCpp14Parser::Char16)
          | (1ULL << AergiaCpp14Parser::Char32)
          | (1ULL << AergiaCpp14Parser::Class)
          | (1ULL << AergiaCpp14Parser::Const)
          | (1ULL << AergiaCpp14Parser::Constexpr)
          | (1ULL << AergiaCpp14Parser::Decltype)
          | (1ULL << AergiaCpp14Parser::Double)
          | (1ULL << AergiaCpp14Parser::Enum)
          | (1ULL << AergiaCpp14Parser::Explicit)
          | (1ULL << AergiaCpp14Parser::Extern)
          | (1ULL << AergiaCpp14Parser::Float)
          | (1ULL << AergiaCpp14Parser::Friend)
          | (1ULL << AergiaCpp14Parser::Inline)
          | (1ULL << AergiaCpp14Parser::Int)
          | (1ULL << AergiaCpp14Parser::Long)
          | (1ULL << AergiaCpp14Parser::Mutable)
          | (1ULL << AergiaCpp14Parser::Operator)
          | (1ULL << AergiaCpp14Parser::Private)
          | (1ULL << AergiaCpp14Parser::Protected))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (AergiaCpp14Parser::Public - 64))
          | (1ULL << (AergiaCpp14Parser::Register - 64))
          | (1ULL << (AergiaCpp14Parser::Short - 64))
          | (1ULL << (AergiaCpp14Parser::Signed - 64))
          | (1ULL << (AergiaCpp14Parser::Static - 64))
          | (1ULL << (AergiaCpp14Parser::Static_assert - 64))
          | (1ULL << (AergiaCpp14Parser::Struct - 64))
          | (1ULL << (AergiaCpp14Parser::Template - 64))
          | (1ULL << (AergiaCpp14Parser::Thread_local - 64))
          | (1ULL << (AergiaCpp14Parser::Typedef - 64))
          | (1ULL << (AergiaCpp14Parser::Typename_ - 64))
          | (1ULL << (AergiaCpp14Parser::Union - 64))
          | (1ULL << (AergiaCpp14Parser::Unsigned - 64))
          | (1ULL << (AergiaCpp14Parser::Using - 64))
          | (1ULL << (AergiaCpp14Parser::Virtual - 64))
          | (1ULL << (AergiaCpp14Parser::Void - 64))
          | (1ULL << (AergiaCpp14Parser::Volatile - 64))
          | (1ULL << (AergiaCpp14Parser::Wchar - 64))
          | (1ULL << (AergiaCpp14Parser::LeftParen - 64))
          | (1ULL << (AergiaCpp14Parser::LeftBracket - 64))
          | (1ULL << (AergiaCpp14Parser::Star - 64))
          | (1ULL << (AergiaCpp14Parser::And - 64))
          | (1ULL << (AergiaCpp14Parser::Tilde - 64)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 136)) & ((1ULL << (AergiaCpp14Parser::Colon - 136))
          | (1ULL << (AergiaCpp14Parser::Doublecolon - 136))
          | (1ULL << (AergiaCpp14Parser::Semi - 136))
          | (1ULL << (AergiaCpp14Parser::Ellipsis - 136))
          | (1ULL << (AergiaCpp14Parser::Identifier - 136)))) != 0)) {
          setState(2083);
          memberspecification();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberdeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::MemberdeclarationContext::MemberdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::FunctiondefinitionContext* AergiaCpp14Parser::MemberdeclarationContext::functiondefinition() {
  return getRuleContext<AergiaCpp14Parser::FunctiondefinitionContext>(0);
}

AergiaCpp14Parser::MemberFunctionDeclarationContext* AergiaCpp14Parser::MemberdeclarationContext::memberFunctionDeclaration() {
  return getRuleContext<AergiaCpp14Parser::MemberFunctionDeclarationContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::MemberdeclarationContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::MemberdeclarationContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::DeclspecifierseqContext* AergiaCpp14Parser::MemberdeclarationContext::declspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::DeclspecifierseqContext>(0);
}

AergiaCpp14Parser::MemberdeclaratorlistContext* AergiaCpp14Parser::MemberdeclarationContext::memberdeclaratorlist() {
  return getRuleContext<AergiaCpp14Parser::MemberdeclaratorlistContext>(0);
}

AergiaCpp14Parser::UsingdeclarationContext* AergiaCpp14Parser::MemberdeclarationContext::usingdeclaration() {
  return getRuleContext<AergiaCpp14Parser::UsingdeclarationContext>(0);
}

AergiaCpp14Parser::Static_assertdeclarationContext* AergiaCpp14Parser::MemberdeclarationContext::static_assertdeclaration() {
  return getRuleContext<AergiaCpp14Parser::Static_assertdeclarationContext>(0);
}

AergiaCpp14Parser::TemplatedeclarationContext* AergiaCpp14Parser::MemberdeclarationContext::templatedeclaration() {
  return getRuleContext<AergiaCpp14Parser::TemplatedeclarationContext>(0);
}

AergiaCpp14Parser::AliasdeclarationContext* AergiaCpp14Parser::MemberdeclarationContext::aliasdeclaration() {
  return getRuleContext<AergiaCpp14Parser::AliasdeclarationContext>(0);
}

AergiaCpp14Parser::EmptydeclarationContext* AergiaCpp14Parser::MemberdeclarationContext::emptydeclaration() {
  return getRuleContext<AergiaCpp14Parser::EmptydeclarationContext>(0);
}


size_t AergiaCpp14Parser::MemberdeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleMemberdeclaration;
}

void AergiaCpp14Parser::MemberdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclaration(this);
}

void AergiaCpp14Parser::MemberdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::MemberdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitMemberdeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::MemberdeclarationContext* AergiaCpp14Parser::memberdeclaration() {
  MemberdeclarationContext *_localctx = _tracker.createInstance<MemberdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 328, AergiaCpp14Parser::RuleMemberdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2105);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2088);
      functiondefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2089);
      memberFunctionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2091);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx)) {
      case 1: {
        setState(2090);
        attributespecifierseq(0);
        break;
      }

      }
      setState(2094);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 247, _ctx)) {
      case 1: {
        setState(2093);
        declspecifierseq();
        break;
      }

      }
      setState(2097);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__10)
        | (1ULL << AergiaCpp14Parser::Alignas)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 93)) & ((1ULL << (AergiaCpp14Parser::LeftParen - 93))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 93))
        | (1ULL << (AergiaCpp14Parser::Star - 93))
        | (1ULL << (AergiaCpp14Parser::And - 93))
        | (1ULL << (AergiaCpp14Parser::Tilde - 93))
        | (1ULL << (AergiaCpp14Parser::Colon - 93))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 93))
        | (1ULL << (AergiaCpp14Parser::Ellipsis - 93))
        | (1ULL << (AergiaCpp14Parser::Identifier - 93)))) != 0)) {
        setState(2096);
        memberdeclaratorlist(0);
      }
      setState(2099);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2100);
      usingdeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2101);
      static_assertdeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2102);
      templatedeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2103);
      aliasdeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2104);
      emptydeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberdeclaratorlistContext ------------------------------------------------------------------

AergiaCpp14Parser::MemberdeclaratorlistContext::MemberdeclaratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::MemberdeclaratorContext* AergiaCpp14Parser::MemberdeclaratorlistContext::memberdeclarator() {
  return getRuleContext<AergiaCpp14Parser::MemberdeclaratorContext>(0);
}

AergiaCpp14Parser::MemberdeclaratorlistContext* AergiaCpp14Parser::MemberdeclaratorlistContext::memberdeclaratorlist() {
  return getRuleContext<AergiaCpp14Parser::MemberdeclaratorlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::MemberdeclaratorlistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::MemberdeclaratorlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleMemberdeclaratorlist;
}

void AergiaCpp14Parser::MemberdeclaratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclaratorlist(this);
}

void AergiaCpp14Parser::MemberdeclaratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclaratorlist(this);
}


antlrcpp::Any AergiaCpp14Parser::MemberdeclaratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitMemberdeclaratorlist(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::MemberdeclaratorlistContext* AergiaCpp14Parser::memberdeclaratorlist() {
   return memberdeclaratorlist(0);
}

AergiaCpp14Parser::MemberdeclaratorlistContext* AergiaCpp14Parser::memberdeclaratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::MemberdeclaratorlistContext *_localctx = _tracker.createInstance<MemberdeclaratorlistContext>(_ctx, parentState);
  AergiaCpp14Parser::MemberdeclaratorlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 330;
  enterRecursionRule(_localctx, 330, AergiaCpp14Parser::RuleMemberdeclaratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2108);
    memberdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(2115);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MemberdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMemberdeclaratorlist);
        setState(2110);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2111);
        match(AergiaCpp14Parser::Comma);
        setState(2112);
        memberdeclarator(); 
      }
      setState(2117);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MemberdeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::MemberdeclaratorContext::MemberdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::DeclaratorContext* AergiaCpp14Parser::MemberdeclaratorContext::declarator() {
  return getRuleContext<AergiaCpp14Parser::DeclaratorContext>(0);
}

AergiaCpp14Parser::VirtspecifierseqContext* AergiaCpp14Parser::MemberdeclaratorContext::virtspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::VirtspecifierseqContext>(0);
}

AergiaCpp14Parser::PurespecifierContext* AergiaCpp14Parser::MemberdeclaratorContext::purespecifier() {
  return getRuleContext<AergiaCpp14Parser::PurespecifierContext>(0);
}

AergiaCpp14Parser::BraceorequalinitializerContext* AergiaCpp14Parser::MemberdeclaratorContext::braceorequalinitializer() {
  return getRuleContext<AergiaCpp14Parser::BraceorequalinitializerContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::MemberdeclaratorContext::Colon() {
  return getToken(AergiaCpp14Parser::Colon, 0);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::MemberdeclaratorContext::constantexpression() {
  return getRuleContext<AergiaCpp14Parser::ConstantexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::MemberdeclaratorContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::MemberdeclaratorContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}


size_t AergiaCpp14Parser::MemberdeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleMemberdeclarator;
}

void AergiaCpp14Parser::MemberdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclarator(this);
}

void AergiaCpp14Parser::MemberdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::MemberdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitMemberdeclarator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::MemberdeclaratorContext* AergiaCpp14Parser::memberdeclarator() {
  MemberdeclaratorContext *_localctx = _tracker.createInstance<MemberdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 332, AergiaCpp14Parser::RuleMemberdeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2118);
      declarator();
      setState(2120);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 251, _ctx)) {
      case 1: {
        setState(2119);
        virtspecifierseq(0);
        break;
      }

      }
      setState(2123);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 252, _ctx)) {
      case 1: {
        setState(2122);
        purespecifier();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2125);
      declarator();
      setState(2127);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 253, _ctx)) {
      case 1: {
        setState(2126);
        braceorequalinitializer();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2130);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(2129);
        match(AergiaCpp14Parser::Identifier);
      }
      setState(2133);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2132);
        attributespecifierseq(0);
      }
      setState(2135);
      match(AergiaCpp14Parser::Colon);
      setState(2136);
      constantexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberFunctionDeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::MemberFunctionDeclarationContext::MemberFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::DeclspecifierseqContext* AergiaCpp14Parser::MemberFunctionDeclarationContext::declspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::DeclspecifierseqContext>(0);
}

AergiaCpp14Parser::UnqualifiedidContext* AergiaCpp14Parser::MemberFunctionDeclarationContext::unqualifiedid() {
  return getRuleContext<AergiaCpp14Parser::UnqualifiedidContext>(0);
}

AergiaCpp14Parser::ParametersandqualifiersContext* AergiaCpp14Parser::MemberFunctionDeclarationContext::parametersandqualifiers() {
  return getRuleContext<AergiaCpp14Parser::ParametersandqualifiersContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::MemberFunctionDeclarationContext::Semi() {
  return getToken(AergiaCpp14Parser::Semi, 0);
}

AergiaCpp14Parser::VirtspecifierseqContext* AergiaCpp14Parser::MemberFunctionDeclarationContext::virtspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::VirtspecifierseqContext>(0);
}

AergiaCpp14Parser::PurespecifierContext* AergiaCpp14Parser::MemberFunctionDeclarationContext::purespecifier() {
  return getRuleContext<AergiaCpp14Parser::PurespecifierContext>(0);
}


size_t AergiaCpp14Parser::MemberFunctionDeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleMemberFunctionDeclaration;
}

void AergiaCpp14Parser::MemberFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberFunctionDeclaration(this);
}

void AergiaCpp14Parser::MemberFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberFunctionDeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::MemberFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitMemberFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::MemberFunctionDeclarationContext* AergiaCpp14Parser::memberFunctionDeclaration() {
  MemberFunctionDeclarationContext *_localctx = _tracker.createInstance<MemberFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 334, AergiaCpp14Parser::RuleMemberFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2139);
    declspecifierseq();
    setState(2140);
    unqualifiedid();
    setState(2141);
    parametersandqualifiers();
    setState(2143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Final

    || _la == AergiaCpp14Parser::Override) {
      setState(2142);
      virtspecifierseq(0);
    }
    setState(2146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Assign) {
      setState(2145);
      purespecifier();
    }
    setState(2148);
    match(AergiaCpp14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VirtspecifierseqContext ------------------------------------------------------------------

AergiaCpp14Parser::VirtspecifierseqContext::VirtspecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::VirtspecifierContext* AergiaCpp14Parser::VirtspecifierseqContext::virtspecifier() {
  return getRuleContext<AergiaCpp14Parser::VirtspecifierContext>(0);
}

AergiaCpp14Parser::VirtspecifierseqContext* AergiaCpp14Parser::VirtspecifierseqContext::virtspecifierseq() {
  return getRuleContext<AergiaCpp14Parser::VirtspecifierseqContext>(0);
}


size_t AergiaCpp14Parser::VirtspecifierseqContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleVirtspecifierseq;
}

void AergiaCpp14Parser::VirtspecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtspecifierseq(this);
}

void AergiaCpp14Parser::VirtspecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtspecifierseq(this);
}


antlrcpp::Any AergiaCpp14Parser::VirtspecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitVirtspecifierseq(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::VirtspecifierseqContext* AergiaCpp14Parser::virtspecifierseq() {
   return virtspecifierseq(0);
}

AergiaCpp14Parser::VirtspecifierseqContext* AergiaCpp14Parser::virtspecifierseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::VirtspecifierseqContext *_localctx = _tracker.createInstance<VirtspecifierseqContext>(_ctx, parentState);
  AergiaCpp14Parser::VirtspecifierseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 336;
  enterRecursionRule(_localctx, 336, AergiaCpp14Parser::RuleVirtspecifierseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2151);
    virtspecifier();
    _ctx->stop = _input->LT(-1);
    setState(2157);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VirtspecifierseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVirtspecifierseq);
        setState(2153);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2154);
        virtspecifier(); 
      }
      setState(2159);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VirtspecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::VirtspecifierContext::VirtspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::VirtspecifierContext::Override() {
  return getToken(AergiaCpp14Parser::Override, 0);
}

tree::TerminalNode* AergiaCpp14Parser::VirtspecifierContext::Final() {
  return getToken(AergiaCpp14Parser::Final, 0);
}


size_t AergiaCpp14Parser::VirtspecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleVirtspecifier;
}

void AergiaCpp14Parser::VirtspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtspecifier(this);
}

void AergiaCpp14Parser::VirtspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtspecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::VirtspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitVirtspecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::VirtspecifierContext* AergiaCpp14Parser::virtspecifier() {
  VirtspecifierContext *_localctx = _tracker.createInstance<VirtspecifierContext>(_ctx, getState());
  enterRule(_localctx, 338, AergiaCpp14Parser::RuleVirtspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2160);
    _la = _input->LA(1);
    if (!(_la == AergiaCpp14Parser::Final

    || _la == AergiaCpp14Parser::Override)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PurespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::PurespecifierContext::PurespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::PurespecifierContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}


size_t AergiaCpp14Parser::PurespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RulePurespecifier;
}

void AergiaCpp14Parser::PurespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPurespecifier(this);
}

void AergiaCpp14Parser::PurespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPurespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::PurespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitPurespecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::PurespecifierContext* AergiaCpp14Parser::purespecifier() {
  PurespecifierContext *_localctx = _tracker.createInstance<PurespecifierContext>(_ctx, getState());
  enterRule(_localctx, 340, AergiaCpp14Parser::RulePurespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2162);
    match(AergiaCpp14Parser::Assign);
    setState(2163);
    match(AergiaCpp14Parser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseclauseContext ------------------------------------------------------------------

AergiaCpp14Parser::BaseclauseContext::BaseclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::BaseclauseContext::Colon() {
  return getToken(AergiaCpp14Parser::Colon, 0);
}

AergiaCpp14Parser::BasespecifierlistContext* AergiaCpp14Parser::BaseclauseContext::basespecifierlist() {
  return getRuleContext<AergiaCpp14Parser::BasespecifierlistContext>(0);
}


size_t AergiaCpp14Parser::BaseclauseContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleBaseclause;
}

void AergiaCpp14Parser::BaseclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseclause(this);
}

void AergiaCpp14Parser::BaseclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseclause(this);
}


antlrcpp::Any AergiaCpp14Parser::BaseclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitBaseclause(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::BaseclauseContext* AergiaCpp14Parser::baseclause() {
  BaseclauseContext *_localctx = _tracker.createInstance<BaseclauseContext>(_ctx, getState());
  enterRule(_localctx, 342, AergiaCpp14Parser::RuleBaseclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2165);
    match(AergiaCpp14Parser::Colon);
    setState(2166);
    basespecifierlist(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasespecifierlistContext ------------------------------------------------------------------

AergiaCpp14Parser::BasespecifierlistContext::BasespecifierlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::BasespecifierContext* AergiaCpp14Parser::BasespecifierlistContext::basespecifier() {
  return getRuleContext<AergiaCpp14Parser::BasespecifierContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::BasespecifierlistContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

AergiaCpp14Parser::BasespecifierlistContext* AergiaCpp14Parser::BasespecifierlistContext::basespecifierlist() {
  return getRuleContext<AergiaCpp14Parser::BasespecifierlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::BasespecifierlistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::BasespecifierlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleBasespecifierlist;
}

void AergiaCpp14Parser::BasespecifierlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasespecifierlist(this);
}

void AergiaCpp14Parser::BasespecifierlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasespecifierlist(this);
}


antlrcpp::Any AergiaCpp14Parser::BasespecifierlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitBasespecifierlist(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::BasespecifierlistContext* AergiaCpp14Parser::basespecifierlist() {
   return basespecifierlist(0);
}

AergiaCpp14Parser::BasespecifierlistContext* AergiaCpp14Parser::basespecifierlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::BasespecifierlistContext *_localctx = _tracker.createInstance<BasespecifierlistContext>(_ctx, parentState);
  AergiaCpp14Parser::BasespecifierlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 344;
  enterRecursionRule(_localctx, 344, AergiaCpp14Parser::RuleBasespecifierlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2169);
    basespecifier();
    setState(2171);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 260, _ctx)) {
    case 1: {
      setState(2170);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2181);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 262, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BasespecifierlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBasespecifierlist);
        setState(2173);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2174);
        match(AergiaCpp14Parser::Comma);
        setState(2175);
        basespecifier();
        setState(2177);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 261, _ctx)) {
        case 1: {
          setState(2176);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(2183);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 262, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BasespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::BasespecifierContext::BasespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::BasetypespecifierContext* AergiaCpp14Parser::BasespecifierContext::basetypespecifier() {
  return getRuleContext<AergiaCpp14Parser::BasetypespecifierContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::BasespecifierContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::BasespecifierContext::Virtual() {
  return getToken(AergiaCpp14Parser::Virtual, 0);
}

AergiaCpp14Parser::AccessspecifierContext* AergiaCpp14Parser::BasespecifierContext::accessspecifier() {
  return getRuleContext<AergiaCpp14Parser::AccessspecifierContext>(0);
}


size_t AergiaCpp14Parser::BasespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleBasespecifier;
}

void AergiaCpp14Parser::BasespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasespecifier(this);
}

void AergiaCpp14Parser::BasespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::BasespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitBasespecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::BasespecifierContext* AergiaCpp14Parser::basespecifier() {
  BasespecifierContext *_localctx = _tracker.createInstance<BasespecifierContext>(_ctx, getState());
  enterRule(_localctx, 346, AergiaCpp14Parser::RuleBasespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2205);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 268, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2185);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2184);
        attributespecifierseq(0);
      }
      setState(2187);
      basetypespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2189);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2188);
        attributespecifierseq(0);
      }
      setState(2191);
      match(AergiaCpp14Parser::Virtual);
      setState(2193);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 62) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 62)) & ((1ULL << (AergiaCpp14Parser::Private - 62))
        | (1ULL << (AergiaCpp14Parser::Protected - 62))
        | (1ULL << (AergiaCpp14Parser::Public - 62)))) != 0)) {
        setState(2192);
        accessspecifier();
      }
      setState(2195);
      basetypespecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2197);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2196);
        attributespecifierseq(0);
      }
      setState(2199);
      accessspecifier();
      setState(2201);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Virtual) {
        setState(2200);
        match(AergiaCpp14Parser::Virtual);
      }
      setState(2203);
      basetypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassordecltypeContext ------------------------------------------------------------------

AergiaCpp14Parser::ClassordecltypeContext::ClassordecltypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ClassnameContext* AergiaCpp14Parser::ClassordecltypeContext::classname() {
  return getRuleContext<AergiaCpp14Parser::ClassnameContext>(0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::ClassordecltypeContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}

AergiaCpp14Parser::DecltypespecifierContext* AergiaCpp14Parser::ClassordecltypeContext::decltypespecifier() {
  return getRuleContext<AergiaCpp14Parser::DecltypespecifierContext>(0);
}


size_t AergiaCpp14Parser::ClassordecltypeContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleClassordecltype;
}

void AergiaCpp14Parser::ClassordecltypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassordecltype(this);
}

void AergiaCpp14Parser::ClassordecltypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassordecltype(this);
}


antlrcpp::Any AergiaCpp14Parser::ClassordecltypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitClassordecltype(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ClassordecltypeContext* AergiaCpp14Parser::classordecltype() {
  ClassordecltypeContext *_localctx = _tracker.createInstance<ClassordecltypeContext>(_ctx, getState());
  enterRule(_localctx, 348, AergiaCpp14Parser::RuleClassordecltype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2212);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 270, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2208);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 269, _ctx)) {
      case 1: {
        setState(2207);
        nestednamespecifier(0);
        break;
      }

      }
      setState(2210);
      classname();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2211);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasetypespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::BasetypespecifierContext::BasetypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ClassordecltypeContext* AergiaCpp14Parser::BasetypespecifierContext::classordecltype() {
  return getRuleContext<AergiaCpp14Parser::ClassordecltypeContext>(0);
}


size_t AergiaCpp14Parser::BasetypespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleBasetypespecifier;
}

void AergiaCpp14Parser::BasetypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasetypespecifier(this);
}

void AergiaCpp14Parser::BasetypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasetypespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::BasetypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitBasetypespecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::BasetypespecifierContext* AergiaCpp14Parser::basetypespecifier() {
  BasetypespecifierContext *_localctx = _tracker.createInstance<BasetypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 350, AergiaCpp14Parser::RuleBasetypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2214);
    classordecltype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessspecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::AccessspecifierContext::AccessspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::AccessspecifierContext::Private() {
  return getToken(AergiaCpp14Parser::Private, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AccessspecifierContext::Protected() {
  return getToken(AergiaCpp14Parser::Protected, 0);
}

tree::TerminalNode* AergiaCpp14Parser::AccessspecifierContext::Public() {
  return getToken(AergiaCpp14Parser::Public, 0);
}


size_t AergiaCpp14Parser::AccessspecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleAccessspecifier;
}

void AergiaCpp14Parser::AccessspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessspecifier(this);
}

void AergiaCpp14Parser::AccessspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessspecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::AccessspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitAccessspecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::AccessspecifierContext* AergiaCpp14Parser::accessspecifier() {
  AccessspecifierContext *_localctx = _tracker.createInstance<AccessspecifierContext>(_ctx, getState());
  enterRule(_localctx, 352, AergiaCpp14Parser::RuleAccessspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2216);
    _la = _input->LA(1);
    if (!(((((_la - 62) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 62)) & ((1ULL << (AergiaCpp14Parser::Private - 62))
      | (1ULL << (AergiaCpp14Parser::Protected - 62))
      | (1ULL << (AergiaCpp14Parser::Public - 62)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionfunctionidContext ------------------------------------------------------------------

AergiaCpp14Parser::ConversionfunctionidContext::ConversionfunctionidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::ConversionfunctionidContext::Operator() {
  return getToken(AergiaCpp14Parser::Operator, 0);
}

AergiaCpp14Parser::ConversiontypeidContext* AergiaCpp14Parser::ConversionfunctionidContext::conversiontypeid() {
  return getRuleContext<AergiaCpp14Parser::ConversiontypeidContext>(0);
}


size_t AergiaCpp14Parser::ConversionfunctionidContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleConversionfunctionid;
}

void AergiaCpp14Parser::ConversionfunctionidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversionfunctionid(this);
}

void AergiaCpp14Parser::ConversionfunctionidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversionfunctionid(this);
}


antlrcpp::Any AergiaCpp14Parser::ConversionfunctionidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitConversionfunctionid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ConversionfunctionidContext* AergiaCpp14Parser::conversionfunctionid() {
  ConversionfunctionidContext *_localctx = _tracker.createInstance<ConversionfunctionidContext>(_ctx, getState());
  enterRule(_localctx, 354, AergiaCpp14Parser::RuleConversionfunctionid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2218);
    match(AergiaCpp14Parser::Operator);
    setState(2219);
    conversiontypeid();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversiontypeidContext ------------------------------------------------------------------

AergiaCpp14Parser::ConversiontypeidContext::ConversiontypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::TypespecifierseqContext* AergiaCpp14Parser::ConversiontypeidContext::typespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::TypespecifierseqContext>(0);
}

AergiaCpp14Parser::ConversiondeclaratorContext* AergiaCpp14Parser::ConversiontypeidContext::conversiondeclarator() {
  return getRuleContext<AergiaCpp14Parser::ConversiondeclaratorContext>(0);
}


size_t AergiaCpp14Parser::ConversiontypeidContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleConversiontypeid;
}

void AergiaCpp14Parser::ConversiontypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversiontypeid(this);
}

void AergiaCpp14Parser::ConversiontypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversiontypeid(this);
}


antlrcpp::Any AergiaCpp14Parser::ConversiontypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitConversiontypeid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ConversiontypeidContext* AergiaCpp14Parser::conversiontypeid() {
  ConversiontypeidContext *_localctx = _tracker.createInstance<ConversiontypeidContext>(_ctx, getState());
  enterRule(_localctx, 356, AergiaCpp14Parser::RuleConversiontypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2221);
    typespecifierseq();
    setState(2223);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 271, _ctx)) {
    case 1: {
      setState(2222);
      conversiondeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversiondeclaratorContext ------------------------------------------------------------------

AergiaCpp14Parser::ConversiondeclaratorContext::ConversiondeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::PtroperatorContext* AergiaCpp14Parser::ConversiondeclaratorContext::ptroperator() {
  return getRuleContext<AergiaCpp14Parser::PtroperatorContext>(0);
}

AergiaCpp14Parser::ConversiondeclaratorContext* AergiaCpp14Parser::ConversiondeclaratorContext::conversiondeclarator() {
  return getRuleContext<AergiaCpp14Parser::ConversiondeclaratorContext>(0);
}


size_t AergiaCpp14Parser::ConversiondeclaratorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleConversiondeclarator;
}

void AergiaCpp14Parser::ConversiondeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversiondeclarator(this);
}

void AergiaCpp14Parser::ConversiondeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversiondeclarator(this);
}


antlrcpp::Any AergiaCpp14Parser::ConversiondeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitConversiondeclarator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ConversiondeclaratorContext* AergiaCpp14Parser::conversiondeclarator() {
  ConversiondeclaratorContext *_localctx = _tracker.createInstance<ConversiondeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 358, AergiaCpp14Parser::RuleConversiondeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2225);
    ptroperator();
    setState(2227);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 272, _ctx)) {
    case 1: {
      setState(2226);
      conversiondeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CtorinitializerContext ------------------------------------------------------------------

AergiaCpp14Parser::CtorinitializerContext::CtorinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::CtorinitializerContext::Colon() {
  return getToken(AergiaCpp14Parser::Colon, 0);
}

AergiaCpp14Parser::MeminitializerlistContext* AergiaCpp14Parser::CtorinitializerContext::meminitializerlist() {
  return getRuleContext<AergiaCpp14Parser::MeminitializerlistContext>(0);
}


size_t AergiaCpp14Parser::CtorinitializerContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleCtorinitializer;
}

void AergiaCpp14Parser::CtorinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCtorinitializer(this);
}

void AergiaCpp14Parser::CtorinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCtorinitializer(this);
}


antlrcpp::Any AergiaCpp14Parser::CtorinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitCtorinitializer(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::CtorinitializerContext* AergiaCpp14Parser::ctorinitializer() {
  CtorinitializerContext *_localctx = _tracker.createInstance<CtorinitializerContext>(_ctx, getState());
  enterRule(_localctx, 360, AergiaCpp14Parser::RuleCtorinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2229);
    match(AergiaCpp14Parser::Colon);
    setState(2230);
    meminitializerlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializerlistContext ------------------------------------------------------------------

AergiaCpp14Parser::MeminitializerlistContext::MeminitializerlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::MeminitializerContext* AergiaCpp14Parser::MeminitializerlistContext::meminitializer() {
  return getRuleContext<AergiaCpp14Parser::MeminitializerContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::MeminitializerlistContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

tree::TerminalNode* AergiaCpp14Parser::MeminitializerlistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}

AergiaCpp14Parser::MeminitializerlistContext* AergiaCpp14Parser::MeminitializerlistContext::meminitializerlist() {
  return getRuleContext<AergiaCpp14Parser::MeminitializerlistContext>(0);
}


size_t AergiaCpp14Parser::MeminitializerlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleMeminitializerlist;
}

void AergiaCpp14Parser::MeminitializerlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializerlist(this);
}

void AergiaCpp14Parser::MeminitializerlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializerlist(this);
}


antlrcpp::Any AergiaCpp14Parser::MeminitializerlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitMeminitializerlist(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::MeminitializerlistContext* AergiaCpp14Parser::meminitializerlist() {
  MeminitializerlistContext *_localctx = _tracker.createInstance<MeminitializerlistContext>(_ctx, getState());
  enterRule(_localctx, 362, AergiaCpp14Parser::RuleMeminitializerlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2243);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 275, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2232);
      meminitializer();
      setState(2234);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Ellipsis) {
        setState(2233);
        match(AergiaCpp14Parser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2236);
      meminitializer();
      setState(2238);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Ellipsis) {
        setState(2237);
        match(AergiaCpp14Parser::Ellipsis);
      }
      setState(2240);
      match(AergiaCpp14Parser::Comma);
      setState(2241);
      meminitializerlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializerContext ------------------------------------------------------------------

AergiaCpp14Parser::MeminitializerContext::MeminitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::MeminitializeridContext* AergiaCpp14Parser::MeminitializerContext::meminitializerid() {
  return getRuleContext<AergiaCpp14Parser::MeminitializeridContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::MeminitializerContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::MeminitializerContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::ExpressionlistContext* AergiaCpp14Parser::MeminitializerContext::expressionlist() {
  return getRuleContext<AergiaCpp14Parser::ExpressionlistContext>(0);
}

AergiaCpp14Parser::BracedinitlistContext* AergiaCpp14Parser::MeminitializerContext::bracedinitlist() {
  return getRuleContext<AergiaCpp14Parser::BracedinitlistContext>(0);
}


size_t AergiaCpp14Parser::MeminitializerContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleMeminitializer;
}

void AergiaCpp14Parser::MeminitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializer(this);
}

void AergiaCpp14Parser::MeminitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializer(this);
}


antlrcpp::Any AergiaCpp14Parser::MeminitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitMeminitializer(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::MeminitializerContext* AergiaCpp14Parser::meminitializer() {
  MeminitializerContext *_localctx = _tracker.createInstance<MeminitializerContext>(_ctx, getState());
  enterRule(_localctx, 364, AergiaCpp14Parser::RuleMeminitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2255);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 277, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2245);
      meminitializerid();
      setState(2246);
      match(AergiaCpp14Parser::LeftParen);
      setState(2248);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
        | (1ULL << AergiaCpp14Parser::T__8)
        | (1ULL << AergiaCpp14Parser::T__9)
        | (1ULL << AergiaCpp14Parser::Alignof)
        | (1ULL << AergiaCpp14Parser::Auto)
        | (1ULL << AergiaCpp14Parser::Bool)
        | (1ULL << AergiaCpp14Parser::Char)
        | (1ULL << AergiaCpp14Parser::Char16)
        | (1ULL << AergiaCpp14Parser::Char32)
        | (1ULL << AergiaCpp14Parser::Const_cast)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Delete)
        | (1ULL << AergiaCpp14Parser::Double)
        | (1ULL << AergiaCpp14Parser::Dynamic_cast)
        | (1ULL << AergiaCpp14Parser::False)
        | (1ULL << AergiaCpp14Parser::Float)
        | (1ULL << AergiaCpp14Parser::Int)
        | (1ULL << AergiaCpp14Parser::Long)
        | (1ULL << AergiaCpp14Parser::New)
        | (1ULL << AergiaCpp14Parser::Noexcept)
        | (1ULL << AergiaCpp14Parser::Nullptr)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
        | (1ULL << (AergiaCpp14Parser::Short - 66))
        | (1ULL << (AergiaCpp14Parser::Signed - 66))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
        | (1ULL << (AergiaCpp14Parser::This - 66))
        | (1ULL << (AergiaCpp14Parser::Throw - 66))
        | (1ULL << (AergiaCpp14Parser::True - 66))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
        | (1ULL << (AergiaCpp14Parser::Void - 66))
        | (1ULL << (AergiaCpp14Parser::Wchar - 66))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
        | (1ULL << (AergiaCpp14Parser::LeftBrace - 66))
        | (1ULL << (AergiaCpp14Parser::Plus - 66))
        | (1ULL << (AergiaCpp14Parser::Minus - 66))
        | (1ULL << (AergiaCpp14Parser::Star - 66))
        | (1ULL << (AergiaCpp14Parser::And - 66))
        | (1ULL << (AergiaCpp14Parser::Or - 66))
        | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
        | (1ULL << (AergiaCpp14Parser::Identifier - 130))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
        setState(2247);
        expressionlist();
      }
      setState(2250);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2252);
      meminitializerid();
      setState(2253);
      bracedinitlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializeridContext ------------------------------------------------------------------

AergiaCpp14Parser::MeminitializeridContext::MeminitializeridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ClassordecltypeContext* AergiaCpp14Parser::MeminitializeridContext::classordecltype() {
  return getRuleContext<AergiaCpp14Parser::ClassordecltypeContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::MeminitializeridContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}


size_t AergiaCpp14Parser::MeminitializeridContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleMeminitializerid;
}

void AergiaCpp14Parser::MeminitializeridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializerid(this);
}

void AergiaCpp14Parser::MeminitializeridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializerid(this);
}


antlrcpp::Any AergiaCpp14Parser::MeminitializeridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitMeminitializerid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::MeminitializeridContext* AergiaCpp14Parser::meminitializerid() {
  MeminitializeridContext *_localctx = _tracker.createInstance<MeminitializeridContext>(_ctx, getState());
  enterRule(_localctx, 366, AergiaCpp14Parser::RuleMeminitializerid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2259);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2257);
      classordecltype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2258);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorfunctionidContext ------------------------------------------------------------------

AergiaCpp14Parser::OperatorfunctionidContext::OperatorfunctionidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::OperatorfunctionidContext::Operator() {
  return getToken(AergiaCpp14Parser::Operator, 0);
}

AergiaCpp14Parser::TheoperatorContext* AergiaCpp14Parser::OperatorfunctionidContext::theoperator() {
  return getRuleContext<AergiaCpp14Parser::TheoperatorContext>(0);
}


size_t AergiaCpp14Parser::OperatorfunctionidContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleOperatorfunctionid;
}

void AergiaCpp14Parser::OperatorfunctionidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorfunctionid(this);
}

void AergiaCpp14Parser::OperatorfunctionidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorfunctionid(this);
}


antlrcpp::Any AergiaCpp14Parser::OperatorfunctionidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitOperatorfunctionid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::OperatorfunctionidContext* AergiaCpp14Parser::operatorfunctionid() {
  OperatorfunctionidContext *_localctx = _tracker.createInstance<OperatorfunctionidContext>(_ctx, getState());
  enterRule(_localctx, 368, AergiaCpp14Parser::RuleOperatorfunctionid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2261);
    match(AergiaCpp14Parser::Operator);
    setState(2262);
    theoperator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteraloperatoridContext ------------------------------------------------------------------

AergiaCpp14Parser::LiteraloperatoridContext::LiteraloperatoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::LiteraloperatoridContext::Operator() {
  return getToken(AergiaCpp14Parser::Operator, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LiteraloperatoridContext::Stringliteral() {
  return getToken(AergiaCpp14Parser::Stringliteral, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LiteraloperatoridContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LiteraloperatoridContext::Userdefinedstringliteral() {
  return getToken(AergiaCpp14Parser::Userdefinedstringliteral, 0);
}


size_t AergiaCpp14Parser::LiteraloperatoridContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleLiteraloperatorid;
}

void AergiaCpp14Parser::LiteraloperatoridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteraloperatorid(this);
}

void AergiaCpp14Parser::LiteraloperatoridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteraloperatorid(this);
}


antlrcpp::Any AergiaCpp14Parser::LiteraloperatoridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitLiteraloperatorid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::LiteraloperatoridContext* AergiaCpp14Parser::literaloperatorid() {
  LiteraloperatoridContext *_localctx = _tracker.createInstance<LiteraloperatoridContext>(_ctx, getState());
  enterRule(_localctx, 370, AergiaCpp14Parser::RuleLiteraloperatorid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2269);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 279, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2264);
      match(AergiaCpp14Parser::Operator);
      setState(2265);
      match(AergiaCpp14Parser::Stringliteral);
      setState(2266);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2267);
      match(AergiaCpp14Parser::Operator);
      setState(2268);
      match(AergiaCpp14Parser::Userdefinedstringliteral);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplatedeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::TemplatedeclarationContext::TemplatedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::TemplatedeclarationContext::Template() {
  return getToken(AergiaCpp14Parser::Template, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TemplatedeclarationContext::Less() {
  return getToken(AergiaCpp14Parser::Less, 0);
}

AergiaCpp14Parser::TemplateparameterlistContext* AergiaCpp14Parser::TemplatedeclarationContext::templateparameterlist() {
  return getRuleContext<AergiaCpp14Parser::TemplateparameterlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::TemplatedeclarationContext::Greater() {
  return getToken(AergiaCpp14Parser::Greater, 0);
}

AergiaCpp14Parser::DeclarationContext* AergiaCpp14Parser::TemplatedeclarationContext::declaration() {
  return getRuleContext<AergiaCpp14Parser::DeclarationContext>(0);
}


size_t AergiaCpp14Parser::TemplatedeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTemplatedeclaration;
}

void AergiaCpp14Parser::TemplatedeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplatedeclaration(this);
}

void AergiaCpp14Parser::TemplatedeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplatedeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::TemplatedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTemplatedeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TemplatedeclarationContext* AergiaCpp14Parser::templatedeclaration() {
  TemplatedeclarationContext *_localctx = _tracker.createInstance<TemplatedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 372, AergiaCpp14Parser::RuleTemplatedeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2271);
    match(AergiaCpp14Parser::Template);
    setState(2272);
    match(AergiaCpp14Parser::Less);
    setState(2273);
    templateparameterlist(0);
    setState(2274);
    match(AergiaCpp14Parser::Greater);
    setState(2275);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateparameterlistContext ------------------------------------------------------------------

AergiaCpp14Parser::TemplateparameterlistContext::TemplateparameterlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::TemplateparameterContext* AergiaCpp14Parser::TemplateparameterlistContext::templateparameter() {
  return getRuleContext<AergiaCpp14Parser::TemplateparameterContext>(0);
}

AergiaCpp14Parser::TemplateparameterlistContext* AergiaCpp14Parser::TemplateparameterlistContext::templateparameterlist() {
  return getRuleContext<AergiaCpp14Parser::TemplateparameterlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::TemplateparameterlistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::TemplateparameterlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTemplateparameterlist;
}

void AergiaCpp14Parser::TemplateparameterlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateparameterlist(this);
}

void AergiaCpp14Parser::TemplateparameterlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateparameterlist(this);
}


antlrcpp::Any AergiaCpp14Parser::TemplateparameterlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTemplateparameterlist(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::TemplateparameterlistContext* AergiaCpp14Parser::templateparameterlist() {
   return templateparameterlist(0);
}

AergiaCpp14Parser::TemplateparameterlistContext* AergiaCpp14Parser::templateparameterlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::TemplateparameterlistContext *_localctx = _tracker.createInstance<TemplateparameterlistContext>(_ctx, parentState);
  AergiaCpp14Parser::TemplateparameterlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 374;
  enterRecursionRule(_localctx, 374, AergiaCpp14Parser::RuleTemplateparameterlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2278);
    templateparameter();
    _ctx->stop = _input->LT(-1);
    setState(2285);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 280, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateparameterlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateparameterlist);
        setState(2280);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2281);
        match(AergiaCpp14Parser::Comma);
        setState(2282);
        templateparameter(); 
      }
      setState(2287);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 280, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TemplateparameterContext ------------------------------------------------------------------

AergiaCpp14Parser::TemplateparameterContext::TemplateparameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::TypeparameterContext* AergiaCpp14Parser::TemplateparameterContext::typeparameter() {
  return getRuleContext<AergiaCpp14Parser::TypeparameterContext>(0);
}

AergiaCpp14Parser::ParameterdeclarationContext* AergiaCpp14Parser::TemplateparameterContext::parameterdeclaration() {
  return getRuleContext<AergiaCpp14Parser::ParameterdeclarationContext>(0);
}


size_t AergiaCpp14Parser::TemplateparameterContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTemplateparameter;
}

void AergiaCpp14Parser::TemplateparameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateparameter(this);
}

void AergiaCpp14Parser::TemplateparameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateparameter(this);
}


antlrcpp::Any AergiaCpp14Parser::TemplateparameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTemplateparameter(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TemplateparameterContext* AergiaCpp14Parser::templateparameter() {
  TemplateparameterContext *_localctx = _tracker.createInstance<TemplateparameterContext>(_ctx, getState());
  enterRule(_localctx, 376, AergiaCpp14Parser::RuleTemplateparameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2290);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 281, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2288);
      typeparameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2289);
      parameterdeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeparameterContext ------------------------------------------------------------------

AergiaCpp14Parser::TypeparameterContext::TypeparameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::TypeparameterContext::Class() {
  return getToken(AergiaCpp14Parser::Class, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TypeparameterContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TypeparameterContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TypeparameterContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}

AergiaCpp14Parser::ThetypeidContext* AergiaCpp14Parser::TypeparameterContext::thetypeid() {
  return getRuleContext<AergiaCpp14Parser::ThetypeidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::TypeparameterContext::Typename_() {
  return getToken(AergiaCpp14Parser::Typename_, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TypeparameterContext::Template() {
  return getToken(AergiaCpp14Parser::Template, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TypeparameterContext::Less() {
  return getToken(AergiaCpp14Parser::Less, 0);
}

AergiaCpp14Parser::TemplateparameterlistContext* AergiaCpp14Parser::TypeparameterContext::templateparameterlist() {
  return getRuleContext<AergiaCpp14Parser::TemplateparameterlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::TypeparameterContext::Greater() {
  return getToken(AergiaCpp14Parser::Greater, 0);
}

AergiaCpp14Parser::IdexpressionContext* AergiaCpp14Parser::TypeparameterContext::idexpression() {
  return getRuleContext<AergiaCpp14Parser::IdexpressionContext>(0);
}


size_t AergiaCpp14Parser::TypeparameterContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTypeparameter;
}

void AergiaCpp14Parser::TypeparameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeparameter(this);
}

void AergiaCpp14Parser::TypeparameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeparameter(this);
}


antlrcpp::Any AergiaCpp14Parser::TypeparameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTypeparameter(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TypeparameterContext* AergiaCpp14Parser::typeparameter() {
  TypeparameterContext *_localctx = _tracker.createInstance<TypeparameterContext>(_ctx, getState());
  enterRule(_localctx, 378, AergiaCpp14Parser::RuleTypeparameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2340);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 291, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2292);
      match(AergiaCpp14Parser::Class);
      setState(2294);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 282, _ctx)) {
      case 1: {
        setState(2293);
        match(AergiaCpp14Parser::Ellipsis);
        break;
      }

      }
      setState(2297);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 283, _ctx)) {
      case 1: {
        setState(2296);
        match(AergiaCpp14Parser::Identifier);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2299);
      match(AergiaCpp14Parser::Class);
      setState(2301);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(2300);
        match(AergiaCpp14Parser::Identifier);
      }
      setState(2303);
      match(AergiaCpp14Parser::Assign);
      setState(2304);
      thetypeid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2305);
      match(AergiaCpp14Parser::Typename_);
      setState(2307);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 285, _ctx)) {
      case 1: {
        setState(2306);
        match(AergiaCpp14Parser::Ellipsis);
        break;
      }

      }
      setState(2310);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx)) {
      case 1: {
        setState(2309);
        match(AergiaCpp14Parser::Identifier);
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2312);
      match(AergiaCpp14Parser::Typename_);
      setState(2314);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(2313);
        match(AergiaCpp14Parser::Identifier);
      }
      setState(2316);
      match(AergiaCpp14Parser::Assign);
      setState(2317);
      thetypeid();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2318);
      match(AergiaCpp14Parser::Template);
      setState(2319);
      match(AergiaCpp14Parser::Less);
      setState(2320);
      templateparameterlist(0);
      setState(2321);
      match(AergiaCpp14Parser::Greater);
      setState(2322);
      match(AergiaCpp14Parser::Class);
      setState(2324);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 288, _ctx)) {
      case 1: {
        setState(2323);
        match(AergiaCpp14Parser::Ellipsis);
        break;
      }

      }
      setState(2327);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx)) {
      case 1: {
        setState(2326);
        match(AergiaCpp14Parser::Identifier);
        break;
      }

      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2329);
      match(AergiaCpp14Parser::Template);
      setState(2330);
      match(AergiaCpp14Parser::Less);
      setState(2331);
      templateparameterlist(0);
      setState(2332);
      match(AergiaCpp14Parser::Greater);
      setState(2333);
      match(AergiaCpp14Parser::Class);
      setState(2335);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(2334);
        match(AergiaCpp14Parser::Identifier);
      }
      setState(2337);
      match(AergiaCpp14Parser::Assign);
      setState(2338);
      idexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpletemplateidContext ------------------------------------------------------------------

AergiaCpp14Parser::SimpletemplateidContext::SimpletemplateidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::TemplatenameContext* AergiaCpp14Parser::SimpletemplateidContext::templatename() {
  return getRuleContext<AergiaCpp14Parser::TemplatenameContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletemplateidContext::Less() {
  return getToken(AergiaCpp14Parser::Less, 0);
}

tree::TerminalNode* AergiaCpp14Parser::SimpletemplateidContext::Greater() {
  return getToken(AergiaCpp14Parser::Greater, 0);
}

AergiaCpp14Parser::TemplateargumentlistContext* AergiaCpp14Parser::SimpletemplateidContext::templateargumentlist() {
  return getRuleContext<AergiaCpp14Parser::TemplateargumentlistContext>(0);
}


size_t AergiaCpp14Parser::SimpletemplateidContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleSimpletemplateid;
}

void AergiaCpp14Parser::SimpletemplateidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpletemplateid(this);
}

void AergiaCpp14Parser::SimpletemplateidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpletemplateid(this);
}


antlrcpp::Any AergiaCpp14Parser::SimpletemplateidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitSimpletemplateid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::SimpletemplateidContext* AergiaCpp14Parser::simpletemplateid() {
  SimpletemplateidContext *_localctx = _tracker.createInstance<SimpletemplateidContext>(_ctx, getState());
  enterRule(_localctx, 380, AergiaCpp14Parser::RuleSimpletemplateid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2342);
    templatename();
    setState(2343);
    match(AergiaCpp14Parser::Less);
    setState(2345);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
      | (1ULL << AergiaCpp14Parser::T__8)
      | (1ULL << AergiaCpp14Parser::T__9)
      | (1ULL << AergiaCpp14Parser::Alignof)
      | (1ULL << AergiaCpp14Parser::Auto)
      | (1ULL << AergiaCpp14Parser::Bool)
      | (1ULL << AergiaCpp14Parser::Char)
      | (1ULL << AergiaCpp14Parser::Char16)
      | (1ULL << AergiaCpp14Parser::Char32)
      | (1ULL << AergiaCpp14Parser::Class)
      | (1ULL << AergiaCpp14Parser::Const)
      | (1ULL << AergiaCpp14Parser::Const_cast)
      | (1ULL << AergiaCpp14Parser::Decltype)
      | (1ULL << AergiaCpp14Parser::Delete)
      | (1ULL << AergiaCpp14Parser::Double)
      | (1ULL << AergiaCpp14Parser::Dynamic_cast)
      | (1ULL << AergiaCpp14Parser::Enum)
      | (1ULL << AergiaCpp14Parser::False)
      | (1ULL << AergiaCpp14Parser::Float)
      | (1ULL << AergiaCpp14Parser::Int)
      | (1ULL << AergiaCpp14Parser::Long)
      | (1ULL << AergiaCpp14Parser::New)
      | (1ULL << AergiaCpp14Parser::Noexcept)
      | (1ULL << AergiaCpp14Parser::Nullptr)
      | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
      | (1ULL << (AergiaCpp14Parser::Short - 66))
      | (1ULL << (AergiaCpp14Parser::Signed - 66))
      | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
      | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
      | (1ULL << (AergiaCpp14Parser::Struct - 66))
      | (1ULL << (AergiaCpp14Parser::This - 66))
      | (1ULL << (AergiaCpp14Parser::True - 66))
      | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
      | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
      | (1ULL << (AergiaCpp14Parser::Union - 66))
      | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
      | (1ULL << (AergiaCpp14Parser::Void - 66))
      | (1ULL << (AergiaCpp14Parser::Volatile - 66))
      | (1ULL << (AergiaCpp14Parser::Wchar - 66))
      | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
      | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
      | (1ULL << (AergiaCpp14Parser::Plus - 66))
      | (1ULL << (AergiaCpp14Parser::Minus - 66))
      | (1ULL << (AergiaCpp14Parser::Star - 66))
      | (1ULL << (AergiaCpp14Parser::And - 66))
      | (1ULL << (AergiaCpp14Parser::Or - 66))
      | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
      | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
      | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
      | (1ULL << (AergiaCpp14Parser::Identifier - 130))
      | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
      | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
      setState(2344);
      templateargumentlist(0);
    }
    setState(2347);
    match(AergiaCpp14Parser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateidContext ------------------------------------------------------------------

AergiaCpp14Parser::TemplateidContext::TemplateidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::SimpletemplateidContext* AergiaCpp14Parser::TemplateidContext::simpletemplateid() {
  return getRuleContext<AergiaCpp14Parser::SimpletemplateidContext>(0);
}

AergiaCpp14Parser::OperatorfunctionidContext* AergiaCpp14Parser::TemplateidContext::operatorfunctionid() {
  return getRuleContext<AergiaCpp14Parser::OperatorfunctionidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::TemplateidContext::Less() {
  return getToken(AergiaCpp14Parser::Less, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TemplateidContext::Greater() {
  return getToken(AergiaCpp14Parser::Greater, 0);
}

AergiaCpp14Parser::TemplateargumentlistContext* AergiaCpp14Parser::TemplateidContext::templateargumentlist() {
  return getRuleContext<AergiaCpp14Parser::TemplateargumentlistContext>(0);
}

AergiaCpp14Parser::LiteraloperatoridContext* AergiaCpp14Parser::TemplateidContext::literaloperatorid() {
  return getRuleContext<AergiaCpp14Parser::LiteraloperatoridContext>(0);
}


size_t AergiaCpp14Parser::TemplateidContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTemplateid;
}

void AergiaCpp14Parser::TemplateidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateid(this);
}

void AergiaCpp14Parser::TemplateidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateid(this);
}


antlrcpp::Any AergiaCpp14Parser::TemplateidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTemplateid(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TemplateidContext* AergiaCpp14Parser::templateid() {
  TemplateidContext *_localctx = _tracker.createInstance<TemplateidContext>(_ctx, getState());
  enterRule(_localctx, 382, AergiaCpp14Parser::RuleTemplateid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2364);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 295, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2349);
      simpletemplateid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2350);
      operatorfunctionid();
      setState(2351);
      match(AergiaCpp14Parser::Less);
      setState(2353);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
        | (1ULL << AergiaCpp14Parser::T__8)
        | (1ULL << AergiaCpp14Parser::T__9)
        | (1ULL << AergiaCpp14Parser::Alignof)
        | (1ULL << AergiaCpp14Parser::Auto)
        | (1ULL << AergiaCpp14Parser::Bool)
        | (1ULL << AergiaCpp14Parser::Char)
        | (1ULL << AergiaCpp14Parser::Char16)
        | (1ULL << AergiaCpp14Parser::Char32)
        | (1ULL << AergiaCpp14Parser::Class)
        | (1ULL << AergiaCpp14Parser::Const)
        | (1ULL << AergiaCpp14Parser::Const_cast)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Delete)
        | (1ULL << AergiaCpp14Parser::Double)
        | (1ULL << AergiaCpp14Parser::Dynamic_cast)
        | (1ULL << AergiaCpp14Parser::Enum)
        | (1ULL << AergiaCpp14Parser::False)
        | (1ULL << AergiaCpp14Parser::Float)
        | (1ULL << AergiaCpp14Parser::Int)
        | (1ULL << AergiaCpp14Parser::Long)
        | (1ULL << AergiaCpp14Parser::New)
        | (1ULL << AergiaCpp14Parser::Noexcept)
        | (1ULL << AergiaCpp14Parser::Nullptr)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
        | (1ULL << (AergiaCpp14Parser::Short - 66))
        | (1ULL << (AergiaCpp14Parser::Signed - 66))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
        | (1ULL << (AergiaCpp14Parser::Struct - 66))
        | (1ULL << (AergiaCpp14Parser::This - 66))
        | (1ULL << (AergiaCpp14Parser::True - 66))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
        | (1ULL << (AergiaCpp14Parser::Union - 66))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
        | (1ULL << (AergiaCpp14Parser::Void - 66))
        | (1ULL << (AergiaCpp14Parser::Volatile - 66))
        | (1ULL << (AergiaCpp14Parser::Wchar - 66))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
        | (1ULL << (AergiaCpp14Parser::Plus - 66))
        | (1ULL << (AergiaCpp14Parser::Minus - 66))
        | (1ULL << (AergiaCpp14Parser::Star - 66))
        | (1ULL << (AergiaCpp14Parser::And - 66))
        | (1ULL << (AergiaCpp14Parser::Or - 66))
        | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
        | (1ULL << (AergiaCpp14Parser::Identifier - 130))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
        setState(2352);
        templateargumentlist(0);
      }
      setState(2355);
      match(AergiaCpp14Parser::Greater);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2357);
      literaloperatorid();
      setState(2358);
      match(AergiaCpp14Parser::Less);
      setState(2360);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
        | (1ULL << AergiaCpp14Parser::T__8)
        | (1ULL << AergiaCpp14Parser::T__9)
        | (1ULL << AergiaCpp14Parser::Alignof)
        | (1ULL << AergiaCpp14Parser::Auto)
        | (1ULL << AergiaCpp14Parser::Bool)
        | (1ULL << AergiaCpp14Parser::Char)
        | (1ULL << AergiaCpp14Parser::Char16)
        | (1ULL << AergiaCpp14Parser::Char32)
        | (1ULL << AergiaCpp14Parser::Class)
        | (1ULL << AergiaCpp14Parser::Const)
        | (1ULL << AergiaCpp14Parser::Const_cast)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Delete)
        | (1ULL << AergiaCpp14Parser::Double)
        | (1ULL << AergiaCpp14Parser::Dynamic_cast)
        | (1ULL << AergiaCpp14Parser::Enum)
        | (1ULL << AergiaCpp14Parser::False)
        | (1ULL << AergiaCpp14Parser::Float)
        | (1ULL << AergiaCpp14Parser::Int)
        | (1ULL << AergiaCpp14Parser::Long)
        | (1ULL << AergiaCpp14Parser::New)
        | (1ULL << AergiaCpp14Parser::Noexcept)
        | (1ULL << AergiaCpp14Parser::Nullptr)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 66))
        | (1ULL << (AergiaCpp14Parser::Short - 66))
        | (1ULL << (AergiaCpp14Parser::Signed - 66))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 66))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 66))
        | (1ULL << (AergiaCpp14Parser::Struct - 66))
        | (1ULL << (AergiaCpp14Parser::This - 66))
        | (1ULL << (AergiaCpp14Parser::True - 66))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 66))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 66))
        | (1ULL << (AergiaCpp14Parser::Union - 66))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 66))
        | (1ULL << (AergiaCpp14Parser::Void - 66))
        | (1ULL << (AergiaCpp14Parser::Volatile - 66))
        | (1ULL << (AergiaCpp14Parser::Wchar - 66))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 66))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 66))
        | (1ULL << (AergiaCpp14Parser::Plus - 66))
        | (1ULL << (AergiaCpp14Parser::Minus - 66))
        | (1ULL << (AergiaCpp14Parser::Star - 66))
        | (1ULL << (AergiaCpp14Parser::And - 66))
        | (1ULL << (AergiaCpp14Parser::Or - 66))
        | (1ULL << (AergiaCpp14Parser::Tilde - 66)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 130))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 130))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 130))
        | (1ULL << (AergiaCpp14Parser::Identifier - 130))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 130))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 130)))) != 0)) {
        setState(2359);
        templateargumentlist(0);
      }
      setState(2362);
      match(AergiaCpp14Parser::Greater);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplatenameContext ------------------------------------------------------------------

AergiaCpp14Parser::TemplatenameContext::TemplatenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::TemplatenameContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}


size_t AergiaCpp14Parser::TemplatenameContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTemplatename;
}

void AergiaCpp14Parser::TemplatenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplatename(this);
}

void AergiaCpp14Parser::TemplatenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplatename(this);
}


antlrcpp::Any AergiaCpp14Parser::TemplatenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTemplatename(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TemplatenameContext* AergiaCpp14Parser::templatename() {
  TemplatenameContext *_localctx = _tracker.createInstance<TemplatenameContext>(_ctx, getState());
  enterRule(_localctx, 384, AergiaCpp14Parser::RuleTemplatename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2366);
    match(AergiaCpp14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateargumentlistContext ------------------------------------------------------------------

AergiaCpp14Parser::TemplateargumentlistContext::TemplateargumentlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::TemplateargumentContext* AergiaCpp14Parser::TemplateargumentlistContext::templateargument() {
  return getRuleContext<AergiaCpp14Parser::TemplateargumentContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::TemplateargumentlistContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

AergiaCpp14Parser::TemplateargumentlistContext* AergiaCpp14Parser::TemplateargumentlistContext::templateargumentlist() {
  return getRuleContext<AergiaCpp14Parser::TemplateargumentlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::TemplateargumentlistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::TemplateargumentlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTemplateargumentlist;
}

void AergiaCpp14Parser::TemplateargumentlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateargumentlist(this);
}

void AergiaCpp14Parser::TemplateargumentlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateargumentlist(this);
}


antlrcpp::Any AergiaCpp14Parser::TemplateargumentlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTemplateargumentlist(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::TemplateargumentlistContext* AergiaCpp14Parser::templateargumentlist() {
   return templateargumentlist(0);
}

AergiaCpp14Parser::TemplateargumentlistContext* AergiaCpp14Parser::templateargumentlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::TemplateargumentlistContext *_localctx = _tracker.createInstance<TemplateargumentlistContext>(_ctx, parentState);
  AergiaCpp14Parser::TemplateargumentlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 386;
  enterRecursionRule(_localctx, 386, AergiaCpp14Parser::RuleTemplateargumentlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2369);
    templateargument();
    setState(2371);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, _ctx)) {
    case 1: {
      setState(2370);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2381);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 298, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateargumentlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateargumentlist);
        setState(2373);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2374);
        match(AergiaCpp14Parser::Comma);
        setState(2375);
        templateargument();
        setState(2377);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, _ctx)) {
        case 1: {
          setState(2376);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(2383);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 298, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TemplateargumentContext ------------------------------------------------------------------

AergiaCpp14Parser::TemplateargumentContext::TemplateargumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ThetypeidContext* AergiaCpp14Parser::TemplateargumentContext::thetypeid() {
  return getRuleContext<AergiaCpp14Parser::ThetypeidContext>(0);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::TemplateargumentContext::constantexpression() {
  return getRuleContext<AergiaCpp14Parser::ConstantexpressionContext>(0);
}

AergiaCpp14Parser::IdexpressionContext* AergiaCpp14Parser::TemplateargumentContext::idexpression() {
  return getRuleContext<AergiaCpp14Parser::IdexpressionContext>(0);
}


size_t AergiaCpp14Parser::TemplateargumentContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTemplateargument;
}

void AergiaCpp14Parser::TemplateargumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateargument(this);
}

void AergiaCpp14Parser::TemplateargumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateargument(this);
}


antlrcpp::Any AergiaCpp14Parser::TemplateargumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTemplateargument(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TemplateargumentContext* AergiaCpp14Parser::templateargument() {
  TemplateargumentContext *_localctx = _tracker.createInstance<TemplateargumentContext>(_ctx, getState());
  enterRule(_localctx, 388, AergiaCpp14Parser::RuleTemplateargument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2387);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 299, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2384);
      thetypeid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2385);
      constantexpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2386);
      idexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypenamespecifierContext ------------------------------------------------------------------

AergiaCpp14Parser::TypenamespecifierContext::TypenamespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::TypenamespecifierContext::Typename_() {
  return getToken(AergiaCpp14Parser::Typename_, 0);
}

AergiaCpp14Parser::NestednamespecifierContext* AergiaCpp14Parser::TypenamespecifierContext::nestednamespecifier() {
  return getRuleContext<AergiaCpp14Parser::NestednamespecifierContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::TypenamespecifierContext::Identifier() {
  return getToken(AergiaCpp14Parser::Identifier, 0);
}

AergiaCpp14Parser::SimpletemplateidContext* AergiaCpp14Parser::TypenamespecifierContext::simpletemplateid() {
  return getRuleContext<AergiaCpp14Parser::SimpletemplateidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::TypenamespecifierContext::Template() {
  return getToken(AergiaCpp14Parser::Template, 0);
}


size_t AergiaCpp14Parser::TypenamespecifierContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTypenamespecifier;
}

void AergiaCpp14Parser::TypenamespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypenamespecifier(this);
}

void AergiaCpp14Parser::TypenamespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypenamespecifier(this);
}


antlrcpp::Any AergiaCpp14Parser::TypenamespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTypenamespecifier(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TypenamespecifierContext* AergiaCpp14Parser::typenamespecifier() {
  TypenamespecifierContext *_localctx = _tracker.createInstance<TypenamespecifierContext>(_ctx, getState());
  enterRule(_localctx, 390, AergiaCpp14Parser::RuleTypenamespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2400);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2389);
      match(AergiaCpp14Parser::Typename_);
      setState(2390);
      nestednamespecifier(0);
      setState(2391);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2393);
      match(AergiaCpp14Parser::Typename_);
      setState(2394);
      nestednamespecifier(0);
      setState(2396);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Template) {
        setState(2395);
        match(AergiaCpp14Parser::Template);
      }
      setState(2398);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitinstantiationContext ------------------------------------------------------------------

AergiaCpp14Parser::ExplicitinstantiationContext::ExplicitinstantiationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::ExplicitinstantiationContext::Template() {
  return getToken(AergiaCpp14Parser::Template, 0);
}

AergiaCpp14Parser::DeclarationContext* AergiaCpp14Parser::ExplicitinstantiationContext::declaration() {
  return getRuleContext<AergiaCpp14Parser::DeclarationContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ExplicitinstantiationContext::Extern() {
  return getToken(AergiaCpp14Parser::Extern, 0);
}


size_t AergiaCpp14Parser::ExplicitinstantiationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleExplicitinstantiation;
}

void AergiaCpp14Parser::ExplicitinstantiationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitinstantiation(this);
}

void AergiaCpp14Parser::ExplicitinstantiationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitinstantiation(this);
}


antlrcpp::Any AergiaCpp14Parser::ExplicitinstantiationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitExplicitinstantiation(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ExplicitinstantiationContext* AergiaCpp14Parser::explicitinstantiation() {
  ExplicitinstantiationContext *_localctx = _tracker.createInstance<ExplicitinstantiationContext>(_ctx, getState());
  enterRule(_localctx, 392, AergiaCpp14Parser::RuleExplicitinstantiation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2403);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Extern) {
      setState(2402);
      match(AergiaCpp14Parser::Extern);
    }
    setState(2405);
    match(AergiaCpp14Parser::Template);
    setState(2406);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitspecializationContext ------------------------------------------------------------------

AergiaCpp14Parser::ExplicitspecializationContext::ExplicitspecializationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::ExplicitspecializationContext::Template() {
  return getToken(AergiaCpp14Parser::Template, 0);
}

tree::TerminalNode* AergiaCpp14Parser::ExplicitspecializationContext::Less() {
  return getToken(AergiaCpp14Parser::Less, 0);
}

tree::TerminalNode* AergiaCpp14Parser::ExplicitspecializationContext::Greater() {
  return getToken(AergiaCpp14Parser::Greater, 0);
}

AergiaCpp14Parser::DeclarationContext* AergiaCpp14Parser::ExplicitspecializationContext::declaration() {
  return getRuleContext<AergiaCpp14Parser::DeclarationContext>(0);
}


size_t AergiaCpp14Parser::ExplicitspecializationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleExplicitspecialization;
}

void AergiaCpp14Parser::ExplicitspecializationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitspecialization(this);
}

void AergiaCpp14Parser::ExplicitspecializationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitspecialization(this);
}


antlrcpp::Any AergiaCpp14Parser::ExplicitspecializationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitExplicitspecialization(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ExplicitspecializationContext* AergiaCpp14Parser::explicitspecialization() {
  ExplicitspecializationContext *_localctx = _tracker.createInstance<ExplicitspecializationContext>(_ctx, getState());
  enterRule(_localctx, 394, AergiaCpp14Parser::RuleExplicitspecialization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2408);
    match(AergiaCpp14Parser::Template);
    setState(2409);
    match(AergiaCpp14Parser::Less);
    setState(2410);
    match(AergiaCpp14Parser::Greater);
    setState(2411);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryblockContext ------------------------------------------------------------------

AergiaCpp14Parser::TryblockContext::TryblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::TryblockContext::Try() {
  return getToken(AergiaCpp14Parser::Try, 0);
}

AergiaCpp14Parser::CompoundstatementContext* AergiaCpp14Parser::TryblockContext::compoundstatement() {
  return getRuleContext<AergiaCpp14Parser::CompoundstatementContext>(0);
}

AergiaCpp14Parser::HandlerseqContext* AergiaCpp14Parser::TryblockContext::handlerseq() {
  return getRuleContext<AergiaCpp14Parser::HandlerseqContext>(0);
}


size_t AergiaCpp14Parser::TryblockContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTryblock;
}

void AergiaCpp14Parser::TryblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryblock(this);
}

void AergiaCpp14Parser::TryblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryblock(this);
}


antlrcpp::Any AergiaCpp14Parser::TryblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTryblock(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TryblockContext* AergiaCpp14Parser::tryblock() {
  TryblockContext *_localctx = _tracker.createInstance<TryblockContext>(_ctx, getState());
  enterRule(_localctx, 396, AergiaCpp14Parser::RuleTryblock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2413);
    match(AergiaCpp14Parser::Try);
    setState(2414);
    compoundstatement();
    setState(2415);
    handlerseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiontryblockContext ------------------------------------------------------------------

AergiaCpp14Parser::FunctiontryblockContext::FunctiontryblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::FunctiontryblockContext::Try() {
  return getToken(AergiaCpp14Parser::Try, 0);
}

AergiaCpp14Parser::CompoundstatementContext* AergiaCpp14Parser::FunctiontryblockContext::compoundstatement() {
  return getRuleContext<AergiaCpp14Parser::CompoundstatementContext>(0);
}

AergiaCpp14Parser::HandlerseqContext* AergiaCpp14Parser::FunctiontryblockContext::handlerseq() {
  return getRuleContext<AergiaCpp14Parser::HandlerseqContext>(0);
}

AergiaCpp14Parser::CtorinitializerContext* AergiaCpp14Parser::FunctiontryblockContext::ctorinitializer() {
  return getRuleContext<AergiaCpp14Parser::CtorinitializerContext>(0);
}


size_t AergiaCpp14Parser::FunctiontryblockContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleFunctiontryblock;
}

void AergiaCpp14Parser::FunctiontryblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiontryblock(this);
}

void AergiaCpp14Parser::FunctiontryblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiontryblock(this);
}


antlrcpp::Any AergiaCpp14Parser::FunctiontryblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitFunctiontryblock(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::FunctiontryblockContext* AergiaCpp14Parser::functiontryblock() {
  FunctiontryblockContext *_localctx = _tracker.createInstance<FunctiontryblockContext>(_ctx, getState());
  enterRule(_localctx, 398, AergiaCpp14Parser::RuleFunctiontryblock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2417);
    match(AergiaCpp14Parser::Try);
    setState(2419);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Colon) {
      setState(2418);
      ctorinitializer();
    }
    setState(2421);
    compoundstatement();
    setState(2422);
    handlerseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerseqContext ------------------------------------------------------------------

AergiaCpp14Parser::HandlerseqContext::HandlerseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::HandlerContext* AergiaCpp14Parser::HandlerseqContext::handler() {
  return getRuleContext<AergiaCpp14Parser::HandlerContext>(0);
}

AergiaCpp14Parser::HandlerseqContext* AergiaCpp14Parser::HandlerseqContext::handlerseq() {
  return getRuleContext<AergiaCpp14Parser::HandlerseqContext>(0);
}


size_t AergiaCpp14Parser::HandlerseqContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleHandlerseq;
}

void AergiaCpp14Parser::HandlerseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandlerseq(this);
}

void AergiaCpp14Parser::HandlerseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandlerseq(this);
}


antlrcpp::Any AergiaCpp14Parser::HandlerseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitHandlerseq(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::HandlerseqContext* AergiaCpp14Parser::handlerseq() {
  HandlerseqContext *_localctx = _tracker.createInstance<HandlerseqContext>(_ctx, getState());
  enterRule(_localctx, 400, AergiaCpp14Parser::RuleHandlerseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2424);
    handler();
    setState(2426);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 304, _ctx)) {
    case 1: {
      setState(2425);
      handlerseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerContext ------------------------------------------------------------------

AergiaCpp14Parser::HandlerContext::HandlerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::HandlerContext::Catch() {
  return getToken(AergiaCpp14Parser::Catch, 0);
}

tree::TerminalNode* AergiaCpp14Parser::HandlerContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ExceptiondeclarationContext* AergiaCpp14Parser::HandlerContext::exceptiondeclaration() {
  return getRuleContext<AergiaCpp14Parser::ExceptiondeclarationContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::HandlerContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::CompoundstatementContext* AergiaCpp14Parser::HandlerContext::compoundstatement() {
  return getRuleContext<AergiaCpp14Parser::CompoundstatementContext>(0);
}


size_t AergiaCpp14Parser::HandlerContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleHandler;
}

void AergiaCpp14Parser::HandlerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandler(this);
}

void AergiaCpp14Parser::HandlerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandler(this);
}


antlrcpp::Any AergiaCpp14Parser::HandlerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitHandler(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::HandlerContext* AergiaCpp14Parser::handler() {
  HandlerContext *_localctx = _tracker.createInstance<HandlerContext>(_ctx, getState());
  enterRule(_localctx, 402, AergiaCpp14Parser::RuleHandler);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2428);
    match(AergiaCpp14Parser::Catch);
    setState(2429);
    match(AergiaCpp14Parser::LeftParen);
    setState(2430);
    exceptiondeclaration();
    setState(2431);
    match(AergiaCpp14Parser::RightParen);
    setState(2432);
    compoundstatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptiondeclarationContext ------------------------------------------------------------------

AergiaCpp14Parser::ExceptiondeclarationContext::ExceptiondeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::TypespecifierseqContext* AergiaCpp14Parser::ExceptiondeclarationContext::typespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::TypespecifierseqContext>(0);
}

AergiaCpp14Parser::DeclaratorContext* AergiaCpp14Parser::ExceptiondeclarationContext::declarator() {
  return getRuleContext<AergiaCpp14Parser::DeclaratorContext>(0);
}

AergiaCpp14Parser::AttributespecifierseqContext* AergiaCpp14Parser::ExceptiondeclarationContext::attributespecifierseq() {
  return getRuleContext<AergiaCpp14Parser::AttributespecifierseqContext>(0);
}

AergiaCpp14Parser::AbstractdeclaratorContext* AergiaCpp14Parser::ExceptiondeclarationContext::abstractdeclarator() {
  return getRuleContext<AergiaCpp14Parser::AbstractdeclaratorContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::ExceptiondeclarationContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}


size_t AergiaCpp14Parser::ExceptiondeclarationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleExceptiondeclaration;
}

void AergiaCpp14Parser::ExceptiondeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptiondeclaration(this);
}

void AergiaCpp14Parser::ExceptiondeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptiondeclaration(this);
}


antlrcpp::Any AergiaCpp14Parser::ExceptiondeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitExceptiondeclaration(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ExceptiondeclarationContext* AergiaCpp14Parser::exceptiondeclaration() {
  ExceptiondeclarationContext *_localctx = _tracker.createInstance<ExceptiondeclarationContext>(_ctx, getState());
  enterRule(_localctx, 404, AergiaCpp14Parser::RuleExceptiondeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2448);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 308, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2435);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2434);
        attributespecifierseq(0);
      }
      setState(2437);
      typespecifierseq();
      setState(2438);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2441);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2440);
        attributespecifierseq(0);
      }
      setState(2443);
      typespecifierseq();
      setState(2445);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::T__10

      || _la == AergiaCpp14Parser::Decltype || ((((_la - 93) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 93)) & ((1ULL << (AergiaCpp14Parser::LeftParen - 93))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 93))
        | (1ULL << (AergiaCpp14Parser::Star - 93))
        | (1ULL << (AergiaCpp14Parser::And - 93))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 93))
        | (1ULL << (AergiaCpp14Parser::Ellipsis - 93))
        | (1ULL << (AergiaCpp14Parser::Identifier - 93)))) != 0)) {
        setState(2444);
        abstractdeclarator();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2447);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowexpressionContext ------------------------------------------------------------------

AergiaCpp14Parser::ThrowexpressionContext::ThrowexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::ThrowexpressionContext::Throw() {
  return getToken(AergiaCpp14Parser::Throw, 0);
}

AergiaCpp14Parser::AssignmentexpressionContext* AergiaCpp14Parser::ThrowexpressionContext::assignmentexpression() {
  return getRuleContext<AergiaCpp14Parser::AssignmentexpressionContext>(0);
}


size_t AergiaCpp14Parser::ThrowexpressionContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleThrowexpression;
}

void AergiaCpp14Parser::ThrowexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowexpression(this);
}

void AergiaCpp14Parser::ThrowexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowexpression(this);
}


antlrcpp::Any AergiaCpp14Parser::ThrowexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitThrowexpression(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ThrowexpressionContext* AergiaCpp14Parser::throwexpression() {
  ThrowexpressionContext *_localctx = _tracker.createInstance<ThrowexpressionContext>(_ctx, getState());
  enterRule(_localctx, 406, AergiaCpp14Parser::RuleThrowexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2450);
    match(AergiaCpp14Parser::Throw);
    setState(2452);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx)) {
    case 1: {
      setState(2451);
      assignmentexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionspecificationContext ------------------------------------------------------------------

AergiaCpp14Parser::ExceptionspecificationContext::ExceptionspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::DynamicexceptionspecificationContext* AergiaCpp14Parser::ExceptionspecificationContext::dynamicexceptionspecification() {
  return getRuleContext<AergiaCpp14Parser::DynamicexceptionspecificationContext>(0);
}

AergiaCpp14Parser::NoexceptspecificationContext* AergiaCpp14Parser::ExceptionspecificationContext::noexceptspecification() {
  return getRuleContext<AergiaCpp14Parser::NoexceptspecificationContext>(0);
}


size_t AergiaCpp14Parser::ExceptionspecificationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleExceptionspecification;
}

void AergiaCpp14Parser::ExceptionspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionspecification(this);
}

void AergiaCpp14Parser::ExceptionspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionspecification(this);
}


antlrcpp::Any AergiaCpp14Parser::ExceptionspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitExceptionspecification(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::ExceptionspecificationContext* AergiaCpp14Parser::exceptionspecification() {
  ExceptionspecificationContext *_localctx = _tracker.createInstance<ExceptionspecificationContext>(_ctx, getState());
  enterRule(_localctx, 408, AergiaCpp14Parser::RuleExceptionspecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2456);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Throw: {
        enterOuterAlt(_localctx, 1);
        setState(2454);
        dynamicexceptionspecification();
        break;
      }

      case AergiaCpp14Parser::Noexcept: {
        enterOuterAlt(_localctx, 2);
        setState(2455);
        noexceptspecification();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DynamicexceptionspecificationContext ------------------------------------------------------------------

AergiaCpp14Parser::DynamicexceptionspecificationContext::DynamicexceptionspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::DynamicexceptionspecificationContext::Throw() {
  return getToken(AergiaCpp14Parser::Throw, 0);
}

tree::TerminalNode* AergiaCpp14Parser::DynamicexceptionspecificationContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::DynamicexceptionspecificationContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}

AergiaCpp14Parser::TypeidlistContext* AergiaCpp14Parser::DynamicexceptionspecificationContext::typeidlist() {
  return getRuleContext<AergiaCpp14Parser::TypeidlistContext>(0);
}


size_t AergiaCpp14Parser::DynamicexceptionspecificationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleDynamicexceptionspecification;
}

void AergiaCpp14Parser::DynamicexceptionspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDynamicexceptionspecification(this);
}

void AergiaCpp14Parser::DynamicexceptionspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDynamicexceptionspecification(this);
}


antlrcpp::Any AergiaCpp14Parser::DynamicexceptionspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitDynamicexceptionspecification(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::DynamicexceptionspecificationContext* AergiaCpp14Parser::dynamicexceptionspecification() {
  DynamicexceptionspecificationContext *_localctx = _tracker.createInstance<DynamicexceptionspecificationContext>(_ctx, getState());
  enterRule(_localctx, 410, AergiaCpp14Parser::RuleDynamicexceptionspecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2458);
    match(AergiaCpp14Parser::Throw);
    setState(2459);
    match(AergiaCpp14Parser::LeftParen);
    setState(2461);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__0)
      | (1ULL << AergiaCpp14Parser::Auto)
      | (1ULL << AergiaCpp14Parser::Bool)
      | (1ULL << AergiaCpp14Parser::Char)
      | (1ULL << AergiaCpp14Parser::Char16)
      | (1ULL << AergiaCpp14Parser::Char32)
      | (1ULL << AergiaCpp14Parser::Class)
      | (1ULL << AergiaCpp14Parser::Const)
      | (1ULL << AergiaCpp14Parser::Decltype)
      | (1ULL << AergiaCpp14Parser::Double)
      | (1ULL << AergiaCpp14Parser::Enum)
      | (1ULL << AergiaCpp14Parser::Float)
      | (1ULL << AergiaCpp14Parser::Int)
      | (1ULL << AergiaCpp14Parser::Long))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (AergiaCpp14Parser::Short - 68))
      | (1ULL << (AergiaCpp14Parser::Signed - 68))
      | (1ULL << (AergiaCpp14Parser::Struct - 68))
      | (1ULL << (AergiaCpp14Parser::Typename_ - 68))
      | (1ULL << (AergiaCpp14Parser::Union - 68))
      | (1ULL << (AergiaCpp14Parser::Unsigned - 68))
      | (1ULL << (AergiaCpp14Parser::Void - 68))
      | (1ULL << (AergiaCpp14Parser::Volatile - 68))
      | (1ULL << (AergiaCpp14Parser::Wchar - 68)))) != 0) || _la == AergiaCpp14Parser::Doublecolon

    || _la == AergiaCpp14Parser::Identifier) {
      setState(2460);
      typeidlist(0);
    }
    setState(2463);
    match(AergiaCpp14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeidlistContext ------------------------------------------------------------------

AergiaCpp14Parser::TypeidlistContext::TypeidlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AergiaCpp14Parser::ThetypeidContext* AergiaCpp14Parser::TypeidlistContext::thetypeid() {
  return getRuleContext<AergiaCpp14Parser::ThetypeidContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::TypeidlistContext::Ellipsis() {
  return getToken(AergiaCpp14Parser::Ellipsis, 0);
}

AergiaCpp14Parser::TypeidlistContext* AergiaCpp14Parser::TypeidlistContext::typeidlist() {
  return getRuleContext<AergiaCpp14Parser::TypeidlistContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::TypeidlistContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}


size_t AergiaCpp14Parser::TypeidlistContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTypeidlist;
}

void AergiaCpp14Parser::TypeidlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeidlist(this);
}

void AergiaCpp14Parser::TypeidlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeidlist(this);
}


antlrcpp::Any AergiaCpp14Parser::TypeidlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTypeidlist(this);
  else
    return visitor->visitChildren(this);
}


AergiaCpp14Parser::TypeidlistContext* AergiaCpp14Parser::typeidlist() {
   return typeidlist(0);
}

AergiaCpp14Parser::TypeidlistContext* AergiaCpp14Parser::typeidlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AergiaCpp14Parser::TypeidlistContext *_localctx = _tracker.createInstance<TypeidlistContext>(_ctx, parentState);
  AergiaCpp14Parser::TypeidlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 412;
  enterRecursionRule(_localctx, 412, AergiaCpp14Parser::RuleTypeidlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2466);
    thetypeid();
    setState(2468);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx)) {
    case 1: {
      setState(2467);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2478);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeidlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeidlist);
        setState(2470);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2471);
        match(AergiaCpp14Parser::Comma);
        setState(2472);
        thetypeid();
        setState(2474);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, _ctx)) {
        case 1: {
          setState(2473);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(2480);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NoexceptspecificationContext ------------------------------------------------------------------

AergiaCpp14Parser::NoexceptspecificationContext::NoexceptspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::NoexceptspecificationContext::Noexcept() {
  return getToken(AergiaCpp14Parser::Noexcept, 0);
}

tree::TerminalNode* AergiaCpp14Parser::NoexceptspecificationContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

AergiaCpp14Parser::ConstantexpressionContext* AergiaCpp14Parser::NoexceptspecificationContext::constantexpression() {
  return getRuleContext<AergiaCpp14Parser::ConstantexpressionContext>(0);
}

tree::TerminalNode* AergiaCpp14Parser::NoexceptspecificationContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}


size_t AergiaCpp14Parser::NoexceptspecificationContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleNoexceptspecification;
}

void AergiaCpp14Parser::NoexceptspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoexceptspecification(this);
}

void AergiaCpp14Parser::NoexceptspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoexceptspecification(this);
}


antlrcpp::Any AergiaCpp14Parser::NoexceptspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitNoexceptspecification(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::NoexceptspecificationContext* AergiaCpp14Parser::noexceptspecification() {
  NoexceptspecificationContext *_localctx = _tracker.createInstance<NoexceptspecificationContext>(_ctx, getState());
  enterRule(_localctx, 414, AergiaCpp14Parser::RuleNoexceptspecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2487);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 315, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2481);
      match(AergiaCpp14Parser::Noexcept);
      setState(2482);
      match(AergiaCpp14Parser::LeftParen);
      setState(2483);
      constantexpression();
      setState(2484);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2486);
      match(AergiaCpp14Parser::Noexcept);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreprocessorDirectiveContext ------------------------------------------------------------------

AergiaCpp14Parser::PreprocessorDirectiveContext::PreprocessorDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::PreprocessorDirectiveContext::MultiLineMacro() {
  return getToken(AergiaCpp14Parser::MultiLineMacro, 0);
}

tree::TerminalNode* AergiaCpp14Parser::PreprocessorDirectiveContext::Directive() {
  return getToken(AergiaCpp14Parser::Directive, 0);
}


size_t AergiaCpp14Parser::PreprocessorDirectiveContext::getRuleIndex() const {
  return AergiaCpp14Parser::RulePreprocessorDirective;
}

void AergiaCpp14Parser::PreprocessorDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorDirective(this);
}

void AergiaCpp14Parser::PreprocessorDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorDirective(this);
}


antlrcpp::Any AergiaCpp14Parser::PreprocessorDirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitPreprocessorDirective(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::PreprocessorDirectiveContext* AergiaCpp14Parser::preprocessorDirective() {
  PreprocessorDirectiveContext *_localctx = _tracker.createInstance<PreprocessorDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 416, AergiaCpp14Parser::RulePreprocessorDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2489);
    _la = _input->LA(1);
    if (!(_la == AergiaCpp14Parser::MultiLineMacro

    || _la == AergiaCpp14Parser::Directive)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheoperatorContext ------------------------------------------------------------------

AergiaCpp14Parser::TheoperatorContext::TheoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::New() {
  return getToken(AergiaCpp14Parser::New, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Delete() {
  return getToken(AergiaCpp14Parser::Delete, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::LeftBracket() {
  return getToken(AergiaCpp14Parser::LeftBracket, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::RightBracket() {
  return getToken(AergiaCpp14Parser::RightBracket, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Plus() {
  return getToken(AergiaCpp14Parser::Plus, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Minus() {
  return getToken(AergiaCpp14Parser::Minus, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Star() {
  return getToken(AergiaCpp14Parser::Star, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Div() {
  return getToken(AergiaCpp14Parser::Div, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Mod() {
  return getToken(AergiaCpp14Parser::Mod, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Caret() {
  return getToken(AergiaCpp14Parser::Caret, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::And() {
  return getToken(AergiaCpp14Parser::And, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Or() {
  return getToken(AergiaCpp14Parser::Or, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Tilde() {
  return getToken(AergiaCpp14Parser::Tilde, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Assign() {
  return getToken(AergiaCpp14Parser::Assign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Less() {
  return getToken(AergiaCpp14Parser::Less, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Greater() {
  return getToken(AergiaCpp14Parser::Greater, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::PlusAssign() {
  return getToken(AergiaCpp14Parser::PlusAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::MinusAssign() {
  return getToken(AergiaCpp14Parser::MinusAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::StarAssign() {
  return getToken(AergiaCpp14Parser::StarAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::DivAssign() {
  return getToken(AergiaCpp14Parser::DivAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::ModAssign() {
  return getToken(AergiaCpp14Parser::ModAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::XorAssign() {
  return getToken(AergiaCpp14Parser::XorAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::AndAssign() {
  return getToken(AergiaCpp14Parser::AndAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::OrAssign() {
  return getToken(AergiaCpp14Parser::OrAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::LeftShift() {
  return getToken(AergiaCpp14Parser::LeftShift, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::RightShift() {
  return getToken(AergiaCpp14Parser::RightShift, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::RightShiftAssign() {
  return getToken(AergiaCpp14Parser::RightShiftAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::LeftShiftAssign() {
  return getToken(AergiaCpp14Parser::LeftShiftAssign, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Equal() {
  return getToken(AergiaCpp14Parser::Equal, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::NotEqual() {
  return getToken(AergiaCpp14Parser::NotEqual, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::LessEqual() {
  return getToken(AergiaCpp14Parser::LessEqual, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::GreaterEqual() {
  return getToken(AergiaCpp14Parser::GreaterEqual, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::PlusPlus() {
  return getToken(AergiaCpp14Parser::PlusPlus, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::MinusMinus() {
  return getToken(AergiaCpp14Parser::MinusMinus, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Comma() {
  return getToken(AergiaCpp14Parser::Comma, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::ArrowStar() {
  return getToken(AergiaCpp14Parser::ArrowStar, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::Arrow() {
  return getToken(AergiaCpp14Parser::Arrow, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::LeftParen() {
  return getToken(AergiaCpp14Parser::LeftParen, 0);
}

tree::TerminalNode* AergiaCpp14Parser::TheoperatorContext::RightParen() {
  return getToken(AergiaCpp14Parser::RightParen, 0);
}


size_t AergiaCpp14Parser::TheoperatorContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleTheoperator;
}

void AergiaCpp14Parser::TheoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheoperator(this);
}

void AergiaCpp14Parser::TheoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheoperator(this);
}


antlrcpp::Any AergiaCpp14Parser::TheoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitTheoperator(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::TheoperatorContext* AergiaCpp14Parser::theoperator() {
  TheoperatorContext *_localctx = _tracker.createInstance<TheoperatorContext>(_ctx, getState());
  enterRule(_localctx, 418, AergiaCpp14Parser::RuleTheoperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2542);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 316, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2491);
      match(AergiaCpp14Parser::New);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2492);
      match(AergiaCpp14Parser::Delete);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2493);
      match(AergiaCpp14Parser::New);
      setState(2494);
      match(AergiaCpp14Parser::LeftBracket);
      setState(2495);
      match(AergiaCpp14Parser::RightBracket);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2496);
      match(AergiaCpp14Parser::Delete);
      setState(2497);
      match(AergiaCpp14Parser::LeftBracket);
      setState(2498);
      match(AergiaCpp14Parser::RightBracket);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2499);
      match(AergiaCpp14Parser::Plus);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2500);
      match(AergiaCpp14Parser::Minus);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2501);
      match(AergiaCpp14Parser::Star);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2502);
      match(AergiaCpp14Parser::Div);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2503);
      match(AergiaCpp14Parser::Mod);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2504);
      match(AergiaCpp14Parser::Caret);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2505);
      match(AergiaCpp14Parser::And);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2506);
      match(AergiaCpp14Parser::Or);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2507);
      match(AergiaCpp14Parser::Tilde);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2508);
      match(AergiaCpp14Parser::T__8);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2509);
      match(AergiaCpp14Parser::T__9);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2510);
      match(AergiaCpp14Parser::Assign);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2511);
      match(AergiaCpp14Parser::Less);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2512);
      match(AergiaCpp14Parser::Greater);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2513);
      match(AergiaCpp14Parser::PlusAssign);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2514);
      match(AergiaCpp14Parser::MinusAssign);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2515);
      match(AergiaCpp14Parser::StarAssign);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2516);
      match(AergiaCpp14Parser::DivAssign);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2517);
      match(AergiaCpp14Parser::ModAssign);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2518);
      match(AergiaCpp14Parser::XorAssign);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2519);
      match(AergiaCpp14Parser::AndAssign);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2520);
      match(AergiaCpp14Parser::OrAssign);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2521);
      match(AergiaCpp14Parser::LeftShift);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2522);
      match(AergiaCpp14Parser::RightShift);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2523);
      match(AergiaCpp14Parser::RightShiftAssign);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2524);
      match(AergiaCpp14Parser::LeftShiftAssign);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2525);
      match(AergiaCpp14Parser::Equal);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2526);
      match(AergiaCpp14Parser::NotEqual);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2527);
      match(AergiaCpp14Parser::LessEqual);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2528);
      match(AergiaCpp14Parser::GreaterEqual);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2529);
      match(AergiaCpp14Parser::T__10);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2530);
      match(AergiaCpp14Parser::T__11);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2531);
      match(AergiaCpp14Parser::T__12);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2532);
      match(AergiaCpp14Parser::T__13);
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2533);
      match(AergiaCpp14Parser::PlusPlus);
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(2534);
      match(AergiaCpp14Parser::MinusMinus);
      break;
    }

    case 41: {
      enterOuterAlt(_localctx, 41);
      setState(2535);
      match(AergiaCpp14Parser::Comma);
      break;
    }

    case 42: {
      enterOuterAlt(_localctx, 42);
      setState(2536);
      match(AergiaCpp14Parser::ArrowStar);
      break;
    }

    case 43: {
      enterOuterAlt(_localctx, 43);
      setState(2537);
      match(AergiaCpp14Parser::Arrow);
      break;
    }

    case 44: {
      enterOuterAlt(_localctx, 44);
      setState(2538);
      match(AergiaCpp14Parser::LeftParen);
      setState(2539);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 45: {
      enterOuterAlt(_localctx, 45);
      setState(2540);
      match(AergiaCpp14Parser::LeftBracket);
      setState(2541);
      match(AergiaCpp14Parser::RightBracket);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

AergiaCpp14Parser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::LiteralContext::Integerliteral() {
  return getToken(AergiaCpp14Parser::Integerliteral, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LiteralContext::Characterliteral() {
  return getToken(AergiaCpp14Parser::Characterliteral, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LiteralContext::Floatingliteral() {
  return getToken(AergiaCpp14Parser::Floatingliteral, 0);
}

tree::TerminalNode* AergiaCpp14Parser::LiteralContext::Stringliteral() {
  return getToken(AergiaCpp14Parser::Stringliteral, 0);
}

AergiaCpp14Parser::BooleanliteralContext* AergiaCpp14Parser::LiteralContext::booleanliteral() {
  return getRuleContext<AergiaCpp14Parser::BooleanliteralContext>(0);
}

AergiaCpp14Parser::PointerliteralContext* AergiaCpp14Parser::LiteralContext::pointerliteral() {
  return getRuleContext<AergiaCpp14Parser::PointerliteralContext>(0);
}

AergiaCpp14Parser::UserdefinedliteralContext* AergiaCpp14Parser::LiteralContext::userdefinedliteral() {
  return getRuleContext<AergiaCpp14Parser::UserdefinedliteralContext>(0);
}


size_t AergiaCpp14Parser::LiteralContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleLiteral;
}

void AergiaCpp14Parser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void AergiaCpp14Parser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any AergiaCpp14Parser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::LiteralContext* AergiaCpp14Parser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 420, AergiaCpp14Parser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2551);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Integerliteral: {
        enterOuterAlt(_localctx, 1);
        setState(2544);
        match(AergiaCpp14Parser::Integerliteral);
        break;
      }

      case AergiaCpp14Parser::Characterliteral: {
        enterOuterAlt(_localctx, 2);
        setState(2545);
        match(AergiaCpp14Parser::Characterliteral);
        break;
      }

      case AergiaCpp14Parser::Floatingliteral: {
        enterOuterAlt(_localctx, 3);
        setState(2546);
        match(AergiaCpp14Parser::Floatingliteral);
        break;
      }

      case AergiaCpp14Parser::Stringliteral: {
        enterOuterAlt(_localctx, 4);
        setState(2547);
        match(AergiaCpp14Parser::Stringliteral);
        break;
      }

      case AergiaCpp14Parser::False:
      case AergiaCpp14Parser::True: {
        enterOuterAlt(_localctx, 5);
        setState(2548);
        booleanliteral();
        break;
      }

      case AergiaCpp14Parser::Nullptr: {
        enterOuterAlt(_localctx, 6);
        setState(2549);
        pointerliteral();
        break;
      }

      case AergiaCpp14Parser::Userdefinedintegerliteral:
      case AergiaCpp14Parser::Userdefinedfloatingliteral:
      case AergiaCpp14Parser::Userdefinedstringliteral:
      case AergiaCpp14Parser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 7);
        setState(2550);
        userdefinedliteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanliteralContext ------------------------------------------------------------------

AergiaCpp14Parser::BooleanliteralContext::BooleanliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::BooleanliteralContext::False() {
  return getToken(AergiaCpp14Parser::False, 0);
}

tree::TerminalNode* AergiaCpp14Parser::BooleanliteralContext::True() {
  return getToken(AergiaCpp14Parser::True, 0);
}


size_t AergiaCpp14Parser::BooleanliteralContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleBooleanliteral;
}

void AergiaCpp14Parser::BooleanliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanliteral(this);
}

void AergiaCpp14Parser::BooleanliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanliteral(this);
}


antlrcpp::Any AergiaCpp14Parser::BooleanliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitBooleanliteral(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::BooleanliteralContext* AergiaCpp14Parser::booleanliteral() {
  BooleanliteralContext *_localctx = _tracker.createInstance<BooleanliteralContext>(_ctx, getState());
  enterRule(_localctx, 422, AergiaCpp14Parser::RuleBooleanliteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2553);
    _la = _input->LA(1);
    if (!(_la == AergiaCpp14Parser::False

    || _la == AergiaCpp14Parser::True)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerliteralContext ------------------------------------------------------------------

AergiaCpp14Parser::PointerliteralContext::PointerliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::PointerliteralContext::Nullptr() {
  return getToken(AergiaCpp14Parser::Nullptr, 0);
}


size_t AergiaCpp14Parser::PointerliteralContext::getRuleIndex() const {
  return AergiaCpp14Parser::RulePointerliteral;
}

void AergiaCpp14Parser::PointerliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerliteral(this);
}

void AergiaCpp14Parser::PointerliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerliteral(this);
}


antlrcpp::Any AergiaCpp14Parser::PointerliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitPointerliteral(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::PointerliteralContext* AergiaCpp14Parser::pointerliteral() {
  PointerliteralContext *_localctx = _tracker.createInstance<PointerliteralContext>(_ctx, getState());
  enterRule(_localctx, 424, AergiaCpp14Parser::RulePointerliteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2555);
    match(AergiaCpp14Parser::Nullptr);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserdefinedliteralContext ------------------------------------------------------------------

AergiaCpp14Parser::UserdefinedliteralContext::UserdefinedliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AergiaCpp14Parser::UserdefinedliteralContext::Userdefinedintegerliteral() {
  return getToken(AergiaCpp14Parser::Userdefinedintegerliteral, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UserdefinedliteralContext::Userdefinedfloatingliteral() {
  return getToken(AergiaCpp14Parser::Userdefinedfloatingliteral, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UserdefinedliteralContext::Userdefinedstringliteral() {
  return getToken(AergiaCpp14Parser::Userdefinedstringliteral, 0);
}

tree::TerminalNode* AergiaCpp14Parser::UserdefinedliteralContext::Userdefinedcharacterliteral() {
  return getToken(AergiaCpp14Parser::Userdefinedcharacterliteral, 0);
}


size_t AergiaCpp14Parser::UserdefinedliteralContext::getRuleIndex() const {
  return AergiaCpp14Parser::RuleUserdefinedliteral;
}

void AergiaCpp14Parser::UserdefinedliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserdefinedliteral(this);
}

void AergiaCpp14Parser::UserdefinedliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AergiaCpp14Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserdefinedliteral(this);
}


antlrcpp::Any AergiaCpp14Parser::UserdefinedliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AergiaCpp14Visitor*>(visitor))
    return parserVisitor->visitUserdefinedliteral(this);
  else
    return visitor->visitChildren(this);
}

AergiaCpp14Parser::UserdefinedliteralContext* AergiaCpp14Parser::userdefinedliteral() {
  UserdefinedliteralContext *_localctx = _tracker.createInstance<UserdefinedliteralContext>(_ctx, getState());
  enterRule(_localctx, 426, AergiaCpp14Parser::RuleUserdefinedliteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2557);
    _la = _input->LA(1);
    if (!(((((_la - 152) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 152)) & ((1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 152))
      | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 152))
      | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 152))
      | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 152)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool AergiaCpp14Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 18: return nestednamespecifierSempred(dynamic_cast<NestednamespecifierContext *>(context), predicateIndex);
    case 23: return capturelistSempred(dynamic_cast<CapturelistContext *>(context), predicateIndex);
    case 28: return postfixexpressionSempred(dynamic_cast<PostfixexpressionContext *>(context), predicateIndex);
    case 39: return noptrnewdeclaratorSempred(dynamic_cast<NoptrnewdeclaratorContext *>(context), predicateIndex);
    case 44: return pmexpressionSempred(dynamic_cast<PmexpressionContext *>(context), predicateIndex);
    case 45: return multiplicativeexpressionSempred(dynamic_cast<MultiplicativeexpressionContext *>(context), predicateIndex);
    case 46: return additiveexpressionSempred(dynamic_cast<AdditiveexpressionContext *>(context), predicateIndex);
    case 47: return shiftexpressionSempred(dynamic_cast<ShiftexpressionContext *>(context), predicateIndex);
    case 49: return relationalexpressionSempred(dynamic_cast<RelationalexpressionContext *>(context), predicateIndex);
    case 50: return equalityexpressionSempred(dynamic_cast<EqualityexpressionContext *>(context), predicateIndex);
    case 51: return andexpressionSempred(dynamic_cast<AndexpressionContext *>(context), predicateIndex);
    case 52: return exclusiveorexpressionSempred(dynamic_cast<ExclusiveorexpressionContext *>(context), predicateIndex);
    case 53: return inclusiveorexpressionSempred(dynamic_cast<InclusiveorexpressionContext *>(context), predicateIndex);
    case 54: return logicalandexpressionSempred(dynamic_cast<LogicalandexpressionContext *>(context), predicateIndex);
    case 55: return logicalorexpressionSempred(dynamic_cast<LogicalorexpressionContext *>(context), predicateIndex);
    case 59: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 65: return statementseqSempred(dynamic_cast<StatementseqContext *>(context), predicateIndex);
    case 74: return declarationseqSempred(dynamic_cast<DeclarationseqContext *>(context), predicateIndex);
    case 101: return enumeratorlistSempred(dynamic_cast<EnumeratorlistContext *>(context), predicateIndex);
    case 118: return attributespecifierseqSempred(dynamic_cast<AttributespecifierseqContext *>(context), predicateIndex);
    case 121: return attributelistSempred(dynamic_cast<AttributelistContext *>(context), predicateIndex);
    case 127: return balancedtokenseqSempred(dynamic_cast<BalancedtokenseqContext *>(context), predicateIndex);
    case 129: return initdeclaratorlistSempred(dynamic_cast<InitdeclaratorlistContext *>(context), predicateIndex);
    case 133: return noptrdeclaratorSempred(dynamic_cast<NoptrdeclaratorContext *>(context), predicateIndex);
    case 144: return noptrabstractdeclaratorSempred(dynamic_cast<NoptrabstractdeclaratorContext *>(context), predicateIndex);
    case 146: return noptrabstractpackdeclaratorSempred(dynamic_cast<NoptrabstractpackdeclaratorContext *>(context), predicateIndex);
    case 148: return parameterdeclarationlistSempred(dynamic_cast<ParameterdeclarationlistContext *>(context), predicateIndex);
    case 155: return initializerlistSempred(dynamic_cast<InitializerlistContext *>(context), predicateIndex);
    case 165: return memberdeclaratorlistSempred(dynamic_cast<MemberdeclaratorlistContext *>(context), predicateIndex);
    case 168: return virtspecifierseqSempred(dynamic_cast<VirtspecifierseqContext *>(context), predicateIndex);
    case 172: return basespecifierlistSempred(dynamic_cast<BasespecifierlistContext *>(context), predicateIndex);
    case 187: return templateparameterlistSempred(dynamic_cast<TemplateparameterlistContext *>(context), predicateIndex);
    case 193: return templateargumentlistSempred(dynamic_cast<TemplateargumentlistContext *>(context), predicateIndex);
    case 206: return typeidlistSempred(dynamic_cast<TypeidlistContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::nestednamespecifierSempred(NestednamespecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::capturelistSempred(CapturelistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::postfixexpressionSempred(PostfixexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 19);
    case 4: return precpred(_ctx, 18);
    case 5: return precpred(_ctx, 17);
    case 6: return precpred(_ctx, 12);
    case 7: return precpred(_ctx, 11);
    case 8: return precpred(_ctx, 10);
    case 9: return precpred(_ctx, 9);
    case 10: return precpred(_ctx, 8);
    case 11: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::noptrnewdeclaratorSempred(NoptrnewdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::pmexpressionSempred(PmexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::multiplicativeexpressionSempred(MultiplicativeexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 3);
    case 16: return precpred(_ctx, 2);
    case 17: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::additiveexpressionSempred(AdditiveexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 18: return precpred(_ctx, 2);
    case 19: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::shiftexpressionSempred(ShiftexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 20: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::relationalexpressionSempred(RelationalexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 21: return precpred(_ctx, 4);
    case 22: return precpred(_ctx, 3);
    case 23: return precpred(_ctx, 2);
    case 24: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::equalityexpressionSempred(EqualityexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 25: return precpred(_ctx, 2);
    case 26: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::andexpressionSempred(AndexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 27: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::exclusiveorexpressionSempred(ExclusiveorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 28: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::inclusiveorexpressionSempred(InclusiveorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 29: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::logicalandexpressionSempred(LogicalandexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 30: return precpred(_ctx, 2);
    case 31: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::logicalorexpressionSempred(LogicalorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 32: return precpred(_ctx, 2);
    case 33: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 34: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::statementseqSempred(StatementseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 35: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::declarationseqSempred(DeclarationseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 36: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::enumeratorlistSempred(EnumeratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 37: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::attributespecifierseqSempred(AttributespecifierseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 38: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::attributelistSempred(AttributelistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 39: return precpred(_ctx, 3);
    case 40: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::balancedtokenseqSempred(BalancedtokenseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 41: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::initdeclaratorlistSempred(InitdeclaratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 42: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::noptrdeclaratorSempred(NoptrdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 43: return precpred(_ctx, 3);
    case 44: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::noptrabstractdeclaratorSempred(NoptrabstractdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 45: return precpred(_ctx, 5);
    case 46: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::noptrabstractpackdeclaratorSempred(NoptrabstractpackdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 47: return precpred(_ctx, 3);
    case 48: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::parameterdeclarationlistSempred(ParameterdeclarationlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 49: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::initializerlistSempred(InitializerlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 50: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::memberdeclaratorlistSempred(MemberdeclaratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 51: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::virtspecifierseqSempred(VirtspecifierseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 52: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::basespecifierlistSempred(BasespecifierlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 53: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::templateparameterlistSempred(TemplateparameterlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 54: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::templateargumentlistSempred(TemplateargumentlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 55: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool AergiaCpp14Parser::typeidlistSempred(TypeidlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 56: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> AergiaCpp14Parser::_decisionToDFA;
atn::PredictionContextCache AergiaCpp14Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN AergiaCpp14Parser::_atn;
std::vector<uint16_t> AergiaCpp14Parser::_serializedATN;

std::vector<std::string> AergiaCpp14Parser::_ruleNames = {
  "translationunit", "aergiaexpressionbegin", "aergiaexpressionend", "aergiaBlock", 
  "aergiaexpression", "aergiaExpression_type_target", "aergiaExpression_value_target", 
  "aergiaExpression_identifier_target", "anonymousExpression", "anoynmousBody", 
  "foreach", "foreachheader", "foreachbody", "callchain", "primaryexpression", 
  "idexpression", "unqualifiedid", "qualifiedid", "nestednamespecifier", 
  "lambdaexpression", "lambdaintroducer", "lambdacapture", "capturedefault", 
  "capturelist", "capture", "simplecapture", "initcapture", "lambdadeclarator", 
  "postfixexpression", "typeidofexpr", "typeidofthetypeid", "expressionlist", 
  "pseudodestructorname", "unaryexpression", "unaryoperator", "newexpression", 
  "newplacement", "newtypeid", "newdeclarator", "noptrnewdeclarator", "newinitializer", 
  "deleteexpression", "noexceptexpression", "castexpression", "pmexpression", 
  "multiplicativeexpression", "additiveexpression", "shiftexpression", "shiftoperator", 
  "relationalexpression", "equalityexpression", "andexpression", "exclusiveorexpression", 
  "inclusiveorexpression", "logicalandexpression", "logicalorexpression", 
  "conditionalexpression", "assignmentexpression", "assignmentoperator", 
  "expression", "constantexpression", "statement", "labeledstatement", "expressionstatement", 
  "compoundstatement", "statementseq", "selectionstatement", "condition", 
  "iterationstatement", "forinitstatement", "forrangedeclaration", "forrangeinitializer", 
  "jumpstatement", "declarationstatement", "declarationseq", "declaration", 
  "blockdeclaration", "aliasdeclaration", "simpledeclaration", "static_assertdeclaration", 
  "emptydeclaration", "attributedeclaration", "declspecifier", "declspecifierseq", 
  "storageclassspecifier", "functionspecifier", "typedefname", "typespecifier", 
  "trailingtypespecifier", "typespecifierseq", "trailingtypespecifierseq", 
  "simpletypespecifier", "thetypename", "decltypespecifier", "elaboratedtypespecifier", 
  "enumname", "enumspecifier", "enumhead", "opaqueenumdeclaration", "enumkey", 
  "enumbase", "enumeratorlist", "enumeratordefinition", "enumerator", "namespacename", 
  "originalnamespacename", "namespacedefinition", "namednamespacedefinition", 
  "originalnamespacedefinition", "unnamednamespacedefinition", "namespacebody", 
  "namespacealias", "namespacealiasdefinition", "qualifiednamespacespecifier", 
  "usingdeclaration", "usingdirective", "asmdefinition", "linkagespecification", 
  "attributespecifierseq", "attributespecifier", "alignmentspecifier", "attributelist", 
  "attribute", "attributetoken", "attributescopedtoken", "attributenamespace", 
  "attributeargumentclause", "balancedtokenseq", "balancedtoken", "initdeclaratorlist", 
  "initdeclarator", "declarator", "ptrdeclarator", "noptrdeclarator", "parametersandqualifiers", 
  "trailingreturntype", "ptroperator", "cvqualifierseq", "cvqualifier", 
  "refqualifier", "declaratorid", "thetypeid", "abstractdeclarator", "ptrabstractdeclarator", 
  "noptrabstractdeclarator", "abstractpackdeclarator", "noptrabstractpackdeclarator", 
  "parameterdeclarationclause", "parameterdeclarationlist", "parameterdeclaration", 
  "functiondefinition", "functionbody", "initializer", "braceorequalinitializer", 
  "initializerclause", "initializerlist", "bracedinitlist", "classname", 
  "classspecifier", "classhead", "classheadname", "classvirtspecifier", 
  "classkey", "memberspecification", "memberdeclaration", "memberdeclaratorlist", 
  "memberdeclarator", "memberFunctionDeclaration", "virtspecifierseq", "virtspecifier", 
  "purespecifier", "baseclause", "basespecifierlist", "basespecifier", "classordecltype", 
  "basetypespecifier", "accessspecifier", "conversionfunctionid", "conversiontypeid", 
  "conversiondeclarator", "ctorinitializer", "meminitializerlist", "meminitializer", 
  "meminitializerid", "operatorfunctionid", "literaloperatorid", "templatedeclaration", 
  "templateparameterlist", "templateparameter", "typeparameter", "simpletemplateid", 
  "templateid", "templatename", "templateargumentlist", "templateargument", 
  "typenamespecifier", "explicitinstantiation", "explicitspecialization", 
  "tryblock", "functiontryblock", "handlerseq", "handler", "exceptiondeclaration", 
  "throwexpression", "exceptionspecification", "dynamicexceptionspecification", 
  "typeidlist", "noexceptspecification", "preprocessorDirective", "theoperator", 
  "literal", "booleanliteral", "pointerliteral", "userdefinedliteral"
};

std::vector<std::string> AergiaCpp14Parser::_literalNames = {
  "", "'$'", "'$$'", "'${'", "'$}'", "'anonymous'", "'$foreach('", "'in'", 
  "').'", "'!'", "'not'", "'&&'", "'and'", "'||'", "'or'", "'0'", "", "", 
  "'alignas'", "'alignof'", "'asm'", "'auto'", "'bool'", "'break'", "'case'", 
  "'catch'", "'char'", "'char16_t'", "'char32_t'", "'class'", "'const'", 
  "'constexpr'", "'const_cast'", "'continue'", "'decltype'", "'default'", 
  "'delete'", "'do'", "'double'", "'dynamic_cast'", "'else'", "'enum'", 
  "'explicit'", "'export'", "'extern'", "'false'", "'final'", "'float'", 
  "'for'", "'friend'", "'goto'", "'if'", "'inline'", "'int'", "'long'", 
  "'mutable'", "'namespace'", "'new'", "'noexcept'", "'nullptr'", "'operator'", 
  "'override'", "'private'", "'protected'", "'public'", "'register'", "'reinterpret_cast'", 
  "'return'", "'short'", "'signed'", "'sizeof'", "'static'", "'static_assert'", 
  "'static_cast'", "'struct'", "'switch'", "'template'", "'this'", "'thread_local'", 
  "'throw'", "'true'", "'try'", "'typedef'", "'typeid'", "'typename'", "'union'", 
  "'unsigned'", "'using'", "'virtual'", "'void'", "'volatile'", "'wchar_t'", 
  "'while'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "'^'", "'&'", "'|'", "'~'", "", "'='", "'<'", "'>'", "'+='", 
  "'-='", "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", "'<<'", "'>>'", 
  "'<<='", "'>>='", "'=='", "'!='", "'<='", "'>='", "", "", "'++'", "'--'", 
  "','", "'->*'", "'->'", "'?'", "':'", "'::'", "';'", "'.'", "'.*'", "'...'"
};

std::vector<std::string> AergiaCpp14Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "MultiLineMacro", 
  "Directive", "Alignas", "Alignof", "Asm", "Auto", "Bool", "Break", "Case", 
  "Catch", "Char", "Char16", "Char32", "Class", "Const", "Constexpr", "Const_cast", 
  "Continue", "Decltype", "Default", "Delete", "Do", "Double", "Dynamic_cast", 
  "Else", "Enum", "Explicit", "Export", "Extern", "False", "Final", "Float", 
  "For", "Friend", "Goto", "If", "Inline", "Int", "Long", "Mutable", "Namespace", 
  "New", "Noexcept", "Nullptr", "Operator", "Override", "Private", "Protected", 
  "Public", "Register", "Reinterpret_cast", "Return", "Short", "Signed", 
  "Sizeof", "Static", "Static_assert", "Static_cast", "Struct", "Switch", 
  "Template", "This", "Thread_local", "Throw", "True", "Try", "Typedef", 
  "Typeid_", "Typename_", "Union", "Unsigned", "Using", "Virtual", "Void", 
  "Volatile", "Wchar", "While", "LeftParen", "RightParen", "LeftBracket", 
  "RightBracket", "LeftBrace", "RightBrace", "Plus", "Minus", "Star", "Div", 
  "Mod", "Caret", "And", "Or", "Tilde", "Not", "Assign", "Less", "Greater", 
  "PlusAssign", "MinusAssign", "StarAssign", "DivAssign", "ModAssign", "XorAssign", 
  "AndAssign", "OrAssign", "LeftShift", "RightShift", "LeftShiftAssign", 
  "RightShiftAssign", "Equal", "NotEqual", "LessEqual", "GreaterEqual", 
  "AndAnd", "OrOr", "PlusPlus", "MinusMinus", "Comma", "ArrowStar", "Arrow", 
  "Question", "Colon", "Doublecolon", "Semi", "Dot", "DotStar", "Ellipsis", 
  "Identifier", "Integerliteral", "Decimalliteral", "Octalliteral", "Hexadecimalliteral", 
  "Binaryliteral", "Integersuffix", "Characterliteral", "Floatingliteral", 
  "Stringliteral", "Userdefinedintegerliteral", "Userdefinedfloatingliteral", 
  "Userdefinedstringliteral", "Userdefinedcharacterliteral", "Whitespace", 
  "Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary AergiaCpp14Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> AergiaCpp14Parser::_tokenNames;

AergiaCpp14Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0xa1, 0xa02, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 
       0x9, 0xad, 0x4, 0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 
       0x9, 0xb0, 0x4, 0xb1, 0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 
       0x9, 0xb3, 0x4, 0xb4, 0x9, 0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 
       0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 
       0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 0xbb, 0x9, 0xbb, 0x4, 0xbc, 
       0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 0x9, 0xbe, 0x4, 0xbf, 
       0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 0xc1, 0x4, 0xc2, 
       0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 0x4, 0xc5, 
       0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 0xc8, 
       0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x4, 0xca, 0x9, 0xca, 0x4, 0xcb, 
       0x9, 0xcb, 0x4, 0xcc, 0x9, 0xcc, 0x4, 0xcd, 0x9, 0xcd, 0x4, 0xce, 
       0x9, 0xce, 0x4, 0xcf, 0x9, 0xcf, 0x4, 0xd0, 0x9, 0xd0, 0x4, 0xd1, 
       0x9, 0xd1, 0x4, 0xd2, 0x9, 0xd2, 0x4, 0xd3, 0x9, 0xd3, 0x4, 0xd4, 
       0x9, 0xd4, 0x4, 0xd5, 0x9, 0xd5, 0x4, 0xd6, 0x9, 0xd6, 0x4, 0xd7, 
       0x9, 0xd7, 0x3, 0x2, 0x5, 0x2, 0x1b0, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x1c4, 0xa, 0x6, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
       0x1e0, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
       0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0xf, 0x5, 0xf, 0x1ef, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 
       0x10, 0x1f9, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x1fd, 0xa, 
       0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x208, 0xa, 0x12, 
       0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x20c, 0xa, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 
       0x14, 0x21b, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x5, 0x14, 0x222, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
       0x14, 0x7, 0x14, 0x227, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x22a, 0xb, 
       0x14, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x22e, 0xa, 0x15, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x234, 0xa, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x5, 0x17, 0x23e, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x245, 0xa, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x24b, 0xa, 0x19, 
       0x7, 0x19, 0x24d, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x250, 0xb, 0x19, 
       0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x254, 0xa, 0x1a, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x25a, 0xa, 0x1b, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x261, 0xa, 
       0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x267, 
       0xa, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x26a, 0xa, 0x1d, 0x3, 0x1d, 0x5, 
       0x1d, 0x26d, 0xa, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x270, 0xa, 0x1d, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x277, 
       0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x5, 0x1e, 0x27e, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x2b2, 
       0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x2c1, 0xa, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x2c7, 0xa, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x2cd, 0xa, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x2da, 
       0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x2dd, 0xb, 0x1e, 0x3, 0x1f, 0x3, 
       0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x5, 
       0x22, 0x2e6, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x2f5, 0xa, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x2fb, 0xa, 0x22, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x319, 0xa, 
       0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x5, 0x25, 0x31e, 0xa, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x322, 0xa, 0x25, 0x3, 0x25, 0x3, 
       0x25, 0x5, 0x25, 0x326, 0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x329, 0xa, 
       0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x32d, 0xa, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x333, 0xa, 0x25, 0x5, 
       0x25, 0x335, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x33d, 0xa, 0x27, 0x3, 0x28, 0x3, 
       0x28, 0x5, 0x28, 0x341, 0xa, 0x28, 0x3, 0x28, 0x5, 0x28, 0x344, 0xa, 
       0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 
       0x29, 0x34b, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x5, 0x29, 0x352, 0xa, 0x29, 0x7, 0x29, 0x354, 0xa, 0x29, 
       0xc, 0x29, 0xe, 0x29, 0x357, 0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x5, 
       0x2a, 0x35b, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x35f, 0xa, 
       0x2a, 0x3, 0x2b, 0x5, 0x2b, 0x362, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x5, 0x2b, 0x367, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x36d, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x37a, 0xa, 0x2d, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x385, 0xa, 0x2e, 0xc, 0x2e, 
       0xe, 0x2e, 0x388, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x396, 0xa, 0x2f, 0xc, 0x2f, 
       0xe, 0x2f, 0x399, 0xb, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
       0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 
       0x30, 0x3a4, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x3a7, 0xb, 0x30, 0x3, 
       0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
       0x31, 0x7, 0x31, 0x3b0, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x3b3, 0xb, 
       0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x7, 
       0x33, 0x3c6, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x3c9, 0xb, 0x33, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x7, 0x34, 0x3d4, 0xa, 0x34, 0xc, 0x34, 
       0xe, 0x34, 0x3d7, 0xb, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x3df, 0xa, 0x35, 0xc, 0x35, 
       0xe, 0x35, 0x3e2, 0xb, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x3ea, 0xa, 0x36, 0xc, 0x36, 
       0xe, 0x36, 0x3ed, 0xb, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x7, 0x37, 0x3f5, 0xa, 0x37, 0xc, 0x37, 
       0xe, 0x37, 0x3f8, 0xb, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
       0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 
       0x38, 0x403, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x406, 0xb, 0x38, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x7, 0x39, 0x411, 0xa, 0x39, 0xc, 0x39, 
       0xe, 0x39, 0x414, 0xb, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x41d, 0xa, 0x3a, 
       0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
       0x5, 0x3b, 0x425, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x42f, 
       0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 0x432, 0xb, 0x3d, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x438, 0xa, 0x3f, 0x3, 0x3f, 
       0x3, 0x3f, 0x5, 0x3f, 0x43c, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 
       0x3f, 0x440, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x444, 0xa, 
       0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x448, 0xa, 0x3f, 0x3, 0x3f, 
       0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x44f, 0xa, 
       0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x452, 0xa, 0x3f, 0x3, 0x40, 0x5, 0x40, 
       0x455, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 
       0x40, 0x45b, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
       0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x463, 0xa, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x5, 0x40, 0x468, 0xa, 0x40, 0x3, 0x41, 0x5, 0x41, 
       0x46b, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x5, 
       0x42, 0x471, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 
       0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x47a, 0xa, 0x43, 0xc, 
       0x43, 0xe, 0x43, 0x47d, 0xb, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
       0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
       0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
       0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 
       0x493, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x497, 0xa, 0x45, 
       0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
       0x5, 0x45, 0x49f, 0xa, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
       0x45, 0x5, 0x45, 0x4a5, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x4b9, 0xa, 0x46, 0x3, 
       0x46, 0x3, 0x46, 0x5, 0x46, 0x4bd, 0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x4ca, 0xa, 0x46, 0x3, 
       0x47, 0x3, 0x47, 0x5, 0x47, 0x4ce, 0xa, 0x47, 0x3, 0x48, 0x5, 0x48, 
       0x4d1, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 
       0x49, 0x5, 0x49, 0x4d8, 0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
       0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x4e0, 0xa, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x4ea, 0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 
       0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x7, 0x4c, 
       0x4f3, 0xa, 0x4c, 0xc, 0x4c, 0xe, 0x4c, 0x4f6, 0xb, 0x4c, 0x3, 0x4d, 
       0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
       0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x502, 0xa, 0x4d, 0x3, 
       0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
       0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x50c, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x4f, 0x5, 0x4f, 0x511, 0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
       0x4f, 0x3, 0x4f, 0x3, 0x50, 0x5, 0x50, 0x518, 0xa, 0x50, 0x3, 0x50, 
       0x5, 0x50, 0x51b, 0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 
       0x50, 0x520, 0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 
       0x525, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 
       0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 
       0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
       0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x53a, 0xa, 0x54, 0x3, 0x55, 
       0x3, 0x55, 0x5, 0x55, 0x53e, 0xa, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 
       0x55, 0x5, 0x55, 0x543, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 
       0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 
       0x3, 0x59, 0x5, 0x59, 0x54f, 0xa, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x555, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 
       0x5, 0x5b, 0x559, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 
       0x5b, 0x55e, 0xa, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x562, 0xa, 
       0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x567, 0xa, 0x5c, 
       0x3, 0x5d, 0x5, 0x5d, 0x56a, 0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
       0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
       0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
       0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 
       0x5d, 0x580, 0xa, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x5, 0x5e, 0x586, 0xa, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 
       0x5f, 0x591, 0xa, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x595, 0xa, 
       0x60, 0x3, 0x60, 0x5, 0x60, 0x598, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 
       0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 
       0x5, 0x60, 0x5a2, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 
       0x60, 0x5, 0x60, 0x5a8, 0xa, 0x60, 0x3, 0x60, 0x5, 0x60, 0x5ab, 0xa, 
       0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 
       0x62, 0x5b2, 0xa, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
       0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x5bc, 0xa, 
       0x62, 0x3, 0x63, 0x3, 0x63, 0x5, 0x63, 0x5c0, 0xa, 0x63, 0x3, 0x63, 
       0x5, 0x63, 0x5c3, 0xa, 0x63, 0x3, 0x63, 0x5, 0x63, 0x5c6, 0xa, 0x63, 
       0x3, 0x63, 0x3, 0x63, 0x5, 0x63, 0x5ca, 0xa, 0x63, 0x3, 0x63, 0x3, 
       0x63, 0x3, 0x63, 0x5, 0x63, 0x5cf, 0xa, 0x63, 0x5, 0x63, 0x5d1, 0xa, 
       0x63, 0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 0x5d5, 0xa, 0x64, 0x3, 0x64, 
       0x3, 0x64, 0x5, 0x64, 0x5d9, 0xa, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 
       0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x5e2, 
       0xa, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 
       0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x7, 0x67, 0x5ed, 0xa, 
       0x67, 0xc, 0x67, 0xe, 0x67, 0x5f0, 0xb, 0x67, 0x3, 0x68, 0x3, 0x68, 
       0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 0x5f7, 0xa, 0x68, 0x3, 
       0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x5fd, 0xa, 0x6a, 
       0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x603, 0xa, 
       0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x5, 0x6e, 0x608, 0xa, 0x6e, 
       0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
       0x3, 0x6f, 0x5, 0x6f, 0x611, 0xa, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
       0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 0x5, 0x70, 0x619, 0xa, 0x70, 
       0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 
       0x3, 0x72, 0x3, 0x72, 0x3, 0x73, 0x5, 0x73, 0x624, 0xa, 0x73, 0x3, 
       0x73, 0x3, 0x73, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x62a, 0xa, 0x74, 
       0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 
       0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x635, 0xa, 0x74, 0x3, 
       0x75, 0x5, 0x75, 0x638, 0xa, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 
       0x5, 0x75, 0x63d, 0xa, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 
       0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 
       0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x5, 0x77, 0x64c, 0xa, 0x77, 
       0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x5, 0x77, 0x652, 0xa, 
       0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x7, 
       0x78, 0x659, 0xa, 0x78, 0xc, 0x78, 0xe, 0x78, 0x65c, 0xb, 0x78, 0x3, 
       0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 
       0x79, 0x5, 0x79, 0x665, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 
       0x3, 0x7a, 0x5, 0x7a, 0x66b, 0xa, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 
       0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x673, 0xa, 0x7a, 
       0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x677, 0xa, 0x7a, 0x3, 0x7b, 0x3, 
       0x7b, 0x5, 0x7b, 0x67b, 0xa, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
       0x5, 0x7b, 0x680, 0xa, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x5, 
       0x7b, 0x685, 0xa, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
       0x3, 0x7b, 0x7, 0x7b, 0x68c, 0xa, 0x7b, 0xc, 0x7b, 0xe, 0x7b, 0x68f, 
       0xb, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x693, 0xa, 0x7c, 0x3, 
       0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x697, 0xa, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 
       0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x80, 0x3, 0x80, 
       0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 0x6a5, 0xa, 
       0x81, 0x3, 0x81, 0x3, 0x81, 0x7, 0x81, 0x6a9, 0xa, 0x81, 0xc, 0x81, 
       0xe, 0x81, 0x6ac, 0xb, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 
       0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 
       0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x6ba, 0xa, 0x82, 0x3, 0x83, 
       0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x7, 0x83, 
       0x6c2, 0xa, 0x83, 0xc, 0x83, 0xe, 0x83, 0x6c5, 0xb, 0x83, 0x3, 0x84, 
       0x3, 0x84, 0x5, 0x84, 0x6c9, 0xa, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 
       0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x6d0, 0xa, 0x85, 0x3, 0x86, 
       0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x6d6, 0xa, 0x86, 0x3, 
       0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x6db, 0xa, 0x87, 0x3, 0x87, 
       0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x6e1, 0xa, 0x87, 0x3, 
       0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x6e8, 
       0xa, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x6ec, 0xa, 0x87, 0x7, 
       0x87, 0x6ee, 0xa, 0x87, 0xc, 0x87, 0xe, 0x87, 0x6f1, 0xb, 0x87, 0x3, 
       0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x6f7, 0xa, 0x88, 
       0x3, 0x88, 0x5, 0x88, 0x6fa, 0xa, 0x88, 0x3, 0x88, 0x5, 0x88, 0x6fd, 
       0xa, 0x88, 0x3, 0x88, 0x5, 0x88, 0x700, 0xa, 0x88, 0x3, 0x89, 0x3, 
       0x89, 0x3, 0x89, 0x5, 0x89, 0x705, 0xa, 0x89, 0x3, 0x8a, 0x3, 0x8a, 
       0x5, 0x8a, 0x709, 0xa, 0x8a, 0x3, 0x8a, 0x5, 0x8a, 0x70c, 0xa, 0x8a, 
       0x3, 0x8a, 0x3, 0x8a, 0x5, 0x8a, 0x710, 0xa, 0x8a, 0x3, 0x8a, 0x3, 
       0x8a, 0x5, 0x8a, 0x714, 0xa, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 
       0x5, 0x8a, 0x719, 0xa, 0x8a, 0x3, 0x8a, 0x5, 0x8a, 0x71c, 0xa, 0x8a, 
       0x5, 0x8a, 0x71e, 0xa, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x722, 
       0xa, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 
       0x5, 0x8e, 0x729, 0xa, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x3, 
       0x8f, 0x5, 0x8f, 0x72f, 0xa, 0x8f, 0x3, 0x90, 0x3, 0x90, 0x5, 0x90, 
       0x733, 0xa, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x5, 
       0x90, 0x739, 0xa, 0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x5, 0x91, 
       0x73e, 0xa, 0x91, 0x5, 0x91, 0x740, 0xa, 0x91, 0x3, 0x92, 0x3, 0x92, 
       0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 0x746, 0xa, 0x92, 0x3, 0x92, 0x3, 
       0x92, 0x5, 0x92, 0x74a, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 
       0x3, 0x92, 0x5, 0x92, 0x750, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 
       0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 0x757, 0xa, 0x92, 0x3, 0x92, 
       0x3, 0x92, 0x5, 0x92, 0x75b, 0xa, 0x92, 0x7, 0x92, 0x75d, 0xa, 0x92, 
       0xc, 0x92, 0xe, 0x92, 0x760, 0xb, 0x92, 0x3, 0x93, 0x3, 0x93, 0x3, 
       0x93, 0x3, 0x93, 0x5, 0x93, 0x766, 0xa, 0x93, 0x3, 0x94, 0x3, 0x94, 
       0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 
       0x5, 0x94, 0x770, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x774, 
       0xa, 0x94, 0x7, 0x94, 0x776, 0xa, 0x94, 0xc, 0x94, 0xe, 0x94, 0x779, 
       0xb, 0x94, 0x3, 0x95, 0x5, 0x95, 0x77c, 0xa, 0x95, 0x3, 0x95, 0x5, 
       0x95, 0x77f, 0xa, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
       0x5, 0x95, 0x785, 0xa, 0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 
       0x96, 0x3, 0x96, 0x3, 0x96, 0x7, 0x96, 0x78d, 0xa, 0x96, 0xc, 0x96, 
       0xe, 0x96, 0x790, 0xb, 0x96, 0x3, 0x97, 0x5, 0x97, 0x793, 0xa, 0x97, 
       0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x5, 0x97, 0x799, 0xa, 
       0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 
       0x97, 0x5, 0x97, 0x7a1, 0xa, 0x97, 0x3, 0x97, 0x3, 0x97, 0x5, 0x97, 
       0x7a5, 0xa, 0x97, 0x3, 0x97, 0x5, 0x97, 0x7a8, 0xa, 0x97, 0x3, 0x97, 
       0x3, 0x97, 0x5, 0x97, 0x7ac, 0xa, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 
       0x97, 0x5, 0x97, 0x7b1, 0xa, 0x97, 0x3, 0x98, 0x5, 0x98, 0x7b4, 0xa, 
       0x98, 0x3, 0x98, 0x5, 0x98, 0x7b7, 0xa, 0x98, 0x3, 0x98, 0x3, 0x98, 
       0x5, 0x98, 0x7bb, 0xa, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x99, 0x5, 
       0x99, 0x7c0, 0xa, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 
       0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x7ca, 0xa, 
       0x99, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x5, 
       0x9a, 0x7d1, 0xa, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x5, 0x9b, 
       0x7d6, 0xa, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x7db, 
       0xa, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x7e0, 0xa, 
       0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x7e6, 
       0xa, 0x9d, 0x7, 0x9d, 0x7e8, 0xa, 0x9d, 0xc, 0x9d, 0xe, 0x9d, 0x7eb, 
       0xb, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x7f0, 0xa, 
       0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x7f6, 
       0xa, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x5, 0x9f, 0x7fa, 0xa, 0x9f, 0x3, 
       0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x5, 0xa0, 0x7ff, 0xa, 0xa0, 0x3, 0xa0, 
       0x3, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x805, 0xa, 0xa1, 0x3, 
       0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x809, 0xa, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 
       0x80c, 0xa, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x810, 0xa, 0xa1, 
       0x3, 0xa1, 0x5, 0xa1, 0x813, 0xa, 0xa1, 0x5, 0xa1, 0x815, 0xa, 0xa1, 
       0x3, 0xa2, 0x5, 0xa2, 0x818, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 
       0xa3, 0x3, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa5, 0x3, 0xa5, 0x5, 
       0xa5, 0x822, 0xa, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 
       0x827, 0xa, 0xa5, 0x5, 0xa5, 0x829, 0xa, 0xa5, 0x3, 0xa6, 0x3, 0xa6, 
       0x3, 0xa6, 0x5, 0xa6, 0x82e, 0xa, 0xa6, 0x3, 0xa6, 0x5, 0xa6, 0x831, 
       0xa, 0xa6, 0x3, 0xa6, 0x5, 0xa6, 0x834, 0xa, 0xa6, 0x3, 0xa6, 0x3, 
       0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x5, 0xa6, 0x83c, 
       0xa, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 
       0x3, 0xa7, 0x7, 0xa7, 0x844, 0xa, 0xa7, 0xc, 0xa7, 0xe, 0xa7, 0x847, 
       0xb, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x84b, 0xa, 0xa8, 0x3, 
       0xa8, 0x5, 0xa8, 0x84e, 0xa, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 
       0x852, 0xa, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x855, 0xa, 0xa8, 0x3, 0xa8, 
       0x5, 0xa8, 0x858, 0xa, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x85c, 
       0xa, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 
       0x862, 0xa, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x865, 0xa, 0xa9, 0x3, 0xa9, 
       0x3, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 
       0x7, 0xaa, 0x86e, 0xa, 0xaa, 0xc, 0xaa, 0xe, 0xaa, 0x871, 0xb, 0xaa, 
       0x3, 0xab, 0x3, 0xab, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xad, 
       0x3, 0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 
       0x87e, 0xa, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 
       0xae, 0x884, 0xa, 0xae, 0x7, 0xae, 0x886, 0xa, 0xae, 0xc, 0xae, 0xe, 
       0xae, 0x889, 0xb, 0xae, 0x3, 0xaf, 0x5, 0xaf, 0x88c, 0xa, 0xaf, 0x3, 
       0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x890, 0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 
       0x5, 0xaf, 0x894, 0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x898, 
       0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x89c, 0xa, 0xaf, 0x3, 
       0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x8a0, 0xa, 0xaf, 0x3, 0xb0, 0x5, 0xb0, 
       0x8a3, 0xa, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x8a7, 0xa, 0xb0, 
       0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 
       0x3, 0xb3, 0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x8b2, 0xa, 0xb4, 0x3, 
       0xb5, 0x3, 0xb5, 0x5, 0xb5, 0x8b6, 0xa, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 
       0x3, 0xb6, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x8bd, 0xa, 0xb7, 0x3, 
       0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x8c1, 0xa, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 
       0x3, 0xb7, 0x5, 0xb7, 0x8c6, 0xa, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 
       0xb8, 0x5, 0xb8, 0x8cb, 0xa, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 
       0x3, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 0x8d2, 0xa, 0xb8, 0x3, 0xb9, 0x3, 
       0xb9, 0x5, 0xb9, 0x8d6, 0xa, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 
       0x8e0, 0xa, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 
       0xbc, 0x3, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 
       0xbd, 0x3, 0xbd, 0x7, 0xbd, 0x8ee, 0xa, 0xbd, 0xc, 0xbd, 0xe, 0xbd, 
       0x8f1, 0xb, 0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x8f5, 0xa, 0xbe, 
       0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x8f9, 0xa, 0xbf, 0x3, 0xbf, 0x5, 
       0xbf, 0x8fc, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x900, 0xa, 
       0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x906, 
       0xa, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x909, 0xa, 0xbf, 0x3, 0xbf, 0x3, 
       0xbf, 0x5, 0xbf, 0x90d, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
       0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 
       0x917, 0xa, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x91a, 0xa, 0xbf, 0x3, 0xbf, 
       0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 
       0x922, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x927, 
       0xa, 0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x92c, 0xa, 
       0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 
       0xc1, 0x5, 0xc1, 0x934, 0xa, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 
       0x3, 0xc1, 0x3, 0xc1, 0x5, 0xc1, 0x93b, 0xa, 0xc1, 0x3, 0xc1, 0x3, 
       0xc1, 0x5, 0xc1, 0x93f, 0xa, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc3, 
       0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x946, 0xa, 0xc3, 0x3, 0xc3, 0x3, 
       0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x94c, 0xa, 0xc3, 0x7, 0xc3, 
       0x94e, 0xa, 0xc3, 0xc, 0xc3, 0xe, 0xc3, 0x951, 0xb, 0xc3, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 0x956, 0xa, 0xc4, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 
       0xc5, 0x95f, 0xa, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x963, 0xa, 
       0xc5, 0x3, 0xc6, 0x5, 0xc6, 0x966, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 
       0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc9, 0x3, 0xc9, 
       0x5, 0xc9, 0x976, 0xa, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 
       0xca, 0x3, 0xca, 0x5, 0xca, 0x97d, 0xa, 0xca, 0x3, 0xcb, 0x3, 0xcb, 
       0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcc, 0x5, 0xcc, 
       0x986, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 
       0xcc, 0x98c, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x990, 0xa, 
       0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x993, 0xa, 0xcc, 0x3, 0xcd, 0x3, 0xcd, 
       0x5, 0xcd, 0x997, 0xa, 0xcd, 0x3, 0xce, 0x3, 0xce, 0x5, 0xce, 0x99b, 
       0xa, 0xce, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x5, 0xcf, 0x9a0, 0xa, 
       0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x5, 
       0xd0, 0x9a7, 0xa, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 
       0x5, 0xd0, 0x9ad, 0xa, 0xd0, 0x7, 0xd0, 0x9af, 0xa, 0xd0, 0xc, 0xd0, 
       0xe, 0xd0, 0x9b2, 0xb, 0xd0, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 
       0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x5, 0xd1, 0x9ba, 0xa, 0xd1, 0x3, 0xd2, 
       0x3, 0xd2, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 
       0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 
       0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 
       0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 
       0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 
       0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 
       0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 
       0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 
       0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x5, 0xd3, 0x9f1, 0xa, 
       0xd3, 0x3, 0xd4, 0x3, 0xd4, 0x3, 0xd4, 0x3, 0xd4, 0x3, 0xd4, 0x3, 
       0xd4, 0x3, 0xd4, 0x5, 0xd4, 0x9fa, 0xa, 0xd4, 0x3, 0xd5, 0x3, 0xd5, 
       0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd7, 0x3, 0xd7, 0x3, 0xd7, 0x2, 0x24, 
       0x26, 0x30, 0x3a, 0x50, 0x5a, 0x5c, 0x5e, 0x60, 0x64, 0x66, 0x68, 
       0x6a, 0x6c, 0x6e, 0x70, 0x78, 0x84, 0x96, 0xcc, 0xee, 0xf4, 0x100, 
       0x104, 0x10c, 0x122, 0x126, 0x12a, 0x138, 0x14c, 0x152, 0x15a, 0x178, 
       0x184, 0x19e, 0xd8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
       0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
       0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
       0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
       0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 
       0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 
       0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 
       0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 
       0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 
       0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 
       0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 
       0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 
       0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 
       0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 
       0x12e, 0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 
       0x142, 0x144, 0x146, 0x148, 0x14a, 0x14c, 0x14e, 0x150, 0x152, 0x154, 
       0x156, 0x158, 0x15a, 0x15c, 0x15e, 0x160, 0x162, 0x164, 0x166, 0x168, 
       0x16a, 0x16c, 0x16e, 0x170, 0x172, 0x174, 0x176, 0x178, 0x17a, 0x17c, 
       0x17e, 0x180, 0x182, 0x184, 0x186, 0x188, 0x18a, 0x18c, 0x18e, 0x190, 
       0x192, 0x194, 0x196, 0x198, 0x19a, 0x19c, 0x19e, 0x1a0, 0x1a2, 0x1a4, 
       0x1a6, 0x1a8, 0x1aa, 0x1ac, 0x2, 0x10, 0x4, 0x2, 0x6b, 0x6b, 0x6f, 
       0x6f, 0x5, 0x2, 0xb, 0xc, 0x65, 0x67, 0x6b, 0x6d, 0x3, 0x2, 0x7a, 
       0x7b, 0x5, 0x2, 0x6f, 0x6f, 0x72, 0x79, 0x7c, 0x7d, 0x7, 0x2, 0x2e, 
       0x2e, 0x39, 0x39, 0x43, 0x43, 0x49, 0x49, 0x50, 0x50, 0x5, 0x2, 0x2c, 
       0x2c, 0x36, 0x36, 0x5a, 0x5a, 0x4, 0x2, 0x20, 0x20, 0x5c, 0x5c, 0x4, 
       0x2, 0xd, 0xd, 0x6b, 0x6b, 0x5, 0x2, 0x1f, 0x1f, 0x4c, 0x4c, 0x57, 
       0x57, 0x4, 0x2, 0x30, 0x30, 0x3f, 0x3f, 0x3, 0x2, 0x40, 0x42, 0x3, 
       0x2, 0x12, 0x13, 0x4, 0x2, 0x2f, 0x2f, 0x52, 0x52, 0x3, 0x2, 0x9a, 
       0x9d, 0x2, 0xb19, 0x2, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1b3, 0x3, 
       0x2, 0x2, 0x2, 0x6, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1b7, 0x3, 0x2, 
       0x2, 0x2, 0xa, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0xc, 0x1c5, 0x3, 0x2, 0x2, 
       0x2, 0xe, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x10, 0x1c9, 0x3, 0x2, 0x2, 
       0x2, 0x12, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x14, 0x1d0, 0x3, 0x2, 0x2, 
       0x2, 0x16, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1d7, 0x3, 0x2, 0x2, 
       0x2, 0x1a, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1ee, 0x3, 0x2, 0x2, 
       0x2, 0x1e, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1fc, 0x3, 0x2, 0x2, 
       0x2, 0x22, 0x207, 0x3, 0x2, 0x2, 0x2, 0x24, 0x209, 0x3, 0x2, 0x2, 
       0x2, 0x26, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x28, 0x22b, 0x3, 0x2, 0x2, 
       0x2, 0x2a, 0x231, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x23d, 0x3, 0x2, 0x2, 
       0x2, 0x2e, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x30, 0x241, 0x3, 0x2, 0x2, 
       0x2, 0x32, 0x253, 0x3, 0x2, 0x2, 0x2, 0x34, 0x259, 0x3, 0x2, 0x2, 
       0x2, 0x36, 0x260, 0x3, 0x2, 0x2, 0x2, 0x38, 0x262, 0x3, 0x2, 0x2, 
       0x2, 0x3a, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x2de, 0x3, 0x2, 0x2, 
       0x2, 0x3e, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x40, 0x2e2, 0x3, 0x2, 0x2, 
       0x2, 0x42, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x44, 0x318, 0x3, 0x2, 0x2, 
       0x2, 0x46, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x334, 0x3, 0x2, 0x2, 
       0x2, 0x4a, 0x336, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x33a, 0x3, 0x2, 0x2, 
       0x2, 0x4e, 0x343, 0x3, 0x2, 0x2, 0x2, 0x50, 0x345, 0x3, 0x2, 0x2, 
       0x2, 0x52, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x54, 0x36c, 0x3, 0x2, 0x2, 
       0x2, 0x56, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x58, 0x379, 0x3, 0x2, 0x2, 
       0x2, 0x5a, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x389, 0x3, 0x2, 0x2, 
       0x2, 0x5e, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x60, 0x3a8, 0x3, 0x2, 0x2, 
       0x2, 0x62, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x64, 0x3b6, 0x3, 0x2, 0x2, 
       0x2, 0x66, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x68, 0x3d8, 0x3, 0x2, 0x2, 
       0x2, 0x6a, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x3ee, 0x3, 0x2, 0x2, 
       0x2, 0x6e, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x70, 0x407, 0x3, 0x2, 0x2, 
       0x2, 0x72, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x74, 0x424, 0x3, 0x2, 0x2, 
       0x2, 0x76, 0x426, 0x3, 0x2, 0x2, 0x2, 0x78, 0x428, 0x3, 0x2, 0x2, 
       0x2, 0x7a, 0x433, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x451, 0x3, 0x2, 0x2, 
       0x2, 0x7e, 0x467, 0x3, 0x2, 0x2, 0x2, 0x80, 0x46a, 0x3, 0x2, 0x2, 
       0x2, 0x82, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x84, 0x474, 0x3, 0x2, 0x2, 
       0x2, 0x86, 0x492, 0x3, 0x2, 0x2, 0x2, 0x88, 0x4a4, 0x3, 0x2, 0x2, 
       0x2, 0x8a, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x4cd, 0x3, 0x2, 0x2, 
       0x2, 0x8e, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x90, 0x4d7, 0x3, 0x2, 0x2, 
       0x2, 0x92, 0x4e9, 0x3, 0x2, 0x2, 0x2, 0x94, 0x4eb, 0x3, 0x2, 0x2, 
       0x2, 0x96, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x98, 0x501, 0x3, 0x2, 0x2, 
       0x2, 0x9a, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x50d, 0x3, 0x2, 0x2, 
       0x2, 0x9e, 0x524, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x526, 0x3, 0x2, 0x2, 
       0x2, 0xa2, 0x52e, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x530, 0x3, 0x2, 0x2, 
       0x2, 0xa6, 0x539, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x542, 0x3, 0x2, 0x2, 
       0x2, 0xaa, 0x544, 0x3, 0x2, 0x2, 0x2, 0xac, 0x546, 0x3, 0x2, 0x2, 
       0x2, 0xae, 0x548, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x54e, 0x3, 0x2, 0x2, 
       0x2, 0xb2, 0x554, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x55d, 0x3, 0x2, 0x2, 
       0x2, 0xb6, 0x566, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x57f, 0x3, 0x2, 0x2, 
       0x2, 0xba, 0x585, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x590, 0x3, 0x2, 0x2, 
       0x2, 0xbe, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x5ac, 0x3, 0x2, 0x2, 
       0x2, 0xc2, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x5d0, 0x3, 0x2, 0x2, 
       0x2, 0xc6, 0x5d2, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x5e1, 0x3, 0x2, 0x2, 
       0x2, 0xca, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x5e6, 0x3, 0x2, 0x2, 
       0x2, 0xce, 0x5f6, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x5f8, 0x3, 0x2, 0x2, 
       0x2, 0xd2, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x5fe, 0x3, 0x2, 0x2, 
       0x2, 0xd6, 0x602, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x604, 0x3, 0x2, 0x2, 
       0x2, 0xda, 0x607, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x610, 0x3, 0x2, 0x2, 
       0x2, 0xde, 0x618, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x61a, 0x3, 0x2, 0x2, 
       0x2, 0xe2, 0x61c, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x623, 0x3, 0x2, 0x2, 
       0x2, 0xe6, 0x634, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x637, 0x3, 0x2, 0x2, 
       0x2, 0xea, 0x641, 0x3, 0x2, 0x2, 0x2, 0xec, 0x651, 0x3, 0x2, 0x2, 
       0x2, 0xee, 0x653, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x664, 0x3, 0x2, 0x2, 
       0x2, 0xf2, 0x676, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x67f, 0x3, 0x2, 0x2, 
       0x2, 0xf6, 0x690, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x696, 0x3, 0x2, 0x2, 
       0x2, 0xfa, 0x698, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x69c, 0x3, 0x2, 0x2, 
       0x2, 0xfe, 0x69e, 0x3, 0x2, 0x2, 0x2, 0x100, 0x6a2, 0x3, 0x2, 0x2, 
       0x2, 0x102, 0x6b9, 0x3, 0x2, 0x2, 0x2, 0x104, 0x6bb, 0x3, 0x2, 0x2, 
       0x2, 0x106, 0x6c6, 0x3, 0x2, 0x2, 0x2, 0x108, 0x6cf, 0x3, 0x2, 0x2, 
       0x2, 0x10a, 0x6d5, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x6e0, 0x3, 0x2, 0x2, 
       0x2, 0x10e, 0x6f2, 0x3, 0x2, 0x2, 0x2, 0x110, 0x701, 0x3, 0x2, 0x2, 
       0x2, 0x112, 0x71d, 0x3, 0x2, 0x2, 0x2, 0x114, 0x71f, 0x3, 0x2, 0x2, 
       0x2, 0x116, 0x723, 0x3, 0x2, 0x2, 0x2, 0x118, 0x725, 0x3, 0x2, 0x2, 
       0x2, 0x11a, 0x728, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x72c, 0x3, 0x2, 0x2, 
       0x2, 0x11e, 0x738, 0x3, 0x2, 0x2, 0x2, 0x120, 0x73f, 0x3, 0x2, 0x2, 
       0x2, 0x122, 0x74f, 0x3, 0x2, 0x2, 0x2, 0x124, 0x765, 0x3, 0x2, 0x2, 
       0x2, 0x126, 0x767, 0x3, 0x2, 0x2, 0x2, 0x128, 0x784, 0x3, 0x2, 0x2, 
       0x2, 0x12a, 0x786, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x7b0, 0x3, 0x2, 0x2, 
       0x2, 0x12e, 0x7b3, 0x3, 0x2, 0x2, 0x2, 0x130, 0x7c9, 0x3, 0x2, 0x2, 
       0x2, 0x132, 0x7d0, 0x3, 0x2, 0x2, 0x2, 0x134, 0x7d5, 0x3, 0x2, 0x2, 
       0x2, 0x136, 0x7da, 0x3, 0x2, 0x2, 0x2, 0x138, 0x7dc, 0x3, 0x2, 0x2, 
       0x2, 0x13a, 0x7f5, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x7f9, 0x3, 0x2, 0x2, 
       0x2, 0x13e, 0x7fb, 0x3, 0x2, 0x2, 0x2, 0x140, 0x814, 0x3, 0x2, 0x2, 
       0x2, 0x142, 0x817, 0x3, 0x2, 0x2, 0x2, 0x144, 0x81b, 0x3, 0x2, 0x2, 
       0x2, 0x146, 0x81d, 0x3, 0x2, 0x2, 0x2, 0x148, 0x828, 0x3, 0x2, 0x2, 
       0x2, 0x14a, 0x83b, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x83d, 0x3, 0x2, 0x2, 
       0x2, 0x14e, 0x85b, 0x3, 0x2, 0x2, 0x2, 0x150, 0x85d, 0x3, 0x2, 0x2, 
       0x2, 0x152, 0x868, 0x3, 0x2, 0x2, 0x2, 0x154, 0x872, 0x3, 0x2, 0x2, 
       0x2, 0x156, 0x874, 0x3, 0x2, 0x2, 0x2, 0x158, 0x877, 0x3, 0x2, 0x2, 
       0x2, 0x15a, 0x87a, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x89f, 0x3, 0x2, 0x2, 
       0x2, 0x15e, 0x8a6, 0x3, 0x2, 0x2, 0x2, 0x160, 0x8a8, 0x3, 0x2, 0x2, 
       0x2, 0x162, 0x8aa, 0x3, 0x2, 0x2, 0x2, 0x164, 0x8ac, 0x3, 0x2, 0x2, 
       0x2, 0x166, 0x8af, 0x3, 0x2, 0x2, 0x2, 0x168, 0x8b3, 0x3, 0x2, 0x2, 
       0x2, 0x16a, 0x8b7, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x8c5, 0x3, 0x2, 0x2, 
       0x2, 0x16e, 0x8d1, 0x3, 0x2, 0x2, 0x2, 0x170, 0x8d5, 0x3, 0x2, 0x2, 
       0x2, 0x172, 0x8d7, 0x3, 0x2, 0x2, 0x2, 0x174, 0x8df, 0x3, 0x2, 0x2, 
       0x2, 0x176, 0x8e1, 0x3, 0x2, 0x2, 0x2, 0x178, 0x8e7, 0x3, 0x2, 0x2, 
       0x2, 0x17a, 0x8f4, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x926, 0x3, 0x2, 0x2, 
       0x2, 0x17e, 0x928, 0x3, 0x2, 0x2, 0x2, 0x180, 0x93e, 0x3, 0x2, 0x2, 
       0x2, 0x182, 0x940, 0x3, 0x2, 0x2, 0x2, 0x184, 0x942, 0x3, 0x2, 0x2, 
       0x2, 0x186, 0x955, 0x3, 0x2, 0x2, 0x2, 0x188, 0x962, 0x3, 0x2, 0x2, 
       0x2, 0x18a, 0x965, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x96a, 0x3, 0x2, 0x2, 
       0x2, 0x18e, 0x96f, 0x3, 0x2, 0x2, 0x2, 0x190, 0x973, 0x3, 0x2, 0x2, 
       0x2, 0x192, 0x97a, 0x3, 0x2, 0x2, 0x2, 0x194, 0x97e, 0x3, 0x2, 0x2, 
       0x2, 0x196, 0x992, 0x3, 0x2, 0x2, 0x2, 0x198, 0x994, 0x3, 0x2, 0x2, 
       0x2, 0x19a, 0x99a, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x99c, 0x3, 0x2, 0x2, 
       0x2, 0x19e, 0x9a3, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x9b9, 0x3, 0x2, 0x2, 
       0x2, 0x1a2, 0x9bb, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x9f0, 0x3, 0x2, 0x2, 
       0x2, 0x1a6, 0x9f9, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x9fb, 0x3, 0x2, 0x2, 
       0x2, 0x1aa, 0x9fd, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x9ff, 0x3, 0x2, 0x2, 
       0x2, 0x1ae, 0x1b0, 0x5, 0x96, 0x4c, 0x2, 0x1af, 0x1ae, 0x3, 0x2, 
       0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 
       0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x2, 0x2, 0x3, 0x1b2, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0x3, 0x2, 0x2, 0x1b4, 0x5, 0x3, 0x2, 
       0x2, 0x2, 0x1b5, 0x1b6, 0x7, 0x4, 0x2, 0x2, 0x1b6, 0x7, 0x3, 0x2, 
       0x2, 0x2, 0x1b7, 0x1b8, 0x7, 0x5, 0x2, 0x2, 0x1b8, 0x1b9, 0x5, 0x84, 
       0x43, 0x2, 0x1b9, 0x1ba, 0x7, 0x6, 0x2, 0x2, 0x1ba, 0x9, 0x3, 0x2, 
       0x2, 0x2, 0x1bb, 0x1bc, 0x5, 0x4, 0x3, 0x2, 0x1bc, 0x1bd, 0x5, 0x1c, 
       0xf, 0x2, 0x1bd, 0x1be, 0x5, 0x6, 0x4, 0x2, 0x1be, 0x1c4, 0x3, 0x2, 
       0x2, 0x2, 0x1bf, 0x1c0, 0x5, 0x4, 0x3, 0x2, 0x1c0, 0x1c1, 0x5, 0x12, 
       0xa, 0x2, 0x1c1, 0x1c2, 0x5, 0x6, 0x4, 0x2, 0x1c2, 0x1c4, 0x3, 0x2, 
       0x2, 0x2, 0x1c3, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1bf, 0x3, 0x2, 
       0x2, 0x2, 0x1c4, 0xb, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x5, 0xa, 
       0x6, 0x2, 0x1c6, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x5, 0xa, 
       0x6, 0x2, 0x1c8, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x5, 0xa, 
       0x6, 0x2, 0x1ca, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x7, 0x7, 
       0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x5f, 0x2, 0x2, 0x1cd, 0x1ce, 0x5, 0x14, 
       0xb, 0x2, 0x1ce, 0x1cf, 0x7, 0x60, 0x2, 0x2, 0x1cf, 0x13, 0x3, 0x2, 
       0x2, 0x2, 0x1d0, 0x1d1, 0x5, 0x136, 0x9c, 0x2, 0x1d1, 0x15, 0x3, 
       0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x7, 0x8, 0x2, 0x2, 0x1d3, 0x1d4, 0x5, 
       0x18, 0xd, 0x2, 0x1d4, 0x1d5, 0x7, 0x60, 0x2, 0x2, 0x1d5, 0x1d6, 
       0x5, 0x1a, 0xe, 0x2, 0x1d6, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 
       0x5, 0x4, 0x3, 0x2, 0x1d8, 0x1d9, 0x7, 0x90, 0x2, 0x2, 0x1d9, 0x1da, 
       0x7, 0x9, 0x2, 0x2, 0x1da, 0x1db, 0x5, 0x4, 0x3, 0x2, 0x1db, 0x1dc, 
       0x5, 0x1c, 0xf, 0x2, 0x1dc, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1e0, 
       0x5, 0x7c, 0x3f, 0x2, 0x1de, 0x1e0, 0x5, 0x8, 0x5, 0x2, 0x1df, 0x1dd, 
       0x3, 0x2, 0x2, 0x2, 0x1df, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x90, 0x2, 0x2, 0x1e2, 0x1e3, 
       0x7, 0x8d, 0x2, 0x2, 0x1e3, 0x1ef, 0x5, 0x1c, 0xf, 0x2, 0x1e4, 0x1e5, 
       0x7, 0x90, 0x2, 0x2, 0x1e5, 0x1e6, 0x7, 0x5f, 0x2, 0x2, 0x1e6, 0x1e7, 
       0x7, 0x90, 0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0xa, 0x2, 0x2, 0x1e8, 0x1ef, 
       0x5, 0x1c, 0xf, 0x2, 0x1e9, 0x1ea, 0x7, 0x90, 0x2, 0x2, 0x1ea, 0x1eb, 
       0x7, 0x5f, 0x2, 0x2, 0x1eb, 0x1ec, 0x7, 0x90, 0x2, 0x2, 0x1ec, 0x1ef, 
       0x7, 0x60, 0x2, 0x2, 0x1ed, 0x1ef, 0x7, 0x90, 0x2, 0x2, 0x1ee, 0x1e1, 
       0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1e9, 
       0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f9, 0x5, 0x1a6, 0xd4, 0x2, 0x1f1, 0x1f9, 
       0x7, 0x4f, 0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0x5f, 0x2, 0x2, 0x1f3, 0x1f4, 
       0x5, 0x78, 0x3d, 0x2, 0x1f4, 0x1f5, 0x7, 0x60, 0x2, 0x2, 0x1f5, 0x1f9, 
       0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f9, 0x5, 0x20, 0x11, 0x2, 0x1f7, 0x1f9, 
       0x5, 0x28, 0x15, 0x2, 0x1f8, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f1, 
       0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f6, 
       0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fd, 0x5, 0x22, 0x12, 0x2, 0x1fb, 0x1fd, 
       0x5, 0x24, 0x13, 0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fb, 
       0x3, 0x2, 0x2, 0x2, 0x1fd, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x208, 
       0x7, 0x90, 0x2, 0x2, 0x1ff, 0x208, 0x5, 0x172, 0xba, 0x2, 0x200, 
       0x208, 0x5, 0x164, 0xb3, 0x2, 0x201, 0x208, 0x5, 0x174, 0xbb, 0x2, 
       0x202, 0x203, 0x7, 0x6d, 0x2, 0x2, 0x203, 0x208, 0x5, 0x13c, 0x9f, 
       0x2, 0x204, 0x205, 0x7, 0x6d, 0x2, 0x2, 0x205, 0x208, 0x5, 0xbc, 
       0x5f, 0x2, 0x206, 0x208, 0x5, 0x180, 0xc1, 0x2, 0x207, 0x1fe, 0x3, 
       0x2, 0x2, 0x2, 0x207, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x207, 0x200, 0x3, 
       0x2, 0x2, 0x2, 0x207, 0x201, 0x3, 0x2, 0x2, 0x2, 0x207, 0x202, 0x3, 
       0x2, 0x2, 0x2, 0x207, 0x204, 0x3, 0x2, 0x2, 0x2, 0x207, 0x206, 0x3, 
       0x2, 0x2, 0x2, 0x208, 0x23, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20b, 0x5, 
       0x26, 0x14, 0x2, 0x20a, 0x20c, 0x7, 0x4e, 0x2, 0x2, 0x20b, 0x20a, 
       0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 
       0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x5, 0x22, 0x12, 0x2, 0x20e, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x8, 0x14, 0x1, 0x2, 0x210, 0x21b, 
       0x7, 0x8b, 0x2, 0x2, 0x211, 0x212, 0x5, 0xba, 0x5e, 0x2, 0x212, 0x213, 
       0x7, 0x8b, 0x2, 0x2, 0x213, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 
       0x5, 0xd2, 0x6a, 0x2, 0x215, 0x216, 0x7, 0x8b, 0x2, 0x2, 0x216, 0x21b, 
       0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x5, 0xbc, 0x5f, 0x2, 0x218, 0x219, 
       0x7, 0x8b, 0x2, 0x2, 0x219, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x20f, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x211, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x214, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x217, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x228, 
       0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0xc, 0x4, 0x2, 0x2, 0x21d, 0x21e, 
       0x7, 0x90, 0x2, 0x2, 0x21e, 0x227, 0x7, 0x8b, 0x2, 0x2, 0x21f, 0x221, 
       0xc, 0x3, 0x2, 0x2, 0x220, 0x222, 0x7, 0x4e, 0x2, 0x2, 0x221, 0x220, 
       0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 
       0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x5, 0x17e, 0xc0, 0x2, 0x224, 0x225, 
       0x7, 0x8b, 0x2, 0x2, 0x225, 0x227, 0x3, 0x2, 0x2, 0x2, 0x226, 0x21c, 
       0x3, 0x2, 0x2, 0x2, 0x226, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x227, 0x22a, 
       0x3, 0x2, 0x2, 0x2, 0x228, 0x226, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x27, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x228, 
       0x3, 0x2, 0x2, 0x2, 0x22b, 0x22d, 0x5, 0x2a, 0x16, 0x2, 0x22c, 0x22e, 
       0x5, 0x38, 0x1d, 0x2, 0x22d, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 
       0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 
       0x5, 0x82, 0x42, 0x2, 0x230, 0x29, 0x3, 0x2, 0x2, 0x2, 0x231, 0x233, 
       0x7, 0x61, 0x2, 0x2, 0x232, 0x234, 0x5, 0x2c, 0x17, 0x2, 0x233, 0x232, 
       0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 
       0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x7, 0x62, 0x2, 0x2, 0x236, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x237, 0x23e, 0x5, 0x2e, 0x18, 0x2, 0x238, 0x23e, 
       0x5, 0x30, 0x19, 0x2, 0x239, 0x23a, 0x5, 0x2e, 0x18, 0x2, 0x23a, 
       0x23b, 0x7, 0x86, 0x2, 0x2, 0x23b, 0x23c, 0x5, 0x30, 0x19, 0x2, 0x23c, 
       0x23e, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x237, 0x3, 0x2, 0x2, 0x2, 0x23d, 
       0x238, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23e, 
       0x2d, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x240, 0x9, 0x2, 0x2, 0x2, 0x240, 
       0x2f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x8, 0x19, 0x1, 0x2, 0x242, 
       0x244, 0x5, 0x32, 0x1a, 0x2, 0x243, 0x245, 0x7, 0x8f, 0x2, 0x2, 0x244, 
       0x243, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x3, 0x2, 0x2, 0x2, 0x245, 
       0x24e, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0xc, 0x3, 0x2, 0x2, 0x247, 
       0x248, 0x7, 0x86, 0x2, 0x2, 0x248, 0x24a, 0x5, 0x32, 0x1a, 0x2, 0x249, 
       0x24b, 0x7, 0x8f, 0x2, 0x2, 0x24a, 0x249, 0x3, 0x2, 0x2, 0x2, 0x24a, 
       0x24b, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24c, 
       0x246, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x250, 0x3, 0x2, 0x2, 0x2, 0x24e, 
       0x24c, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x24f, 
       0x31, 0x3, 0x2, 0x2, 0x2, 0x250, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x251, 
       0x254, 0x5, 0x34, 0x1b, 0x2, 0x252, 0x254, 0x5, 0x36, 0x1c, 0x2, 
       0x253, 0x251, 0x3, 0x2, 0x2, 0x2, 0x253, 0x252, 0x3, 0x2, 0x2, 0x2, 
       0x254, 0x33, 0x3, 0x2, 0x2, 0x2, 0x255, 0x25a, 0x7, 0x90, 0x2, 0x2, 
       0x256, 0x257, 0x7, 0x6b, 0x2, 0x2, 0x257, 0x25a, 0x7, 0x90, 0x2, 
       0x2, 0x258, 0x25a, 0x7, 0x4f, 0x2, 0x2, 0x259, 0x255, 0x3, 0x2, 0x2, 
       0x2, 0x259, 0x256, 0x3, 0x2, 0x2, 0x2, 0x259, 0x258, 0x3, 0x2, 0x2, 
       0x2, 0x25a, 0x35, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x7, 0x90, 0x2, 
       0x2, 0x25c, 0x261, 0x5, 0x132, 0x9a, 0x2, 0x25d, 0x25e, 0x7, 0x6b, 
       0x2, 0x2, 0x25e, 0x25f, 0x7, 0x90, 0x2, 0x2, 0x25f, 0x261, 0x5, 0x132, 
       0x9a, 0x2, 0x260, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x260, 0x25d, 0x3, 0x2, 
       0x2, 0x2, 0x261, 0x37, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x7, 0x5f, 
       0x2, 0x2, 0x263, 0x264, 0x5, 0x128, 0x95, 0x2, 0x264, 0x266, 0x7, 
       0x60, 0x2, 0x2, 0x265, 0x267, 0x7, 0x39, 0x2, 0x2, 0x266, 0x265, 
       0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x3, 0x2, 0x2, 0x2, 0x267, 0x269, 
       0x3, 0x2, 0x2, 0x2, 0x268, 0x26a, 0x5, 0x19a, 0xce, 0x2, 0x269, 0x268, 
       0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x26c, 
       0x3, 0x2, 0x2, 0x2, 0x26b, 0x26d, 0x5, 0xee, 0x78, 0x2, 0x26c, 0x26b, 
       0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26f, 
       0x3, 0x2, 0x2, 0x2, 0x26e, 0x270, 0x5, 0x110, 0x89, 0x2, 0x26f, 0x26e, 
       0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x3, 0x2, 0x2, 0x2, 0x270, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x8, 0x1e, 0x1, 0x2, 0x272, 0x2b2, 
       0x5, 0x1e, 0x10, 0x2, 0x273, 0x274, 0x5, 0xb8, 0x5d, 0x2, 0x274, 
       0x276, 0x7, 0x5f, 0x2, 0x2, 0x275, 0x277, 0x5, 0x40, 0x21, 0x2, 0x276, 
       0x275, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 0x3, 0x2, 0x2, 0x2, 0x277, 
       0x278, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x7, 0x60, 0x2, 0x2, 0x279, 
       0x2b2, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x5, 0x188, 0xc5, 0x2, 0x27b, 
       0x27d, 0x7, 0x5f, 0x2, 0x2, 0x27c, 0x27e, 0x5, 0x40, 0x21, 0x2, 0x27d, 
       0x27c, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x27e, 
       0x27f, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x7, 0x60, 0x2, 0x2, 0x280, 
       0x2b2, 0x3, 0x2, 0x2, 0x2, 0x281, 0x282, 0x5, 0xb8, 0x5d, 0x2, 0x282, 
       0x283, 0x5, 0x13a, 0x9e, 0x2, 0x283, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x284, 
       0x285, 0x5, 0x188, 0xc5, 0x2, 0x285, 0x286, 0x5, 0x13a, 0x9e, 0x2, 
       0x286, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x7, 0x29, 0x2, 0x2, 
       0x288, 0x289, 0x7, 0x70, 0x2, 0x2, 0x289, 0x28a, 0x5, 0x11c, 0x8f, 
       0x2, 0x28a, 0x28b, 0x7, 0x71, 0x2, 0x2, 0x28b, 0x28c, 0x7, 0x5f, 
       0x2, 0x2, 0x28c, 0x28d, 0x5, 0x78, 0x3d, 0x2, 0x28d, 0x28e, 0x7, 
       0x60, 0x2, 0x2, 0x28e, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x7, 
       0x4b, 0x2, 0x2, 0x290, 0x291, 0x7, 0x70, 0x2, 0x2, 0x291, 0x292, 
       0x5, 0x11c, 0x8f, 0x2, 0x292, 0x293, 0x7, 0x71, 0x2, 0x2, 0x293, 
       0x294, 0x7, 0x5f, 0x2, 0x2, 0x294, 0x295, 0x5, 0x78, 0x3d, 0x2, 0x295, 
       0x296, 0x7, 0x60, 0x2, 0x2, 0x296, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x297, 
       0x298, 0x7, 0x44, 0x2, 0x2, 0x298, 0x299, 0x7, 0x70, 0x2, 0x2, 0x299, 
       0x29a, 0x5, 0x11c, 0x8f, 0x2, 0x29a, 0x29b, 0x7, 0x71, 0x2, 0x2, 
       0x29b, 0x29c, 0x7, 0x5f, 0x2, 0x2, 0x29c, 0x29d, 0x5, 0x78, 0x3d, 
       0x2, 0x29d, 0x29e, 0x7, 0x60, 0x2, 0x2, 0x29e, 0x2b2, 0x3, 0x2, 0x2, 
       0x2, 0x29f, 0x2a0, 0x7, 0x22, 0x2, 0x2, 0x2a0, 0x2a1, 0x7, 0x70, 
       0x2, 0x2, 0x2a1, 0x2a2, 0x5, 0x11c, 0x8f, 0x2, 0x2a2, 0x2a3, 0x7, 
       0x71, 0x2, 0x2, 0x2a3, 0x2a4, 0x7, 0x5f, 0x2, 0x2, 0x2a4, 0x2a5, 
       0x5, 0x78, 0x3d, 0x2, 0x2a5, 0x2a6, 0x7, 0x60, 0x2, 0x2, 0x2a6, 0x2b2, 
       0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a8, 0x5, 0x3e, 0x20, 0x2, 0x2a8, 0x2a9, 
       0x7, 0x5f, 0x2, 0x2, 0x2a9, 0x2aa, 0x5, 0x78, 0x3d, 0x2, 0x2aa, 0x2ab, 
       0x7, 0x60, 0x2, 0x2, 0x2ab, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 
       0x5, 0x3e, 0x20, 0x2, 0x2ad, 0x2ae, 0x7, 0x5f, 0x2, 0x2, 0x2ae, 0x2af, 
       0x5, 0x11c, 0x8f, 0x2, 0x2af, 0x2b0, 0x7, 0x60, 0x2, 0x2, 0x2b0, 
       0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x271, 0x3, 0x2, 0x2, 0x2, 0x2b1, 
       0x273, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x2b1, 
       0x281, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x284, 0x3, 0x2, 0x2, 0x2, 0x2b1, 
       0x287, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x2b1, 
       0x297, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x2b1, 
       0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2b2, 
       0x2db, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0xc, 0x15, 0x2, 0x2, 0x2b4, 
       0x2b5, 0x7, 0x61, 0x2, 0x2, 0x2b5, 0x2b6, 0x5, 0x78, 0x3d, 0x2, 0x2b6, 
       0x2b7, 0x7, 0x62, 0x2, 0x2, 0x2b7, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2b8, 
       0x2b9, 0xc, 0x14, 0x2, 0x2, 0x2b9, 0x2ba, 0x7, 0x61, 0x2, 0x2, 0x2ba, 
       0x2bb, 0x5, 0x13a, 0x9e, 0x2, 0x2bb, 0x2bc, 0x7, 0x62, 0x2, 0x2, 
       0x2bc, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2be, 0xc, 0x13, 0x2, 0x2, 
       0x2be, 0x2c0, 0x7, 0x5f, 0x2, 0x2, 0x2bf, 0x2c1, 0x5, 0x40, 0x21, 
       0x2, 0x2c0, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x3, 0x2, 0x2, 
       0x2, 0x2c1, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2da, 0x7, 0x60, 0x2, 
       0x2, 0x2c3, 0x2c4, 0xc, 0xe, 0x2, 0x2, 0x2c4, 0x2c6, 0x7, 0x8d, 0x2, 
       0x2, 0x2c5, 0x2c7, 0x7, 0x4e, 0x2, 0x2, 0x2c6, 0x2c5, 0x3, 0x2, 0x2, 
       0x2, 0x2c6, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0x3, 0x2, 0x2, 
       0x2, 0x2c8, 0x2da, 0x5, 0x20, 0x11, 0x2, 0x2c9, 0x2ca, 0xc, 0xd, 
       0x2, 0x2, 0x2ca, 0x2cc, 0x7, 0x88, 0x2, 0x2, 0x2cb, 0x2cd, 0x7, 0x4e, 
       0x2, 0x2, 0x2cc, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 0x3, 0x2, 
       0x2, 0x2, 0x2cd, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2da, 0x5, 0x20, 
       0x11, 0x2, 0x2cf, 0x2d0, 0xc, 0xc, 0x2, 0x2, 0x2d0, 0x2d1, 0x7, 0x8d, 
       0x2, 0x2, 0x2d1, 0x2da, 0x5, 0x42, 0x22, 0x2, 0x2d2, 0x2d3, 0xc, 
       0xb, 0x2, 0x2, 0x2d3, 0x2d4, 0x7, 0x88, 0x2, 0x2, 0x2d4, 0x2da, 0x5, 
       0x42, 0x22, 0x2, 0x2d5, 0x2d6, 0xc, 0xa, 0x2, 0x2, 0x2d6, 0x2da, 
       0x7, 0x84, 0x2, 0x2, 0x2d7, 0x2d8, 0xc, 0x9, 0x2, 0x2, 0x2d8, 0x2da, 
       0x7, 0x85, 0x2, 0x2, 0x2d9, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2b8, 
       0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2c3, 
       0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2cf, 
       0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2d5, 
       0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2dd, 
       0x3, 0x2, 0x2, 0x2, 0x2db, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dc, 
       0x3, 0x2, 0x2, 0x2, 0x2dc, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2db, 
       0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 0x7, 0x55, 0x2, 0x2, 0x2df, 0x3d, 
       0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0x7, 0x55, 0x2, 0x2, 0x2e1, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e3, 0x5, 0x138, 0x9d, 0x2, 0x2e3, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e6, 0x5, 0x26, 0x14, 0x2, 0x2e5, 0x2e4, 
       0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 
       0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 0x5, 0xba, 0x5e, 0x2, 0x2e8, 0x2e9, 
       0x7, 0x8b, 0x2, 0x2, 0x2e9, 0x2ea, 0x7, 0x6d, 0x2, 0x2, 0x2ea, 0x2eb, 
       0x5, 0xba, 0x5e, 0x2, 0x2eb, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 
       0x5, 0x26, 0x14, 0x2, 0x2ed, 0x2ee, 0x7, 0x4e, 0x2, 0x2, 0x2ee, 0x2ef, 
       0x5, 0x17e, 0xc0, 0x2, 0x2ef, 0x2f0, 0x7, 0x8b, 0x2, 0x2, 0x2f0, 
       0x2f1, 0x7, 0x6d, 0x2, 0x2, 0x2f1, 0x2f2, 0x5, 0xba, 0x5e, 0x2, 0x2f2, 
       0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f5, 0x5, 0x26, 0x14, 0x2, 0x2f4, 
       0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f5, 
       0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0x7, 0x6d, 0x2, 0x2, 0x2f7, 
       0x2fb, 0x5, 0xba, 0x5e, 0x2, 0x2f8, 0x2f9, 0x7, 0x6d, 0x2, 0x2, 0x2f9, 
       0x2fb, 0x5, 0xbc, 0x5f, 0x2, 0x2fa, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2fa, 
       0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2fa, 
       0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2fc, 
       0x319, 0x5, 0x3a, 0x1e, 0x2, 0x2fd, 0x2fe, 0x7, 0x84, 0x2, 0x2, 0x2fe, 
       0x319, 0x5, 0x58, 0x2d, 0x2, 0x2ff, 0x300, 0x7, 0x85, 0x2, 0x2, 0x300, 
       0x319, 0x5, 0x58, 0x2d, 0x2, 0x301, 0x302, 0x5, 0x46, 0x24, 0x2, 
       0x302, 0x303, 0x5, 0x58, 0x2d, 0x2, 0x303, 0x319, 0x3, 0x2, 0x2, 
       0x2, 0x304, 0x305, 0x7, 0x48, 0x2, 0x2, 0x305, 0x319, 0x5, 0x44, 
       0x23, 0x2, 0x306, 0x307, 0x7, 0x48, 0x2, 0x2, 0x307, 0x308, 0x7, 
       0x5f, 0x2, 0x2, 0x308, 0x309, 0x5, 0x11c, 0x8f, 0x2, 0x309, 0x30a, 
       0x7, 0x60, 0x2, 0x2, 0x30a, 0x319, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30c, 
       0x7, 0x48, 0x2, 0x2, 0x30c, 0x30d, 0x7, 0x8f, 0x2, 0x2, 0x30d, 0x30e, 
       0x7, 0x5f, 0x2, 0x2, 0x30e, 0x30f, 0x7, 0x90, 0x2, 0x2, 0x30f, 0x319, 
       0x7, 0x60, 0x2, 0x2, 0x310, 0x311, 0x7, 0x15, 0x2, 0x2, 0x311, 0x312, 
       0x7, 0x5f, 0x2, 0x2, 0x312, 0x313, 0x5, 0x11c, 0x8f, 0x2, 0x313, 
       0x314, 0x7, 0x60, 0x2, 0x2, 0x314, 0x319, 0x3, 0x2, 0x2, 0x2, 0x315, 
       0x319, 0x5, 0x56, 0x2c, 0x2, 0x316, 0x319, 0x5, 0x48, 0x25, 0x2, 
       0x317, 0x319, 0x5, 0x54, 0x2b, 0x2, 0x318, 0x2fc, 0x3, 0x2, 0x2, 
       0x2, 0x318, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x318, 0x2ff, 0x3, 0x2, 0x2, 
       0x2, 0x318, 0x301, 0x3, 0x2, 0x2, 0x2, 0x318, 0x304, 0x3, 0x2, 0x2, 
       0x2, 0x318, 0x306, 0x3, 0x2, 0x2, 0x2, 0x318, 0x30b, 0x3, 0x2, 0x2, 
       0x2, 0x318, 0x310, 0x3, 0x2, 0x2, 0x2, 0x318, 0x315, 0x3, 0x2, 0x2, 
       0x2, 0x318, 0x316, 0x3, 0x2, 0x2, 0x2, 0x318, 0x317, 0x3, 0x2, 0x2, 
       0x2, 0x319, 0x45, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31b, 0x9, 0x3, 0x2, 
       0x2, 0x31b, 0x47, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31e, 0x7, 0x8b, 0x2, 
       0x2, 0x31d, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 0x3, 0x2, 0x2, 
       0x2, 0x31e, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x321, 0x7, 0x3b, 0x2, 
       0x2, 0x320, 0x322, 0x5, 0x4a, 0x26, 0x2, 0x321, 0x320, 0x3, 0x2, 
       0x2, 0x2, 0x321, 0x322, 0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 0x3, 0x2, 
       0x2, 0x2, 0x323, 0x325, 0x5, 0x4c, 0x27, 0x2, 0x324, 0x326, 0x5, 
       0x52, 0x2a, 0x2, 0x325, 0x324, 0x3, 0x2, 0x2, 0x2, 0x325, 0x326, 
       0x3, 0x2, 0x2, 0x2, 0x326, 0x335, 0x3, 0x2, 0x2, 0x2, 0x327, 0x329, 
       0x7, 0x8b, 0x2, 0x2, 0x328, 0x327, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 
       0x3, 0x2, 0x2, 0x2, 0x329, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32c, 
       0x7, 0x3b, 0x2, 0x2, 0x32b, 0x32d, 0x5, 0x4a, 0x26, 0x2, 0x32c, 0x32b, 
       0x3, 0x2, 0x2, 0x2, 0x32c, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 
       0x3, 0x2, 0x2, 0x2, 0x32e, 0x32f, 0x7, 0x5f, 0x2, 0x2, 0x32f, 0x330, 
       0x5, 0x11c, 0x8f, 0x2, 0x330, 0x332, 0x7, 0x60, 0x2, 0x2, 0x331, 
       0x333, 0x5, 0x52, 0x2a, 0x2, 0x332, 0x331, 0x3, 0x2, 0x2, 0x2, 0x332, 
       0x333, 0x3, 0x2, 0x2, 0x2, 0x333, 0x335, 0x3, 0x2, 0x2, 0x2, 0x334, 
       0x31d, 0x3, 0x2, 0x2, 0x2, 0x334, 0x328, 0x3, 0x2, 0x2, 0x2, 0x335, 
       0x49, 0x3, 0x2, 0x2, 0x2, 0x336, 0x337, 0x7, 0x5f, 0x2, 0x2, 0x337, 
       0x338, 0x5, 0x40, 0x21, 0x2, 0x338, 0x339, 0x7, 0x60, 0x2, 0x2, 0x339, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x33c, 0x5, 0xb4, 0x5b, 0x2, 0x33b, 
       0x33d, 0x5, 0x4e, 0x28, 0x2, 0x33c, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x33c, 
       0x33d, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x340, 0x5, 0x112, 0x8a, 0x2, 0x33f, 0x341, 0x5, 0x4e, 0x28, 0x2, 
       0x340, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x3, 0x2, 0x2, 0x2, 
       0x341, 0x344, 0x3, 0x2, 0x2, 0x2, 0x342, 0x344, 0x5, 0x50, 0x29, 
       0x2, 0x343, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x343, 0x342, 0x3, 0x2, 0x2, 
       0x2, 0x344, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x345, 0x346, 0x8, 0x29, 0x1, 
       0x2, 0x346, 0x347, 0x7, 0x61, 0x2, 0x2, 0x347, 0x348, 0x5, 0x78, 
       0x3d, 0x2, 0x348, 0x34a, 0x7, 0x62, 0x2, 0x2, 0x349, 0x34b, 0x5, 
       0xee, 0x78, 0x2, 0x34a, 0x349, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34b, 
       0x3, 0x2, 0x2, 0x2, 0x34b, 0x355, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34d, 
       0xc, 0x3, 0x2, 0x2, 0x34d, 0x34e, 0x7, 0x61, 0x2, 0x2, 0x34e, 0x34f, 
       0x5, 0x7a, 0x3e, 0x2, 0x34f, 0x351, 0x7, 0x62, 0x2, 0x2, 0x350, 0x352, 
       0x5, 0xee, 0x78, 0x2, 0x351, 0x350, 0x3, 0x2, 0x2, 0x2, 0x351, 0x352, 
       0x3, 0x2, 0x2, 0x2, 0x352, 0x354, 0x3, 0x2, 0x2, 0x2, 0x353, 0x34c, 
       0x3, 0x2, 0x2, 0x2, 0x354, 0x357, 0x3, 0x2, 0x2, 0x2, 0x355, 0x353, 
       0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 0x3, 0x2, 0x2, 0x2, 0x356, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x357, 0x355, 0x3, 0x2, 0x2, 0x2, 0x358, 0x35a, 
       0x7, 0x5f, 0x2, 0x2, 0x359, 0x35b, 0x5, 0x40, 0x21, 0x2, 0x35a, 0x359, 
       0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35c, 
       0x3, 0x2, 0x2, 0x2, 0x35c, 0x35f, 0x7, 0x60, 0x2, 0x2, 0x35d, 0x35f, 
       0x5, 0x13a, 0x9e, 0x2, 0x35e, 0x358, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x35d, 
       0x3, 0x2, 0x2, 0x2, 0x35f, 0x53, 0x3, 0x2, 0x2, 0x2, 0x360, 0x362, 
       0x7, 0x8b, 0x2, 0x2, 0x361, 0x360, 0x3, 0x2, 0x2, 0x2, 0x361, 0x362, 
       0x3, 0x2, 0x2, 0x2, 0x362, 0x363, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 
       0x7, 0x26, 0x2, 0x2, 0x364, 0x36d, 0x5, 0x58, 0x2d, 0x2, 0x365, 0x367, 
       0x7, 0x8b, 0x2, 0x2, 0x366, 0x365, 0x3, 0x2, 0x2, 0x2, 0x366, 0x367, 
       0x3, 0x2, 0x2, 0x2, 0x367, 0x368, 0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 
       0x7, 0x26, 0x2, 0x2, 0x369, 0x36a, 0x7, 0x61, 0x2, 0x2, 0x36a, 0x36b, 
       0x7, 0x62, 0x2, 0x2, 0x36b, 0x36d, 0x5, 0x58, 0x2d, 0x2, 0x36c, 0x361, 
       0x3, 0x2, 0x2, 0x2, 0x36c, 0x366, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x36e, 0x36f, 0x7, 0x3c, 0x2, 0x2, 0x36f, 0x370, 
       0x7, 0x5f, 0x2, 0x2, 0x370, 0x371, 0x5, 0x78, 0x3d, 0x2, 0x371, 0x372, 
       0x7, 0x60, 0x2, 0x2, 0x372, 0x57, 0x3, 0x2, 0x2, 0x2, 0x373, 0x37a, 
       0x5, 0x44, 0x23, 0x2, 0x374, 0x375, 0x7, 0x5f, 0x2, 0x2, 0x375, 0x376, 
       0x5, 0x11c, 0x8f, 0x2, 0x376, 0x377, 0x7, 0x60, 0x2, 0x2, 0x377, 
       0x378, 0x5, 0x58, 0x2d, 0x2, 0x378, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x379, 
       0x373, 0x3, 0x2, 0x2, 0x2, 0x379, 0x374, 0x3, 0x2, 0x2, 0x2, 0x37a, 
       0x59, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 0x8, 0x2e, 0x1, 0x2, 0x37c, 
       0x37d, 0x5, 0x58, 0x2d, 0x2, 0x37d, 0x386, 0x3, 0x2, 0x2, 0x2, 0x37e, 
       0x37f, 0xc, 0x4, 0x2, 0x2, 0x37f, 0x380, 0x7, 0x8e, 0x2, 0x2, 0x380, 
       0x385, 0x5, 0x58, 0x2d, 0x2, 0x381, 0x382, 0xc, 0x3, 0x2, 0x2, 0x382, 
       0x383, 0x7, 0x87, 0x2, 0x2, 0x383, 0x385, 0x5, 0x58, 0x2d, 0x2, 0x384, 
       0x37e, 0x3, 0x2, 0x2, 0x2, 0x384, 0x381, 0x3, 0x2, 0x2, 0x2, 0x385, 
       0x388, 0x3, 0x2, 0x2, 0x2, 0x386, 0x384, 0x3, 0x2, 0x2, 0x2, 0x386, 
       0x387, 0x3, 0x2, 0x2, 0x2, 0x387, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x388, 
       0x386, 0x3, 0x2, 0x2, 0x2, 0x389, 0x38a, 0x8, 0x2f, 0x1, 0x2, 0x38a, 
       0x38b, 0x5, 0x5a, 0x2e, 0x2, 0x38b, 0x397, 0x3, 0x2, 0x2, 0x2, 0x38c, 
       0x38d, 0xc, 0x5, 0x2, 0x2, 0x38d, 0x38e, 0x7, 0x67, 0x2, 0x2, 0x38e, 
       0x396, 0x5, 0x5a, 0x2e, 0x2, 0x38f, 0x390, 0xc, 0x4, 0x2, 0x2, 0x390, 
       0x391, 0x7, 0x68, 0x2, 0x2, 0x391, 0x396, 0x5, 0x5a, 0x2e, 0x2, 0x392, 
       0x393, 0xc, 0x3, 0x2, 0x2, 0x393, 0x394, 0x7, 0x69, 0x2, 0x2, 0x394, 
       0x396, 0x5, 0x5a, 0x2e, 0x2, 0x395, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x395, 
       0x38f, 0x3, 0x2, 0x2, 0x2, 0x395, 0x392, 0x3, 0x2, 0x2, 0x2, 0x396, 
       0x399, 0x3, 0x2, 0x2, 0x2, 0x397, 0x395, 0x3, 0x2, 0x2, 0x2, 0x397, 
       0x398, 0x3, 0x2, 0x2, 0x2, 0x398, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x399, 
       0x397, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x8, 0x30, 0x1, 0x2, 0x39b, 
       0x39c, 0x5, 0x5c, 0x2f, 0x2, 0x39c, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x39d, 
       0x39e, 0xc, 0x4, 0x2, 0x2, 0x39e, 0x39f, 0x7, 0x65, 0x2, 0x2, 0x39f, 
       0x3a4, 0x5, 0x5c, 0x2f, 0x2, 0x3a0, 0x3a1, 0xc, 0x3, 0x2, 0x2, 0x3a1, 
       0x3a2, 0x7, 0x66, 0x2, 0x2, 0x3a2, 0x3a4, 0x5, 0x5c, 0x2f, 0x2, 0x3a3, 
       0x39d, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x3a4, 
       0x3a7, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a5, 
       0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x3a7, 
       0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a9, 0x8, 0x31, 0x1, 0x2, 0x3a9, 
       0x3aa, 0x5, 0x5e, 0x30, 0x2, 0x3aa, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3ab, 
       0x3ac, 0xc, 0x3, 0x2, 0x2, 0x3ac, 0x3ad, 0x5, 0x62, 0x32, 0x2, 0x3ad, 
       0x3ae, 0x5, 0x5e, 0x30, 0x2, 0x3ae, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3af, 
       0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b1, 
       0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b2, 
       0x61, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b4, 
       0x3b5, 0x9, 0x4, 0x2, 0x2, 0x3b5, 0x63, 0x3, 0x2, 0x2, 0x2, 0x3b6, 
       0x3b7, 0x8, 0x33, 0x1, 0x2, 0x3b7, 0x3b8, 0x5, 0x60, 0x31, 0x2, 0x3b8, 
       0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0xc, 0x6, 0x2, 0x2, 0x3ba, 
       0x3bb, 0x7, 0x70, 0x2, 0x2, 0x3bb, 0x3c6, 0x5, 0x60, 0x31, 0x2, 0x3bc, 
       0x3bd, 0xc, 0x5, 0x2, 0x2, 0x3bd, 0x3be, 0x7, 0x71, 0x2, 0x2, 0x3be, 
       0x3c6, 0x5, 0x60, 0x31, 0x2, 0x3bf, 0x3c0, 0xc, 0x4, 0x2, 0x2, 0x3c0, 
       0x3c1, 0x7, 0x80, 0x2, 0x2, 0x3c1, 0x3c6, 0x5, 0x60, 0x31, 0x2, 0x3c2, 
       0x3c3, 0xc, 0x3, 0x2, 0x2, 0x3c3, 0x3c4, 0x7, 0x81, 0x2, 0x2, 0x3c4, 
       0x3c6, 0x5, 0x60, 0x31, 0x2, 0x3c5, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3c5, 
       0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3c5, 
       0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3c7, 
       0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3c8, 
       0x65, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3ca, 
       0x3cb, 0x8, 0x34, 0x1, 0x2, 0x3cb, 0x3cc, 0x5, 0x64, 0x33, 0x2, 0x3cc, 
       0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3ce, 0xc, 0x4, 0x2, 0x2, 0x3ce, 
       0x3cf, 0x7, 0x7e, 0x2, 0x2, 0x3cf, 0x3d4, 0x5, 0x64, 0x33, 0x2, 0x3d0, 
       0x3d1, 0xc, 0x3, 0x2, 0x2, 0x3d1, 0x3d2, 0x7, 0x7f, 0x2, 0x2, 0x3d2, 
       0x3d4, 0x5, 0x64, 0x33, 0x2, 0x3d3, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3d3, 
       0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d5, 
       0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d6, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d8, 
       0x3d9, 0x8, 0x35, 0x1, 0x2, 0x3d9, 0x3da, 0x5, 0x66, 0x34, 0x2, 0x3da, 
       0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dc, 0xc, 0x3, 0x2, 0x2, 0x3dc, 
       0x3dd, 0x7, 0x6b, 0x2, 0x2, 0x3dd, 0x3df, 0x5, 0x66, 0x34, 0x2, 0x3de, 
       0x3db, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e0, 
       0x3de, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e1, 
       0x69, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e3, 
       0x3e4, 0x8, 0x36, 0x1, 0x2, 0x3e4, 0x3e5, 0x5, 0x68, 0x35, 0x2, 0x3e5, 
       0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e7, 0xc, 0x3, 0x2, 0x2, 0x3e7, 
       0x3e8, 0x7, 0x6a, 0x2, 0x2, 0x3e8, 0x3ea, 0x5, 0x68, 0x35, 0x2, 0x3e9, 
       0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3eb, 
       0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ec, 
       0x6b, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3ee, 
       0x3ef, 0x8, 0x37, 0x1, 0x2, 0x3ef, 0x3f0, 0x5, 0x6a, 0x36, 0x2, 0x3f0, 
       0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f2, 0xc, 0x3, 0x2, 0x2, 0x3f2, 
       0x3f3, 0x7, 0x6c, 0x2, 0x2, 0x3f3, 0x3f5, 0x5, 0x6a, 0x36, 0x2, 0x3f4, 
       0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f6, 
       0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f7, 
       0x6d, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f9, 
       0x3fa, 0x8, 0x38, 0x1, 0x2, 0x3fa, 0x3fb, 0x5, 0x6c, 0x37, 0x2, 0x3fb, 
       0x404, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 0xc, 0x4, 0x2, 0x2, 0x3fd, 
       0x3fe, 0x7, 0xd, 0x2, 0x2, 0x3fe, 0x403, 0x5, 0x6c, 0x37, 0x2, 0x3ff, 
       0x400, 0xc, 0x3, 0x2, 0x2, 0x400, 0x401, 0x7, 0xe, 0x2, 0x2, 0x401, 
       0x403, 0x5, 0x6c, 0x37, 0x2, 0x402, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x402, 
       0x3ff, 0x3, 0x2, 0x2, 0x2, 0x403, 0x406, 0x3, 0x2, 0x2, 0x2, 0x404, 
       0x402, 0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 0x3, 0x2, 0x2, 0x2, 0x405, 
       0x6f, 0x3, 0x2, 0x2, 0x2, 0x406, 0x404, 0x3, 0x2, 0x2, 0x2, 0x407, 
       0x408, 0x8, 0x39, 0x1, 0x2, 0x408, 0x409, 0x5, 0x6e, 0x38, 0x2, 0x409, 
       0x412, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x40b, 0xc, 0x4, 0x2, 0x2, 0x40b, 
       0x40c, 0x7, 0xf, 0x2, 0x2, 0x40c, 0x411, 0x5, 0x6e, 0x38, 0x2, 0x40d, 
       0x40e, 0xc, 0x3, 0x2, 0x2, 0x40e, 0x40f, 0x7, 0x10, 0x2, 0x2, 0x40f, 
       0x411, 0x5, 0x6e, 0x38, 0x2, 0x410, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x410, 
       0x40d, 0x3, 0x2, 0x2, 0x2, 0x411, 0x414, 0x3, 0x2, 0x2, 0x2, 0x412, 
       0x410, 0x3, 0x2, 0x2, 0x2, 0x412, 0x413, 0x3, 0x2, 0x2, 0x2, 0x413, 
       0x71, 0x3, 0x2, 0x2, 0x2, 0x414, 0x412, 0x3, 0x2, 0x2, 0x2, 0x415, 
       0x41d, 0x5, 0x70, 0x39, 0x2, 0x416, 0x417, 0x5, 0x70, 0x39, 0x2, 
       0x417, 0x418, 0x7, 0x89, 0x2, 0x2, 0x418, 0x419, 0x5, 0x78, 0x3d, 
       0x2, 0x419, 0x41a, 0x7, 0x8a, 0x2, 0x2, 0x41a, 0x41b, 0x5, 0x74, 
       0x3b, 0x2, 0x41b, 0x41d, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x415, 0x3, 0x2, 
       0x2, 0x2, 0x41c, 0x416, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x73, 0x3, 0x2, 
       0x2, 0x2, 0x41e, 0x425, 0x5, 0x72, 0x3a, 0x2, 0x41f, 0x420, 0x5, 
       0x70, 0x39, 0x2, 0x420, 0x421, 0x5, 0x76, 0x3c, 0x2, 0x421, 0x422, 
       0x5, 0x136, 0x9c, 0x2, 0x422, 0x425, 0x3, 0x2, 0x2, 0x2, 0x423, 0x425, 
       0x5, 0x198, 0xcd, 0x2, 0x424, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x424, 0x41f, 
       0x3, 0x2, 0x2, 0x2, 0x424, 0x423, 0x3, 0x2, 0x2, 0x2, 0x425, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x426, 0x427, 0x9, 0x5, 0x2, 0x2, 0x427, 0x77, 
       0x3, 0x2, 0x2, 0x2, 0x428, 0x429, 0x8, 0x3d, 0x1, 0x2, 0x429, 0x42a, 
       0x5, 0x74, 0x3b, 0x2, 0x42a, 0x430, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x42c, 
       0xc, 0x3, 0x2, 0x2, 0x42c, 0x42d, 0x7, 0x86, 0x2, 0x2, 0x42d, 0x42f, 
       0x5, 0x74, 0x3b, 0x2, 0x42e, 0x42b, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x432, 
       0x3, 0x2, 0x2, 0x2, 0x430, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x430, 0x431, 
       0x3, 0x2, 0x2, 0x2, 0x431, 0x79, 0x3, 0x2, 0x2, 0x2, 0x432, 0x430, 
       0x3, 0x2, 0x2, 0x2, 0x433, 0x434, 0x5, 0x72, 0x3a, 0x2, 0x434, 0x7b, 
       0x3, 0x2, 0x2, 0x2, 0x435, 0x452, 0x5, 0x7e, 0x40, 0x2, 0x436, 0x438, 
       0x5, 0xee, 0x78, 0x2, 0x437, 0x436, 0x3, 0x2, 0x2, 0x2, 0x437, 0x438, 
       0x3, 0x2, 0x2, 0x2, 0x438, 0x439, 0x3, 0x2, 0x2, 0x2, 0x439, 0x452, 
       0x5, 0x80, 0x41, 0x2, 0x43a, 0x43c, 0x5, 0xee, 0x78, 0x2, 0x43b, 
       0x43a, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43c, 
       0x43d, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x452, 0x5, 0x82, 0x42, 0x2, 0x43e, 
       0x440, 0x5, 0xee, 0x78, 0x2, 0x43f, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x43f, 
       0x440, 0x3, 0x2, 0x2, 0x2, 0x440, 0x441, 0x3, 0x2, 0x2, 0x2, 0x441, 
       0x452, 0x5, 0x86, 0x44, 0x2, 0x442, 0x444, 0x5, 0xee, 0x78, 0x2, 
       0x443, 0x442, 0x3, 0x2, 0x2, 0x2, 0x443, 0x444, 0x3, 0x2, 0x2, 0x2, 
       0x444, 0x445, 0x3, 0x2, 0x2, 0x2, 0x445, 0x452, 0x5, 0x8a, 0x46, 
       0x2, 0x446, 0x448, 0x5, 0xee, 0x78, 0x2, 0x447, 0x446, 0x3, 0x2, 
       0x2, 0x2, 0x447, 0x448, 0x3, 0x2, 0x2, 0x2, 0x448, 0x449, 0x3, 0x2, 
       0x2, 0x2, 0x449, 0x452, 0x5, 0x92, 0x4a, 0x2, 0x44a, 0x452, 0x5, 
       0x94, 0x4b, 0x2, 0x44b, 0x452, 0x5, 0xa, 0x6, 0x2, 0x44c, 0x452, 
       0x5, 0x16, 0xc, 0x2, 0x44d, 0x44f, 0x5, 0xee, 0x78, 0x2, 0x44e, 0x44d, 
       0x3, 0x2, 0x2, 0x2, 0x44e, 0x44f, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x450, 
       0x3, 0x2, 0x2, 0x2, 0x450, 0x452, 0x5, 0x18e, 0xc8, 0x2, 0x451, 0x435, 
       0x3, 0x2, 0x2, 0x2, 0x451, 0x437, 0x3, 0x2, 0x2, 0x2, 0x451, 0x43b, 
       0x3, 0x2, 0x2, 0x2, 0x451, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x451, 0x443, 
       0x3, 0x2, 0x2, 0x2, 0x451, 0x447, 0x3, 0x2, 0x2, 0x2, 0x451, 0x44a, 
       0x3, 0x2, 0x2, 0x2, 0x451, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x451, 0x44c, 
       0x3, 0x2, 0x2, 0x2, 0x451, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x452, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x453, 0x455, 0x5, 0xee, 0x78, 0x2, 0x454, 0x453, 
       0x3, 0x2, 0x2, 0x2, 0x454, 0x455, 0x3, 0x2, 0x2, 0x2, 0x455, 0x456, 
       0x3, 0x2, 0x2, 0x2, 0x456, 0x457, 0x7, 0x90, 0x2, 0x2, 0x457, 0x458, 
       0x7, 0x8a, 0x2, 0x2, 0x458, 0x468, 0x5, 0x7c, 0x3f, 0x2, 0x459, 0x45b, 
       0x5, 0xee, 0x78, 0x2, 0x45a, 0x459, 0x3, 0x2, 0x2, 0x2, 0x45a, 0x45b, 
       0x3, 0x2, 0x2, 0x2, 0x45b, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x45d, 
       0x7, 0x1a, 0x2, 0x2, 0x45d, 0x45e, 0x5, 0x7a, 0x3e, 0x2, 0x45e, 0x45f, 
       0x7, 0x8a, 0x2, 0x2, 0x45f, 0x460, 0x5, 0x7c, 0x3f, 0x2, 0x460, 0x468, 
       0x3, 0x2, 0x2, 0x2, 0x461, 0x463, 0x5, 0xee, 0x78, 0x2, 0x462, 0x461, 
       0x3, 0x2, 0x2, 0x2, 0x462, 0x463, 0x3, 0x2, 0x2, 0x2, 0x463, 0x464, 
       0x3, 0x2, 0x2, 0x2, 0x464, 0x465, 0x7, 0x25, 0x2, 0x2, 0x465, 0x466, 
       0x7, 0x8a, 0x2, 0x2, 0x466, 0x468, 0x5, 0x7c, 0x3f, 0x2, 0x467, 0x454, 
       0x3, 0x2, 0x2, 0x2, 0x467, 0x45a, 0x3, 0x2, 0x2, 0x2, 0x467, 0x462, 
       0x3, 0x2, 0x2, 0x2, 0x468, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x469, 0x46b, 
       0x5, 0x78, 0x3d, 0x2, 0x46a, 0x469, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x46b, 
       0x3, 0x2, 0x2, 0x2, 0x46b, 0x46c, 0x3, 0x2, 0x2, 0x2, 0x46c, 0x46d, 
       0x7, 0x8c, 0x2, 0x2, 0x46d, 0x81, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x470, 
       0x7, 0x63, 0x2, 0x2, 0x46f, 0x471, 0x5, 0x84, 0x43, 0x2, 0x470, 0x46f, 
       0x3, 0x2, 0x2, 0x2, 0x470, 0x471, 0x3, 0x2, 0x2, 0x2, 0x471, 0x472, 
       0x3, 0x2, 0x2, 0x2, 0x472, 0x473, 0x7, 0x64, 0x2, 0x2, 0x473, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x474, 0x475, 0x8, 0x43, 0x1, 0x2, 0x475, 0x476, 
       0x5, 0x7c, 0x3f, 0x2, 0x476, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x477, 0x478, 
       0xc, 0x3, 0x2, 0x2, 0x478, 0x47a, 0x5, 0x7c, 0x3f, 0x2, 0x479, 0x477, 
       0x3, 0x2, 0x2, 0x2, 0x47a, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x479, 
       0x3, 0x2, 0x2, 0x2, 0x47b, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x47d, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x47f, 
       0x7, 0x35, 0x2, 0x2, 0x47f, 0x480, 0x7, 0x5f, 0x2, 0x2, 0x480, 0x481, 
       0x5, 0x88, 0x45, 0x2, 0x481, 0x482, 0x7, 0x60, 0x2, 0x2, 0x482, 0x483, 
       0x5, 0x7c, 0x3f, 0x2, 0x483, 0x493, 0x3, 0x2, 0x2, 0x2, 0x484, 0x485, 
       0x7, 0x35, 0x2, 0x2, 0x485, 0x486, 0x7, 0x5f, 0x2, 0x2, 0x486, 0x487, 
       0x5, 0x88, 0x45, 0x2, 0x487, 0x488, 0x7, 0x60, 0x2, 0x2, 0x488, 0x489, 
       0x5, 0x7c, 0x3f, 0x2, 0x489, 0x48a, 0x7, 0x2a, 0x2, 0x2, 0x48a, 0x48b, 
       0x5, 0x7c, 0x3f, 0x2, 0x48b, 0x493, 0x3, 0x2, 0x2, 0x2, 0x48c, 0x48d, 
       0x7, 0x4d, 0x2, 0x2, 0x48d, 0x48e, 0x7, 0x5f, 0x2, 0x2, 0x48e, 0x48f, 
       0x5, 0x88, 0x45, 0x2, 0x48f, 0x490, 0x7, 0x60, 0x2, 0x2, 0x490, 0x491, 
       0x5, 0x7c, 0x3f, 0x2, 0x491, 0x493, 0x3, 0x2, 0x2, 0x2, 0x492, 0x47e, 
       0x3, 0x2, 0x2, 0x2, 0x492, 0x484, 0x3, 0x2, 0x2, 0x2, 0x492, 0x48c, 
       0x3, 0x2, 0x2, 0x2, 0x493, 0x87, 0x3, 0x2, 0x2, 0x2, 0x494, 0x4a5, 
       0x5, 0x78, 0x3d, 0x2, 0x495, 0x497, 0x5, 0xee, 0x78, 0x2, 0x496, 
       0x495, 0x3, 0x2, 0x2, 0x2, 0x496, 0x497, 0x3, 0x2, 0x2, 0x2, 0x497, 
       0x498, 0x3, 0x2, 0x2, 0x2, 0x498, 0x499, 0x5, 0xa8, 0x55, 0x2, 0x499, 
       0x49a, 0x5, 0x108, 0x85, 0x2, 0x49a, 0x49b, 0x7, 0x6f, 0x2, 0x2, 
       0x49b, 0x49c, 0x5, 0x136, 0x9c, 0x2, 0x49c, 0x4a5, 0x3, 0x2, 0x2, 
       0x2, 0x49d, 0x49f, 0x5, 0xee, 0x78, 0x2, 0x49e, 0x49d, 0x3, 0x2, 
       0x2, 0x2, 0x49e, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x49f, 0x4a0, 0x3, 0x2, 
       0x2, 0x2, 0x4a0, 0x4a1, 0x5, 0xa8, 0x55, 0x2, 0x4a1, 0x4a2, 0x5, 
       0x108, 0x85, 0x2, 0x4a2, 0x4a3, 0x5, 0x13a, 0x9e, 0x2, 0x4a3, 0x4a5, 
       0x3, 0x2, 0x2, 0x2, 0x4a4, 0x494, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x496, 
       0x3, 0x2, 0x2, 0x2, 0x4a4, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x4a6, 0x4a7, 0x7, 0x5e, 0x2, 0x2, 0x4a7, 0x4a8, 
       0x7, 0x5f, 0x2, 0x2, 0x4a8, 0x4a9, 0x5, 0x88, 0x45, 0x2, 0x4a9, 0x4aa, 
       0x7, 0x60, 0x2, 0x2, 0x4aa, 0x4ab, 0x5, 0x7c, 0x3f, 0x2, 0x4ab, 0x4ca, 
       0x3, 0x2, 0x2, 0x2, 0x4ac, 0x4ad, 0x7, 0x27, 0x2, 0x2, 0x4ad, 0x4ae, 
       0x5, 0x7c, 0x3f, 0x2, 0x4ae, 0x4af, 0x7, 0x5e, 0x2, 0x2, 0x4af, 0x4b0, 
       0x7, 0x5f, 0x2, 0x2, 0x4b0, 0x4b1, 0x5, 0x78, 0x3d, 0x2, 0x4b1, 0x4b2, 
       0x7, 0x60, 0x2, 0x2, 0x4b2, 0x4b3, 0x7, 0x8c, 0x2, 0x2, 0x4b3, 0x4ca, 
       0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4b5, 0x7, 0x32, 0x2, 0x2, 0x4b5, 0x4b6, 
       0x7, 0x5f, 0x2, 0x2, 0x4b6, 0x4b8, 0x5, 0x8c, 0x47, 0x2, 0x4b7, 0x4b9, 
       0x5, 0x88, 0x45, 0x2, 0x4b8, 0x4b7, 0x3, 0x2, 0x2, 0x2, 0x4b8, 0x4b9, 
       0x3, 0x2, 0x2, 0x2, 0x4b9, 0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4ba, 0x4bc, 
       0x7, 0x8c, 0x2, 0x2, 0x4bb, 0x4bd, 0x5, 0x78, 0x3d, 0x2, 0x4bc, 0x4bb, 
       0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4be, 
       0x3, 0x2, 0x2, 0x2, 0x4be, 0x4bf, 0x7, 0x60, 0x2, 0x2, 0x4bf, 0x4c0, 
       0x5, 0x7c, 0x3f, 0x2, 0x4c0, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c2, 
       0x7, 0x32, 0x2, 0x2, 0x4c2, 0x4c3, 0x7, 0x5f, 0x2, 0x2, 0x4c3, 0x4c4, 
       0x5, 0x8e, 0x48, 0x2, 0x4c4, 0x4c5, 0x7, 0x8a, 0x2, 0x2, 0x4c5, 0x4c6, 
       0x5, 0x90, 0x49, 0x2, 0x4c6, 0x4c7, 0x7, 0x60, 0x2, 0x2, 0x4c7, 0x4c8, 
       0x5, 0x7c, 0x3f, 0x2, 0x4c8, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4a6, 
       0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4b4, 
       0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x8b, 
       0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4ce, 0x5, 0x80, 0x41, 0x2, 0x4cc, 0x4ce, 
       0x5, 0x9e, 0x50, 0x2, 0x4cd, 0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4cc, 
       0x3, 0x2, 0x2, 0x2, 0x4ce, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4d1, 
       0x5, 0xee, 0x78, 0x2, 0x4d0, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d1, 
       0x3, 0x2, 0x2, 0x2, 0x4d1, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d3, 
       0x5, 0xa8, 0x55, 0x2, 0x4d3, 0x4d4, 0x5, 0x108, 0x85, 0x2, 0x4d4, 
       0x8f, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4d8, 0x5, 0x78, 0x3d, 0x2, 0x4d6, 
       0x4d8, 0x5, 0x13a, 0x9e, 0x2, 0x4d7, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4d7, 
       0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x91, 0x3, 0x2, 0x2, 0x2, 0x4d9, 
       0x4da, 0x7, 0x19, 0x2, 0x2, 0x4da, 0x4ea, 0x7, 0x8c, 0x2, 0x2, 0x4db, 
       0x4dc, 0x7, 0x23, 0x2, 0x2, 0x4dc, 0x4ea, 0x7, 0x8c, 0x2, 0x2, 0x4dd, 
       0x4df, 0x7, 0x45, 0x2, 0x2, 0x4de, 0x4e0, 0x5, 0x78, 0x3d, 0x2, 0x4df, 
       0x4de, 0x3, 0x2, 0x2, 0x2, 0x4df, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4e0, 
       0x4e1, 0x3, 0x2, 0x2, 0x2, 0x4e1, 0x4ea, 0x7, 0x8c, 0x2, 0x2, 0x4e2, 
       0x4e3, 0x7, 0x45, 0x2, 0x2, 0x4e3, 0x4e4, 0x5, 0x13a, 0x9e, 0x2, 
       0x4e4, 0x4e5, 0x7, 0x8c, 0x2, 0x2, 0x4e5, 0x4ea, 0x3, 0x2, 0x2, 0x2, 
       0x4e6, 0x4e7, 0x7, 0x34, 0x2, 0x2, 0x4e7, 0x4e8, 0x7, 0x90, 0x2, 
       0x2, 0x4e8, 0x4ea, 0x7, 0x8c, 0x2, 0x2, 0x4e9, 0x4d9, 0x3, 0x2, 0x2, 
       0x2, 0x4e9, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4dd, 0x3, 0x2, 0x2, 
       0x2, 0x4e9, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4e6, 0x3, 0x2, 0x2, 
       0x2, 0x4ea, 0x93, 0x3, 0x2, 0x2, 0x2, 0x4eb, 0x4ec, 0x5, 0x9a, 0x4e, 
       0x2, 0x4ec, 0x95, 0x3, 0x2, 0x2, 0x2, 0x4ed, 0x4ee, 0x8, 0x4c, 0x1, 
       0x2, 0x4ee, 0x4ef, 0x5, 0x98, 0x4d, 0x2, 0x4ef, 0x4f4, 0x3, 0x2, 
       0x2, 0x2, 0x4f0, 0x4f1, 0xc, 0x3, 0x2, 0x2, 0x4f1, 0x4f3, 0x5, 0x98, 
       0x4d, 0x2, 0x4f2, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4f6, 0x3, 0x2, 
       0x2, 0x2, 0x4f4, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4f5, 0x3, 0x2, 
       0x2, 0x2, 0x4f5, 0x97, 0x3, 0x2, 0x2, 0x2, 0x4f6, 0x4f4, 0x3, 0x2, 
       0x2, 0x2, 0x4f7, 0x502, 0x5, 0x9a, 0x4e, 0x2, 0x4f8, 0x502, 0x5, 
       0x12e, 0x98, 0x2, 0x4f9, 0x502, 0x5, 0x176, 0xbc, 0x2, 0x4fa, 0x502, 
       0x5, 0x18a, 0xc6, 0x2, 0x4fb, 0x502, 0x5, 0x18c, 0xc7, 0x2, 0x4fc, 
       0x502, 0x5, 0xec, 0x77, 0x2, 0x4fd, 0x502, 0x5, 0xd6, 0x6c, 0x2, 
       0x4fe, 0x502, 0x5, 0xa2, 0x52, 0x2, 0x4ff, 0x502, 0x5, 0xa4, 0x53, 
       0x2, 0x500, 0x502, 0x5, 0x1a2, 0xd2, 0x2, 0x501, 0x4f7, 0x3, 0x2, 
       0x2, 0x2, 0x501, 0x4f8, 0x3, 0x2, 0x2, 0x2, 0x501, 0x4f9, 0x3, 0x2, 
       0x2, 0x2, 0x501, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x501, 0x4fb, 0x3, 0x2, 
       0x2, 0x2, 0x501, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x501, 0x4fd, 0x3, 0x2, 
       0x2, 0x2, 0x501, 0x4fe, 0x3, 0x2, 0x2, 0x2, 0x501, 0x4ff, 0x3, 0x2, 
       0x2, 0x2, 0x501, 0x500, 0x3, 0x2, 0x2, 0x2, 0x502, 0x99, 0x3, 0x2, 
       0x2, 0x2, 0x503, 0x50c, 0x5, 0x9e, 0x50, 0x2, 0x504, 0x50c, 0x5, 
       0xea, 0x76, 0x2, 0x505, 0x50c, 0x5, 0xe2, 0x72, 0x2, 0x506, 0x50c, 
       0x5, 0xe6, 0x74, 0x2, 0x507, 0x50c, 0x5, 0xe8, 0x75, 0x2, 0x508, 
       0x50c, 0x5, 0xa0, 0x51, 0x2, 0x509, 0x50c, 0x5, 0x9c, 0x4f, 0x2, 
       0x50a, 0x50c, 0x5, 0xc6, 0x64, 0x2, 0x50b, 0x503, 0x3, 0x2, 0x2, 
       0x2, 0x50b, 0x504, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x505, 0x3, 0x2, 0x2, 
       0x2, 0x50b, 0x506, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x507, 0x3, 0x2, 0x2, 
       0x2, 0x50b, 0x508, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x509, 0x3, 0x2, 0x2, 
       0x2, 0x50b, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x9b, 0x3, 0x2, 0x2, 
       0x2, 0x50d, 0x50e, 0x7, 0x59, 0x2, 0x2, 0x50e, 0x510, 0x7, 0x90, 
       0x2, 0x2, 0x50f, 0x511, 0x5, 0xee, 0x78, 0x2, 0x510, 0x50f, 0x3, 
       0x2, 0x2, 0x2, 0x510, 0x511, 0x3, 0x2, 0x2, 0x2, 0x511, 0x512, 0x3, 
       0x2, 0x2, 0x2, 0x512, 0x513, 0x7, 0x6f, 0x2, 0x2, 0x513, 0x514, 0x5, 
       0x11c, 0x8f, 0x2, 0x514, 0x515, 0x7, 0x8c, 0x2, 0x2, 0x515, 0x9d, 
       0x3, 0x2, 0x2, 0x2, 0x516, 0x518, 0x5, 0xa8, 0x55, 0x2, 0x517, 0x516, 
       0x3, 0x2, 0x2, 0x2, 0x517, 0x518, 0x3, 0x2, 0x2, 0x2, 0x518, 0x51a, 
       0x3, 0x2, 0x2, 0x2, 0x519, 0x51b, 0x5, 0x104, 0x83, 0x2, 0x51a, 0x519, 
       0x3, 0x2, 0x2, 0x2, 0x51a, 0x51b, 0x3, 0x2, 0x2, 0x2, 0x51b, 0x51c, 
       0x3, 0x2, 0x2, 0x2, 0x51c, 0x525, 0x7, 0x8c, 0x2, 0x2, 0x51d, 0x51f, 
       0x5, 0xee, 0x78, 0x2, 0x51e, 0x520, 0x5, 0xa8, 0x55, 0x2, 0x51f, 
       0x51e, 0x3, 0x2, 0x2, 0x2, 0x51f, 0x520, 0x3, 0x2, 0x2, 0x2, 0x520, 
       0x521, 0x3, 0x2, 0x2, 0x2, 0x521, 0x522, 0x5, 0x104, 0x83, 0x2, 0x522, 
       0x523, 0x7, 0x8c, 0x2, 0x2, 0x523, 0x525, 0x3, 0x2, 0x2, 0x2, 0x524, 
       0x517, 0x3, 0x2, 0x2, 0x2, 0x524, 0x51d, 0x3, 0x2, 0x2, 0x2, 0x525, 
       0x9f, 0x3, 0x2, 0x2, 0x2, 0x526, 0x527, 0x7, 0x4a, 0x2, 0x2, 0x527, 
       0x528, 0x7, 0x5f, 0x2, 0x2, 0x528, 0x529, 0x5, 0x7a, 0x3e, 0x2, 0x529, 
       0x52a, 0x7, 0x86, 0x2, 0x2, 0x52a, 0x52b, 0x7, 0x99, 0x2, 0x2, 0x52b, 
       0x52c, 0x7, 0x60, 0x2, 0x2, 0x52c, 0x52d, 0x7, 0x8c, 0x2, 0x2, 0x52d, 
       0xa1, 0x3, 0x2, 0x2, 0x2, 0x52e, 0x52f, 0x7, 0x8c, 0x2, 0x2, 0x52f, 
       0xa3, 0x3, 0x2, 0x2, 0x2, 0x530, 0x531, 0x5, 0xee, 0x78, 0x2, 0x531, 
       0x532, 0x7, 0x8c, 0x2, 0x2, 0x532, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x533, 
       0x53a, 0x5, 0xaa, 0x56, 0x2, 0x534, 0x53a, 0x5, 0xb0, 0x59, 0x2, 
       0x535, 0x53a, 0x5, 0xac, 0x57, 0x2, 0x536, 0x53a, 0x7, 0x33, 0x2, 
       0x2, 0x537, 0x53a, 0x7, 0x54, 0x2, 0x2, 0x538, 0x53a, 0x7, 0x21, 
       0x2, 0x2, 0x539, 0x533, 0x3, 0x2, 0x2, 0x2, 0x539, 0x534, 0x3, 0x2, 
       0x2, 0x2, 0x539, 0x535, 0x3, 0x2, 0x2, 0x2, 0x539, 0x536, 0x3, 0x2, 
       0x2, 0x2, 0x539, 0x537, 0x3, 0x2, 0x2, 0x2, 0x539, 0x538, 0x3, 0x2, 
       0x2, 0x2, 0x53a, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x53d, 0x5, 0xa6, 
       0x54, 0x2, 0x53c, 0x53e, 0x5, 0xee, 0x78, 0x2, 0x53d, 0x53c, 0x3, 
       0x2, 0x2, 0x2, 0x53d, 0x53e, 0x3, 0x2, 0x2, 0x2, 0x53e, 0x543, 0x3, 
       0x2, 0x2, 0x2, 0x53f, 0x540, 0x5, 0xa6, 0x54, 0x2, 0x540, 0x541, 
       0x5, 0xa8, 0x55, 0x2, 0x541, 0x543, 0x3, 0x2, 0x2, 0x2, 0x542, 0x53b, 
       0x3, 0x2, 0x2, 0x2, 0x542, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x543, 0xa9, 
       0x3, 0x2, 0x2, 0x2, 0x544, 0x545, 0x9, 0x6, 0x2, 0x2, 0x545, 0xab, 
       0x3, 0x2, 0x2, 0x2, 0x546, 0x547, 0x9, 0x7, 0x2, 0x2, 0x547, 0xad, 
       0x3, 0x2, 0x2, 0x2, 0x548, 0x549, 0x7, 0x90, 0x2, 0x2, 0x549, 0xaf, 
       0x3, 0x2, 0x2, 0x2, 0x54a, 0x54f, 0x5, 0xb2, 0x5a, 0x2, 0x54b, 0x54f, 
       0x5, 0x13e, 0xa0, 0x2, 0x54c, 0x54f, 0x5, 0xc2, 0x62, 0x2, 0x54d, 
       0x54f, 0x5, 0xc, 0x7, 0x2, 0x54e, 0x54a, 0x3, 0x2, 0x2, 0x2, 0x54e, 
       0x54b, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x54c, 0x3, 0x2, 0x2, 0x2, 0x54e, 
       0x54d, 0x3, 0x2, 0x2, 0x2, 0x54f, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x550, 
       0x555, 0x5, 0xb8, 0x5d, 0x2, 0x551, 0x555, 0x5, 0xbe, 0x60, 0x2, 
       0x552, 0x555, 0x5, 0x188, 0xc5, 0x2, 0x553, 0x555, 0x5, 0x116, 0x8c, 
       0x2, 0x554, 0x550, 0x3, 0x2, 0x2, 0x2, 0x554, 0x551, 0x3, 0x2, 0x2, 
       0x2, 0x554, 0x552, 0x3, 0x2, 0x2, 0x2, 0x554, 0x553, 0x3, 0x2, 0x2, 
       0x2, 0x555, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x556, 0x558, 0x5, 0xb0, 0x59, 
       0x2, 0x557, 0x559, 0x5, 0xee, 0x78, 0x2, 0x558, 0x557, 0x3, 0x2, 
       0x2, 0x2, 0x558, 0x559, 0x3, 0x2, 0x2, 0x2, 0x559, 0x55e, 0x3, 0x2, 
       0x2, 0x2, 0x55a, 0x55b, 0x5, 0xb0, 0x59, 0x2, 0x55b, 0x55c, 0x5, 
       0xb4, 0x5b, 0x2, 0x55c, 0x55e, 0x3, 0x2, 0x2, 0x2, 0x55d, 0x556, 
       0x3, 0x2, 0x2, 0x2, 0x55d, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x55e, 0xb5, 
       0x3, 0x2, 0x2, 0x2, 0x55f, 0x561, 0x5, 0xb2, 0x5a, 0x2, 0x560, 0x562, 
       0x5, 0xee, 0x78, 0x2, 0x561, 0x560, 0x3, 0x2, 0x2, 0x2, 0x561, 0x562, 
       0x3, 0x2, 0x2, 0x2, 0x562, 0x567, 0x3, 0x2, 0x2, 0x2, 0x563, 0x564, 
       0x5, 0xb2, 0x5a, 0x2, 0x564, 0x565, 0x5, 0xb6, 0x5c, 0x2, 0x565, 
       0x567, 0x3, 0x2, 0x2, 0x2, 0x566, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x566, 
       0x563, 0x3, 0x2, 0x2, 0x2, 0x567, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x568, 
       0x56a, 0x5, 0x26, 0x14, 0x2, 0x569, 0x568, 0x3, 0x2, 0x2, 0x2, 0x569, 
       0x56a, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x56b, 0x3, 0x2, 0x2, 0x2, 0x56b, 
       0x580, 0x5, 0xba, 0x5e, 0x2, 0x56c, 0x56d, 0x5, 0x26, 0x14, 0x2, 
       0x56d, 0x56e, 0x7, 0x4e, 0x2, 0x2, 0x56e, 0x56f, 0x5, 0x17e, 0xc0, 
       0x2, 0x56f, 0x580, 0x3, 0x2, 0x2, 0x2, 0x570, 0x580, 0x7, 0x1c, 0x2, 
       0x2, 0x571, 0x580, 0x7, 0x1d, 0x2, 0x2, 0x572, 0x580, 0x7, 0x1e, 
       0x2, 0x2, 0x573, 0x580, 0x7, 0x5d, 0x2, 0x2, 0x574, 0x580, 0x7, 0x18, 
       0x2, 0x2, 0x575, 0x580, 0x7, 0x46, 0x2, 0x2, 0x576, 0x580, 0x7, 0x37, 
       0x2, 0x2, 0x577, 0x580, 0x7, 0x38, 0x2, 0x2, 0x578, 0x580, 0x7, 0x47, 
       0x2, 0x2, 0x579, 0x580, 0x7, 0x58, 0x2, 0x2, 0x57a, 0x580, 0x7, 0x31, 
       0x2, 0x2, 0x57b, 0x580, 0x7, 0x28, 0x2, 0x2, 0x57c, 0x580, 0x7, 0x5b, 
       0x2, 0x2, 0x57d, 0x580, 0x7, 0x17, 0x2, 0x2, 0x57e, 0x580, 0x5, 0xbc, 
       0x5f, 0x2, 0x57f, 0x569, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x56c, 0x3, 0x2, 
       0x2, 0x2, 0x57f, 0x570, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x571, 0x3, 0x2, 
       0x2, 0x2, 0x57f, 0x572, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x573, 0x3, 0x2, 
       0x2, 0x2, 0x57f, 0x574, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x575, 0x3, 0x2, 
       0x2, 0x2, 0x57f, 0x576, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x577, 0x3, 0x2, 
       0x2, 0x2, 0x57f, 0x578, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x579, 0x3, 0x2, 
       0x2, 0x2, 0x57f, 0x57a, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x57b, 0x3, 0x2, 
       0x2, 0x2, 0x57f, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x57d, 0x3, 0x2, 
       0x2, 0x2, 0x57f, 0x57e, 0x3, 0x2, 0x2, 0x2, 0x580, 0xb9, 0x3, 0x2, 
       0x2, 0x2, 0x581, 0x586, 0x5, 0x13c, 0x9f, 0x2, 0x582, 0x586, 0x5, 
       0xc0, 0x61, 0x2, 0x583, 0x586, 0x5, 0xae, 0x58, 0x2, 0x584, 0x586, 
       0x5, 0x17e, 0xc0, 0x2, 0x585, 0x581, 0x3, 0x2, 0x2, 0x2, 0x585, 0x582, 
       0x3, 0x2, 0x2, 0x2, 0x585, 0x583, 0x3, 0x2, 0x2, 0x2, 0x585, 0x584, 
       0x3, 0x2, 0x2, 0x2, 0x586, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x587, 0x588, 
       0x7, 0x24, 0x2, 0x2, 0x588, 0x589, 0x7, 0x5f, 0x2, 0x2, 0x589, 0x58a, 
       0x5, 0x78, 0x3d, 0x2, 0x58a, 0x58b, 0x7, 0x60, 0x2, 0x2, 0x58b, 0x591, 
       0x3, 0x2, 0x2, 0x2, 0x58c, 0x58d, 0x7, 0x24, 0x2, 0x2, 0x58d, 0x58e, 
       0x7, 0x5f, 0x2, 0x2, 0x58e, 0x58f, 0x7, 0x17, 0x2, 0x2, 0x58f, 0x591, 
       0x7, 0x60, 0x2, 0x2, 0x590, 0x587, 0x3, 0x2, 0x2, 0x2, 0x590, 0x58c, 
       0x3, 0x2, 0x2, 0x2, 0x591, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x592, 0x594, 
       0x5, 0x146, 0xa4, 0x2, 0x593, 0x595, 0x5, 0xee, 0x78, 0x2, 0x594, 
       0x593, 0x3, 0x2, 0x2, 0x2, 0x594, 0x595, 0x3, 0x2, 0x2, 0x2, 0x595, 
       0x597, 0x3, 0x2, 0x2, 0x2, 0x596, 0x598, 0x5, 0x26, 0x14, 0x2, 0x597, 
       0x596, 0x3, 0x2, 0x2, 0x2, 0x597, 0x598, 0x3, 0x2, 0x2, 0x2, 0x598, 
       0x599, 0x3, 0x2, 0x2, 0x2, 0x599, 0x59a, 0x7, 0x90, 0x2, 0x2, 0x59a, 
       0x5ab, 0x3, 0x2, 0x2, 0x2, 0x59b, 0x59c, 0x5, 0x146, 0xa4, 0x2, 0x59c, 
       0x59d, 0x5, 0x17e, 0xc0, 0x2, 0x59d, 0x5ab, 0x3, 0x2, 0x2, 0x2, 0x59e, 
       0x59f, 0x5, 0x146, 0xa4, 0x2, 0x59f, 0x5a1, 0x5, 0x26, 0x14, 0x2, 
       0x5a0, 0x5a2, 0x7, 0x4e, 0x2, 0x2, 0x5a1, 0x5a0, 0x3, 0x2, 0x2, 0x2, 
       0x5a1, 0x5a2, 0x3, 0x2, 0x2, 0x2, 0x5a2, 0x5a3, 0x3, 0x2, 0x2, 0x2, 
       0x5a3, 0x5a4, 0x5, 0x17e, 0xc0, 0x2, 0x5a4, 0x5ab, 0x3, 0x2, 0x2, 
       0x2, 0x5a5, 0x5a7, 0x7, 0x2b, 0x2, 0x2, 0x5a6, 0x5a8, 0x5, 0x26, 
       0x14, 0x2, 0x5a7, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5a8, 0x3, 0x2, 
       0x2, 0x2, 0x5a8, 0x5a9, 0x3, 0x2, 0x2, 0x2, 0x5a9, 0x5ab, 0x7, 0x90, 
       0x2, 0x2, 0x5aa, 0x592, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x59b, 0x3, 0x2, 
       0x2, 0x2, 0x5aa, 0x59e, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5a5, 0x3, 0x2, 
       0x2, 0x2, 0x5ab, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5ad, 0x7, 0x90, 
       0x2, 0x2, 0x5ad, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x5ae, 0x5af, 0x5, 0xc4, 
       0x63, 0x2, 0x5af, 0x5b1, 0x7, 0x63, 0x2, 0x2, 0x5b0, 0x5b2, 0x5, 
       0xcc, 0x67, 0x2, 0x5b1, 0x5b0, 0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5b2, 
       0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5b3, 0x3, 0x2, 0x2, 0x2, 0x5b3, 0x5b4, 
       0x7, 0x64, 0x2, 0x2, 0x5b4, 0x5bc, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b6, 
       0x5, 0xc4, 0x63, 0x2, 0x5b6, 0x5b7, 0x7, 0x63, 0x2, 0x2, 0x5b7, 0x5b8, 
       0x5, 0xcc, 0x67, 0x2, 0x5b8, 0x5b9, 0x7, 0x86, 0x2, 0x2, 0x5b9, 0x5ba, 
       0x7, 0x64, 0x2, 0x2, 0x5ba, 0x5bc, 0x3, 0x2, 0x2, 0x2, 0x5bb, 0x5ae, 
       0x3, 0x2, 0x2, 0x2, 0x5bb, 0x5b5, 0x3, 0x2, 0x2, 0x2, 0x5bc, 0xc3, 
       0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5bf, 0x5, 0xc8, 0x65, 0x2, 0x5be, 0x5c0, 
       0x5, 0xee, 0x78, 0x2, 0x5bf, 0x5be, 0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5c0, 
       0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5c3, 
       0x7, 0x90, 0x2, 0x2, 0x5c2, 0x5c1, 0x3, 0x2, 0x2, 0x2, 0x5c2, 0x5c3, 
       0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5c6, 
       0x5, 0xca, 0x66, 0x2, 0x5c5, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5c6, 
       0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5c7, 0x5c9, 
       0x5, 0xc8, 0x65, 0x2, 0x5c8, 0x5ca, 0x5, 0xee, 0x78, 0x2, 0x5c9, 
       0x5c8, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0x5ca, 
       0x5cb, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5cc, 0x5, 0x26, 0x14, 0x2, 0x5cc, 
       0x5ce, 0x7, 0x90, 0x2, 0x2, 0x5cd, 0x5cf, 0x5, 0xca, 0x66, 0x2, 0x5ce, 
       0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5cf, 
       0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5d0, 
       0x5c7, 0x3, 0x2, 0x2, 0x2, 0x5d1, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x5d2, 
       0x5d4, 0x5, 0xc8, 0x65, 0x2, 0x5d3, 0x5d5, 0x5, 0xee, 0x78, 0x2, 
       0x5d4, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d5, 0x3, 0x2, 0x2, 0x2, 
       0x5d5, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d6, 0x5d8, 0x7, 0x90, 0x2, 0x2, 
       0x5d7, 0x5d9, 0x5, 0xca, 0x66, 0x2, 0x5d8, 0x5d7, 0x3, 0x2, 0x2, 
       0x2, 0x5d8, 0x5d9, 0x3, 0x2, 0x2, 0x2, 0x5d9, 0x5da, 0x3, 0x2, 0x2, 
       0x2, 0x5da, 0x5db, 0x7, 0x8c, 0x2, 0x2, 0x5db, 0xc7, 0x3, 0x2, 0x2, 
       0x2, 0x5dc, 0x5e2, 0x7, 0x2b, 0x2, 0x2, 0x5dd, 0x5de, 0x7, 0x2b, 
       0x2, 0x2, 0x5de, 0x5e2, 0x7, 0x1f, 0x2, 0x2, 0x5df, 0x5e0, 0x7, 0x2b, 
       0x2, 0x2, 0x5e0, 0x5e2, 0x7, 0x4c, 0x2, 0x2, 0x5e1, 0x5dc, 0x3, 0x2, 
       0x2, 0x2, 0x5e1, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5df, 0x3, 0x2, 
       0x2, 0x2, 0x5e2, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0x5e4, 0x7, 0x8a, 
       0x2, 0x2, 0x5e4, 0x5e5, 0x5, 0xb4, 0x5b, 0x2, 0x5e5, 0xcb, 0x3, 0x2, 
       0x2, 0x2, 0x5e6, 0x5e7, 0x8, 0x67, 0x1, 0x2, 0x5e7, 0x5e8, 0x5, 0xce, 
       0x68, 0x2, 0x5e8, 0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5e9, 0x5ea, 0xc, 0x3, 
       0x2, 0x2, 0x5ea, 0x5eb, 0x7, 0x86, 0x2, 0x2, 0x5eb, 0x5ed, 0x5, 0xce, 
       0x68, 0x2, 0x5ec, 0x5e9, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5f0, 0x3, 0x2, 
       0x2, 0x2, 0x5ee, 0x5ec, 0x3, 0x2, 0x2, 0x2, 0x5ee, 0x5ef, 0x3, 0x2, 
       0x2, 0x2, 0x5ef, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x5f0, 0x5ee, 0x3, 0x2, 
       0x2, 0x2, 0x5f1, 0x5f7, 0x5, 0xd0, 0x69, 0x2, 0x5f2, 0x5f3, 0x5, 
       0xd0, 0x69, 0x2, 0x5f3, 0x5f4, 0x7, 0x6f, 0x2, 0x2, 0x5f4, 0x5f5, 
       0x5, 0x7a, 0x3e, 0x2, 0x5f5, 0x5f7, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5f1, 
       0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5f2, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0xcf, 
       0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5f9, 0x7, 0x90, 0x2, 0x2, 0x5f9, 0xd1, 
       0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fd, 0x5, 0xd4, 0x6b, 0x2, 0x5fb, 0x5fd, 
       0x5, 0xe0, 0x71, 0x2, 0x5fc, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fc, 0x5fb, 
       0x3, 0x2, 0x2, 0x2, 0x5fd, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x5fe, 0x5ff, 
       0x7, 0x90, 0x2, 0x2, 0x5ff, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x600, 0x603, 
       0x5, 0xd8, 0x6d, 0x2, 0x601, 0x603, 0x5, 0xdc, 0x6f, 0x2, 0x602, 
       0x600, 0x3, 0x2, 0x2, 0x2, 0x602, 0x601, 0x3, 0x2, 0x2, 0x2, 0x603, 
       0xd7, 0x3, 0x2, 0x2, 0x2, 0x604, 0x605, 0x5, 0xda, 0x6e, 0x2, 0x605, 
       0xd9, 0x3, 0x2, 0x2, 0x2, 0x606, 0x608, 0x7, 0x36, 0x2, 0x2, 0x607, 
       0x606, 0x3, 0x2, 0x2, 0x2, 0x607, 0x608, 0x3, 0x2, 0x2, 0x2, 0x608, 
       0x609, 0x3, 0x2, 0x2, 0x2, 0x609, 0x60a, 0x7, 0x3a, 0x2, 0x2, 0x60a, 
       0x60b, 0x7, 0x90, 0x2, 0x2, 0x60b, 0x60c, 0x7, 0x63, 0x2, 0x2, 0x60c, 
       0x60d, 0x5, 0xde, 0x70, 0x2, 0x60d, 0x60e, 0x7, 0x64, 0x2, 0x2, 0x60e, 
       0xdb, 0x3, 0x2, 0x2, 0x2, 0x60f, 0x611, 0x7, 0x36, 0x2, 0x2, 0x610, 
       0x60f, 0x3, 0x2, 0x2, 0x2, 0x610, 0x611, 0x3, 0x2, 0x2, 0x2, 0x611, 
       0x612, 0x3, 0x2, 0x2, 0x2, 0x612, 0x613, 0x7, 0x3a, 0x2, 0x2, 0x613, 
       0x614, 0x7, 0x63, 0x2, 0x2, 0x614, 0x615, 0x5, 0xde, 0x70, 0x2, 0x615, 
       0x616, 0x7, 0x64, 0x2, 0x2, 0x616, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x617, 
       0x619, 0x5, 0x96, 0x4c, 0x2, 0x618, 0x617, 0x3, 0x2, 0x2, 0x2, 0x618, 
       0x619, 0x3, 0x2, 0x2, 0x2, 0x619, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x61a, 
       0x61b, 0x7, 0x90, 0x2, 0x2, 0x61b, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x61c, 
       0x61d, 0x7, 0x3a, 0x2, 0x2, 0x61d, 0x61e, 0x7, 0x90, 0x2, 0x2, 0x61e, 
       0x61f, 0x7, 0x6f, 0x2, 0x2, 0x61f, 0x620, 0x5, 0xe4, 0x73, 0x2, 0x620, 
       0x621, 0x7, 0x8c, 0x2, 0x2, 0x621, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x622, 
       0x624, 0x5, 0x26, 0x14, 0x2, 0x623, 0x622, 0x3, 0x2, 0x2, 0x2, 0x623, 
       0x624, 0x3, 0x2, 0x2, 0x2, 0x624, 0x625, 0x3, 0x2, 0x2, 0x2, 0x625, 
       0x626, 0x5, 0xd2, 0x6a, 0x2, 0x626, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x627, 
       0x629, 0x7, 0x59, 0x2, 0x2, 0x628, 0x62a, 0x7, 0x56, 0x2, 0x2, 0x629, 
       0x628, 0x3, 0x2, 0x2, 0x2, 0x629, 0x62a, 0x3, 0x2, 0x2, 0x2, 0x62a, 
       0x62b, 0x3, 0x2, 0x2, 0x2, 0x62b, 0x62c, 0x5, 0x26, 0x14, 0x2, 0x62c, 
       0x62d, 0x5, 0x22, 0x12, 0x2, 0x62d, 0x62e, 0x7, 0x8c, 0x2, 0x2, 0x62e, 
       0x635, 0x3, 0x2, 0x2, 0x2, 0x62f, 0x630, 0x7, 0x59, 0x2, 0x2, 0x630, 
       0x631, 0x7, 0x8b, 0x2, 0x2, 0x631, 0x632, 0x5, 0x22, 0x12, 0x2, 0x632, 
       0x633, 0x7, 0x8c, 0x2, 0x2, 0x633, 0x635, 0x3, 0x2, 0x2, 0x2, 0x634, 
       0x627, 0x3, 0x2, 0x2, 0x2, 0x634, 0x62f, 0x3, 0x2, 0x2, 0x2, 0x635, 
       0xe7, 0x3, 0x2, 0x2, 0x2, 0x636, 0x638, 0x5, 0xee, 0x78, 0x2, 0x637, 
       0x636, 0x3, 0x2, 0x2, 0x2, 0x637, 0x638, 0x3, 0x2, 0x2, 0x2, 0x638, 
       0x639, 0x3, 0x2, 0x2, 0x2, 0x639, 0x63a, 0x7, 0x59, 0x2, 0x2, 0x63a, 
       0x63c, 0x7, 0x3a, 0x2, 0x2, 0x63b, 0x63d, 0x5, 0x26, 0x14, 0x2, 0x63c, 
       0x63b, 0x3, 0x2, 0x2, 0x2, 0x63c, 0x63d, 0x3, 0x2, 0x2, 0x2, 0x63d, 
       0x63e, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x63f, 0x5, 0xd2, 0x6a, 0x2, 0x63f, 
       0x640, 0x7, 0x8c, 0x2, 0x2, 0x640, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x641, 
       0x642, 0x7, 0x16, 0x2, 0x2, 0x642, 0x643, 0x7, 0x5f, 0x2, 0x2, 0x643, 
       0x644, 0x7, 0x99, 0x2, 0x2, 0x644, 0x645, 0x7, 0x60, 0x2, 0x2, 0x645, 
       0x646, 0x7, 0x8c, 0x2, 0x2, 0x646, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x647, 
       0x648, 0x7, 0x2e, 0x2, 0x2, 0x648, 0x649, 0x7, 0x99, 0x2, 0x2, 0x649, 
       0x64b, 0x7, 0x63, 0x2, 0x2, 0x64a, 0x64c, 0x5, 0x96, 0x4c, 0x2, 0x64b, 
       0x64a, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x64c, 0x3, 0x2, 0x2, 0x2, 0x64c, 
       0x64d, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x652, 0x7, 0x64, 0x2, 0x2, 0x64e, 
       0x64f, 0x7, 0x2e, 0x2, 0x2, 0x64f, 0x650, 0x7, 0x99, 0x2, 0x2, 0x650, 
       0x652, 0x5, 0x98, 0x4d, 0x2, 0x651, 0x647, 0x3, 0x2, 0x2, 0x2, 0x651, 
       0x64e, 0x3, 0x2, 0x2, 0x2, 0x652, 0xed, 0x3, 0x2, 0x2, 0x2, 0x653, 
       0x654, 0x8, 0x78, 0x1, 0x2, 0x654, 0x655, 0x5, 0xf0, 0x79, 0x2, 0x655, 
       0x65a, 0x3, 0x2, 0x2, 0x2, 0x656, 0x657, 0xc, 0x3, 0x2, 0x2, 0x657, 
       0x659, 0x5, 0xf0, 0x79, 0x2, 0x658, 0x656, 0x3, 0x2, 0x2, 0x2, 0x659, 
       0x65c, 0x3, 0x2, 0x2, 0x2, 0x65a, 0x658, 0x3, 0x2, 0x2, 0x2, 0x65a, 
       0x65b, 0x3, 0x2, 0x2, 0x2, 0x65b, 0xef, 0x3, 0x2, 0x2, 0x2, 0x65c, 
       0x65a, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x65e, 0x7, 0x61, 0x2, 0x2, 0x65e, 
       0x65f, 0x7, 0x61, 0x2, 0x2, 0x65f, 0x660, 0x5, 0xf4, 0x7b, 0x2, 0x660, 
       0x661, 0x7, 0x62, 0x2, 0x2, 0x661, 0x662, 0x7, 0x62, 0x2, 0x2, 0x662, 
       0x665, 0x3, 0x2, 0x2, 0x2, 0x663, 0x665, 0x5, 0xf2, 0x7a, 0x2, 0x664, 
       0x65d, 0x3, 0x2, 0x2, 0x2, 0x664, 0x663, 0x3, 0x2, 0x2, 0x2, 0x665, 
       0xf1, 0x3, 0x2, 0x2, 0x2, 0x666, 0x667, 0x7, 0x14, 0x2, 0x2, 0x667, 
       0x668, 0x7, 0x5f, 0x2, 0x2, 0x668, 0x66a, 0x5, 0x11c, 0x8f, 0x2, 
       0x669, 0x66b, 0x7, 0x8f, 0x2, 0x2, 0x66a, 0x669, 0x3, 0x2, 0x2, 0x2, 
       0x66a, 0x66b, 0x3, 0x2, 0x2, 0x2, 0x66b, 0x66c, 0x3, 0x2, 0x2, 0x2, 
       0x66c, 0x66d, 0x7, 0x60, 0x2, 0x2, 0x66d, 0x677, 0x3, 0x2, 0x2, 0x2, 
       0x66e, 0x66f, 0x7, 0x14, 0x2, 0x2, 0x66f, 0x670, 0x7, 0x5f, 0x2, 
       0x2, 0x670, 0x672, 0x5, 0x7a, 0x3e, 0x2, 0x671, 0x673, 0x7, 0x8f, 
       0x2, 0x2, 0x672, 0x671, 0x3, 0x2, 0x2, 0x2, 0x672, 0x673, 0x3, 0x2, 
       0x2, 0x2, 0x673, 0x674, 0x3, 0x2, 0x2, 0x2, 0x674, 0x675, 0x7, 0x60, 
       0x2, 0x2, 0x675, 0x677, 0x3, 0x2, 0x2, 0x2, 0x676, 0x666, 0x3, 0x2, 
       0x2, 0x2, 0x676, 0x66e, 0x3, 0x2, 0x2, 0x2, 0x677, 0xf3, 0x3, 0x2, 
       0x2, 0x2, 0x678, 0x67a, 0x8, 0x7b, 0x1, 0x2, 0x679, 0x67b, 0x5, 0xf6, 
       0x7c, 0x2, 0x67a, 0x679, 0x3, 0x2, 0x2, 0x2, 0x67a, 0x67b, 0x3, 0x2, 
       0x2, 0x2, 0x67b, 0x680, 0x3, 0x2, 0x2, 0x2, 0x67c, 0x67d, 0x5, 0xf6, 
       0x7c, 0x2, 0x67d, 0x67e, 0x7, 0x8f, 0x2, 0x2, 0x67e, 0x680, 0x3, 
       0x2, 0x2, 0x2, 0x67f, 0x678, 0x3, 0x2, 0x2, 0x2, 0x67f, 0x67c, 0x3, 
       0x2, 0x2, 0x2, 0x680, 0x68d, 0x3, 0x2, 0x2, 0x2, 0x681, 0x682, 0xc, 
       0x5, 0x2, 0x2, 0x682, 0x684, 0x7, 0x86, 0x2, 0x2, 0x683, 0x685, 0x5, 
       0xf6, 0x7c, 0x2, 0x684, 0x683, 0x3, 0x2, 0x2, 0x2, 0x684, 0x685, 
       0x3, 0x2, 0x2, 0x2, 0x685, 0x68c, 0x3, 0x2, 0x2, 0x2, 0x686, 0x687, 
       0xc, 0x3, 0x2, 0x2, 0x687, 0x688, 0x7, 0x86, 0x2, 0x2, 0x688, 0x689, 
       0x5, 0xf6, 0x7c, 0x2, 0x689, 0x68a, 0x7, 0x8f, 0x2, 0x2, 0x68a, 0x68c, 
       0x3, 0x2, 0x2, 0x2, 0x68b, 0x681, 0x3, 0x2, 0x2, 0x2, 0x68b, 0x686, 
       0x3, 0x2, 0x2, 0x2, 0x68c, 0x68f, 0x3, 0x2, 0x2, 0x2, 0x68d, 0x68b, 
       0x3, 0x2, 0x2, 0x2, 0x68d, 0x68e, 0x3, 0x2, 0x2, 0x2, 0x68e, 0xf5, 
       0x3, 0x2, 0x2, 0x2, 0x68f, 0x68d, 0x3, 0x2, 0x2, 0x2, 0x690, 0x692, 
       0x5, 0xf8, 0x7d, 0x2, 0x691, 0x693, 0x5, 0xfe, 0x80, 0x2, 0x692, 
       0x691, 0x3, 0x2, 0x2, 0x2, 0x692, 0x693, 0x3, 0x2, 0x2, 0x2, 0x693, 
       0xf7, 0x3, 0x2, 0x2, 0x2, 0x694, 0x697, 0x7, 0x90, 0x2, 0x2, 0x695, 
       0x697, 0x5, 0xfa, 0x7e, 0x2, 0x696, 0x694, 0x3, 0x2, 0x2, 0x2, 0x696, 
       0x695, 0x3, 0x2, 0x2, 0x2, 0x697, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x698, 
       0x699, 0x5, 0xfc, 0x7f, 0x2, 0x699, 0x69a, 0x7, 0x8b, 0x2, 0x2, 0x69a, 
       0x69b, 0x7, 0x90, 0x2, 0x2, 0x69b, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x69c, 
       0x69d, 0x7, 0x90, 0x2, 0x2, 0x69d, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x69e, 
       0x69f, 0x7, 0x5f, 0x2, 0x2, 0x69f, 0x6a0, 0x5, 0x100, 0x81, 0x2, 
       0x6a0, 0x6a1, 0x7, 0x60, 0x2, 0x2, 0x6a1, 0xff, 0x3, 0x2, 0x2, 0x2, 
       0x6a2, 0x6a4, 0x8, 0x81, 0x1, 0x2, 0x6a3, 0x6a5, 0x5, 0x102, 0x82, 
       0x2, 0x6a4, 0x6a3, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x6a5, 0x3, 0x2, 0x2, 
       0x2, 0x6a5, 0x6aa, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6a7, 0xc, 0x3, 0x2, 
       0x2, 0x6a7, 0x6a9, 0x5, 0x102, 0x82, 0x2, 0x6a8, 0x6a6, 0x3, 0x2, 
       0x2, 0x2, 0x6a9, 0x6ac, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6a8, 0x3, 0x2, 
       0x2, 0x2, 0x6aa, 0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x101, 0x3, 0x2, 
       0x2, 0x2, 0x6ac, 0x6aa, 0x3, 0x2, 0x2, 0x2, 0x6ad, 0x6ae, 0x7, 0x5f, 
       0x2, 0x2, 0x6ae, 0x6af, 0x5, 0x100, 0x81, 0x2, 0x6af, 0x6b0, 0x7, 
       0x60, 0x2, 0x2, 0x6b0, 0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6b1, 0x6b2, 0x7, 
       0x61, 0x2, 0x2, 0x6b2, 0x6b3, 0x5, 0x100, 0x81, 0x2, 0x6b3, 0x6b4, 
       0x7, 0x62, 0x2, 0x2, 0x6b4, 0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6b5, 0x6b6, 
       0x7, 0x63, 0x2, 0x2, 0x6b6, 0x6b7, 0x5, 0x100, 0x81, 0x2, 0x6b7, 
       0x6b8, 0x7, 0x64, 0x2, 0x2, 0x6b8, 0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6b9, 
       0x6ad, 0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6b9, 
       0x6b5, 0x3, 0x2, 0x2, 0x2, 0x6ba, 0x103, 0x3, 0x2, 0x2, 0x2, 0x6bb, 
       0x6bc, 0x8, 0x83, 0x1, 0x2, 0x6bc, 0x6bd, 0x5, 0x106, 0x84, 0x2, 
       0x6bd, 0x6c3, 0x3, 0x2, 0x2, 0x2, 0x6be, 0x6bf, 0xc, 0x3, 0x2, 0x2, 
       0x6bf, 0x6c0, 0x7, 0x86, 0x2, 0x2, 0x6c0, 0x6c2, 0x5, 0x106, 0x84, 
       0x2, 0x6c1, 0x6be, 0x3, 0x2, 0x2, 0x2, 0x6c2, 0x6c5, 0x3, 0x2, 0x2, 
       0x2, 0x6c3, 0x6c1, 0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6c4, 0x3, 0x2, 0x2, 
       0x2, 0x6c4, 0x105, 0x3, 0x2, 0x2, 0x2, 0x6c5, 0x6c3, 0x3, 0x2, 0x2, 
       0x2, 0x6c6, 0x6c8, 0x5, 0x108, 0x85, 0x2, 0x6c7, 0x6c9, 0x5, 0x132, 
       0x9a, 0x2, 0x6c8, 0x6c7, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6c9, 0x3, 0x2, 
       0x2, 0x2, 0x6c9, 0x107, 0x3, 0x2, 0x2, 0x2, 0x6ca, 0x6d0, 0x5, 0x10a, 
       0x86, 0x2, 0x6cb, 0x6cc, 0x5, 0x10c, 0x87, 0x2, 0x6cc, 0x6cd, 0x5, 
       0x10e, 0x88, 0x2, 0x6cd, 0x6ce, 0x5, 0x110, 0x89, 0x2, 0x6ce, 0x6d0, 
       0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6cb, 
       0x3, 0x2, 0x2, 0x2, 0x6d0, 0x109, 0x3, 0x2, 0x2, 0x2, 0x6d1, 0x6d6, 
       0x5, 0x10c, 0x87, 0x2, 0x6d2, 0x6d3, 0x5, 0x112, 0x8a, 0x2, 0x6d3, 
       0x6d4, 0x5, 0x10a, 0x86, 0x2, 0x6d4, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x6d5, 
       0x6d1, 0x3, 0x2, 0x2, 0x2, 0x6d5, 0x6d2, 0x3, 0x2, 0x2, 0x2, 0x6d6, 
       0x10b, 0x3, 0x2, 0x2, 0x2, 0x6d7, 0x6d8, 0x8, 0x87, 0x1, 0x2, 0x6d8, 
       0x6da, 0x5, 0x11a, 0x8e, 0x2, 0x6d9, 0x6db, 0x5, 0xee, 0x78, 0x2, 
       0x6da, 0x6d9, 0x3, 0x2, 0x2, 0x2, 0x6da, 0x6db, 0x3, 0x2, 0x2, 0x2, 
       0x6db, 0x6e1, 0x3, 0x2, 0x2, 0x2, 0x6dc, 0x6dd, 0x7, 0x5f, 0x2, 0x2, 
       0x6dd, 0x6de, 0x5, 0x10a, 0x86, 0x2, 0x6de, 0x6df, 0x7, 0x60, 0x2, 
       0x2, 0x6df, 0x6e1, 0x3, 0x2, 0x2, 0x2, 0x6e0, 0x6d7, 0x3, 0x2, 0x2, 
       0x2, 0x6e0, 0x6dc, 0x3, 0x2, 0x2, 0x2, 0x6e1, 0x6ef, 0x3, 0x2, 0x2, 
       0x2, 0x6e2, 0x6e3, 0xc, 0x5, 0x2, 0x2, 0x6e3, 0x6ee, 0x5, 0x10e, 
       0x88, 0x2, 0x6e4, 0x6e5, 0xc, 0x4, 0x2, 0x2, 0x6e5, 0x6e7, 0x7, 0x61, 
       0x2, 0x2, 0x6e6, 0x6e8, 0x5, 0x7a, 0x3e, 0x2, 0x6e7, 0x6e6, 0x3, 
       0x2, 0x2, 0x2, 0x6e7, 0x6e8, 0x3, 0x2, 0x2, 0x2, 0x6e8, 0x6e9, 0x3, 
       0x2, 0x2, 0x2, 0x6e9, 0x6eb, 0x7, 0x62, 0x2, 0x2, 0x6ea, 0x6ec, 0x5, 
       0xee, 0x78, 0x2, 0x6eb, 0x6ea, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6ec, 
       0x3, 0x2, 0x2, 0x2, 0x6ec, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6e2, 
       0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6e4, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x6f1, 
       0x3, 0x2, 0x2, 0x2, 0x6ef, 0x6ed, 0x3, 0x2, 0x2, 0x2, 0x6ef, 0x6f0, 
       0x3, 0x2, 0x2, 0x2, 0x6f0, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x6f1, 0x6ef, 
       0x3, 0x2, 0x2, 0x2, 0x6f2, 0x6f3, 0x7, 0x5f, 0x2, 0x2, 0x6f3, 0x6f4, 
       0x5, 0x128, 0x95, 0x2, 0x6f4, 0x6f6, 0x7, 0x60, 0x2, 0x2, 0x6f5, 
       0x6f7, 0x5, 0x114, 0x8b, 0x2, 0x6f6, 0x6f5, 0x3, 0x2, 0x2, 0x2, 0x6f6, 
       0x6f7, 0x3, 0x2, 0x2, 0x2, 0x6f7, 0x6f9, 0x3, 0x2, 0x2, 0x2, 0x6f8, 
       0x6fa, 0x5, 0x118, 0x8d, 0x2, 0x6f9, 0x6f8, 0x3, 0x2, 0x2, 0x2, 0x6f9, 
       0x6fa, 0x3, 0x2, 0x2, 0x2, 0x6fa, 0x6fc, 0x3, 0x2, 0x2, 0x2, 0x6fb, 
       0x6fd, 0x5, 0x19a, 0xce, 0x2, 0x6fc, 0x6fb, 0x3, 0x2, 0x2, 0x2, 0x6fc, 
       0x6fd, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6ff, 0x3, 0x2, 0x2, 0x2, 0x6fe, 
       0x700, 0x5, 0xee, 0x78, 0x2, 0x6ff, 0x6fe, 0x3, 0x2, 0x2, 0x2, 0x6ff, 
       0x700, 0x3, 0x2, 0x2, 0x2, 0x700, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x701, 
       0x702, 0x7, 0x88, 0x2, 0x2, 0x702, 0x704, 0x5, 0xb6, 0x5c, 0x2, 0x703, 
       0x705, 0x5, 0x11e, 0x90, 0x2, 0x704, 0x703, 0x3, 0x2, 0x2, 0x2, 0x704, 
       0x705, 0x3, 0x2, 0x2, 0x2, 0x705, 0x111, 0x3, 0x2, 0x2, 0x2, 0x706, 
       0x708, 0x7, 0x67, 0x2, 0x2, 0x707, 0x709, 0x5, 0xee, 0x78, 0x2, 0x708, 
       0x707, 0x3, 0x2, 0x2, 0x2, 0x708, 0x709, 0x3, 0x2, 0x2, 0x2, 0x709, 
       0x70b, 0x3, 0x2, 0x2, 0x2, 0x70a, 0x70c, 0x5, 0x114, 0x8b, 0x2, 0x70b, 
       0x70a, 0x3, 0x2, 0x2, 0x2, 0x70b, 0x70c, 0x3, 0x2, 0x2, 0x2, 0x70c, 
       0x71e, 0x3, 0x2, 0x2, 0x2, 0x70d, 0x70f, 0x7, 0x6b, 0x2, 0x2, 0x70e, 
       0x710, 0x5, 0xee, 0x78, 0x2, 0x70f, 0x70e, 0x3, 0x2, 0x2, 0x2, 0x70f, 
       0x710, 0x3, 0x2, 0x2, 0x2, 0x710, 0x71e, 0x3, 0x2, 0x2, 0x2, 0x711, 
       0x713, 0x7, 0xd, 0x2, 0x2, 0x712, 0x714, 0x5, 0xee, 0x78, 0x2, 0x713, 
       0x712, 0x3, 0x2, 0x2, 0x2, 0x713, 0x714, 0x3, 0x2, 0x2, 0x2, 0x714, 
       0x71e, 0x3, 0x2, 0x2, 0x2, 0x715, 0x716, 0x5, 0x26, 0x14, 0x2, 0x716, 
       0x718, 0x7, 0x67, 0x2, 0x2, 0x717, 0x719, 0x5, 0xee, 0x78, 0x2, 0x718, 
       0x717, 0x3, 0x2, 0x2, 0x2, 0x718, 0x719, 0x3, 0x2, 0x2, 0x2, 0x719, 
       0x71b, 0x3, 0x2, 0x2, 0x2, 0x71a, 0x71c, 0x5, 0x114, 0x8b, 0x2, 0x71b, 
       0x71a, 0x3, 0x2, 0x2, 0x2, 0x71b, 0x71c, 0x3, 0x2, 0x2, 0x2, 0x71c, 
       0x71e, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x706, 0x3, 0x2, 0x2, 0x2, 0x71d, 
       0x70d, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x711, 0x3, 0x2, 0x2, 0x2, 0x71d, 
       0x715, 0x3, 0x2, 0x2, 0x2, 0x71e, 0x113, 0x3, 0x2, 0x2, 0x2, 0x71f, 
       0x721, 0x5, 0x116, 0x8c, 0x2, 0x720, 0x722, 0x5, 0x114, 0x8b, 0x2, 
       0x721, 0x720, 0x3, 0x2, 0x2, 0x2, 0x721, 0x722, 0x3, 0x2, 0x2, 0x2, 
       0x722, 0x115, 0x3, 0x2, 0x2, 0x2, 0x723, 0x724, 0x9, 0x8, 0x2, 0x2, 
       0x724, 0x117, 0x3, 0x2, 0x2, 0x2, 0x725, 0x726, 0x9, 0x9, 0x2, 0x2, 
       0x726, 0x119, 0x3, 0x2, 0x2, 0x2, 0x727, 0x729, 0x7, 0x8f, 0x2, 0x2, 
       0x728, 0x727, 0x3, 0x2, 0x2, 0x2, 0x728, 0x729, 0x3, 0x2, 0x2, 0x2, 
       0x729, 0x72a, 0x3, 0x2, 0x2, 0x2, 0x72a, 0x72b, 0x5, 0x20, 0x11, 
       0x2, 0x72b, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x72c, 0x72e, 0x5, 0xb4, 0x5b, 
       0x2, 0x72d, 0x72f, 0x5, 0x11e, 0x90, 0x2, 0x72e, 0x72d, 0x3, 0x2, 
       0x2, 0x2, 0x72e, 0x72f, 0x3, 0x2, 0x2, 0x2, 0x72f, 0x11d, 0x3, 0x2, 
       0x2, 0x2, 0x730, 0x739, 0x5, 0x120, 0x91, 0x2, 0x731, 0x733, 0x5, 
       0x122, 0x92, 0x2, 0x732, 0x731, 0x3, 0x2, 0x2, 0x2, 0x732, 0x733, 
       0x3, 0x2, 0x2, 0x2, 0x733, 0x734, 0x3, 0x2, 0x2, 0x2, 0x734, 0x735, 
       0x5, 0x10e, 0x88, 0x2, 0x735, 0x736, 0x5, 0x110, 0x89, 0x2, 0x736, 
       0x739, 0x3, 0x2, 0x2, 0x2, 0x737, 0x739, 0x5, 0x124, 0x93, 0x2, 0x738, 
       0x730, 0x3, 0x2, 0x2, 0x2, 0x738, 0x732, 0x3, 0x2, 0x2, 0x2, 0x738, 
       0x737, 0x3, 0x2, 0x2, 0x2, 0x739, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x73a, 
       0x740, 0x5, 0x122, 0x92, 0x2, 0x73b, 0x73d, 0x5, 0x112, 0x8a, 0x2, 
       0x73c, 0x73e, 0x5, 0x120, 0x91, 0x2, 0x73d, 0x73c, 0x3, 0x2, 0x2, 
       0x2, 0x73d, 0x73e, 0x3, 0x2, 0x2, 0x2, 0x73e, 0x740, 0x3, 0x2, 0x2, 
       0x2, 0x73f, 0x73a, 0x3, 0x2, 0x2, 0x2, 0x73f, 0x73b, 0x3, 0x2, 0x2, 
       0x2, 0x740, 0x121, 0x3, 0x2, 0x2, 0x2, 0x741, 0x742, 0x8, 0x92, 0x1, 
       0x2, 0x742, 0x750, 0x5, 0x10e, 0x88, 0x2, 0x743, 0x745, 0x7, 0x61, 
       0x2, 0x2, 0x744, 0x746, 0x5, 0x7a, 0x3e, 0x2, 0x745, 0x744, 0x3, 
       0x2, 0x2, 0x2, 0x745, 0x746, 0x3, 0x2, 0x2, 0x2, 0x746, 0x747, 0x3, 
       0x2, 0x2, 0x2, 0x747, 0x749, 0x7, 0x62, 0x2, 0x2, 0x748, 0x74a, 0x5, 
       0xee, 0x78, 0x2, 0x749, 0x748, 0x3, 0x2, 0x2, 0x2, 0x749, 0x74a, 
       0x3, 0x2, 0x2, 0x2, 0x74a, 0x750, 0x3, 0x2, 0x2, 0x2, 0x74b, 0x74c, 
       0x7, 0x5f, 0x2, 0x2, 0x74c, 0x74d, 0x5, 0x120, 0x91, 0x2, 0x74d, 
       0x74e, 0x7, 0x60, 0x2, 0x2, 0x74e, 0x750, 0x3, 0x2, 0x2, 0x2, 0x74f, 
       0x741, 0x3, 0x2, 0x2, 0x2, 0x74f, 0x743, 0x3, 0x2, 0x2, 0x2, 0x74f, 
       0x74b, 0x3, 0x2, 0x2, 0x2, 0x750, 0x75e, 0x3, 0x2, 0x2, 0x2, 0x751, 
       0x752, 0xc, 0x7, 0x2, 0x2, 0x752, 0x75d, 0x5, 0x10e, 0x88, 0x2, 0x753, 
       0x754, 0xc, 0x5, 0x2, 0x2, 0x754, 0x756, 0x7, 0x61, 0x2, 0x2, 0x755, 
       0x757, 0x5, 0x7a, 0x3e, 0x2, 0x756, 0x755, 0x3, 0x2, 0x2, 0x2, 0x756, 
       0x757, 0x3, 0x2, 0x2, 0x2, 0x757, 0x758, 0x3, 0x2, 0x2, 0x2, 0x758, 
       0x75a, 0x7, 0x62, 0x2, 0x2, 0x759, 0x75b, 0x5, 0xee, 0x78, 0x2, 0x75a, 
       0x759, 0x3, 0x2, 0x2, 0x2, 0x75a, 0x75b, 0x3, 0x2, 0x2, 0x2, 0x75b, 
       0x75d, 0x3, 0x2, 0x2, 0x2, 0x75c, 0x751, 0x3, 0x2, 0x2, 0x2, 0x75c, 
       0x753, 0x3, 0x2, 0x2, 0x2, 0x75d, 0x760, 0x3, 0x2, 0x2, 0x2, 0x75e, 
       0x75c, 0x3, 0x2, 0x2, 0x2, 0x75e, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x75f, 
       0x123, 0x3, 0x2, 0x2, 0x2, 0x760, 0x75e, 0x3, 0x2, 0x2, 0x2, 0x761, 
       0x766, 0x5, 0x126, 0x94, 0x2, 0x762, 0x763, 0x5, 0x112, 0x8a, 0x2, 
       0x763, 0x764, 0x5, 0x124, 0x93, 0x2, 0x764, 0x766, 0x3, 0x2, 0x2, 
       0x2, 0x765, 0x761, 0x3, 0x2, 0x2, 0x2, 0x765, 0x762, 0x3, 0x2, 0x2, 
       0x2, 0x766, 0x125, 0x3, 0x2, 0x2, 0x2, 0x767, 0x768, 0x8, 0x94, 0x1, 
       0x2, 0x768, 0x769, 0x7, 0x8f, 0x2, 0x2, 0x769, 0x777, 0x3, 0x2, 0x2, 
       0x2, 0x76a, 0x76b, 0xc, 0x5, 0x2, 0x2, 0x76b, 0x776, 0x5, 0x10e, 
       0x88, 0x2, 0x76c, 0x76d, 0xc, 0x4, 0x2, 0x2, 0x76d, 0x76f, 0x7, 0x61, 
       0x2, 0x2, 0x76e, 0x770, 0x5, 0x7a, 0x3e, 0x2, 0x76f, 0x76e, 0x3, 
       0x2, 0x2, 0x2, 0x76f, 0x770, 0x3, 0x2, 0x2, 0x2, 0x770, 0x771, 0x3, 
       0x2, 0x2, 0x2, 0x771, 0x773, 0x7, 0x62, 0x2, 0x2, 0x772, 0x774, 0x5, 
       0xee, 0x78, 0x2, 0x773, 0x772, 0x3, 0x2, 0x2, 0x2, 0x773, 0x774, 
       0x3, 0x2, 0x2, 0x2, 0x774, 0x776, 0x3, 0x2, 0x2, 0x2, 0x775, 0x76a, 
       0x3, 0x2, 0x2, 0x2, 0x775, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x776, 0x779, 
       0x3, 0x2, 0x2, 0x2, 0x777, 0x775, 0x3, 0x2, 0x2, 0x2, 0x777, 0x778, 
       0x3, 0x2, 0x2, 0x2, 0x778, 0x127, 0x3, 0x2, 0x2, 0x2, 0x779, 0x777, 
       0x3, 0x2, 0x2, 0x2, 0x77a, 0x77c, 0x5, 0x12a, 0x96, 0x2, 0x77b, 0x77a, 
       0x3, 0x2, 0x2, 0x2, 0x77b, 0x77c, 0x3, 0x2, 0x2, 0x2, 0x77c, 0x77e, 
       0x3, 0x2, 0x2, 0x2, 0x77d, 0x77f, 0x7, 0x8f, 0x2, 0x2, 0x77e, 0x77d, 
       0x3, 0x2, 0x2, 0x2, 0x77e, 0x77f, 0x3, 0x2, 0x2, 0x2, 0x77f, 0x785, 
       0x3, 0x2, 0x2, 0x2, 0x780, 0x781, 0x5, 0x12a, 0x96, 0x2, 0x781, 0x782, 
       0x7, 0x86, 0x2, 0x2, 0x782, 0x783, 0x7, 0x8f, 0x2, 0x2, 0x783, 0x785, 
       0x3, 0x2, 0x2, 0x2, 0x784, 0x77b, 0x3, 0x2, 0x2, 0x2, 0x784, 0x780, 
       0x3, 0x2, 0x2, 0x2, 0x785, 0x129, 0x3, 0x2, 0x2, 0x2, 0x786, 0x787, 
       0x8, 0x96, 0x1, 0x2, 0x787, 0x788, 0x5, 0x12c, 0x97, 0x2, 0x788, 
       0x78e, 0x3, 0x2, 0x2, 0x2, 0x789, 0x78a, 0xc, 0x3, 0x2, 0x2, 0x78a, 
       0x78b, 0x7, 0x86, 0x2, 0x2, 0x78b, 0x78d, 0x5, 0x12c, 0x97, 0x2, 
       0x78c, 0x789, 0x3, 0x2, 0x2, 0x2, 0x78d, 0x790, 0x3, 0x2, 0x2, 0x2, 
       0x78e, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x78e, 0x78f, 0x3, 0x2, 0x2, 0x2, 
       0x78f, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x790, 0x78e, 0x3, 0x2, 0x2, 0x2, 
       0x791, 0x793, 0x5, 0xee, 0x78, 0x2, 0x792, 0x791, 0x3, 0x2, 0x2, 
       0x2, 0x792, 0x793, 0x3, 0x2, 0x2, 0x2, 0x793, 0x794, 0x3, 0x2, 0x2, 
       0x2, 0x794, 0x795, 0x5, 0xa8, 0x55, 0x2, 0x795, 0x796, 0x5, 0x108, 
       0x85, 0x2, 0x796, 0x7b1, 0x3, 0x2, 0x2, 0x2, 0x797, 0x799, 0x5, 0xee, 
       0x78, 0x2, 0x798, 0x797, 0x3, 0x2, 0x2, 0x2, 0x798, 0x799, 0x3, 0x2, 
       0x2, 0x2, 0x799, 0x79a, 0x3, 0x2, 0x2, 0x2, 0x79a, 0x79b, 0x5, 0xa8, 
       0x55, 0x2, 0x79b, 0x79c, 0x5, 0x108, 0x85, 0x2, 0x79c, 0x79d, 0x7, 
       0x6f, 0x2, 0x2, 0x79d, 0x79e, 0x5, 0x136, 0x9c, 0x2, 0x79e, 0x7b1, 
       0x3, 0x2, 0x2, 0x2, 0x79f, 0x7a1, 0x5, 0xee, 0x78, 0x2, 0x7a0, 0x79f, 
       0x3, 0x2, 0x2, 0x2, 0x7a0, 0x7a1, 0x3, 0x2, 0x2, 0x2, 0x7a1, 0x7a2, 
       0x3, 0x2, 0x2, 0x2, 0x7a2, 0x7a4, 0x5, 0xa8, 0x55, 0x2, 0x7a3, 0x7a5, 
       0x5, 0x11e, 0x90, 0x2, 0x7a4, 0x7a3, 0x3, 0x2, 0x2, 0x2, 0x7a4, 0x7a5, 
       0x3, 0x2, 0x2, 0x2, 0x7a5, 0x7b1, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x7a8, 
       0x5, 0xee, 0x78, 0x2, 0x7a7, 0x7a6, 0x3, 0x2, 0x2, 0x2, 0x7a7, 0x7a8, 
       0x3, 0x2, 0x2, 0x2, 0x7a8, 0x7a9, 0x3, 0x2, 0x2, 0x2, 0x7a9, 0x7ab, 
       0x5, 0xa8, 0x55, 0x2, 0x7aa, 0x7ac, 0x5, 0x11e, 0x90, 0x2, 0x7ab, 
       0x7aa, 0x3, 0x2, 0x2, 0x2, 0x7ab, 0x7ac, 0x3, 0x2, 0x2, 0x2, 0x7ac, 
       0x7ad, 0x3, 0x2, 0x2, 0x2, 0x7ad, 0x7ae, 0x7, 0x6f, 0x2, 0x2, 0x7ae, 
       0x7af, 0x5, 0x136, 0x9c, 0x2, 0x7af, 0x7b1, 0x3, 0x2, 0x2, 0x2, 0x7b0, 
       0x792, 0x3, 0x2, 0x2, 0x2, 0x7b0, 0x798, 0x3, 0x2, 0x2, 0x2, 0x7b0, 
       0x7a0, 0x3, 0x2, 0x2, 0x2, 0x7b0, 0x7a7, 0x3, 0x2, 0x2, 0x2, 0x7b1, 
       0x12d, 0x3, 0x2, 0x2, 0x2, 0x7b2, 0x7b4, 0x5, 0xee, 0x78, 0x2, 0x7b3, 
       0x7b2, 0x3, 0x2, 0x2, 0x2, 0x7b3, 0x7b4, 0x3, 0x2, 0x2, 0x2, 0x7b4, 
       0x7b6, 0x3, 0x2, 0x2, 0x2, 0x7b5, 0x7b7, 0x5, 0xa8, 0x55, 0x2, 0x7b6, 
       0x7b5, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7b7, 0x3, 0x2, 0x2, 0x2, 0x7b7, 
       0x7b8, 0x3, 0x2, 0x2, 0x2, 0x7b8, 0x7ba, 0x5, 0x108, 0x85, 0x2, 0x7b9, 
       0x7bb, 0x5, 0x152, 0xaa, 0x2, 0x7ba, 0x7b9, 0x3, 0x2, 0x2, 0x2, 0x7ba, 
       0x7bb, 0x3, 0x2, 0x2, 0x2, 0x7bb, 0x7bc, 0x3, 0x2, 0x2, 0x2, 0x7bc, 
       0x7bd, 0x5, 0x130, 0x99, 0x2, 0x7bd, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x7be, 
       0x7c0, 0x5, 0x16a, 0xb6, 0x2, 0x7bf, 0x7be, 0x3, 0x2, 0x2, 0x2, 0x7bf, 
       0x7c0, 0x3, 0x2, 0x2, 0x2, 0x7c0, 0x7c1, 0x3, 0x2, 0x2, 0x2, 0x7c1, 
       0x7ca, 0x5, 0x82, 0x42, 0x2, 0x7c2, 0x7ca, 0x5, 0x190, 0xc9, 0x2, 
       0x7c3, 0x7c4, 0x7, 0x6f, 0x2, 0x2, 0x7c4, 0x7c5, 0x7, 0x25, 0x2, 
       0x2, 0x7c5, 0x7ca, 0x7, 0x8c, 0x2, 0x2, 0x7c6, 0x7c7, 0x7, 0x6f, 
       0x2, 0x2, 0x7c7, 0x7c8, 0x7, 0x26, 0x2, 0x2, 0x7c8, 0x7ca, 0x7, 0x8c, 
       0x2, 0x2, 0x7c9, 0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7c9, 0x7c2, 0x3, 0x2, 
       0x2, 0x2, 0x7c9, 0x7c3, 0x3, 0x2, 0x2, 0x2, 0x7c9, 0x7c6, 0x3, 0x2, 
       0x2, 0x2, 0x7ca, 0x131, 0x3, 0x2, 0x2, 0x2, 0x7cb, 0x7d1, 0x5, 0x134, 
       0x9b, 0x2, 0x7cc, 0x7cd, 0x7, 0x5f, 0x2, 0x2, 0x7cd, 0x7ce, 0x5, 
       0x40, 0x21, 0x2, 0x7ce, 0x7cf, 0x7, 0x60, 0x2, 0x2, 0x7cf, 0x7d1, 
       0x3, 0x2, 0x2, 0x2, 0x7d0, 0x7cb, 0x3, 0x2, 0x2, 0x2, 0x7d0, 0x7cc, 
       0x3, 0x2, 0x2, 0x2, 0x7d1, 0x133, 0x3, 0x2, 0x2, 0x2, 0x7d2, 0x7d3, 
       0x7, 0x6f, 0x2, 0x2, 0x7d3, 0x7d6, 0x5, 0x136, 0x9c, 0x2, 0x7d4, 
       0x7d6, 0x5, 0x13a, 0x9e, 0x2, 0x7d5, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7d5, 
       0x7d4, 0x3, 0x2, 0x2, 0x2, 0x7d6, 0x135, 0x3, 0x2, 0x2, 0x2, 0x7d7, 
       0x7db, 0x5, 0x74, 0x3b, 0x2, 0x7d8, 0x7db, 0x5, 0x13a, 0x9e, 0x2, 
       0x7d9, 0x7db, 0x5, 0xe, 0x8, 0x2, 0x7da, 0x7d7, 0x3, 0x2, 0x2, 0x2, 
       0x7da, 0x7d8, 0x3, 0x2, 0x2, 0x2, 0x7da, 0x7d9, 0x3, 0x2, 0x2, 0x2, 
       0x7db, 0x137, 0x3, 0x2, 0x2, 0x2, 0x7dc, 0x7dd, 0x8, 0x9d, 0x1, 0x2, 
       0x7dd, 0x7df, 0x5, 0x136, 0x9c, 0x2, 0x7de, 0x7e0, 0x7, 0x8f, 0x2, 
       0x2, 0x7df, 0x7de, 0x3, 0x2, 0x2, 0x2, 0x7df, 0x7e0, 0x3, 0x2, 0x2, 
       0x2, 0x7e0, 0x7e9, 0x3, 0x2, 0x2, 0x2, 0x7e1, 0x7e2, 0xc, 0x3, 0x2, 
       0x2, 0x7e2, 0x7e3, 0x7, 0x86, 0x2, 0x2, 0x7e3, 0x7e5, 0x5, 0x136, 
       0x9c, 0x2, 0x7e4, 0x7e6, 0x7, 0x8f, 0x2, 0x2, 0x7e5, 0x7e4, 0x3, 
       0x2, 0x2, 0x2, 0x7e5, 0x7e6, 0x3, 0x2, 0x2, 0x2, 0x7e6, 0x7e8, 0x3, 
       0x2, 0x2, 0x2, 0x7e7, 0x7e1, 0x3, 0x2, 0x2, 0x2, 0x7e8, 0x7eb, 0x3, 
       0x2, 0x2, 0x2, 0x7e9, 0x7e7, 0x3, 0x2, 0x2, 0x2, 0x7e9, 0x7ea, 0x3, 
       0x2, 0x2, 0x2, 0x7ea, 0x139, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7e9, 0x3, 
       0x2, 0x2, 0x2, 0x7ec, 0x7ed, 0x7, 0x63, 0x2, 0x2, 0x7ed, 0x7ef, 0x5, 
       0x138, 0x9d, 0x2, 0x7ee, 0x7f0, 0x7, 0x86, 0x2, 0x2, 0x7ef, 0x7ee, 
       0x3, 0x2, 0x2, 0x2, 0x7ef, 0x7f0, 0x3, 0x2, 0x2, 0x2, 0x7f0, 0x7f1, 
       0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7f2, 0x7, 0x64, 0x2, 0x2, 0x7f2, 0x7f6, 
       0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7f4, 0x7, 0x63, 0x2, 0x2, 0x7f4, 0x7f6, 
       0x7, 0x64, 0x2, 0x2, 0x7f5, 0x7ec, 0x3, 0x2, 0x2, 0x2, 0x7f5, 0x7f3, 
       0x3, 0x2, 0x2, 0x2, 0x7f6, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x7f7, 0x7fa, 
       0x7, 0x90, 0x2, 0x2, 0x7f8, 0x7fa, 0x5, 0x17e, 0xc0, 0x2, 0x7f9, 
       0x7f7, 0x3, 0x2, 0x2, 0x2, 0x7f9, 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x7fa, 
       0x13d, 0x3, 0x2, 0x2, 0x2, 0x7fb, 0x7fc, 0x5, 0x140, 0xa1, 0x2, 0x7fc, 
       0x7fe, 0x7, 0x63, 0x2, 0x2, 0x7fd, 0x7ff, 0x5, 0x148, 0xa5, 0x2, 
       0x7fe, 0x7fd, 0x3, 0x2, 0x2, 0x2, 0x7fe, 0x7ff, 0x3, 0x2, 0x2, 0x2, 
       0x7ff, 0x800, 0x3, 0x2, 0x2, 0x2, 0x800, 0x801, 0x7, 0x64, 0x2, 0x2, 
       0x801, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x802, 0x804, 0x5, 0x146, 0xa4, 
       0x2, 0x803, 0x805, 0x5, 0xee, 0x78, 0x2, 0x804, 0x803, 0x3, 0x2, 
       0x2, 0x2, 0x804, 0x805, 0x3, 0x2, 0x2, 0x2, 0x805, 0x806, 0x3, 0x2, 
       0x2, 0x2, 0x806, 0x808, 0x5, 0x142, 0xa2, 0x2, 0x807, 0x809, 0x5, 
       0x144, 0xa3, 0x2, 0x808, 0x807, 0x3, 0x2, 0x2, 0x2, 0x808, 0x809, 
       0x3, 0x2, 0x2, 0x2, 0x809, 0x80b, 0x3, 0x2, 0x2, 0x2, 0x80a, 0x80c, 
       0x5, 0x158, 0xad, 0x2, 0x80b, 0x80a, 0x3, 0x2, 0x2, 0x2, 0x80b, 0x80c, 
       0x3, 0x2, 0x2, 0x2, 0x80c, 0x815, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x80f, 
       0x5, 0x146, 0xa4, 0x2, 0x80e, 0x810, 0x5, 0xee, 0x78, 0x2, 0x80f, 
       0x80e, 0x3, 0x2, 0x2, 0x2, 0x80f, 0x810, 0x3, 0x2, 0x2, 0x2, 0x810, 
       0x812, 0x3, 0x2, 0x2, 0x2, 0x811, 0x813, 0x5, 0x158, 0xad, 0x2, 0x812, 
       0x811, 0x3, 0x2, 0x2, 0x2, 0x812, 0x813, 0x3, 0x2, 0x2, 0x2, 0x813, 
       0x815, 0x3, 0x2, 0x2, 0x2, 0x814, 0x802, 0x3, 0x2, 0x2, 0x2, 0x814, 
       0x80d, 0x3, 0x2, 0x2, 0x2, 0x815, 0x141, 0x3, 0x2, 0x2, 0x2, 0x816, 
       0x818, 0x5, 0x26, 0x14, 0x2, 0x817, 0x816, 0x3, 0x2, 0x2, 0x2, 0x817, 
       0x818, 0x3, 0x2, 0x2, 0x2, 0x818, 0x819, 0x3, 0x2, 0x2, 0x2, 0x819, 
       0x81a, 0x5, 0x13c, 0x9f, 0x2, 0x81a, 0x143, 0x3, 0x2, 0x2, 0x2, 0x81b, 
       0x81c, 0x7, 0x30, 0x2, 0x2, 0x81c, 0x145, 0x3, 0x2, 0x2, 0x2, 0x81d, 
       0x81e, 0x9, 0xa, 0x2, 0x2, 0x81e, 0x147, 0x3, 0x2, 0x2, 0x2, 0x81f, 
       0x821, 0x5, 0x14a, 0xa6, 0x2, 0x820, 0x822, 0x5, 0x148, 0xa5, 0x2, 
       0x821, 0x820, 0x3, 0x2, 0x2, 0x2, 0x821, 0x822, 0x3, 0x2, 0x2, 0x2, 
       0x822, 0x829, 0x3, 0x2, 0x2, 0x2, 0x823, 0x824, 0x5, 0x162, 0xb2, 
       0x2, 0x824, 0x826, 0x7, 0x8a, 0x2, 0x2, 0x825, 0x827, 0x5, 0x148, 
       0xa5, 0x2, 0x826, 0x825, 0x3, 0x2, 0x2, 0x2, 0x826, 0x827, 0x3, 0x2, 
       0x2, 0x2, 0x827, 0x829, 0x3, 0x2, 0x2, 0x2, 0x828, 0x81f, 0x3, 0x2, 
       0x2, 0x2, 0x828, 0x823, 0x3, 0x2, 0x2, 0x2, 0x829, 0x149, 0x3, 0x2, 
       0x2, 0x2, 0x82a, 0x83c, 0x5, 0x12e, 0x98, 0x2, 0x82b, 0x83c, 0x5, 
       0x150, 0xa9, 0x2, 0x82c, 0x82e, 0x5, 0xee, 0x78, 0x2, 0x82d, 0x82c, 
       0x3, 0x2, 0x2, 0x2, 0x82d, 0x82e, 0x3, 0x2, 0x2, 0x2, 0x82e, 0x830, 
       0x3, 0x2, 0x2, 0x2, 0x82f, 0x831, 0x5, 0xa8, 0x55, 0x2, 0x830, 0x82f, 
       0x3, 0x2, 0x2, 0x2, 0x830, 0x831, 0x3, 0x2, 0x2, 0x2, 0x831, 0x833, 
       0x3, 0x2, 0x2, 0x2, 0x832, 0x834, 0x5, 0x14c, 0xa7, 0x2, 0x833, 0x832, 
       0x3, 0x2, 0x2, 0x2, 0x833, 0x834, 0x3, 0x2, 0x2, 0x2, 0x834, 0x835, 
       0x3, 0x2, 0x2, 0x2, 0x835, 0x83c, 0x7, 0x8c, 0x2, 0x2, 0x836, 0x83c, 
       0x5, 0xe6, 0x74, 0x2, 0x837, 0x83c, 0x5, 0xa0, 0x51, 0x2, 0x838, 
       0x83c, 0x5, 0x176, 0xbc, 0x2, 0x839, 0x83c, 0x5, 0x9c, 0x4f, 0x2, 
       0x83a, 0x83c, 0x5, 0xa2, 0x52, 0x2, 0x83b, 0x82a, 0x3, 0x2, 0x2, 
       0x2, 0x83b, 0x82b, 0x3, 0x2, 0x2, 0x2, 0x83b, 0x82d, 0x3, 0x2, 0x2, 
       0x2, 0x83b, 0x836, 0x3, 0x2, 0x2, 0x2, 0x83b, 0x837, 0x3, 0x2, 0x2, 
       0x2, 0x83b, 0x838, 0x3, 0x2, 0x2, 0x2, 0x83b, 0x839, 0x3, 0x2, 0x2, 
       0x2, 0x83b, 0x83a, 0x3, 0x2, 0x2, 0x2, 0x83c, 0x14b, 0x3, 0x2, 0x2, 
       0x2, 0x83d, 0x83e, 0x8, 0xa7, 0x1, 0x2, 0x83e, 0x83f, 0x5, 0x14e, 
       0xa8, 0x2, 0x83f, 0x845, 0x3, 0x2, 0x2, 0x2, 0x840, 0x841, 0xc, 0x3, 
       0x2, 0x2, 0x841, 0x842, 0x7, 0x86, 0x2, 0x2, 0x842, 0x844, 0x5, 0x14e, 
       0xa8, 0x2, 0x843, 0x840, 0x3, 0x2, 0x2, 0x2, 0x844, 0x847, 0x3, 0x2, 
       0x2, 0x2, 0x845, 0x843, 0x3, 0x2, 0x2, 0x2, 0x845, 0x846, 0x3, 0x2, 
       0x2, 0x2, 0x846, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x847, 0x845, 0x3, 0x2, 
       0x2, 0x2, 0x848, 0x84a, 0x5, 0x108, 0x85, 0x2, 0x849, 0x84b, 0x5, 
       0x152, 0xaa, 0x2, 0x84a, 0x849, 0x3, 0x2, 0x2, 0x2, 0x84a, 0x84b, 
       0x3, 0x2, 0x2, 0x2, 0x84b, 0x84d, 0x3, 0x2, 0x2, 0x2, 0x84c, 0x84e, 
       0x5, 0x156, 0xac, 0x2, 0x84d, 0x84c, 0x3, 0x2, 0x2, 0x2, 0x84d, 0x84e, 
       0x3, 0x2, 0x2, 0x2, 0x84e, 0x85c, 0x3, 0x2, 0x2, 0x2, 0x84f, 0x851, 
       0x5, 0x108, 0x85, 0x2, 0x850, 0x852, 0x5, 0x134, 0x9b, 0x2, 0x851, 
       0x850, 0x3, 0x2, 0x2, 0x2, 0x851, 0x852, 0x3, 0x2, 0x2, 0x2, 0x852, 
       0x85c, 0x3, 0x2, 0x2, 0x2, 0x853, 0x855, 0x7, 0x90, 0x2, 0x2, 0x854, 
       0x853, 0x3, 0x2, 0x2, 0x2, 0x854, 0x855, 0x3, 0x2, 0x2, 0x2, 0x855, 
       0x857, 0x3, 0x2, 0x2, 0x2, 0x856, 0x858, 0x5, 0xee, 0x78, 0x2, 0x857, 
       0x856, 0x3, 0x2, 0x2, 0x2, 0x857, 0x858, 0x3, 0x2, 0x2, 0x2, 0x858, 
       0x859, 0x3, 0x2, 0x2, 0x2, 0x859, 0x85a, 0x7, 0x8a, 0x2, 0x2, 0x85a, 
       0x85c, 0x5, 0x7a, 0x3e, 0x2, 0x85b, 0x848, 0x3, 0x2, 0x2, 0x2, 0x85b, 
       0x84f, 0x3, 0x2, 0x2, 0x2, 0x85b, 0x854, 0x3, 0x2, 0x2, 0x2, 0x85c, 
       0x14f, 0x3, 0x2, 0x2, 0x2, 0x85d, 0x85e, 0x5, 0xa8, 0x55, 0x2, 0x85e, 
       0x85f, 0x5, 0x22, 0x12, 0x2, 0x85f, 0x861, 0x5, 0x10e, 0x88, 0x2, 
       0x860, 0x862, 0x5, 0x152, 0xaa, 0x2, 0x861, 0x860, 0x3, 0x2, 0x2, 
       0x2, 0x861, 0x862, 0x3, 0x2, 0x2, 0x2, 0x862, 0x864, 0x3, 0x2, 0x2, 
       0x2, 0x863, 0x865, 0x5, 0x156, 0xac, 0x2, 0x864, 0x863, 0x3, 0x2, 
       0x2, 0x2, 0x864, 0x865, 0x3, 0x2, 0x2, 0x2, 0x865, 0x866, 0x3, 0x2, 
       0x2, 0x2, 0x866, 0x867, 0x7, 0x8c, 0x2, 0x2, 0x867, 0x151, 0x3, 0x2, 
       0x2, 0x2, 0x868, 0x869, 0x8, 0xaa, 0x1, 0x2, 0x869, 0x86a, 0x5, 0x154, 
       0xab, 0x2, 0x86a, 0x86f, 0x3, 0x2, 0x2, 0x2, 0x86b, 0x86c, 0xc, 0x3, 
       0x2, 0x2, 0x86c, 0x86e, 0x5, 0x154, 0xab, 0x2, 0x86d, 0x86b, 0x3, 
       0x2, 0x2, 0x2, 0x86e, 0x871, 0x3, 0x2, 0x2, 0x2, 0x86f, 0x86d, 0x3, 
       0x2, 0x2, 0x2, 0x86f, 0x870, 0x3, 0x2, 0x2, 0x2, 0x870, 0x153, 0x3, 
       0x2, 0x2, 0x2, 0x871, 0x86f, 0x3, 0x2, 0x2, 0x2, 0x872, 0x873, 0x9, 
       0xb, 0x2, 0x2, 0x873, 0x155, 0x3, 0x2, 0x2, 0x2, 0x874, 0x875, 0x7, 
       0x6f, 0x2, 0x2, 0x875, 0x876, 0x7, 0x11, 0x2, 0x2, 0x876, 0x157, 
       0x3, 0x2, 0x2, 0x2, 0x877, 0x878, 0x7, 0x8a, 0x2, 0x2, 0x878, 0x879, 
       0x5, 0x15a, 0xae, 0x2, 0x879, 0x159, 0x3, 0x2, 0x2, 0x2, 0x87a, 0x87b, 
       0x8, 0xae, 0x1, 0x2, 0x87b, 0x87d, 0x5, 0x15c, 0xaf, 0x2, 0x87c, 
       0x87e, 0x7, 0x8f, 0x2, 0x2, 0x87d, 0x87c, 0x3, 0x2, 0x2, 0x2, 0x87d, 
       0x87e, 0x3, 0x2, 0x2, 0x2, 0x87e, 0x887, 0x3, 0x2, 0x2, 0x2, 0x87f, 
       0x880, 0xc, 0x3, 0x2, 0x2, 0x880, 0x881, 0x7, 0x86, 0x2, 0x2, 0x881, 
       0x883, 0x5, 0x15c, 0xaf, 0x2, 0x882, 0x884, 0x7, 0x8f, 0x2, 0x2, 
       0x883, 0x882, 0x3, 0x2, 0x2, 0x2, 0x883, 0x884, 0x3, 0x2, 0x2, 0x2, 
       0x884, 0x886, 0x3, 0x2, 0x2, 0x2, 0x885, 0x87f, 0x3, 0x2, 0x2, 0x2, 
       0x886, 0x889, 0x3, 0x2, 0x2, 0x2, 0x887, 0x885, 0x3, 0x2, 0x2, 0x2, 
       0x887, 0x888, 0x3, 0x2, 0x2, 0x2, 0x888, 0x15b, 0x3, 0x2, 0x2, 0x2, 
       0x889, 0x887, 0x3, 0x2, 0x2, 0x2, 0x88a, 0x88c, 0x5, 0xee, 0x78, 
       0x2, 0x88b, 0x88a, 0x3, 0x2, 0x2, 0x2, 0x88b, 0x88c, 0x3, 0x2, 0x2, 
       0x2, 0x88c, 0x88d, 0x3, 0x2, 0x2, 0x2, 0x88d, 0x8a0, 0x5, 0x160, 
       0xb1, 0x2, 0x88e, 0x890, 0x5, 0xee, 0x78, 0x2, 0x88f, 0x88e, 0x3, 
       0x2, 0x2, 0x2, 0x88f, 0x890, 0x3, 0x2, 0x2, 0x2, 0x890, 0x891, 0x3, 
       0x2, 0x2, 0x2, 0x891, 0x893, 0x7, 0x5a, 0x2, 0x2, 0x892, 0x894, 0x5, 
       0x162, 0xb2, 0x2, 0x893, 0x892, 0x3, 0x2, 0x2, 0x2, 0x893, 0x894, 
       0x3, 0x2, 0x2, 0x2, 0x894, 0x895, 0x3, 0x2, 0x2, 0x2, 0x895, 0x8a0, 
       0x5, 0x160, 0xb1, 0x2, 0x896, 0x898, 0x5, 0xee, 0x78, 0x2, 0x897, 
       0x896, 0x3, 0x2, 0x2, 0x2, 0x897, 0x898, 0x3, 0x2, 0x2, 0x2, 0x898, 
       0x899, 0x3, 0x2, 0x2, 0x2, 0x899, 0x89b, 0x5, 0x162, 0xb2, 0x2, 0x89a, 
       0x89c, 0x7, 0x5a, 0x2, 0x2, 0x89b, 0x89a, 0x3, 0x2, 0x2, 0x2, 0x89b, 
       0x89c, 0x3, 0x2, 0x2, 0x2, 0x89c, 0x89d, 0x3, 0x2, 0x2, 0x2, 0x89d, 
       0x89e, 0x5, 0x160, 0xb1, 0x2, 0x89e, 0x8a0, 0x3, 0x2, 0x2, 0x2, 0x89f, 
       0x88b, 0x3, 0x2, 0x2, 0x2, 0x89f, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x89f, 
       0x897, 0x3, 0x2, 0x2, 0x2, 0x8a0, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x8a1, 
       0x8a3, 0x5, 0x26, 0x14, 0x2, 0x8a2, 0x8a1, 0x3, 0x2, 0x2, 0x2, 0x8a2, 
       0x8a3, 0x3, 0x2, 0x2, 0x2, 0x8a3, 0x8a4, 0x3, 0x2, 0x2, 0x2, 0x8a4, 
       0x8a7, 0x5, 0x13c, 0x9f, 0x2, 0x8a5, 0x8a7, 0x5, 0xbc, 0x5f, 0x2, 
       0x8a6, 0x8a2, 0x3, 0x2, 0x2, 0x2, 0x8a6, 0x8a5, 0x3, 0x2, 0x2, 0x2, 
       0x8a7, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x8a9, 0x5, 0x15e, 0xb0, 
       0x2, 0x8a9, 0x161, 0x3, 0x2, 0x2, 0x2, 0x8aa, 0x8ab, 0x9, 0xc, 0x2, 
       0x2, 0x8ab, 0x163, 0x3, 0x2, 0x2, 0x2, 0x8ac, 0x8ad, 0x7, 0x3e, 0x2, 
       0x2, 0x8ad, 0x8ae, 0x5, 0x166, 0xb4, 0x2, 0x8ae, 0x165, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x8b1, 0x5, 0xb4, 0x5b, 0x2, 0x8b0, 0x8b2, 0x5, 
       0x168, 0xb5, 0x2, 0x8b1, 0x8b0, 0x3, 0x2, 0x2, 0x2, 0x8b1, 0x8b2, 
       0x3, 0x2, 0x2, 0x2, 0x8b2, 0x167, 0x3, 0x2, 0x2, 0x2, 0x8b3, 0x8b5, 
       0x5, 0x112, 0x8a, 0x2, 0x8b4, 0x8b6, 0x5, 0x168, 0xb5, 0x2, 0x8b5, 
       0x8b4, 0x3, 0x2, 0x2, 0x2, 0x8b5, 0x8b6, 0x3, 0x2, 0x2, 0x2, 0x8b6, 
       0x169, 0x3, 0x2, 0x2, 0x2, 0x8b7, 0x8b8, 0x7, 0x8a, 0x2, 0x2, 0x8b8, 
       0x8b9, 0x5, 0x16c, 0xb7, 0x2, 0x8b9, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x8ba, 
       0x8bc, 0x5, 0x16e, 0xb8, 0x2, 0x8bb, 0x8bd, 0x7, 0x8f, 0x2, 0x2, 
       0x8bc, 0x8bb, 0x3, 0x2, 0x2, 0x2, 0x8bc, 0x8bd, 0x3, 0x2, 0x2, 0x2, 
       0x8bd, 0x8c6, 0x3, 0x2, 0x2, 0x2, 0x8be, 0x8c0, 0x5, 0x16e, 0xb8, 
       0x2, 0x8bf, 0x8c1, 0x7, 0x8f, 0x2, 0x2, 0x8c0, 0x8bf, 0x3, 0x2, 0x2, 
       0x2, 0x8c0, 0x8c1, 0x3, 0x2, 0x2, 0x2, 0x8c1, 0x8c2, 0x3, 0x2, 0x2, 
       0x2, 0x8c2, 0x8c3, 0x7, 0x86, 0x2, 0x2, 0x8c3, 0x8c4, 0x5, 0x16c, 
       0xb7, 0x2, 0x8c4, 0x8c6, 0x3, 0x2, 0x2, 0x2, 0x8c5, 0x8ba, 0x3, 0x2, 
       0x2, 0x2, 0x8c5, 0x8be, 0x3, 0x2, 0x2, 0x2, 0x8c6, 0x16d, 0x3, 0x2, 
       0x2, 0x2, 0x8c7, 0x8c8, 0x5, 0x170, 0xb9, 0x2, 0x8c8, 0x8ca, 0x7, 
       0x5f, 0x2, 0x2, 0x8c9, 0x8cb, 0x5, 0x40, 0x21, 0x2, 0x8ca, 0x8c9, 
       0x3, 0x2, 0x2, 0x2, 0x8ca, 0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8cb, 0x8cc, 
       0x3, 0x2, 0x2, 0x2, 0x8cc, 0x8cd, 0x7, 0x60, 0x2, 0x2, 0x8cd, 0x8d2, 
       0x3, 0x2, 0x2, 0x2, 0x8ce, 0x8cf, 0x5, 0x170, 0xb9, 0x2, 0x8cf, 0x8d0, 
       0x5, 0x13a, 0x9e, 0x2, 0x8d0, 0x8d2, 0x3, 0x2, 0x2, 0x2, 0x8d1, 0x8c7, 
       0x3, 0x2, 0x2, 0x2, 0x8d1, 0x8ce, 0x3, 0x2, 0x2, 0x2, 0x8d2, 0x16f, 
       0x3, 0x2, 0x2, 0x2, 0x8d3, 0x8d6, 0x5, 0x15e, 0xb0, 0x2, 0x8d4, 0x8d6, 
       0x7, 0x90, 0x2, 0x2, 0x8d5, 0x8d3, 0x3, 0x2, 0x2, 0x2, 0x8d5, 0x8d4, 
       0x3, 0x2, 0x2, 0x2, 0x8d6, 0x171, 0x3, 0x2, 0x2, 0x2, 0x8d7, 0x8d8, 
       0x7, 0x3e, 0x2, 0x2, 0x8d8, 0x8d9, 0x5, 0x1a4, 0xd3, 0x2, 0x8d9, 
       0x173, 0x3, 0x2, 0x2, 0x2, 0x8da, 0x8db, 0x7, 0x3e, 0x2, 0x2, 0x8db, 
       0x8dc, 0x7, 0x99, 0x2, 0x2, 0x8dc, 0x8e0, 0x7, 0x90, 0x2, 0x2, 0x8dd, 
       0x8de, 0x7, 0x3e, 0x2, 0x2, 0x8de, 0x8e0, 0x7, 0x9c, 0x2, 0x2, 0x8df, 
       0x8da, 0x3, 0x2, 0x2, 0x2, 0x8df, 0x8dd, 0x3, 0x2, 0x2, 0x2, 0x8e0, 
       0x175, 0x3, 0x2, 0x2, 0x2, 0x8e1, 0x8e2, 0x7, 0x4e, 0x2, 0x2, 0x8e2, 
       0x8e3, 0x7, 0x70, 0x2, 0x2, 0x8e3, 0x8e4, 0x5, 0x178, 0xbd, 0x2, 
       0x8e4, 0x8e5, 0x7, 0x71, 0x2, 0x2, 0x8e5, 0x8e6, 0x5, 0x98, 0x4d, 
       0x2, 0x8e6, 0x177, 0x3, 0x2, 0x2, 0x2, 0x8e7, 0x8e8, 0x8, 0xbd, 0x1, 
       0x2, 0x8e8, 0x8e9, 0x5, 0x17a, 0xbe, 0x2, 0x8e9, 0x8ef, 0x3, 0x2, 
       0x2, 0x2, 0x8ea, 0x8eb, 0xc, 0x3, 0x2, 0x2, 0x8eb, 0x8ec, 0x7, 0x86, 
       0x2, 0x2, 0x8ec, 0x8ee, 0x5, 0x17a, 0xbe, 0x2, 0x8ed, 0x8ea, 0x3, 
       0x2, 0x2, 0x2, 0x8ee, 0x8f1, 0x3, 0x2, 0x2, 0x2, 0x8ef, 0x8ed, 0x3, 
       0x2, 0x2, 0x2, 0x8ef, 0x8f0, 0x3, 0x2, 0x2, 0x2, 0x8f0, 0x179, 0x3, 
       0x2, 0x2, 0x2, 0x8f1, 0x8ef, 0x3, 0x2, 0x2, 0x2, 0x8f2, 0x8f5, 0x5, 
       0x17c, 0xbf, 0x2, 0x8f3, 0x8f5, 0x5, 0x12c, 0x97, 0x2, 0x8f4, 0x8f2, 
       0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8f3, 0x3, 0x2, 0x2, 0x2, 0x8f5, 0x17b, 
       0x3, 0x2, 0x2, 0x2, 0x8f6, 0x8f8, 0x7, 0x1f, 0x2, 0x2, 0x8f7, 0x8f9, 
       0x7, 0x8f, 0x2, 0x2, 0x8f8, 0x8f7, 0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8f9, 
       0x3, 0x2, 0x2, 0x2, 0x8f9, 0x8fb, 0x3, 0x2, 0x2, 0x2, 0x8fa, 0x8fc, 
       0x7, 0x90, 0x2, 0x2, 0x8fb, 0x8fa, 0x3, 0x2, 0x2, 0x2, 0x8fb, 0x8fc, 
       0x3, 0x2, 0x2, 0x2, 0x8fc, 0x927, 0x3, 0x2, 0x2, 0x2, 0x8fd, 0x8ff, 
       0x7, 0x1f, 0x2, 0x2, 0x8fe, 0x900, 0x7, 0x90, 0x2, 0x2, 0x8ff, 0x8fe, 
       0x3, 0x2, 0x2, 0x2, 0x8ff, 0x900, 0x3, 0x2, 0x2, 0x2, 0x900, 0x901, 
       0x3, 0x2, 0x2, 0x2, 0x901, 0x902, 0x7, 0x6f, 0x2, 0x2, 0x902, 0x927, 
       0x5, 0x11c, 0x8f, 0x2, 0x903, 0x905, 0x7, 0x56, 0x2, 0x2, 0x904, 
       0x906, 0x7, 0x8f, 0x2, 0x2, 0x905, 0x904, 0x3, 0x2, 0x2, 0x2, 0x905, 
       0x906, 0x3, 0x2, 0x2, 0x2, 0x906, 0x908, 0x3, 0x2, 0x2, 0x2, 0x907, 
       0x909, 0x7, 0x90, 0x2, 0x2, 0x908, 0x907, 0x3, 0x2, 0x2, 0x2, 0x908, 
       0x909, 0x3, 0x2, 0x2, 0x2, 0x909, 0x927, 0x3, 0x2, 0x2, 0x2, 0x90a, 
       0x90c, 0x7, 0x56, 0x2, 0x2, 0x90b, 0x90d, 0x7, 0x90, 0x2, 0x2, 0x90c, 
       0x90b, 0x3, 0x2, 0x2, 0x2, 0x90c, 0x90d, 0x3, 0x2, 0x2, 0x2, 0x90d, 
       0x90e, 0x3, 0x2, 0x2, 0x2, 0x90e, 0x90f, 0x7, 0x6f, 0x2, 0x2, 0x90f, 
       0x927, 0x5, 0x11c, 0x8f, 0x2, 0x910, 0x911, 0x7, 0x4e, 0x2, 0x2, 
       0x911, 0x912, 0x7, 0x70, 0x2, 0x2, 0x912, 0x913, 0x5, 0x178, 0xbd, 
       0x2, 0x913, 0x914, 0x7, 0x71, 0x2, 0x2, 0x914, 0x916, 0x7, 0x1f, 
       0x2, 0x2, 0x915, 0x917, 0x7, 0x8f, 0x2, 0x2, 0x916, 0x915, 0x3, 0x2, 
       0x2, 0x2, 0x916, 0x917, 0x3, 0x2, 0x2, 0x2, 0x917, 0x919, 0x3, 0x2, 
       0x2, 0x2, 0x918, 0x91a, 0x7, 0x90, 0x2, 0x2, 0x919, 0x918, 0x3, 0x2, 
       0x2, 0x2, 0x919, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x91a, 0x927, 0x3, 0x2, 
       0x2, 0x2, 0x91b, 0x91c, 0x7, 0x4e, 0x2, 0x2, 0x91c, 0x91d, 0x7, 0x70, 
       0x2, 0x2, 0x91d, 0x91e, 0x5, 0x178, 0xbd, 0x2, 0x91e, 0x91f, 0x7, 
       0x71, 0x2, 0x2, 0x91f, 0x921, 0x7, 0x1f, 0x2, 0x2, 0x920, 0x922, 
       0x7, 0x90, 0x2, 0x2, 0x921, 0x920, 0x3, 0x2, 0x2, 0x2, 0x921, 0x922, 
       0x3, 0x2, 0x2, 0x2, 0x922, 0x923, 0x3, 0x2, 0x2, 0x2, 0x923, 0x924, 
       0x7, 0x6f, 0x2, 0x2, 0x924, 0x925, 0x5, 0x20, 0x11, 0x2, 0x925, 0x927, 
       0x3, 0x2, 0x2, 0x2, 0x926, 0x8f6, 0x3, 0x2, 0x2, 0x2, 0x926, 0x8fd, 
       0x3, 0x2, 0x2, 0x2, 0x926, 0x903, 0x3, 0x2, 0x2, 0x2, 0x926, 0x90a, 
       0x3, 0x2, 0x2, 0x2, 0x926, 0x910, 0x3, 0x2, 0x2, 0x2, 0x926, 0x91b, 
       0x3, 0x2, 0x2, 0x2, 0x927, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x928, 0x929, 
       0x5, 0x182, 0xc2, 0x2, 0x929, 0x92b, 0x7, 0x70, 0x2, 0x2, 0x92a, 
       0x92c, 0x5, 0x184, 0xc3, 0x2, 0x92b, 0x92a, 0x3, 0x2, 0x2, 0x2, 0x92b, 
       0x92c, 0x3, 0x2, 0x2, 0x2, 0x92c, 0x92d, 0x3, 0x2, 0x2, 0x2, 0x92d, 
       0x92e, 0x7, 0x71, 0x2, 0x2, 0x92e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x92f, 
       0x93f, 0x5, 0x17e, 0xc0, 0x2, 0x930, 0x931, 0x5, 0x172, 0xba, 0x2, 
       0x931, 0x933, 0x7, 0x70, 0x2, 0x2, 0x932, 0x934, 0x5, 0x184, 0xc3, 
       0x2, 0x933, 0x932, 0x3, 0x2, 0x2, 0x2, 0x933, 0x934, 0x3, 0x2, 0x2, 
       0x2, 0x934, 0x935, 0x3, 0x2, 0x2, 0x2, 0x935, 0x936, 0x7, 0x71, 0x2, 
       0x2, 0x936, 0x93f, 0x3, 0x2, 0x2, 0x2, 0x937, 0x938, 0x5, 0x174, 
       0xbb, 0x2, 0x938, 0x93a, 0x7, 0x70, 0x2, 0x2, 0x939, 0x93b, 0x5, 
       0x184, 0xc3, 0x2, 0x93a, 0x939, 0x3, 0x2, 0x2, 0x2, 0x93a, 0x93b, 
       0x3, 0x2, 0x2, 0x2, 0x93b, 0x93c, 0x3, 0x2, 0x2, 0x2, 0x93c, 0x93d, 
       0x7, 0x71, 0x2, 0x2, 0x93d, 0x93f, 0x3, 0x2, 0x2, 0x2, 0x93e, 0x92f, 
       0x3, 0x2, 0x2, 0x2, 0x93e, 0x930, 0x3, 0x2, 0x2, 0x2, 0x93e, 0x937, 
       0x3, 0x2, 0x2, 0x2, 0x93f, 0x181, 0x3, 0x2, 0x2, 0x2, 0x940, 0x941, 
       0x7, 0x90, 0x2, 0x2, 0x941, 0x183, 0x3, 0x2, 0x2, 0x2, 0x942, 0x943, 
       0x8, 0xc3, 0x1, 0x2, 0x943, 0x945, 0x5, 0x186, 0xc4, 0x2, 0x944, 
       0x946, 0x7, 0x8f, 0x2, 0x2, 0x945, 0x944, 0x3, 0x2, 0x2, 0x2, 0x945, 
       0x946, 0x3, 0x2, 0x2, 0x2, 0x946, 0x94f, 0x3, 0x2, 0x2, 0x2, 0x947, 
       0x948, 0xc, 0x3, 0x2, 0x2, 0x948, 0x949, 0x7, 0x86, 0x2, 0x2, 0x949, 
       0x94b, 0x5, 0x186, 0xc4, 0x2, 0x94a, 0x94c, 0x7, 0x8f, 0x2, 0x2, 
       0x94b, 0x94a, 0x3, 0x2, 0x2, 0x2, 0x94b, 0x94c, 0x3, 0x2, 0x2, 0x2, 
       0x94c, 0x94e, 0x3, 0x2, 0x2, 0x2, 0x94d, 0x947, 0x3, 0x2, 0x2, 0x2, 
       0x94e, 0x951, 0x3, 0x2, 0x2, 0x2, 0x94f, 0x94d, 0x3, 0x2, 0x2, 0x2, 
       0x94f, 0x950, 0x3, 0x2, 0x2, 0x2, 0x950, 0x185, 0x3, 0x2, 0x2, 0x2, 
       0x951, 0x94f, 0x3, 0x2, 0x2, 0x2, 0x952, 0x956, 0x5, 0x11c, 0x8f, 
       0x2, 0x953, 0x956, 0x5, 0x7a, 0x3e, 0x2, 0x954, 0x956, 0x5, 0x20, 
       0x11, 0x2, 0x955, 0x952, 0x3, 0x2, 0x2, 0x2, 0x955, 0x953, 0x3, 0x2, 
       0x2, 0x2, 0x955, 0x954, 0x3, 0x2, 0x2, 0x2, 0x956, 0x187, 0x3, 0x2, 
       0x2, 0x2, 0x957, 0x958, 0x7, 0x56, 0x2, 0x2, 0x958, 0x959, 0x5, 0x26, 
       0x14, 0x2, 0x959, 0x95a, 0x7, 0x90, 0x2, 0x2, 0x95a, 0x963, 0x3, 
       0x2, 0x2, 0x2, 0x95b, 0x95c, 0x7, 0x56, 0x2, 0x2, 0x95c, 0x95e, 0x5, 
       0x26, 0x14, 0x2, 0x95d, 0x95f, 0x7, 0x4e, 0x2, 0x2, 0x95e, 0x95d, 
       0x3, 0x2, 0x2, 0x2, 0x95e, 0x95f, 0x3, 0x2, 0x2, 0x2, 0x95f, 0x960, 
       0x3, 0x2, 0x2, 0x2, 0x960, 0x961, 0x5, 0x17e, 0xc0, 0x2, 0x961, 0x963, 
       0x3, 0x2, 0x2, 0x2, 0x962, 0x957, 0x3, 0x2, 0x2, 0x2, 0x962, 0x95b, 
       0x3, 0x2, 0x2, 0x2, 0x963, 0x189, 0x3, 0x2, 0x2, 0x2, 0x964, 0x966, 
       0x7, 0x2e, 0x2, 0x2, 0x965, 0x964, 0x3, 0x2, 0x2, 0x2, 0x965, 0x966, 
       0x3, 0x2, 0x2, 0x2, 0x966, 0x967, 0x3, 0x2, 0x2, 0x2, 0x967, 0x968, 
       0x7, 0x4e, 0x2, 0x2, 0x968, 0x969, 0x5, 0x98, 0x4d, 0x2, 0x969, 0x18b, 
       0x3, 0x2, 0x2, 0x2, 0x96a, 0x96b, 0x7, 0x4e, 0x2, 0x2, 0x96b, 0x96c, 
       0x7, 0x70, 0x2, 0x2, 0x96c, 0x96d, 0x7, 0x71, 0x2, 0x2, 0x96d, 0x96e, 
       0x5, 0x98, 0x4d, 0x2, 0x96e, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x96f, 0x970, 
       0x7, 0x53, 0x2, 0x2, 0x970, 0x971, 0x5, 0x82, 0x42, 0x2, 0x971, 0x972, 
       0x5, 0x192, 0xca, 0x2, 0x972, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x973, 0x975, 
       0x7, 0x53, 0x2, 0x2, 0x974, 0x976, 0x5, 0x16a, 0xb6, 0x2, 0x975, 
       0x974, 0x3, 0x2, 0x2, 0x2, 0x975, 0x976, 0x3, 0x2, 0x2, 0x2, 0x976, 
       0x977, 0x3, 0x2, 0x2, 0x2, 0x977, 0x978, 0x5, 0x82, 0x42, 0x2, 0x978, 
       0x979, 0x5, 0x192, 0xca, 0x2, 0x979, 0x191, 0x3, 0x2, 0x2, 0x2, 0x97a, 
       0x97c, 0x5, 0x194, 0xcb, 0x2, 0x97b, 0x97d, 0x5, 0x192, 0xca, 0x2, 
       0x97c, 0x97b, 0x3, 0x2, 0x2, 0x2, 0x97c, 0x97d, 0x3, 0x2, 0x2, 0x2, 
       0x97d, 0x193, 0x3, 0x2, 0x2, 0x2, 0x97e, 0x97f, 0x7, 0x1b, 0x2, 0x2, 
       0x97f, 0x980, 0x7, 0x5f, 0x2, 0x2, 0x980, 0x981, 0x5, 0x196, 0xcc, 
       0x2, 0x981, 0x982, 0x7, 0x60, 0x2, 0x2, 0x982, 0x983, 0x5, 0x82, 
       0x42, 0x2, 0x983, 0x195, 0x3, 0x2, 0x2, 0x2, 0x984, 0x986, 0x5, 0xee, 
       0x78, 0x2, 0x985, 0x984, 0x3, 0x2, 0x2, 0x2, 0x985, 0x986, 0x3, 0x2, 
       0x2, 0x2, 0x986, 0x987, 0x3, 0x2, 0x2, 0x2, 0x987, 0x988, 0x5, 0xb4, 
       0x5b, 0x2, 0x988, 0x989, 0x5, 0x108, 0x85, 0x2, 0x989, 0x993, 0x3, 
       0x2, 0x2, 0x2, 0x98a, 0x98c, 0x5, 0xee, 0x78, 0x2, 0x98b, 0x98a, 
       0x3, 0x2, 0x2, 0x2, 0x98b, 0x98c, 0x3, 0x2, 0x2, 0x2, 0x98c, 0x98d, 
       0x3, 0x2, 0x2, 0x2, 0x98d, 0x98f, 0x5, 0xb4, 0x5b, 0x2, 0x98e, 0x990, 
       0x5, 0x11e, 0x90, 0x2, 0x98f, 0x98e, 0x3, 0x2, 0x2, 0x2, 0x98f, 0x990, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x993, 0x3, 0x2, 0x2, 0x2, 0x991, 0x993, 
       0x7, 0x8f, 0x2, 0x2, 0x992, 0x985, 0x3, 0x2, 0x2, 0x2, 0x992, 0x98b, 
       0x3, 0x2, 0x2, 0x2, 0x992, 0x991, 0x3, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x2, 0x2, 0x2, 0x993, 0x197, 0x3, 0x2, 0x2, 0x2, 0x994, 0x996, 0x7, 
       0x51, 0x2, 0x2, 0x995, 0x997, 0x5, 0x74, 0x3b, 0x2, 0x996, 0x995, 
       0x3, 0x2, 0x2, 0x2, 0x996, 0x997, 0x3, 0x2, 0x2, 0x2, 0x997, 0x199, 
       0x3, 0x2, 0x2, 0x2, 0x998, 0x99b, 0x5, 0x19c, 0xcf, 0x2, 0x999, 0x99b, 
       0x5, 0x1a0, 0xd1, 0x2, 0x99a, 0x998, 0x3, 0x2, 0x2, 0x2, 0x99a, 0x999, 
       0x3, 0x2, 0x2, 0x2, 0x99b, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x99c, 0x99d, 
       0x7, 0x51, 0x2, 0x2, 0x99d, 0x99f, 0x7, 0x5f, 0x2, 0x2, 0x99e, 0x9a0, 
       0x5, 0x19e, 0xd0, 0x2, 0x99f, 0x99e, 0x3, 0x2, 0x2, 0x2, 0x99f, 0x9a0, 
       0x3, 0x2, 0x2, 0x2, 0x9a0, 0x9a1, 0x3, 0x2, 0x2, 0x2, 0x9a1, 0x9a2, 
       0x7, 0x60, 0x2, 0x2, 0x9a2, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x9a3, 0x9a4, 
       0x8, 0xd0, 0x1, 0x2, 0x9a4, 0x9a6, 0x5, 0x11c, 0x8f, 0x2, 0x9a5, 
       0x9a7, 0x7, 0x8f, 0x2, 0x2, 0x9a6, 0x9a5, 0x3, 0x2, 0x2, 0x2, 0x9a6, 
       0x9a7, 0x3, 0x2, 0x2, 0x2, 0x9a7, 0x9b0, 0x3, 0x2, 0x2, 0x2, 0x9a8, 
       0x9a9, 0xc, 0x3, 0x2, 0x2, 0x9a9, 0x9aa, 0x7, 0x86, 0x2, 0x2, 0x9aa, 
       0x9ac, 0x5, 0x11c, 0x8f, 0x2, 0x9ab, 0x9ad, 0x7, 0x8f, 0x2, 0x2, 
       0x9ac, 0x9ab, 0x3, 0x2, 0x2, 0x2, 0x9ac, 0x9ad, 0x3, 0x2, 0x2, 0x2, 
       0x9ad, 0x9af, 0x3, 0x2, 0x2, 0x2, 0x9ae, 0x9a8, 0x3, 0x2, 0x2, 0x2, 
       0x9af, 0x9b2, 0x3, 0x2, 0x2, 0x2, 0x9b0, 0x9ae, 0x3, 0x2, 0x2, 0x2, 
       0x9b0, 0x9b1, 0x3, 0x2, 0x2, 0x2, 0x9b1, 0x19f, 0x3, 0x2, 0x2, 0x2, 
       0x9b2, 0x9b0, 0x3, 0x2, 0x2, 0x2, 0x9b3, 0x9b4, 0x7, 0x3c, 0x2, 0x2, 
       0x9b4, 0x9b5, 0x7, 0x5f, 0x2, 0x2, 0x9b5, 0x9b6, 0x5, 0x7a, 0x3e, 
       0x2, 0x9b6, 0x9b7, 0x7, 0x60, 0x2, 0x2, 0x9b7, 0x9ba, 0x3, 0x2, 0x2, 
       0x2, 0x9b8, 0x9ba, 0x7, 0x3c, 0x2, 0x2, 0x9b9, 0x9b3, 0x3, 0x2, 0x2, 
       0x2, 0x9b9, 0x9b8, 0x3, 0x2, 0x2, 0x2, 0x9ba, 0x1a1, 0x3, 0x2, 0x2, 
       0x2, 0x9bb, 0x9bc, 0x9, 0xd, 0x2, 0x2, 0x9bc, 0x1a3, 0x3, 0x2, 0x2, 
       0x2, 0x9bd, 0x9f1, 0x7, 0x3b, 0x2, 0x2, 0x9be, 0x9f1, 0x7, 0x26, 
       0x2, 0x2, 0x9bf, 0x9c0, 0x7, 0x3b, 0x2, 0x2, 0x9c0, 0x9c1, 0x7, 0x61, 
       0x2, 0x2, 0x9c1, 0x9f1, 0x7, 0x62, 0x2, 0x2, 0x9c2, 0x9c3, 0x7, 0x26, 
       0x2, 0x2, 0x9c3, 0x9c4, 0x7, 0x61, 0x2, 0x2, 0x9c4, 0x9f1, 0x7, 0x62, 
       0x2, 0x2, 0x9c5, 0x9f1, 0x7, 0x65, 0x2, 0x2, 0x9c6, 0x9f1, 0x7, 0x66, 
       0x2, 0x2, 0x9c7, 0x9f1, 0x7, 0x67, 0x2, 0x2, 0x9c8, 0x9f1, 0x7, 0x68, 
       0x2, 0x2, 0x9c9, 0x9f1, 0x7, 0x69, 0x2, 0x2, 0x9ca, 0x9f1, 0x7, 0x6a, 
       0x2, 0x2, 0x9cb, 0x9f1, 0x7, 0x6b, 0x2, 0x2, 0x9cc, 0x9f1, 0x7, 0x6c, 
       0x2, 0x2, 0x9cd, 0x9f1, 0x7, 0x6d, 0x2, 0x2, 0x9ce, 0x9f1, 0x7, 0xb, 
       0x2, 0x2, 0x9cf, 0x9f1, 0x7, 0xc, 0x2, 0x2, 0x9d0, 0x9f1, 0x7, 0x6f, 
       0x2, 0x2, 0x9d1, 0x9f1, 0x7, 0x70, 0x2, 0x2, 0x9d2, 0x9f1, 0x7, 0x71, 
       0x2, 0x2, 0x9d3, 0x9f1, 0x7, 0x72, 0x2, 0x2, 0x9d4, 0x9f1, 0x7, 0x73, 
       0x2, 0x2, 0x9d5, 0x9f1, 0x7, 0x74, 0x2, 0x2, 0x9d6, 0x9f1, 0x7, 0x75, 
       0x2, 0x2, 0x9d7, 0x9f1, 0x7, 0x76, 0x2, 0x2, 0x9d8, 0x9f1, 0x7, 0x77, 
       0x2, 0x2, 0x9d9, 0x9f1, 0x7, 0x78, 0x2, 0x2, 0x9da, 0x9f1, 0x7, 0x79, 
       0x2, 0x2, 0x9db, 0x9f1, 0x7, 0x7a, 0x2, 0x2, 0x9dc, 0x9f1, 0x7, 0x7b, 
       0x2, 0x2, 0x9dd, 0x9f1, 0x7, 0x7d, 0x2, 0x2, 0x9de, 0x9f1, 0x7, 0x7c, 
       0x2, 0x2, 0x9df, 0x9f1, 0x7, 0x7e, 0x2, 0x2, 0x9e0, 0x9f1, 0x7, 0x7f, 
       0x2, 0x2, 0x9e1, 0x9f1, 0x7, 0x80, 0x2, 0x2, 0x9e2, 0x9f1, 0x7, 0x81, 
       0x2, 0x2, 0x9e3, 0x9f1, 0x7, 0xd, 0x2, 0x2, 0x9e4, 0x9f1, 0x7, 0xe, 
       0x2, 0x2, 0x9e5, 0x9f1, 0x7, 0xf, 0x2, 0x2, 0x9e6, 0x9f1, 0x7, 0x10, 
       0x2, 0x2, 0x9e7, 0x9f1, 0x7, 0x84, 0x2, 0x2, 0x9e8, 0x9f1, 0x7, 0x85, 
       0x2, 0x2, 0x9e9, 0x9f1, 0x7, 0x86, 0x2, 0x2, 0x9ea, 0x9f1, 0x7, 0x87, 
       0x2, 0x2, 0x9eb, 0x9f1, 0x7, 0x88, 0x2, 0x2, 0x9ec, 0x9ed, 0x7, 0x5f, 
       0x2, 0x2, 0x9ed, 0x9f1, 0x7, 0x60, 0x2, 0x2, 0x9ee, 0x9ef, 0x7, 0x61, 
       0x2, 0x2, 0x9ef, 0x9f1, 0x7, 0x62, 0x2, 0x2, 0x9f0, 0x9bd, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9be, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9bf, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9c2, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9c5, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9c6, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9c7, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9c8, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9c9, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9ca, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9cb, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9cc, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9cd, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9ce, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9cf, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9d0, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9d1, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9d2, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9d3, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9d4, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9d5, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9d6, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9d7, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9d8, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9d9, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9da, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9db, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9dc, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9dd, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9de, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9df, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9e0, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9e1, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9e2, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9e3, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9e4, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9e5, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9e6, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9e7, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9e8, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9e9, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9ea, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9eb, 0x3, 0x2, 
       0x2, 0x2, 0x9f0, 0x9ec, 0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9ee, 0x3, 0x2, 
       0x2, 0x2, 0x9f1, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x9f2, 0x9fa, 0x7, 0x91, 
       0x2, 0x2, 0x9f3, 0x9fa, 0x7, 0x97, 0x2, 0x2, 0x9f4, 0x9fa, 0x7, 0x98, 
       0x2, 0x2, 0x9f5, 0x9fa, 0x7, 0x99, 0x2, 0x2, 0x9f6, 0x9fa, 0x5, 0x1a8, 
       0xd5, 0x2, 0x9f7, 0x9fa, 0x5, 0x1aa, 0xd6, 0x2, 0x9f8, 0x9fa, 0x5, 
       0x1ac, 0xd7, 0x2, 0x9f9, 0x9f2, 0x3, 0x2, 0x2, 0x2, 0x9f9, 0x9f3, 
       0x3, 0x2, 0x2, 0x2, 0x9f9, 0x9f4, 0x3, 0x2, 0x2, 0x2, 0x9f9, 0x9f5, 
       0x3, 0x2, 0x2, 0x2, 0x9f9, 0x9f6, 0x3, 0x2, 0x2, 0x2, 0x9f9, 0x9f7, 
       0x3, 0x2, 0x2, 0x2, 0x9f9, 0x9f8, 0x3, 0x2, 0x2, 0x2, 0x9fa, 0x1a7, 
       0x3, 0x2, 0x2, 0x2, 0x9fb, 0x9fc, 0x9, 0xe, 0x2, 0x2, 0x9fc, 0x1a9, 
       0x3, 0x2, 0x2, 0x2, 0x9fd, 0x9fe, 0x7, 0x3d, 0x2, 0x2, 0x9fe, 0x1ab, 
       0x3, 0x2, 0x2, 0x2, 0x9ff, 0xa00, 0x9, 0xf, 0x2, 0x2, 0xa00, 0x1ad, 
       0x3, 0x2, 0x2, 0x2, 0x140, 0x1af, 0x1c3, 0x1df, 0x1ee, 0x1f8, 0x1fc, 
       0x207, 0x20b, 0x21a, 0x221, 0x226, 0x228, 0x22d, 0x233, 0x23d, 0x244, 
       0x24a, 0x24e, 0x253, 0x259, 0x260, 0x266, 0x269, 0x26c, 0x26f, 0x276, 
       0x27d, 0x2b1, 0x2c0, 0x2c6, 0x2cc, 0x2d9, 0x2db, 0x2e5, 0x2f4, 0x2fa, 
       0x318, 0x31d, 0x321, 0x325, 0x328, 0x32c, 0x332, 0x334, 0x33c, 0x340, 
       0x343, 0x34a, 0x351, 0x355, 0x35a, 0x35e, 0x361, 0x366, 0x36c, 0x379, 
       0x384, 0x386, 0x395, 0x397, 0x3a3, 0x3a5, 0x3b1, 0x3c5, 0x3c7, 0x3d3, 
       0x3d5, 0x3e0, 0x3eb, 0x3f6, 0x402, 0x404, 0x410, 0x412, 0x41c, 0x424, 
       0x430, 0x437, 0x43b, 0x43f, 0x443, 0x447, 0x44e, 0x451, 0x454, 0x45a, 
       0x462, 0x467, 0x46a, 0x470, 0x47b, 0x492, 0x496, 0x49e, 0x4a4, 0x4b8, 
       0x4bc, 0x4c9, 0x4cd, 0x4d0, 0x4d7, 0x4df, 0x4e9, 0x4f4, 0x501, 0x50b, 
       0x510, 0x517, 0x51a, 0x51f, 0x524, 0x539, 0x53d, 0x542, 0x54e, 0x554, 
       0x558, 0x55d, 0x561, 0x566, 0x569, 0x57f, 0x585, 0x590, 0x594, 0x597, 
       0x5a1, 0x5a7, 0x5aa, 0x5b1, 0x5bb, 0x5bf, 0x5c2, 0x5c5, 0x5c9, 0x5ce, 
       0x5d0, 0x5d4, 0x5d8, 0x5e1, 0x5ee, 0x5f6, 0x5fc, 0x602, 0x607, 0x610, 
       0x618, 0x623, 0x629, 0x634, 0x637, 0x63c, 0x64b, 0x651, 0x65a, 0x664, 
       0x66a, 0x672, 0x676, 0x67a, 0x67f, 0x684, 0x68b, 0x68d, 0x692, 0x696, 
       0x6a4, 0x6aa, 0x6b9, 0x6c3, 0x6c8, 0x6cf, 0x6d5, 0x6da, 0x6e0, 0x6e7, 
       0x6eb, 0x6ed, 0x6ef, 0x6f6, 0x6f9, 0x6fc, 0x6ff, 0x704, 0x708, 0x70b, 
       0x70f, 0x713, 0x718, 0x71b, 0x71d, 0x721, 0x728, 0x72e, 0x732, 0x738, 
       0x73d, 0x73f, 0x745, 0x749, 0x74f, 0x756, 0x75a, 0x75c, 0x75e, 0x765, 
       0x76f, 0x773, 0x775, 0x777, 0x77b, 0x77e, 0x784, 0x78e, 0x792, 0x798, 
       0x7a0, 0x7a4, 0x7a7, 0x7ab, 0x7b0, 0x7b3, 0x7b6, 0x7ba, 0x7bf, 0x7c9, 
       0x7d0, 0x7d5, 0x7da, 0x7df, 0x7e5, 0x7e9, 0x7ef, 0x7f5, 0x7f9, 0x7fe, 
       0x804, 0x808, 0x80b, 0x80f, 0x812, 0x814, 0x817, 0x821, 0x826, 0x828, 
       0x82d, 0x830, 0x833, 0x83b, 0x845, 0x84a, 0x84d, 0x851, 0x854, 0x857, 
       0x85b, 0x861, 0x864, 0x86f, 0x87d, 0x883, 0x887, 0x88b, 0x88f, 0x893, 
       0x897, 0x89b, 0x89f, 0x8a2, 0x8a6, 0x8b1, 0x8b5, 0x8bc, 0x8c0, 0x8c5, 
       0x8ca, 0x8d1, 0x8d5, 0x8df, 0x8ef, 0x8f4, 0x8f8, 0x8fb, 0x8ff, 0x905, 
       0x908, 0x90c, 0x916, 0x919, 0x921, 0x926, 0x92b, 0x933, 0x93a, 0x93e, 
       0x945, 0x94b, 0x94f, 0x955, 0x95e, 0x962, 0x965, 0x975, 0x97c, 0x985, 
       0x98b, 0x98f, 0x992, 0x996, 0x99a, 0x99f, 0x9a6, 0x9ac, 0x9b0, 0x9b9, 
       0x9f0, 0x9f9, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

AergiaCpp14Parser::Initializer AergiaCpp14Parser::_init;
