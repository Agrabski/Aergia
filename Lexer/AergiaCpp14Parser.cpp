
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
    setState(421);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__10)
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
      | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (AergiaCpp14Parser::Register - 64))
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
      ((1ULL << (_la - 136)) & ((1ULL << (AergiaCpp14Parser::Doublecolon - 136))
      | (1ULL << (AergiaCpp14Parser::Semi - 136))
      | (1ULL << (AergiaCpp14Parser::Ellipsis - 136))
      | (1ULL << (AergiaCpp14Parser::Identifier - 136)))) != 0)) {
      setState(420);
      declarationseq(0);
    }
    setState(423);
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
    setState(425);
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
    setState(427);
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
    setState(429);
    match(AergiaCpp14Parser::T__2);
    setState(430);
    statementseq(0);
    setState(431);
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
    setState(441);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(433);
      aergiaexpressionbegin();
      setState(434);
      callchain();
      setState(435);
      aergiaexpressionend();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(437);
      aergiaexpressionbegin();
      setState(438);
      anonymousExpression();
      setState(439);
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
  enterRule(_localctx, 10, AergiaCpp14Parser::RuleAnonymousExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    match(AergiaCpp14Parser::T__4);
    setState(444);
    match(AergiaCpp14Parser::LeftParen);
    setState(445);
    anoynmousBody();
    setState(446);
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
  enterRule(_localctx, 12, AergiaCpp14Parser::RuleAnoynmousBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(448);
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
  enterRule(_localctx, 14, AergiaCpp14Parser::RuleForeach);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    match(AergiaCpp14Parser::T__5);
    setState(451);
    foreachheader();
    setState(452);
    match(AergiaCpp14Parser::RightParen);
    setState(453);
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
  enterRule(_localctx, 16, AergiaCpp14Parser::RuleForeachheader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    aergiaexpressionbegin();
    setState(456);
    match(AergiaCpp14Parser::Identifier);
    setState(457);
    match(AergiaCpp14Parser::T__6);
    setState(458);
    aergiaexpressionbegin();
    setState(459);
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

AergiaCpp14Parser::AergiaexpressionContext* AergiaCpp14Parser::ForeachbodyContext::aergiaexpression() {
  return getRuleContext<AergiaCpp14Parser::AergiaexpressionContext>(0);
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
  enterRule(_localctx, 18, AergiaCpp14Parser::RuleForeachbody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(463);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(461);
        aergiaexpression();
        break;
      }

      case AergiaCpp14Parser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(462);
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
  enterRule(_localctx, 20, AergiaCpp14Parser::RuleCallchain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(478);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(465);
      match(AergiaCpp14Parser::Identifier);
      setState(466);
      match(AergiaCpp14Parser::Dot);
      setState(467);
      callchain();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(468);
      match(AergiaCpp14Parser::Identifier);
      setState(469);
      match(AergiaCpp14Parser::LeftParen);
      setState(470);
      match(AergiaCpp14Parser::Identifier);
      setState(471);
      match(AergiaCpp14Parser::T__7);
      setState(472);
      callchain();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(473);
      match(AergiaCpp14Parser::Identifier);
      setState(474);
      match(AergiaCpp14Parser::LeftParen);
      setState(475);
      match(AergiaCpp14Parser::Identifier);
      setState(476);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(477);
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
  enterRule(_localctx, 22, AergiaCpp14Parser::RulePrimaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(488);
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
        setState(480);
        literal();
        break;
      }

      case AergiaCpp14Parser::This: {
        enterOuterAlt(_localctx, 2);
        setState(481);
        match(AergiaCpp14Parser::This);
        break;
      }

      case AergiaCpp14Parser::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(482);
        match(AergiaCpp14Parser::LeftParen);
        setState(483);
        expression(0);
        setState(484);
        match(AergiaCpp14Parser::RightParen);
        break;
      }

      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Operator:
      case AergiaCpp14Parser::Tilde:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(486);
        idexpression();
        break;
      }

      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 5);
        setState(487);
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
  enterRule(_localctx, 24, AergiaCpp14Parser::RuleIdexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(492);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(490);
      unqualifiedid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(491);
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
  enterRule(_localctx, 26, AergiaCpp14Parser::RuleUnqualifiedid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(503);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(494);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(495);
      operatorfunctionid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(496);
      conversionfunctionid();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(497);
      literaloperatorid();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(498);
      match(AergiaCpp14Parser::Tilde);
      setState(499);
      classname();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(500);
      match(AergiaCpp14Parser::Tilde);
      setState(501);
      decltypespecifier();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(502);
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
  enterRule(_localctx, 28, AergiaCpp14Parser::RuleQualifiedid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(505);
    nestednamespecifier(0);
    setState(507);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Template) {
      setState(506);
      match(AergiaCpp14Parser::Template);
    }
    setState(509);
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
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, AergiaCpp14Parser::RuleNestednamespecifier, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(522);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(512);
      match(AergiaCpp14Parser::Doublecolon);
      break;
    }

    case 2: {
      setState(513);
      thetypename();
      setState(514);
      match(AergiaCpp14Parser::Doublecolon);
      break;
    }

    case 3: {
      setState(516);
      namespacename();
      setState(517);
      match(AergiaCpp14Parser::Doublecolon);
      break;
    }

    case 4: {
      setState(519);
      decltypespecifier();
      setState(520);
      match(AergiaCpp14Parser::Doublecolon);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(536);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(534);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NestednamespecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestednamespecifier);
          setState(524);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(525);
          match(AergiaCpp14Parser::Identifier);
          setState(526);
          match(AergiaCpp14Parser::Doublecolon);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NestednamespecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestednamespecifier);
          setState(527);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(529);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == AergiaCpp14Parser::Template) {
            setState(528);
            match(AergiaCpp14Parser::Template);
          }
          setState(531);
          simpletemplateid();
          setState(532);
          match(AergiaCpp14Parser::Doublecolon);
          break;
        }

        } 
      }
      setState(538);
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
  enterRule(_localctx, 32, AergiaCpp14Parser::RuleLambdaexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(539);
    lambdaintroducer();
    setState(541);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::LeftParen) {
      setState(540);
      lambdadeclarator();
    }
    setState(543);
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
  enterRule(_localctx, 34, AergiaCpp14Parser::RuleLambdaintroducer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(545);
    match(AergiaCpp14Parser::LeftBracket);
    setState(547);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & ((1ULL << (AergiaCpp14Parser::This - 76))
      | (1ULL << (AergiaCpp14Parser::And - 76))
      | (1ULL << (AergiaCpp14Parser::Assign - 76)))) != 0) || _la == AergiaCpp14Parser::Identifier) {
      setState(546);
      lambdacapture();
    }
    setState(549);
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
  enterRule(_localctx, 36, AergiaCpp14Parser::RuleLambdacapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(557);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(551);
      capturedefault();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(552);
      capturelist(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(553);
      capturedefault();
      setState(554);
      match(AergiaCpp14Parser::Comma);
      setState(555);
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
  enterRule(_localctx, 38, AergiaCpp14Parser::RuleCapturedefault);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
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
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, AergiaCpp14Parser::RuleCapturelist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(562);
    capture();
    setState(564);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(563);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(574);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<CapturelistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleCapturelist);
        setState(566);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(567);
        match(AergiaCpp14Parser::Comma);
        setState(568);
        capture();
        setState(570);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          setState(569);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(576);
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
  enterRule(_localctx, 42, AergiaCpp14Parser::RuleCapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(579);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(577);
      simplecapture();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(578);
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
  enterRule(_localctx, 44, AergiaCpp14Parser::RuleSimplecapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(585);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(581);
        match(AergiaCpp14Parser::Identifier);
        break;
      }

      case AergiaCpp14Parser::And: {
        enterOuterAlt(_localctx, 2);
        setState(582);
        match(AergiaCpp14Parser::And);
        setState(583);
        match(AergiaCpp14Parser::Identifier);
        break;
      }

      case AergiaCpp14Parser::This: {
        enterOuterAlt(_localctx, 3);
        setState(584);
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
  enterRule(_localctx, 46, AergiaCpp14Parser::RuleInitcapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(592);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(587);
        match(AergiaCpp14Parser::Identifier);
        setState(588);
        initializer();
        break;
      }

      case AergiaCpp14Parser::And: {
        enterOuterAlt(_localctx, 2);
        setState(589);
        match(AergiaCpp14Parser::And);
        setState(590);
        match(AergiaCpp14Parser::Identifier);
        setState(591);
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
  enterRule(_localctx, 48, AergiaCpp14Parser::RuleLambdadeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(594);
    match(AergiaCpp14Parser::LeftParen);
    setState(595);
    parameterdeclarationclause();
    setState(596);
    match(AergiaCpp14Parser::RightParen);
    setState(598);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Mutable) {
      setState(597);
      match(AergiaCpp14Parser::Mutable);
    }
    setState(601);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Noexcept

    || _la == AergiaCpp14Parser::Throw) {
      setState(600);
      exceptionspecification();
    }
    setState(604);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(603);
      attributespecifierseq(0);
    }
    setState(607);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Arrow) {
      setState(606);
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
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, AergiaCpp14Parser::RulePostfixexpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(673);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(610);
      primaryexpression();
      break;
    }

    case 2: {
      setState(611);
      simpletypespecifier();
      setState(612);
      match(AergiaCpp14Parser::LeftParen);
      setState(614);
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
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Short - 65))
        | (1ULL << (AergiaCpp14Parser::Signed - 65))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
        | (1ULL << (AergiaCpp14Parser::This - 65))
        | (1ULL << (AergiaCpp14Parser::Throw - 65))
        | (1ULL << (AergiaCpp14Parser::True - 65))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
        | (1ULL << (AergiaCpp14Parser::Void - 65))
        | (1ULL << (AergiaCpp14Parser::Wchar - 65))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBrace - 65))
        | (1ULL << (AergiaCpp14Parser::Plus - 65))
        | (1ULL << (AergiaCpp14Parser::Minus - 65))
        | (1ULL << (AergiaCpp14Parser::Star - 65))
        | (1ULL << (AergiaCpp14Parser::And - 65))
        | (1ULL << (AergiaCpp14Parser::Or - 65))
        | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
        | (1ULL << (AergiaCpp14Parser::Identifier - 129))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
        setState(613);
        expressionlist();
      }
      setState(616);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 3: {
      setState(618);
      typenamespecifier();
      setState(619);
      match(AergiaCpp14Parser::LeftParen);
      setState(621);
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
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Short - 65))
        | (1ULL << (AergiaCpp14Parser::Signed - 65))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
        | (1ULL << (AergiaCpp14Parser::This - 65))
        | (1ULL << (AergiaCpp14Parser::Throw - 65))
        | (1ULL << (AergiaCpp14Parser::True - 65))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
        | (1ULL << (AergiaCpp14Parser::Void - 65))
        | (1ULL << (AergiaCpp14Parser::Wchar - 65))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBrace - 65))
        | (1ULL << (AergiaCpp14Parser::Plus - 65))
        | (1ULL << (AergiaCpp14Parser::Minus - 65))
        | (1ULL << (AergiaCpp14Parser::Star - 65))
        | (1ULL << (AergiaCpp14Parser::And - 65))
        | (1ULL << (AergiaCpp14Parser::Or - 65))
        | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
        | (1ULL << (AergiaCpp14Parser::Identifier - 129))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
        setState(620);
        expressionlist();
      }
      setState(623);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 4: {
      setState(625);
      simpletypespecifier();
      setState(626);
      bracedinitlist();
      break;
    }

    case 5: {
      setState(628);
      typenamespecifier();
      setState(629);
      bracedinitlist();
      break;
    }

    case 6: {
      setState(631);
      match(AergiaCpp14Parser::Dynamic_cast);
      setState(632);
      match(AergiaCpp14Parser::Less);
      setState(633);
      thetypeid();
      setState(634);
      match(AergiaCpp14Parser::Greater);
      setState(635);
      match(AergiaCpp14Parser::LeftParen);
      setState(636);
      expression(0);
      setState(637);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 7: {
      setState(639);
      match(AergiaCpp14Parser::Static_cast);
      setState(640);
      match(AergiaCpp14Parser::Less);
      setState(641);
      thetypeid();
      setState(642);
      match(AergiaCpp14Parser::Greater);
      setState(643);
      match(AergiaCpp14Parser::LeftParen);
      setState(644);
      expression(0);
      setState(645);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 8: {
      setState(647);
      match(AergiaCpp14Parser::Reinterpret_cast);
      setState(648);
      match(AergiaCpp14Parser::Less);
      setState(649);
      thetypeid();
      setState(650);
      match(AergiaCpp14Parser::Greater);
      setState(651);
      match(AergiaCpp14Parser::LeftParen);
      setState(652);
      expression(0);
      setState(653);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 9: {
      setState(655);
      match(AergiaCpp14Parser::Const_cast);
      setState(656);
      match(AergiaCpp14Parser::Less);
      setState(657);
      thetypeid();
      setState(658);
      match(AergiaCpp14Parser::Greater);
      setState(659);
      match(AergiaCpp14Parser::LeftParen);
      setState(660);
      expression(0);
      setState(661);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 10: {
      setState(663);
      typeidofthetypeid();
      setState(664);
      match(AergiaCpp14Parser::LeftParen);
      setState(665);
      expression(0);
      setState(666);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 11: {
      setState(668);
      typeidofthetypeid();
      setState(669);
      match(AergiaCpp14Parser::LeftParen);
      setState(670);
      thetypeid();
      setState(671);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(715);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(713);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(675);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(676);
          match(AergiaCpp14Parser::LeftBracket);
          setState(677);
          expression(0);
          setState(678);
          match(AergiaCpp14Parser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(680);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(681);
          match(AergiaCpp14Parser::LeftBracket);
          setState(682);
          bracedinitlist();
          setState(683);
          match(AergiaCpp14Parser::RightBracket);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(685);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(686);
          match(AergiaCpp14Parser::LeftParen);
          setState(688);
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
            | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
            | (1ULL << (AergiaCpp14Parser::Short - 65))
            | (1ULL << (AergiaCpp14Parser::Signed - 65))
            | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
            | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
            | (1ULL << (AergiaCpp14Parser::This - 65))
            | (1ULL << (AergiaCpp14Parser::Throw - 65))
            | (1ULL << (AergiaCpp14Parser::True - 65))
            | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
            | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
            | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
            | (1ULL << (AergiaCpp14Parser::Void - 65))
            | (1ULL << (AergiaCpp14Parser::Wchar - 65))
            | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
            | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
            | (1ULL << (AergiaCpp14Parser::LeftBrace - 65))
            | (1ULL << (AergiaCpp14Parser::Plus - 65))
            | (1ULL << (AergiaCpp14Parser::Minus - 65))
            | (1ULL << (AergiaCpp14Parser::Star - 65))
            | (1ULL << (AergiaCpp14Parser::And - 65))
            | (1ULL << (AergiaCpp14Parser::Or - 65))
            | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
            | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
            | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
            | (1ULL << (AergiaCpp14Parser::Identifier - 129))
            | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
            setState(687);
            expressionlist();
          }
          setState(690);
          match(AergiaCpp14Parser::RightParen);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(691);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(692);
          match(AergiaCpp14Parser::Dot);
          setState(694);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == AergiaCpp14Parser::Template) {
            setState(693);
            match(AergiaCpp14Parser::Template);
          }
          setState(696);
          idexpression();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(697);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(698);
          match(AergiaCpp14Parser::Arrow);
          setState(700);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == AergiaCpp14Parser::Template) {
            setState(699);
            match(AergiaCpp14Parser::Template);
          }
          setState(702);
          idexpression();
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(703);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(704);
          match(AergiaCpp14Parser::Dot);
          setState(705);
          pseudodestructorname();
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(706);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(707);
          match(AergiaCpp14Parser::Arrow);
          setState(708);
          pseudodestructorname();
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(709);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(710);
          match(AergiaCpp14Parser::PlusPlus);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(711);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(712);
          match(AergiaCpp14Parser::MinusMinus);
          break;
        }

        } 
      }
      setState(717);
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
  enterRule(_localctx, 52, AergiaCpp14Parser::RuleTypeidofexpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(718);
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
  enterRule(_localctx, 54, AergiaCpp14Parser::RuleTypeidofthetypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(720);
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
  enterRule(_localctx, 56, AergiaCpp14Parser::RuleExpressionlist);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(722);
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
  enterRule(_localctx, 58, AergiaCpp14Parser::RulePseudodestructorname);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(746);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(725);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
      case 1: {
        setState(724);
        nestednamespecifier(0);
        break;
      }

      }
      setState(727);
      thetypename();
      setState(728);
      match(AergiaCpp14Parser::Doublecolon);
      setState(729);
      match(AergiaCpp14Parser::Tilde);
      setState(730);
      thetypename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(732);
      nestednamespecifier(0);
      setState(733);
      match(AergiaCpp14Parser::Template);
      setState(734);
      simpletemplateid();
      setState(735);
      match(AergiaCpp14Parser::Doublecolon);
      setState(736);
      match(AergiaCpp14Parser::Tilde);
      setState(737);
      thetypename();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(740);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Decltype || _la == AergiaCpp14Parser::Doublecolon

      || _la == AergiaCpp14Parser::Identifier) {
        setState(739);
        nestednamespecifier(0);
      }
      setState(742);
      match(AergiaCpp14Parser::Tilde);
      setState(743);
      thetypename();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(744);
      match(AergiaCpp14Parser::Tilde);
      setState(745);
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
  enterRule(_localctx, 60, AergiaCpp14Parser::RuleUnaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(776);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(748);
      postfixexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(749);
      match(AergiaCpp14Parser::PlusPlus);
      setState(750);
      castexpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(751);
      match(AergiaCpp14Parser::MinusMinus);
      setState(752);
      castexpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(753);
      unaryoperator();
      setState(754);
      castexpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(756);
      match(AergiaCpp14Parser::Sizeof);
      setState(757);
      unaryexpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(758);
      match(AergiaCpp14Parser::Sizeof);
      setState(759);
      match(AergiaCpp14Parser::LeftParen);
      setState(760);
      thetypeid();
      setState(761);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(763);
      match(AergiaCpp14Parser::Sizeof);
      setState(764);
      match(AergiaCpp14Parser::Ellipsis);
      setState(765);
      match(AergiaCpp14Parser::LeftParen);
      setState(766);
      match(AergiaCpp14Parser::Identifier);
      setState(767);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(768);
      match(AergiaCpp14Parser::Alignof);
      setState(769);
      match(AergiaCpp14Parser::LeftParen);
      setState(770);
      thetypeid();
      setState(771);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(773);
      noexceptexpression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(774);
      newexpression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(775);
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
  enterRule(_localctx, 62, AergiaCpp14Parser::RuleUnaryoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(778);
    _la = _input->LA(1);
    if (!(_la == AergiaCpp14Parser::T__8

    || _la == AergiaCpp14Parser::T__9 || ((((_la - 98) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 98)) & ((1ULL << (AergiaCpp14Parser::Plus - 98))
      | (1ULL << (AergiaCpp14Parser::Minus - 98))
      | (1ULL << (AergiaCpp14Parser::Star - 98))
      | (1ULL << (AergiaCpp14Parser::And - 98))
      | (1ULL << (AergiaCpp14Parser::Or - 98))
      | (1ULL << (AergiaCpp14Parser::Tilde - 98)))) != 0))) {
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
  enterRule(_localctx, 64, AergiaCpp14Parser::RuleNewexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(804);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(781);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Doublecolon) {
        setState(780);
        match(AergiaCpp14Parser::Doublecolon);
      }
      setState(783);
      match(AergiaCpp14Parser::New);
      setState(785);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::LeftParen) {
        setState(784);
        newplacement();
      }
      setState(787);
      newtypeid();
      setState(789);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(788);
        newinitializer();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(792);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Doublecolon) {
        setState(791);
        match(AergiaCpp14Parser::Doublecolon);
      }
      setState(794);
      match(AergiaCpp14Parser::New);
      setState(796);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
      case 1: {
        setState(795);
        newplacement();
        break;
      }

      }
      setState(798);
      match(AergiaCpp14Parser::LeftParen);
      setState(799);
      thetypeid();
      setState(800);
      match(AergiaCpp14Parser::RightParen);
      setState(802);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
      case 1: {
        setState(801);
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
  enterRule(_localctx, 66, AergiaCpp14Parser::RuleNewplacement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(806);
    match(AergiaCpp14Parser::LeftParen);
    setState(807);
    expressionlist();
    setState(808);
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
  enterRule(_localctx, 68, AergiaCpp14Parser::RuleNewtypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(810);
    typespecifierseq();
    setState(812);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(811);
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
  enterRule(_localctx, 70, AergiaCpp14Parser::RuleNewdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(819);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::T__10:
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Star:
      case AergiaCpp14Parser::And:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(814);
        ptroperator();
        setState(816);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
        case 1: {
          setState(815);
          newdeclarator();
          break;
        }

        }
        break;
      }

      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(818);
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
  size_t startState = 72;
  enterRecursionRule(_localctx, 72, AergiaCpp14Parser::RuleNoptrnewdeclarator, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(822);
    match(AergiaCpp14Parser::LeftBracket);
    setState(823);
    expression(0);
    setState(824);
    match(AergiaCpp14Parser::RightBracket);
    setState(826);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(825);
      attributespecifierseq(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(837);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoptrnewdeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoptrnewdeclarator);
        setState(828);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(829);
        match(AergiaCpp14Parser::LeftBracket);
        setState(830);
        constantexpression();
        setState(831);
        match(AergiaCpp14Parser::RightBracket);
        setState(833);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
        case 1: {
          setState(832);
          attributespecifierseq(0);
          break;
        }

        } 
      }
      setState(839);
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
  enterRule(_localctx, 74, AergiaCpp14Parser::RuleNewinitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(846);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(840);
        match(AergiaCpp14Parser::LeftParen);
        setState(842);
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
          | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
          | (1ULL << (AergiaCpp14Parser::Short - 65))
          | (1ULL << (AergiaCpp14Parser::Signed - 65))
          | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
          | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
          | (1ULL << (AergiaCpp14Parser::This - 65))
          | (1ULL << (AergiaCpp14Parser::Throw - 65))
          | (1ULL << (AergiaCpp14Parser::True - 65))
          | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
          | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
          | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
          | (1ULL << (AergiaCpp14Parser::Void - 65))
          | (1ULL << (AergiaCpp14Parser::Wchar - 65))
          | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
          | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
          | (1ULL << (AergiaCpp14Parser::LeftBrace - 65))
          | (1ULL << (AergiaCpp14Parser::Plus - 65))
          | (1ULL << (AergiaCpp14Parser::Minus - 65))
          | (1ULL << (AergiaCpp14Parser::Star - 65))
          | (1ULL << (AergiaCpp14Parser::And - 65))
          | (1ULL << (AergiaCpp14Parser::Or - 65))
          | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
          | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
          | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
          | (1ULL << (AergiaCpp14Parser::Identifier - 129))
          | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
          | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
          | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
          | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
          | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
          | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
          | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
          | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
          setState(841);
          expressionlist();
        }
        setState(844);
        match(AergiaCpp14Parser::RightParen);
        break;
      }

      case AergiaCpp14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(845);
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
  enterRule(_localctx, 76, AergiaCpp14Parser::RuleDeleteexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(860);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(849);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Doublecolon) {
        setState(848);
        match(AergiaCpp14Parser::Doublecolon);
      }
      setState(851);
      match(AergiaCpp14Parser::Delete);
      setState(852);
      castexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(854);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Doublecolon) {
        setState(853);
        match(AergiaCpp14Parser::Doublecolon);
      }
      setState(856);
      match(AergiaCpp14Parser::Delete);
      setState(857);
      match(AergiaCpp14Parser::LeftBracket);
      setState(858);
      match(AergiaCpp14Parser::RightBracket);
      setState(859);
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
  enterRule(_localctx, 78, AergiaCpp14Parser::RuleNoexceptexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(862);
    match(AergiaCpp14Parser::Noexcept);
    setState(863);
    match(AergiaCpp14Parser::LeftParen);
    setState(864);
    expression(0);
    setState(865);
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
  enterRule(_localctx, 80, AergiaCpp14Parser::RuleCastexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(873);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(867);
      unaryexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(868);
      match(AergiaCpp14Parser::LeftParen);
      setState(869);
      thetypeid();
      setState(870);
      match(AergiaCpp14Parser::RightParen);
      setState(871);
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
  size_t startState = 82;
  enterRecursionRule(_localctx, 82, AergiaCpp14Parser::RulePmexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(876);
    castexpression();
    _ctx->stop = _input->LT(-1);
    setState(886);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(884);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PmexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePmexpression);
          setState(878);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(879);
          match(AergiaCpp14Parser::DotStar);
          setState(880);
          castexpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PmexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePmexpression);
          setState(881);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(882);
          match(AergiaCpp14Parser::ArrowStar);
          setState(883);
          castexpression();
          break;
        }

        } 
      }
      setState(888);
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
  size_t startState = 84;
  enterRecursionRule(_localctx, 84, AergiaCpp14Parser::RuleMultiplicativeexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(890);
    pmexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(903);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(901);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(892);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(893);
          match(AergiaCpp14Parser::Star);
          setState(894);
          pmexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(895);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(896);
          match(AergiaCpp14Parser::Div);
          setState(897);
          pmexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(898);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(899);
          match(AergiaCpp14Parser::Mod);
          setState(900);
          pmexpression(0);
          break;
        }

        } 
      }
      setState(905);
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
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, AergiaCpp14Parser::RuleAdditiveexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(907);
    multiplicativeexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(917);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(915);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(909);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(910);
          match(AergiaCpp14Parser::Plus);
          setState(911);
          multiplicativeexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(912);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(913);
          match(AergiaCpp14Parser::Minus);
          setState(914);
          multiplicativeexpression(0);
          break;
        }

        } 
      }
      setState(919);
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
  size_t startState = 88;
  enterRecursionRule(_localctx, 88, AergiaCpp14Parser::RuleShiftexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(921);
    additiveexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(929);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ShiftexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleShiftexpression);
        setState(923);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(924);
        shiftoperator();
        setState(925);
        additiveexpression(0); 
      }
      setState(931);
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
  enterRule(_localctx, 90, AergiaCpp14Parser::RuleShiftoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(932);
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
  size_t startState = 92;
  enterRecursionRule(_localctx, 92, AergiaCpp14Parser::RuleRelationalexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(935);
    shiftexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(951);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(949);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(937);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(938);
          match(AergiaCpp14Parser::Less);
          setState(939);
          shiftexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(940);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(941);
          match(AergiaCpp14Parser::Greater);
          setState(942);
          shiftexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(943);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(944);
          match(AergiaCpp14Parser::LessEqual);
          setState(945);
          shiftexpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(946);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(947);
          match(AergiaCpp14Parser::GreaterEqual);
          setState(948);
          shiftexpression(0);
          break;
        }

        } 
      }
      setState(953);
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
  size_t startState = 94;
  enterRecursionRule(_localctx, 94, AergiaCpp14Parser::RuleEqualityexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(955);
    relationalexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(965);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(963);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(957);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(958);
          match(AergiaCpp14Parser::Equal);
          setState(959);
          relationalexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(960);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(961);
          match(AergiaCpp14Parser::NotEqual);
          setState(962);
          relationalexpression(0);
          break;
        }

        } 
      }
      setState(967);
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
  size_t startState = 96;
  enterRecursionRule(_localctx, 96, AergiaCpp14Parser::RuleAndexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(969);
    equalityexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(976);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndexpression);
        setState(971);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(972);
        match(AergiaCpp14Parser::And);
        setState(973);
        equalityexpression(0); 
      }
      setState(978);
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
  size_t startState = 98;
  enterRecursionRule(_localctx, 98, AergiaCpp14Parser::RuleExclusiveorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(980);
    andexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(987);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveorexpression);
        setState(982);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(983);
        match(AergiaCpp14Parser::Caret);
        setState(984);
        andexpression(0); 
      }
      setState(989);
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
  size_t startState = 100;
  enterRecursionRule(_localctx, 100, AergiaCpp14Parser::RuleInclusiveorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(991);
    exclusiveorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(998);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveorexpression);
        setState(993);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(994);
        match(AergiaCpp14Parser::Or);
        setState(995);
        exclusiveorexpression(0); 
      }
      setState(1000);
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
  size_t startState = 102;
  enterRecursionRule(_localctx, 102, AergiaCpp14Parser::RuleLogicalandexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1002);
    inclusiveorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(1012);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1010);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<LogicalandexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalandexpression);
          setState(1004);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1005);
          match(AergiaCpp14Parser::T__10);
          setState(1006);
          inclusiveorexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<LogicalandexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalandexpression);
          setState(1007);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1008);
          match(AergiaCpp14Parser::T__11);
          setState(1009);
          inclusiveorexpression(0);
          break;
        }

        } 
      }
      setState(1014);
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
  size_t startState = 104;
  enterRecursionRule(_localctx, 104, AergiaCpp14Parser::RuleLogicalorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1016);
    logicalandexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(1026);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1024);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<LogicalorexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalorexpression);
          setState(1018);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1019);
          match(AergiaCpp14Parser::T__12);
          setState(1020);
          logicalandexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<LogicalorexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalorexpression);
          setState(1021);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1022);
          match(AergiaCpp14Parser::T__13);
          setState(1023);
          logicalandexpression(0);
          break;
        }

        } 
      }
      setState(1028);
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
  enterRule(_localctx, 106, AergiaCpp14Parser::RuleConditionalexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1036);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1029);
      logicalorexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1030);
      logicalorexpression(0);
      setState(1031);
      match(AergiaCpp14Parser::Question);
      setState(1032);
      expression(0);
      setState(1033);
      match(AergiaCpp14Parser::Colon);
      setState(1034);
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
  enterRule(_localctx, 108, AergiaCpp14Parser::RuleAssignmentexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1044);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1038);
      conditionalexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1039);
      logicalorexpression(0);
      setState(1040);
      assignmentoperator();
      setState(1041);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1043);
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
  enterRule(_localctx, 110, AergiaCpp14Parser::RuleAssignmentoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1046);
    _la = _input->LA(1);
    if (!(((((_la - 108) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 108)) & ((1ULL << (AergiaCpp14Parser::Assign - 108))
      | (1ULL << (AergiaCpp14Parser::PlusAssign - 108))
      | (1ULL << (AergiaCpp14Parser::MinusAssign - 108))
      | (1ULL << (AergiaCpp14Parser::StarAssign - 108))
      | (1ULL << (AergiaCpp14Parser::DivAssign - 108))
      | (1ULL << (AergiaCpp14Parser::ModAssign - 108))
      | (1ULL << (AergiaCpp14Parser::XorAssign - 108))
      | (1ULL << (AergiaCpp14Parser::AndAssign - 108))
      | (1ULL << (AergiaCpp14Parser::OrAssign - 108))
      | (1ULL << (AergiaCpp14Parser::LeftShiftAssign - 108))
      | (1ULL << (AergiaCpp14Parser::RightShiftAssign - 108)))) != 0))) {
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
  size_t startState = 112;
  enterRecursionRule(_localctx, 112, AergiaCpp14Parser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1049);
    assignmentexpression();
    _ctx->stop = _input->LT(-1);
    setState(1056);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(1051);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1052);
        match(AergiaCpp14Parser::Comma);
        setState(1053);
        assignmentexpression(); 
      }
      setState(1058);
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
  enterRule(_localctx, 114, AergiaCpp14Parser::RuleConstantexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1059);
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
  enterRule(_localctx, 116, AergiaCpp14Parser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1089);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1061);
      labeledstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1063);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
      case 1: {
        setState(1062);
        attributespecifierseq(0);
        break;
      }

      }
      setState(1065);
      expressionstatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1067);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1066);
        attributespecifierseq(0);
      }
      setState(1069);
      compoundstatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1071);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1070);
        attributespecifierseq(0);
      }
      setState(1073);
      selectionstatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1075);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1074);
        attributespecifierseq(0);
      }
      setState(1077);
      iterationstatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1079);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1078);
        attributespecifierseq(0);
      }
      setState(1081);
      jumpstatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1082);
      declarationstatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1083);
      aergiaexpression();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1084);
      foreach();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1086);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1085);
        attributespecifierseq(0);
      }
      setState(1088);
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
  enterRule(_localctx, 118, AergiaCpp14Parser::RuleLabeledstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1092);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1091);
        attributespecifierseq(0);
      }
      setState(1094);
      match(AergiaCpp14Parser::Identifier);
      setState(1095);
      match(AergiaCpp14Parser::Colon);
      setState(1096);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1098);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1097);
        attributespecifierseq(0);
      }
      setState(1100);
      match(AergiaCpp14Parser::Case);
      setState(1101);
      constantexpression();
      setState(1102);
      match(AergiaCpp14Parser::Colon);
      setState(1103);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1106);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1105);
        attributespecifierseq(0);
      }
      setState(1108);
      match(AergiaCpp14Parser::Default);
      setState(1109);
      match(AergiaCpp14Parser::Colon);
      setState(1110);
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
  enterRule(_localctx, 120, AergiaCpp14Parser::RuleExpressionstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1114);
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
      | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
      | (1ULL << (AergiaCpp14Parser::Short - 65))
      | (1ULL << (AergiaCpp14Parser::Signed - 65))
      | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
      | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
      | (1ULL << (AergiaCpp14Parser::This - 65))
      | (1ULL << (AergiaCpp14Parser::Throw - 65))
      | (1ULL << (AergiaCpp14Parser::True - 65))
      | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
      | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
      | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
      | (1ULL << (AergiaCpp14Parser::Void - 65))
      | (1ULL << (AergiaCpp14Parser::Wchar - 65))
      | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
      | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
      | (1ULL << (AergiaCpp14Parser::Plus - 65))
      | (1ULL << (AergiaCpp14Parser::Minus - 65))
      | (1ULL << (AergiaCpp14Parser::Star - 65))
      | (1ULL << (AergiaCpp14Parser::And - 65))
      | (1ULL << (AergiaCpp14Parser::Or - 65))
      | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
      | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
      | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
      | (1ULL << (AergiaCpp14Parser::Identifier - 129))
      | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
      setState(1113);
      expression(0);
    }
    setState(1116);
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
  enterRule(_localctx, 122, AergiaCpp14Parser::RuleCompoundstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1118);
    match(AergiaCpp14Parser::LeftBrace);
    setState(1120);
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
      | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (AergiaCpp14Parser::Register - 64))
      | (1ULL << (AergiaCpp14Parser::Reinterpret_cast - 64))
      | (1ULL << (AergiaCpp14Parser::Return - 64))
      | (1ULL << (AergiaCpp14Parser::Short - 64))
      | (1ULL << (AergiaCpp14Parser::Signed - 64))
      | (1ULL << (AergiaCpp14Parser::Sizeof - 64))
      | (1ULL << (AergiaCpp14Parser::Static - 64))
      | (1ULL << (AergiaCpp14Parser::Static_assert - 64))
      | (1ULL << (AergiaCpp14Parser::Static_cast - 64))
      | (1ULL << (AergiaCpp14Parser::Struct - 64))
      | (1ULL << (AergiaCpp14Parser::Switch - 64))
      | (1ULL << (AergiaCpp14Parser::This - 64))
      | (1ULL << (AergiaCpp14Parser::Thread_local - 64))
      | (1ULL << (AergiaCpp14Parser::Throw - 64))
      | (1ULL << (AergiaCpp14Parser::True - 64))
      | (1ULL << (AergiaCpp14Parser::Try - 64))
      | (1ULL << (AergiaCpp14Parser::Typedef - 64))
      | (1ULL << (AergiaCpp14Parser::Typeid_ - 64))
      | (1ULL << (AergiaCpp14Parser::Typename_ - 64))
      | (1ULL << (AergiaCpp14Parser::Union - 64))
      | (1ULL << (AergiaCpp14Parser::Unsigned - 64))
      | (1ULL << (AergiaCpp14Parser::Using - 64))
      | (1ULL << (AergiaCpp14Parser::Virtual - 64))
      | (1ULL << (AergiaCpp14Parser::Void - 64))
      | (1ULL << (AergiaCpp14Parser::Volatile - 64))
      | (1ULL << (AergiaCpp14Parser::Wchar - 64))
      | (1ULL << (AergiaCpp14Parser::While - 64))
      | (1ULL << (AergiaCpp14Parser::LeftParen - 64))
      | (1ULL << (AergiaCpp14Parser::LeftBracket - 64))
      | (1ULL << (AergiaCpp14Parser::LeftBrace - 64))
      | (1ULL << (AergiaCpp14Parser::Plus - 64))
      | (1ULL << (AergiaCpp14Parser::Minus - 64))
      | (1ULL << (AergiaCpp14Parser::Star - 64))
      | (1ULL << (AergiaCpp14Parser::And - 64))
      | (1ULL << (AergiaCpp14Parser::Or - 64))
      | (1ULL << (AergiaCpp14Parser::Tilde - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
      | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
      | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
      | (1ULL << (AergiaCpp14Parser::Semi - 129))
      | (1ULL << (AergiaCpp14Parser::Ellipsis - 129))
      | (1ULL << (AergiaCpp14Parser::Identifier - 129))
      | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
      setState(1119);
      statementseq(0);
    }
    setState(1122);
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
  size_t startState = 124;
  enterRecursionRule(_localctx, 124, AergiaCpp14Parser::RuleStatementseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1125);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(1131);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatementseq);
        setState(1127);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1128);
        statement(); 
      }
      setState(1133);
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
  enterRule(_localctx, 126, AergiaCpp14Parser::RuleSelectionstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1154);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1134);
      match(AergiaCpp14Parser::If);
      setState(1135);
      match(AergiaCpp14Parser::LeftParen);
      setState(1136);
      condition();
      setState(1137);
      match(AergiaCpp14Parser::RightParen);
      setState(1138);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1140);
      match(AergiaCpp14Parser::If);
      setState(1141);
      match(AergiaCpp14Parser::LeftParen);
      setState(1142);
      condition();
      setState(1143);
      match(AergiaCpp14Parser::RightParen);
      setState(1144);
      statement();
      setState(1145);
      match(AergiaCpp14Parser::Else);
      setState(1146);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1148);
      match(AergiaCpp14Parser::Switch);
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
  enterRule(_localctx, 128, AergiaCpp14Parser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1156);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1158);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1157);
        attributespecifierseq(0);
      }
      setState(1160);
      declspecifierseq();
      setState(1161);
      declarator();
      setState(1162);
      match(AergiaCpp14Parser::Assign);
      setState(1163);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1166);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1165);
        attributespecifierseq(0);
      }
      setState(1168);
      declspecifierseq();
      setState(1169);
      declarator();
      setState(1170);
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
  enterRule(_localctx, 130, AergiaCpp14Parser::RuleIterationstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1209);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1174);
      match(AergiaCpp14Parser::While);
      setState(1175);
      match(AergiaCpp14Parser::LeftParen);
      setState(1176);
      condition();
      setState(1177);
      match(AergiaCpp14Parser::RightParen);
      setState(1178);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1180);
      match(AergiaCpp14Parser::Do);
      setState(1181);
      statement();
      setState(1182);
      match(AergiaCpp14Parser::While);
      setState(1183);
      match(AergiaCpp14Parser::LeftParen);
      setState(1184);
      expression(0);
      setState(1185);
      match(AergiaCpp14Parser::RightParen);
      setState(1186);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1188);
      match(AergiaCpp14Parser::For);
      setState(1189);
      match(AergiaCpp14Parser::LeftParen);
      setState(1190);
      forinitstatement();
      setState(1192);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__8)
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
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (AergiaCpp14Parser::Register - 64))
        | (1ULL << (AergiaCpp14Parser::Reinterpret_cast - 64))
        | (1ULL << (AergiaCpp14Parser::Short - 64))
        | (1ULL << (AergiaCpp14Parser::Signed - 64))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 64))
        | (1ULL << (AergiaCpp14Parser::Static - 64))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 64))
        | (1ULL << (AergiaCpp14Parser::Struct - 64))
        | (1ULL << (AergiaCpp14Parser::This - 64))
        | (1ULL << (AergiaCpp14Parser::Thread_local - 64))
        | (1ULL << (AergiaCpp14Parser::Throw - 64))
        | (1ULL << (AergiaCpp14Parser::True - 64))
        | (1ULL << (AergiaCpp14Parser::Typedef - 64))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 64))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 64))
        | (1ULL << (AergiaCpp14Parser::Union - 64))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 64))
        | (1ULL << (AergiaCpp14Parser::Virtual - 64))
        | (1ULL << (AergiaCpp14Parser::Void - 64))
        | (1ULL << (AergiaCpp14Parser::Volatile - 64))
        | (1ULL << (AergiaCpp14Parser::Wchar - 64))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 64))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 64))
        | (1ULL << (AergiaCpp14Parser::Plus - 64))
        | (1ULL << (AergiaCpp14Parser::Minus - 64))
        | (1ULL << (AergiaCpp14Parser::Star - 64))
        | (1ULL << (AergiaCpp14Parser::And - 64))
        | (1ULL << (AergiaCpp14Parser::Or - 64))
        | (1ULL << (AergiaCpp14Parser::Tilde - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
        | (1ULL << (AergiaCpp14Parser::Identifier - 129))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
        setState(1191);
        condition();
      }
      setState(1194);
      match(AergiaCpp14Parser::Semi);
      setState(1196);
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
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Short - 65))
        | (1ULL << (AergiaCpp14Parser::Signed - 65))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
        | (1ULL << (AergiaCpp14Parser::This - 65))
        | (1ULL << (AergiaCpp14Parser::Throw - 65))
        | (1ULL << (AergiaCpp14Parser::True - 65))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
        | (1ULL << (AergiaCpp14Parser::Void - 65))
        | (1ULL << (AergiaCpp14Parser::Wchar - 65))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
        | (1ULL << (AergiaCpp14Parser::Plus - 65))
        | (1ULL << (AergiaCpp14Parser::Minus - 65))
        | (1ULL << (AergiaCpp14Parser::Star - 65))
        | (1ULL << (AergiaCpp14Parser::And - 65))
        | (1ULL << (AergiaCpp14Parser::Or - 65))
        | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
        | (1ULL << (AergiaCpp14Parser::Identifier - 129))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
        setState(1195);
        expression(0);
      }
      setState(1198);
      match(AergiaCpp14Parser::RightParen);
      setState(1199);
      statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1201);
      match(AergiaCpp14Parser::For);
      setState(1202);
      match(AergiaCpp14Parser::LeftParen);
      setState(1203);
      forrangedeclaration();
      setState(1204);
      match(AergiaCpp14Parser::Colon);
      setState(1205);
      forrangeinitializer();
      setState(1206);
      match(AergiaCpp14Parser::RightParen);
      setState(1207);
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
  enterRule(_localctx, 132, AergiaCpp14Parser::RuleForinitstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1213);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1211);
      expressionstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1212);
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
  enterRule(_localctx, 134, AergiaCpp14Parser::RuleForrangedeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(1215);
      attributespecifierseq(0);
    }
    setState(1218);
    declspecifierseq();
    setState(1219);
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
  enterRule(_localctx, 136, AergiaCpp14Parser::RuleForrangeinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1223);
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
        setState(1221);
        expression(0);
        break;
      }

      case AergiaCpp14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1222);
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
  enterRule(_localctx, 138, AergiaCpp14Parser::RuleJumpstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1241);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1225);
      match(AergiaCpp14Parser::Break);
      setState(1226);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1227);
      match(AergiaCpp14Parser::Continue);
      setState(1228);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1229);
      match(AergiaCpp14Parser::Return);
      setState(1231);
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
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Short - 65))
        | (1ULL << (AergiaCpp14Parser::Signed - 65))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
        | (1ULL << (AergiaCpp14Parser::This - 65))
        | (1ULL << (AergiaCpp14Parser::Throw - 65))
        | (1ULL << (AergiaCpp14Parser::True - 65))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
        | (1ULL << (AergiaCpp14Parser::Void - 65))
        | (1ULL << (AergiaCpp14Parser::Wchar - 65))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
        | (1ULL << (AergiaCpp14Parser::Plus - 65))
        | (1ULL << (AergiaCpp14Parser::Minus - 65))
        | (1ULL << (AergiaCpp14Parser::Star - 65))
        | (1ULL << (AergiaCpp14Parser::And - 65))
        | (1ULL << (AergiaCpp14Parser::Or - 65))
        | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
        | (1ULL << (AergiaCpp14Parser::Identifier - 129))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
        setState(1230);
        expression(0);
      }
      setState(1233);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1234);
      match(AergiaCpp14Parser::Return);
      setState(1235);
      bracedinitlist();
      setState(1236);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1238);
      match(AergiaCpp14Parser::Goto);
      setState(1239);
      match(AergiaCpp14Parser::Identifier);
      setState(1240);
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
  enterRule(_localctx, 140, AergiaCpp14Parser::RuleDeclarationstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1243);
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
  size_t startState = 142;
  enterRecursionRule(_localctx, 142, AergiaCpp14Parser::RuleDeclarationseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1246);
    declaration();
    _ctx->stop = _input->LT(-1);
    setState(1252);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DeclarationseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDeclarationseq);
        setState(1248);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1249);
        declaration(); 
      }
      setState(1254);
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
  enterRule(_localctx, 144, AergiaCpp14Parser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1265);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1255);
      blockdeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1256);
      functiondefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1257);
      templatedeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1258);
      explicitinstantiation();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1259);
      explicitspecialization();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1260);
      linkagespecification();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1261);
      namespacedefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1262);
      emptydeclaration();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1263);
      attributedeclaration();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1264);
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
  enterRule(_localctx, 146, AergiaCpp14Parser::RuleBlockdeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1275);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1267);
      simpledeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1268);
      asmdefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1269);
      namespacealiasdefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1270);
      usingdeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1271);
      usingdirective();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1272);
      static_assertdeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1273);
      aliasdeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1274);
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
  enterRule(_localctx, 148, AergiaCpp14Parser::RuleAliasdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1277);
    match(AergiaCpp14Parser::Using);
    setState(1278);
    match(AergiaCpp14Parser::Identifier);
    setState(1280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(1279);
      attributespecifierseq(0);
    }
    setState(1282);
    match(AergiaCpp14Parser::Assign);
    setState(1283);
    thetypeid();
    setState(1284);
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
  enterRule(_localctx, 150, AergiaCpp14Parser::RuleSimpledeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1300);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
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
        setState(1287);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
        case 1: {
          setState(1286);
          declspecifierseq();
          break;
        }

        }
        setState(1290);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__10)
          | (1ULL << AergiaCpp14Parser::Decltype)
          | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 92) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 92)) & ((1ULL << (AergiaCpp14Parser::LeftParen - 92))
          | (1ULL << (AergiaCpp14Parser::Star - 92))
          | (1ULL << (AergiaCpp14Parser::And - 92))
          | (1ULL << (AergiaCpp14Parser::Tilde - 92))
          | (1ULL << (AergiaCpp14Parser::Doublecolon - 92))
          | (1ULL << (AergiaCpp14Parser::Ellipsis - 92))
          | (1ULL << (AergiaCpp14Parser::Identifier - 92)))) != 0)) {
          setState(1289);
          initdeclaratorlist(0);
        }
        setState(1292);
        match(AergiaCpp14Parser::Semi);
        break;
      }

      case AergiaCpp14Parser::Alignas:
      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1293);
        attributespecifierseq(0);
        setState(1295);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
        case 1: {
          setState(1294);
          declspecifierseq();
          break;
        }

        }
        setState(1297);
        initdeclaratorlist(0);
        setState(1298);
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
  enterRule(_localctx, 152, AergiaCpp14Parser::RuleStatic_assertdeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1302);
    match(AergiaCpp14Parser::Static_assert);
    setState(1303);
    match(AergiaCpp14Parser::LeftParen);
    setState(1304);
    constantexpression();
    setState(1305);
    match(AergiaCpp14Parser::Comma);
    setState(1306);
    match(AergiaCpp14Parser::Stringliteral);
    setState(1307);
    match(AergiaCpp14Parser::RightParen);
    setState(1308);
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
  enterRule(_localctx, 154, AergiaCpp14Parser::RuleEmptydeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1310);
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
  enterRule(_localctx, 156, AergiaCpp14Parser::RuleAttributedeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1312);
    attributespecifierseq(0);
    setState(1313);
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
  enterRule(_localctx, 158, AergiaCpp14Parser::RuleDeclspecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1321);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Extern:
      case AergiaCpp14Parser::Mutable:
      case AergiaCpp14Parser::Register:
      case AergiaCpp14Parser::Static:
      case AergiaCpp14Parser::Thread_local: {
        enterOuterAlt(_localctx, 1);
        setState(1315);
        storageclassspecifier();
        break;
      }

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
        setState(1316);
        typespecifier();
        break;
      }

      case AergiaCpp14Parser::Explicit:
      case AergiaCpp14Parser::Inline:
      case AergiaCpp14Parser::Virtual: {
        enterOuterAlt(_localctx, 3);
        setState(1317);
        functionspecifier();
        break;
      }

      case AergiaCpp14Parser::Friend: {
        enterOuterAlt(_localctx, 4);
        setState(1318);
        match(AergiaCpp14Parser::Friend);
        break;
      }

      case AergiaCpp14Parser::Typedef: {
        enterOuterAlt(_localctx, 5);
        setState(1319);
        match(AergiaCpp14Parser::Typedef);
        break;
      }

      case AergiaCpp14Parser::Constexpr: {
        enterOuterAlt(_localctx, 6);
        setState(1320);
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
  enterRule(_localctx, 160, AergiaCpp14Parser::RuleDeclspecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1330);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1323);
      declspecifier();
      setState(1325);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
      case 1: {
        setState(1324);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1327);
      declspecifier();
      setState(1328);
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
  enterRule(_localctx, 162, AergiaCpp14Parser::RuleStorageclassspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1332);
    _la = _input->LA(1);
    if (!(((((_la - 43) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 43)) & ((1ULL << (AergiaCpp14Parser::Extern - 43))
      | (1ULL << (AergiaCpp14Parser::Mutable - 43))
      | (1ULL << (AergiaCpp14Parser::Register - 43))
      | (1ULL << (AergiaCpp14Parser::Static - 43))
      | (1ULL << (AergiaCpp14Parser::Thread_local - 43)))) != 0))) {
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
  enterRule(_localctx, 164, AergiaCpp14Parser::RuleFunctionspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1334);
    _la = _input->LA(1);
    if (!(((((_la - 41) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 41)) & ((1ULL << (AergiaCpp14Parser::Explicit - 41))
      | (1ULL << (AergiaCpp14Parser::Inline - 41))
      | (1ULL << (AergiaCpp14Parser::Virtual - 41)))) != 0))) {
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
  enterRule(_localctx, 166, AergiaCpp14Parser::RuleTypedefname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1336);
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
  enterRule(_localctx, 168, AergiaCpp14Parser::RuleTypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1341);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1338);
      trailingtypespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1339);
      classspecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1340);
      enumspecifier();
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
  enterRule(_localctx, 170, AergiaCpp14Parser::RuleTrailingtypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1347);
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
        setState(1343);
        simpletypespecifier();
        break;
      }

      case AergiaCpp14Parser::Class:
      case AergiaCpp14Parser::Enum:
      case AergiaCpp14Parser::Struct:
      case AergiaCpp14Parser::Union: {
        enterOuterAlt(_localctx, 2);
        setState(1344);
        elaboratedtypespecifier();
        break;
      }

      case AergiaCpp14Parser::Typename_: {
        enterOuterAlt(_localctx, 3);
        setState(1345);
        typenamespecifier();
        break;
      }

      case AergiaCpp14Parser::Const:
      case AergiaCpp14Parser::Volatile: {
        enterOuterAlt(_localctx, 4);
        setState(1346);
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
  enterRule(_localctx, 172, AergiaCpp14Parser::RuleTypespecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1356);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1349);
      typespecifier();
      setState(1351);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
      case 1: {
        setState(1350);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1353);
      typespecifier();
      setState(1354);
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
  enterRule(_localctx, 174, AergiaCpp14Parser::RuleTrailingtypespecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1365);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1358);
      trailingtypespecifier();
      setState(1360);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
      case 1: {
        setState(1359);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1362);
      trailingtypespecifier();
      setState(1363);
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
  enterRule(_localctx, 176, AergiaCpp14Parser::RuleSimpletypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1390);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1368);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
      case 1: {
        setState(1367);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1370);
      thetypename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1371);
      nestednamespecifier(0);
      setState(1372);
      match(AergiaCpp14Parser::Template);
      setState(1373);
      simpletemplateid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1375);
      match(AergiaCpp14Parser::Char);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1376);
      match(AergiaCpp14Parser::Char16);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1377);
      match(AergiaCpp14Parser::Char32);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1378);
      match(AergiaCpp14Parser::Wchar);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1379);
      match(AergiaCpp14Parser::Bool);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1380);
      match(AergiaCpp14Parser::Short);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1381);
      match(AergiaCpp14Parser::Int);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1382);
      match(AergiaCpp14Parser::Long);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1383);
      match(AergiaCpp14Parser::Signed);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1384);
      match(AergiaCpp14Parser::Unsigned);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1385);
      match(AergiaCpp14Parser::Float);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1386);
      match(AergiaCpp14Parser::Double);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1387);
      match(AergiaCpp14Parser::Void);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1388);
      match(AergiaCpp14Parser::Auto);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1389);
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
  enterRule(_localctx, 178, AergiaCpp14Parser::RuleThetypename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1396);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1392);
      classname();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1393);
      enumname();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1394);
      typedefname();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1395);
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
  enterRule(_localctx, 180, AergiaCpp14Parser::RuleDecltypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1407);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1398);
      match(AergiaCpp14Parser::Decltype);
      setState(1399);
      match(AergiaCpp14Parser::LeftParen);
      setState(1400);
      expression(0);
      setState(1401);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1403);
      match(AergiaCpp14Parser::Decltype);
      setState(1404);
      match(AergiaCpp14Parser::LeftParen);
      setState(1405);
      match(AergiaCpp14Parser::Auto);
      setState(1406);
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
  enterRule(_localctx, 182, AergiaCpp14Parser::RuleElaboratedtypespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1433);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1409);
      classkey();
      setState(1411);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1410);
        attributespecifierseq(0);
      }
      setState(1414);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
      case 1: {
        setState(1413);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1416);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1418);
      classkey();
      setState(1419);
      simpletemplateid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1421);
      classkey();
      setState(1422);
      nestednamespecifier(0);
      setState(1424);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Template) {
        setState(1423);
        match(AergiaCpp14Parser::Template);
      }
      setState(1426);
      simpletemplateid();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1428);
      match(AergiaCpp14Parser::Enum);
      setState(1430);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
      case 1: {
        setState(1429);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1432);
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
  enterRule(_localctx, 184, AergiaCpp14Parser::RuleEnumname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1435);
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
  enterRule(_localctx, 186, AergiaCpp14Parser::RuleEnumspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1450);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1437);
      enumhead();
      setState(1438);
      match(AergiaCpp14Parser::LeftBrace);
      setState(1440);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(1439);
        enumeratorlist(0);
      }
      setState(1442);
      match(AergiaCpp14Parser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1444);
      enumhead();
      setState(1445);
      match(AergiaCpp14Parser::LeftBrace);
      setState(1446);
      enumeratorlist(0);
      setState(1447);
      match(AergiaCpp14Parser::Comma);
      setState(1448);
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
  enterRule(_localctx, 188, AergiaCpp14Parser::RuleEnumhead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1471);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1452);
      enumkey();
      setState(1454);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1453);
        attributespecifierseq(0);
      }
      setState(1457);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(1456);
        match(AergiaCpp14Parser::Identifier);
      }
      setState(1460);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Colon) {
        setState(1459);
        enumbase();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1462);
      enumkey();
      setState(1464);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1463);
        attributespecifierseq(0);
      }
      setState(1466);
      nestednamespecifier(0);
      setState(1467);
      match(AergiaCpp14Parser::Identifier);
      setState(1469);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Colon) {
        setState(1468);
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
  enterRule(_localctx, 190, AergiaCpp14Parser::RuleOpaqueenumdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1473);
    enumkey();
    setState(1475);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(1474);
      attributespecifierseq(0);
    }
    setState(1477);
    match(AergiaCpp14Parser::Identifier);
    setState(1479);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Colon) {
      setState(1478);
      enumbase();
    }
    setState(1481);
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
  enterRule(_localctx, 192, AergiaCpp14Parser::RuleEnumkey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1488);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1483);
      match(AergiaCpp14Parser::Enum);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1484);
      match(AergiaCpp14Parser::Enum);
      setState(1485);
      match(AergiaCpp14Parser::Class);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1486);
      match(AergiaCpp14Parser::Enum);
      setState(1487);
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
  enterRule(_localctx, 194, AergiaCpp14Parser::RuleEnumbase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1490);
    match(AergiaCpp14Parser::Colon);
    setState(1491);
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
  size_t startState = 196;
  enterRecursionRule(_localctx, 196, AergiaCpp14Parser::RuleEnumeratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1494);
    enumeratordefinition();
    _ctx->stop = _input->LT(-1);
    setState(1501);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EnumeratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEnumeratorlist);
        setState(1496);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1497);
        match(AergiaCpp14Parser::Comma);
        setState(1498);
        enumeratordefinition(); 
      }
      setState(1503);
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
  enterRule(_localctx, 198, AergiaCpp14Parser::RuleEnumeratordefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1509);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1504);
      enumerator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1505);
      enumerator();
      setState(1506);
      match(AergiaCpp14Parser::Assign);
      setState(1507);
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
  enterRule(_localctx, 200, AergiaCpp14Parser::RuleEnumerator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1511);
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
  enterRule(_localctx, 202, AergiaCpp14Parser::RuleNamespacename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1515);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1513);
      originalnamespacename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1514);
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
  enterRule(_localctx, 204, AergiaCpp14Parser::RuleOriginalnamespacename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1517);
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
  enterRule(_localctx, 206, AergiaCpp14Parser::RuleNamespacedefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1521);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 143, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1519);
      namednamespacedefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1520);
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
  enterRule(_localctx, 208, AergiaCpp14Parser::RuleNamednamespacedefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1523);
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
  enterRule(_localctx, 210, AergiaCpp14Parser::RuleOriginalnamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1526);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Inline) {
      setState(1525);
      match(AergiaCpp14Parser::Inline);
    }
    setState(1528);
    match(AergiaCpp14Parser::Namespace);
    setState(1529);
    match(AergiaCpp14Parser::Identifier);
    setState(1530);
    match(AergiaCpp14Parser::LeftBrace);
    setState(1531);
    namespacebody();
    setState(1532);
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
  enterRule(_localctx, 212, AergiaCpp14Parser::RuleUnnamednamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1535);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Inline) {
      setState(1534);
      match(AergiaCpp14Parser::Inline);
    }
    setState(1537);
    match(AergiaCpp14Parser::Namespace);
    setState(1538);
    match(AergiaCpp14Parser::LeftBrace);
    setState(1539);
    namespacebody();
    setState(1540);
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
  enterRule(_localctx, 214, AergiaCpp14Parser::RuleNamespacebody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1543);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__10)
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
      | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (AergiaCpp14Parser::Register - 64))
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
      ((1ULL << (_la - 136)) & ((1ULL << (AergiaCpp14Parser::Doublecolon - 136))
      | (1ULL << (AergiaCpp14Parser::Semi - 136))
      | (1ULL << (AergiaCpp14Parser::Ellipsis - 136))
      | (1ULL << (AergiaCpp14Parser::Identifier - 136)))) != 0)) {
      setState(1542);
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
  enterRule(_localctx, 216, AergiaCpp14Parser::RuleNamespacealias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1545);
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
  enterRule(_localctx, 218, AergiaCpp14Parser::RuleNamespacealiasdefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1547);
    match(AergiaCpp14Parser::Namespace);
    setState(1548);
    match(AergiaCpp14Parser::Identifier);
    setState(1549);
    match(AergiaCpp14Parser::Assign);
    setState(1550);
    qualifiednamespacespecifier();
    setState(1551);
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
  enterRule(_localctx, 220, AergiaCpp14Parser::RuleQualifiednamespacespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1554);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx)) {
    case 1: {
      setState(1553);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1556);
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
  enterRule(_localctx, 222, AergiaCpp14Parser::RuleUsingdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1571);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1558);
      match(AergiaCpp14Parser::Using);
      setState(1560);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Typename_) {
        setState(1559);
        match(AergiaCpp14Parser::Typename_);
      }
      setState(1562);
      nestednamespecifier(0);
      setState(1563);
      unqualifiedid();
      setState(1564);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1566);
      match(AergiaCpp14Parser::Using);
      setState(1567);
      match(AergiaCpp14Parser::Doublecolon);
      setState(1568);
      unqualifiedid();
      setState(1569);
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
  enterRule(_localctx, 224, AergiaCpp14Parser::RuleUsingdirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1574);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(1573);
      attributespecifierseq(0);
    }
    setState(1576);
    match(AergiaCpp14Parser::Using);
    setState(1577);
    match(AergiaCpp14Parser::Namespace);
    setState(1579);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx)) {
    case 1: {
      setState(1578);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1581);
    namespacename();
    setState(1582);
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
  enterRule(_localctx, 226, AergiaCpp14Parser::RuleAsmdefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1584);
    match(AergiaCpp14Parser::Asm);
    setState(1585);
    match(AergiaCpp14Parser::LeftParen);
    setState(1586);
    match(AergiaCpp14Parser::Stringliteral);
    setState(1587);
    match(AergiaCpp14Parser::RightParen);
    setState(1588);
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
  enterRule(_localctx, 228, AergiaCpp14Parser::RuleLinkagespecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1600);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1590);
      match(AergiaCpp14Parser::Extern);
      setState(1591);
      match(AergiaCpp14Parser::Stringliteral);
      setState(1592);
      match(AergiaCpp14Parser::LeftBrace);
      setState(1594);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__10)
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
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (AergiaCpp14Parser::Register - 64))
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
        ((1ULL << (_la - 136)) & ((1ULL << (AergiaCpp14Parser::Doublecolon - 136))
        | (1ULL << (AergiaCpp14Parser::Semi - 136))
        | (1ULL << (AergiaCpp14Parser::Ellipsis - 136))
        | (1ULL << (AergiaCpp14Parser::Identifier - 136)))) != 0)) {
        setState(1593);
        declarationseq(0);
      }
      setState(1596);
      match(AergiaCpp14Parser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1597);
      match(AergiaCpp14Parser::Extern);
      setState(1598);
      match(AergiaCpp14Parser::Stringliteral);
      setState(1599);
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
  size_t startState = 230;
  enterRecursionRule(_localctx, 230, AergiaCpp14Parser::RuleAttributespecifierseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1603);
    attributespecifier();
    _ctx->stop = _input->LT(-1);
    setState(1609);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AttributespecifierseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAttributespecifierseq);
        setState(1605);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1606);
        attributespecifier(); 
      }
      setState(1611);
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
  enterRule(_localctx, 232, AergiaCpp14Parser::RuleAttributespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1619);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1612);
        match(AergiaCpp14Parser::LeftBracket);
        setState(1613);
        match(AergiaCpp14Parser::LeftBracket);
        setState(1614);
        attributelist(0);
        setState(1615);
        match(AergiaCpp14Parser::RightBracket);
        setState(1616);
        match(AergiaCpp14Parser::RightBracket);
        break;
      }

      case AergiaCpp14Parser::Alignas: {
        enterOuterAlt(_localctx, 2);
        setState(1618);
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
  enterRule(_localctx, 234, AergiaCpp14Parser::RuleAlignmentspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1637);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1621);
      match(AergiaCpp14Parser::Alignas);
      setState(1622);
      match(AergiaCpp14Parser::LeftParen);
      setState(1623);
      thetypeid();
      setState(1625);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Ellipsis) {
        setState(1624);
        match(AergiaCpp14Parser::Ellipsis);
      }
      setState(1627);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1629);
      match(AergiaCpp14Parser::Alignas);
      setState(1630);
      match(AergiaCpp14Parser::LeftParen);
      setState(1631);
      constantexpression();
      setState(1633);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Ellipsis) {
        setState(1632);
        match(AergiaCpp14Parser::Ellipsis);
      }
      setState(1635);
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
  size_t startState = 236;
  enterRecursionRule(_localctx, 236, AergiaCpp14Parser::RuleAttributelist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1646);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx)) {
    case 1: {
      setState(1641);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
      case 1: {
        setState(1640);
        attribute();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1643);
      attribute();
      setState(1644);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1660);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1658);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AttributelistContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributelist);
          setState(1648);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1649);
          match(AergiaCpp14Parser::Comma);
          setState(1651);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx)) {
          case 1: {
            setState(1650);
            attribute();
            break;
          }

          }
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AttributelistContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributelist);
          setState(1653);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1654);
          match(AergiaCpp14Parser::Comma);
          setState(1655);
          attribute();
          setState(1656);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(1662);
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
  enterRule(_localctx, 238, AergiaCpp14Parser::RuleAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1663);
    attributetoken();
    setState(1665);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
    case 1: {
      setState(1664);
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
  enterRule(_localctx, 240, AergiaCpp14Parser::RuleAttributetoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1669);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1667);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1668);
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
  enterRule(_localctx, 242, AergiaCpp14Parser::RuleAttributescopedtoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1671);
    attributenamespace();
    setState(1672);
    match(AergiaCpp14Parser::Doublecolon);
    setState(1673);
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
  enterRule(_localctx, 244, AergiaCpp14Parser::RuleAttributenamespace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1675);
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
  enterRule(_localctx, 246, AergiaCpp14Parser::RuleAttributeargumentclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1677);
    match(AergiaCpp14Parser::LeftParen);
    setState(1678);
    balancedtokenseq(0);
    setState(1679);
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
  size_t startState = 248;
  enterRecursionRule(_localctx, 248, AergiaCpp14Parser::RuleBalancedtokenseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1683);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx)) {
    case 1: {
      setState(1682);
      balancedtoken();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1689);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BalancedtokenseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBalancedtokenseq);
        setState(1685);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1686);
        balancedtoken(); 
      }
      setState(1691);
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
  enterRule(_localctx, 250, AergiaCpp14Parser::RuleBalancedtoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1704);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(1692);
        match(AergiaCpp14Parser::LeftParen);
        setState(1693);
        balancedtokenseq(0);
        setState(1694);
        match(AergiaCpp14Parser::RightParen);
        break;
      }

      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1696);
        match(AergiaCpp14Parser::LeftBracket);
        setState(1697);
        balancedtokenseq(0);
        setState(1698);
        match(AergiaCpp14Parser::RightBracket);
        break;
      }

      case AergiaCpp14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 3);
        setState(1700);
        match(AergiaCpp14Parser::LeftBrace);
        setState(1701);
        balancedtokenseq(0);
        setState(1702);
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
  size_t startState = 252;
  enterRecursionRule(_localctx, 252, AergiaCpp14Parser::RuleInitdeclaratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1707);
    initdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(1714);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitdeclaratorlist);
        setState(1709);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1710);
        match(AergiaCpp14Parser::Comma);
        setState(1711);
        initdeclarator(); 
      }
      setState(1716);
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
  enterRule(_localctx, 254, AergiaCpp14Parser::RuleInitdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1717);
    declarator();
    setState(1719);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
    case 1: {
      setState(1718);
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
  enterRule(_localctx, 256, AergiaCpp14Parser::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1726);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1721);
      ptrdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1722);
      noptrdeclarator(0);
      setState(1723);
      parametersandqualifiers();
      setState(1724);
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
  enterRule(_localctx, 258, AergiaCpp14Parser::RulePtrdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1732);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1728);
      noptrdeclarator(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1729);
      ptroperator();
      setState(1730);
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
  size_t startState = 260;
  enterRecursionRule(_localctx, 260, AergiaCpp14Parser::RuleNoptrdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1743);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Decltype:
      case AergiaCpp14Parser::Operator:
      case AergiaCpp14Parser::Tilde:
      case AergiaCpp14Parser::Doublecolon:
      case AergiaCpp14Parser::Ellipsis:
      case AergiaCpp14Parser::Identifier: {
        setState(1735);
        declaratorid();
        setState(1737);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx)) {
        case 1: {
          setState(1736);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case AergiaCpp14Parser::LeftParen: {
        setState(1739);
        match(AergiaCpp14Parser::LeftParen);
        setState(1740);
        ptrdeclarator();
        setState(1741);
        match(AergiaCpp14Parser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1758);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1756);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1745);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1746);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1747);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1748);
          match(AergiaCpp14Parser::LeftBracket);
          setState(1750);
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
            | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
            | (1ULL << (AergiaCpp14Parser::Short - 65))
            | (1ULL << (AergiaCpp14Parser::Signed - 65))
            | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
            | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
            | (1ULL << (AergiaCpp14Parser::This - 65))
            | (1ULL << (AergiaCpp14Parser::True - 65))
            | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
            | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
            | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
            | (1ULL << (AergiaCpp14Parser::Void - 65))
            | (1ULL << (AergiaCpp14Parser::Wchar - 65))
            | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
            | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
            | (1ULL << (AergiaCpp14Parser::Plus - 65))
            | (1ULL << (AergiaCpp14Parser::Minus - 65))
            | (1ULL << (AergiaCpp14Parser::Star - 65))
            | (1ULL << (AergiaCpp14Parser::And - 65))
            | (1ULL << (AergiaCpp14Parser::Or - 65))
            | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
            | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
            | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
            | (1ULL << (AergiaCpp14Parser::Identifier - 129))
            | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
            setState(1749);
            constantexpression();
          }
          setState(1752);
          match(AergiaCpp14Parser::RightBracket);
          setState(1754);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, _ctx)) {
          case 1: {
            setState(1753);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1760);
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
  enterRule(_localctx, 262, AergiaCpp14Parser::RuleParametersandqualifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1761);
    match(AergiaCpp14Parser::LeftParen);
    setState(1762);
    parameterdeclarationclause();
    setState(1763);
    match(AergiaCpp14Parser::RightParen);
    setState(1765);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 179, _ctx)) {
    case 1: {
      setState(1764);
      cvqualifierseq();
      break;
    }

    }
    setState(1768);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx)) {
    case 1: {
      setState(1767);
      refqualifier();
      break;
    }

    }
    setState(1771);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx)) {
    case 1: {
      setState(1770);
      exceptionspecification();
      break;
    }

    }
    setState(1774);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 182, _ctx)) {
    case 1: {
      setState(1773);
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
  enterRule(_localctx, 264, AergiaCpp14Parser::RuleTrailingreturntype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1776);
    match(AergiaCpp14Parser::Arrow);
    setState(1777);
    trailingtypespecifierseq();
    setState(1779);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx)) {
    case 1: {
      setState(1778);
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
  enterRule(_localctx, 266, AergiaCpp14Parser::RulePtroperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1804);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Star: {
        enterOuterAlt(_localctx, 1);
        setState(1781);
        match(AergiaCpp14Parser::Star);
        setState(1783);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, _ctx)) {
        case 1: {
          setState(1782);
          attributespecifierseq(0);
          break;
        }

        }
        setState(1786);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx)) {
        case 1: {
          setState(1785);
          cvqualifierseq();
          break;
        }

        }
        break;
      }

      case AergiaCpp14Parser::And: {
        enterOuterAlt(_localctx, 2);
        setState(1788);
        match(AergiaCpp14Parser::And);
        setState(1790);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx)) {
        case 1: {
          setState(1789);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case AergiaCpp14Parser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(1792);
        match(AergiaCpp14Parser::T__10);
        setState(1794);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
        case 1: {
          setState(1793);
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
        setState(1796);
        nestednamespecifier(0);
        setState(1797);
        match(AergiaCpp14Parser::Star);
        setState(1799);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx)) {
        case 1: {
          setState(1798);
          attributespecifierseq(0);
          break;
        }

        }
        setState(1802);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, _ctx)) {
        case 1: {
          setState(1801);
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
  enterRule(_localctx, 268, AergiaCpp14Parser::RuleCvqualifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1806);
    cvqualifier();
    setState(1808);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx)) {
    case 1: {
      setState(1807);
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
  enterRule(_localctx, 270, AergiaCpp14Parser::RuleCvqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1810);
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
  enterRule(_localctx, 272, AergiaCpp14Parser::RuleRefqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1812);
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
  enterRule(_localctx, 274, AergiaCpp14Parser::RuleDeclaratorid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1815);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Ellipsis) {
      setState(1814);
      match(AergiaCpp14Parser::Ellipsis);
    }
    setState(1817);
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
  enterRule(_localctx, 276, AergiaCpp14Parser::RuleThetypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1819);
    typespecifierseq();
    setState(1821);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
    case 1: {
      setState(1820);
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
  enterRule(_localctx, 278, AergiaCpp14Parser::RuleAbstractdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1831);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1823);
      ptrabstractdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1825);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx)) {
      case 1: {
        setState(1824);
        noptrabstractdeclarator(0);
        break;
      }

      }
      setState(1827);
      parametersandqualifiers();
      setState(1828);
      trailingreturntype();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1830);
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
  enterRule(_localctx, 280, AergiaCpp14Parser::RulePtrabstractdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1838);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::LeftParen:
      case AergiaCpp14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1833);
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
        setState(1834);
        ptroperator();
        setState(1836);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
        case 1: {
          setState(1835);
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
  size_t startState = 282;
  enterRecursionRule(_localctx, 282, AergiaCpp14Parser::RuleNoptrabstractdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1854);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx)) {
    case 1: {
      setState(1841);
      parametersandqualifiers();
      break;
    }

    case 2: {
      setState(1842);
      match(AergiaCpp14Parser::LeftBracket);
      setState(1844);
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
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Short - 65))
        | (1ULL << (AergiaCpp14Parser::Signed - 65))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
        | (1ULL << (AergiaCpp14Parser::This - 65))
        | (1ULL << (AergiaCpp14Parser::True - 65))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
        | (1ULL << (AergiaCpp14Parser::Void - 65))
        | (1ULL << (AergiaCpp14Parser::Wchar - 65))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
        | (1ULL << (AergiaCpp14Parser::Plus - 65))
        | (1ULL << (AergiaCpp14Parser::Minus - 65))
        | (1ULL << (AergiaCpp14Parser::Star - 65))
        | (1ULL << (AergiaCpp14Parser::And - 65))
        | (1ULL << (AergiaCpp14Parser::Or - 65))
        | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
        | (1ULL << (AergiaCpp14Parser::Identifier - 129))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
        setState(1843);
        constantexpression();
      }
      setState(1846);
      match(AergiaCpp14Parser::RightBracket);
      setState(1848);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx)) {
      case 1: {
        setState(1847);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 3: {
      setState(1850);
      match(AergiaCpp14Parser::LeftParen);
      setState(1851);
      ptrabstractdeclarator();
      setState(1852);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1869);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1867);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1856);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1857);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1858);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1859);
          match(AergiaCpp14Parser::LeftBracket);
          setState(1861);
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
            | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
            | (1ULL << (AergiaCpp14Parser::Short - 65))
            | (1ULL << (AergiaCpp14Parser::Signed - 65))
            | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
            | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
            | (1ULL << (AergiaCpp14Parser::This - 65))
            | (1ULL << (AergiaCpp14Parser::True - 65))
            | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
            | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
            | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
            | (1ULL << (AergiaCpp14Parser::Void - 65))
            | (1ULL << (AergiaCpp14Parser::Wchar - 65))
            | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
            | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
            | (1ULL << (AergiaCpp14Parser::Plus - 65))
            | (1ULL << (AergiaCpp14Parser::Minus - 65))
            | (1ULL << (AergiaCpp14Parser::Star - 65))
            | (1ULL << (AergiaCpp14Parser::And - 65))
            | (1ULL << (AergiaCpp14Parser::Or - 65))
            | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
            | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
            | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
            | (1ULL << (AergiaCpp14Parser::Identifier - 129))
            | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
            setState(1860);
            constantexpression();
          }
          setState(1863);
          match(AergiaCpp14Parser::RightBracket);
          setState(1865);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx)) {
          case 1: {
            setState(1864);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1871);
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
  enterRule(_localctx, 284, AergiaCpp14Parser::RuleAbstractpackdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1876);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Ellipsis: {
        enterOuterAlt(_localctx, 1);
        setState(1872);
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
        setState(1873);
        ptroperator();
        setState(1874);
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
  size_t startState = 286;
  enterRecursionRule(_localctx, 286, AergiaCpp14Parser::RuleNoptrabstractpackdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1879);
    match(AergiaCpp14Parser::Ellipsis);
    _ctx->stop = _input->LT(-1);
    setState(1894);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1892);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1881);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1882);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1883);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1884);
          match(AergiaCpp14Parser::LeftBracket);
          setState(1886);
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
            | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
            | (1ULL << (AergiaCpp14Parser::Short - 65))
            | (1ULL << (AergiaCpp14Parser::Signed - 65))
            | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
            | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
            | (1ULL << (AergiaCpp14Parser::This - 65))
            | (1ULL << (AergiaCpp14Parser::True - 65))
            | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
            | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
            | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
            | (1ULL << (AergiaCpp14Parser::Void - 65))
            | (1ULL << (AergiaCpp14Parser::Wchar - 65))
            | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
            | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
            | (1ULL << (AergiaCpp14Parser::Plus - 65))
            | (1ULL << (AergiaCpp14Parser::Minus - 65))
            | (1ULL << (AergiaCpp14Parser::Star - 65))
            | (1ULL << (AergiaCpp14Parser::And - 65))
            | (1ULL << (AergiaCpp14Parser::Or - 65))
            | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
            | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
            | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
            | (1ULL << (AergiaCpp14Parser::Identifier - 129))
            | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
            | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
            setState(1885);
            constantexpression();
          }
          setState(1888);
          match(AergiaCpp14Parser::RightBracket);
          setState(1890);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, _ctx)) {
          case 1: {
            setState(1889);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1896);
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
  enterRule(_localctx, 288, AergiaCpp14Parser::RuleParameterdeclarationclause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1907);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1898);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 17) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 17)) & ((1ULL << (AergiaCpp14Parser::Alignas - 17))
        | (1ULL << (AergiaCpp14Parser::Auto - 17))
        | (1ULL << (AergiaCpp14Parser::Bool - 17))
        | (1ULL << (AergiaCpp14Parser::Char - 17))
        | (1ULL << (AergiaCpp14Parser::Char16 - 17))
        | (1ULL << (AergiaCpp14Parser::Char32 - 17))
        | (1ULL << (AergiaCpp14Parser::Class - 17))
        | (1ULL << (AergiaCpp14Parser::Const - 17))
        | (1ULL << (AergiaCpp14Parser::Constexpr - 17))
        | (1ULL << (AergiaCpp14Parser::Decltype - 17))
        | (1ULL << (AergiaCpp14Parser::Double - 17))
        | (1ULL << (AergiaCpp14Parser::Enum - 17))
        | (1ULL << (AergiaCpp14Parser::Explicit - 17))
        | (1ULL << (AergiaCpp14Parser::Extern - 17))
        | (1ULL << (AergiaCpp14Parser::Float - 17))
        | (1ULL << (AergiaCpp14Parser::Friend - 17))
        | (1ULL << (AergiaCpp14Parser::Inline - 17))
        | (1ULL << (AergiaCpp14Parser::Int - 17))
        | (1ULL << (AergiaCpp14Parser::Long - 17))
        | (1ULL << (AergiaCpp14Parser::Mutable - 17))
        | (1ULL << (AergiaCpp14Parser::Register - 17))
        | (1ULL << (AergiaCpp14Parser::Short - 17))
        | (1ULL << (AergiaCpp14Parser::Signed - 17))
        | (1ULL << (AergiaCpp14Parser::Static - 17))
        | (1ULL << (AergiaCpp14Parser::Struct - 17))
        | (1ULL << (AergiaCpp14Parser::Thread_local - 17)))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 81)) & ((1ULL << (AergiaCpp14Parser::Typedef - 81))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 81))
        | (1ULL << (AergiaCpp14Parser::Union - 81))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 81))
        | (1ULL << (AergiaCpp14Parser::Virtual - 81))
        | (1ULL << (AergiaCpp14Parser::Void - 81))
        | (1ULL << (AergiaCpp14Parser::Volatile - 81))
        | (1ULL << (AergiaCpp14Parser::Wchar - 81))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 81))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 81))
        | (1ULL << (AergiaCpp14Parser::Identifier - 81)))) != 0)) {
        setState(1897);
        parameterdeclarationlist(0);
      }
      setState(1901);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Ellipsis) {
        setState(1900);
        match(AergiaCpp14Parser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1903);
      parameterdeclarationlist(0);
      setState(1904);
      match(AergiaCpp14Parser::Comma);
      setState(1905);
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
  size_t startState = 290;
  enterRecursionRule(_localctx, 290, AergiaCpp14Parser::RuleParameterdeclarationlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1910);
    parameterdeclaration();
    _ctx->stop = _input->LT(-1);
    setState(1917);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParameterdeclarationlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameterdeclarationlist);
        setState(1912);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1913);
        match(AergiaCpp14Parser::Comma);
        setState(1914);
        parameterdeclaration(); 
      }
      setState(1919);
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
  enterRule(_localctx, 292, AergiaCpp14Parser::RuleParameterdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1951);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 220, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1921);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1920);
        attributespecifierseq(0);
      }
      setState(1923);
      declspecifierseq();
      setState(1924);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1927);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1926);
        attributespecifierseq(0);
      }
      setState(1929);
      declspecifierseq();
      setState(1930);
      declarator();
      setState(1931);
      match(AergiaCpp14Parser::Assign);
      setState(1932);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1935);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1934);
        attributespecifierseq(0);
      }
      setState(1937);
      declspecifierseq();
      setState(1939);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 217, _ctx)) {
      case 1: {
        setState(1938);
        abstractdeclarator();
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1942);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(1941);
        attributespecifierseq(0);
      }
      setState(1944);
      declspecifierseq();
      setState(1946);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::T__10

      || _la == AergiaCpp14Parser::Decltype || ((((_la - 92) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 92)) & ((1ULL << (AergiaCpp14Parser::LeftParen - 92))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 92))
        | (1ULL << (AergiaCpp14Parser::Star - 92))
        | (1ULL << (AergiaCpp14Parser::And - 92))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 92))
        | (1ULL << (AergiaCpp14Parser::Ellipsis - 92))
        | (1ULL << (AergiaCpp14Parser::Identifier - 92)))) != 0)) {
        setState(1945);
        abstractdeclarator();
      }
      setState(1948);
      match(AergiaCpp14Parser::Assign);
      setState(1949);
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
  enterRule(_localctx, 294, AergiaCpp14Parser::RuleFunctiondefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1954);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
      setState(1953);
      attributespecifierseq(0);
    }
    setState(1957);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 222, _ctx)) {
    case 1: {
      setState(1956);
      declspecifierseq();
      break;
    }

    }
    setState(1959);
    declarator();
    setState(1961);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Final

    || _la == AergiaCpp14Parser::Override) {
      setState(1960);
      virtspecifierseq(0);
    }
    setState(1963);
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
  enterRule(_localctx, 296, AergiaCpp14Parser::RuleFunctionbody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1976);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 225, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1966);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Colon) {
        setState(1965);
        ctorinitializer();
      }
      setState(1968);
      compoundstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1969);
      functiontryblock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1970);
      match(AergiaCpp14Parser::Assign);
      setState(1971);
      match(AergiaCpp14Parser::Default);
      setState(1972);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1973);
      match(AergiaCpp14Parser::Assign);
      setState(1974);
      match(AergiaCpp14Parser::Delete);
      setState(1975);
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
  enterRule(_localctx, 298, AergiaCpp14Parser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1983);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::LeftBrace:
      case AergiaCpp14Parser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1978);
        braceorequalinitializer();
        break;
      }

      case AergiaCpp14Parser::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(1979);
        match(AergiaCpp14Parser::LeftParen);
        setState(1980);
        expressionlist();
        setState(1981);
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
  enterRule(_localctx, 300, AergiaCpp14Parser::RuleBraceorequalinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1988);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1985);
        match(AergiaCpp14Parser::Assign);
        setState(1986);
        initializerclause();
        break;
      }

      case AergiaCpp14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1987);
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
  enterRule(_localctx, 302, AergiaCpp14Parser::RuleInitializerclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1992);
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
        setState(1990);
        assignmentexpression();
        break;
      }

      case AergiaCpp14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1991);
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
  size_t startState = 304;
  enterRecursionRule(_localctx, 304, AergiaCpp14Parser::RuleInitializerlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1995);
    initializerclause();
    setState(1997);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 229, _ctx)) {
    case 1: {
      setState(1996);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2007);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 231, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerlist);
        setState(1999);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2000);
        match(AergiaCpp14Parser::Comma);
        setState(2001);
        initializerclause();
        setState(2003);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 230, _ctx)) {
        case 1: {
          setState(2002);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(2009);
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
  enterRule(_localctx, 306, AergiaCpp14Parser::RuleBracedinitlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2019);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2010);
      match(AergiaCpp14Parser::LeftBrace);
      setState(2011);
      initializerlist(0);
      setState(2013);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Comma) {
        setState(2012);
        match(AergiaCpp14Parser::Comma);
      }
      setState(2015);
      match(AergiaCpp14Parser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2017);
      match(AergiaCpp14Parser::LeftBrace);
      setState(2018);
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
  enterRule(_localctx, 308, AergiaCpp14Parser::RuleClassname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2023);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 234, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2021);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2022);
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
  enterRule(_localctx, 310, AergiaCpp14Parser::RuleClassspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2025);
    classhead();
    setState(2026);
    match(AergiaCpp14Parser::LeftBrace);
    setState(2028);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__10)
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
      | (1ULL << AergiaCpp14Parser::Protected)
      | (1ULL << AergiaCpp14Parser::Public))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (AergiaCpp14Parser::Register - 64))
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
      | (1ULL << (AergiaCpp14Parser::Tilde - 64)))) != 0) || ((((_la - 135) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 135)) & ((1ULL << (AergiaCpp14Parser::Colon - 135))
      | (1ULL << (AergiaCpp14Parser::Doublecolon - 135))
      | (1ULL << (AergiaCpp14Parser::Semi - 135))
      | (1ULL << (AergiaCpp14Parser::Ellipsis - 135))
      | (1ULL << (AergiaCpp14Parser::Identifier - 135)))) != 0)) {
      setState(2027);
      memberspecification();
    }
    setState(2030);
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
  enterRule(_localctx, 312, AergiaCpp14Parser::RuleClasshead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2050);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2032);
      classkey();
      setState(2034);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2033);
        attributespecifierseq(0);
      }
      setState(2036);
      classheadname();
      setState(2038);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Final) {
        setState(2037);
        classvirtspecifier();
      }
      setState(2041);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Colon) {
        setState(2040);
        baseclause();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2043);
      classkey();
      setState(2045);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2044);
        attributespecifierseq(0);
      }
      setState(2048);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Colon) {
        setState(2047);
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
  enterRule(_localctx, 314, AergiaCpp14Parser::RuleClassheadname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2053);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 242, _ctx)) {
    case 1: {
      setState(2052);
      nestednamespecifier(0);
      break;
    }

    }
    setState(2055);
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
  enterRule(_localctx, 316, AergiaCpp14Parser::RuleClassvirtspecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2057);
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
  enterRule(_localctx, 318, AergiaCpp14Parser::RuleClasskey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2059);
    _la = _input->LA(1);
    if (!(((((_la - 28) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 28)) & ((1ULL << (AergiaCpp14Parser::Class - 28))
      | (1ULL << (AergiaCpp14Parser::Struct - 28))
      | (1ULL << (AergiaCpp14Parser::Union - 28)))) != 0))) {
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
  enterRule(_localctx, 320, AergiaCpp14Parser::RuleMemberspecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2070);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
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
        setState(2061);
        memberdeclaration();
        setState(2063);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__10)
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
          | (1ULL << AergiaCpp14Parser::Protected)
          | (1ULL << AergiaCpp14Parser::Public))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (AergiaCpp14Parser::Register - 64))
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
          | (1ULL << (AergiaCpp14Parser::Tilde - 64)))) != 0) || ((((_la - 135) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 135)) & ((1ULL << (AergiaCpp14Parser::Colon - 135))
          | (1ULL << (AergiaCpp14Parser::Doublecolon - 135))
          | (1ULL << (AergiaCpp14Parser::Semi - 135))
          | (1ULL << (AergiaCpp14Parser::Ellipsis - 135))
          | (1ULL << (AergiaCpp14Parser::Identifier - 135)))) != 0)) {
          setState(2062);
          memberspecification();
        }
        break;
      }

      case AergiaCpp14Parser::Private:
      case AergiaCpp14Parser::Protected:
      case AergiaCpp14Parser::Public: {
        enterOuterAlt(_localctx, 2);
        setState(2065);
        accessspecifier();
        setState(2066);
        match(AergiaCpp14Parser::Colon);
        setState(2068);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__10)
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
          | (1ULL << AergiaCpp14Parser::Protected)
          | (1ULL << AergiaCpp14Parser::Public))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (AergiaCpp14Parser::Register - 64))
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
          | (1ULL << (AergiaCpp14Parser::Tilde - 64)))) != 0) || ((((_la - 135) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 135)) & ((1ULL << (AergiaCpp14Parser::Colon - 135))
          | (1ULL << (AergiaCpp14Parser::Doublecolon - 135))
          | (1ULL << (AergiaCpp14Parser::Semi - 135))
          | (1ULL << (AergiaCpp14Parser::Ellipsis - 135))
          | (1ULL << (AergiaCpp14Parser::Identifier - 135)))) != 0)) {
          setState(2067);
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

AergiaCpp14Parser::FunctiondefinitionContext* AergiaCpp14Parser::MemberdeclarationContext::functiondefinition() {
  return getRuleContext<AergiaCpp14Parser::FunctiondefinitionContext>(0);
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
  enterRule(_localctx, 322, AergiaCpp14Parser::RuleMemberdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2088);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2073);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx)) {
      case 1: {
        setState(2072);
        attributespecifierseq(0);
        break;
      }

      }
      setState(2076);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 247, _ctx)) {
      case 1: {
        setState(2075);
        declspecifierseq();
        break;
      }

      }
      setState(2079);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::T__10)
        | (1ULL << AergiaCpp14Parser::Alignas)
        | (1ULL << AergiaCpp14Parser::Decltype)
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 92) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 92)) & ((1ULL << (AergiaCpp14Parser::LeftParen - 92))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 92))
        | (1ULL << (AergiaCpp14Parser::Star - 92))
        | (1ULL << (AergiaCpp14Parser::And - 92))
        | (1ULL << (AergiaCpp14Parser::Tilde - 92))
        | (1ULL << (AergiaCpp14Parser::Colon - 92))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 92))
        | (1ULL << (AergiaCpp14Parser::Ellipsis - 92))
        | (1ULL << (AergiaCpp14Parser::Identifier - 92)))) != 0)) {
        setState(2078);
        memberdeclaratorlist(0);
      }
      setState(2081);
      match(AergiaCpp14Parser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2082);
      functiondefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2083);
      usingdeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2084);
      static_assertdeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2085);
      templatedeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2086);
      aliasdeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2087);
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
  size_t startState = 324;
  enterRecursionRule(_localctx, 324, AergiaCpp14Parser::RuleMemberdeclaratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2091);
    memberdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(2098);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MemberdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMemberdeclaratorlist);
        setState(2093);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2094);
        match(AergiaCpp14Parser::Comma);
        setState(2095);
        memberdeclarator(); 
      }
      setState(2100);
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
  enterRule(_localctx, 326, AergiaCpp14Parser::RuleMemberdeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2120);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2101);
      declarator();
      setState(2103);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 251, _ctx)) {
      case 1: {
        setState(2102);
        virtspecifierseq(0);
        break;
      }

      }
      setState(2106);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 252, _ctx)) {
      case 1: {
        setState(2105);
        purespecifier();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2108);
      declarator();
      setState(2110);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 253, _ctx)) {
      case 1: {
        setState(2109);
        braceorequalinitializer();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2113);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(2112);
        match(AergiaCpp14Parser::Identifier);
      }
      setState(2116);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2115);
        attributespecifierseq(0);
      }
      setState(2118);
      match(AergiaCpp14Parser::Colon);
      setState(2119);
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
  size_t startState = 328;
  enterRecursionRule(_localctx, 328, AergiaCpp14Parser::RuleVirtspecifierseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2123);
    virtspecifier();
    _ctx->stop = _input->LT(-1);
    setState(2129);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 257, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VirtspecifierseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVirtspecifierseq);
        setState(2125);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2126);
        virtspecifier(); 
      }
      setState(2131);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 257, _ctx);
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
  enterRule(_localctx, 330, AergiaCpp14Parser::RuleVirtspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2132);
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

tree::TerminalNode* AergiaCpp14Parser::PurespecifierContext::Octalliteral() {
  return getToken(AergiaCpp14Parser::Octalliteral, 0);
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
  enterRule(_localctx, 332, AergiaCpp14Parser::RulePurespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2134);
    match(AergiaCpp14Parser::Assign);
    setState(2135);
    dynamic_cast<PurespecifierContext *>(_localctx)->val = match(AergiaCpp14Parser::Octalliteral);
	if ((dynamic_cast<PurespecifierContext*>(_localctx)->val != nullptr ? dynamic_cast<PurespecifierContext*>(_localctx)->val->getText() : "") == ("0")) throw new InputMismatchException(this);

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
  enterRule(_localctx, 334, AergiaCpp14Parser::RuleBaseclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2138);
    match(AergiaCpp14Parser::Colon);
    setState(2139);
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
  size_t startState = 336;
  enterRecursionRule(_localctx, 336, AergiaCpp14Parser::RuleBasespecifierlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2142);
    basespecifier();
    setState(2144);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 258, _ctx)) {
    case 1: {
      setState(2143);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2154);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 260, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BasespecifierlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBasespecifierlist);
        setState(2146);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2147);
        match(AergiaCpp14Parser::Comma);
        setState(2148);
        basespecifier();
        setState(2150);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx)) {
        case 1: {
          setState(2149);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(2156);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 260, _ctx);
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
  enterRule(_localctx, 338, AergiaCpp14Parser::RuleBasespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2178);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 266, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2158);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2157);
        attributespecifierseq(0);
      }
      setState(2160);
      basetypespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2162);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2161);
        attributespecifierseq(0);
      }
      setState(2164);
      match(AergiaCpp14Parser::Virtual);
      setState(2166);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::Private)
        | (1ULL << AergiaCpp14Parser::Protected)
        | (1ULL << AergiaCpp14Parser::Public))) != 0)) {
        setState(2165);
        accessspecifier();
      }
      setState(2168);
      basetypespecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2170);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2169);
        attributespecifierseq(0);
      }
      setState(2172);
      accessspecifier();
      setState(2174);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Virtual) {
        setState(2173);
        match(AergiaCpp14Parser::Virtual);
      }
      setState(2176);
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
  enterRule(_localctx, 340, AergiaCpp14Parser::RuleClassordecltype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 268, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2181);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 267, _ctx)) {
      case 1: {
        setState(2180);
        nestednamespecifier(0);
        break;
      }

      }
      setState(2183);
      classname();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2184);
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
  enterRule(_localctx, 342, AergiaCpp14Parser::RuleBasetypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2187);
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
  enterRule(_localctx, 344, AergiaCpp14Parser::RuleAccessspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2189);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AergiaCpp14Parser::Private)
      | (1ULL << AergiaCpp14Parser::Protected)
      | (1ULL << AergiaCpp14Parser::Public))) != 0))) {
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
  enterRule(_localctx, 346, AergiaCpp14Parser::RuleConversionfunctionid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2191);
    match(AergiaCpp14Parser::Operator);
    setState(2192);
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
  enterRule(_localctx, 348, AergiaCpp14Parser::RuleConversiontypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2194);
    typespecifierseq();
    setState(2196);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 269, _ctx)) {
    case 1: {
      setState(2195);
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
  enterRule(_localctx, 350, AergiaCpp14Parser::RuleConversiondeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2198);
    ptroperator();
    setState(2200);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 270, _ctx)) {
    case 1: {
      setState(2199);
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
  enterRule(_localctx, 352, AergiaCpp14Parser::RuleCtorinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2202);
    match(AergiaCpp14Parser::Colon);
    setState(2203);
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
  enterRule(_localctx, 354, AergiaCpp14Parser::RuleMeminitializerlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2216);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 273, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2205);
      meminitializer();
      setState(2207);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Ellipsis) {
        setState(2206);
        match(AergiaCpp14Parser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2209);
      meminitializer();
      setState(2211);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Ellipsis) {
        setState(2210);
        match(AergiaCpp14Parser::Ellipsis);
      }
      setState(2213);
      match(AergiaCpp14Parser::Comma);
      setState(2214);
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
  enterRule(_localctx, 356, AergiaCpp14Parser::RuleMeminitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2228);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 275, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2218);
      meminitializerid();
      setState(2219);
      match(AergiaCpp14Parser::LeftParen);
      setState(2221);
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
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Short - 65))
        | (1ULL << (AergiaCpp14Parser::Signed - 65))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
        | (1ULL << (AergiaCpp14Parser::This - 65))
        | (1ULL << (AergiaCpp14Parser::Throw - 65))
        | (1ULL << (AergiaCpp14Parser::True - 65))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
        | (1ULL << (AergiaCpp14Parser::Void - 65))
        | (1ULL << (AergiaCpp14Parser::Wchar - 65))
        | (1ULL << (AergiaCpp14Parser::LeftParen - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 65))
        | (1ULL << (AergiaCpp14Parser::LeftBrace - 65))
        | (1ULL << (AergiaCpp14Parser::Plus - 65))
        | (1ULL << (AergiaCpp14Parser::Minus - 65))
        | (1ULL << (AergiaCpp14Parser::Star - 65))
        | (1ULL << (AergiaCpp14Parser::And - 65))
        | (1ULL << (AergiaCpp14Parser::Or - 65))
        | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
        | (1ULL << (AergiaCpp14Parser::Identifier - 129))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
        setState(2220);
        expressionlist();
      }
      setState(2223);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2225);
      meminitializerid();
      setState(2226);
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
  enterRule(_localctx, 358, AergiaCpp14Parser::RuleMeminitializerid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2232);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 276, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2230);
      classordecltype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2231);
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
  enterRule(_localctx, 360, AergiaCpp14Parser::RuleOperatorfunctionid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2234);
    match(AergiaCpp14Parser::Operator);
    setState(2235);
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
  enterRule(_localctx, 362, AergiaCpp14Parser::RuleLiteraloperatorid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2242);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 277, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2237);
      match(AergiaCpp14Parser::Operator);
      setState(2238);
      match(AergiaCpp14Parser::Stringliteral);
      setState(2239);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2240);
      match(AergiaCpp14Parser::Operator);
      setState(2241);
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
  enterRule(_localctx, 364, AergiaCpp14Parser::RuleTemplatedeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2244);
    match(AergiaCpp14Parser::Template);
    setState(2245);
    match(AergiaCpp14Parser::Less);
    setState(2246);
    templateparameterlist(0);
    setState(2247);
    match(AergiaCpp14Parser::Greater);
    setState(2248);
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
  size_t startState = 366;
  enterRecursionRule(_localctx, 366, AergiaCpp14Parser::RuleTemplateparameterlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2251);
    templateparameter();
    _ctx->stop = _input->LT(-1);
    setState(2258);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateparameterlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateparameterlist);
        setState(2253);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2254);
        match(AergiaCpp14Parser::Comma);
        setState(2255);
        templateparameter(); 
      }
      setState(2260);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx);
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
  enterRule(_localctx, 368, AergiaCpp14Parser::RuleTemplateparameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2263);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 279, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2261);
      typeparameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2262);
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
  enterRule(_localctx, 370, AergiaCpp14Parser::RuleTypeparameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2313);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2265);
      match(AergiaCpp14Parser::Class);
      setState(2267);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 280, _ctx)) {
      case 1: {
        setState(2266);
        match(AergiaCpp14Parser::Ellipsis);
        break;
      }

      }
      setState(2270);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 281, _ctx)) {
      case 1: {
        setState(2269);
        match(AergiaCpp14Parser::Identifier);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2272);
      match(AergiaCpp14Parser::Class);
      setState(2274);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(2273);
        match(AergiaCpp14Parser::Identifier);
      }
      setState(2276);
      match(AergiaCpp14Parser::Assign);
      setState(2277);
      thetypeid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2278);
      match(AergiaCpp14Parser::Typename_);
      setState(2280);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 283, _ctx)) {
      case 1: {
        setState(2279);
        match(AergiaCpp14Parser::Ellipsis);
        break;
      }

      }
      setState(2283);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 284, _ctx)) {
      case 1: {
        setState(2282);
        match(AergiaCpp14Parser::Identifier);
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2285);
      match(AergiaCpp14Parser::Typename_);
      setState(2287);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(2286);
        match(AergiaCpp14Parser::Identifier);
      }
      setState(2289);
      match(AergiaCpp14Parser::Assign);
      setState(2290);
      thetypeid();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2291);
      match(AergiaCpp14Parser::Template);
      setState(2292);
      match(AergiaCpp14Parser::Less);
      setState(2293);
      templateparameterlist(0);
      setState(2294);
      match(AergiaCpp14Parser::Greater);
      setState(2295);
      match(AergiaCpp14Parser::Class);
      setState(2297);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx)) {
      case 1: {
        setState(2296);
        match(AergiaCpp14Parser::Ellipsis);
        break;
      }

      }
      setState(2300);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 287, _ctx)) {
      case 1: {
        setState(2299);
        match(AergiaCpp14Parser::Identifier);
        break;
      }

      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2302);
      match(AergiaCpp14Parser::Template);
      setState(2303);
      match(AergiaCpp14Parser::Less);
      setState(2304);
      templateparameterlist(0);
      setState(2305);
      match(AergiaCpp14Parser::Greater);
      setState(2306);
      match(AergiaCpp14Parser::Class);
      setState(2308);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Identifier) {
        setState(2307);
        match(AergiaCpp14Parser::Identifier);
      }
      setState(2310);
      match(AergiaCpp14Parser::Assign);
      setState(2311);
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
  enterRule(_localctx, 372, AergiaCpp14Parser::RuleSimpletemplateid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2315);
    templatename();
    setState(2316);
    match(AergiaCpp14Parser::Less);
    setState(2318);
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
      | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
      | (1ULL << (AergiaCpp14Parser::Short - 65))
      | (1ULL << (AergiaCpp14Parser::Signed - 65))
      | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
      | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
      | (1ULL << (AergiaCpp14Parser::Struct - 65))
      | (1ULL << (AergiaCpp14Parser::This - 65))
      | (1ULL << (AergiaCpp14Parser::True - 65))
      | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
      | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
      | (1ULL << (AergiaCpp14Parser::Union - 65))
      | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
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
      | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
      | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
      | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
      | (1ULL << (AergiaCpp14Parser::Identifier - 129))
      | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
      | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
      setState(2317);
      templateargumentlist(0);
    }
    setState(2320);
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
  enterRule(_localctx, 374, AergiaCpp14Parser::RuleTemplateid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2337);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2322);
      simpletemplateid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2323);
      operatorfunctionid();
      setState(2324);
      match(AergiaCpp14Parser::Less);
      setState(2326);
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
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Short - 65))
        | (1ULL << (AergiaCpp14Parser::Signed - 65))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Struct - 65))
        | (1ULL << (AergiaCpp14Parser::This - 65))
        | (1ULL << (AergiaCpp14Parser::True - 65))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
        | (1ULL << (AergiaCpp14Parser::Union - 65))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
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
        | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
        | (1ULL << (AergiaCpp14Parser::Identifier - 129))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
        setState(2325);
        templateargumentlist(0);
      }
      setState(2328);
      match(AergiaCpp14Parser::Greater);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2330);
      literaloperatorid();
      setState(2331);
      match(AergiaCpp14Parser::Less);
      setState(2333);
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
        | (1ULL << AergiaCpp14Parser::Operator))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (AergiaCpp14Parser::Reinterpret_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Short - 65))
        | (1ULL << (AergiaCpp14Parser::Signed - 65))
        | (1ULL << (AergiaCpp14Parser::Sizeof - 65))
        | (1ULL << (AergiaCpp14Parser::Static_cast - 65))
        | (1ULL << (AergiaCpp14Parser::Struct - 65))
        | (1ULL << (AergiaCpp14Parser::This - 65))
        | (1ULL << (AergiaCpp14Parser::True - 65))
        | (1ULL << (AergiaCpp14Parser::Typeid_ - 65))
        | (1ULL << (AergiaCpp14Parser::Typename_ - 65))
        | (1ULL << (AergiaCpp14Parser::Union - 65))
        | (1ULL << (AergiaCpp14Parser::Unsigned - 65))
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
        | (1ULL << (AergiaCpp14Parser::Tilde - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (AergiaCpp14Parser::PlusPlus - 129))
        | (1ULL << (AergiaCpp14Parser::MinusMinus - 129))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 129))
        | (1ULL << (AergiaCpp14Parser::Identifier - 129))
        | (1ULL << (AergiaCpp14Parser::Integerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Characterliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Floatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Stringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 129))
        | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 129)))) != 0)) {
        setState(2332);
        templateargumentlist(0);
      }
      setState(2335);
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
  enterRule(_localctx, 376, AergiaCpp14Parser::RuleTemplatename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2339);
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
  size_t startState = 378;
  enterRecursionRule(_localctx, 378, AergiaCpp14Parser::RuleTemplateargumentlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2342);
    templateargument();
    setState(2344);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 294, _ctx)) {
    case 1: {
      setState(2343);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2354);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateargumentlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateargumentlist);
        setState(2346);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2347);
        match(AergiaCpp14Parser::Comma);
        setState(2348);
        templateargument();
        setState(2350);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 295, _ctx)) {
        case 1: {
          setState(2349);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(2356);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, _ctx);
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
  enterRule(_localctx, 380, AergiaCpp14Parser::RuleTemplateargument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2360);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2357);
      thetypeid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2358);
      constantexpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2359);
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
  enterRule(_localctx, 382, AergiaCpp14Parser::RuleTypenamespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2373);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 299, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2362);
      match(AergiaCpp14Parser::Typename_);
      setState(2363);
      nestednamespecifier(0);
      setState(2364);
      match(AergiaCpp14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2366);
      match(AergiaCpp14Parser::Typename_);
      setState(2367);
      nestednamespecifier(0);
      setState(2369);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Template) {
        setState(2368);
        match(AergiaCpp14Parser::Template);
      }
      setState(2371);
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
  enterRule(_localctx, 384, AergiaCpp14Parser::RuleExplicitinstantiation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2376);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Extern) {
      setState(2375);
      match(AergiaCpp14Parser::Extern);
    }
    setState(2378);
    match(AergiaCpp14Parser::Template);
    setState(2379);
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
  enterRule(_localctx, 386, AergiaCpp14Parser::RuleExplicitspecialization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2381);
    match(AergiaCpp14Parser::Template);
    setState(2382);
    match(AergiaCpp14Parser::Less);
    setState(2383);
    match(AergiaCpp14Parser::Greater);
    setState(2384);
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
  enterRule(_localctx, 388, AergiaCpp14Parser::RuleTryblock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2386);
    match(AergiaCpp14Parser::Try);
    setState(2387);
    compoundstatement();
    setState(2388);
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
  enterRule(_localctx, 390, AergiaCpp14Parser::RuleFunctiontryblock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2390);
    match(AergiaCpp14Parser::Try);
    setState(2392);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AergiaCpp14Parser::Colon) {
      setState(2391);
      ctorinitializer();
    }
    setState(2394);
    compoundstatement();
    setState(2395);
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
  enterRule(_localctx, 392, AergiaCpp14Parser::RuleHandlerseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2397);
    handler();
    setState(2399);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 302, _ctx)) {
    case 1: {
      setState(2398);
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
  enterRule(_localctx, 394, AergiaCpp14Parser::RuleHandler);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2401);
    match(AergiaCpp14Parser::Catch);
    setState(2402);
    match(AergiaCpp14Parser::LeftParen);
    setState(2403);
    exceptiondeclaration();
    setState(2404);
    match(AergiaCpp14Parser::RightParen);
    setState(2405);
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
  enterRule(_localctx, 396, AergiaCpp14Parser::RuleExceptiondeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2421);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2408);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2407);
        attributespecifierseq(0);
      }
      setState(2410);
      typespecifierseq();
      setState(2411);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2414);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::Alignas || _la == AergiaCpp14Parser::LeftBracket) {
        setState(2413);
        attributespecifierseq(0);
      }
      setState(2416);
      typespecifierseq();
      setState(2418);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AergiaCpp14Parser::T__10

      || _la == AergiaCpp14Parser::Decltype || ((((_la - 92) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 92)) & ((1ULL << (AergiaCpp14Parser::LeftParen - 92))
        | (1ULL << (AergiaCpp14Parser::LeftBracket - 92))
        | (1ULL << (AergiaCpp14Parser::Star - 92))
        | (1ULL << (AergiaCpp14Parser::And - 92))
        | (1ULL << (AergiaCpp14Parser::Doublecolon - 92))
        | (1ULL << (AergiaCpp14Parser::Ellipsis - 92))
        | (1ULL << (AergiaCpp14Parser::Identifier - 92)))) != 0)) {
        setState(2417);
        abstractdeclarator();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2420);
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
  enterRule(_localctx, 398, AergiaCpp14Parser::RuleThrowexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2423);
    match(AergiaCpp14Parser::Throw);
    setState(2425);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 307, _ctx)) {
    case 1: {
      setState(2424);
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
  enterRule(_localctx, 400, AergiaCpp14Parser::RuleExceptionspecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2429);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Throw: {
        enterOuterAlt(_localctx, 1);
        setState(2427);
        dynamicexceptionspecification();
        break;
      }

      case AergiaCpp14Parser::Noexcept: {
        enterOuterAlt(_localctx, 2);
        setState(2428);
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
  enterRule(_localctx, 402, AergiaCpp14Parser::RuleDynamicexceptionspecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2431);
    match(AergiaCpp14Parser::Throw);
    setState(2432);
    match(AergiaCpp14Parser::LeftParen);
    setState(2434);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 20) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 20)) & ((1ULL << (AergiaCpp14Parser::Auto - 20))
      | (1ULL << (AergiaCpp14Parser::Bool - 20))
      | (1ULL << (AergiaCpp14Parser::Char - 20))
      | (1ULL << (AergiaCpp14Parser::Char16 - 20))
      | (1ULL << (AergiaCpp14Parser::Char32 - 20))
      | (1ULL << (AergiaCpp14Parser::Class - 20))
      | (1ULL << (AergiaCpp14Parser::Const - 20))
      | (1ULL << (AergiaCpp14Parser::Decltype - 20))
      | (1ULL << (AergiaCpp14Parser::Double - 20))
      | (1ULL << (AergiaCpp14Parser::Enum - 20))
      | (1ULL << (AergiaCpp14Parser::Float - 20))
      | (1ULL << (AergiaCpp14Parser::Int - 20))
      | (1ULL << (AergiaCpp14Parser::Long - 20))
      | (1ULL << (AergiaCpp14Parser::Short - 20))
      | (1ULL << (AergiaCpp14Parser::Signed - 20))
      | (1ULL << (AergiaCpp14Parser::Struct - 20))
      | (1ULL << (AergiaCpp14Parser::Typename_ - 20)))) != 0) || ((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & ((1ULL << (AergiaCpp14Parser::Union - 84))
      | (1ULL << (AergiaCpp14Parser::Unsigned - 84))
      | (1ULL << (AergiaCpp14Parser::Void - 84))
      | (1ULL << (AergiaCpp14Parser::Volatile - 84))
      | (1ULL << (AergiaCpp14Parser::Wchar - 84))
      | (1ULL << (AergiaCpp14Parser::Doublecolon - 84))
      | (1ULL << (AergiaCpp14Parser::Identifier - 84)))) != 0)) {
      setState(2433);
      typeidlist(0);
    }
    setState(2436);
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
  size_t startState = 404;
  enterRecursionRule(_localctx, 404, AergiaCpp14Parser::RuleTypeidlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2439);
    thetypeid();
    setState(2441);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, _ctx)) {
    case 1: {
      setState(2440);
      match(AergiaCpp14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2451);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeidlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeidlist);
        setState(2443);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2444);
        match(AergiaCpp14Parser::Comma);
        setState(2445);
        thetypeid();
        setState(2447);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx)) {
        case 1: {
          setState(2446);
          match(AergiaCpp14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(2453);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx);
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
  enterRule(_localctx, 406, AergiaCpp14Parser::RuleNoexceptspecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2460);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2454);
      match(AergiaCpp14Parser::Noexcept);
      setState(2455);
      match(AergiaCpp14Parser::LeftParen);
      setState(2456);
      constantexpression();
      setState(2457);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2459);
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
  enterRule(_localctx, 408, AergiaCpp14Parser::RulePreprocessorDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2462);
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
  enterRule(_localctx, 410, AergiaCpp14Parser::RuleTheoperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2515);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2464);
      match(AergiaCpp14Parser::New);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2465);
      match(AergiaCpp14Parser::Delete);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2466);
      match(AergiaCpp14Parser::New);
      setState(2467);
      match(AergiaCpp14Parser::LeftBracket);
      setState(2468);
      match(AergiaCpp14Parser::RightBracket);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2469);
      match(AergiaCpp14Parser::Delete);
      setState(2470);
      match(AergiaCpp14Parser::LeftBracket);
      setState(2471);
      match(AergiaCpp14Parser::RightBracket);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2472);
      match(AergiaCpp14Parser::Plus);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2473);
      match(AergiaCpp14Parser::Minus);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2474);
      match(AergiaCpp14Parser::Star);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2475);
      match(AergiaCpp14Parser::Div);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2476);
      match(AergiaCpp14Parser::Mod);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2477);
      match(AergiaCpp14Parser::Caret);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2478);
      match(AergiaCpp14Parser::And);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2479);
      match(AergiaCpp14Parser::Or);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2480);
      match(AergiaCpp14Parser::Tilde);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2481);
      match(AergiaCpp14Parser::T__8);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2482);
      match(AergiaCpp14Parser::T__9);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2483);
      match(AergiaCpp14Parser::Assign);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2484);
      match(AergiaCpp14Parser::Less);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2485);
      match(AergiaCpp14Parser::Greater);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2486);
      match(AergiaCpp14Parser::PlusAssign);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2487);
      match(AergiaCpp14Parser::MinusAssign);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2488);
      match(AergiaCpp14Parser::StarAssign);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2489);
      match(AergiaCpp14Parser::DivAssign);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2490);
      match(AergiaCpp14Parser::ModAssign);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2491);
      match(AergiaCpp14Parser::XorAssign);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2492);
      match(AergiaCpp14Parser::AndAssign);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2493);
      match(AergiaCpp14Parser::OrAssign);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2494);
      match(AergiaCpp14Parser::LeftShift);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2495);
      match(AergiaCpp14Parser::RightShift);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2496);
      match(AergiaCpp14Parser::RightShiftAssign);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2497);
      match(AergiaCpp14Parser::LeftShiftAssign);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2498);
      match(AergiaCpp14Parser::Equal);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2499);
      match(AergiaCpp14Parser::NotEqual);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2500);
      match(AergiaCpp14Parser::LessEqual);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2501);
      match(AergiaCpp14Parser::GreaterEqual);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2502);
      match(AergiaCpp14Parser::T__10);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2503);
      match(AergiaCpp14Parser::T__11);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2504);
      match(AergiaCpp14Parser::T__12);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2505);
      match(AergiaCpp14Parser::T__13);
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2506);
      match(AergiaCpp14Parser::PlusPlus);
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(2507);
      match(AergiaCpp14Parser::MinusMinus);
      break;
    }

    case 41: {
      enterOuterAlt(_localctx, 41);
      setState(2508);
      match(AergiaCpp14Parser::Comma);
      break;
    }

    case 42: {
      enterOuterAlt(_localctx, 42);
      setState(2509);
      match(AergiaCpp14Parser::ArrowStar);
      break;
    }

    case 43: {
      enterOuterAlt(_localctx, 43);
      setState(2510);
      match(AergiaCpp14Parser::Arrow);
      break;
    }

    case 44: {
      enterOuterAlt(_localctx, 44);
      setState(2511);
      match(AergiaCpp14Parser::LeftParen);
      setState(2512);
      match(AergiaCpp14Parser::RightParen);
      break;
    }

    case 45: {
      enterOuterAlt(_localctx, 45);
      setState(2513);
      match(AergiaCpp14Parser::LeftBracket);
      setState(2514);
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
  enterRule(_localctx, 412, AergiaCpp14Parser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2524);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AergiaCpp14Parser::Integerliteral: {
        enterOuterAlt(_localctx, 1);
        setState(2517);
        match(AergiaCpp14Parser::Integerliteral);
        break;
      }

      case AergiaCpp14Parser::Characterliteral: {
        enterOuterAlt(_localctx, 2);
        setState(2518);
        match(AergiaCpp14Parser::Characterliteral);
        break;
      }

      case AergiaCpp14Parser::Floatingliteral: {
        enterOuterAlt(_localctx, 3);
        setState(2519);
        match(AergiaCpp14Parser::Floatingliteral);
        break;
      }

      case AergiaCpp14Parser::Stringliteral: {
        enterOuterAlt(_localctx, 4);
        setState(2520);
        match(AergiaCpp14Parser::Stringliteral);
        break;
      }

      case AergiaCpp14Parser::False:
      case AergiaCpp14Parser::True: {
        enterOuterAlt(_localctx, 5);
        setState(2521);
        booleanliteral();
        break;
      }

      case AergiaCpp14Parser::Nullptr: {
        enterOuterAlt(_localctx, 6);
        setState(2522);
        pointerliteral();
        break;
      }

      case AergiaCpp14Parser::Userdefinedintegerliteral:
      case AergiaCpp14Parser::Userdefinedfloatingliteral:
      case AergiaCpp14Parser::Userdefinedstringliteral:
      case AergiaCpp14Parser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 7);
        setState(2523);
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
  enterRule(_localctx, 414, AergiaCpp14Parser::RuleBooleanliteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2526);
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
  enterRule(_localctx, 416, AergiaCpp14Parser::RulePointerliteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2528);
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
  enterRule(_localctx, 418, AergiaCpp14Parser::RuleUserdefinedliteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2530);
    _la = _input->LA(1);
    if (!(((((_la - 151) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 151)) & ((1ULL << (AergiaCpp14Parser::Userdefinedintegerliteral - 151))
      | (1ULL << (AergiaCpp14Parser::Userdefinedfloatingliteral - 151))
      | (1ULL << (AergiaCpp14Parser::Userdefinedstringliteral - 151))
      | (1ULL << (AergiaCpp14Parser::Userdefinedcharacterliteral - 151)))) != 0))) {
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
    case 15: return nestednamespecifierSempred(dynamic_cast<NestednamespecifierContext *>(context), predicateIndex);
    case 20: return capturelistSempred(dynamic_cast<CapturelistContext *>(context), predicateIndex);
    case 25: return postfixexpressionSempred(dynamic_cast<PostfixexpressionContext *>(context), predicateIndex);
    case 36: return noptrnewdeclaratorSempred(dynamic_cast<NoptrnewdeclaratorContext *>(context), predicateIndex);
    case 41: return pmexpressionSempred(dynamic_cast<PmexpressionContext *>(context), predicateIndex);
    case 42: return multiplicativeexpressionSempred(dynamic_cast<MultiplicativeexpressionContext *>(context), predicateIndex);
    case 43: return additiveexpressionSempred(dynamic_cast<AdditiveexpressionContext *>(context), predicateIndex);
    case 44: return shiftexpressionSempred(dynamic_cast<ShiftexpressionContext *>(context), predicateIndex);
    case 46: return relationalexpressionSempred(dynamic_cast<RelationalexpressionContext *>(context), predicateIndex);
    case 47: return equalityexpressionSempred(dynamic_cast<EqualityexpressionContext *>(context), predicateIndex);
    case 48: return andexpressionSempred(dynamic_cast<AndexpressionContext *>(context), predicateIndex);
    case 49: return exclusiveorexpressionSempred(dynamic_cast<ExclusiveorexpressionContext *>(context), predicateIndex);
    case 50: return inclusiveorexpressionSempred(dynamic_cast<InclusiveorexpressionContext *>(context), predicateIndex);
    case 51: return logicalandexpressionSempred(dynamic_cast<LogicalandexpressionContext *>(context), predicateIndex);
    case 52: return logicalorexpressionSempred(dynamic_cast<LogicalorexpressionContext *>(context), predicateIndex);
    case 56: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 62: return statementseqSempred(dynamic_cast<StatementseqContext *>(context), predicateIndex);
    case 71: return declarationseqSempred(dynamic_cast<DeclarationseqContext *>(context), predicateIndex);
    case 98: return enumeratorlistSempred(dynamic_cast<EnumeratorlistContext *>(context), predicateIndex);
    case 115: return attributespecifierseqSempred(dynamic_cast<AttributespecifierseqContext *>(context), predicateIndex);
    case 118: return attributelistSempred(dynamic_cast<AttributelistContext *>(context), predicateIndex);
    case 124: return balancedtokenseqSempred(dynamic_cast<BalancedtokenseqContext *>(context), predicateIndex);
    case 126: return initdeclaratorlistSempred(dynamic_cast<InitdeclaratorlistContext *>(context), predicateIndex);
    case 130: return noptrdeclaratorSempred(dynamic_cast<NoptrdeclaratorContext *>(context), predicateIndex);
    case 141: return noptrabstractdeclaratorSempred(dynamic_cast<NoptrabstractdeclaratorContext *>(context), predicateIndex);
    case 143: return noptrabstractpackdeclaratorSempred(dynamic_cast<NoptrabstractpackdeclaratorContext *>(context), predicateIndex);
    case 145: return parameterdeclarationlistSempred(dynamic_cast<ParameterdeclarationlistContext *>(context), predicateIndex);
    case 152: return initializerlistSempred(dynamic_cast<InitializerlistContext *>(context), predicateIndex);
    case 162: return memberdeclaratorlistSempred(dynamic_cast<MemberdeclaratorlistContext *>(context), predicateIndex);
    case 164: return virtspecifierseqSempred(dynamic_cast<VirtspecifierseqContext *>(context), predicateIndex);
    case 168: return basespecifierlistSempred(dynamic_cast<BasespecifierlistContext *>(context), predicateIndex);
    case 183: return templateparameterlistSempred(dynamic_cast<TemplateparameterlistContext *>(context), predicateIndex);
    case 189: return templateargumentlistSempred(dynamic_cast<TemplateargumentlistContext *>(context), predicateIndex);
    case 202: return typeidlistSempred(dynamic_cast<TypeidlistContext *>(context), predicateIndex);

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
  "aergiaexpression", "anonymousExpression", "anoynmousBody", "foreach", 
  "foreachheader", "foreachbody", "callchain", "primaryexpression", "idexpression", 
  "unqualifiedid", "qualifiedid", "nestednamespecifier", "lambdaexpression", 
  "lambdaintroducer", "lambdacapture", "capturedefault", "capturelist", 
  "capture", "simplecapture", "initcapture", "lambdadeclarator", "postfixexpression", 
  "typeidofexpr", "typeidofthetypeid", "expressionlist", "pseudodestructorname", 
  "unaryexpression", "unaryoperator", "newexpression", "newplacement", "newtypeid", 
  "newdeclarator", "noptrnewdeclarator", "newinitializer", "deleteexpression", 
  "noexceptexpression", "castexpression", "pmexpression", "multiplicativeexpression", 
  "additiveexpression", "shiftexpression", "shiftoperator", "relationalexpression", 
  "equalityexpression", "andexpression", "exclusiveorexpression", "inclusiveorexpression", 
  "logicalandexpression", "logicalorexpression", "conditionalexpression", 
  "assignmentexpression", "assignmentoperator", "expression", "constantexpression", 
  "statement", "labeledstatement", "expressionstatement", "compoundstatement", 
  "statementseq", "selectionstatement", "condition", "iterationstatement", 
  "forinitstatement", "forrangedeclaration", "forrangeinitializer", "jumpstatement", 
  "declarationstatement", "declarationseq", "declaration", "blockdeclaration", 
  "aliasdeclaration", "simpledeclaration", "static_assertdeclaration", "emptydeclaration", 
  "attributedeclaration", "declspecifier", "declspecifierseq", "storageclassspecifier", 
  "functionspecifier", "typedefname", "typespecifier", "trailingtypespecifier", 
  "typespecifierseq", "trailingtypespecifierseq", "simpletypespecifier", 
  "thetypename", "decltypespecifier", "elaboratedtypespecifier", "enumname", 
  "enumspecifier", "enumhead", "opaqueenumdeclaration", "enumkey", "enumbase", 
  "enumeratorlist", "enumeratordefinition", "enumerator", "namespacename", 
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
  "memberdeclarator", "virtspecifierseq", "virtspecifier", "purespecifier", 
  "baseclause", "basespecifierlist", "basespecifier", "classordecltype", 
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
  "').'", "'!'", "'not'", "'&&'", "'and'", "'||'", "'or'", "", "", "'alignas'", 
  "'alignof'", "'asm'", "'auto'", "'bool'", "'break'", "'case'", "'catch'", 
  "'char'", "'char16_t'", "'char32_t'", "'class'", "'const'", "'constexpr'", 
  "'const_cast'", "'continue'", "'decltype'", "'default'", "'delete'", "'do'", 
  "'double'", "'dynamic_cast'", "'else'", "'enum'", "'explicit'", "'export'", 
  "'extern'", "'false'", "'final'", "'float'", "'for'", "'friend'", "'goto'", 
  "'if'", "'inline'", "'int'", "'long'", "'mutable'", "'namespace'", "'new'", 
  "'noexcept'", "'nullptr'", "'operator'", "'override'", "'private'", "'protected'", 
  "'public'", "'register'", "'reinterpret_cast'", "'return'", "'short'", 
  "'signed'", "'sizeof'", "'static'", "'static_assert'", "'static_cast'", 
  "'struct'", "'switch'", "'template'", "'this'", "'thread_local'", "'throw'", 
  "'true'", "'try'", "'typedef'", "'typeid'", "'typename'", "'union'", "'unsigned'", 
  "'using'", "'virtual'", "'void'", "'volatile'", "'wchar_t'", "'while'", 
  "'('", "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", 
  "'%'", "'^'", "'&'", "'|'", "'~'", "", "'='", "'<'", "'>'", "'+='", "'-='", 
  "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", "'<<'", "'>>'", "'<<='", 
  "'>>='", "'=='", "'!='", "'<='", "'>='", "", "", "'++'", "'--'", "','", 
  "'->*'", "'->'", "'?'", "':'", "'::'", "';'", "'.'", "'.*'", "'...'"
};

std::vector<std::string> AergiaCpp14Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "MultiLineMacro", 
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
       0x3, 0xa0, 0x9e7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0xd1, 0x4, 0xd2, 0x9, 0xd2, 0x4, 0xd3, 0x9, 0xd3, 0x3, 0x2, 
       0x5, 0x2, 0x1a8, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x5, 0x6, 0x1bc, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x1d2, 0xa, 0xb, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x5, 0xc, 0x1e1, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1eb, 0xa, 0xd, 
       0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1ef, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
       0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0xf, 0x5, 0xf, 0x1fa, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
       0x1fe, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x20d, 0xa, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x214, 0xa, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x219, 0xa, 0x11, 
       0xc, 0x11, 0xe, 0x11, 0x21c, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 
       0x12, 0x220, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
       0x5, 0x13, 0x226, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x230, 
       0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x5, 0x16, 0x237, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x5, 0x16, 0x23d, 0xa, 0x16, 0x7, 0x16, 0x23f, 0xa, 0x16, 0xc, 
       0x16, 0xe, 0x16, 0x242, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 
       0x246, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 
       0x18, 0x24c, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x5, 0x19, 0x253, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x259, 0xa, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
       0x25c, 0xa, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x25f, 0xa, 0x1a, 0x3, 0x1a, 
       0x5, 0x1a, 0x262, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x269, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x270, 0xa, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x2a4, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 
       0x2b3, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 
       0x1b, 0x2b9, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x5, 0x1b, 0x2bf, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x2cc, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 
       0x2cf, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x5, 0x1f, 0x2d8, 0xa, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x5, 0x1f, 0x2e7, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
       0x1f, 0x5, 0x1f, 0x2ed, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x5, 0x20, 0x30b, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x22, 0x5, 0x22, 0x310, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 
       0x314, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x318, 0xa, 0x22, 
       0x3, 0x22, 0x5, 0x22, 0x31b, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 
       0x22, 0x31f, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x5, 0x22, 0x325, 0xa, 0x22, 0x5, 0x22, 0x327, 0xa, 0x22, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 
       0x32f, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x333, 0xa, 0x25, 
       0x3, 0x25, 0x5, 0x25, 0x336, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x33d, 0xa, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x344, 0xa, 
       0x26, 0x7, 0x26, 0x346, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x349, 0xb, 
       0x26, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x34d, 0xa, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x5, 0x27, 0x351, 0xa, 0x27, 0x3, 0x28, 0x5, 0x28, 0x354, 
       0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x359, 0xa, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x35f, 
       0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x5, 0x2a, 0x36c, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 
       0x2b, 0x377, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x37a, 0xb, 0x2b, 0x3, 
       0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
       0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 
       0x2c, 0x388, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x38b, 0xb, 0x2c, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x7, 0x2d, 0x396, 0xa, 0x2d, 0xc, 0x2d, 
       0xe, 0x2d, 0x399, 0xb, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x3a2, 0xa, 0x2e, 
       0xc, 0x2e, 0xe, 0x2e, 0x3a5, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
       0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
       0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 0x3b8, 0xa, 0x30, 0xc, 0x30, 
       0xe, 0x30, 0x3bb, 0xb, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
       0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x7, 
       0x31, 0x3c6, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x3c9, 0xb, 0x31, 0x3, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 
       0x32, 0x3d1, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x3d4, 0xb, 0x32, 0x3, 
       0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x7, 
       0x33, 0x3dc, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x3df, 0xb, 0x33, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x7, 
       0x34, 0x3e7, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 0x3ea, 0xb, 0x34, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x3f5, 0xa, 0x35, 0xc, 0x35, 
       0xe, 0x35, 0x3f8, 0xb, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 
       0x36, 0x403, 0xa, 0x36, 0xc, 0x36, 0xe, 0x36, 0x406, 0xb, 0x36, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x5, 0x37, 0x40f, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x417, 0xa, 0x38, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x421, 0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 
       0x424, 0xb, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x5, 
       0x3c, 0x42a, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x42e, 0xa, 
       0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x432, 0xa, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x5, 0x3c, 0x436, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 
       0x3c, 0x43a, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x5, 0x3c, 0x441, 0xa, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x444, 
       0xa, 0x3c, 0x3, 0x3d, 0x5, 0x3d, 0x447, 0xa, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x44d, 0xa, 0x3d, 0x3, 0x3d, 
       0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 
       0x455, 0xa, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x45a, 
       0xa, 0x3d, 0x3, 0x3e, 0x5, 0x3e, 0x45d, 0xa, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x463, 0xa, 0x3f, 0x3, 0x3f, 
       0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
       0x7, 0x40, 0x46c, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 0x46f, 0xb, 0x40, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x485, 0xa, 0x41, 0x3, 0x42, 0x3, 
       0x42, 0x5, 0x42, 0x489, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
       0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x491, 0xa, 0x42, 0x3, 
       0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x497, 0xa, 0x42, 
       0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
       0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
       0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
       0x5, 0x43, 0x4ab, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x4af, 
       0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
       0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
       0x5, 0x43, 0x4bc, 0xa, 0x43, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x4c0, 
       0xa, 0x44, 0x3, 0x45, 0x5, 0x45, 0x4c3, 0xa, 0x45, 0x3, 0x45, 0x3, 
       0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x4ca, 0xa, 0x46, 
       0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
       0x5, 0x47, 0x4d2, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
       0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x4dc, 
       0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
       0x3, 0x49, 0x3, 0x49, 0x7, 0x49, 0x4e5, 0xa, 0x49, 0xc, 0x49, 0xe, 
       0x49, 0x4e8, 0xb, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
       0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
       0x5, 0x4a, 0x4f4, 0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 
       0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x4fe, 
       0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x503, 0xa, 
       0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x5, 
       0x4d, 0x50a, 0xa, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x50d, 0xa, 0x4d, 0x3, 
       0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x512, 0xa, 0x4d, 0x3, 0x4d, 
       0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x517, 0xa, 0x4d, 0x3, 0x4e, 0x3, 
       0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
       0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
       0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 
       0x51, 0x52c, 0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x530, 0xa, 
       0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x535, 0xa, 0x52, 
       0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 
       0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x540, 0xa, 0x56, 0x3, 
       0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x546, 0xa, 0x57, 
       0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x54a, 0xa, 0x58, 0x3, 0x58, 0x3, 
       0x58, 0x3, 0x58, 0x5, 0x58, 0x54f, 0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 
       0x5, 0x59, 0x553, 0xa, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x5, 
       0x59, 0x558, 0xa, 0x59, 0x3, 0x5a, 0x5, 0x5a, 0x55b, 0xa, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x571, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 
       0x3, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x577, 0xa, 0x5b, 0x3, 0x5c, 0x3, 
       0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 
       0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x582, 0xa, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 
       0x5, 0x5d, 0x586, 0xa, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x589, 0xa, 0x5d, 
       0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
       0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x593, 0xa, 0x5d, 0x3, 0x5d, 0x3, 
       0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x599, 0xa, 0x5d, 0x3, 0x5d, 
       0x5, 0x5d, 0x59c, 0xa, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 
       0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x5a3, 0xa, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
       0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
       0x5, 0x5f, 0x5ad, 0xa, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x5b1, 
       0xa, 0x60, 0x3, 0x60, 0x5, 0x60, 0x5b4, 0xa, 0x60, 0x3, 0x60, 0x5, 
       0x60, 0x5b7, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x5bb, 0xa, 
       0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x5c0, 0xa, 0x60, 
       0x5, 0x60, 0x5c2, 0xa, 0x60, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x5c6, 
       0xa, 0x61, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x5ca, 0xa, 0x61, 0x3, 
       0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
       0x62, 0x5, 0x62, 0x5d3, 0xa, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 
       0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 
       0x7, 0x64, 0x5de, 0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 0x5e1, 0xb, 0x64, 
       0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 
       0x5e8, 0xa, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x5, 
       0x67, 0x5ee, 0xa, 0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 
       0x5, 0x69, 0x5f4, 0xa, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x5, 
       0x6b, 0x5f9, 0xa, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
       0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6c, 0x5, 0x6c, 0x602, 0xa, 0x6c, 0x3, 
       0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 0x5, 
       0x6d, 0x60a, 0xa, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 
       0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 0x5, 0x70, 
       0x615, 0xa, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x5, 
       0x71, 0x61b, 0xa, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 
       0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x5, 0x71, 
       0x626, 0xa, 0x71, 0x3, 0x72, 0x5, 0x72, 0x629, 0xa, 0x72, 0x3, 0x72, 
       0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x62e, 0xa, 0x72, 0x3, 0x72, 0x3, 
       0x72, 0x3, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 
       0x73, 0x3, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 
       0x74, 0x63d, 0xa, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 
       0x5, 0x74, 0x643, 0xa, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 
       0x75, 0x3, 0x75, 0x7, 0x75, 0x64a, 0xa, 0x75, 0xc, 0x75, 0xe, 0x75, 
       0x64d, 0xb, 0x75, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 
       0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x656, 0xa, 0x76, 0x3, 0x77, 
       0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x5, 0x77, 0x65c, 0xa, 0x77, 0x3, 
       0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x5, 
       0x77, 0x664, 0xa, 0x77, 0x3, 0x77, 0x3, 0x77, 0x5, 0x77, 0x668, 0xa, 
       0x77, 0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x66c, 0xa, 0x78, 0x3, 0x78, 
       0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x671, 0xa, 0x78, 0x3, 0x78, 0x3, 
       0x78, 0x3, 0x78, 0x5, 0x78, 0x676, 0xa, 0x78, 0x3, 0x78, 0x3, 0x78, 
       0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x7, 0x78, 0x67d, 0xa, 0x78, 0xc, 
       0x78, 0xe, 0x78, 0x680, 0xb, 0x78, 0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 
       0x684, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x688, 0xa, 0x7a, 
       0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 
       0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 
       0x5, 0x7e, 0x696, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x7, 0x7e, 0x69a, 
       0xa, 0x7e, 0xc, 0x7e, 0xe, 0x7e, 0x69d, 0xb, 0x7e, 0x3, 0x7f, 0x3, 
       0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 
       0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x6ab, 
       0xa, 0x7f, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 
       0x3, 0x80, 0x7, 0x80, 0x6b3, 0xa, 0x80, 0xc, 0x80, 0xe, 0x80, 0x6b6, 
       0xb, 0x80, 0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 0x6ba, 0xa, 0x81, 0x3, 
       0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x6c1, 
       0xa, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 
       0x6c7, 0xa, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x6cc, 
       0xa, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 
       0x6d2, 0xa, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
       0x84, 0x5, 0x84, 0x6d9, 0xa, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 
       0x6dd, 0xa, 0x84, 0x7, 0x84, 0x6df, 0xa, 0x84, 0xc, 0x84, 0xe, 0x84, 
       0x6e2, 0xb, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 
       0x85, 0x6e8, 0xa, 0x85, 0x3, 0x85, 0x5, 0x85, 0x6eb, 0xa, 0x85, 0x3, 
       0x85, 0x5, 0x85, 0x6ee, 0xa, 0x85, 0x3, 0x85, 0x5, 0x85, 0x6f1, 0xa, 
       0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x6f6, 0xa, 0x86, 
       0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x6fa, 0xa, 0x87, 0x3, 0x87, 0x5, 
       0x87, 0x6fd, 0xa, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x701, 0xa, 
       0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x705, 0xa, 0x87, 0x3, 0x87, 
       0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x70a, 0xa, 0x87, 0x3, 0x87, 0x5, 
       0x87, 0x70d, 0xa, 0x87, 0x5, 0x87, 0x70f, 0xa, 0x87, 0x3, 0x88, 0x3, 
       0x88, 0x5, 0x88, 0x713, 0xa, 0x88, 0x3, 0x89, 0x3, 0x89, 0x3, 0x8a, 
       0x3, 0x8a, 0x3, 0x8b, 0x5, 0x8b, 0x71a, 0xa, 0x8b, 0x3, 0x8b, 0x3, 
       0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x720, 0xa, 0x8c, 0x3, 0x8d, 
       0x3, 0x8d, 0x5, 0x8d, 0x724, 0xa, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
       0x8d, 0x3, 0x8d, 0x5, 0x8d, 0x72a, 0xa, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 
       0x3, 0x8e, 0x5, 0x8e, 0x72f, 0xa, 0x8e, 0x5, 0x8e, 0x731, 0xa, 0x8e, 
       0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x737, 0xa, 
       0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x73b, 0xa, 0x8f, 0x3, 0x8f, 
       0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x741, 0xa, 0x8f, 0x3, 
       0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x748, 
       0xa, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x74c, 0xa, 0x8f, 0x7, 
       0x8f, 0x74e, 0xa, 0x8f, 0xc, 0x8f, 0xe, 0x8f, 0x751, 0xb, 0x8f, 0x3, 
       0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x5, 0x90, 0x757, 0xa, 0x90, 
       0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 
       0x3, 0x91, 0x3, 0x91, 0x5, 0x91, 0x761, 0xa, 0x91, 0x3, 0x91, 0x3, 
       0x91, 0x5, 0x91, 0x765, 0xa, 0x91, 0x7, 0x91, 0x767, 0xa, 0x91, 0xc, 
       0x91, 0xe, 0x91, 0x76a, 0xb, 0x91, 0x3, 0x92, 0x5, 0x92, 0x76d, 0xa, 
       0x92, 0x3, 0x92, 0x5, 0x92, 0x770, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 
       0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 0x776, 0xa, 0x92, 0x3, 0x93, 0x3, 
       0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x7, 0x93, 0x77e, 
       0xa, 0x93, 0xc, 0x93, 0xe, 0x93, 0x781, 0xb, 0x93, 0x3, 0x94, 0x5, 
       0x94, 0x784, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 
       0x5, 0x94, 0x78a, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 
       0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x792, 0xa, 0x94, 0x3, 0x94, 
       0x3, 0x94, 0x5, 0x94, 0x796, 0xa, 0x94, 0x3, 0x94, 0x5, 0x94, 0x799, 
       0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x79d, 0xa, 0x94, 0x3, 
       0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x7a2, 0xa, 0x94, 0x3, 0x95, 
       0x5, 0x95, 0x7a5, 0xa, 0x95, 0x3, 0x95, 0x5, 0x95, 0x7a8, 0xa, 0x95, 
       0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x7ac, 0xa, 0x95, 0x3, 0x95, 0x3, 
       0x95, 0x3, 0x96, 0x5, 0x96, 0x7b1, 0xa, 0x96, 0x3, 0x96, 0x3, 0x96, 
       0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 
       0x5, 0x96, 0x7bb, 0xa, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 
       0x97, 0x3, 0x97, 0x5, 0x97, 0x7c2, 0xa, 0x97, 0x3, 0x98, 0x3, 0x98, 
       0x3, 0x98, 0x5, 0x98, 0x7c7, 0xa, 0x98, 0x3, 0x99, 0x3, 0x99, 0x5, 
       0x99, 0x7cb, 0xa, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 
       0x7d0, 0xa, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x5, 
       0x9a, 0x7d6, 0xa, 0x9a, 0x7, 0x9a, 0x7d8, 0xa, 0x9a, 0xc, 0x9a, 0xe, 
       0x9a, 0x7db, 0xb, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x5, 0x9b, 
       0x7e0, 0xa, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x5, 
       0x9b, 0x7e6, 0xa, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x7ea, 0xa, 
       0x9c, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x7ef, 0xa, 0x9d, 
       0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x7f5, 0xa, 
       0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x7f9, 0xa, 0x9e, 0x3, 0x9e, 
       0x5, 0x9e, 0x7fc, 0xa, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x800, 
       0xa, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x803, 0xa, 0x9e, 0x5, 0x9e, 0x805, 
       0xa, 0x9e, 0x3, 0x9f, 0x5, 0x9f, 0x808, 0xa, 0x9f, 0x3, 0x9f, 0x3, 
       0x9f, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa2, 0x3, 
       0xa2, 0x5, 0xa2, 0x812, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 
       0x5, 0xa2, 0x817, 0xa, 0xa2, 0x5, 0xa2, 0x819, 0xa, 0xa2, 0x3, 0xa3, 
       0x5, 0xa3, 0x81c, 0xa, 0xa3, 0x3, 0xa3, 0x5, 0xa3, 0x81f, 0xa, 0xa3, 
       0x3, 0xa3, 0x5, 0xa3, 0x822, 0xa, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 
       0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x5, 0xa3, 0x82b, 
       0xa, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 
       0x3, 0xa4, 0x7, 0xa4, 0x833, 0xa, 0xa4, 0xc, 0xa4, 0xe, 0xa4, 0x836, 
       0xb, 0xa4, 0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 0x83a, 0xa, 0xa5, 0x3, 
       0xa5, 0x5, 0xa5, 0x83d, 0xa, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 
       0x841, 0xa, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 0x844, 0xa, 0xa5, 0x3, 0xa5, 
       0x5, 0xa5, 0x847, 0xa, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 0x84b, 
       0xa, 0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 
       0x7, 0xa6, 0x852, 0xa, 0xa6, 0xc, 0xa6, 0xe, 0xa6, 0x855, 0xb, 0xa6, 
       0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 
       0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 
       0x5, 0xaa, 0x863, 0xa, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 
       0xaa, 0x5, 0xaa, 0x869, 0xa, 0xaa, 0x7, 0xaa, 0x86b, 0xa, 0xaa, 0xc, 
       0xaa, 0xe, 0xaa, 0x86e, 0xb, 0xaa, 0x3, 0xab, 0x5, 0xab, 0x871, 0xa, 
       0xab, 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 0x875, 0xa, 0xab, 0x3, 0xab, 
       0x3, 0xab, 0x5, 0xab, 0x879, 0xa, 0xab, 0x3, 0xab, 0x3, 0xab, 0x5, 
       0xab, 0x87d, 0xa, 0xab, 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 0x881, 0xa, 
       0xab, 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 0x885, 0xa, 0xab, 0x3, 0xac, 
       0x5, 0xac, 0x888, 0xa, 0xac, 0x3, 0xac, 0x3, 0xac, 0x5, 0xac, 0x88c, 
       0xa, 0xac, 0x3, 0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 0x3, 0xaf, 
       0x3, 0xaf, 0x3, 0xaf, 0x3, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x897, 0xa, 
       0xb0, 0x3, 0xb1, 0x3, 0xb1, 0x5, 0xb1, 0x89b, 0xa, 0xb1, 0x3, 0xb2, 
       0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 0x5, 0xb3, 0x8a2, 0xa, 
       0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x5, 0xb3, 0x8a6, 0xa, 0xb3, 0x3, 0xb3, 
       0x3, 0xb3, 0x3, 0xb3, 0x5, 0xb3, 0x8ab, 0xa, 0xb3, 0x3, 0xb4, 0x3, 
       0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x8b0, 0xa, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 
       0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x8b7, 0xa, 0xb4, 0x3, 
       0xb5, 0x3, 0xb5, 0x5, 0xb5, 0x8bb, 0xa, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 
       0x3, 0xb6, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 
       0x5, 0xb7, 0x8c5, 0xa, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 
       0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 
       0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x7, 0xb9, 0x8d3, 0xa, 0xb9, 0xc, 0xb9, 
       0xe, 0xb9, 0x8d6, 0xb, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x5, 0xba, 0x8da, 
       0xa, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x8de, 0xa, 0xbb, 0x3, 
       0xbb, 0x5, 0xbb, 0x8e1, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 
       0x8e5, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 
       0xbb, 0x8eb, 0xa, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x8ee, 0xa, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x8f2, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 
       0x5, 0xbb, 0x8fc, 0xa, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x8ff, 0xa, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 
       0x5, 0xbb, 0x907, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 
       0xbb, 0x90c, 0xa, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 
       0x911, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 
       0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x919, 0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 
       0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x920, 0xa, 0xbd, 0x3, 
       0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x924, 0xa, 0xbd, 0x3, 0xbe, 0x3, 0xbe, 
       0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x92b, 0xa, 0xbf, 0x3, 
       0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x931, 0xa, 0xbf, 
       0x7, 0xbf, 0x933, 0xa, 0xbf, 0xc, 0xbf, 0xe, 0xbf, 0x936, 0xb, 0xbf, 
       0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x93b, 0xa, 0xc0, 0x3, 
       0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 
       0xc1, 0x5, 0xc1, 0x944, 0xa, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x5, 0xc1, 
       0x948, 0xa, 0xc1, 0x3, 0xc2, 0x5, 0xc2, 0x94b, 0xa, 0xc2, 0x3, 0xc2, 
       0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 
       0x3, 0xc3, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc5, 
       0x3, 0xc5, 0x5, 0xc5, 0x95b, 0xa, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x962, 0xa, 0xc6, 0x3, 0xc7, 
       0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc8, 
       0x5, 0xc8, 0x96b, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 
       0xc8, 0x5, 0xc8, 0x971, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 
       0x975, 0xa, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x978, 0xa, 0xc8, 0x3, 0xc9, 
       0x3, 0xc9, 0x5, 0xc9, 0x97c, 0xa, 0xc9, 0x3, 0xca, 0x3, 0xca, 0x5, 
       0xca, 0x980, 0xa, 0xca, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x5, 0xcb, 
       0x985, 0xa, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x5, 0xcc, 0x98c, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 
       0x3, 0xcc, 0x5, 0xcc, 0x992, 0xa, 0xcc, 0x7, 0xcc, 0x994, 0xa, 0xcc, 
       0xc, 0xcc, 0xe, 0xcc, 0x997, 0xb, 0xcc, 0x3, 0xcd, 0x3, 0xcd, 0x3, 
       0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x5, 0xcd, 0x99f, 0xa, 0xcd, 
       0x3, 0xce, 0x3, 0xce, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 
       0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 
       0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 
       0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 
       0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 
       0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 
       0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 
       0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 
       0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x5, 0xcf, 
       0x9d6, 0xa, 0xcf, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 
       0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x5, 0xd0, 0x9df, 0xa, 0xd0, 0x3, 0xd1, 
       0x3, 0xd1, 0x3, 0xd2, 0x3, 0xd2, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 
       0x2, 0x24, 0x20, 0x2a, 0x34, 0x4a, 0x54, 0x56, 0x58, 0x5a, 0x5e, 
       0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x72, 0x7e, 0x90, 0xc6, 0xe8, 
       0xee, 0xfa, 0xfe, 0x106, 0x11c, 0x120, 0x124, 0x132, 0x146, 0x14a, 
       0x152, 0x170, 0x17c, 0x196, 0xd4, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
       0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
       0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
       0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 
       0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 
       0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 
       0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 
       0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 
       0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 
       0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 
       0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 
       0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 
       0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 
       0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 
       0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 
       0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 0x14c, 0x14e, 0x150, 
       0x152, 0x154, 0x156, 0x158, 0x15a, 0x15c, 0x15e, 0x160, 0x162, 0x164, 
       0x166, 0x168, 0x16a, 0x16c, 0x16e, 0x170, 0x172, 0x174, 0x176, 0x178, 
       0x17a, 0x17c, 0x17e, 0x180, 0x182, 0x184, 0x186, 0x188, 0x18a, 0x18c, 
       0x18e, 0x190, 0x192, 0x194, 0x196, 0x198, 0x19a, 0x19c, 0x19e, 0x1a0, 
       0x1a2, 0x1a4, 0x2, 0x10, 0x4, 0x2, 0x6a, 0x6a, 0x6e, 0x6e, 0x5, 0x2, 
       0xb, 0xc, 0x64, 0x66, 0x6a, 0x6c, 0x3, 0x2, 0x79, 0x7a, 0x5, 0x2, 
       0x6e, 0x6e, 0x71, 0x78, 0x7b, 0x7c, 0x7, 0x2, 0x2d, 0x2d, 0x38, 0x38, 
       0x42, 0x42, 0x48, 0x48, 0x4f, 0x4f, 0x5, 0x2, 0x2b, 0x2b, 0x35, 0x35, 
       0x59, 0x59, 0x4, 0x2, 0x1f, 0x1f, 0x5b, 0x5b, 0x4, 0x2, 0xd, 0xd, 
       0x6a, 0x6a, 0x5, 0x2, 0x1e, 0x1e, 0x4b, 0x4b, 0x56, 0x56, 0x4, 0x2, 
       0x2f, 0x2f, 0x3e, 0x3e, 0x3, 0x2, 0x3f, 0x41, 0x3, 0x2, 0x11, 0x12, 
       0x4, 0x2, 0x2e, 0x2e, 0x51, 0x51, 0x3, 0x2, 0x99, 0x9c, 0x2, 0xafd, 
       0x2, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x6, 
       0x1ad, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1af, 0x3, 0x2, 0x2, 0x2, 0xa, 0x1bb, 
       0x3, 0x2, 0x2, 0x2, 0xc, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1c2, 0x3, 
       0x2, 0x2, 0x2, 0x10, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1c9, 0x3, 
       0x2, 0x2, 0x2, 0x14, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1e0, 0x3, 
       0x2, 0x2, 0x2, 0x18, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1ee, 0x3, 
       0x2, 0x2, 0x2, 0x1c, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1fb, 0x3, 
       0x2, 0x2, 0x2, 0x20, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x22, 0x21d, 0x3, 
       0x2, 0x2, 0x2, 0x24, 0x223, 0x3, 0x2, 0x2, 0x2, 0x26, 0x22f, 0x3, 
       0x2, 0x2, 0x2, 0x28, 0x231, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x233, 0x3, 
       0x2, 0x2, 0x2, 0x2c, 0x245, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x24b, 0x3, 
       0x2, 0x2, 0x2, 0x30, 0x252, 0x3, 0x2, 0x2, 0x2, 0x32, 0x254, 0x3, 
       0x2, 0x2, 0x2, 0x34, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x36, 0x2d0, 0x3, 
       0x2, 0x2, 0x2, 0x38, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x2d4, 0x3, 
       0x2, 0x2, 0x2, 0x3c, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x30a, 0x3, 
       0x2, 0x2, 0x2, 0x40, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x42, 0x326, 0x3, 
       0x2, 0x2, 0x2, 0x44, 0x328, 0x3, 0x2, 0x2, 0x2, 0x46, 0x32c, 0x3, 
       0x2, 0x2, 0x2, 0x48, 0x335, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x337, 0x3, 
       0x2, 0x2, 0x2, 0x4c, 0x350, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x35e, 0x3, 
       0x2, 0x2, 0x2, 0x50, 0x360, 0x3, 0x2, 0x2, 0x2, 0x52, 0x36b, 0x3, 
       0x2, 0x2, 0x2, 0x54, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x56, 0x37b, 0x3, 
       0x2, 0x2, 0x2, 0x58, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x39a, 0x3, 
       0x2, 0x2, 0x2, 0x5c, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x3a8, 0x3, 
       0x2, 0x2, 0x2, 0x60, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x62, 0x3ca, 0x3, 
       0x2, 0x2, 0x2, 0x64, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x66, 0x3e0, 0x3, 
       0x2, 0x2, 0x2, 0x68, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x3f9, 0x3, 
       0x2, 0x2, 0x2, 0x6c, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x416, 0x3, 
       0x2, 0x2, 0x2, 0x70, 0x418, 0x3, 0x2, 0x2, 0x2, 0x72, 0x41a, 0x3, 
       0x2, 0x2, 0x2, 0x74, 0x425, 0x3, 0x2, 0x2, 0x2, 0x76, 0x443, 0x3, 
       0x2, 0x2, 0x2, 0x78, 0x459, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x45c, 0x3, 
       0x2, 0x2, 0x2, 0x7c, 0x460, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x466, 0x3, 
       0x2, 0x2, 0x2, 0x80, 0x484, 0x3, 0x2, 0x2, 0x2, 0x82, 0x496, 0x3, 
       0x2, 0x2, 0x2, 0x84, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x86, 0x4bf, 0x3, 
       0x2, 0x2, 0x2, 0x88, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x4c9, 0x3, 
       0x2, 0x2, 0x2, 0x8c, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x4dd, 0x3, 
       0x2, 0x2, 0x2, 0x90, 0x4df, 0x3, 0x2, 0x2, 0x2, 0x92, 0x4f3, 0x3, 
       0x2, 0x2, 0x2, 0x94, 0x4fd, 0x3, 0x2, 0x2, 0x2, 0x96, 0x4ff, 0x3, 
       0x2, 0x2, 0x2, 0x98, 0x516, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x518, 0x3, 
       0x2, 0x2, 0x2, 0x9c, 0x520, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x522, 0x3, 
       0x2, 0x2, 0x2, 0xa0, 0x52b, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x534, 0x3, 
       0x2, 0x2, 0x2, 0xa4, 0x536, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x538, 0x3, 
       0x2, 0x2, 0x2, 0xa8, 0x53a, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x53f, 0x3, 
       0x2, 0x2, 0x2, 0xac, 0x545, 0x3, 0x2, 0x2, 0x2, 0xae, 0x54e, 0x3, 
       0x2, 0x2, 0x2, 0xb0, 0x557, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x570, 0x3, 
       0x2, 0x2, 0x2, 0xb4, 0x576, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x581, 0x3, 
       0x2, 0x2, 0x2, 0xb8, 0x59b, 0x3, 0x2, 0x2, 0x2, 0xba, 0x59d, 0x3, 
       0x2, 0x2, 0x2, 0xbc, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x5c1, 0x3, 
       0x2, 0x2, 0x2, 0xc0, 0x5c3, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x5d2, 0x3, 
       0x2, 0x2, 0x2, 0xc4, 0x5d4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x5d7, 0x3, 
       0x2, 0x2, 0x2, 0xc8, 0x5e7, 0x3, 0x2, 0x2, 0x2, 0xca, 0x5e9, 0x3, 
       0x2, 0x2, 0x2, 0xcc, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0xce, 0x5ef, 0x3, 
       0x2, 0x2, 0x2, 0xd0, 0x5f3, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x5f5, 0x3, 
       0x2, 0x2, 0x2, 0xd4, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x601, 0x3, 
       0x2, 0x2, 0x2, 0xd8, 0x609, 0x3, 0x2, 0x2, 0x2, 0xda, 0x60b, 0x3, 
       0x2, 0x2, 0x2, 0xdc, 0x60d, 0x3, 0x2, 0x2, 0x2, 0xde, 0x614, 0x3, 
       0x2, 0x2, 0x2, 0xe0, 0x625, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x628, 0x3, 
       0x2, 0x2, 0x2, 0xe4, 0x632, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x642, 0x3, 
       0x2, 0x2, 0x2, 0xe8, 0x644, 0x3, 0x2, 0x2, 0x2, 0xea, 0x655, 0x3, 
       0x2, 0x2, 0x2, 0xec, 0x667, 0x3, 0x2, 0x2, 0x2, 0xee, 0x670, 0x3, 
       0x2, 0x2, 0x2, 0xf0, 0x681, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x687, 0x3, 
       0x2, 0x2, 0x2, 0xf4, 0x689, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x68d, 0x3, 
       0x2, 0x2, 0x2, 0xf8, 0x68f, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x693, 0x3, 
       0x2, 0x2, 0x2, 0xfc, 0x6aa, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x6ac, 0x3, 
       0x2, 0x2, 0x2, 0x100, 0x6b7, 0x3, 0x2, 0x2, 0x2, 0x102, 0x6c0, 0x3, 
       0x2, 0x2, 0x2, 0x104, 0x6c6, 0x3, 0x2, 0x2, 0x2, 0x106, 0x6d1, 0x3, 
       0x2, 0x2, 0x2, 0x108, 0x6e3, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x6f2, 0x3, 
       0x2, 0x2, 0x2, 0x10c, 0x70e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x710, 0x3, 
       0x2, 0x2, 0x2, 0x110, 0x714, 0x3, 0x2, 0x2, 0x2, 0x112, 0x716, 0x3, 
       0x2, 0x2, 0x2, 0x114, 0x719, 0x3, 0x2, 0x2, 0x2, 0x116, 0x71d, 0x3, 
       0x2, 0x2, 0x2, 0x118, 0x729, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x730, 0x3, 
       0x2, 0x2, 0x2, 0x11c, 0x740, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x756, 0x3, 
       0x2, 0x2, 0x2, 0x120, 0x758, 0x3, 0x2, 0x2, 0x2, 0x122, 0x775, 0x3, 
       0x2, 0x2, 0x2, 0x124, 0x777, 0x3, 0x2, 0x2, 0x2, 0x126, 0x7a1, 0x3, 
       0x2, 0x2, 0x2, 0x128, 0x7a4, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x7ba, 0x3, 
       0x2, 0x2, 0x2, 0x12c, 0x7c1, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x7c6, 0x3, 
       0x2, 0x2, 0x2, 0x130, 0x7ca, 0x3, 0x2, 0x2, 0x2, 0x132, 0x7cc, 0x3, 
       0x2, 0x2, 0x2, 0x134, 0x7e5, 0x3, 0x2, 0x2, 0x2, 0x136, 0x7e9, 0x3, 
       0x2, 0x2, 0x2, 0x138, 0x7eb, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x804, 0x3, 
       0x2, 0x2, 0x2, 0x13c, 0x807, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x80b, 0x3, 
       0x2, 0x2, 0x2, 0x140, 0x80d, 0x3, 0x2, 0x2, 0x2, 0x142, 0x818, 0x3, 
       0x2, 0x2, 0x2, 0x144, 0x82a, 0x3, 0x2, 0x2, 0x2, 0x146, 0x82c, 0x3, 
       0x2, 0x2, 0x2, 0x148, 0x84a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x84c, 0x3, 
       0x2, 0x2, 0x2, 0x14c, 0x856, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x858, 0x3, 
       0x2, 0x2, 0x2, 0x150, 0x85c, 0x3, 0x2, 0x2, 0x2, 0x152, 0x85f, 0x3, 
       0x2, 0x2, 0x2, 0x154, 0x884, 0x3, 0x2, 0x2, 0x2, 0x156, 0x88b, 0x3, 
       0x2, 0x2, 0x2, 0x158, 0x88d, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x88f, 0x3, 
       0x2, 0x2, 0x2, 0x15c, 0x891, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x894, 0x3, 
       0x2, 0x2, 0x2, 0x160, 0x898, 0x3, 0x2, 0x2, 0x2, 0x162, 0x89c, 0x3, 
       0x2, 0x2, 0x2, 0x164, 0x8aa, 0x3, 0x2, 0x2, 0x2, 0x166, 0x8b6, 0x3, 
       0x2, 0x2, 0x2, 0x168, 0x8ba, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x8bc, 0x3, 
       0x2, 0x2, 0x2, 0x16c, 0x8c4, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x8c6, 0x3, 
       0x2, 0x2, 0x2, 0x170, 0x8cc, 0x3, 0x2, 0x2, 0x2, 0x172, 0x8d9, 0x3, 
       0x2, 0x2, 0x2, 0x174, 0x90b, 0x3, 0x2, 0x2, 0x2, 0x176, 0x90d, 0x3, 
       0x2, 0x2, 0x2, 0x178, 0x923, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x925, 0x3, 
       0x2, 0x2, 0x2, 0x17c, 0x927, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x93a, 0x3, 
       0x2, 0x2, 0x2, 0x180, 0x947, 0x3, 0x2, 0x2, 0x2, 0x182, 0x94a, 0x3, 
       0x2, 0x2, 0x2, 0x184, 0x94f, 0x3, 0x2, 0x2, 0x2, 0x186, 0x954, 0x3, 
       0x2, 0x2, 0x2, 0x188, 0x958, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x95f, 0x3, 
       0x2, 0x2, 0x2, 0x18c, 0x963, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x977, 0x3, 
       0x2, 0x2, 0x2, 0x190, 0x979, 0x3, 0x2, 0x2, 0x2, 0x192, 0x97f, 0x3, 
       0x2, 0x2, 0x2, 0x194, 0x981, 0x3, 0x2, 0x2, 0x2, 0x196, 0x988, 0x3, 
       0x2, 0x2, 0x2, 0x198, 0x99e, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x9a0, 0x3, 
       0x2, 0x2, 0x2, 0x19c, 0x9d5, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x9de, 0x3, 
       0x2, 0x2, 0x2, 0x1a0, 0x9e0, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x9e2, 0x3, 
       0x2, 0x2, 0x2, 0x1a4, 0x9e4, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a8, 0x5, 
       0x90, 0x49, 0x2, 0x1a7, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 
       0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 
       0x7, 0x2, 0x2, 0x3, 0x1aa, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 
       0x7, 0x3, 0x2, 0x2, 0x1ac, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 
       0x7, 0x4, 0x2, 0x2, 0x1ae, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 
       0x7, 0x5, 0x2, 0x2, 0x1b0, 0x1b1, 0x5, 0x7e, 0x40, 0x2, 0x1b1, 0x1b2, 
       0x7, 0x6, 0x2, 0x2, 0x1b2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 
       0x5, 0x4, 0x3, 0x2, 0x1b4, 0x1b5, 0x5, 0x16, 0xc, 0x2, 0x1b5, 0x1b6, 
       0x5, 0x6, 0x4, 0x2, 0x1b6, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b8, 
       0x5, 0x4, 0x3, 0x2, 0x1b8, 0x1b9, 0x5, 0xc, 0x7, 0x2, 0x1b9, 0x1ba, 
       0x5, 0x6, 0x4, 0x2, 0x1ba, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b3, 
       0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0xb, 
       0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x7, 0x7, 0x2, 0x2, 0x1be, 0x1bf, 
       0x7, 0x5e, 0x2, 0x2, 0x1bf, 0x1c0, 0x5, 0xe, 0x8, 0x2, 0x1c0, 0x1c1, 
       0x7, 0x5f, 0x2, 0x2, 0x1c1, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 
       0x5, 0x130, 0x99, 0x2, 0x1c3, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 
       0x7, 0x8, 0x2, 0x2, 0x1c5, 0x1c6, 0x5, 0x12, 0xa, 0x2, 0x1c6, 0x1c7, 
       0x7, 0x5f, 0x2, 0x2, 0x1c7, 0x1c8, 0x5, 0x14, 0xb, 0x2, 0x1c8, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x5, 0x4, 0x3, 0x2, 0x1ca, 0x1cb, 
       0x7, 0x8f, 0x2, 0x2, 0x1cb, 0x1cc, 0x7, 0x9, 0x2, 0x2, 0x1cc, 0x1cd, 
       0x5, 0x4, 0x3, 0x2, 0x1cd, 0x1ce, 0x5, 0x16, 0xc, 0x2, 0x1ce, 0x13, 
       0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d2, 0x5, 0xa, 0x6, 0x2, 0x1d0, 0x1d2, 
       0x5, 0x8, 0x5, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d0, 
       0x3, 0x2, 0x2, 0x2, 0x1d2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 
       0x7, 0x8f, 0x2, 0x2, 0x1d4, 0x1d5, 0x7, 0x8c, 0x2, 0x2, 0x1d5, 0x1e1, 
       0x5, 0x16, 0xc, 0x2, 0x1d6, 0x1d7, 0x7, 0x8f, 0x2, 0x2, 0x1d7, 0x1d8, 
       0x7, 0x5e, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 0x8f, 0x2, 0x2, 0x1d9, 0x1da, 
       0x7, 0xa, 0x2, 0x2, 0x1da, 0x1e1, 0x5, 0x16, 0xc, 0x2, 0x1db, 0x1dc, 
       0x7, 0x8f, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 0x5e, 0x2, 0x2, 0x1dd, 0x1de, 
       0x7, 0x8f, 0x2, 0x2, 0x1de, 0x1e1, 0x7, 0x5f, 0x2, 0x2, 0x1df, 0x1e1, 
       0x7, 0x8f, 0x2, 0x2, 0x1e0, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1d6, 
       0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1df, 
       0x3, 0x2, 0x2, 0x2, 0x1e1, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1eb, 
       0x5, 0x19e, 0xd0, 0x2, 0x1e3, 0x1eb, 0x7, 0x4e, 0x2, 0x2, 0x1e4, 
       0x1e5, 0x7, 0x5e, 0x2, 0x2, 0x1e5, 0x1e6, 0x5, 0x72, 0x3a, 0x2, 0x1e6, 
       0x1e7, 0x7, 0x5f, 0x2, 0x2, 0x1e7, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1e8, 
       0x1eb, 0x5, 0x1a, 0xe, 0x2, 0x1e9, 0x1eb, 0x5, 0x22, 0x12, 0x2, 0x1ea, 
       0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
       0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
       0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1ec, 
       0x1ef, 0x5, 0x1c, 0xf, 0x2, 0x1ed, 0x1ef, 0x5, 0x1e, 0x10, 0x2, 0x1ee, 
       0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1fa, 0x7, 0x8f, 0x2, 0x2, 0x1f1, 
       0x1fa, 0x5, 0x16a, 0xb6, 0x2, 0x1f2, 0x1fa, 0x5, 0x15c, 0xaf, 0x2, 
       0x1f3, 0x1fa, 0x5, 0x16c, 0xb7, 0x2, 0x1f4, 0x1f5, 0x7, 0x6c, 0x2, 
       0x2, 0x1f5, 0x1fa, 0x5, 0x136, 0x9c, 0x2, 0x1f6, 0x1f7, 0x7, 0x6c, 
       0x2, 0x2, 0x1f7, 0x1fa, 0x5, 0xb6, 0x5c, 0x2, 0x1f8, 0x1fa, 0x5, 
       0x178, 0xbd, 0x2, 0x1f9, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f1, 
       0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f3, 
       0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f6, 
       0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fd, 0x5, 0x20, 0x11, 0x2, 0x1fc, 0x1fe, 
       0x7, 0x4d, 0x2, 0x2, 0x1fd, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 
       0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 
       0x5, 0x1c, 0xf, 0x2, 0x200, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 
       0x8, 0x11, 0x1, 0x2, 0x202, 0x20d, 0x7, 0x8a, 0x2, 0x2, 0x203, 0x204, 
       0x5, 0xb4, 0x5b, 0x2, 0x204, 0x205, 0x7, 0x8a, 0x2, 0x2, 0x205, 0x20d, 
       0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 0x5, 0xcc, 0x67, 0x2, 0x207, 0x208, 
       0x7, 0x8a, 0x2, 0x2, 0x208, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 
       0x5, 0xb6, 0x5c, 0x2, 0x20a, 0x20b, 0x7, 0x8a, 0x2, 0x2, 0x20b, 0x20d, 
       0x3, 0x2, 0x2, 0x2, 0x20c, 0x201, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x203, 
       0x3, 0x2, 0x2, 0x2, 0x20c, 0x206, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x209, 
       0x3, 0x2, 0x2, 0x2, 0x20d, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 
       0xc, 0x4, 0x2, 0x2, 0x20f, 0x210, 0x7, 0x8f, 0x2, 0x2, 0x210, 0x219, 
       0x7, 0x8a, 0x2, 0x2, 0x211, 0x213, 0xc, 0x3, 0x2, 0x2, 0x212, 0x214, 
       0x7, 0x4d, 0x2, 0x2, 0x213, 0x212, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 
       0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 
       0x5, 0x176, 0xbc, 0x2, 0x216, 0x217, 0x7, 0x8a, 0x2, 0x2, 0x217, 
       0x219, 0x3, 0x2, 0x2, 0x2, 0x218, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x218, 
       0x211, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21a, 
       0x218, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21b, 
       0x21, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21d, 
       0x21f, 0x5, 0x24, 0x13, 0x2, 0x21e, 0x220, 0x5, 0x32, 0x1a, 0x2, 
       0x21f, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 0x2, 0x2, 
       0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x5, 0x7c, 0x3f, 
       0x2, 0x222, 0x23, 0x3, 0x2, 0x2, 0x2, 0x223, 0x225, 0x7, 0x60, 0x2, 
       0x2, 0x224, 0x226, 0x5, 0x26, 0x14, 0x2, 0x225, 0x224, 0x3, 0x2, 
       0x2, 0x2, 0x225, 0x226, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x3, 0x2, 
       0x2, 0x2, 0x227, 0x228, 0x7, 0x61, 0x2, 0x2, 0x228, 0x25, 0x3, 0x2, 
       0x2, 0x2, 0x229, 0x230, 0x5, 0x28, 0x15, 0x2, 0x22a, 0x230, 0x5, 
       0x2a, 0x16, 0x2, 0x22b, 0x22c, 0x5, 0x28, 0x15, 0x2, 0x22c, 0x22d, 
       0x7, 0x85, 0x2, 0x2, 0x22d, 0x22e, 0x5, 0x2a, 0x16, 0x2, 0x22e, 0x230, 
       0x3, 0x2, 0x2, 0x2, 0x22f, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x22a, 
       0x3, 0x2, 0x2, 0x2, 0x22f, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x230, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x9, 0x2, 0x2, 0x2, 0x232, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x8, 0x16, 0x1, 0x2, 0x234, 0x236, 
       0x5, 0x2c, 0x17, 0x2, 0x235, 0x237, 0x7, 0x8e, 0x2, 0x2, 0x236, 0x235, 
       0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x3, 0x2, 0x2, 0x2, 0x237, 0x240, 
       0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 0xc, 0x3, 0x2, 0x2, 0x239, 0x23a, 
       0x7, 0x85, 0x2, 0x2, 0x23a, 0x23c, 0x5, 0x2c, 0x17, 0x2, 0x23b, 0x23d, 
       0x7, 0x8e, 0x2, 0x2, 0x23c, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 
       0x3, 0x2, 0x2, 0x2, 0x23d, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x238, 
       0x3, 0x2, 0x2, 0x2, 0x23f, 0x242, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23e, 
       0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 0x2, 0x241, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 0x243, 0x246, 
       0x5, 0x2e, 0x18, 0x2, 0x244, 0x246, 0x5, 0x30, 0x19, 0x2, 0x245, 
       0x243, 0x3, 0x2, 0x2, 0x2, 0x245, 0x244, 0x3, 0x2, 0x2, 0x2, 0x246, 
       0x2d, 0x3, 0x2, 0x2, 0x2, 0x247, 0x24c, 0x7, 0x8f, 0x2, 0x2, 0x248, 
       0x249, 0x7, 0x6a, 0x2, 0x2, 0x249, 0x24c, 0x7, 0x8f, 0x2, 0x2, 0x24a, 
       0x24c, 0x7, 0x4e, 0x2, 0x2, 0x24b, 0x247, 0x3, 0x2, 0x2, 0x2, 0x24b, 
       0x248, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24c, 
       0x2f, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x7, 0x8f, 0x2, 0x2, 0x24e, 
       0x253, 0x5, 0x12c, 0x97, 0x2, 0x24f, 0x250, 0x7, 0x6a, 0x2, 0x2, 
       0x250, 0x251, 0x7, 0x8f, 0x2, 0x2, 0x251, 0x253, 0x5, 0x12c, 0x97, 
       0x2, 0x252, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x252, 0x24f, 0x3, 0x2, 0x2, 
       0x2, 0x253, 0x31, 0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 0x7, 0x5e, 0x2, 
       0x2, 0x255, 0x256, 0x5, 0x122, 0x92, 0x2, 0x256, 0x258, 0x7, 0x5f, 
       0x2, 0x2, 0x257, 0x259, 0x7, 0x38, 0x2, 0x2, 0x258, 0x257, 0x3, 0x2, 
       0x2, 0x2, 0x258, 0x259, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25b, 0x3, 0x2, 
       0x2, 0x2, 0x25a, 0x25c, 0x5, 0x192, 0xca, 0x2, 0x25b, 0x25a, 0x3, 
       0x2, 0x2, 0x2, 0x25b, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25e, 0x3, 
       0x2, 0x2, 0x2, 0x25d, 0x25f, 0x5, 0xe8, 0x75, 0x2, 0x25e, 0x25d, 
       0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x261, 
       0x3, 0x2, 0x2, 0x2, 0x260, 0x262, 0x5, 0x10a, 0x86, 0x2, 0x261, 0x260, 
       0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x3, 0x2, 0x2, 0x2, 0x262, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x263, 0x264, 0x8, 0x1b, 0x1, 0x2, 0x264, 0x2a4, 
       0x5, 0x18, 0xd, 0x2, 0x265, 0x266, 0x5, 0xb2, 0x5a, 0x2, 0x266, 0x268, 
       0x7, 0x5e, 0x2, 0x2, 0x267, 0x269, 0x5, 0x3a, 0x1e, 0x2, 0x268, 0x267, 
       0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 
       0x3, 0x2, 0x2, 0x2, 0x26a, 0x26b, 0x7, 0x5f, 0x2, 0x2, 0x26b, 0x2a4, 
       0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x5, 0x180, 0xc1, 0x2, 0x26d, 0x26f, 
       0x7, 0x5e, 0x2, 0x2, 0x26e, 0x270, 0x5, 0x3a, 0x1e, 0x2, 0x26f, 0x26e, 
       0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 
       0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x7, 0x5f, 0x2, 0x2, 0x272, 0x2a4, 
       0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x5, 0xb2, 0x5a, 0x2, 0x274, 0x275, 
       0x5, 0x134, 0x9b, 0x2, 0x275, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 
       0x5, 0x180, 0xc1, 0x2, 0x277, 0x278, 0x5, 0x134, 0x9b, 0x2, 0x278, 
       0x2a4, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x7, 0x28, 0x2, 0x2, 0x27a, 
       0x27b, 0x7, 0x6f, 0x2, 0x2, 0x27b, 0x27c, 0x5, 0x116, 0x8c, 0x2, 
       0x27c, 0x27d, 0x7, 0x70, 0x2, 0x2, 0x27d, 0x27e, 0x7, 0x5e, 0x2, 
       0x2, 0x27e, 0x27f, 0x5, 0x72, 0x3a, 0x2, 0x27f, 0x280, 0x7, 0x5f, 
       0x2, 0x2, 0x280, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x281, 0x282, 0x7, 0x4a, 
       0x2, 0x2, 0x282, 0x283, 0x7, 0x6f, 0x2, 0x2, 0x283, 0x284, 0x5, 0x116, 
       0x8c, 0x2, 0x284, 0x285, 0x7, 0x70, 0x2, 0x2, 0x285, 0x286, 0x7, 
       0x5e, 0x2, 0x2, 0x286, 0x287, 0x5, 0x72, 0x3a, 0x2, 0x287, 0x288, 
       0x7, 0x5f, 0x2, 0x2, 0x288, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 
       0x7, 0x43, 0x2, 0x2, 0x28a, 0x28b, 0x7, 0x6f, 0x2, 0x2, 0x28b, 0x28c, 
       0x5, 0x116, 0x8c, 0x2, 0x28c, 0x28d, 0x7, 0x70, 0x2, 0x2, 0x28d, 
       0x28e, 0x7, 0x5e, 0x2, 0x2, 0x28e, 0x28f, 0x5, 0x72, 0x3a, 0x2, 0x28f, 
       0x290, 0x7, 0x5f, 0x2, 0x2, 0x290, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x291, 
       0x292, 0x7, 0x21, 0x2, 0x2, 0x292, 0x293, 0x7, 0x6f, 0x2, 0x2, 0x293, 
       0x294, 0x5, 0x116, 0x8c, 0x2, 0x294, 0x295, 0x7, 0x70, 0x2, 0x2, 
       0x295, 0x296, 0x7, 0x5e, 0x2, 0x2, 0x296, 0x297, 0x5, 0x72, 0x3a, 
       0x2, 0x297, 0x298, 0x7, 0x5f, 0x2, 0x2, 0x298, 0x2a4, 0x3, 0x2, 0x2, 
       0x2, 0x299, 0x29a, 0x5, 0x38, 0x1d, 0x2, 0x29a, 0x29b, 0x7, 0x5e, 
       0x2, 0x2, 0x29b, 0x29c, 0x5, 0x72, 0x3a, 0x2, 0x29c, 0x29d, 0x7, 
       0x5f, 0x2, 0x2, 0x29d, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x5, 
       0x38, 0x1d, 0x2, 0x29f, 0x2a0, 0x7, 0x5e, 0x2, 0x2, 0x2a0, 0x2a1, 
       0x5, 0x116, 0x8c, 0x2, 0x2a1, 0x2a2, 0x7, 0x5f, 0x2, 0x2, 0x2a2, 
       0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x263, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
       0x265, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
       0x273, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x276, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
       0x279, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x281, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
       0x289, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x291, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
       0x299, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x2a4, 
       0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0xc, 0x15, 0x2, 0x2, 0x2a6, 
       0x2a7, 0x7, 0x60, 0x2, 0x2, 0x2a7, 0x2a8, 0x5, 0x72, 0x3a, 0x2, 0x2a8, 
       0x2a9, 0x7, 0x61, 0x2, 0x2, 0x2a9, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2aa, 
       0x2ab, 0xc, 0x14, 0x2, 0x2, 0x2ab, 0x2ac, 0x7, 0x60, 0x2, 0x2, 0x2ac, 
       0x2ad, 0x5, 0x134, 0x9b, 0x2, 0x2ad, 0x2ae, 0x7, 0x61, 0x2, 0x2, 
       0x2ae, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 0xc, 0x13, 0x2, 0x2, 
       0x2b0, 0x2b2, 0x7, 0x5e, 0x2, 0x2, 0x2b1, 0x2b3, 0x5, 0x3a, 0x1e, 
       0x2, 0x2b2, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x3, 0x2, 0x2, 
       0x2, 0x2b3, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2cc, 0x7, 0x5f, 0x2, 
       0x2, 0x2b5, 0x2b6, 0xc, 0xe, 0x2, 0x2, 0x2b6, 0x2b8, 0x7, 0x8c, 0x2, 
       0x2, 0x2b7, 0x2b9, 0x7, 0x4d, 0x2, 0x2, 0x2b8, 0x2b7, 0x3, 0x2, 0x2, 
       0x2, 0x2b8, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x3, 0x2, 0x2, 
       0x2, 0x2ba, 0x2cc, 0x5, 0x1a, 0xe, 0x2, 0x2bb, 0x2bc, 0xc, 0xd, 0x2, 
       0x2, 0x2bc, 0x2be, 0x7, 0x87, 0x2, 0x2, 0x2bd, 0x2bf, 0x7, 0x4d, 
       0x2, 0x2, 0x2be, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 0x3, 0x2, 
       0x2, 0x2, 0x2bf, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2cc, 0x5, 0x1a, 
       0xe, 0x2, 0x2c1, 0x2c2, 0xc, 0xc, 0x2, 0x2, 0x2c2, 0x2c3, 0x7, 0x8c, 
       0x2, 0x2, 0x2c3, 0x2cc, 0x5, 0x3c, 0x1f, 0x2, 0x2c4, 0x2c5, 0xc, 
       0xb, 0x2, 0x2, 0x2c5, 0x2c6, 0x7, 0x87, 0x2, 0x2, 0x2c6, 0x2cc, 0x5, 
       0x3c, 0x1f, 0x2, 0x2c7, 0x2c8, 0xc, 0xa, 0x2, 0x2, 0x2c8, 0x2cc, 
       0x7, 0x83, 0x2, 0x2, 0x2c9, 0x2ca, 0xc, 0x9, 0x2, 0x2, 0x2ca, 0x2cc, 
       0x7, 0x84, 0x2, 0x2, 0x2cb, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2aa, 
       0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2b5, 
       0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2c1, 
       0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2c7, 
       0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cf, 
       0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2ce, 
       0x3, 0x2, 0x2, 0x2, 0x2ce, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2cd, 
       0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x7, 0x54, 0x2, 0x2, 0x2d1, 0x37, 
       0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d3, 0x7, 0x54, 0x2, 0x2, 0x2d3, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 0x5, 0x132, 0x9a, 0x2, 0x2d5, 0x3b, 
       0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d8, 0x5, 0x20, 0x11, 0x2, 0x2d7, 0x2d6, 
       0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d9, 
       0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2da, 0x5, 0xb4, 0x5b, 0x2, 0x2da, 0x2db, 
       0x7, 0x8a, 0x2, 0x2, 0x2db, 0x2dc, 0x7, 0x6c, 0x2, 0x2, 0x2dc, 0x2dd, 
       0x5, 0xb4, 0x5b, 0x2, 0x2dd, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 
       0x5, 0x20, 0x11, 0x2, 0x2df, 0x2e0, 0x7, 0x4d, 0x2, 0x2, 0x2e0, 0x2e1, 
       0x5, 0x176, 0xbc, 0x2, 0x2e1, 0x2e2, 0x7, 0x8a, 0x2, 0x2, 0x2e2, 
       0x2e3, 0x7, 0x6c, 0x2, 0x2, 0x2e3, 0x2e4, 0x5, 0xb4, 0x5b, 0x2, 0x2e4, 
       0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e7, 0x5, 0x20, 0x11, 0x2, 0x2e6, 
       0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e7, 
       0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 0x7, 0x6c, 0x2, 0x2, 0x2e9, 
       0x2ed, 0x5, 0xb4, 0x5b, 0x2, 0x2ea, 0x2eb, 0x7, 0x6c, 0x2, 0x2, 0x2eb, 
       0x2ed, 0x5, 0xb6, 0x5c, 0x2, 0x2ec, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2ec, 
       0x2de, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2ec, 
       0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2ee, 
       0x30b, 0x5, 0x34, 0x1b, 0x2, 0x2ef, 0x2f0, 0x7, 0x83, 0x2, 0x2, 0x2f0, 
       0x30b, 0x5, 0x52, 0x2a, 0x2, 0x2f1, 0x2f2, 0x7, 0x84, 0x2, 0x2, 0x2f2, 
       0x30b, 0x5, 0x52, 0x2a, 0x2, 0x2f3, 0x2f4, 0x5, 0x40, 0x21, 0x2, 
       0x2f4, 0x2f5, 0x5, 0x52, 0x2a, 0x2, 0x2f5, 0x30b, 0x3, 0x2, 0x2, 
       0x2, 0x2f6, 0x2f7, 0x7, 0x47, 0x2, 0x2, 0x2f7, 0x30b, 0x5, 0x3e, 
       0x20, 0x2, 0x2f8, 0x2f9, 0x7, 0x47, 0x2, 0x2, 0x2f9, 0x2fa, 0x7, 
       0x5e, 0x2, 0x2, 0x2fa, 0x2fb, 0x5, 0x116, 0x8c, 0x2, 0x2fb, 0x2fc, 
       0x7, 0x5f, 0x2, 0x2, 0x2fc, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 
       0x7, 0x47, 0x2, 0x2, 0x2fe, 0x2ff, 0x7, 0x8e, 0x2, 0x2, 0x2ff, 0x300, 
       0x7, 0x5e, 0x2, 0x2, 0x300, 0x301, 0x7, 0x8f, 0x2, 0x2, 0x301, 0x30b, 
       0x7, 0x5f, 0x2, 0x2, 0x302, 0x303, 0x7, 0x14, 0x2, 0x2, 0x303, 0x304, 
       0x7, 0x5e, 0x2, 0x2, 0x304, 0x305, 0x5, 0x116, 0x8c, 0x2, 0x305, 
       0x306, 0x7, 0x5f, 0x2, 0x2, 0x306, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x307, 
       0x30b, 0x5, 0x50, 0x29, 0x2, 0x308, 0x30b, 0x5, 0x42, 0x22, 0x2, 
       0x309, 0x30b, 0x5, 0x4e, 0x28, 0x2, 0x30a, 0x2ee, 0x3, 0x2, 0x2, 
       0x2, 0x30a, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x2f1, 0x3, 0x2, 0x2, 
       0x2, 0x30a, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x2f6, 0x3, 0x2, 0x2, 
       0x2, 0x30a, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x2fd, 0x3, 0x2, 0x2, 
       0x2, 0x30a, 0x302, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x307, 0x3, 0x2, 0x2, 
       0x2, 0x30a, 0x308, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x309, 0x3, 0x2, 0x2, 
       0x2, 0x30b, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30d, 0x9, 0x3, 0x2, 
       0x2, 0x30d, 0x41, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x310, 0x7, 0x8a, 0x2, 
       0x2, 0x30f, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 0x3, 0x2, 0x2, 
       0x2, 0x310, 0x311, 0x3, 0x2, 0x2, 0x2, 0x311, 0x313, 0x7, 0x3a, 0x2, 
       0x2, 0x312, 0x314, 0x5, 0x44, 0x23, 0x2, 0x313, 0x312, 0x3, 0x2, 
       0x2, 0x2, 0x313, 0x314, 0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x3, 0x2, 
       0x2, 0x2, 0x315, 0x317, 0x5, 0x46, 0x24, 0x2, 0x316, 0x318, 0x5, 
       0x4c, 0x27, 0x2, 0x317, 0x316, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 
       0x3, 0x2, 0x2, 0x2, 0x318, 0x327, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31b, 
       0x7, 0x8a, 0x2, 0x2, 0x31a, 0x319, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31b, 
       0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31e, 
       0x7, 0x3a, 0x2, 0x2, 0x31d, 0x31f, 0x5, 0x44, 0x23, 0x2, 0x31e, 0x31d, 
       0x3, 0x2, 0x2, 0x2, 0x31e, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x320, 
       0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 0x7, 0x5e, 0x2, 0x2, 0x321, 0x322, 
       0x5, 0x116, 0x8c, 0x2, 0x322, 0x324, 0x7, 0x5f, 0x2, 0x2, 0x323, 
       0x325, 0x5, 0x4c, 0x27, 0x2, 0x324, 0x323, 0x3, 0x2, 0x2, 0x2, 0x324, 
       0x325, 0x3, 0x2, 0x2, 0x2, 0x325, 0x327, 0x3, 0x2, 0x2, 0x2, 0x326, 
       0x30f, 0x3, 0x2, 0x2, 0x2, 0x326, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x327, 
       0x43, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 0x7, 0x5e, 0x2, 0x2, 0x329, 
       0x32a, 0x5, 0x3a, 0x1e, 0x2, 0x32a, 0x32b, 0x7, 0x5f, 0x2, 0x2, 0x32b, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32e, 0x5, 0xae, 0x58, 0x2, 0x32d, 
       0x32f, 0x5, 0x48, 0x25, 0x2, 0x32e, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32e, 
       0x32f, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x47, 0x3, 0x2, 0x2, 0x2, 0x330, 
       0x332, 0x5, 0x10c, 0x87, 0x2, 0x331, 0x333, 0x5, 0x48, 0x25, 0x2, 
       0x332, 0x331, 0x3, 0x2, 0x2, 0x2, 0x332, 0x333, 0x3, 0x2, 0x2, 0x2, 
       0x333, 0x336, 0x3, 0x2, 0x2, 0x2, 0x334, 0x336, 0x5, 0x4a, 0x26, 
       0x2, 0x335, 0x330, 0x3, 0x2, 0x2, 0x2, 0x335, 0x334, 0x3, 0x2, 0x2, 
       0x2, 0x336, 0x49, 0x3, 0x2, 0x2, 0x2, 0x337, 0x338, 0x8, 0x26, 0x1, 
       0x2, 0x338, 0x339, 0x7, 0x60, 0x2, 0x2, 0x339, 0x33a, 0x5, 0x72, 
       0x3a, 0x2, 0x33a, 0x33c, 0x7, 0x61, 0x2, 0x2, 0x33b, 0x33d, 0x5, 
       0xe8, 0x75, 0x2, 0x33c, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33d, 
       0x3, 0x2, 0x2, 0x2, 0x33d, 0x347, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33f, 
       0xc, 0x3, 0x2, 0x2, 0x33f, 0x340, 0x7, 0x60, 0x2, 0x2, 0x340, 0x341, 
       0x5, 0x74, 0x3b, 0x2, 0x341, 0x343, 0x7, 0x61, 0x2, 0x2, 0x342, 0x344, 
       0x5, 0xe8, 0x75, 0x2, 0x343, 0x342, 0x3, 0x2, 0x2, 0x2, 0x343, 0x344, 
       0x3, 0x2, 0x2, 0x2, 0x344, 0x346, 0x3, 0x2, 0x2, 0x2, 0x345, 0x33e, 
       0x3, 0x2, 0x2, 0x2, 0x346, 0x349, 0x3, 0x2, 0x2, 0x2, 0x347, 0x345, 
       0x3, 0x2, 0x2, 0x2, 0x347, 0x348, 0x3, 0x2, 0x2, 0x2, 0x348, 0x4b, 
       0x3, 0x2, 0x2, 0x2, 0x349, 0x347, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34c, 
       0x7, 0x5e, 0x2, 0x2, 0x34b, 0x34d, 0x5, 0x3a, 0x1e, 0x2, 0x34c, 0x34b, 
       0x3, 0x2, 0x2, 0x2, 0x34c, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34e, 
       0x3, 0x2, 0x2, 0x2, 0x34e, 0x351, 0x7, 0x5f, 0x2, 0x2, 0x34f, 0x351, 
       0x5, 0x134, 0x9b, 0x2, 0x350, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x350, 0x34f, 
       0x3, 0x2, 0x2, 0x2, 0x351, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x352, 0x354, 
       0x7, 0x8a, 0x2, 0x2, 0x353, 0x352, 0x3, 0x2, 0x2, 0x2, 0x353, 0x354, 
       0x3, 0x2, 0x2, 0x2, 0x354, 0x355, 0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 
       0x7, 0x25, 0x2, 0x2, 0x356, 0x35f, 0x5, 0x52, 0x2a, 0x2, 0x357, 0x359, 
       0x7, 0x8a, 0x2, 0x2, 0x358, 0x357, 0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 
       0x3, 0x2, 0x2, 0x2, 0x359, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 
       0x7, 0x25, 0x2, 0x2, 0x35b, 0x35c, 0x7, 0x60, 0x2, 0x2, 0x35c, 0x35d, 
       0x7, 0x61, 0x2, 0x2, 0x35d, 0x35f, 0x5, 0x52, 0x2a, 0x2, 0x35e, 0x353, 
       0x3, 0x2, 0x2, 0x2, 0x35e, 0x358, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x7, 0x3b, 0x2, 0x2, 0x361, 0x362, 
       0x7, 0x5e, 0x2, 0x2, 0x362, 0x363, 0x5, 0x72, 0x3a, 0x2, 0x363, 0x364, 
       0x7, 0x5f, 0x2, 0x2, 0x364, 0x51, 0x3, 0x2, 0x2, 0x2, 0x365, 0x36c, 
       0x5, 0x3e, 0x20, 0x2, 0x366, 0x367, 0x7, 0x5e, 0x2, 0x2, 0x367, 0x368, 
       0x5, 0x116, 0x8c, 0x2, 0x368, 0x369, 0x7, 0x5f, 0x2, 0x2, 0x369, 
       0x36a, 0x5, 0x52, 0x2a, 0x2, 0x36a, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x36b, 
       0x365, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x366, 0x3, 0x2, 0x2, 0x2, 0x36c, 
       0x53, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 0x8, 0x2b, 0x1, 0x2, 0x36e, 
       0x36f, 0x5, 0x52, 0x2a, 0x2, 0x36f, 0x378, 0x3, 0x2, 0x2, 0x2, 0x370, 
       0x371, 0xc, 0x4, 0x2, 0x2, 0x371, 0x372, 0x7, 0x8d, 0x2, 0x2, 0x372, 
       0x377, 0x5, 0x52, 0x2a, 0x2, 0x373, 0x374, 0xc, 0x3, 0x2, 0x2, 0x374, 
       0x375, 0x7, 0x86, 0x2, 0x2, 0x375, 0x377, 0x5, 0x52, 0x2a, 0x2, 0x376, 
       0x370, 0x3, 0x2, 0x2, 0x2, 0x376, 0x373, 0x3, 0x2, 0x2, 0x2, 0x377, 
       0x37a, 0x3, 0x2, 0x2, 0x2, 0x378, 0x376, 0x3, 0x2, 0x2, 0x2, 0x378, 
       0x379, 0x3, 0x2, 0x2, 0x2, 0x379, 0x55, 0x3, 0x2, 0x2, 0x2, 0x37a, 
       0x378, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 0x8, 0x2c, 0x1, 0x2, 0x37c, 
       0x37d, 0x5, 0x54, 0x2b, 0x2, 0x37d, 0x389, 0x3, 0x2, 0x2, 0x2, 0x37e, 
       0x37f, 0xc, 0x5, 0x2, 0x2, 0x37f, 0x380, 0x7, 0x66, 0x2, 0x2, 0x380, 
       0x388, 0x5, 0x54, 0x2b, 0x2, 0x381, 0x382, 0xc, 0x4, 0x2, 0x2, 0x382, 
       0x383, 0x7, 0x67, 0x2, 0x2, 0x383, 0x388, 0x5, 0x54, 0x2b, 0x2, 0x384, 
       0x385, 0xc, 0x3, 0x2, 0x2, 0x385, 0x386, 0x7, 0x68, 0x2, 0x2, 0x386, 
       0x388, 0x5, 0x54, 0x2b, 0x2, 0x387, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x387, 
       0x381, 0x3, 0x2, 0x2, 0x2, 0x387, 0x384, 0x3, 0x2, 0x2, 0x2, 0x388, 
       0x38b, 0x3, 0x2, 0x2, 0x2, 0x389, 0x387, 0x3, 0x2, 0x2, 0x2, 0x389, 
       0x38a, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x57, 0x3, 0x2, 0x2, 0x2, 0x38b, 
       0x389, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 0x8, 0x2d, 0x1, 0x2, 0x38d, 
       0x38e, 0x5, 0x56, 0x2c, 0x2, 0x38e, 0x397, 0x3, 0x2, 0x2, 0x2, 0x38f, 
       0x390, 0xc, 0x4, 0x2, 0x2, 0x390, 0x391, 0x7, 0x64, 0x2, 0x2, 0x391, 
       0x396, 0x5, 0x56, 0x2c, 0x2, 0x392, 0x393, 0xc, 0x3, 0x2, 0x2, 0x393, 
       0x394, 0x7, 0x65, 0x2, 0x2, 0x394, 0x396, 0x5, 0x56, 0x2c, 0x2, 0x395, 
       0x38f, 0x3, 0x2, 0x2, 0x2, 0x395, 0x392, 0x3, 0x2, 0x2, 0x2, 0x396, 
       0x399, 0x3, 0x2, 0x2, 0x2, 0x397, 0x395, 0x3, 0x2, 0x2, 0x2, 0x397, 
       0x398, 0x3, 0x2, 0x2, 0x2, 0x398, 0x59, 0x3, 0x2, 0x2, 0x2, 0x399, 
       0x397, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x8, 0x2e, 0x1, 0x2, 0x39b, 
       0x39c, 0x5, 0x58, 0x2d, 0x2, 0x39c, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x39d, 
       0x39e, 0xc, 0x3, 0x2, 0x2, 0x39e, 0x39f, 0x5, 0x5c, 0x2f, 0x2, 0x39f, 
       0x3a0, 0x5, 0x58, 0x2d, 0x2, 0x3a0, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a1, 
       0x39d, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a3, 
       0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3a4, 
       0x5b, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a6, 
       0x3a7, 0x9, 0x4, 0x2, 0x2, 0x3a7, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x3a8, 
       0x3a9, 0x8, 0x30, 0x1, 0x2, 0x3a9, 0x3aa, 0x5, 0x5a, 0x2e, 0x2, 0x3aa, 
       0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ac, 0xc, 0x6, 0x2, 0x2, 0x3ac, 
       0x3ad, 0x7, 0x6f, 0x2, 0x2, 0x3ad, 0x3b8, 0x5, 0x5a, 0x2e, 0x2, 0x3ae, 
       0x3af, 0xc, 0x5, 0x2, 0x2, 0x3af, 0x3b0, 0x7, 0x70, 0x2, 0x2, 0x3b0, 
       0x3b8, 0x5, 0x5a, 0x2e, 0x2, 0x3b1, 0x3b2, 0xc, 0x4, 0x2, 0x2, 0x3b2, 
       0x3b3, 0x7, 0x7f, 0x2, 0x2, 0x3b3, 0x3b8, 0x5, 0x5a, 0x2e, 0x2, 0x3b4, 
       0x3b5, 0xc, 0x3, 0x2, 0x2, 0x3b5, 0x3b6, 0x7, 0x80, 0x2, 0x2, 0x3b6, 
       0x3b8, 0x5, 0x5a, 0x2e, 0x2, 0x3b7, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3b7, 
       0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b7, 
       0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3b9, 
       0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 
       0x5f, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3bc, 
       0x3bd, 0x8, 0x31, 0x1, 0x2, 0x3bd, 0x3be, 0x5, 0x5e, 0x30, 0x2, 0x3be, 
       0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c0, 0xc, 0x4, 0x2, 0x2, 0x3c0, 
       0x3c1, 0x7, 0x7d, 0x2, 0x2, 0x3c1, 0x3c6, 0x5, 0x5e, 0x30, 0x2, 0x3c2, 
       0x3c3, 0xc, 0x3, 0x2, 0x2, 0x3c3, 0x3c4, 0x7, 0x7e, 0x2, 0x2, 0x3c4, 
       0x3c6, 0x5, 0x5e, 0x30, 0x2, 0x3c5, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3c5, 
       0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3c7, 
       0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3c8, 
       0x61, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3ca, 
       0x3cb, 0x8, 0x32, 0x1, 0x2, 0x3cb, 0x3cc, 0x5, 0x60, 0x31, 0x2, 0x3cc, 
       0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3ce, 0xc, 0x3, 0x2, 0x2, 0x3ce, 
       0x3cf, 0x7, 0x6a, 0x2, 0x2, 0x3cf, 0x3d1, 0x5, 0x60, 0x31, 0x2, 0x3d0, 
       0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d2, 
       0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d3, 
       0x63, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d5, 
       0x3d6, 0x8, 0x33, 0x1, 0x2, 0x3d6, 0x3d7, 0x5, 0x62, 0x32, 0x2, 0x3d7, 
       0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3d9, 0xc, 0x3, 0x2, 0x2, 0x3d9, 
       0x3da, 0x7, 0x69, 0x2, 0x2, 0x3da, 0x3dc, 0x5, 0x62, 0x32, 0x2, 0x3db, 
       0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3dd, 
       0x3db, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3de, 
       0x65, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3e0, 
       0x3e1, 0x8, 0x34, 0x1, 0x2, 0x3e1, 0x3e2, 0x5, 0x64, 0x33, 0x2, 0x3e2, 
       0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e4, 0xc, 0x3, 0x2, 0x2, 0x3e4, 
       0x3e5, 0x7, 0x6b, 0x2, 0x2, 0x3e5, 0x3e7, 0x5, 0x64, 0x33, 0x2, 0x3e6, 
       0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3e8, 
       0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3e9, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3eb, 
       0x3ec, 0x8, 0x35, 0x1, 0x2, 0x3ec, 0x3ed, 0x5, 0x66, 0x34, 0x2, 0x3ed, 
       0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 0xc, 0x4, 0x2, 0x2, 0x3ef, 
       0x3f0, 0x7, 0xd, 0x2, 0x2, 0x3f0, 0x3f5, 0x5, 0x66, 0x34, 0x2, 0x3f1, 
       0x3f2, 0xc, 0x3, 0x2, 0x2, 0x3f2, 0x3f3, 0x7, 0xe, 0x2, 0x2, 0x3f3, 
       0x3f5, 0x5, 0x66, 0x34, 0x2, 0x3f4, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f4, 
       0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f6, 
       0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f7, 
       0x69, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f9, 
       0x3fa, 0x8, 0x36, 0x1, 0x2, 0x3fa, 0x3fb, 0x5, 0x68, 0x35, 0x2, 0x3fb, 
       0x404, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 0xc, 0x4, 0x2, 0x2, 0x3fd, 
       0x3fe, 0x7, 0xf, 0x2, 0x2, 0x3fe, 0x403, 0x5, 0x68, 0x35, 0x2, 0x3ff, 
       0x400, 0xc, 0x3, 0x2, 0x2, 0x400, 0x401, 0x7, 0x10, 0x2, 0x2, 0x401, 
       0x403, 0x5, 0x68, 0x35, 0x2, 0x402, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x402, 
       0x3ff, 0x3, 0x2, 0x2, 0x2, 0x403, 0x406, 0x3, 0x2, 0x2, 0x2, 0x404, 
       0x402, 0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 0x3, 0x2, 0x2, 0x2, 0x405, 
       0x6b, 0x3, 0x2, 0x2, 0x2, 0x406, 0x404, 0x3, 0x2, 0x2, 0x2, 0x407, 
       0x40f, 0x5, 0x6a, 0x36, 0x2, 0x408, 0x409, 0x5, 0x6a, 0x36, 0x2, 
       0x409, 0x40a, 0x7, 0x88, 0x2, 0x2, 0x40a, 0x40b, 0x5, 0x72, 0x3a, 
       0x2, 0x40b, 0x40c, 0x7, 0x89, 0x2, 0x2, 0x40c, 0x40d, 0x5, 0x6e, 
       0x38, 0x2, 0x40d, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x407, 0x3, 0x2, 
       0x2, 0x2, 0x40e, 0x408, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x6d, 0x3, 0x2, 
       0x2, 0x2, 0x410, 0x417, 0x5, 0x6c, 0x37, 0x2, 0x411, 0x412, 0x5, 
       0x6a, 0x36, 0x2, 0x412, 0x413, 0x5, 0x70, 0x39, 0x2, 0x413, 0x414, 
       0x5, 0x130, 0x99, 0x2, 0x414, 0x417, 0x3, 0x2, 0x2, 0x2, 0x415, 0x417, 
       0x5, 0x190, 0xc9, 0x2, 0x416, 0x410, 0x3, 0x2, 0x2, 0x2, 0x416, 0x411, 
       0x3, 0x2, 0x2, 0x2, 0x416, 0x415, 0x3, 0x2, 0x2, 0x2, 0x417, 0x6f, 
       0x3, 0x2, 0x2, 0x2, 0x418, 0x419, 0x9, 0x5, 0x2, 0x2, 0x419, 0x71, 
       0x3, 0x2, 0x2, 0x2, 0x41a, 0x41b, 0x8, 0x3a, 0x1, 0x2, 0x41b, 0x41c, 
       0x5, 0x6e, 0x38, 0x2, 0x41c, 0x422, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x41e, 
       0xc, 0x3, 0x2, 0x2, 0x41e, 0x41f, 0x7, 0x85, 0x2, 0x2, 0x41f, 0x421, 
       0x5, 0x6e, 0x38, 0x2, 0x420, 0x41d, 0x3, 0x2, 0x2, 0x2, 0x421, 0x424, 
       0x3, 0x2, 0x2, 0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 0x422, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x423, 0x73, 0x3, 0x2, 0x2, 0x2, 0x424, 0x422, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x426, 0x5, 0x6c, 0x37, 0x2, 0x426, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x427, 0x444, 0x5, 0x78, 0x3d, 0x2, 0x428, 0x42a, 
       0x5, 0xe8, 0x75, 0x2, 0x429, 0x428, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42a, 
       0x3, 0x2, 0x2, 0x2, 0x42a, 0x42b, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x444, 
       0x5, 0x7a, 0x3e, 0x2, 0x42c, 0x42e, 0x5, 0xe8, 0x75, 0x2, 0x42d, 
       0x42c, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x42e, 
       0x42f, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x444, 0x5, 0x7c, 0x3f, 0x2, 0x430, 
       0x432, 0x5, 0xe8, 0x75, 0x2, 0x431, 0x430, 0x3, 0x2, 0x2, 0x2, 0x431, 
       0x432, 0x3, 0x2, 0x2, 0x2, 0x432, 0x433, 0x3, 0x2, 0x2, 0x2, 0x433, 
       0x444, 0x5, 0x80, 0x41, 0x2, 0x434, 0x436, 0x5, 0xe8, 0x75, 0x2, 
       0x435, 0x434, 0x3, 0x2, 0x2, 0x2, 0x435, 0x436, 0x3, 0x2, 0x2, 0x2, 
       0x436, 0x437, 0x3, 0x2, 0x2, 0x2, 0x437, 0x444, 0x5, 0x84, 0x43, 
       0x2, 0x438, 0x43a, 0x5, 0xe8, 0x75, 0x2, 0x439, 0x438, 0x3, 0x2, 
       0x2, 0x2, 0x439, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x43b, 0x3, 0x2, 
       0x2, 0x2, 0x43b, 0x444, 0x5, 0x8c, 0x47, 0x2, 0x43c, 0x444, 0x5, 
       0x8e, 0x48, 0x2, 0x43d, 0x444, 0x5, 0xa, 0x6, 0x2, 0x43e, 0x444, 
       0x5, 0x10, 0x9, 0x2, 0x43f, 0x441, 0x5, 0xe8, 0x75, 0x2, 0x440, 0x43f, 
       0x3, 0x2, 0x2, 0x2, 0x440, 0x441, 0x3, 0x2, 0x2, 0x2, 0x441, 0x442, 
       0x3, 0x2, 0x2, 0x2, 0x442, 0x444, 0x5, 0x186, 0xc4, 0x2, 0x443, 0x427, 
       0x3, 0x2, 0x2, 0x2, 0x443, 0x429, 0x3, 0x2, 0x2, 0x2, 0x443, 0x42d, 
       0x3, 0x2, 0x2, 0x2, 0x443, 0x431, 0x3, 0x2, 0x2, 0x2, 0x443, 0x435, 
       0x3, 0x2, 0x2, 0x2, 0x443, 0x439, 0x3, 0x2, 0x2, 0x2, 0x443, 0x43c, 
       0x3, 0x2, 0x2, 0x2, 0x443, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x443, 0x43e, 
       0x3, 0x2, 0x2, 0x2, 0x443, 0x440, 0x3, 0x2, 0x2, 0x2, 0x444, 0x77, 
       0x3, 0x2, 0x2, 0x2, 0x445, 0x447, 0x5, 0xe8, 0x75, 0x2, 0x446, 0x445, 
       0x3, 0x2, 0x2, 0x2, 0x446, 0x447, 0x3, 0x2, 0x2, 0x2, 0x447, 0x448, 
       0x3, 0x2, 0x2, 0x2, 0x448, 0x449, 0x7, 0x8f, 0x2, 0x2, 0x449, 0x44a, 
       0x7, 0x89, 0x2, 0x2, 0x44a, 0x45a, 0x5, 0x76, 0x3c, 0x2, 0x44b, 0x44d, 
       0x5, 0xe8, 0x75, 0x2, 0x44c, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x44d, 
       0x3, 0x2, 0x2, 0x2, 0x44d, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x44f, 
       0x7, 0x19, 0x2, 0x2, 0x44f, 0x450, 0x5, 0x74, 0x3b, 0x2, 0x450, 0x451, 
       0x7, 0x89, 0x2, 0x2, 0x451, 0x452, 0x5, 0x76, 0x3c, 0x2, 0x452, 0x45a, 
       0x3, 0x2, 0x2, 0x2, 0x453, 0x455, 0x5, 0xe8, 0x75, 0x2, 0x454, 0x453, 
       0x3, 0x2, 0x2, 0x2, 0x454, 0x455, 0x3, 0x2, 0x2, 0x2, 0x455, 0x456, 
       0x3, 0x2, 0x2, 0x2, 0x456, 0x457, 0x7, 0x24, 0x2, 0x2, 0x457, 0x458, 
       0x7, 0x89, 0x2, 0x2, 0x458, 0x45a, 0x5, 0x76, 0x3c, 0x2, 0x459, 0x446, 
       0x3, 0x2, 0x2, 0x2, 0x459, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x459, 0x454, 
       0x3, 0x2, 0x2, 0x2, 0x45a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x45b, 0x45d, 
       0x5, 0x72, 0x3a, 0x2, 0x45c, 0x45b, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x45d, 
       0x3, 0x2, 0x2, 0x2, 0x45d, 0x45e, 0x3, 0x2, 0x2, 0x2, 0x45e, 0x45f, 
       0x7, 0x8b, 0x2, 0x2, 0x45f, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x460, 0x462, 
       0x7, 0x62, 0x2, 0x2, 0x461, 0x463, 0x5, 0x7e, 0x40, 0x2, 0x462, 0x461, 
       0x3, 0x2, 0x2, 0x2, 0x462, 0x463, 0x3, 0x2, 0x2, 0x2, 0x463, 0x464, 
       0x3, 0x2, 0x2, 0x2, 0x464, 0x465, 0x7, 0x63, 0x2, 0x2, 0x465, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x466, 0x467, 0x8, 0x40, 0x1, 0x2, 0x467, 0x468, 
       0x5, 0x76, 0x3c, 0x2, 0x468, 0x46d, 0x3, 0x2, 0x2, 0x2, 0x469, 0x46a, 
       0xc, 0x3, 0x2, 0x2, 0x46a, 0x46c, 0x5, 0x76, 0x3c, 0x2, 0x46b, 0x469, 
       0x3, 0x2, 0x2, 0x2, 0x46c, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x46b, 
       0x3, 0x2, 0x2, 0x2, 0x46d, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x7f, 
       0x3, 0x2, 0x2, 0x2, 0x46f, 0x46d, 0x3, 0x2, 0x2, 0x2, 0x470, 0x471, 
       0x7, 0x34, 0x2, 0x2, 0x471, 0x472, 0x7, 0x5e, 0x2, 0x2, 0x472, 0x473, 
       0x5, 0x82, 0x42, 0x2, 0x473, 0x474, 0x7, 0x5f, 0x2, 0x2, 0x474, 0x475, 
       0x5, 0x76, 0x3c, 0x2, 0x475, 0x485, 0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 
       0x7, 0x34, 0x2, 0x2, 0x477, 0x478, 0x7, 0x5e, 0x2, 0x2, 0x478, 0x479, 
       0x5, 0x82, 0x42, 0x2, 0x479, 0x47a, 0x7, 0x5f, 0x2, 0x2, 0x47a, 0x47b, 
       0x5, 0x76, 0x3c, 0x2, 0x47b, 0x47c, 0x7, 0x29, 0x2, 0x2, 0x47c, 0x47d, 
       0x5, 0x76, 0x3c, 0x2, 0x47d, 0x485, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x47f, 
       0x7, 0x4c, 0x2, 0x2, 0x47f, 0x480, 0x7, 0x5e, 0x2, 0x2, 0x480, 0x481, 
       0x5, 0x82, 0x42, 0x2, 0x481, 0x482, 0x7, 0x5f, 0x2, 0x2, 0x482, 0x483, 
       0x5, 0x76, 0x3c, 0x2, 0x483, 0x485, 0x3, 0x2, 0x2, 0x2, 0x484, 0x470, 
       0x3, 0x2, 0x2, 0x2, 0x484, 0x476, 0x3, 0x2, 0x2, 0x2, 0x484, 0x47e, 
       0x3, 0x2, 0x2, 0x2, 0x485, 0x81, 0x3, 0x2, 0x2, 0x2, 0x486, 0x497, 
       0x5, 0x72, 0x3a, 0x2, 0x487, 0x489, 0x5, 0xe8, 0x75, 0x2, 0x488, 
       0x487, 0x3, 0x2, 0x2, 0x2, 0x488, 0x489, 0x3, 0x2, 0x2, 0x2, 0x489, 
       0x48a, 0x3, 0x2, 0x2, 0x2, 0x48a, 0x48b, 0x5, 0xa2, 0x52, 0x2, 0x48b, 
       0x48c, 0x5, 0x102, 0x82, 0x2, 0x48c, 0x48d, 0x7, 0x6e, 0x2, 0x2, 
       0x48d, 0x48e, 0x5, 0x130, 0x99, 0x2, 0x48e, 0x497, 0x3, 0x2, 0x2, 
       0x2, 0x48f, 0x491, 0x5, 0xe8, 0x75, 0x2, 0x490, 0x48f, 0x3, 0x2, 
       0x2, 0x2, 0x490, 0x491, 0x3, 0x2, 0x2, 0x2, 0x491, 0x492, 0x3, 0x2, 
       0x2, 0x2, 0x492, 0x493, 0x5, 0xa2, 0x52, 0x2, 0x493, 0x494, 0x5, 
       0x102, 0x82, 0x2, 0x494, 0x495, 0x5, 0x134, 0x9b, 0x2, 0x495, 0x497, 
       0x3, 0x2, 0x2, 0x2, 0x496, 0x486, 0x3, 0x2, 0x2, 0x2, 0x496, 0x488, 
       0x3, 0x2, 0x2, 0x2, 0x496, 0x490, 0x3, 0x2, 0x2, 0x2, 0x497, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x498, 0x499, 0x7, 0x5d, 0x2, 0x2, 0x499, 0x49a, 
       0x7, 0x5e, 0x2, 0x2, 0x49a, 0x49b, 0x5, 0x82, 0x42, 0x2, 0x49b, 0x49c, 
       0x7, 0x5f, 0x2, 0x2, 0x49c, 0x49d, 0x5, 0x76, 0x3c, 0x2, 0x49d, 0x4bc, 
       0x3, 0x2, 0x2, 0x2, 0x49e, 0x49f, 0x7, 0x26, 0x2, 0x2, 0x49f, 0x4a0, 
       0x5, 0x76, 0x3c, 0x2, 0x4a0, 0x4a1, 0x7, 0x5d, 0x2, 0x2, 0x4a1, 0x4a2, 
       0x7, 0x5e, 0x2, 0x2, 0x4a2, 0x4a3, 0x5, 0x72, 0x3a, 0x2, 0x4a3, 0x4a4, 
       0x7, 0x5f, 0x2, 0x2, 0x4a4, 0x4a5, 0x7, 0x8b, 0x2, 0x2, 0x4a5, 0x4bc, 
       0x3, 0x2, 0x2, 0x2, 0x4a6, 0x4a7, 0x7, 0x31, 0x2, 0x2, 0x4a7, 0x4a8, 
       0x7, 0x5e, 0x2, 0x2, 0x4a8, 0x4aa, 0x5, 0x86, 0x44, 0x2, 0x4a9, 0x4ab, 
       0x5, 0x82, 0x42, 0x2, 0x4aa, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4ab, 
       0x3, 0x2, 0x2, 0x2, 0x4ab, 0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4ac, 0x4ae, 
       0x7, 0x8b, 0x2, 0x2, 0x4ad, 0x4af, 0x5, 0x72, 0x3a, 0x2, 0x4ae, 0x4ad, 
       0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4b0, 
       0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4b1, 0x7, 0x5f, 0x2, 0x2, 0x4b1, 0x4b2, 
       0x5, 0x76, 0x3c, 0x2, 0x4b2, 0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b4, 
       0x7, 0x31, 0x2, 0x2, 0x4b4, 0x4b5, 0x7, 0x5e, 0x2, 0x2, 0x4b5, 0x4b6, 
       0x5, 0x88, 0x45, 0x2, 0x4b6, 0x4b7, 0x7, 0x89, 0x2, 0x2, 0x4b7, 0x4b8, 
       0x5, 0x8a, 0x46, 0x2, 0x4b8, 0x4b9, 0x7, 0x5f, 0x2, 0x2, 0x4b9, 0x4ba, 
       0x5, 0x76, 0x3c, 0x2, 0x4ba, 0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4bb, 0x498, 
       0x3, 0x2, 0x2, 0x2, 0x4bb, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x4bb, 0x4a6, 
       0x3, 0x2, 0x2, 0x2, 0x4bb, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4c0, 0x5, 0x7a, 0x3e, 0x2, 0x4be, 0x4c0, 
       0x5, 0x98, 0x4d, 0x2, 0x4bf, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4be, 
       0x3, 0x2, 0x2, 0x2, 0x4c0, 0x87, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c3, 
       0x5, 0xe8, 0x75, 0x2, 0x4c2, 0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c3, 
       0x3, 0x2, 0x2, 0x2, 0x4c3, 0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4c5, 
       0x5, 0xa2, 0x52, 0x2, 0x4c5, 0x4c6, 0x5, 0x102, 0x82, 0x2, 0x4c6, 
       0x89, 0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4ca, 0x5, 0x72, 0x3a, 0x2, 0x4c8, 
       0x4ca, 0x5, 0x134, 0x9b, 0x2, 0x4c9, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c9, 
       0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x4cb, 
       0x4cc, 0x7, 0x18, 0x2, 0x2, 0x4cc, 0x4dc, 0x7, 0x8b, 0x2, 0x2, 0x4cd, 
       0x4ce, 0x7, 0x22, 0x2, 0x2, 0x4ce, 0x4dc, 0x7, 0x8b, 0x2, 0x2, 0x4cf, 
       0x4d1, 0x7, 0x44, 0x2, 0x2, 0x4d0, 0x4d2, 0x5, 0x72, 0x3a, 0x2, 0x4d1, 
       0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d1, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d2, 
       0x4d3, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4dc, 0x7, 0x8b, 0x2, 0x2, 0x4d4, 
       0x4d5, 0x7, 0x44, 0x2, 0x2, 0x4d5, 0x4d6, 0x5, 0x134, 0x9b, 0x2, 
       0x4d6, 0x4d7, 0x7, 0x8b, 0x2, 0x2, 0x4d7, 0x4dc, 0x3, 0x2, 0x2, 0x2, 
       0x4d8, 0x4d9, 0x7, 0x33, 0x2, 0x2, 0x4d9, 0x4da, 0x7, 0x8f, 0x2, 
       0x2, 0x4da, 0x4dc, 0x7, 0x8b, 0x2, 0x2, 0x4db, 0x4cb, 0x3, 0x2, 0x2, 
       0x2, 0x4db, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4cf, 0x3, 0x2, 0x2, 
       0x2, 0x4db, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4d8, 0x3, 0x2, 0x2, 
       0x2, 0x4dc, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4de, 0x5, 0x94, 0x4b, 
       0x2, 0x4de, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x4df, 0x4e0, 0x8, 0x49, 0x1, 
       0x2, 0x4e0, 0x4e1, 0x5, 0x92, 0x4a, 0x2, 0x4e1, 0x4e6, 0x3, 0x2, 
       0x2, 0x2, 0x4e2, 0x4e3, 0xc, 0x3, 0x2, 0x2, 0x4e3, 0x4e5, 0x5, 0x92, 
       0x4a, 0x2, 0x4e4, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0x4e8, 0x3, 0x2, 
       0x2, 0x2, 0x4e6, 0x4e4, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4e7, 0x3, 0x2, 
       0x2, 0x2, 0x4e7, 0x91, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e6, 0x3, 0x2, 
       0x2, 0x2, 0x4e9, 0x4f4, 0x5, 0x94, 0x4b, 0x2, 0x4ea, 0x4f4, 0x5, 
       0x128, 0x95, 0x2, 0x4eb, 0x4f4, 0x5, 0x16e, 0xb8, 0x2, 0x4ec, 0x4f4, 
       0x5, 0x182, 0xc2, 0x2, 0x4ed, 0x4f4, 0x5, 0x184, 0xc3, 0x2, 0x4ee, 
       0x4f4, 0x5, 0xe6, 0x74, 0x2, 0x4ef, 0x4f4, 0x5, 0xd0, 0x69, 0x2, 
       0x4f0, 0x4f4, 0x5, 0x9c, 0x4f, 0x2, 0x4f1, 0x4f4, 0x5, 0x9e, 0x50, 
       0x2, 0x4f2, 0x4f4, 0x5, 0x19a, 0xce, 0x2, 0x4f3, 0x4e9, 0x3, 0x2, 
       0x2, 0x2, 0x4f3, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4eb, 0x3, 0x2, 
       0x2, 0x2, 0x4f3, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4ed, 0x3, 0x2, 
       0x2, 0x2, 0x4f3, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4ef, 0x3, 0x2, 
       0x2, 0x2, 0x4f3, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4f1, 0x3, 0x2, 
       0x2, 0x2, 0x4f3, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x93, 0x3, 0x2, 
       0x2, 0x2, 0x4f5, 0x4fe, 0x5, 0x98, 0x4d, 0x2, 0x4f6, 0x4fe, 0x5, 
       0xe4, 0x73, 0x2, 0x4f7, 0x4fe, 0x5, 0xdc, 0x6f, 0x2, 0x4f8, 0x4fe, 
       0x5, 0xe0, 0x71, 0x2, 0x4f9, 0x4fe, 0x5, 0xe2, 0x72, 0x2, 0x4fa, 
       0x4fe, 0x5, 0x9a, 0x4e, 0x2, 0x4fb, 0x4fe, 0x5, 0x96, 0x4c, 0x2, 
       0x4fc, 0x4fe, 0x5, 0xc0, 0x61, 0x2, 0x4fd, 0x4f5, 0x3, 0x2, 0x2, 
       0x2, 0x4fd, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4f7, 0x3, 0x2, 0x2, 
       0x2, 0x4fd, 0x4f8, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4f9, 0x3, 0x2, 0x2, 
       0x2, 0x4fd, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4fb, 0x3, 0x2, 0x2, 
       0x2, 0x4fd, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x95, 0x3, 0x2, 0x2, 
       0x2, 0x4ff, 0x500, 0x7, 0x58, 0x2, 0x2, 0x500, 0x502, 0x7, 0x8f, 
       0x2, 0x2, 0x501, 0x503, 0x5, 0xe8, 0x75, 0x2, 0x502, 0x501, 0x3, 
       0x2, 0x2, 0x2, 0x502, 0x503, 0x3, 0x2, 0x2, 0x2, 0x503, 0x504, 0x3, 
       0x2, 0x2, 0x2, 0x504, 0x505, 0x7, 0x6e, 0x2, 0x2, 0x505, 0x506, 0x5, 
       0x116, 0x8c, 0x2, 0x506, 0x507, 0x7, 0x8b, 0x2, 0x2, 0x507, 0x97, 
       0x3, 0x2, 0x2, 0x2, 0x508, 0x50a, 0x5, 0xa2, 0x52, 0x2, 0x509, 0x508, 
       0x3, 0x2, 0x2, 0x2, 0x509, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x50a, 0x50c, 
       0x3, 0x2, 0x2, 0x2, 0x50b, 0x50d, 0x5, 0xfe, 0x80, 0x2, 0x50c, 0x50b, 
       0x3, 0x2, 0x2, 0x2, 0x50c, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x50e, 
       0x3, 0x2, 0x2, 0x2, 0x50e, 0x517, 0x7, 0x8b, 0x2, 0x2, 0x50f, 0x511, 
       0x5, 0xe8, 0x75, 0x2, 0x510, 0x512, 0x5, 0xa2, 0x52, 0x2, 0x511, 
       0x510, 0x3, 0x2, 0x2, 0x2, 0x511, 0x512, 0x3, 0x2, 0x2, 0x2, 0x512, 
       0x513, 0x3, 0x2, 0x2, 0x2, 0x513, 0x514, 0x5, 0xfe, 0x80, 0x2, 0x514, 
       0x515, 0x7, 0x8b, 0x2, 0x2, 0x515, 0x517, 0x3, 0x2, 0x2, 0x2, 0x516, 
       0x509, 0x3, 0x2, 0x2, 0x2, 0x516, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x517, 
       0x99, 0x3, 0x2, 0x2, 0x2, 0x518, 0x519, 0x7, 0x49, 0x2, 0x2, 0x519, 
       0x51a, 0x7, 0x5e, 0x2, 0x2, 0x51a, 0x51b, 0x5, 0x74, 0x3b, 0x2, 0x51b, 
       0x51c, 0x7, 0x85, 0x2, 0x2, 0x51c, 0x51d, 0x7, 0x98, 0x2, 0x2, 0x51d, 
       0x51e, 0x7, 0x5f, 0x2, 0x2, 0x51e, 0x51f, 0x7, 0x8b, 0x2, 0x2, 0x51f, 
       0x9b, 0x3, 0x2, 0x2, 0x2, 0x520, 0x521, 0x7, 0x8b, 0x2, 0x2, 0x521, 
       0x9d, 0x3, 0x2, 0x2, 0x2, 0x522, 0x523, 0x5, 0xe8, 0x75, 0x2, 0x523, 
       0x524, 0x7, 0x8b, 0x2, 0x2, 0x524, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x525, 
       0x52c, 0x5, 0xa4, 0x53, 0x2, 0x526, 0x52c, 0x5, 0xaa, 0x56, 0x2, 
       0x527, 0x52c, 0x5, 0xa6, 0x54, 0x2, 0x528, 0x52c, 0x7, 0x32, 0x2, 
       0x2, 0x529, 0x52c, 0x7, 0x53, 0x2, 0x2, 0x52a, 0x52c, 0x7, 0x20, 
       0x2, 0x2, 0x52b, 0x525, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x526, 0x3, 0x2, 
       0x2, 0x2, 0x52b, 0x527, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x528, 0x3, 0x2, 
       0x2, 0x2, 0x52b, 0x529, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x52a, 0x3, 0x2, 
       0x2, 0x2, 0x52c, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52f, 0x5, 0xa0, 
       0x51, 0x2, 0x52e, 0x530, 0x5, 0xe8, 0x75, 0x2, 0x52f, 0x52e, 0x3, 
       0x2, 0x2, 0x2, 0x52f, 0x530, 0x3, 0x2, 0x2, 0x2, 0x530, 0x535, 0x3, 
       0x2, 0x2, 0x2, 0x531, 0x532, 0x5, 0xa0, 0x51, 0x2, 0x532, 0x533, 
       0x5, 0xa2, 0x52, 0x2, 0x533, 0x535, 0x3, 0x2, 0x2, 0x2, 0x534, 0x52d, 
       0x3, 0x2, 0x2, 0x2, 0x534, 0x531, 0x3, 0x2, 0x2, 0x2, 0x535, 0xa3, 
       0x3, 0x2, 0x2, 0x2, 0x536, 0x537, 0x9, 0x6, 0x2, 0x2, 0x537, 0xa5, 
       0x3, 0x2, 0x2, 0x2, 0x538, 0x539, 0x9, 0x7, 0x2, 0x2, 0x539, 0xa7, 
       0x3, 0x2, 0x2, 0x2, 0x53a, 0x53b, 0x7, 0x8f, 0x2, 0x2, 0x53b, 0xa9, 
       0x3, 0x2, 0x2, 0x2, 0x53c, 0x540, 0x5, 0xac, 0x57, 0x2, 0x53d, 0x540, 
       0x5, 0x138, 0x9d, 0x2, 0x53e, 0x540, 0x5, 0xbc, 0x5f, 0x2, 0x53f, 
       0x53c, 0x3, 0x2, 0x2, 0x2, 0x53f, 0x53d, 0x3, 0x2, 0x2, 0x2, 0x53f, 
       0x53e, 0x3, 0x2, 0x2, 0x2, 0x540, 0xab, 0x3, 0x2, 0x2, 0x2, 0x541, 
       0x546, 0x5, 0xb2, 0x5a, 0x2, 0x542, 0x546, 0x5, 0xb8, 0x5d, 0x2, 
       0x543, 0x546, 0x5, 0x180, 0xc1, 0x2, 0x544, 0x546, 0x5, 0x110, 0x89, 
       0x2, 0x545, 0x541, 0x3, 0x2, 0x2, 0x2, 0x545, 0x542, 0x3, 0x2, 0x2, 
       0x2, 0x545, 0x543, 0x3, 0x2, 0x2, 0x2, 0x545, 0x544, 0x3, 0x2, 0x2, 
       0x2, 0x546, 0xad, 0x3, 0x2, 0x2, 0x2, 0x547, 0x549, 0x5, 0xaa, 0x56, 
       0x2, 0x548, 0x54a, 0x5, 0xe8, 0x75, 0x2, 0x549, 0x548, 0x3, 0x2, 
       0x2, 0x2, 0x549, 0x54a, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x54f, 0x3, 0x2, 
       0x2, 0x2, 0x54b, 0x54c, 0x5, 0xaa, 0x56, 0x2, 0x54c, 0x54d, 0x5, 
       0xae, 0x58, 0x2, 0x54d, 0x54f, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x547, 
       0x3, 0x2, 0x2, 0x2, 0x54e, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54f, 0xaf, 
       0x3, 0x2, 0x2, 0x2, 0x550, 0x552, 0x5, 0xac, 0x57, 0x2, 0x551, 0x553, 
       0x5, 0xe8, 0x75, 0x2, 0x552, 0x551, 0x3, 0x2, 0x2, 0x2, 0x552, 0x553, 
       0x3, 0x2, 0x2, 0x2, 0x553, 0x558, 0x3, 0x2, 0x2, 0x2, 0x554, 0x555, 
       0x5, 0xac, 0x57, 0x2, 0x555, 0x556, 0x5, 0xb0, 0x59, 0x2, 0x556, 
       0x558, 0x3, 0x2, 0x2, 0x2, 0x557, 0x550, 0x3, 0x2, 0x2, 0x2, 0x557, 
       0x554, 0x3, 0x2, 0x2, 0x2, 0x558, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x559, 
       0x55b, 0x5, 0x20, 0x11, 0x2, 0x55a, 0x559, 0x3, 0x2, 0x2, 0x2, 0x55a, 
       0x55b, 0x3, 0x2, 0x2, 0x2, 0x55b, 0x55c, 0x3, 0x2, 0x2, 0x2, 0x55c, 
       0x571, 0x5, 0xb4, 0x5b, 0x2, 0x55d, 0x55e, 0x5, 0x20, 0x11, 0x2, 
       0x55e, 0x55f, 0x7, 0x4d, 0x2, 0x2, 0x55f, 0x560, 0x5, 0x176, 0xbc, 
       0x2, 0x560, 0x571, 0x3, 0x2, 0x2, 0x2, 0x561, 0x571, 0x7, 0x1b, 0x2, 
       0x2, 0x562, 0x571, 0x7, 0x1c, 0x2, 0x2, 0x563, 0x571, 0x7, 0x1d, 
       0x2, 0x2, 0x564, 0x571, 0x7, 0x5c, 0x2, 0x2, 0x565, 0x571, 0x7, 0x17, 
       0x2, 0x2, 0x566, 0x571, 0x7, 0x45, 0x2, 0x2, 0x567, 0x571, 0x7, 0x36, 
       0x2, 0x2, 0x568, 0x571, 0x7, 0x37, 0x2, 0x2, 0x569, 0x571, 0x7, 0x46, 
       0x2, 0x2, 0x56a, 0x571, 0x7, 0x57, 0x2, 0x2, 0x56b, 0x571, 0x7, 0x30, 
       0x2, 0x2, 0x56c, 0x571, 0x7, 0x27, 0x2, 0x2, 0x56d, 0x571, 0x7, 0x5a, 
       0x2, 0x2, 0x56e, 0x571, 0x7, 0x16, 0x2, 0x2, 0x56f, 0x571, 0x5, 0xb6, 
       0x5c, 0x2, 0x570, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x570, 0x55d, 0x3, 0x2, 
       0x2, 0x2, 0x570, 0x561, 0x3, 0x2, 0x2, 0x2, 0x570, 0x562, 0x3, 0x2, 
       0x2, 0x2, 0x570, 0x563, 0x3, 0x2, 0x2, 0x2, 0x570, 0x564, 0x3, 0x2, 
       0x2, 0x2, 0x570, 0x565, 0x3, 0x2, 0x2, 0x2, 0x570, 0x566, 0x3, 0x2, 
       0x2, 0x2, 0x570, 0x567, 0x3, 0x2, 0x2, 0x2, 0x570, 0x568, 0x3, 0x2, 
       0x2, 0x2, 0x570, 0x569, 0x3, 0x2, 0x2, 0x2, 0x570, 0x56a, 0x3, 0x2, 
       0x2, 0x2, 0x570, 0x56b, 0x3, 0x2, 0x2, 0x2, 0x570, 0x56c, 0x3, 0x2, 
       0x2, 0x2, 0x570, 0x56d, 0x3, 0x2, 0x2, 0x2, 0x570, 0x56e, 0x3, 0x2, 
       0x2, 0x2, 0x570, 0x56f, 0x3, 0x2, 0x2, 0x2, 0x571, 0xb3, 0x3, 0x2, 
       0x2, 0x2, 0x572, 0x577, 0x5, 0x136, 0x9c, 0x2, 0x573, 0x577, 0x5, 
       0xba, 0x5e, 0x2, 0x574, 0x577, 0x5, 0xa8, 0x55, 0x2, 0x575, 0x577, 
       0x5, 0x176, 0xbc, 0x2, 0x576, 0x572, 0x3, 0x2, 0x2, 0x2, 0x576, 0x573, 
       0x3, 0x2, 0x2, 0x2, 0x576, 0x574, 0x3, 0x2, 0x2, 0x2, 0x576, 0x575, 
       0x3, 0x2, 0x2, 0x2, 0x577, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x578, 0x579, 
       0x7, 0x23, 0x2, 0x2, 0x579, 0x57a, 0x7, 0x5e, 0x2, 0x2, 0x57a, 0x57b, 
       0x5, 0x72, 0x3a, 0x2, 0x57b, 0x57c, 0x7, 0x5f, 0x2, 0x2, 0x57c, 0x582, 
       0x3, 0x2, 0x2, 0x2, 0x57d, 0x57e, 0x7, 0x23, 0x2, 0x2, 0x57e, 0x57f, 
       0x7, 0x5e, 0x2, 0x2, 0x57f, 0x580, 0x7, 0x16, 0x2, 0x2, 0x580, 0x582, 
       0x7, 0x5f, 0x2, 0x2, 0x581, 0x578, 0x3, 0x2, 0x2, 0x2, 0x581, 0x57d, 
       0x3, 0x2, 0x2, 0x2, 0x582, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x583, 0x585, 
       0x5, 0x140, 0xa1, 0x2, 0x584, 0x586, 0x5, 0xe8, 0x75, 0x2, 0x585, 
       0x584, 0x3, 0x2, 0x2, 0x2, 0x585, 0x586, 0x3, 0x2, 0x2, 0x2, 0x586, 
       0x588, 0x3, 0x2, 0x2, 0x2, 0x587, 0x589, 0x5, 0x20, 0x11, 0x2, 0x588, 
       0x587, 0x3, 0x2, 0x2, 0x2, 0x588, 0x589, 0x3, 0x2, 0x2, 0x2, 0x589, 
       0x58a, 0x3, 0x2, 0x2, 0x2, 0x58a, 0x58b, 0x7, 0x8f, 0x2, 0x2, 0x58b, 
       0x59c, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58d, 0x5, 0x140, 0xa1, 0x2, 0x58d, 
       0x58e, 0x5, 0x176, 0xbc, 0x2, 0x58e, 0x59c, 0x3, 0x2, 0x2, 0x2, 0x58f, 
       0x590, 0x5, 0x140, 0xa1, 0x2, 0x590, 0x592, 0x5, 0x20, 0x11, 0x2, 
       0x591, 0x593, 0x7, 0x4d, 0x2, 0x2, 0x592, 0x591, 0x3, 0x2, 0x2, 0x2, 
       0x592, 0x593, 0x3, 0x2, 0x2, 0x2, 0x593, 0x594, 0x3, 0x2, 0x2, 0x2, 
       0x594, 0x595, 0x5, 0x176, 0xbc, 0x2, 0x595, 0x59c, 0x3, 0x2, 0x2, 
       0x2, 0x596, 0x598, 0x7, 0x2a, 0x2, 0x2, 0x597, 0x599, 0x5, 0x20, 
       0x11, 0x2, 0x598, 0x597, 0x3, 0x2, 0x2, 0x2, 0x598, 0x599, 0x3, 0x2, 
       0x2, 0x2, 0x599, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x59c, 0x7, 0x8f, 
       0x2, 0x2, 0x59b, 0x583, 0x3, 0x2, 0x2, 0x2, 0x59b, 0x58c, 0x3, 0x2, 
       0x2, 0x2, 0x59b, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x59b, 0x596, 0x3, 0x2, 
       0x2, 0x2, 0x59c, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x59d, 0x59e, 0x7, 0x8f, 
       0x2, 0x2, 0x59e, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x59f, 0x5a0, 0x5, 0xbe, 
       0x60, 0x2, 0x5a0, 0x5a2, 0x7, 0x62, 0x2, 0x2, 0x5a1, 0x5a3, 0x5, 
       0xc6, 0x64, 0x2, 0x5a2, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a2, 0x5a3, 
       0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x5a4, 0x5a5, 
       0x7, 0x63, 0x2, 0x2, 0x5a5, 0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0x5a7, 
       0x5, 0xbe, 0x60, 0x2, 0x5a7, 0x5a8, 0x7, 0x62, 0x2, 0x2, 0x5a8, 0x5a9, 
       0x5, 0xc6, 0x64, 0x2, 0x5a9, 0x5aa, 0x7, 0x85, 0x2, 0x2, 0x5aa, 0x5ab, 
       0x7, 0x63, 0x2, 0x2, 0x5ab, 0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x59f, 
       0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x5ad, 0xbd, 
       0x3, 0x2, 0x2, 0x2, 0x5ae, 0x5b0, 0x5, 0xc2, 0x62, 0x2, 0x5af, 0x5b1, 
       0x5, 0xe8, 0x75, 0x2, 0x5b0, 0x5af, 0x3, 0x2, 0x2, 0x2, 0x5b0, 0x5b1, 
       0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5b3, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5b4, 
       0x7, 0x8f, 0x2, 0x2, 0x5b3, 0x5b2, 0x3, 0x2, 0x2, 0x2, 0x5b3, 0x5b4, 
       0x3, 0x2, 0x2, 0x2, 0x5b4, 0x5b6, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b7, 
       0x5, 0xc4, 0x63, 0x2, 0x5b6, 0x5b5, 0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b7, 
       0x3, 0x2, 0x2, 0x2, 0x5b7, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5b8, 0x5ba, 
       0x5, 0xc2, 0x62, 0x2, 0x5b9, 0x5bb, 0x5, 0xe8, 0x75, 0x2, 0x5ba, 
       0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5bb, 
       0x5bc, 0x3, 0x2, 0x2, 0x2, 0x5bc, 0x5bd, 0x5, 0x20, 0x11, 0x2, 0x5bd, 
       0x5bf, 0x7, 0x8f, 0x2, 0x2, 0x5be, 0x5c0, 0x5, 0xc4, 0x63, 0x2, 0x5bf, 
       0x5be, 0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5c0, 0x3, 0x2, 0x2, 0x2, 0x5c0, 
       0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5ae, 0x3, 0x2, 0x2, 0x2, 0x5c1, 
       0x5b8, 0x3, 0x2, 0x2, 0x2, 0x5c2, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x5c3, 
       0x5c5, 0x5, 0xc2, 0x62, 0x2, 0x5c4, 0x5c6, 0x5, 0xe8, 0x75, 0x2, 
       0x5c5, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5c6, 0x3, 0x2, 0x2, 0x2, 
       0x5c6, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0x5c7, 0x5c9, 0x7, 0x8f, 0x2, 0x2, 
       0x5c8, 0x5ca, 0x5, 0xc4, 0x63, 0x2, 0x5c9, 0x5c8, 0x3, 0x2, 0x2, 
       0x2, 0x5c9, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5cb, 0x3, 0x2, 0x2, 
       0x2, 0x5cb, 0x5cc, 0x7, 0x8b, 0x2, 0x2, 0x5cc, 0xc1, 0x3, 0x2, 0x2, 
       0x2, 0x5cd, 0x5d3, 0x7, 0x2a, 0x2, 0x2, 0x5ce, 0x5cf, 0x7, 0x2a, 
       0x2, 0x2, 0x5cf, 0x5d3, 0x7, 0x1e, 0x2, 0x2, 0x5d0, 0x5d1, 0x7, 0x2a, 
       0x2, 0x2, 0x5d1, 0x5d3, 0x7, 0x4b, 0x2, 0x2, 0x5d2, 0x5cd, 0x3, 0x2, 
       0x2, 0x2, 0x5d2, 0x5ce, 0x3, 0x2, 0x2, 0x2, 0x5d2, 0x5d0, 0x3, 0x2, 
       0x2, 0x2, 0x5d3, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d5, 0x7, 0x89, 
       0x2, 0x2, 0x5d5, 0x5d6, 0x5, 0xae, 0x58, 0x2, 0x5d6, 0xc5, 0x3, 0x2, 
       0x2, 0x2, 0x5d7, 0x5d8, 0x8, 0x64, 0x1, 0x2, 0x5d8, 0x5d9, 0x5, 0xc8, 
       0x65, 0x2, 0x5d9, 0x5df, 0x3, 0x2, 0x2, 0x2, 0x5da, 0x5db, 0xc, 0x3, 
       0x2, 0x2, 0x5db, 0x5dc, 0x7, 0x85, 0x2, 0x2, 0x5dc, 0x5de, 0x5, 0xc8, 
       0x65, 0x2, 0x5dd, 0x5da, 0x3, 0x2, 0x2, 0x2, 0x5de, 0x5e1, 0x3, 0x2, 
       0x2, 0x2, 0x5df, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5df, 0x5e0, 0x3, 0x2, 
       0x2, 0x2, 0x5e0, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5df, 0x3, 0x2, 
       0x2, 0x2, 0x5e2, 0x5e8, 0x5, 0xca, 0x66, 0x2, 0x5e3, 0x5e4, 0x5, 
       0xca, 0x66, 0x2, 0x5e4, 0x5e5, 0x7, 0x6e, 0x2, 0x2, 0x5e5, 0x5e6, 
       0x5, 0x74, 0x3b, 0x2, 0x5e6, 0x5e8, 0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5e2, 
       0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0xc9, 
       0x3, 0x2, 0x2, 0x2, 0x5e9, 0x5ea, 0x7, 0x8f, 0x2, 0x2, 0x5ea, 0xcb, 
       0x3, 0x2, 0x2, 0x2, 0x5eb, 0x5ee, 0x5, 0xce, 0x68, 0x2, 0x5ec, 0x5ee, 
       0x5, 0xda, 0x6e, 0x2, 0x5ed, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5ec, 
       0x3, 0x2, 0x2, 0x2, 0x5ee, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5f0, 
       0x7, 0x8f, 0x2, 0x2, 0x5f0, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x5f1, 0x5f4, 
       0x5, 0xd2, 0x6a, 0x2, 0x5f2, 0x5f4, 0x5, 0xd6, 0x6c, 0x2, 0x5f3, 
       0x5f1, 0x3, 0x2, 0x2, 0x2, 0x5f3, 0x5f2, 0x3, 0x2, 0x2, 0x2, 0x5f4, 
       0xd1, 0x3, 0x2, 0x2, 0x2, 0x5f5, 0x5f6, 0x5, 0xd4, 0x6b, 0x2, 0x5f6, 
       0xd3, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5f9, 0x7, 0x35, 0x2, 0x2, 0x5f8, 
       0x5f7, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5f9, 0x3, 0x2, 0x2, 0x2, 0x5f9, 
       0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fb, 0x7, 0x39, 0x2, 0x2, 0x5fb, 
       0x5fc, 0x7, 0x8f, 0x2, 0x2, 0x5fc, 0x5fd, 0x7, 0x62, 0x2, 0x2, 0x5fd, 
       0x5fe, 0x5, 0xd8, 0x6d, 0x2, 0x5fe, 0x5ff, 0x7, 0x63, 0x2, 0x2, 0x5ff, 
       0xd5, 0x3, 0x2, 0x2, 0x2, 0x600, 0x602, 0x7, 0x35, 0x2, 0x2, 0x601, 
       0x600, 0x3, 0x2, 0x2, 0x2, 0x601, 0x602, 0x3, 0x2, 0x2, 0x2, 0x602, 
       0x603, 0x3, 0x2, 0x2, 0x2, 0x603, 0x604, 0x7, 0x39, 0x2, 0x2, 0x604, 
       0x605, 0x7, 0x62, 0x2, 0x2, 0x605, 0x606, 0x5, 0xd8, 0x6d, 0x2, 0x606, 
       0x607, 0x7, 0x63, 0x2, 0x2, 0x607, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x608, 
       0x60a, 0x5, 0x90, 0x49, 0x2, 0x609, 0x608, 0x3, 0x2, 0x2, 0x2, 0x609, 
       0x60a, 0x3, 0x2, 0x2, 0x2, 0x60a, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x60b, 
       0x60c, 0x7, 0x8f, 0x2, 0x2, 0x60c, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x60d, 
       0x60e, 0x7, 0x39, 0x2, 0x2, 0x60e, 0x60f, 0x7, 0x8f, 0x2, 0x2, 0x60f, 
       0x610, 0x7, 0x6e, 0x2, 0x2, 0x610, 0x611, 0x5, 0xde, 0x70, 0x2, 0x611, 
       0x612, 0x7, 0x8b, 0x2, 0x2, 0x612, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x613, 
       0x615, 0x5, 0x20, 0x11, 0x2, 0x614, 0x613, 0x3, 0x2, 0x2, 0x2, 0x614, 
       0x615, 0x3, 0x2, 0x2, 0x2, 0x615, 0x616, 0x3, 0x2, 0x2, 0x2, 0x616, 
       0x617, 0x5, 0xcc, 0x67, 0x2, 0x617, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x618, 
       0x61a, 0x7, 0x58, 0x2, 0x2, 0x619, 0x61b, 0x7, 0x55, 0x2, 0x2, 0x61a, 
       0x619, 0x3, 0x2, 0x2, 0x2, 0x61a, 0x61b, 0x3, 0x2, 0x2, 0x2, 0x61b, 
       0x61c, 0x3, 0x2, 0x2, 0x2, 0x61c, 0x61d, 0x5, 0x20, 0x11, 0x2, 0x61d, 
       0x61e, 0x5, 0x1c, 0xf, 0x2, 0x61e, 0x61f, 0x7, 0x8b, 0x2, 0x2, 0x61f, 
       0x626, 0x3, 0x2, 0x2, 0x2, 0x620, 0x621, 0x7, 0x58, 0x2, 0x2, 0x621, 
       0x622, 0x7, 0x8a, 0x2, 0x2, 0x622, 0x623, 0x5, 0x1c, 0xf, 0x2, 0x623, 
       0x624, 0x7, 0x8b, 0x2, 0x2, 0x624, 0x626, 0x3, 0x2, 0x2, 0x2, 0x625, 
       0x618, 0x3, 0x2, 0x2, 0x2, 0x625, 0x620, 0x3, 0x2, 0x2, 0x2, 0x626, 
       0xe1, 0x3, 0x2, 0x2, 0x2, 0x627, 0x629, 0x5, 0xe8, 0x75, 0x2, 0x628, 
       0x627, 0x3, 0x2, 0x2, 0x2, 0x628, 0x629, 0x3, 0x2, 0x2, 0x2, 0x629, 
       0x62a, 0x3, 0x2, 0x2, 0x2, 0x62a, 0x62b, 0x7, 0x58, 0x2, 0x2, 0x62b, 
       0x62d, 0x7, 0x39, 0x2, 0x2, 0x62c, 0x62e, 0x5, 0x20, 0x11, 0x2, 0x62d, 
       0x62c, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x62e, 0x3, 0x2, 0x2, 0x2, 0x62e, 
       0x62f, 0x3, 0x2, 0x2, 0x2, 0x62f, 0x630, 0x5, 0xcc, 0x67, 0x2, 0x630, 
       0x631, 0x7, 0x8b, 0x2, 0x2, 0x631, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x632, 
       0x633, 0x7, 0x15, 0x2, 0x2, 0x633, 0x634, 0x7, 0x5e, 0x2, 0x2, 0x634, 
       0x635, 0x7, 0x98, 0x2, 0x2, 0x635, 0x636, 0x7, 0x5f, 0x2, 0x2, 0x636, 
       0x637, 0x7, 0x8b, 0x2, 0x2, 0x637, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x638, 
       0x639, 0x7, 0x2d, 0x2, 0x2, 0x639, 0x63a, 0x7, 0x98, 0x2, 0x2, 0x63a, 
       0x63c, 0x7, 0x62, 0x2, 0x2, 0x63b, 0x63d, 0x5, 0x90, 0x49, 0x2, 0x63c, 
       0x63b, 0x3, 0x2, 0x2, 0x2, 0x63c, 0x63d, 0x3, 0x2, 0x2, 0x2, 0x63d, 
       0x63e, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x643, 0x7, 0x63, 0x2, 0x2, 0x63f, 
       0x640, 0x7, 0x2d, 0x2, 0x2, 0x640, 0x641, 0x7, 0x98, 0x2, 0x2, 0x641, 
       0x643, 0x5, 0x92, 0x4a, 0x2, 0x642, 0x638, 0x3, 0x2, 0x2, 0x2, 0x642, 
       0x63f, 0x3, 0x2, 0x2, 0x2, 0x643, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x644, 
       0x645, 0x8, 0x75, 0x1, 0x2, 0x645, 0x646, 0x5, 0xea, 0x76, 0x2, 0x646, 
       0x64b, 0x3, 0x2, 0x2, 0x2, 0x647, 0x648, 0xc, 0x3, 0x2, 0x2, 0x648, 
       0x64a, 0x5, 0xea, 0x76, 0x2, 0x649, 0x647, 0x3, 0x2, 0x2, 0x2, 0x64a, 
       0x64d, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x649, 0x3, 0x2, 0x2, 0x2, 0x64b, 
       0x64c, 0x3, 0x2, 0x2, 0x2, 0x64c, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x64d, 
       0x64b, 0x3, 0x2, 0x2, 0x2, 0x64e, 0x64f, 0x7, 0x60, 0x2, 0x2, 0x64f, 
       0x650, 0x7, 0x60, 0x2, 0x2, 0x650, 0x651, 0x5, 0xee, 0x78, 0x2, 0x651, 
       0x652, 0x7, 0x61, 0x2, 0x2, 0x652, 0x653, 0x7, 0x61, 0x2, 0x2, 0x653, 
       0x656, 0x3, 0x2, 0x2, 0x2, 0x654, 0x656, 0x5, 0xec, 0x77, 0x2, 0x655, 
       0x64e, 0x3, 0x2, 0x2, 0x2, 0x655, 0x654, 0x3, 0x2, 0x2, 0x2, 0x656, 
       0xeb, 0x3, 0x2, 0x2, 0x2, 0x657, 0x658, 0x7, 0x13, 0x2, 0x2, 0x658, 
       0x659, 0x7, 0x5e, 0x2, 0x2, 0x659, 0x65b, 0x5, 0x116, 0x8c, 0x2, 
       0x65a, 0x65c, 0x7, 0x8e, 0x2, 0x2, 0x65b, 0x65a, 0x3, 0x2, 0x2, 0x2, 
       0x65b, 0x65c, 0x3, 0x2, 0x2, 0x2, 0x65c, 0x65d, 0x3, 0x2, 0x2, 0x2, 
       0x65d, 0x65e, 0x7, 0x5f, 0x2, 0x2, 0x65e, 0x668, 0x3, 0x2, 0x2, 0x2, 
       0x65f, 0x660, 0x7, 0x13, 0x2, 0x2, 0x660, 0x661, 0x7, 0x5e, 0x2, 
       0x2, 0x661, 0x663, 0x5, 0x74, 0x3b, 0x2, 0x662, 0x664, 0x7, 0x8e, 
       0x2, 0x2, 0x663, 0x662, 0x3, 0x2, 0x2, 0x2, 0x663, 0x664, 0x3, 0x2, 
       0x2, 0x2, 0x664, 0x665, 0x3, 0x2, 0x2, 0x2, 0x665, 0x666, 0x7, 0x5f, 
       0x2, 0x2, 0x666, 0x668, 0x3, 0x2, 0x2, 0x2, 0x667, 0x657, 0x3, 0x2, 
       0x2, 0x2, 0x667, 0x65f, 0x3, 0x2, 0x2, 0x2, 0x668, 0xed, 0x3, 0x2, 
       0x2, 0x2, 0x669, 0x66b, 0x8, 0x78, 0x1, 0x2, 0x66a, 0x66c, 0x5, 0xf0, 
       0x79, 0x2, 0x66b, 0x66a, 0x3, 0x2, 0x2, 0x2, 0x66b, 0x66c, 0x3, 0x2, 
       0x2, 0x2, 0x66c, 0x671, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x66e, 0x5, 0xf0, 
       0x79, 0x2, 0x66e, 0x66f, 0x7, 0x8e, 0x2, 0x2, 0x66f, 0x671, 0x3, 
       0x2, 0x2, 0x2, 0x670, 0x669, 0x3, 0x2, 0x2, 0x2, 0x670, 0x66d, 0x3, 
       0x2, 0x2, 0x2, 0x671, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x672, 0x673, 0xc, 
       0x5, 0x2, 0x2, 0x673, 0x675, 0x7, 0x85, 0x2, 0x2, 0x674, 0x676, 0x5, 
       0xf0, 0x79, 0x2, 0x675, 0x674, 0x3, 0x2, 0x2, 0x2, 0x675, 0x676, 
       0x3, 0x2, 0x2, 0x2, 0x676, 0x67d, 0x3, 0x2, 0x2, 0x2, 0x677, 0x678, 
       0xc, 0x3, 0x2, 0x2, 0x678, 0x679, 0x7, 0x85, 0x2, 0x2, 0x679, 0x67a, 
       0x5, 0xf0, 0x79, 0x2, 0x67a, 0x67b, 0x7, 0x8e, 0x2, 0x2, 0x67b, 0x67d, 
       0x3, 0x2, 0x2, 0x2, 0x67c, 0x672, 0x3, 0x2, 0x2, 0x2, 0x67c, 0x677, 
       0x3, 0x2, 0x2, 0x2, 0x67d, 0x680, 0x3, 0x2, 0x2, 0x2, 0x67e, 0x67c, 
       0x3, 0x2, 0x2, 0x2, 0x67e, 0x67f, 0x3, 0x2, 0x2, 0x2, 0x67f, 0xef, 
       0x3, 0x2, 0x2, 0x2, 0x680, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x681, 0x683, 
       0x5, 0xf2, 0x7a, 0x2, 0x682, 0x684, 0x5, 0xf8, 0x7d, 0x2, 0x683, 
       0x682, 0x3, 0x2, 0x2, 0x2, 0x683, 0x684, 0x3, 0x2, 0x2, 0x2, 0x684, 
       0xf1, 0x3, 0x2, 0x2, 0x2, 0x685, 0x688, 0x7, 0x8f, 0x2, 0x2, 0x686, 
       0x688, 0x5, 0xf4, 0x7b, 0x2, 0x687, 0x685, 0x3, 0x2, 0x2, 0x2, 0x687, 
       0x686, 0x3, 0x2, 0x2, 0x2, 0x688, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x689, 
       0x68a, 0x5, 0xf6, 0x7c, 0x2, 0x68a, 0x68b, 0x7, 0x8a, 0x2, 0x2, 0x68b, 
       0x68c, 0x7, 0x8f, 0x2, 0x2, 0x68c, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x68d, 
       0x68e, 0x7, 0x8f, 0x2, 0x2, 0x68e, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x68f, 
       0x690, 0x7, 0x5e, 0x2, 0x2, 0x690, 0x691, 0x5, 0xfa, 0x7e, 0x2, 0x691, 
       0x692, 0x7, 0x5f, 0x2, 0x2, 0x692, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x693, 
       0x695, 0x8, 0x7e, 0x1, 0x2, 0x694, 0x696, 0x5, 0xfc, 0x7f, 0x2, 0x695, 
       0x694, 0x3, 0x2, 0x2, 0x2, 0x695, 0x696, 0x3, 0x2, 0x2, 0x2, 0x696, 
       0x69b, 0x3, 0x2, 0x2, 0x2, 0x697, 0x698, 0xc, 0x3, 0x2, 0x2, 0x698, 
       0x69a, 0x5, 0xfc, 0x7f, 0x2, 0x699, 0x697, 0x3, 0x2, 0x2, 0x2, 0x69a, 
       0x69d, 0x3, 0x2, 0x2, 0x2, 0x69b, 0x699, 0x3, 0x2, 0x2, 0x2, 0x69b, 
       0x69c, 0x3, 0x2, 0x2, 0x2, 0x69c, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x69d, 
       0x69b, 0x3, 0x2, 0x2, 0x2, 0x69e, 0x69f, 0x7, 0x5e, 0x2, 0x2, 0x69f, 
       0x6a0, 0x5, 0xfa, 0x7e, 0x2, 0x6a0, 0x6a1, 0x7, 0x5f, 0x2, 0x2, 0x6a1, 
       0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a3, 0x7, 0x60, 0x2, 0x2, 0x6a3, 
       0x6a4, 0x5, 0xfa, 0x7e, 0x2, 0x6a4, 0x6a5, 0x7, 0x61, 0x2, 0x2, 0x6a5, 
       0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6a7, 0x7, 0x62, 0x2, 0x2, 0x6a7, 
       0x6a8, 0x5, 0xfa, 0x7e, 0x2, 0x6a8, 0x6a9, 0x7, 0x63, 0x2, 0x2, 0x6a9, 
       0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x69e, 0x3, 0x2, 0x2, 0x2, 0x6aa, 
       0x6a2, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6a6, 0x3, 0x2, 0x2, 0x2, 0x6ab, 
       0xfd, 0x3, 0x2, 0x2, 0x2, 0x6ac, 0x6ad, 0x8, 0x80, 0x1, 0x2, 0x6ad, 
       0x6ae, 0x5, 0x100, 0x81, 0x2, 0x6ae, 0x6b4, 0x3, 0x2, 0x2, 0x2, 0x6af, 
       0x6b0, 0xc, 0x3, 0x2, 0x2, 0x6b0, 0x6b1, 0x7, 0x85, 0x2, 0x2, 0x6b1, 
       0x6b3, 0x5, 0x100, 0x81, 0x2, 0x6b2, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6b3, 
       0x6b6, 0x3, 0x2, 0x2, 0x2, 0x6b4, 0x6b2, 0x3, 0x2, 0x2, 0x2, 0x6b4, 
       0x6b5, 0x3, 0x2, 0x2, 0x2, 0x6b5, 0xff, 0x3, 0x2, 0x2, 0x2, 0x6b6, 
       0x6b4, 0x3, 0x2, 0x2, 0x2, 0x6b7, 0x6b9, 0x5, 0x102, 0x82, 0x2, 0x6b8, 
       0x6ba, 0x5, 0x12c, 0x97, 0x2, 0x6b9, 0x6b8, 0x3, 0x2, 0x2, 0x2, 0x6b9, 
       0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6ba, 0x101, 0x3, 0x2, 0x2, 0x2, 0x6bb, 
       0x6c1, 0x5, 0x104, 0x83, 0x2, 0x6bc, 0x6bd, 0x5, 0x106, 0x84, 0x2, 
       0x6bd, 0x6be, 0x5, 0x108, 0x85, 0x2, 0x6be, 0x6bf, 0x5, 0x10a, 0x86, 
       0x2, 0x6bf, 0x6c1, 0x3, 0x2, 0x2, 0x2, 0x6c0, 0x6bb, 0x3, 0x2, 0x2, 
       0x2, 0x6c0, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6c1, 0x103, 0x3, 0x2, 0x2, 
       0x2, 0x6c2, 0x6c7, 0x5, 0x106, 0x84, 0x2, 0x6c3, 0x6c4, 0x5, 0x10c, 
       0x87, 0x2, 0x6c4, 0x6c5, 0x5, 0x104, 0x83, 0x2, 0x6c5, 0x6c7, 0x3, 
       0x2, 0x2, 0x2, 0x6c6, 0x6c2, 0x3, 0x2, 0x2, 0x2, 0x6c6, 0x6c3, 0x3, 
       0x2, 0x2, 0x2, 0x6c7, 0x105, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6c9, 0x8, 
       0x84, 0x1, 0x2, 0x6c9, 0x6cb, 0x5, 0x114, 0x8b, 0x2, 0x6ca, 0x6cc, 
       0x5, 0xe8, 0x75, 0x2, 0x6cb, 0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6cc, 
       0x3, 0x2, 0x2, 0x2, 0x6cc, 0x6d2, 0x3, 0x2, 0x2, 0x2, 0x6cd, 0x6ce, 
       0x7, 0x5e, 0x2, 0x2, 0x6ce, 0x6cf, 0x5, 0x104, 0x83, 0x2, 0x6cf, 
       0x6d0, 0x7, 0x5f, 0x2, 0x2, 0x6d0, 0x6d2, 0x3, 0x2, 0x2, 0x2, 0x6d1, 
       0x6c8, 0x3, 0x2, 0x2, 0x2, 0x6d1, 0x6cd, 0x3, 0x2, 0x2, 0x2, 0x6d2, 
       0x6e0, 0x3, 0x2, 0x2, 0x2, 0x6d3, 0x6d4, 0xc, 0x5, 0x2, 0x2, 0x6d4, 
       0x6df, 0x5, 0x108, 0x85, 0x2, 0x6d5, 0x6d6, 0xc, 0x4, 0x2, 0x2, 0x6d6, 
       0x6d8, 0x7, 0x60, 0x2, 0x2, 0x6d7, 0x6d9, 0x5, 0x74, 0x3b, 0x2, 0x6d8, 
       0x6d7, 0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6d9, 0x3, 0x2, 0x2, 0x2, 0x6d9, 
       0x6da, 0x3, 0x2, 0x2, 0x2, 0x6da, 0x6dc, 0x7, 0x61, 0x2, 0x2, 0x6db, 
       0x6dd, 0x5, 0xe8, 0x75, 0x2, 0x6dc, 0x6db, 0x3, 0x2, 0x2, 0x2, 0x6dc, 
       0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6dd, 0x6df, 0x3, 0x2, 0x2, 0x2, 0x6de, 
       0x6d3, 0x3, 0x2, 0x2, 0x2, 0x6de, 0x6d5, 0x3, 0x2, 0x2, 0x2, 0x6df, 
       0x6e2, 0x3, 0x2, 0x2, 0x2, 0x6e0, 0x6de, 0x3, 0x2, 0x2, 0x2, 0x6e0, 
       0x6e1, 0x3, 0x2, 0x2, 0x2, 0x6e1, 0x107, 0x3, 0x2, 0x2, 0x2, 0x6e2, 
       0x6e0, 0x3, 0x2, 0x2, 0x2, 0x6e3, 0x6e4, 0x7, 0x5e, 0x2, 0x2, 0x6e4, 
       0x6e5, 0x5, 0x122, 0x92, 0x2, 0x6e5, 0x6e7, 0x7, 0x5f, 0x2, 0x2, 
       0x6e6, 0x6e8, 0x5, 0x10e, 0x88, 0x2, 0x6e7, 0x6e6, 0x3, 0x2, 0x2, 
       0x2, 0x6e7, 0x6e8, 0x3, 0x2, 0x2, 0x2, 0x6e8, 0x6ea, 0x3, 0x2, 0x2, 
       0x2, 0x6e9, 0x6eb, 0x5, 0x112, 0x8a, 0x2, 0x6ea, 0x6e9, 0x3, 0x2, 
       0x2, 0x2, 0x6ea, 0x6eb, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6ed, 0x3, 0x2, 
       0x2, 0x2, 0x6ec, 0x6ee, 0x5, 0x192, 0xca, 0x2, 0x6ed, 0x6ec, 0x3, 
       0x2, 0x2, 0x2, 0x6ed, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x6f0, 0x3, 
       0x2, 0x2, 0x2, 0x6ef, 0x6f1, 0x5, 0xe8, 0x75, 0x2, 0x6f0, 0x6ef, 
       0x3, 0x2, 0x2, 0x2, 0x6f0, 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6f1, 0x109, 
       0x3, 0x2, 0x2, 0x2, 0x6f2, 0x6f3, 0x7, 0x87, 0x2, 0x2, 0x6f3, 0x6f5, 
       0x5, 0xb0, 0x59, 0x2, 0x6f4, 0x6f6, 0x5, 0x118, 0x8d, 0x2, 0x6f5, 
       0x6f4, 0x3, 0x2, 0x2, 0x2, 0x6f5, 0x6f6, 0x3, 0x2, 0x2, 0x2, 0x6f6, 
       0x10b, 0x3, 0x2, 0x2, 0x2, 0x6f7, 0x6f9, 0x7, 0x66, 0x2, 0x2, 0x6f8, 
       0x6fa, 0x5, 0xe8, 0x75, 0x2, 0x6f9, 0x6f8, 0x3, 0x2, 0x2, 0x2, 0x6f9, 
       0x6fa, 0x3, 0x2, 0x2, 0x2, 0x6fa, 0x6fc, 0x3, 0x2, 0x2, 0x2, 0x6fb, 
       0x6fd, 0x5, 0x10e, 0x88, 0x2, 0x6fc, 0x6fb, 0x3, 0x2, 0x2, 0x2, 0x6fc, 
       0x6fd, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x70f, 0x3, 0x2, 0x2, 0x2, 0x6fe, 
       0x700, 0x7, 0x6a, 0x2, 0x2, 0x6ff, 0x701, 0x5, 0xe8, 0x75, 0x2, 0x700, 
       0x6ff, 0x3, 0x2, 0x2, 0x2, 0x700, 0x701, 0x3, 0x2, 0x2, 0x2, 0x701, 
       0x70f, 0x3, 0x2, 0x2, 0x2, 0x702, 0x704, 0x7, 0xd, 0x2, 0x2, 0x703, 
       0x705, 0x5, 0xe8, 0x75, 0x2, 0x704, 0x703, 0x3, 0x2, 0x2, 0x2, 0x704, 
       0x705, 0x3, 0x2, 0x2, 0x2, 0x705, 0x70f, 0x3, 0x2, 0x2, 0x2, 0x706, 
       0x707, 0x5, 0x20, 0x11, 0x2, 0x707, 0x709, 0x7, 0x66, 0x2, 0x2, 0x708, 
       0x70a, 0x5, 0xe8, 0x75, 0x2, 0x709, 0x708, 0x3, 0x2, 0x2, 0x2, 0x709, 
       0x70a, 0x3, 0x2, 0x2, 0x2, 0x70a, 0x70c, 0x3, 0x2, 0x2, 0x2, 0x70b, 
       0x70d, 0x5, 0x10e, 0x88, 0x2, 0x70c, 0x70b, 0x3, 0x2, 0x2, 0x2, 0x70c, 
       0x70d, 0x3, 0x2, 0x2, 0x2, 0x70d, 0x70f, 0x3, 0x2, 0x2, 0x2, 0x70e, 
       0x6f7, 0x3, 0x2, 0x2, 0x2, 0x70e, 0x6fe, 0x3, 0x2, 0x2, 0x2, 0x70e, 
       0x702, 0x3, 0x2, 0x2, 0x2, 0x70e, 0x706, 0x3, 0x2, 0x2, 0x2, 0x70f, 
       0x10d, 0x3, 0x2, 0x2, 0x2, 0x710, 0x712, 0x5, 0x110, 0x89, 0x2, 0x711, 
       0x713, 0x5, 0x10e, 0x88, 0x2, 0x712, 0x711, 0x3, 0x2, 0x2, 0x2, 0x712, 
       0x713, 0x3, 0x2, 0x2, 0x2, 0x713, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x714, 
       0x715, 0x9, 0x8, 0x2, 0x2, 0x715, 0x111, 0x3, 0x2, 0x2, 0x2, 0x716, 
       0x717, 0x9, 0x9, 0x2, 0x2, 0x717, 0x113, 0x3, 0x2, 0x2, 0x2, 0x718, 
       0x71a, 0x7, 0x8e, 0x2, 0x2, 0x719, 0x718, 0x3, 0x2, 0x2, 0x2, 0x719, 
       0x71a, 0x3, 0x2, 0x2, 0x2, 0x71a, 0x71b, 0x3, 0x2, 0x2, 0x2, 0x71b, 
       0x71c, 0x5, 0x1a, 0xe, 0x2, 0x71c, 0x115, 0x3, 0x2, 0x2, 0x2, 0x71d, 
       0x71f, 0x5, 0xae, 0x58, 0x2, 0x71e, 0x720, 0x5, 0x118, 0x8d, 0x2, 
       0x71f, 0x71e, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x720, 0x3, 0x2, 0x2, 0x2, 
       0x720, 0x117, 0x3, 0x2, 0x2, 0x2, 0x721, 0x72a, 0x5, 0x11a, 0x8e, 
       0x2, 0x722, 0x724, 0x5, 0x11c, 0x8f, 0x2, 0x723, 0x722, 0x3, 0x2, 
       0x2, 0x2, 0x723, 0x724, 0x3, 0x2, 0x2, 0x2, 0x724, 0x725, 0x3, 0x2, 
       0x2, 0x2, 0x725, 0x726, 0x5, 0x108, 0x85, 0x2, 0x726, 0x727, 0x5, 
       0x10a, 0x86, 0x2, 0x727, 0x72a, 0x3, 0x2, 0x2, 0x2, 0x728, 0x72a, 
       0x5, 0x11e, 0x90, 0x2, 0x729, 0x721, 0x3, 0x2, 0x2, 0x2, 0x729, 0x723, 
       0x3, 0x2, 0x2, 0x2, 0x729, 0x728, 0x3, 0x2, 0x2, 0x2, 0x72a, 0x119, 
       0x3, 0x2, 0x2, 0x2, 0x72b, 0x731, 0x5, 0x11c, 0x8f, 0x2, 0x72c, 0x72e, 
       0x5, 0x10c, 0x87, 0x2, 0x72d, 0x72f, 0x5, 0x11a, 0x8e, 0x2, 0x72e, 
       0x72d, 0x3, 0x2, 0x2, 0x2, 0x72e, 0x72f, 0x3, 0x2, 0x2, 0x2, 0x72f, 
       0x731, 0x3, 0x2, 0x2, 0x2, 0x730, 0x72b, 0x3, 0x2, 0x2, 0x2, 0x730, 
       0x72c, 0x3, 0x2, 0x2, 0x2, 0x731, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x732, 
       0x733, 0x8, 0x8f, 0x1, 0x2, 0x733, 0x741, 0x5, 0x108, 0x85, 0x2, 
       0x734, 0x736, 0x7, 0x60, 0x2, 0x2, 0x735, 0x737, 0x5, 0x74, 0x3b, 
       0x2, 0x736, 0x735, 0x3, 0x2, 0x2, 0x2, 0x736, 0x737, 0x3, 0x2, 0x2, 
       0x2, 0x737, 0x738, 0x3, 0x2, 0x2, 0x2, 0x738, 0x73a, 0x7, 0x61, 0x2, 
       0x2, 0x739, 0x73b, 0x5, 0xe8, 0x75, 0x2, 0x73a, 0x739, 0x3, 0x2, 
       0x2, 0x2, 0x73a, 0x73b, 0x3, 0x2, 0x2, 0x2, 0x73b, 0x741, 0x3, 0x2, 
       0x2, 0x2, 0x73c, 0x73d, 0x7, 0x5e, 0x2, 0x2, 0x73d, 0x73e, 0x5, 0x11a, 
       0x8e, 0x2, 0x73e, 0x73f, 0x7, 0x5f, 0x2, 0x2, 0x73f, 0x741, 0x3, 
       0x2, 0x2, 0x2, 0x740, 0x732, 0x3, 0x2, 0x2, 0x2, 0x740, 0x734, 0x3, 
       0x2, 0x2, 0x2, 0x740, 0x73c, 0x3, 0x2, 0x2, 0x2, 0x741, 0x74f, 0x3, 
       0x2, 0x2, 0x2, 0x742, 0x743, 0xc, 0x7, 0x2, 0x2, 0x743, 0x74e, 0x5, 
       0x108, 0x85, 0x2, 0x744, 0x745, 0xc, 0x5, 0x2, 0x2, 0x745, 0x747, 
       0x7, 0x60, 0x2, 0x2, 0x746, 0x748, 0x5, 0x74, 0x3b, 0x2, 0x747, 0x746, 
       0x3, 0x2, 0x2, 0x2, 0x747, 0x748, 0x3, 0x2, 0x2, 0x2, 0x748, 0x749, 
       0x3, 0x2, 0x2, 0x2, 0x749, 0x74b, 0x7, 0x61, 0x2, 0x2, 0x74a, 0x74c, 
       0x5, 0xe8, 0x75, 0x2, 0x74b, 0x74a, 0x3, 0x2, 0x2, 0x2, 0x74b, 0x74c, 
       0x3, 0x2, 0x2, 0x2, 0x74c, 0x74e, 0x3, 0x2, 0x2, 0x2, 0x74d, 0x742, 
       0x3, 0x2, 0x2, 0x2, 0x74d, 0x744, 0x3, 0x2, 0x2, 0x2, 0x74e, 0x751, 
       0x3, 0x2, 0x2, 0x2, 0x74f, 0x74d, 0x3, 0x2, 0x2, 0x2, 0x74f, 0x750, 
       0x3, 0x2, 0x2, 0x2, 0x750, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x751, 0x74f, 
       0x3, 0x2, 0x2, 0x2, 0x752, 0x757, 0x5, 0x120, 0x91, 0x2, 0x753, 0x754, 
       0x5, 0x10c, 0x87, 0x2, 0x754, 0x755, 0x5, 0x11e, 0x90, 0x2, 0x755, 
       0x757, 0x3, 0x2, 0x2, 0x2, 0x756, 0x752, 0x3, 0x2, 0x2, 0x2, 0x756, 
       0x753, 0x3, 0x2, 0x2, 0x2, 0x757, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x758, 
       0x759, 0x8, 0x91, 0x1, 0x2, 0x759, 0x75a, 0x7, 0x8e, 0x2, 0x2, 0x75a, 
       0x768, 0x3, 0x2, 0x2, 0x2, 0x75b, 0x75c, 0xc, 0x5, 0x2, 0x2, 0x75c, 
       0x767, 0x5, 0x108, 0x85, 0x2, 0x75d, 0x75e, 0xc, 0x4, 0x2, 0x2, 0x75e, 
       0x760, 0x7, 0x60, 0x2, 0x2, 0x75f, 0x761, 0x5, 0x74, 0x3b, 0x2, 0x760, 
       0x75f, 0x3, 0x2, 0x2, 0x2, 0x760, 0x761, 0x3, 0x2, 0x2, 0x2, 0x761, 
       0x762, 0x3, 0x2, 0x2, 0x2, 0x762, 0x764, 0x7, 0x61, 0x2, 0x2, 0x763, 
       0x765, 0x5, 0xe8, 0x75, 0x2, 0x764, 0x763, 0x3, 0x2, 0x2, 0x2, 0x764, 
       0x765, 0x3, 0x2, 0x2, 0x2, 0x765, 0x767, 0x3, 0x2, 0x2, 0x2, 0x766, 
       0x75b, 0x3, 0x2, 0x2, 0x2, 0x766, 0x75d, 0x3, 0x2, 0x2, 0x2, 0x767, 
       0x76a, 0x3, 0x2, 0x2, 0x2, 0x768, 0x766, 0x3, 0x2, 0x2, 0x2, 0x768, 
       0x769, 0x3, 0x2, 0x2, 0x2, 0x769, 0x121, 0x3, 0x2, 0x2, 0x2, 0x76a, 
       0x768, 0x3, 0x2, 0x2, 0x2, 0x76b, 0x76d, 0x5, 0x124, 0x93, 0x2, 0x76c, 
       0x76b, 0x3, 0x2, 0x2, 0x2, 0x76c, 0x76d, 0x3, 0x2, 0x2, 0x2, 0x76d, 
       0x76f, 0x3, 0x2, 0x2, 0x2, 0x76e, 0x770, 0x7, 0x8e, 0x2, 0x2, 0x76f, 
       0x76e, 0x3, 0x2, 0x2, 0x2, 0x76f, 0x770, 0x3, 0x2, 0x2, 0x2, 0x770, 
       0x776, 0x3, 0x2, 0x2, 0x2, 0x771, 0x772, 0x5, 0x124, 0x93, 0x2, 0x772, 
       0x773, 0x7, 0x85, 0x2, 0x2, 0x773, 0x774, 0x7, 0x8e, 0x2, 0x2, 0x774, 
       0x776, 0x3, 0x2, 0x2, 0x2, 0x775, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x775, 
       0x771, 0x3, 0x2, 0x2, 0x2, 0x776, 0x123, 0x3, 0x2, 0x2, 0x2, 0x777, 
       0x778, 0x8, 0x93, 0x1, 0x2, 0x778, 0x779, 0x5, 0x126, 0x94, 0x2, 
       0x779, 0x77f, 0x3, 0x2, 0x2, 0x2, 0x77a, 0x77b, 0xc, 0x3, 0x2, 0x2, 
       0x77b, 0x77c, 0x7, 0x85, 0x2, 0x2, 0x77c, 0x77e, 0x5, 0x126, 0x94, 
       0x2, 0x77d, 0x77a, 0x3, 0x2, 0x2, 0x2, 0x77e, 0x781, 0x3, 0x2, 0x2, 
       0x2, 0x77f, 0x77d, 0x3, 0x2, 0x2, 0x2, 0x77f, 0x780, 0x3, 0x2, 0x2, 
       0x2, 0x780, 0x125, 0x3, 0x2, 0x2, 0x2, 0x781, 0x77f, 0x3, 0x2, 0x2, 
       0x2, 0x782, 0x784, 0x5, 0xe8, 0x75, 0x2, 0x783, 0x782, 0x3, 0x2, 
       0x2, 0x2, 0x783, 0x784, 0x3, 0x2, 0x2, 0x2, 0x784, 0x785, 0x3, 0x2, 
       0x2, 0x2, 0x785, 0x786, 0x5, 0xa2, 0x52, 0x2, 0x786, 0x787, 0x5, 
       0x102, 0x82, 0x2, 0x787, 0x7a2, 0x3, 0x2, 0x2, 0x2, 0x788, 0x78a, 
       0x5, 0xe8, 0x75, 0x2, 0x789, 0x788, 0x3, 0x2, 0x2, 0x2, 0x789, 0x78a, 
       0x3, 0x2, 0x2, 0x2, 0x78a, 0x78b, 0x3, 0x2, 0x2, 0x2, 0x78b, 0x78c, 
       0x5, 0xa2, 0x52, 0x2, 0x78c, 0x78d, 0x5, 0x102, 0x82, 0x2, 0x78d, 
       0x78e, 0x7, 0x6e, 0x2, 0x2, 0x78e, 0x78f, 0x5, 0x130, 0x99, 0x2, 
       0x78f, 0x7a2, 0x3, 0x2, 0x2, 0x2, 0x790, 0x792, 0x5, 0xe8, 0x75, 
       0x2, 0x791, 0x790, 0x3, 0x2, 0x2, 0x2, 0x791, 0x792, 0x3, 0x2, 0x2, 
       0x2, 0x792, 0x793, 0x3, 0x2, 0x2, 0x2, 0x793, 0x795, 0x5, 0xa2, 0x52, 
       0x2, 0x794, 0x796, 0x5, 0x118, 0x8d, 0x2, 0x795, 0x794, 0x3, 0x2, 
       0x2, 0x2, 0x795, 0x796, 0x3, 0x2, 0x2, 0x2, 0x796, 0x7a2, 0x3, 0x2, 
       0x2, 0x2, 0x797, 0x799, 0x5, 0xe8, 0x75, 0x2, 0x798, 0x797, 0x3, 
       0x2, 0x2, 0x2, 0x798, 0x799, 0x3, 0x2, 0x2, 0x2, 0x799, 0x79a, 0x3, 
       0x2, 0x2, 0x2, 0x79a, 0x79c, 0x5, 0xa2, 0x52, 0x2, 0x79b, 0x79d, 
       0x5, 0x118, 0x8d, 0x2, 0x79c, 0x79b, 0x3, 0x2, 0x2, 0x2, 0x79c, 0x79d, 
       0x3, 0x2, 0x2, 0x2, 0x79d, 0x79e, 0x3, 0x2, 0x2, 0x2, 0x79e, 0x79f, 
       0x7, 0x6e, 0x2, 0x2, 0x79f, 0x7a0, 0x5, 0x130, 0x99, 0x2, 0x7a0, 
       0x7a2, 0x3, 0x2, 0x2, 0x2, 0x7a1, 0x783, 0x3, 0x2, 0x2, 0x2, 0x7a1, 
       0x789, 0x3, 0x2, 0x2, 0x2, 0x7a1, 0x791, 0x3, 0x2, 0x2, 0x2, 0x7a1, 
       0x798, 0x3, 0x2, 0x2, 0x2, 0x7a2, 0x127, 0x3, 0x2, 0x2, 0x2, 0x7a3, 
       0x7a5, 0x5, 0xe8, 0x75, 0x2, 0x7a4, 0x7a3, 0x3, 0x2, 0x2, 0x2, 0x7a4, 
       0x7a5, 0x3, 0x2, 0x2, 0x2, 0x7a5, 0x7a7, 0x3, 0x2, 0x2, 0x2, 0x7a6, 
       0x7a8, 0x5, 0xa2, 0x52, 0x2, 0x7a7, 0x7a6, 0x3, 0x2, 0x2, 0x2, 0x7a7, 
       0x7a8, 0x3, 0x2, 0x2, 0x2, 0x7a8, 0x7a9, 0x3, 0x2, 0x2, 0x2, 0x7a9, 
       0x7ab, 0x5, 0x102, 0x82, 0x2, 0x7aa, 0x7ac, 0x5, 0x14a, 0xa6, 0x2, 
       0x7ab, 0x7aa, 0x3, 0x2, 0x2, 0x2, 0x7ab, 0x7ac, 0x3, 0x2, 0x2, 0x2, 
       0x7ac, 0x7ad, 0x3, 0x2, 0x2, 0x2, 0x7ad, 0x7ae, 0x5, 0x12a, 0x96, 
       0x2, 0x7ae, 0x129, 0x3, 0x2, 0x2, 0x2, 0x7af, 0x7b1, 0x5, 0x162, 
       0xb2, 0x2, 0x7b0, 0x7af, 0x3, 0x2, 0x2, 0x2, 0x7b0, 0x7b1, 0x3, 0x2, 
       0x2, 0x2, 0x7b1, 0x7b2, 0x3, 0x2, 0x2, 0x2, 0x7b2, 0x7bb, 0x5, 0x7c, 
       0x3f, 0x2, 0x7b3, 0x7bb, 0x5, 0x188, 0xc5, 0x2, 0x7b4, 0x7b5, 0x7, 
       0x6e, 0x2, 0x2, 0x7b5, 0x7b6, 0x7, 0x24, 0x2, 0x2, 0x7b6, 0x7bb, 
       0x7, 0x8b, 0x2, 0x2, 0x7b7, 0x7b8, 0x7, 0x6e, 0x2, 0x2, 0x7b8, 0x7b9, 
       0x7, 0x25, 0x2, 0x2, 0x7b9, 0x7bb, 0x7, 0x8b, 0x2, 0x2, 0x7ba, 0x7b0, 
       0x3, 0x2, 0x2, 0x2, 0x7ba, 0x7b3, 0x3, 0x2, 0x2, 0x2, 0x7ba, 0x7b4, 
       0x3, 0x2, 0x2, 0x2, 0x7ba, 0x7b7, 0x3, 0x2, 0x2, 0x2, 0x7bb, 0x12b, 
       0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7c2, 0x5, 0x12e, 0x98, 0x2, 0x7bd, 0x7be, 
       0x7, 0x5e, 0x2, 0x2, 0x7be, 0x7bf, 0x5, 0x3a, 0x1e, 0x2, 0x7bf, 0x7c0, 
       0x7, 0x5f, 0x2, 0x2, 0x7c0, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7c1, 0x7bc, 
       0x3, 0x2, 0x2, 0x2, 0x7c1, 0x7bd, 0x3, 0x2, 0x2, 0x2, 0x7c2, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0x7c3, 0x7c4, 0x7, 0x6e, 0x2, 0x2, 0x7c4, 0x7c7, 
       0x5, 0x130, 0x99, 0x2, 0x7c5, 0x7c7, 0x5, 0x134, 0x9b, 0x2, 0x7c6, 
       0x7c3, 0x3, 0x2, 0x2, 0x2, 0x7c6, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x7c7, 
       0x12f, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7cb, 0x5, 0x6e, 0x38, 0x2, 0x7c9, 
       0x7cb, 0x5, 0x134, 0x9b, 0x2, 0x7ca, 0x7c8, 0x3, 0x2, 0x2, 0x2, 0x7ca, 
       0x7c9, 0x3, 0x2, 0x2, 0x2, 0x7cb, 0x131, 0x3, 0x2, 0x2, 0x2, 0x7cc, 
       0x7cd, 0x8, 0x9a, 0x1, 0x2, 0x7cd, 0x7cf, 0x5, 0x130, 0x99, 0x2, 
       0x7ce, 0x7d0, 0x7, 0x8e, 0x2, 0x2, 0x7cf, 0x7ce, 0x3, 0x2, 0x2, 0x2, 
       0x7cf, 0x7d0, 0x3, 0x2, 0x2, 0x2, 0x7d0, 0x7d9, 0x3, 0x2, 0x2, 0x2, 
       0x7d1, 0x7d2, 0xc, 0x3, 0x2, 0x2, 0x7d2, 0x7d3, 0x7, 0x85, 0x2, 0x2, 
       0x7d3, 0x7d5, 0x5, 0x130, 0x99, 0x2, 0x7d4, 0x7d6, 0x7, 0x8e, 0x2, 
       0x2, 0x7d5, 0x7d4, 0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d6, 0x3, 0x2, 0x2, 
       0x2, 0x7d6, 0x7d8, 0x3, 0x2, 0x2, 0x2, 0x7d7, 0x7d1, 0x3, 0x2, 0x2, 
       0x2, 0x7d8, 0x7db, 0x3, 0x2, 0x2, 0x2, 0x7d9, 0x7d7, 0x3, 0x2, 0x2, 
       0x2, 0x7d9, 0x7da, 0x3, 0x2, 0x2, 0x2, 0x7da, 0x133, 0x3, 0x2, 0x2, 
       0x2, 0x7db, 0x7d9, 0x3, 0x2, 0x2, 0x2, 0x7dc, 0x7dd, 0x7, 0x62, 0x2, 
       0x2, 0x7dd, 0x7df, 0x5, 0x132, 0x9a, 0x2, 0x7de, 0x7e0, 0x7, 0x85, 
       0x2, 0x2, 0x7df, 0x7de, 0x3, 0x2, 0x2, 0x2, 0x7df, 0x7e0, 0x3, 0x2, 
       0x2, 0x2, 0x7e0, 0x7e1, 0x3, 0x2, 0x2, 0x2, 0x7e1, 0x7e2, 0x7, 0x63, 
       0x2, 0x2, 0x7e2, 0x7e6, 0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7e4, 0x7, 0x62, 
       0x2, 0x2, 0x7e4, 0x7e6, 0x7, 0x63, 0x2, 0x2, 0x7e5, 0x7dc, 0x3, 0x2, 
       0x2, 0x2, 0x7e5, 0x7e3, 0x3, 0x2, 0x2, 0x2, 0x7e6, 0x135, 0x3, 0x2, 
       0x2, 0x2, 0x7e7, 0x7ea, 0x7, 0x8f, 0x2, 0x2, 0x7e8, 0x7ea, 0x5, 0x176, 
       0xbc, 0x2, 0x7e9, 0x7e7, 0x3, 0x2, 0x2, 0x2, 0x7e9, 0x7e8, 0x3, 0x2, 
       0x2, 0x2, 0x7ea, 0x137, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7ec, 0x5, 0x13a, 
       0x9e, 0x2, 0x7ec, 0x7ee, 0x7, 0x62, 0x2, 0x2, 0x7ed, 0x7ef, 0x5, 
       0x142, 0xa2, 0x2, 0x7ee, 0x7ed, 0x3, 0x2, 0x2, 0x2, 0x7ee, 0x7ef, 
       0x3, 0x2, 0x2, 0x2, 0x7ef, 0x7f0, 0x3, 0x2, 0x2, 0x2, 0x7f0, 0x7f1, 
       0x7, 0x63, 0x2, 0x2, 0x7f1, 0x139, 0x3, 0x2, 0x2, 0x2, 0x7f2, 0x7f4, 
       0x5, 0x140, 0xa1, 0x2, 0x7f3, 0x7f5, 0x5, 0xe8, 0x75, 0x2, 0x7f4, 
       0x7f3, 0x3, 0x2, 0x2, 0x2, 0x7f4, 0x7f5, 0x3, 0x2, 0x2, 0x2, 0x7f5, 
       0x7f6, 0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7f8, 0x5, 0x13c, 0x9f, 0x2, 0x7f7, 
       0x7f9, 0x5, 0x13e, 0xa0, 0x2, 0x7f8, 0x7f7, 0x3, 0x2, 0x2, 0x2, 0x7f8, 
       0x7f9, 0x3, 0x2, 0x2, 0x2, 0x7f9, 0x7fb, 0x3, 0x2, 0x2, 0x2, 0x7fa, 
       0x7fc, 0x5, 0x150, 0xa9, 0x2, 0x7fb, 0x7fa, 0x3, 0x2, 0x2, 0x2, 0x7fb, 
       0x7fc, 0x3, 0x2, 0x2, 0x2, 0x7fc, 0x805, 0x3, 0x2, 0x2, 0x2, 0x7fd, 
       0x7ff, 0x5, 0x140, 0xa1, 0x2, 0x7fe, 0x800, 0x5, 0xe8, 0x75, 0x2, 
       0x7ff, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x7ff, 0x800, 0x3, 0x2, 0x2, 0x2, 
       0x800, 0x802, 0x3, 0x2, 0x2, 0x2, 0x801, 0x803, 0x5, 0x150, 0xa9, 
       0x2, 0x802, 0x801, 0x3, 0x2, 0x2, 0x2, 0x802, 0x803, 0x3, 0x2, 0x2, 
       0x2, 0x803, 0x805, 0x3, 0x2, 0x2, 0x2, 0x804, 0x7f2, 0x3, 0x2, 0x2, 
       0x2, 0x804, 0x7fd, 0x3, 0x2, 0x2, 0x2, 0x805, 0x13b, 0x3, 0x2, 0x2, 
       0x2, 0x806, 0x808, 0x5, 0x20, 0x11, 0x2, 0x807, 0x806, 0x3, 0x2, 
       0x2, 0x2, 0x807, 0x808, 0x3, 0x2, 0x2, 0x2, 0x808, 0x809, 0x3, 0x2, 
       0x2, 0x2, 0x809, 0x80a, 0x5, 0x136, 0x9c, 0x2, 0x80a, 0x13d, 0x3, 
       0x2, 0x2, 0x2, 0x80b, 0x80c, 0x7, 0x2f, 0x2, 0x2, 0x80c, 0x13f, 0x3, 
       0x2, 0x2, 0x2, 0x80d, 0x80e, 0x9, 0xa, 0x2, 0x2, 0x80e, 0x141, 0x3, 
       0x2, 0x2, 0x2, 0x80f, 0x811, 0x5, 0x144, 0xa3, 0x2, 0x810, 0x812, 
       0x5, 0x142, 0xa2, 0x2, 0x811, 0x810, 0x3, 0x2, 0x2, 0x2, 0x811, 0x812, 
       0x3, 0x2, 0x2, 0x2, 0x812, 0x819, 0x3, 0x2, 0x2, 0x2, 0x813, 0x814, 
       0x5, 0x15a, 0xae, 0x2, 0x814, 0x816, 0x7, 0x89, 0x2, 0x2, 0x815, 
       0x817, 0x5, 0x142, 0xa2, 0x2, 0x816, 0x815, 0x3, 0x2, 0x2, 0x2, 0x816, 
       0x817, 0x3, 0x2, 0x2, 0x2, 0x817, 0x819, 0x3, 0x2, 0x2, 0x2, 0x818, 
       0x80f, 0x3, 0x2, 0x2, 0x2, 0x818, 0x813, 0x3, 0x2, 0x2, 0x2, 0x819, 
       0x143, 0x3, 0x2, 0x2, 0x2, 0x81a, 0x81c, 0x5, 0xe8, 0x75, 0x2, 0x81b, 
       0x81a, 0x3, 0x2, 0x2, 0x2, 0x81b, 0x81c, 0x3, 0x2, 0x2, 0x2, 0x81c, 
       0x81e, 0x3, 0x2, 0x2, 0x2, 0x81d, 0x81f, 0x5, 0xa2, 0x52, 0x2, 0x81e, 
       0x81d, 0x3, 0x2, 0x2, 0x2, 0x81e, 0x81f, 0x3, 0x2, 0x2, 0x2, 0x81f, 
       0x821, 0x3, 0x2, 0x2, 0x2, 0x820, 0x822, 0x5, 0x146, 0xa4, 0x2, 0x821, 
       0x820, 0x3, 0x2, 0x2, 0x2, 0x821, 0x822, 0x3, 0x2, 0x2, 0x2, 0x822, 
       0x823, 0x3, 0x2, 0x2, 0x2, 0x823, 0x82b, 0x7, 0x8b, 0x2, 0x2, 0x824, 
       0x82b, 0x5, 0x128, 0x95, 0x2, 0x825, 0x82b, 0x5, 0xe0, 0x71, 0x2, 
       0x826, 0x82b, 0x5, 0x9a, 0x4e, 0x2, 0x827, 0x82b, 0x5, 0x16e, 0xb8, 
       0x2, 0x828, 0x82b, 0x5, 0x96, 0x4c, 0x2, 0x829, 0x82b, 0x5, 0x9c, 
       0x4f, 0x2, 0x82a, 0x81b, 0x3, 0x2, 0x2, 0x2, 0x82a, 0x824, 0x3, 0x2, 
       0x2, 0x2, 0x82a, 0x825, 0x3, 0x2, 0x2, 0x2, 0x82a, 0x826, 0x3, 0x2, 
       0x2, 0x2, 0x82a, 0x827, 0x3, 0x2, 0x2, 0x2, 0x82a, 0x828, 0x3, 0x2, 
       0x2, 0x2, 0x82a, 0x829, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x145, 0x3, 0x2, 
       0x2, 0x2, 0x82c, 0x82d, 0x8, 0xa4, 0x1, 0x2, 0x82d, 0x82e, 0x5, 0x148, 
       0xa5, 0x2, 0x82e, 0x834, 0x3, 0x2, 0x2, 0x2, 0x82f, 0x830, 0xc, 0x3, 
       0x2, 0x2, 0x830, 0x831, 0x7, 0x85, 0x2, 0x2, 0x831, 0x833, 0x5, 0x148, 
       0xa5, 0x2, 0x832, 0x82f, 0x3, 0x2, 0x2, 0x2, 0x833, 0x836, 0x3, 0x2, 
       0x2, 0x2, 0x834, 0x832, 0x3, 0x2, 0x2, 0x2, 0x834, 0x835, 0x3, 0x2, 
       0x2, 0x2, 0x835, 0x147, 0x3, 0x2, 0x2, 0x2, 0x836, 0x834, 0x3, 0x2, 
       0x2, 0x2, 0x837, 0x839, 0x5, 0x102, 0x82, 0x2, 0x838, 0x83a, 0x5, 
       0x14a, 0xa6, 0x2, 0x839, 0x838, 0x3, 0x2, 0x2, 0x2, 0x839, 0x83a, 
       0x3, 0x2, 0x2, 0x2, 0x83a, 0x83c, 0x3, 0x2, 0x2, 0x2, 0x83b, 0x83d, 
       0x5, 0x14e, 0xa8, 0x2, 0x83c, 0x83b, 0x3, 0x2, 0x2, 0x2, 0x83c, 0x83d, 
       0x3, 0x2, 0x2, 0x2, 0x83d, 0x84b, 0x3, 0x2, 0x2, 0x2, 0x83e, 0x840, 
       0x5, 0x102, 0x82, 0x2, 0x83f, 0x841, 0x5, 0x12e, 0x98, 0x2, 0x840, 
       0x83f, 0x3, 0x2, 0x2, 0x2, 0x840, 0x841, 0x3, 0x2, 0x2, 0x2, 0x841, 
       0x84b, 0x3, 0x2, 0x2, 0x2, 0x842, 0x844, 0x7, 0x8f, 0x2, 0x2, 0x843, 
       0x842, 0x3, 0x2, 0x2, 0x2, 0x843, 0x844, 0x3, 0x2, 0x2, 0x2, 0x844, 
       0x846, 0x3, 0x2, 0x2, 0x2, 0x845, 0x847, 0x5, 0xe8, 0x75, 0x2, 0x846, 
       0x845, 0x3, 0x2, 0x2, 0x2, 0x846, 0x847, 0x3, 0x2, 0x2, 0x2, 0x847, 
       0x848, 0x3, 0x2, 0x2, 0x2, 0x848, 0x849, 0x7, 0x89, 0x2, 0x2, 0x849, 
       0x84b, 0x5, 0x74, 0x3b, 0x2, 0x84a, 0x837, 0x3, 0x2, 0x2, 0x2, 0x84a, 
       0x83e, 0x3, 0x2, 0x2, 0x2, 0x84a, 0x843, 0x3, 0x2, 0x2, 0x2, 0x84b, 
       0x149, 0x3, 0x2, 0x2, 0x2, 0x84c, 0x84d, 0x8, 0xa6, 0x1, 0x2, 0x84d, 
       0x84e, 0x5, 0x14c, 0xa7, 0x2, 0x84e, 0x853, 0x3, 0x2, 0x2, 0x2, 0x84f, 
       0x850, 0xc, 0x3, 0x2, 0x2, 0x850, 0x852, 0x5, 0x14c, 0xa7, 0x2, 0x851, 
       0x84f, 0x3, 0x2, 0x2, 0x2, 0x852, 0x855, 0x3, 0x2, 0x2, 0x2, 0x853, 
       0x851, 0x3, 0x2, 0x2, 0x2, 0x853, 0x854, 0x3, 0x2, 0x2, 0x2, 0x854, 
       0x14b, 0x3, 0x2, 0x2, 0x2, 0x855, 0x853, 0x3, 0x2, 0x2, 0x2, 0x856, 
       0x857, 0x9, 0xb, 0x2, 0x2, 0x857, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x858, 
       0x859, 0x7, 0x6e, 0x2, 0x2, 0x859, 0x85a, 0x7, 0x92, 0x2, 0x2, 0x85a, 
       0x85b, 0x8, 0xa8, 0x1, 0x2, 0x85b, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x85c, 
       0x85d, 0x7, 0x89, 0x2, 0x2, 0x85d, 0x85e, 0x5, 0x152, 0xaa, 0x2, 
       0x85e, 0x151, 0x3, 0x2, 0x2, 0x2, 0x85f, 0x860, 0x8, 0xaa, 0x1, 0x2, 
       0x860, 0x862, 0x5, 0x154, 0xab, 0x2, 0x861, 0x863, 0x7, 0x8e, 0x2, 
       0x2, 0x862, 0x861, 0x3, 0x2, 0x2, 0x2, 0x862, 0x863, 0x3, 0x2, 0x2, 
       0x2, 0x863, 0x86c, 0x3, 0x2, 0x2, 0x2, 0x864, 0x865, 0xc, 0x3, 0x2, 
       0x2, 0x865, 0x866, 0x7, 0x85, 0x2, 0x2, 0x866, 0x868, 0x5, 0x154, 
       0xab, 0x2, 0x867, 0x869, 0x7, 0x8e, 0x2, 0x2, 0x868, 0x867, 0x3, 
       0x2, 0x2, 0x2, 0x868, 0x869, 0x3, 0x2, 0x2, 0x2, 0x869, 0x86b, 0x3, 
       0x2, 0x2, 0x2, 0x86a, 0x864, 0x3, 0x2, 0x2, 0x2, 0x86b, 0x86e, 0x3, 
       0x2, 0x2, 0x2, 0x86c, 0x86a, 0x3, 0x2, 0x2, 0x2, 0x86c, 0x86d, 0x3, 
       0x2, 0x2, 0x2, 0x86d, 0x153, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x86c, 0x3, 
       0x2, 0x2, 0x2, 0x86f, 0x871, 0x5, 0xe8, 0x75, 0x2, 0x870, 0x86f, 
       0x3, 0x2, 0x2, 0x2, 0x870, 0x871, 0x3, 0x2, 0x2, 0x2, 0x871, 0x872, 
       0x3, 0x2, 0x2, 0x2, 0x872, 0x885, 0x5, 0x158, 0xad, 0x2, 0x873, 0x875, 
       0x5, 0xe8, 0x75, 0x2, 0x874, 0x873, 0x3, 0x2, 0x2, 0x2, 0x874, 0x875, 
       0x3, 0x2, 0x2, 0x2, 0x875, 0x876, 0x3, 0x2, 0x2, 0x2, 0x876, 0x878, 
       0x7, 0x59, 0x2, 0x2, 0x877, 0x879, 0x5, 0x15a, 0xae, 0x2, 0x878, 
       0x877, 0x3, 0x2, 0x2, 0x2, 0x878, 0x879, 0x3, 0x2, 0x2, 0x2, 0x879, 
       0x87a, 0x3, 0x2, 0x2, 0x2, 0x87a, 0x885, 0x5, 0x158, 0xad, 0x2, 0x87b, 
       0x87d, 0x5, 0xe8, 0x75, 0x2, 0x87c, 0x87b, 0x3, 0x2, 0x2, 0x2, 0x87c, 
       0x87d, 0x3, 0x2, 0x2, 0x2, 0x87d, 0x87e, 0x3, 0x2, 0x2, 0x2, 0x87e, 
       0x880, 0x5, 0x15a, 0xae, 0x2, 0x87f, 0x881, 0x7, 0x59, 0x2, 0x2, 
       0x880, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x880, 0x881, 0x3, 0x2, 0x2, 0x2, 
       0x881, 0x882, 0x3, 0x2, 0x2, 0x2, 0x882, 0x883, 0x5, 0x158, 0xad, 
       0x2, 0x883, 0x885, 0x3, 0x2, 0x2, 0x2, 0x884, 0x870, 0x3, 0x2, 0x2, 
       0x2, 0x884, 0x874, 0x3, 0x2, 0x2, 0x2, 0x884, 0x87c, 0x3, 0x2, 0x2, 
       0x2, 0x885, 0x155, 0x3, 0x2, 0x2, 0x2, 0x886, 0x888, 0x5, 0x20, 0x11, 
       0x2, 0x887, 0x886, 0x3, 0x2, 0x2, 0x2, 0x887, 0x888, 0x3, 0x2, 0x2, 
       0x2, 0x888, 0x889, 0x3, 0x2, 0x2, 0x2, 0x889, 0x88c, 0x5, 0x136, 
       0x9c, 0x2, 0x88a, 0x88c, 0x5, 0xb6, 0x5c, 0x2, 0x88b, 0x887, 0x3, 
       0x2, 0x2, 0x2, 0x88b, 0x88a, 0x3, 0x2, 0x2, 0x2, 0x88c, 0x157, 0x3, 
       0x2, 0x2, 0x2, 0x88d, 0x88e, 0x5, 0x156, 0xac, 0x2, 0x88e, 0x159, 
       0x3, 0x2, 0x2, 0x2, 0x88f, 0x890, 0x9, 0xc, 0x2, 0x2, 0x890, 0x15b, 
       0x3, 0x2, 0x2, 0x2, 0x891, 0x892, 0x7, 0x3d, 0x2, 0x2, 0x892, 0x893, 
       0x5, 0x15e, 0xb0, 0x2, 0x893, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x894, 0x896, 
       0x5, 0xae, 0x58, 0x2, 0x895, 0x897, 0x5, 0x160, 0xb1, 0x2, 0x896, 
       0x895, 0x3, 0x2, 0x2, 0x2, 0x896, 0x897, 0x3, 0x2, 0x2, 0x2, 0x897, 
       0x15f, 0x3, 0x2, 0x2, 0x2, 0x898, 0x89a, 0x5, 0x10c, 0x87, 0x2, 0x899, 
       0x89b, 0x5, 0x160, 0xb1, 0x2, 0x89a, 0x899, 0x3, 0x2, 0x2, 0x2, 0x89a, 
       0x89b, 0x3, 0x2, 0x2, 0x2, 0x89b, 0x161, 0x3, 0x2, 0x2, 0x2, 0x89c, 
       0x89d, 0x7, 0x89, 0x2, 0x2, 0x89d, 0x89e, 0x5, 0x164, 0xb3, 0x2, 
       0x89e, 0x163, 0x3, 0x2, 0x2, 0x2, 0x89f, 0x8a1, 0x5, 0x166, 0xb4, 
       0x2, 0x8a0, 0x8a2, 0x7, 0x8e, 0x2, 0x2, 0x8a1, 0x8a0, 0x3, 0x2, 0x2, 
       0x2, 0x8a1, 0x8a2, 0x3, 0x2, 0x2, 0x2, 0x8a2, 0x8ab, 0x3, 0x2, 0x2, 
       0x2, 0x8a3, 0x8a5, 0x5, 0x166, 0xb4, 0x2, 0x8a4, 0x8a6, 0x7, 0x8e, 
       0x2, 0x2, 0x8a5, 0x8a4, 0x3, 0x2, 0x2, 0x2, 0x8a5, 0x8a6, 0x3, 0x2, 
       0x2, 0x2, 0x8a6, 0x8a7, 0x3, 0x2, 0x2, 0x2, 0x8a7, 0x8a8, 0x7, 0x85, 
       0x2, 0x2, 0x8a8, 0x8a9, 0x5, 0x164, 0xb3, 0x2, 0x8a9, 0x8ab, 0x3, 
       0x2, 0x2, 0x2, 0x8aa, 0x89f, 0x3, 0x2, 0x2, 0x2, 0x8aa, 0x8a3, 0x3, 
       0x2, 0x2, 0x2, 0x8ab, 0x165, 0x3, 0x2, 0x2, 0x2, 0x8ac, 0x8ad, 0x5, 
       0x168, 0xb5, 0x2, 0x8ad, 0x8af, 0x7, 0x5e, 0x2, 0x2, 0x8ae, 0x8b0, 
       0x5, 0x3a, 0x1e, 0x2, 0x8af, 0x8ae, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x8b0, 
       0x3, 0x2, 0x2, 0x2, 0x8b0, 0x8b1, 0x3, 0x2, 0x2, 0x2, 0x8b1, 0x8b2, 
       0x7, 0x5f, 0x2, 0x2, 0x8b2, 0x8b7, 0x3, 0x2, 0x2, 0x2, 0x8b3, 0x8b4, 
       0x5, 0x168, 0xb5, 0x2, 0x8b4, 0x8b5, 0x5, 0x134, 0x9b, 0x2, 0x8b5, 
       0x8b7, 0x3, 0x2, 0x2, 0x2, 0x8b6, 0x8ac, 0x3, 0x2, 0x2, 0x2, 0x8b6, 
       0x8b3, 0x3, 0x2, 0x2, 0x2, 0x8b7, 0x167, 0x3, 0x2, 0x2, 0x2, 0x8b8, 
       0x8bb, 0x5, 0x156, 0xac, 0x2, 0x8b9, 0x8bb, 0x7, 0x8f, 0x2, 0x2, 
       0x8ba, 0x8b8, 0x3, 0x2, 0x2, 0x2, 0x8ba, 0x8b9, 0x3, 0x2, 0x2, 0x2, 
       0x8bb, 0x169, 0x3, 0x2, 0x2, 0x2, 0x8bc, 0x8bd, 0x7, 0x3d, 0x2, 0x2, 
       0x8bd, 0x8be, 0x5, 0x19c, 0xcf, 0x2, 0x8be, 0x16b, 0x3, 0x2, 0x2, 
       0x2, 0x8bf, 0x8c0, 0x7, 0x3d, 0x2, 0x2, 0x8c0, 0x8c1, 0x7, 0x98, 
       0x2, 0x2, 0x8c1, 0x8c5, 0x7, 0x8f, 0x2, 0x2, 0x8c2, 0x8c3, 0x7, 0x3d, 
       0x2, 0x2, 0x8c3, 0x8c5, 0x7, 0x9b, 0x2, 0x2, 0x8c4, 0x8bf, 0x3, 0x2, 
       0x2, 0x2, 0x8c4, 0x8c2, 0x3, 0x2, 0x2, 0x2, 0x8c5, 0x16d, 0x3, 0x2, 
       0x2, 0x2, 0x8c6, 0x8c7, 0x7, 0x4d, 0x2, 0x2, 0x8c7, 0x8c8, 0x7, 0x6f, 
       0x2, 0x2, 0x8c8, 0x8c9, 0x5, 0x170, 0xb9, 0x2, 0x8c9, 0x8ca, 0x7, 
       0x70, 0x2, 0x2, 0x8ca, 0x8cb, 0x5, 0x92, 0x4a, 0x2, 0x8cb, 0x16f, 
       0x3, 0x2, 0x2, 0x2, 0x8cc, 0x8cd, 0x8, 0xb9, 0x1, 0x2, 0x8cd, 0x8ce, 
       0x5, 0x172, 0xba, 0x2, 0x8ce, 0x8d4, 0x3, 0x2, 0x2, 0x2, 0x8cf, 0x8d0, 
       0xc, 0x3, 0x2, 0x2, 0x8d0, 0x8d1, 0x7, 0x85, 0x2, 0x2, 0x8d1, 0x8d3, 
       0x5, 0x172, 0xba, 0x2, 0x8d2, 0x8cf, 0x3, 0x2, 0x2, 0x2, 0x8d3, 0x8d6, 
       0x3, 0x2, 0x2, 0x2, 0x8d4, 0x8d2, 0x3, 0x2, 0x2, 0x2, 0x8d4, 0x8d5, 
       0x3, 0x2, 0x2, 0x2, 0x8d5, 0x171, 0x3, 0x2, 0x2, 0x2, 0x8d6, 0x8d4, 
       0x3, 0x2, 0x2, 0x2, 0x8d7, 0x8da, 0x5, 0x174, 0xbb, 0x2, 0x8d8, 0x8da, 
       0x5, 0x126, 0x94, 0x2, 0x8d9, 0x8d7, 0x3, 0x2, 0x2, 0x2, 0x8d9, 0x8d8, 
       0x3, 0x2, 0x2, 0x2, 0x8da, 0x173, 0x3, 0x2, 0x2, 0x2, 0x8db, 0x8dd, 
       0x7, 0x1e, 0x2, 0x2, 0x8dc, 0x8de, 0x7, 0x8e, 0x2, 0x2, 0x8dd, 0x8dc, 
       0x3, 0x2, 0x2, 0x2, 0x8dd, 0x8de, 0x3, 0x2, 0x2, 0x2, 0x8de, 0x8e0, 
       0x3, 0x2, 0x2, 0x2, 0x8df, 0x8e1, 0x7, 0x8f, 0x2, 0x2, 0x8e0, 0x8df, 
       0x3, 0x2, 0x2, 0x2, 0x8e0, 0x8e1, 0x3, 0x2, 0x2, 0x2, 0x8e1, 0x90c, 
       0x3, 0x2, 0x2, 0x2, 0x8e2, 0x8e4, 0x7, 0x1e, 0x2, 0x2, 0x8e3, 0x8e5, 
       0x7, 0x8f, 0x2, 0x2, 0x8e4, 0x8e3, 0x3, 0x2, 0x2, 0x2, 0x8e4, 0x8e5, 
       0x3, 0x2, 0x2, 0x2, 0x8e5, 0x8e6, 0x3, 0x2, 0x2, 0x2, 0x8e6, 0x8e7, 
       0x7, 0x6e, 0x2, 0x2, 0x8e7, 0x90c, 0x5, 0x116, 0x8c, 0x2, 0x8e8, 
       0x8ea, 0x7, 0x55, 0x2, 0x2, 0x8e9, 0x8eb, 0x7, 0x8e, 0x2, 0x2, 0x8ea, 
       0x8e9, 0x3, 0x2, 0x2, 0x2, 0x8ea, 0x8eb, 0x3, 0x2, 0x2, 0x2, 0x8eb, 
       0x8ed, 0x3, 0x2, 0x2, 0x2, 0x8ec, 0x8ee, 0x7, 0x8f, 0x2, 0x2, 0x8ed, 
       0x8ec, 0x3, 0x2, 0x2, 0x2, 0x8ed, 0x8ee, 0x3, 0x2, 0x2, 0x2, 0x8ee, 
       0x90c, 0x3, 0x2, 0x2, 0x2, 0x8ef, 0x8f1, 0x7, 0x55, 0x2, 0x2, 0x8f0, 
       0x8f2, 0x7, 0x8f, 0x2, 0x2, 0x8f1, 0x8f0, 0x3, 0x2, 0x2, 0x2, 0x8f1, 
       0x8f2, 0x3, 0x2, 0x2, 0x2, 0x8f2, 0x8f3, 0x3, 0x2, 0x2, 0x2, 0x8f3, 
       0x8f4, 0x7, 0x6e, 0x2, 0x2, 0x8f4, 0x90c, 0x5, 0x116, 0x8c, 0x2, 
       0x8f5, 0x8f6, 0x7, 0x4d, 0x2, 0x2, 0x8f6, 0x8f7, 0x7, 0x6f, 0x2, 
       0x2, 0x8f7, 0x8f8, 0x5, 0x170, 0xb9, 0x2, 0x8f8, 0x8f9, 0x7, 0x70, 
       0x2, 0x2, 0x8f9, 0x8fb, 0x7, 0x1e, 0x2, 0x2, 0x8fa, 0x8fc, 0x7, 0x8e, 
       0x2, 0x2, 0x8fb, 0x8fa, 0x3, 0x2, 0x2, 0x2, 0x8fb, 0x8fc, 0x3, 0x2, 
       0x2, 0x2, 0x8fc, 0x8fe, 0x3, 0x2, 0x2, 0x2, 0x8fd, 0x8ff, 0x7, 0x8f, 
       0x2, 0x2, 0x8fe, 0x8fd, 0x3, 0x2, 0x2, 0x2, 0x8fe, 0x8ff, 0x3, 0x2, 
       0x2, 0x2, 0x8ff, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x900, 0x901, 0x7, 0x4d, 
       0x2, 0x2, 0x901, 0x902, 0x7, 0x6f, 0x2, 0x2, 0x902, 0x903, 0x5, 0x170, 
       0xb9, 0x2, 0x903, 0x904, 0x7, 0x70, 0x2, 0x2, 0x904, 0x906, 0x7, 
       0x1e, 0x2, 0x2, 0x905, 0x907, 0x7, 0x8f, 0x2, 0x2, 0x906, 0x905, 
       0x3, 0x2, 0x2, 0x2, 0x906, 0x907, 0x3, 0x2, 0x2, 0x2, 0x907, 0x908, 
       0x3, 0x2, 0x2, 0x2, 0x908, 0x909, 0x7, 0x6e, 0x2, 0x2, 0x909, 0x90a, 
       0x5, 0x1a, 0xe, 0x2, 0x90a, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x90b, 0x8db, 
       0x3, 0x2, 0x2, 0x2, 0x90b, 0x8e2, 0x3, 0x2, 0x2, 0x2, 0x90b, 0x8e8, 
       0x3, 0x2, 0x2, 0x2, 0x90b, 0x8ef, 0x3, 0x2, 0x2, 0x2, 0x90b, 0x8f5, 
       0x3, 0x2, 0x2, 0x2, 0x90b, 0x900, 0x3, 0x2, 0x2, 0x2, 0x90c, 0x175, 
       0x3, 0x2, 0x2, 0x2, 0x90d, 0x90e, 0x5, 0x17a, 0xbe, 0x2, 0x90e, 0x910, 
       0x7, 0x6f, 0x2, 0x2, 0x90f, 0x911, 0x5, 0x17c, 0xbf, 0x2, 0x910, 
       0x90f, 0x3, 0x2, 0x2, 0x2, 0x910, 0x911, 0x3, 0x2, 0x2, 0x2, 0x911, 
       0x912, 0x3, 0x2, 0x2, 0x2, 0x912, 0x913, 0x7, 0x70, 0x2, 0x2, 0x913, 
       0x177, 0x3, 0x2, 0x2, 0x2, 0x914, 0x924, 0x5, 0x176, 0xbc, 0x2, 0x915, 
       0x916, 0x5, 0x16a, 0xb6, 0x2, 0x916, 0x918, 0x7, 0x6f, 0x2, 0x2, 
       0x917, 0x919, 0x5, 0x17c, 0xbf, 0x2, 0x918, 0x917, 0x3, 0x2, 0x2, 
       0x2, 0x918, 0x919, 0x3, 0x2, 0x2, 0x2, 0x919, 0x91a, 0x3, 0x2, 0x2, 
       0x2, 0x91a, 0x91b, 0x7, 0x70, 0x2, 0x2, 0x91b, 0x924, 0x3, 0x2, 0x2, 
       0x2, 0x91c, 0x91d, 0x5, 0x16c, 0xb7, 0x2, 0x91d, 0x91f, 0x7, 0x6f, 
       0x2, 0x2, 0x91e, 0x920, 0x5, 0x17c, 0xbf, 0x2, 0x91f, 0x91e, 0x3, 
       0x2, 0x2, 0x2, 0x91f, 0x920, 0x3, 0x2, 0x2, 0x2, 0x920, 0x921, 0x3, 
       0x2, 0x2, 0x2, 0x921, 0x922, 0x7, 0x70, 0x2, 0x2, 0x922, 0x924, 0x3, 
       0x2, 0x2, 0x2, 0x923, 0x914, 0x3, 0x2, 0x2, 0x2, 0x923, 0x915, 0x3, 
       0x2, 0x2, 0x2, 0x923, 0x91c, 0x3, 0x2, 0x2, 0x2, 0x924, 0x179, 0x3, 
       0x2, 0x2, 0x2, 0x925, 0x926, 0x7, 0x8f, 0x2, 0x2, 0x926, 0x17b, 0x3, 
       0x2, 0x2, 0x2, 0x927, 0x928, 0x8, 0xbf, 0x1, 0x2, 0x928, 0x92a, 0x5, 
       0x17e, 0xc0, 0x2, 0x929, 0x92b, 0x7, 0x8e, 0x2, 0x2, 0x92a, 0x929, 
       0x3, 0x2, 0x2, 0x2, 0x92a, 0x92b, 0x3, 0x2, 0x2, 0x2, 0x92b, 0x934, 
       0x3, 0x2, 0x2, 0x2, 0x92c, 0x92d, 0xc, 0x3, 0x2, 0x2, 0x92d, 0x92e, 
       0x7, 0x85, 0x2, 0x2, 0x92e, 0x930, 0x5, 0x17e, 0xc0, 0x2, 0x92f, 
       0x931, 0x7, 0x8e, 0x2, 0x2, 0x930, 0x92f, 0x3, 0x2, 0x2, 0x2, 0x930, 
       0x931, 0x3, 0x2, 0x2, 0x2, 0x931, 0x933, 0x3, 0x2, 0x2, 0x2, 0x932, 
       0x92c, 0x3, 0x2, 0x2, 0x2, 0x933, 0x936, 0x3, 0x2, 0x2, 0x2, 0x934, 
       0x932, 0x3, 0x2, 0x2, 0x2, 0x934, 0x935, 0x3, 0x2, 0x2, 0x2, 0x935, 
       0x17d, 0x3, 0x2, 0x2, 0x2, 0x936, 0x934, 0x3, 0x2, 0x2, 0x2, 0x937, 
       0x93b, 0x5, 0x116, 0x8c, 0x2, 0x938, 0x93b, 0x5, 0x74, 0x3b, 0x2, 
       0x939, 0x93b, 0x5, 0x1a, 0xe, 0x2, 0x93a, 0x937, 0x3, 0x2, 0x2, 0x2, 
       0x93a, 0x938, 0x3, 0x2, 0x2, 0x2, 0x93a, 0x939, 0x3, 0x2, 0x2, 0x2, 
       0x93b, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x93c, 0x93d, 0x7, 0x55, 0x2, 0x2, 
       0x93d, 0x93e, 0x5, 0x20, 0x11, 0x2, 0x93e, 0x93f, 0x7, 0x8f, 0x2, 
       0x2, 0x93f, 0x948, 0x3, 0x2, 0x2, 0x2, 0x940, 0x941, 0x7, 0x55, 0x2, 
       0x2, 0x941, 0x943, 0x5, 0x20, 0x11, 0x2, 0x942, 0x944, 0x7, 0x4d, 
       0x2, 0x2, 0x943, 0x942, 0x3, 0x2, 0x2, 0x2, 0x943, 0x944, 0x3, 0x2, 
       0x2, 0x2, 0x944, 0x945, 0x3, 0x2, 0x2, 0x2, 0x945, 0x946, 0x5, 0x176, 
       0xbc, 0x2, 0x946, 0x948, 0x3, 0x2, 0x2, 0x2, 0x947, 0x93c, 0x3, 0x2, 
       0x2, 0x2, 0x947, 0x940, 0x3, 0x2, 0x2, 0x2, 0x948, 0x181, 0x3, 0x2, 
       0x2, 0x2, 0x949, 0x94b, 0x7, 0x2d, 0x2, 0x2, 0x94a, 0x949, 0x3, 0x2, 
       0x2, 0x2, 0x94a, 0x94b, 0x3, 0x2, 0x2, 0x2, 0x94b, 0x94c, 0x3, 0x2, 
       0x2, 0x2, 0x94c, 0x94d, 0x7, 0x4d, 0x2, 0x2, 0x94d, 0x94e, 0x5, 0x92, 
       0x4a, 0x2, 0x94e, 0x183, 0x3, 0x2, 0x2, 0x2, 0x94f, 0x950, 0x7, 0x4d, 
       0x2, 0x2, 0x950, 0x951, 0x7, 0x6f, 0x2, 0x2, 0x951, 0x952, 0x7, 0x70, 
       0x2, 0x2, 0x952, 0x953, 0x5, 0x92, 0x4a, 0x2, 0x953, 0x185, 0x3, 
       0x2, 0x2, 0x2, 0x954, 0x955, 0x7, 0x52, 0x2, 0x2, 0x955, 0x956, 0x5, 
       0x7c, 0x3f, 0x2, 0x956, 0x957, 0x5, 0x18a, 0xc6, 0x2, 0x957, 0x187, 
       0x3, 0x2, 0x2, 0x2, 0x958, 0x95a, 0x7, 0x52, 0x2, 0x2, 0x959, 0x95b, 
       0x5, 0x162, 0xb2, 0x2, 0x95a, 0x959, 0x3, 0x2, 0x2, 0x2, 0x95a, 0x95b, 
       0x3, 0x2, 0x2, 0x2, 0x95b, 0x95c, 0x3, 0x2, 0x2, 0x2, 0x95c, 0x95d, 
       0x5, 0x7c, 0x3f, 0x2, 0x95d, 0x95e, 0x5, 0x18a, 0xc6, 0x2, 0x95e, 
       0x189, 0x3, 0x2, 0x2, 0x2, 0x95f, 0x961, 0x5, 0x18c, 0xc7, 0x2, 0x960, 
       0x962, 0x5, 0x18a, 0xc6, 0x2, 0x961, 0x960, 0x3, 0x2, 0x2, 0x2, 0x961, 
       0x962, 0x3, 0x2, 0x2, 0x2, 0x962, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x963, 
       0x964, 0x7, 0x1a, 0x2, 0x2, 0x964, 0x965, 0x7, 0x5e, 0x2, 0x2, 0x965, 
       0x966, 0x5, 0x18e, 0xc8, 0x2, 0x966, 0x967, 0x7, 0x5f, 0x2, 0x2, 
       0x967, 0x968, 0x5, 0x7c, 0x3f, 0x2, 0x968, 0x18d, 0x3, 0x2, 0x2, 
       0x2, 0x969, 0x96b, 0x5, 0xe8, 0x75, 0x2, 0x96a, 0x969, 0x3, 0x2, 
       0x2, 0x2, 0x96a, 0x96b, 0x3, 0x2, 0x2, 0x2, 0x96b, 0x96c, 0x3, 0x2, 
       0x2, 0x2, 0x96c, 0x96d, 0x5, 0xae, 0x58, 0x2, 0x96d, 0x96e, 0x5, 
       0x102, 0x82, 0x2, 0x96e, 0x978, 0x3, 0x2, 0x2, 0x2, 0x96f, 0x971, 
       0x5, 0xe8, 0x75, 0x2, 0x970, 0x96f, 0x3, 0x2, 0x2, 0x2, 0x970, 0x971, 
       0x3, 0x2, 0x2, 0x2, 0x971, 0x972, 0x3, 0x2, 0x2, 0x2, 0x972, 0x974, 
       0x5, 0xae, 0x58, 0x2, 0x973, 0x975, 0x5, 0x118, 0x8d, 0x2, 0x974, 
       0x973, 0x3, 0x2, 0x2, 0x2, 0x974, 0x975, 0x3, 0x2, 0x2, 0x2, 0x975, 
       0x978, 0x3, 0x2, 0x2, 0x2, 0x976, 0x978, 0x7, 0x8e, 0x2, 0x2, 0x977, 
       0x96a, 0x3, 0x2, 0x2, 0x2, 0x977, 0x970, 0x3, 0x2, 0x2, 0x2, 0x977, 
       0x976, 0x3, 0x2, 0x2, 0x2, 0x978, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x979, 
       0x97b, 0x7, 0x50, 0x2, 0x2, 0x97a, 0x97c, 0x5, 0x6e, 0x38, 0x2, 0x97b, 
       0x97a, 0x3, 0x2, 0x2, 0x2, 0x97b, 0x97c, 0x3, 0x2, 0x2, 0x2, 0x97c, 
       0x191, 0x3, 0x2, 0x2, 0x2, 0x97d, 0x980, 0x5, 0x194, 0xcb, 0x2, 0x97e, 
       0x980, 0x5, 0x198, 0xcd, 0x2, 0x97f, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x97f, 
       0x97e, 0x3, 0x2, 0x2, 0x2, 0x980, 0x193, 0x3, 0x2, 0x2, 0x2, 0x981, 
       0x982, 0x7, 0x50, 0x2, 0x2, 0x982, 0x984, 0x7, 0x5e, 0x2, 0x2, 0x983, 
       0x985, 0x5, 0x196, 0xcc, 0x2, 0x984, 0x983, 0x3, 0x2, 0x2, 0x2, 0x984, 
       0x985, 0x3, 0x2, 0x2, 0x2, 0x985, 0x986, 0x3, 0x2, 0x2, 0x2, 0x986, 
       0x987, 0x7, 0x5f, 0x2, 0x2, 0x987, 0x195, 0x3, 0x2, 0x2, 0x2, 0x988, 
       0x989, 0x8, 0xcc, 0x1, 0x2, 0x989, 0x98b, 0x5, 0x116, 0x8c, 0x2, 
       0x98a, 0x98c, 0x7, 0x8e, 0x2, 0x2, 0x98b, 0x98a, 0x3, 0x2, 0x2, 0x2, 
       0x98b, 0x98c, 0x3, 0x2, 0x2, 0x2, 0x98c, 0x995, 0x3, 0x2, 0x2, 0x2, 
       0x98d, 0x98e, 0xc, 0x3, 0x2, 0x2, 0x98e, 0x98f, 0x7, 0x85, 0x2, 0x2, 
       0x98f, 0x991, 0x5, 0x116, 0x8c, 0x2, 0x990, 0x992, 0x7, 0x8e, 0x2, 
       0x2, 0x991, 0x990, 0x3, 0x2, 0x2, 0x2, 0x991, 0x992, 0x3, 0x2, 0x2, 
       0x2, 0x992, 0x994, 0x3, 0x2, 0x2, 0x2, 0x993, 0x98d, 0x3, 0x2, 0x2, 
       0x2, 0x994, 0x997, 0x3, 0x2, 0x2, 0x2, 0x995, 0x993, 0x3, 0x2, 0x2, 
       0x2, 0x995, 0x996, 0x3, 0x2, 0x2, 0x2, 0x996, 0x197, 0x3, 0x2, 0x2, 
       0x2, 0x997, 0x995, 0x3, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x2, 0x2, 0x2, 0x998, 0x999, 0x7, 0x3b, 0x2, 0x2, 0x999, 0x99a, 0x7, 
       0x5e, 0x2, 0x2, 0x99a, 0x99b, 0x5, 0x74, 0x3b, 0x2, 0x99b, 0x99c, 
       0x7, 0x5f, 0x2, 0x2, 0x99c, 0x99f, 0x3, 0x2, 0x2, 0x2, 0x99d, 0x99f, 
       0x7, 0x3b, 0x2, 0x2, 0x99e, 0x998, 0x3, 0x2, 0x2, 0x2, 0x99e, 0x99d, 
       0x3, 0x2, 0x2, 0x2, 0x99f, 0x199, 0x3, 0x2, 0x2, 0x2, 0x9a0, 0x9a1, 
       0x9, 0xd, 0x2, 0x2, 0x9a1, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x9a2, 0x9d6, 
       0x7, 0x3a, 0x2, 0x2, 0x9a3, 0x9d6, 0x7, 0x25, 0x2, 0x2, 0x9a4, 0x9a5, 
       0x7, 0x3a, 0x2, 0x2, 0x9a5, 0x9a6, 0x7, 0x60, 0x2, 0x2, 0x9a6, 0x9d6, 
       0x7, 0x61, 0x2, 0x2, 0x9a7, 0x9a8, 0x7, 0x25, 0x2, 0x2, 0x9a8, 0x9a9, 
       0x7, 0x60, 0x2, 0x2, 0x9a9, 0x9d6, 0x7, 0x61, 0x2, 0x2, 0x9aa, 0x9d6, 
       0x7, 0x64, 0x2, 0x2, 0x9ab, 0x9d6, 0x7, 0x65, 0x2, 0x2, 0x9ac, 0x9d6, 
       0x7, 0x66, 0x2, 0x2, 0x9ad, 0x9d6, 0x7, 0x67, 0x2, 0x2, 0x9ae, 0x9d6, 
       0x7, 0x68, 0x2, 0x2, 0x9af, 0x9d6, 0x7, 0x69, 0x2, 0x2, 0x9b0, 0x9d6, 
       0x7, 0x6a, 0x2, 0x2, 0x9b1, 0x9d6, 0x7, 0x6b, 0x2, 0x2, 0x9b2, 0x9d6, 
       0x7, 0x6c, 0x2, 0x2, 0x9b3, 0x9d6, 0x7, 0xb, 0x2, 0x2, 0x9b4, 0x9d6, 
       0x7, 0xc, 0x2, 0x2, 0x9b5, 0x9d6, 0x7, 0x6e, 0x2, 0x2, 0x9b6, 0x9d6, 
       0x7, 0x6f, 0x2, 0x2, 0x9b7, 0x9d6, 0x7, 0x70, 0x2, 0x2, 0x9b8, 0x9d6, 
       0x7, 0x71, 0x2, 0x2, 0x9b9, 0x9d6, 0x7, 0x72, 0x2, 0x2, 0x9ba, 0x9d6, 
       0x7, 0x73, 0x2, 0x2, 0x9bb, 0x9d6, 0x7, 0x74, 0x2, 0x2, 0x9bc, 0x9d6, 
       0x7, 0x75, 0x2, 0x2, 0x9bd, 0x9d6, 0x7, 0x76, 0x2, 0x2, 0x9be, 0x9d6, 
       0x7, 0x77, 0x2, 0x2, 0x9bf, 0x9d6, 0x7, 0x78, 0x2, 0x2, 0x9c0, 0x9d6, 
       0x7, 0x79, 0x2, 0x2, 0x9c1, 0x9d6, 0x7, 0x7a, 0x2, 0x2, 0x9c2, 0x9d6, 
       0x7, 0x7c, 0x2, 0x2, 0x9c3, 0x9d6, 0x7, 0x7b, 0x2, 0x2, 0x9c4, 0x9d6, 
       0x7, 0x7d, 0x2, 0x2, 0x9c5, 0x9d6, 0x7, 0x7e, 0x2, 0x2, 0x9c6, 0x9d6, 
       0x7, 0x7f, 0x2, 0x2, 0x9c7, 0x9d6, 0x7, 0x80, 0x2, 0x2, 0x9c8, 0x9d6, 
       0x7, 0xd, 0x2, 0x2, 0x9c9, 0x9d6, 0x7, 0xe, 0x2, 0x2, 0x9ca, 0x9d6, 
       0x7, 0xf, 0x2, 0x2, 0x9cb, 0x9d6, 0x7, 0x10, 0x2, 0x2, 0x9cc, 0x9d6, 
       0x7, 0x83, 0x2, 0x2, 0x9cd, 0x9d6, 0x7, 0x84, 0x2, 0x2, 0x9ce, 0x9d6, 
       0x7, 0x85, 0x2, 0x2, 0x9cf, 0x9d6, 0x7, 0x86, 0x2, 0x2, 0x9d0, 0x9d6, 
       0x7, 0x87, 0x2, 0x2, 0x9d1, 0x9d2, 0x7, 0x5e, 0x2, 0x2, 0x9d2, 0x9d6, 
       0x7, 0x5f, 0x2, 0x2, 0x9d3, 0x9d4, 0x7, 0x60, 0x2, 0x2, 0x9d4, 0x9d6, 
       0x7, 0x61, 0x2, 0x2, 0x9d5, 0x9a2, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9a3, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9a4, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9a7, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9aa, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9ab, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9ac, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9ad, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9ae, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9af, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9b0, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9b1, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9b2, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9b3, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9b4, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9b5, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9b6, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9b7, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9b8, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9b9, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9ba, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9bb, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9bc, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9bd, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9be, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9bf, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9c0, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9c1, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9c2, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9c3, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9c4, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9c5, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9c6, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9c7, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9c8, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9c9, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9ca, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9cb, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9cc, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9cd, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9ce, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9cf, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9d0, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9d1, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9d3, 0x3, 0x2, 0x2, 0x2, 0x9d6, 0x19d, 
       0x3, 0x2, 0x2, 0x2, 0x9d7, 0x9df, 0x7, 0x90, 0x2, 0x2, 0x9d8, 0x9df, 
       0x7, 0x96, 0x2, 0x2, 0x9d9, 0x9df, 0x7, 0x97, 0x2, 0x2, 0x9da, 0x9df, 
       0x7, 0x98, 0x2, 0x2, 0x9db, 0x9df, 0x5, 0x1a0, 0xd1, 0x2, 0x9dc, 
       0x9df, 0x5, 0x1a2, 0xd2, 0x2, 0x9dd, 0x9df, 0x5, 0x1a4, 0xd3, 0x2, 
       0x9de, 0x9d7, 0x3, 0x2, 0x2, 0x2, 0x9de, 0x9d8, 0x3, 0x2, 0x2, 0x2, 
       0x9de, 0x9d9, 0x3, 0x2, 0x2, 0x2, 0x9de, 0x9da, 0x3, 0x2, 0x2, 0x2, 
       0x9de, 0x9db, 0x3, 0x2, 0x2, 0x2, 0x9de, 0x9dc, 0x3, 0x2, 0x2, 0x2, 
       0x9de, 0x9dd, 0x3, 0x2, 0x2, 0x2, 0x9df, 0x19f, 0x3, 0x2, 0x2, 0x2, 
       0x9e0, 0x9e1, 0x9, 0xe, 0x2, 0x2, 0x9e1, 0x1a1, 0x3, 0x2, 0x2, 0x2, 
       0x9e2, 0x9e3, 0x7, 0x3c, 0x2, 0x2, 0x9e3, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
       0x9e4, 0x9e5, 0x9, 0xf, 0x2, 0x2, 0x9e5, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
       0x13e, 0x1a7, 0x1bb, 0x1d1, 0x1e0, 0x1ea, 0x1ee, 0x1f9, 0x1fd, 0x20c, 
       0x213, 0x218, 0x21a, 0x21f, 0x225, 0x22f, 0x236, 0x23c, 0x240, 0x245, 
       0x24b, 0x252, 0x258, 0x25b, 0x25e, 0x261, 0x268, 0x26f, 0x2a3, 0x2b2, 
       0x2b8, 0x2be, 0x2cb, 0x2cd, 0x2d7, 0x2e6, 0x2ec, 0x30a, 0x30f, 0x313, 
       0x317, 0x31a, 0x31e, 0x324, 0x326, 0x32e, 0x332, 0x335, 0x33c, 0x343, 
       0x347, 0x34c, 0x350, 0x353, 0x358, 0x35e, 0x36b, 0x376, 0x378, 0x387, 
       0x389, 0x395, 0x397, 0x3a3, 0x3b7, 0x3b9, 0x3c5, 0x3c7, 0x3d2, 0x3dd, 
       0x3e8, 0x3f4, 0x3f6, 0x402, 0x404, 0x40e, 0x416, 0x422, 0x429, 0x42d, 
       0x431, 0x435, 0x439, 0x440, 0x443, 0x446, 0x44c, 0x454, 0x459, 0x45c, 
       0x462, 0x46d, 0x484, 0x488, 0x490, 0x496, 0x4aa, 0x4ae, 0x4bb, 0x4bf, 
       0x4c2, 0x4c9, 0x4d1, 0x4db, 0x4e6, 0x4f3, 0x4fd, 0x502, 0x509, 0x50c, 
       0x511, 0x516, 0x52b, 0x52f, 0x534, 0x53f, 0x545, 0x549, 0x54e, 0x552, 
       0x557, 0x55a, 0x570, 0x576, 0x581, 0x585, 0x588, 0x592, 0x598, 0x59b, 
       0x5a2, 0x5ac, 0x5b0, 0x5b3, 0x5b6, 0x5ba, 0x5bf, 0x5c1, 0x5c5, 0x5c9, 
       0x5d2, 0x5df, 0x5e7, 0x5ed, 0x5f3, 0x5f8, 0x601, 0x609, 0x614, 0x61a, 
       0x625, 0x628, 0x62d, 0x63c, 0x642, 0x64b, 0x655, 0x65b, 0x663, 0x667, 
       0x66b, 0x670, 0x675, 0x67c, 0x67e, 0x683, 0x687, 0x695, 0x69b, 0x6aa, 
       0x6b4, 0x6b9, 0x6c0, 0x6c6, 0x6cb, 0x6d1, 0x6d8, 0x6dc, 0x6de, 0x6e0, 
       0x6e7, 0x6ea, 0x6ed, 0x6f0, 0x6f5, 0x6f9, 0x6fc, 0x700, 0x704, 0x709, 
       0x70c, 0x70e, 0x712, 0x719, 0x71f, 0x723, 0x729, 0x72e, 0x730, 0x736, 
       0x73a, 0x740, 0x747, 0x74b, 0x74d, 0x74f, 0x756, 0x760, 0x764, 0x766, 
       0x768, 0x76c, 0x76f, 0x775, 0x77f, 0x783, 0x789, 0x791, 0x795, 0x798, 
       0x79c, 0x7a1, 0x7a4, 0x7a7, 0x7ab, 0x7b0, 0x7ba, 0x7c1, 0x7c6, 0x7ca, 
       0x7cf, 0x7d5, 0x7d9, 0x7df, 0x7e5, 0x7e9, 0x7ee, 0x7f4, 0x7f8, 0x7fb, 
       0x7ff, 0x802, 0x804, 0x807, 0x811, 0x816, 0x818, 0x81b, 0x81e, 0x821, 
       0x82a, 0x834, 0x839, 0x83c, 0x840, 0x843, 0x846, 0x84a, 0x853, 0x862, 
       0x868, 0x86c, 0x870, 0x874, 0x878, 0x87c, 0x880, 0x884, 0x887, 0x88b, 
       0x896, 0x89a, 0x8a1, 0x8a5, 0x8aa, 0x8af, 0x8b6, 0x8ba, 0x8c4, 0x8d4, 
       0x8d9, 0x8dd, 0x8e0, 0x8e4, 0x8ea, 0x8ed, 0x8f1, 0x8fb, 0x8fe, 0x906, 
       0x90b, 0x910, 0x918, 0x91f, 0x923, 0x92a, 0x930, 0x934, 0x93a, 0x943, 
       0x947, 0x94a, 0x95a, 0x961, 0x96a, 0x970, 0x974, 0x977, 0x97b, 0x97f, 
       0x984, 0x98b, 0x991, 0x995, 0x99e, 0x9d5, 0x9de, 
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
