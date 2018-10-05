/* parser/listener/visitor header section */

// Generated from /Users/jason/Projects/java/bioscriptgrammar/grammar/BSParser.g4 by ANTLR 4.7

/* parser precinclude section */

#include "BSParserListener.h"
#include "BSParserVisitor.h"

#include "BSParser.h"


using namespace antlrcpp;
using namespace antlr4;

BSParser::BSParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

BSParser::~BSParser() {
  delete _interpreter;
}

std::string BSParser::getGrammarFileName() const {
  return "BSParser.g4";
}

const std::vector<std::string>& BSParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& BSParser::getVocabulary() const {
  return _vocabulary;
}

/* parser definitions section */

//----------------- ProgramContext ------------------------------------------------------------------

BSParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BSParser::ModuleDeclarationContext* BSParser::ProgramContext::moduleDeclaration() {
  return getRuleContext<BSParser::ModuleDeclarationContext>(0);
}

BSParser::StationaryDeclarationContext* BSParser::ProgramContext::stationaryDeclaration() {
  return getRuleContext<BSParser::StationaryDeclarationContext>(0);
}

BSParser::ManifestDeclarationContext* BSParser::ProgramContext::manifestDeclaration() {
  return getRuleContext<BSParser::ManifestDeclarationContext>(0);
}

tree::TerminalNode* BSParser::ProgramContext::FUNCTIONS() {
  return getToken(BSParser::FUNCTIONS, 0);
}

std::vector<tree::TerminalNode *> BSParser::ProgramContext::COLON() {
  return getTokens(BSParser::COLON);
}

tree::TerminalNode* BSParser::ProgramContext::COLON(size_t i) {
  return getToken(BSParser::COLON, i);
}

tree::TerminalNode* BSParser::ProgramContext::INSTRUCTIONS() {
  return getToken(BSParser::INSTRUCTIONS, 0);
}

tree::TerminalNode* BSParser::ProgramContext::EOF() {
  return getToken(BSParser::EOF, 0);
}

std::vector<BSParser::FunctionDeclarationContext *> BSParser::ProgramContext::functionDeclaration() {
  return getRuleContexts<BSParser::FunctionDeclarationContext>();
}

BSParser::FunctionDeclarationContext* BSParser::ProgramContext::functionDeclaration(size_t i) {
  return getRuleContext<BSParser::FunctionDeclarationContext>(i);
}

std::vector<BSParser::StatementsContext *> BSParser::ProgramContext::statements() {
  return getRuleContexts<BSParser::StatementsContext>();
}

BSParser::StatementsContext* BSParser::ProgramContext::statements(size_t i) {
  return getRuleContext<BSParser::StatementsContext>(i);
}


size_t BSParser::ProgramContext::getRuleIndex() const {
  return BSParser::RuleProgram;
}

void BSParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void BSParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any BSParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

BSParser::ProgramContext* BSParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, BSParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    moduleDeclaration();
    setState(77);
    stationaryDeclaration();
    setState(78);
    manifestDeclaration();
    setState(79);
    match(BSParser::FUNCTIONS);
    setState(80);
    match(BSParser::COLON);
    setState(84);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSParser::FUNCTION) {
      setState(81);
      functionDeclaration();
      setState(86);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(87);
    match(BSParser::INSTRUCTIONS);
    setState(88);
    match(BSParser::COLON);
    setState(92);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BSParser::IF)
      | (1ULL << BSParser::REPEAT)
      | (1ULL << BSParser::WHILE)
      | (1ULL << BSParser::HEAT)
      | (1ULL << BSParser::DRAIN)
      | (1ULL << BSParser::DISPOSE)
      | (1ULL << BSParser::IDENTIFIER)
      | (1ULL << BSParser::LBRACKET))) != 0)) {
      setState(89);
      statements();
      setState(94);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(95);
    match(BSParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleDeclarationContext ------------------------------------------------------------------

BSParser::ModuleDeclarationContext::ModuleDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BSParser::ModuleDeclarationContext::MODULE() {
  return getTokens(BSParser::MODULE);
}

tree::TerminalNode* BSParser::ModuleDeclarationContext::MODULE(size_t i) {
  return getToken(BSParser::MODULE, i);
}

std::vector<tree::TerminalNode *> BSParser::ModuleDeclarationContext::IDENTIFIER() {
  return getTokens(BSParser::IDENTIFIER);
}

tree::TerminalNode* BSParser::ModuleDeclarationContext::IDENTIFIER(size_t i) {
  return getToken(BSParser::IDENTIFIER, i);
}


size_t BSParser::ModuleDeclarationContext::getRuleIndex() const {
  return BSParser::RuleModuleDeclaration;
}

void BSParser::ModuleDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleDeclaration(this);
}

void BSParser::ModuleDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleDeclaration(this);
}


antlrcpp::Any BSParser::ModuleDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitModuleDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BSParser::ModuleDeclarationContext* BSParser::moduleDeclaration() {
  ModuleDeclarationContext *_localctx = _tracker.createInstance<ModuleDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, BSParser::RuleModuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSParser::MODULE) {
      setState(97);
      match(BSParser::MODULE);
      setState(98);
      match(BSParser::IDENTIFIER);
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ManifestDeclarationContext ------------------------------------------------------------------

BSParser::ManifestDeclarationContext::ManifestDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BSParser::ManifestDeclarationContext::MANIFEST() {
  return getTokens(BSParser::MANIFEST);
}

tree::TerminalNode* BSParser::ManifestDeclarationContext::MANIFEST(size_t i) {
  return getToken(BSParser::MANIFEST, i);
}

std::vector<tree::TerminalNode *> BSParser::ManifestDeclarationContext::IDENTIFIER() {
  return getTokens(BSParser::IDENTIFIER);
}

tree::TerminalNode* BSParser::ManifestDeclarationContext::IDENTIFIER(size_t i) {
  return getToken(BSParser::IDENTIFIER, i);
}


size_t BSParser::ManifestDeclarationContext::getRuleIndex() const {
  return BSParser::RuleManifestDeclaration;
}

void BSParser::ManifestDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterManifestDeclaration(this);
}

void BSParser::ManifestDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitManifestDeclaration(this);
}


antlrcpp::Any BSParser::ManifestDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitManifestDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BSParser::ManifestDeclarationContext* BSParser::manifestDeclaration() {
  ManifestDeclarationContext *_localctx = _tracker.createInstance<ManifestDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, BSParser::RuleManifestDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(104);
      match(BSParser::MANIFEST);
      setState(105);
      match(BSParser::IDENTIFIER);
      setState(108); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BSParser::MANIFEST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StationaryDeclarationContext ------------------------------------------------------------------

BSParser::StationaryDeclarationContext::StationaryDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BSParser::StationaryDeclarationContext::STATIONARY() {
  return getTokens(BSParser::STATIONARY);
}

tree::TerminalNode* BSParser::StationaryDeclarationContext::STATIONARY(size_t i) {
  return getToken(BSParser::STATIONARY, i);
}

std::vector<tree::TerminalNode *> BSParser::StationaryDeclarationContext::IDENTIFIER() {
  return getTokens(BSParser::IDENTIFIER);
}

tree::TerminalNode* BSParser::StationaryDeclarationContext::IDENTIFIER(size_t i) {
  return getToken(BSParser::IDENTIFIER, i);
}


size_t BSParser::StationaryDeclarationContext::getRuleIndex() const {
  return BSParser::RuleStationaryDeclaration;
}

void BSParser::StationaryDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStationaryDeclaration(this);
}

void BSParser::StationaryDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStationaryDeclaration(this);
}


antlrcpp::Any BSParser::StationaryDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitStationaryDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BSParser::StationaryDeclarationContext* BSParser::stationaryDeclaration() {
  StationaryDeclarationContext *_localctx = _tracker.createInstance<StationaryDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, BSParser::RuleStationaryDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSParser::STATIONARY) {
      setState(110);
      match(BSParser::STATIONARY);
      setState(111);
      match(BSParser::IDENTIFIER);
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

BSParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::FunctionDeclarationContext::FUNCTION() {
  return getToken(BSParser::FUNCTION, 0);
}

tree::TerminalNode* BSParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}

BSParser::FormalParametersContext* BSParser::FunctionDeclarationContext::formalParameters() {
  return getRuleContext<BSParser::FormalParametersContext>(0);
}

tree::TerminalNode* BSParser::FunctionDeclarationContext::LBRACE() {
  return getToken(BSParser::LBRACE, 0);
}

BSParser::ReturnStatementContext* BSParser::FunctionDeclarationContext::returnStatement() {
  return getRuleContext<BSParser::ReturnStatementContext>(0);
}

tree::TerminalNode* BSParser::FunctionDeclarationContext::RBRACE() {
  return getToken(BSParser::RBRACE, 0);
}

BSParser::FunctionTypingContext* BSParser::FunctionDeclarationContext::functionTyping() {
  return getRuleContext<BSParser::FunctionTypingContext>(0);
}

std::vector<BSParser::StatementsContext *> BSParser::FunctionDeclarationContext::statements() {
  return getRuleContexts<BSParser::StatementsContext>();
}

BSParser::StatementsContext* BSParser::FunctionDeclarationContext::statements(size_t i) {
  return getRuleContext<BSParser::StatementsContext>(i);
}


size_t BSParser::FunctionDeclarationContext::getRuleIndex() const {
  return BSParser::RuleFunctionDeclaration;
}

void BSParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void BSParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any BSParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BSParser::FunctionDeclarationContext* BSParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, BSParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(BSParser::FUNCTION);
    setState(118);
    match(BSParser::IDENTIFIER);
    setState(119);
    formalParameters();
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSParser::COLON) {
      setState(120);
      functionTyping();
    }
    setState(123);
    match(BSParser::LBRACE);
    setState(125); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(124);
      statements();
      setState(127); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BSParser::IF)
      | (1ULL << BSParser::REPEAT)
      | (1ULL << BSParser::WHILE)
      | (1ULL << BSParser::HEAT)
      | (1ULL << BSParser::DRAIN)
      | (1ULL << BSParser::DISPOSE)
      | (1ULL << BSParser::IDENTIFIER)
      | (1ULL << BSParser::LBRACKET))) != 0));
    setState(129);
    returnStatement();
    setState(130);
    match(BSParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParametersContext ------------------------------------------------------------------

BSParser::FormalParametersContext::FormalParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::FormalParametersContext::LPAREN() {
  return getToken(BSParser::LPAREN, 0);
}

tree::TerminalNode* BSParser::FormalParametersContext::RPAREN() {
  return getToken(BSParser::RPAREN, 0);
}

BSParser::FormalParameterListContext* BSParser::FormalParametersContext::formalParameterList() {
  return getRuleContext<BSParser::FormalParameterListContext>(0);
}


size_t BSParser::FormalParametersContext::getRuleIndex() const {
  return BSParser::RuleFormalParameters;
}

void BSParser::FormalParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameters(this);
}

void BSParser::FormalParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameters(this);
}


antlrcpp::Any BSParser::FormalParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameters(this);
  else
    return visitor->visitChildren(this);
}

BSParser::FormalParametersContext* BSParser::formalParameters() {
  FormalParametersContext *_localctx = _tracker.createInstance<FormalParametersContext>(_ctx, getState());
  enterRule(_localctx, 10, BSParser::RuleFormalParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(BSParser::LPAREN);
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSParser::IDENTIFIER

    || _la == BSParser::LBRACKET) {
      setState(133);
      formalParameterList();
    }
    setState(136);
    match(BSParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

BSParser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BSParser::FormalParameterContext *> BSParser::FormalParameterListContext::formalParameter() {
  return getRuleContexts<BSParser::FormalParameterContext>();
}

BSParser::FormalParameterContext* BSParser::FormalParameterListContext::formalParameter(size_t i) {
  return getRuleContext<BSParser::FormalParameterContext>(i);
}

std::vector<tree::TerminalNode *> BSParser::FormalParameterListContext::COMMA() {
  return getTokens(BSParser::COMMA);
}

tree::TerminalNode* BSParser::FormalParameterListContext::COMMA(size_t i) {
  return getToken(BSParser::COMMA, i);
}


size_t BSParser::FormalParameterListContext::getRuleIndex() const {
  return BSParser::RuleFormalParameterList;
}

void BSParser::FormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterList(this);
}

void BSParser::FormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterList(this);
}


antlrcpp::Any BSParser::FormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

BSParser::FormalParameterListContext* BSParser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 12, BSParser::RuleFormalParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    formalParameter();
    setState(143);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSParser::COMMA) {
      setState(139);
      match(BSParser::COMMA);
      setState(140);
      formalParameter();
      setState(145);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterContext ------------------------------------------------------------------

BSParser::FormalParameterContext::FormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::FormalParameterContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}

BSParser::UnionTypeContext* BSParser::FormalParameterContext::unionType() {
  return getRuleContext<BSParser::UnionTypeContext>(0);
}

tree::TerminalNode* BSParser::FormalParameterContext::LBRACKET() {
  return getToken(BSParser::LBRACKET, 0);
}

tree::TerminalNode* BSParser::FormalParameterContext::RBRACKET() {
  return getToken(BSParser::RBRACKET, 0);
}


size_t BSParser::FormalParameterContext::getRuleIndex() const {
  return BSParser::RuleFormalParameter;
}

void BSParser::FormalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameter(this);
}

void BSParser::FormalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameter(this);
}


antlrcpp::Any BSParser::FormalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameter(this);
  else
    return visitor->visitChildren(this);
}

BSParser::FormalParameterContext* BSParser::formalParameter() {
  FormalParameterContext *_localctx = _tracker.createInstance<FormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 14, BSParser::RuleFormalParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSParser::LBRACKET) {
      setState(146);
      unionType();
    }
    setState(149);
    match(BSParser::IDENTIFIER);
    setState(152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSParser::LBRACKET) {
      setState(150);
      match(BSParser::LBRACKET);
      setState(151);
      match(BSParser::RBRACKET);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTypingContext ------------------------------------------------------------------

BSParser::FunctionTypingContext::FunctionTypingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::FunctionTypingContext::COLON() {
  return getToken(BSParser::COLON, 0);
}

BSParser::UnionTypeContext* BSParser::FunctionTypingContext::unionType() {
  return getRuleContext<BSParser::UnionTypeContext>(0);
}


size_t BSParser::FunctionTypingContext::getRuleIndex() const {
  return BSParser::RuleFunctionTyping;
}

void BSParser::FunctionTypingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionTyping(this);
}

void BSParser::FunctionTypingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionTyping(this);
}


antlrcpp::Any BSParser::FunctionTypingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitFunctionTyping(this);
  else
    return visitor->visitChildren(this);
}

BSParser::FunctionTypingContext* BSParser::functionTyping() {
  FunctionTypingContext *_localctx = _tracker.createInstance<FunctionTypingContext>(_ctx, getState());
  enterRule(_localctx, 16, BSParser::RuleFunctionTyping);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(BSParser::COLON);
    setState(155);
    unionType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

BSParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::ReturnStatementContext::RETURN() {
  return getToken(BSParser::RETURN, 0);
}

tree::TerminalNode* BSParser::ReturnStatementContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}

BSParser::MethodCallContext* BSParser::ReturnStatementContext::methodCall() {
  return getRuleContext<BSParser::MethodCallContext>(0);
}


size_t BSParser::ReturnStatementContext::getRuleIndex() const {
  return BSParser::RuleReturnStatement;
}

void BSParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void BSParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any BSParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

BSParser::ReturnStatementContext* BSParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, BSParser::RuleReturnStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(157);
      match(BSParser::RETURN);
      setState(158);
      match(BSParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(159);
      match(BSParser::RETURN);
      setState(160);
      methodCall();
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

//----------------- BlockStatementContext ------------------------------------------------------------------

BSParser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::BlockStatementContext::LBRACE() {
  return getToken(BSParser::LBRACE, 0);
}

tree::TerminalNode* BSParser::BlockStatementContext::RBRACE() {
  return getToken(BSParser::RBRACE, 0);
}

std::vector<BSParser::StatementsContext *> BSParser::BlockStatementContext::statements() {
  return getRuleContexts<BSParser::StatementsContext>();
}

BSParser::StatementsContext* BSParser::BlockStatementContext::statements(size_t i) {
  return getRuleContext<BSParser::StatementsContext>(i);
}


size_t BSParser::BlockStatementContext::getRuleIndex() const {
  return BSParser::RuleBlockStatement;
}

void BSParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}

void BSParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}


antlrcpp::Any BSParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

BSParser::BlockStatementContext* BSParser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, BSParser::RuleBlockStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(BSParser::LBRACE);
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BSParser::IF)
      | (1ULL << BSParser::REPEAT)
      | (1ULL << BSParser::WHILE)
      | (1ULL << BSParser::HEAT)
      | (1ULL << BSParser::DRAIN)
      | (1ULL << BSParser::DISPOSE)
      | (1ULL << BSParser::IDENTIFIER)
      | (1ULL << BSParser::LBRACKET))) != 0)) {
      setState(164);
      statements();
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(170);
    match(BSParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MaterialAssignmentOperationsContext ------------------------------------------------------------------

BSParser::MaterialAssignmentOperationsContext::MaterialAssignmentOperationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BSParser::MixContext* BSParser::MaterialAssignmentOperationsContext::mix() {
  return getRuleContext<BSParser::MixContext>(0);
}

BSParser::DispenseContext* BSParser::MaterialAssignmentOperationsContext::dispense() {
  return getRuleContext<BSParser::DispenseContext>(0);
}

BSParser::SplitContext* BSParser::MaterialAssignmentOperationsContext::split() {
  return getRuleContext<BSParser::SplitContext>(0);
}

BSParser::MethodCallContext* BSParser::MaterialAssignmentOperationsContext::methodCall() {
  return getRuleContext<BSParser::MethodCallContext>(0);
}


size_t BSParser::MaterialAssignmentOperationsContext::getRuleIndex() const {
  return BSParser::RuleMaterialAssignmentOperations;
}

void BSParser::MaterialAssignmentOperationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaterialAssignmentOperations(this);
}

void BSParser::MaterialAssignmentOperationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaterialAssignmentOperations(this);
}


antlrcpp::Any BSParser::MaterialAssignmentOperationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitMaterialAssignmentOperations(this);
  else
    return visitor->visitChildren(this);
}

BSParser::MaterialAssignmentOperationsContext* BSParser::materialAssignmentOperations() {
  MaterialAssignmentOperationsContext *_localctx = _tracker.createInstance<MaterialAssignmentOperationsContext>(_ctx, getState());
  enterRule(_localctx, 22, BSParser::RuleMaterialAssignmentOperations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSParser::MIX: {
        enterOuterAlt(_localctx, 1);
        setState(172);
        mix();
        break;
      }

      case BSParser::DISPENSE: {
        enterOuterAlt(_localctx, 2);
        setState(173);
        dispense();
        break;
      }

      case BSParser::SPLIT: {
        enterOuterAlt(_localctx, 3);
        setState(174);
        split();
        break;
      }

      case BSParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 4);
        setState(175);
        methodCall();
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

//----------------- NumericAssignmentOperationsContext ------------------------------------------------------------------

BSParser::NumericAssignmentOperationsContext::NumericAssignmentOperationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BSParser::ExpressionContext* BSParser::NumericAssignmentOperationsContext::expression() {
  return getRuleContext<BSParser::ExpressionContext>(0);
}

BSParser::DetectContext* BSParser::NumericAssignmentOperationsContext::detect() {
  return getRuleContext<BSParser::DetectContext>(0);
}

BSParser::MethodCallContext* BSParser::NumericAssignmentOperationsContext::methodCall() {
  return getRuleContext<BSParser::MethodCallContext>(0);
}


size_t BSParser::NumericAssignmentOperationsContext::getRuleIndex() const {
  return BSParser::RuleNumericAssignmentOperations;
}

void BSParser::NumericAssignmentOperationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericAssignmentOperations(this);
}

void BSParser::NumericAssignmentOperationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericAssignmentOperations(this);
}


antlrcpp::Any BSParser::NumericAssignmentOperationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitNumericAssignmentOperations(this);
  else
    return visitor->visitChildren(this);
}

BSParser::NumericAssignmentOperationsContext* BSParser::numericAssignmentOperations() {
  NumericAssignmentOperationsContext *_localctx = _tracker.createInstance<NumericAssignmentOperationsContext>(_ctx, getState());
  enterRule(_localctx, 24, BSParser::RuleNumericAssignmentOperations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(181);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(178);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(179);
      detect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(180);
      methodCall();
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

//----------------- StatementsContext ------------------------------------------------------------------

BSParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BSParser::IfStatementContext* BSParser::StatementsContext::ifStatement() {
  return getRuleContext<BSParser::IfStatementContext>(0);
}

BSParser::WhileStatementContext* BSParser::StatementsContext::whileStatement() {
  return getRuleContext<BSParser::WhileStatementContext>(0);
}

BSParser::MaterialDeclarationContext* BSParser::StatementsContext::materialDeclaration() {
  return getRuleContext<BSParser::MaterialDeclarationContext>(0);
}

BSParser::NumericDeclarationContext* BSParser::StatementsContext::numericDeclaration() {
  return getRuleContext<BSParser::NumericDeclarationContext>(0);
}

BSParser::RepeatContext* BSParser::StatementsContext::repeat() {
  return getRuleContext<BSParser::RepeatContext>(0);
}

BSParser::HeatContext* BSParser::StatementsContext::heat() {
  return getRuleContext<BSParser::HeatContext>(0);
}

BSParser::DisposeContext* BSParser::StatementsContext::dispose() {
  return getRuleContext<BSParser::DisposeContext>(0);
}


size_t BSParser::StatementsContext::getRuleIndex() const {
  return BSParser::RuleStatements;
}

void BSParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void BSParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}


antlrcpp::Any BSParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

BSParser::StatementsContext* BSParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 26, BSParser::RuleStatements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(183);
      ifStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(184);
      whileStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(185);
      materialDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(186);
      numericDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(187);
      repeat();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(188);
      heat();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(189);
      dispose();
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

//----------------- IfStatementContext ------------------------------------------------------------------

BSParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::IfStatementContext::IF() {
  return getToken(BSParser::IF, 0);
}

BSParser::ParExpressionContext* BSParser::IfStatementContext::parExpression() {
  return getRuleContext<BSParser::ParExpressionContext>(0);
}

std::vector<BSParser::BlockStatementContext *> BSParser::IfStatementContext::blockStatement() {
  return getRuleContexts<BSParser::BlockStatementContext>();
}

BSParser::BlockStatementContext* BSParser::IfStatementContext::blockStatement(size_t i) {
  return getRuleContext<BSParser::BlockStatementContext>(i);
}

tree::TerminalNode* BSParser::IfStatementContext::ELSE() {
  return getToken(BSParser::ELSE, 0);
}


size_t BSParser::IfStatementContext::getRuleIndex() const {
  return BSParser::RuleIfStatement;
}

void BSParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void BSParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any BSParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

BSParser::IfStatementContext* BSParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, BSParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(BSParser::IF);
    setState(193);
    parExpression();
    setState(194);
    blockStatement();
    setState(197);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSParser::ELSE) {
      setState(195);
      match(BSParser::ELSE);
      setState(196);
      blockStatement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

BSParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::WhileStatementContext::WHILE() {
  return getToken(BSParser::WHILE, 0);
}

BSParser::ParExpressionContext* BSParser::WhileStatementContext::parExpression() {
  return getRuleContext<BSParser::ParExpressionContext>(0);
}

BSParser::BlockStatementContext* BSParser::WhileStatementContext::blockStatement() {
  return getRuleContext<BSParser::BlockStatementContext>(0);
}


size_t BSParser::WhileStatementContext::getRuleIndex() const {
  return BSParser::RuleWhileStatement;
}

void BSParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void BSParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any BSParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

BSParser::WhileStatementContext* BSParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, BSParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(BSParser::WHILE);
    setState(200);
    parExpression();
    setState(201);
    blockStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatContext ------------------------------------------------------------------

BSParser::RepeatContext::RepeatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::RepeatContext::REPEAT() {
  return getToken(BSParser::REPEAT, 0);
}

tree::TerminalNode* BSParser::RepeatContext::TIMES() {
  return getToken(BSParser::TIMES, 0);
}

BSParser::BlockStatementContext* BSParser::RepeatContext::blockStatement() {
  return getRuleContext<BSParser::BlockStatementContext>(0);
}

tree::TerminalNode* BSParser::RepeatContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}

tree::TerminalNode* BSParser::RepeatContext::INTEGER_LITERAL() {
  return getToken(BSParser::INTEGER_LITERAL, 0);
}


size_t BSParser::RepeatContext::getRuleIndex() const {
  return BSParser::RuleRepeat;
}

void BSParser::RepeatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeat(this);
}

void BSParser::RepeatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeat(this);
}


antlrcpp::Any BSParser::RepeatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitRepeat(this);
  else
    return visitor->visitChildren(this);
}

BSParser::RepeatContext* BSParser::repeat() {
  RepeatContext *_localctx = _tracker.createInstance<RepeatContext>(_ctx, getState());
  enterRule(_localctx, 32, BSParser::RuleRepeat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    match(BSParser::REPEAT);
    setState(204);
    _la = _input->LA(1);
    if (!(_la == BSParser::IDENTIFIER

    || _la == BSParser::INTEGER_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(205);
    match(BSParser::TIMES);
    setState(206);
    blockStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MixContext ------------------------------------------------------------------

BSParser::MixContext::MixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::MixContext::MIX() {
  return getToken(BSParser::MIX, 0);
}

std::vector<BSParser::VolumeIdentifierContext *> BSParser::MixContext::volumeIdentifier() {
  return getRuleContexts<BSParser::VolumeIdentifierContext>();
}

BSParser::VolumeIdentifierContext* BSParser::MixContext::volumeIdentifier(size_t i) {
  return getRuleContext<BSParser::VolumeIdentifierContext>(i);
}

tree::TerminalNode* BSParser::MixContext::WITH() {
  return getToken(BSParser::WITH, 0);
}

tree::TerminalNode* BSParser::MixContext::FOR() {
  return getToken(BSParser::FOR, 0);
}

BSParser::TimeIdentifierContext* BSParser::MixContext::timeIdentifier() {
  return getRuleContext<BSParser::TimeIdentifierContext>(0);
}


size_t BSParser::MixContext::getRuleIndex() const {
  return BSParser::RuleMix;
}

void BSParser::MixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMix(this);
}

void BSParser::MixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMix(this);
}


antlrcpp::Any BSParser::MixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitMix(this);
  else
    return visitor->visitChildren(this);
}

BSParser::MixContext* BSParser::mix() {
  MixContext *_localctx = _tracker.createInstance<MixContext>(_ctx, getState());
  enterRule(_localctx, 34, BSParser::RuleMix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(BSParser::MIX);
    setState(209);
    volumeIdentifier();
    setState(210);
    match(BSParser::WITH);
    setState(211);
    volumeIdentifier();
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSParser::FOR) {
      setState(212);
      match(BSParser::FOR);
      setState(213);
      timeIdentifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DetectContext ------------------------------------------------------------------

BSParser::DetectContext::DetectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::DetectContext::DETECT() {
  return getToken(BSParser::DETECT, 0);
}

std::vector<tree::TerminalNode *> BSParser::DetectContext::IDENTIFIER() {
  return getTokens(BSParser::IDENTIFIER);
}

tree::TerminalNode* BSParser::DetectContext::IDENTIFIER(size_t i) {
  return getToken(BSParser::IDENTIFIER, i);
}

tree::TerminalNode* BSParser::DetectContext::ON() {
  return getToken(BSParser::ON, 0);
}

tree::TerminalNode* BSParser::DetectContext::FOR() {
  return getToken(BSParser::FOR, 0);
}

BSParser::TimeIdentifierContext* BSParser::DetectContext::timeIdentifier() {
  return getRuleContext<BSParser::TimeIdentifierContext>(0);
}


size_t BSParser::DetectContext::getRuleIndex() const {
  return BSParser::RuleDetect;
}

void BSParser::DetectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDetect(this);
}

void BSParser::DetectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDetect(this);
}


antlrcpp::Any BSParser::DetectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitDetect(this);
  else
    return visitor->visitChildren(this);
}

BSParser::DetectContext* BSParser::detect() {
  DetectContext *_localctx = _tracker.createInstance<DetectContext>(_ctx, getState());
  enterRule(_localctx, 36, BSParser::RuleDetect);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(BSParser::DETECT);
    setState(217);
    match(BSParser::IDENTIFIER);
    setState(218);
    match(BSParser::ON);
    setState(219);
    match(BSParser::IDENTIFIER);
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSParser::FOR) {
      setState(220);
      match(BSParser::FOR);
      setState(221);
      timeIdentifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeatContext ------------------------------------------------------------------

BSParser::HeatContext::HeatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::HeatContext::HEAT() {
  return getToken(BSParser::HEAT, 0);
}

tree::TerminalNode* BSParser::HeatContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}

tree::TerminalNode* BSParser::HeatContext::AT() {
  return getToken(BSParser::AT, 0);
}

BSParser::TemperatureIdentifierContext* BSParser::HeatContext::temperatureIdentifier() {
  return getRuleContext<BSParser::TemperatureIdentifierContext>(0);
}

tree::TerminalNode* BSParser::HeatContext::FOR() {
  return getToken(BSParser::FOR, 0);
}

BSParser::TimeIdentifierContext* BSParser::HeatContext::timeIdentifier() {
  return getRuleContext<BSParser::TimeIdentifierContext>(0);
}


size_t BSParser::HeatContext::getRuleIndex() const {
  return BSParser::RuleHeat;
}

void BSParser::HeatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeat(this);
}

void BSParser::HeatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeat(this);
}


antlrcpp::Any BSParser::HeatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitHeat(this);
  else
    return visitor->visitChildren(this);
}

BSParser::HeatContext* BSParser::heat() {
  HeatContext *_localctx = _tracker.createInstance<HeatContext>(_ctx, getState());
  enterRule(_localctx, 38, BSParser::RuleHeat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    match(BSParser::HEAT);
    setState(225);
    match(BSParser::IDENTIFIER);
    setState(226);
    match(BSParser::AT);
    setState(227);
    temperatureIdentifier();
    setState(230);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSParser::FOR) {
      setState(228);
      match(BSParser::FOR);
      setState(229);
      timeIdentifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SplitContext ------------------------------------------------------------------

BSParser::SplitContext::SplitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::SplitContext::SPLIT() {
  return getToken(BSParser::SPLIT, 0);
}

tree::TerminalNode* BSParser::SplitContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}

tree::TerminalNode* BSParser::SplitContext::INTO() {
  return getToken(BSParser::INTO, 0);
}

tree::TerminalNode* BSParser::SplitContext::INTEGER_LITERAL() {
  return getToken(BSParser::INTEGER_LITERAL, 0);
}


size_t BSParser::SplitContext::getRuleIndex() const {
  return BSParser::RuleSplit;
}

void BSParser::SplitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSplit(this);
}

void BSParser::SplitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSplit(this);
}


antlrcpp::Any BSParser::SplitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitSplit(this);
  else
    return visitor->visitChildren(this);
}

BSParser::SplitContext* BSParser::split() {
  SplitContext *_localctx = _tracker.createInstance<SplitContext>(_ctx, getState());
  enterRule(_localctx, 40, BSParser::RuleSplit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(BSParser::SPLIT);
    setState(233);
    match(BSParser::IDENTIFIER);
    setState(234);
    match(BSParser::INTO);
    setState(235);
    match(BSParser::INTEGER_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DispenseContext ------------------------------------------------------------------

BSParser::DispenseContext::DispenseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::DispenseContext::DISPENSE() {
  return getToken(BSParser::DISPENSE, 0);
}

tree::TerminalNode* BSParser::DispenseContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}


size_t BSParser::DispenseContext::getRuleIndex() const {
  return BSParser::RuleDispense;
}

void BSParser::DispenseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDispense(this);
}

void BSParser::DispenseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDispense(this);
}


antlrcpp::Any BSParser::DispenseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitDispense(this);
  else
    return visitor->visitChildren(this);
}

BSParser::DispenseContext* BSParser::dispense() {
  DispenseContext *_localctx = _tracker.createInstance<DispenseContext>(_ctx, getState());
  enterRule(_localctx, 42, BSParser::RuleDispense);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(BSParser::DISPENSE);
    setState(238);
    match(BSParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DisposeContext ------------------------------------------------------------------

BSParser::DisposeContext::DisposeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::DisposeContext::DRAIN() {
  return getToken(BSParser::DRAIN, 0);
}

tree::TerminalNode* BSParser::DisposeContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}

tree::TerminalNode* BSParser::DisposeContext::DISPOSE() {
  return getToken(BSParser::DISPOSE, 0);
}


size_t BSParser::DisposeContext::getRuleIndex() const {
  return BSParser::RuleDispose;
}

void BSParser::DisposeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDispose(this);
}

void BSParser::DisposeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDispose(this);
}


antlrcpp::Any BSParser::DisposeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitDispose(this);
  else
    return visitor->visitChildren(this);
}

BSParser::DisposeContext* BSParser::dispose() {
  DisposeContext *_localctx = _tracker.createInstance<DisposeContext>(_ctx, getState());
  enterRule(_localctx, 44, BSParser::RuleDispose);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(244);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSParser::DRAIN: {
        enterOuterAlt(_localctx, 1);
        setState(240);
        match(BSParser::DRAIN);
        setState(241);
        match(BSParser::IDENTIFIER);
        break;
      }

      case BSParser::DISPOSE: {
        enterOuterAlt(_localctx, 2);
        setState(242);
        match(BSParser::DISPOSE);
        setState(243);
        match(BSParser::IDENTIFIER);
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

//----------------- ExpressionContext ------------------------------------------------------------------

BSParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BSParser::PrimaryContext* BSParser::ExpressionContext::primary() {
  return getRuleContext<BSParser::PrimaryContext>(0);
}

std::vector<BSParser::ExpressionContext *> BSParser::ExpressionContext::expression() {
  return getRuleContexts<BSParser::ExpressionContext>();
}

BSParser::ExpressionContext* BSParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<BSParser::ExpressionContext>(i);
}

tree::TerminalNode* BSParser::ExpressionContext::MULTIPLY() {
  return getToken(BSParser::MULTIPLY, 0);
}

tree::TerminalNode* BSParser::ExpressionContext::DIVIDE() {
  return getToken(BSParser::DIVIDE, 0);
}

tree::TerminalNode* BSParser::ExpressionContext::ADDITION() {
  return getToken(BSParser::ADDITION, 0);
}

tree::TerminalNode* BSParser::ExpressionContext::SUBTRACT() {
  return getToken(BSParser::SUBTRACT, 0);
}

std::vector<tree::TerminalNode *> BSParser::ExpressionContext::LT() {
  return getTokens(BSParser::LT);
}

tree::TerminalNode* BSParser::ExpressionContext::LT(size_t i) {
  return getToken(BSParser::LT, i);
}

std::vector<tree::TerminalNode *> BSParser::ExpressionContext::GT() {
  return getTokens(BSParser::GT);
}

tree::TerminalNode* BSParser::ExpressionContext::GT(size_t i) {
  return getToken(BSParser::GT, i);
}

tree::TerminalNode* BSParser::ExpressionContext::LTE() {
  return getToken(BSParser::LTE, 0);
}

tree::TerminalNode* BSParser::ExpressionContext::GTE() {
  return getToken(BSParser::GTE, 0);
}

tree::TerminalNode* BSParser::ExpressionContext::EQUALITY() {
  return getToken(BSParser::EQUALITY, 0);
}

tree::TerminalNode* BSParser::ExpressionContext::NOTEQUAL() {
  return getToken(BSParser::NOTEQUAL, 0);
}

tree::TerminalNode* BSParser::ExpressionContext::AND() {
  return getToken(BSParser::AND, 0);
}

tree::TerminalNode* BSParser::ExpressionContext::OR() {
  return getToken(BSParser::OR, 0);
}

tree::TerminalNode* BSParser::ExpressionContext::LBRACKET() {
  return getToken(BSParser::LBRACKET, 0);
}

tree::TerminalNode* BSParser::ExpressionContext::RBRACKET() {
  return getToken(BSParser::RBRACKET, 0);
}


size_t BSParser::ExpressionContext::getRuleIndex() const {
  return BSParser::RuleExpression;
}

void BSParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void BSParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any BSParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


BSParser::ExpressionContext* BSParser::expression() {
   return expression(0);
}

BSParser::ExpressionContext* BSParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BSParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  BSParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, BSParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(247);
    primary();
    _ctx->stop = _input->LT(-1);
    setState(285);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(283);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(249);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(250);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (BSParser::MULTIPLY - 64))
            | (1ULL << (BSParser::DIVIDE - 64))
            | (1ULL << (BSParser::MOD - 64)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(251);
          expression(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(252);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(253);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == BSParser::ADDITION

          || _la == BSParser::SUBTRACT)) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(254);
          expression(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(255);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(263);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
          case 1: {
            setState(256);
            match(BSParser::LT);
            setState(257);
            match(BSParser::LT);
            break;
          }

          case 2: {
            setState(258);
            match(BSParser::GT);
            setState(259);
            match(BSParser::GT);
            setState(260);
            match(BSParser::GT);
            break;
          }

          case 3: {
            setState(261);
            match(BSParser::GT);
            setState(262);
            match(BSParser::GT);
            break;
          }

          }
          setState(265);
          expression(6);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(266);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(267);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << BSParser::GT)
            | (1ULL << BSParser::LT)
            | (1ULL << BSParser::LTE)
            | (1ULL << BSParser::GTE))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(268);
          expression(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(269);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(270);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == BSParser::EQUALITY

          || _la == BSParser::NOTEQUAL)) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(271);
          expression(4);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(272);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(273);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BSParser::AND);
          setState(274);
          expression(3);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(275);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(276);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(BSParser::OR);
          setState(277);
          expression(2);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(278);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(279);
          match(BSParser::LBRACKET);
          setState(280);
          expression(0);
          setState(281);
          match(BSParser::RBRACKET);
          break;
        }

        } 
      }
      setState(287);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParExpressionContext ------------------------------------------------------------------

BSParser::ParExpressionContext::ParExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::ParExpressionContext::LPAREN() {
  return getToken(BSParser::LPAREN, 0);
}

BSParser::ExpressionContext* BSParser::ParExpressionContext::expression() {
  return getRuleContext<BSParser::ExpressionContext>(0);
}

tree::TerminalNode* BSParser::ParExpressionContext::RPAREN() {
  return getToken(BSParser::RPAREN, 0);
}


size_t BSParser::ParExpressionContext::getRuleIndex() const {
  return BSParser::RuleParExpression;
}

void BSParser::ParExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParExpression(this);
}

void BSParser::ParExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParExpression(this);
}


antlrcpp::Any BSParser::ParExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitParExpression(this);
  else
    return visitor->visitChildren(this);
}

BSParser::ParExpressionContext* BSParser::parExpression() {
  ParExpressionContext *_localctx = _tracker.createInstance<ParExpressionContext>(_ctx, getState());
  enterRule(_localctx, 48, BSParser::RuleParExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(BSParser::LPAREN);
    setState(289);
    expression(0);
    setState(290);
    match(BSParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallContext ------------------------------------------------------------------

BSParser::MethodCallContext::MethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::MethodCallContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}

tree::TerminalNode* BSParser::MethodCallContext::LPAREN() {
  return getToken(BSParser::LPAREN, 0);
}

tree::TerminalNode* BSParser::MethodCallContext::RPAREN() {
  return getToken(BSParser::RPAREN, 0);
}

BSParser::ExpressionListContext* BSParser::MethodCallContext::expressionList() {
  return getRuleContext<BSParser::ExpressionListContext>(0);
}


size_t BSParser::MethodCallContext::getRuleIndex() const {
  return BSParser::RuleMethodCall;
}

void BSParser::MethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall(this);
}

void BSParser::MethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall(this);
}


antlrcpp::Any BSParser::MethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitMethodCall(this);
  else
    return visitor->visitChildren(this);
}

BSParser::MethodCallContext* BSParser::methodCall() {
  MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
  enterRule(_localctx, 50, BSParser::RuleMethodCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    match(BSParser::IDENTIFIER);
    setState(293);
    match(BSParser::LPAREN);
    setState(295);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BSParser::IDENTIFIER)
      | (1ULL << BSParser::STRING_LITERAL)
      | (1ULL << BSParser::BOOL_LITERAL)
      | (1ULL << BSParser::FLOAT_LITERAL)
      | (1ULL << BSParser::INTEGER_LITERAL)
      | (1ULL << BSParser::LPAREN))) != 0)) {
      setState(294);
      expressionList();
    }
    setState(297);
    match(BSParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

BSParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BSParser::ExpressionContext *> BSParser::ExpressionListContext::expression() {
  return getRuleContexts<BSParser::ExpressionContext>();
}

BSParser::ExpressionContext* BSParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<BSParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> BSParser::ExpressionListContext::COMMA() {
  return getTokens(BSParser::COMMA);
}

tree::TerminalNode* BSParser::ExpressionListContext::COMMA(size_t i) {
  return getToken(BSParser::COMMA, i);
}


size_t BSParser::ExpressionListContext::getRuleIndex() const {
  return BSParser::RuleExpressionList;
}

void BSParser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void BSParser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any BSParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

BSParser::ExpressionListContext* BSParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 52, BSParser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    expression(0);
    setState(304);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSParser::COMMA) {
      setState(300);
      match(BSParser::COMMA);
      setState(301);
      expression(0);
      setState(306);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeTypeContext ------------------------------------------------------------------

BSParser::TypeTypeContext::TypeTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BSParser::PrimitiveTypeContext* BSParser::TypeTypeContext::primitiveType() {
  return getRuleContext<BSParser::PrimitiveTypeContext>(0);
}


size_t BSParser::TypeTypeContext::getRuleIndex() const {
  return BSParser::RuleTypeType;
}

void BSParser::TypeTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeType(this);
}

void BSParser::TypeTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeType(this);
}


antlrcpp::Any BSParser::TypeTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitTypeType(this);
  else
    return visitor->visitChildren(this);
}

BSParser::TypeTypeContext* BSParser::typeType() {
  TypeTypeContext *_localctx = _tracker.createInstance<TypeTypeContext>(_ctx, getState());
  enterRule(_localctx, 54, BSParser::RuleTypeType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    primitiveType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionTypeContext ------------------------------------------------------------------

BSParser::UnionTypeContext::UnionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::UnionTypeContext::LBRACKET() {
  return getToken(BSParser::LBRACKET, 0);
}

BSParser::TypesListContext* BSParser::UnionTypeContext::typesList() {
  return getRuleContext<BSParser::TypesListContext>(0);
}

tree::TerminalNode* BSParser::UnionTypeContext::RBRACKET() {
  return getToken(BSParser::RBRACKET, 0);
}


size_t BSParser::UnionTypeContext::getRuleIndex() const {
  return BSParser::RuleUnionType;
}

void BSParser::UnionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnionType(this);
}

void BSParser::UnionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnionType(this);
}


antlrcpp::Any BSParser::UnionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitUnionType(this);
  else
    return visitor->visitChildren(this);
}

BSParser::UnionTypeContext* BSParser::unionType() {
  UnionTypeContext *_localctx = _tracker.createInstance<UnionTypeContext>(_ctx, getState());
  enterRule(_localctx, 56, BSParser::RuleUnionType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(BSParser::LBRACKET);
    setState(310);
    typesList();
    setState(311);
    match(BSParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypesListContext ------------------------------------------------------------------

BSParser::TypesListContext::TypesListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BSParser::TypeTypeContext *> BSParser::TypesListContext::typeType() {
  return getRuleContexts<BSParser::TypeTypeContext>();
}

BSParser::TypeTypeContext* BSParser::TypesListContext::typeType(size_t i) {
  return getRuleContext<BSParser::TypeTypeContext>(i);
}

std::vector<tree::TerminalNode *> BSParser::TypesListContext::SEMICOLON() {
  return getTokens(BSParser::SEMICOLON);
}

tree::TerminalNode* BSParser::TypesListContext::SEMICOLON(size_t i) {
  return getToken(BSParser::SEMICOLON, i);
}


size_t BSParser::TypesListContext::getRuleIndex() const {
  return BSParser::RuleTypesList;
}

void BSParser::TypesListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypesList(this);
}

void BSParser::TypesListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypesList(this);
}


antlrcpp::Any BSParser::TypesListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitTypesList(this);
  else
    return visitor->visitChildren(this);
}

BSParser::TypesListContext* BSParser::typesList() {
  TypesListContext *_localctx = _tracker.createInstance<TypesListContext>(_ctx, getState());
  enterRule(_localctx, 58, BSParser::RuleTypesList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    typeType();
    setState(318);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSParser::SEMICOLON) {
      setState(314);
      match(BSParser::SEMICOLON);
      setState(315);
      typeType();
      setState(320);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericDeclarationContext ------------------------------------------------------------------

BSParser::NumericDeclarationContext::NumericDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::NumericDeclarationContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}

tree::TerminalNode* BSParser::NumericDeclarationContext::ASSIGN() {
  return getToken(BSParser::ASSIGN, 0);
}

BSParser::NumericAssignmentOperationsContext* BSParser::NumericDeclarationContext::numericAssignmentOperations() {
  return getRuleContext<BSParser::NumericAssignmentOperationsContext>(0);
}

BSParser::UnionTypeContext* BSParser::NumericDeclarationContext::unionType() {
  return getRuleContext<BSParser::UnionTypeContext>(0);
}


size_t BSParser::NumericDeclarationContext::getRuleIndex() const {
  return BSParser::RuleNumericDeclaration;
}

void BSParser::NumericDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericDeclaration(this);
}

void BSParser::NumericDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericDeclaration(this);
}


antlrcpp::Any BSParser::NumericDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitNumericDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BSParser::NumericDeclarationContext* BSParser::numericDeclaration() {
  NumericDeclarationContext *_localctx = _tracker.createInstance<NumericDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 60, BSParser::RuleNumericDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSParser::LBRACKET) {
      setState(321);
      unionType();
    }
    setState(324);
    match(BSParser::IDENTIFIER);
    setState(325);
    match(BSParser::ASSIGN);
    setState(326);
    numericAssignmentOperations();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MaterialDeclarationContext ------------------------------------------------------------------

BSParser::MaterialDeclarationContext::MaterialDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BSParser::MaterialDeclarationContext::IDENTIFIER() {
  return getTokens(BSParser::IDENTIFIER);
}

tree::TerminalNode* BSParser::MaterialDeclarationContext::IDENTIFIER(size_t i) {
  return getToken(BSParser::IDENTIFIER, i);
}

tree::TerminalNode* BSParser::MaterialDeclarationContext::ASSIGN() {
  return getToken(BSParser::ASSIGN, 0);
}

BSParser::SplitContext* BSParser::MaterialDeclarationContext::split() {
  return getRuleContext<BSParser::SplitContext>(0);
}

BSParser::UnionTypeContext* BSParser::MaterialDeclarationContext::unionType() {
  return getRuleContext<BSParser::UnionTypeContext>(0);
}

std::vector<tree::TerminalNode *> BSParser::MaterialDeclarationContext::COMMA() {
  return getTokens(BSParser::COMMA);
}

tree::TerminalNode* BSParser::MaterialDeclarationContext::COMMA(size_t i) {
  return getToken(BSParser::COMMA, i);
}

tree::TerminalNode* BSParser::MaterialDeclarationContext::LBRACKET() {
  return getToken(BSParser::LBRACKET, 0);
}

tree::TerminalNode* BSParser::MaterialDeclarationContext::RBRACKET() {
  return getToken(BSParser::RBRACKET, 0);
}

BSParser::MaterialAssignmentOperationsContext* BSParser::MaterialDeclarationContext::materialAssignmentOperations() {
  return getRuleContext<BSParser::MaterialAssignmentOperationsContext>(0);
}

tree::TerminalNode* BSParser::MaterialDeclarationContext::INTEGER_LITERAL() {
  return getToken(BSParser::INTEGER_LITERAL, 0);
}


size_t BSParser::MaterialDeclarationContext::getRuleIndex() const {
  return BSParser::RuleMaterialDeclaration;
}

void BSParser::MaterialDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaterialDeclaration(this);
}

void BSParser::MaterialDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaterialDeclaration(this);
}


antlrcpp::Any BSParser::MaterialDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitMaterialDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BSParser::MaterialDeclarationContext* BSParser::materialDeclaration() {
  MaterialDeclarationContext *_localctx = _tracker.createInstance<MaterialDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 62, BSParser::RuleMaterialDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(360);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(329);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BSParser::LBRACKET) {
        setState(328);
        unionType();
      }
      setState(331);
      match(BSParser::IDENTIFIER);
      setState(336);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BSParser::COMMA) {
        setState(332);
        match(BSParser::COMMA);
        setState(333);
        match(BSParser::IDENTIFIER);
        setState(338);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(339);
      match(BSParser::ASSIGN);
      setState(340);
      split();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(342);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BSParser::LBRACKET) {
        setState(341);
        unionType();
      }
      setState(344);
      match(BSParser::IDENTIFIER);
      setState(345);
      match(BSParser::LBRACKET);
      setState(346);
      match(BSParser::RBRACKET);
      setState(347);
      match(BSParser::ASSIGN);
      setState(348);
      split();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(350);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BSParser::LBRACKET) {
        setState(349);
        unionType();
      }
      setState(352);
      match(BSParser::IDENTIFIER);
      setState(356);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BSParser::LBRACKET) {
        setState(353);
        match(BSParser::LBRACKET);
        setState(354);
        match(BSParser::INTEGER_LITERAL);
        setState(355);
        match(BSParser::RBRACKET);
      }
      setState(358);
      match(BSParser::ASSIGN);
      setState(359);
      materialAssignmentOperations();
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

//----------------- PrimaryContext ------------------------------------------------------------------

BSParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::PrimaryContext::LPAREN() {
  return getToken(BSParser::LPAREN, 0);
}

BSParser::ExpressionContext* BSParser::PrimaryContext::expression() {
  return getRuleContext<BSParser::ExpressionContext>(0);
}

tree::TerminalNode* BSParser::PrimaryContext::RPAREN() {
  return getToken(BSParser::RPAREN, 0);
}

BSParser::LiteralContext* BSParser::PrimaryContext::literal() {
  return getRuleContext<BSParser::LiteralContext>(0);
}

tree::TerminalNode* BSParser::PrimaryContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}


size_t BSParser::PrimaryContext::getRuleIndex() const {
  return BSParser::RulePrimary;
}

void BSParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void BSParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}


antlrcpp::Any BSParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

BSParser::PrimaryContext* BSParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 64, BSParser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(368);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(362);
        match(BSParser::LPAREN);
        setState(363);
        expression(0);
        setState(364);
        match(BSParser::RPAREN);
        break;
      }

      case BSParser::STRING_LITERAL:
      case BSParser::BOOL_LITERAL:
      case BSParser::FLOAT_LITERAL:
      case BSParser::INTEGER_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(366);
        literal();
        break;
      }

      case BSParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 3);
        setState(367);
        match(BSParser::IDENTIFIER);
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

//----------------- LiteralContext ------------------------------------------------------------------

BSParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::LiteralContext::INTEGER_LITERAL() {
  return getToken(BSParser::INTEGER_LITERAL, 0);
}

tree::TerminalNode* BSParser::LiteralContext::FLOAT_LITERAL() {
  return getToken(BSParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* BSParser::LiteralContext::BOOL_LITERAL() {
  return getToken(BSParser::BOOL_LITERAL, 0);
}

tree::TerminalNode* BSParser::LiteralContext::STRING_LITERAL() {
  return getToken(BSParser::STRING_LITERAL, 0);
}


size_t BSParser::LiteralContext::getRuleIndex() const {
  return BSParser::RuleLiteral;
}

void BSParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void BSParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any BSParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

BSParser::LiteralContext* BSParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 66, BSParser::RuleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BSParser::STRING_LITERAL)
      | (1ULL << BSParser::BOOL_LITERAL)
      | (1ULL << BSParser::FLOAT_LITERAL)
      | (1ULL << BSParser::INTEGER_LITERAL))) != 0))) {
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

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

BSParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::PrimitiveTypeContext::BOOL() {
  return getToken(BSParser::BOOL, 0);
}

tree::TerminalNode* BSParser::PrimitiveTypeContext::NAT() {
  return getToken(BSParser::NAT, 0);
}

tree::TerminalNode* BSParser::PrimitiveTypeContext::REAL() {
  return getToken(BSParser::REAL, 0);
}

tree::TerminalNode* BSParser::PrimitiveTypeContext::MAT() {
  return getToken(BSParser::MAT, 0);
}


size_t BSParser::PrimitiveTypeContext::getRuleIndex() const {
  return BSParser::RulePrimitiveType;
}

void BSParser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveType(this);
}

void BSParser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveType(this);
}


antlrcpp::Any BSParser::PrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

BSParser::PrimitiveTypeContext* BSParser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 68, BSParser::RulePrimitiveType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BSParser::NAT)
      | (1ULL << BSParser::REAL)
      | (1ULL << BSParser::MAT)
      | (1ULL << BSParser::BOOL))) != 0))) {
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

//----------------- VolumeIdentifierContext ------------------------------------------------------------------

BSParser::VolumeIdentifierContext::VolumeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::VolumeIdentifierContext::IDENTIFIER() {
  return getToken(BSParser::IDENTIFIER, 0);
}

tree::TerminalNode* BSParser::VolumeIdentifierContext::VOLUME_NUMBER() {
  return getToken(BSParser::VOLUME_NUMBER, 0);
}

tree::TerminalNode* BSParser::VolumeIdentifierContext::OF() {
  return getToken(BSParser::OF, 0);
}


size_t BSParser::VolumeIdentifierContext::getRuleIndex() const {
  return BSParser::RuleVolumeIdentifier;
}

void BSParser::VolumeIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVolumeIdentifier(this);
}

void BSParser::VolumeIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVolumeIdentifier(this);
}


antlrcpp::Any BSParser::VolumeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitVolumeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

BSParser::VolumeIdentifierContext* BSParser::volumeIdentifier() {
  VolumeIdentifierContext *_localctx = _tracker.createInstance<VolumeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 70, BSParser::RuleVolumeIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSParser::VOLUME_NUMBER) {
      setState(374);
      match(BSParser::VOLUME_NUMBER);
      setState(375);
      match(BSParser::OF);
    }
    setState(378);
    match(BSParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TimeIdentifierContext ------------------------------------------------------------------

BSParser::TimeIdentifierContext::TimeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::TimeIdentifierContext::TIME_NUMBER() {
  return getToken(BSParser::TIME_NUMBER, 0);
}


size_t BSParser::TimeIdentifierContext::getRuleIndex() const {
  return BSParser::RuleTimeIdentifier;
}

void BSParser::TimeIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimeIdentifier(this);
}

void BSParser::TimeIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimeIdentifier(this);
}


antlrcpp::Any BSParser::TimeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitTimeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

BSParser::TimeIdentifierContext* BSParser::timeIdentifier() {
  TimeIdentifierContext *_localctx = _tracker.createInstance<TimeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 72, BSParser::RuleTimeIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    match(BSParser::TIME_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemperatureIdentifierContext ------------------------------------------------------------------

BSParser::TemperatureIdentifierContext::TemperatureIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSParser::TemperatureIdentifierContext::TEMP_NUMBER() {
  return getToken(BSParser::TEMP_NUMBER, 0);
}


size_t BSParser::TemperatureIdentifierContext::getRuleIndex() const {
  return BSParser::RuleTemperatureIdentifier;
}

void BSParser::TemperatureIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemperatureIdentifier(this);
}

void BSParser::TemperatureIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemperatureIdentifier(this);
}


antlrcpp::Any BSParser::TemperatureIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BSParserVisitor*>(visitor))
    return parserVisitor->visitTemperatureIdentifier(this);
  else
    return visitor->visitChildren(this);
}

BSParser::TemperatureIdentifierContext* BSParser::temperatureIdentifier() {
  TemperatureIdentifierContext *_localctx = _tracker.createInstance<TemperatureIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 74, BSParser::RuleTemperatureIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    match(BSParser::TEMP_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BSParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 23: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BSParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 2);
    case 6: return precpred(_ctx, 1);
    case 7: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> BSParser::_decisionToDFA;
atn::PredictionContextCache BSParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN BSParser::_atn;
std::vector<uint16_t> BSParser::_serializedATN;

std::vector<std::string> BSParser::_ruleNames = {
  "program", "moduleDeclaration", "manifestDeclaration", "stationaryDeclaration", 
  "functionDeclaration", "formalParameters", "formalParameterList", "formalParameter", 
  "functionTyping", "returnStatement", "blockStatement", "materialAssignmentOperations", 
  "numericAssignmentOperations", "statements", "ifStatement", "whileStatement", 
  "repeat", "mix", "detect", "heat", "split", "dispense", "dispose", "expression", 
  "parExpression", "methodCall", "expressionList", "typeType", "unionType", 
  "typesList", "numericDeclaration", "materialDeclaration", "primary", "literal", 
  "primitiveType", "volumeIdentifier", "timeIdentifier", "temperatureIdentifier"
};

std::vector<std::string> BSParser::_literalNames = {
  "", "'if'", "'else'", "'repeat'", "'while'", "'function'", "'return'", 
  "'manifest'", "'module'", "'stationary'", "'functions'", "'instructions'", 
  "'detect'", "'mix'", "'split'", "'heat'", "'drain'", "'dispense'", "'dispose'", 
  "'at'", "'with'", "'for'", "'into'", "'times'", "'on'", "'of'", "'nat'", 
  "'real'", "'mat'", "'bool'", "", "", "", "", "", "", "", "", "'('", "')'", 
  "'{'", "'}'", "'['", "']'", "';'", "','", "'.'", "'='", "'>'", "'<'", 
  "'!'", "'~'", "'?'", "':'", "'=='", "'<='", "'>='", "'!='", "'&&'", "'||'", 
  "'++'", "'--'", "'+'", "'-'", "'*'", "'/'", "'&'", "'|'", "'^'", "'%'", 
  "'_'", "'ns'", "'us'", "'ms'", "'cs'", "'ds'", "'s'", "'h'", "'d'", "'w'", 
  "'mo'", "'y'", "'nL'", "'uL'", "'mL'", "'cL'", "'dL'", "'L'", "'daL'", 
  "'c'", "'f'", "'k'"
};

std::vector<std::string> BSParser::_symbolicNames = {
  "", "IF", "ELSE", "REPEAT", "WHILE", "FUNCTION", "RETURN", "MANIFEST", 
  "MODULE", "STATIONARY", "FUNCTIONS", "INSTRUCTIONS", "DETECT", "MIX", 
  "SPLIT", "HEAT", "DRAIN", "DISPENSE", "DISPOSE", "AT", "WITH", "FOR", 
  "INTO", "TIMES", "ON", "OF", "NAT", "REAL", "MAT", "BOOL", "IDENTIFIER", 
  "STRING_LITERAL", "BOOL_LITERAL", "FLOAT_LITERAL", "INTEGER_LITERAL", 
  "TIME_NUMBER", "VOLUME_NUMBER", "TEMP_NUMBER", "LPAREN", "RPAREN", "LBRACE", 
  "RBRACE", "LBRACKET", "RBRACKET", "SEMICOLON", "COMMA", "DOT", "ASSIGN", 
  "GT", "LT", "BANG", "TILDE", "QUESTION", "COLON", "EQUALITY", "LTE", "GTE", 
  "NOTEQUAL", "AND", "OR", "INC", "DEC", "ADDITION", "SUBTRACT", "MULTIPLY", 
  "DIVIDE", "BITAND", "BITOR", "CARET", "MOD", "UNDERSCORE", "NANOSECOND", 
  "MICROSECOND", "MILLISECOND", "CENTISECOND", "DECISECOND", "SECOND", "HOUR", 
  "DAY", "WEEK", "MONTH", "YEAR", "NANOLITRE", "MICROLITRE", "MILLILITRE", 
  "CENTILITRE", "DECILITRE", "LITRE", "DECALITRE", "CELSIUS", "FAHRENHEIT", 
  "KELVIN", "WS", "COMMENT", "LINE_COMMENT"
};

dfa::Vocabulary BSParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> BSParser::_tokenNames;

BSParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x60, 0x183, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x55, 0xa, 0x2, 0xc, 
    0x2, 0xe, 0x2, 0x58, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 
    0x5d, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x60, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x66, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x69, 
    0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x6d, 0xa, 0x4, 0xd, 0x4, 0xe, 
    0x4, 0x6e, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x73, 0xa, 0x5, 0xc, 0x5, 0xe, 
    0x5, 0x76, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x7c, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 0x80, 0xa, 0x6, 0xd, 0x6, 
    0xe, 0x6, 0x81, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x89, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x7, 0x8, 0x90, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x93, 0xb, 0x8, 0x3, 0x9, 
    0x5, 0x9, 0x96, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x9b, 
    0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0xa4, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xa8, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xab, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xb3, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xb8, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xc1, 0xa, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xc8, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xd9, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xe1, 
    0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x5, 0x15, 0xe9, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0xf7, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x10a, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x11e, 0xa, 0x19, 0xc, 0x19, 
    0xe, 0x19, 0x121, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x12a, 0xa, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x131, 0xa, 0x1c, 
    0xc, 0x1c, 0xe, 0x1c, 0x134, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 
    0x1f, 0x13f, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x142, 0xb, 0x1f, 0x3, 
    0x20, 0x5, 0x20, 0x145, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x21, 0x5, 0x21, 0x14c, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x7, 0x21, 0x151, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x154, 
    0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x159, 0xa, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 
    0x21, 0x161, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x5, 0x21, 0x167, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x16b, 
    0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x5, 0x22, 0x173, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x17b, 0xa, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x2, 
    0x3, 0x30, 0x28, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 
    0x46, 0x48, 0x4a, 0x4c, 0x2, 0x9, 0x4, 0x2, 0x20, 0x20, 0x24, 0x24, 
    0x4, 0x2, 0x42, 0x43, 0x47, 0x47, 0x3, 0x2, 0x40, 0x41, 0x4, 0x2, 0x32, 
    0x33, 0x39, 0x3a, 0x4, 0x2, 0x38, 0x38, 0x3b, 0x3b, 0x3, 0x2, 0x21, 
    0x24, 0x3, 0x2, 0x1c, 0x1f, 0x2, 0x191, 0x2, 0x4e, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x77, 0x3, 0x2, 0x2, 0x2, 0xc, 0x86, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x14, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x18, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xc2, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x22, 0xcd, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x26, 0xda, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0xef, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xf6, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x32, 0x122, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x126, 0x3, 0x2, 0x2, 0x2, 0x36, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x38, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x137, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x13b, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x144, 0x3, 0x2, 0x2, 0x2, 0x40, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x172, 0x3, 0x2, 0x2, 0x2, 0x44, 0x174, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x176, 0x3, 0x2, 0x2, 0x2, 0x48, 0x17a, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x180, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4f, 0x5, 0x4, 0x3, 0x2, 0x4f, 0x50, 0x5, 0x8, 0x5, 0x2, 0x50, 0x51, 
    0x5, 0x6, 0x4, 0x2, 0x51, 0x52, 0x7, 0xc, 0x2, 0x2, 0x52, 0x56, 0x7, 
    0x37, 0x2, 0x2, 0x53, 0x55, 0x5, 0xa, 0x6, 0x2, 0x54, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x55, 0x58, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0xd, 0x2, 0x2, 0x5a, 
    0x5e, 0x7, 0x37, 0x2, 0x2, 0x5b, 0x5d, 0x5, 0x1c, 0xf, 0x2, 0x5c, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x5d, 0x60, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0x2, 0x2, 
    0x3, 0x62, 0x3, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 0xa, 0x2, 0x2, 
    0x64, 0x66, 0x7, 0x20, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x5, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x9, 0x2, 0x2, 0x6b, 0x6d, 0x7, 0x20, 
    0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x6f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0xb, 0x2, 0x2, 0x71, 
    0x73, 0x7, 0x20, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x73, 0x76, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x9, 0x3, 0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x78, 0x7, 0x7, 0x2, 0x2, 0x78, 0x79, 0x7, 0x20, 0x2, 
    0x2, 0x79, 0x7b, 0x5, 0xc, 0x7, 0x2, 0x7a, 0x7c, 0x5, 0x12, 0xa, 0x2, 
    0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7f, 0x7, 0x2a, 0x2, 0x2, 0x7e, 0x80, 
    0x5, 0x1c, 0xf, 0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x5, 0x14, 0xb, 
    0x2, 0x84, 0x85, 0x7, 0x2b, 0x2, 0x2, 0x85, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x88, 0x7, 0x28, 0x2, 0x2, 0x87, 0x89, 0x5, 0xe, 0x8, 0x2, 0x88, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x29, 0x2, 0x2, 0x8b, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x91, 0x5, 0x10, 0x9, 0x2, 0x8d, 0x8e, 0x7, 0x2f, 
    0x2, 0x2, 0x8e, 0x90, 0x5, 0x10, 0x9, 0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x90, 0x93, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0xf, 0x3, 0x2, 0x2, 0x2, 0x93, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x96, 0x5, 0x3a, 0x1e, 0x2, 0x95, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x97, 0x9a, 0x7, 0x20, 0x2, 0x2, 0x98, 0x99, 0x7, 0x2c, 
    0x2, 0x2, 0x99, 0x9b, 0x7, 0x2d, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 
    0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x9c, 0x9d, 0x7, 0x37, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x3a, 0x1e, 0x2, 0x9e, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x8, 0x2, 0x2, 0xa0, 0xa4, 
    0x7, 0x20, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x8, 0x2, 0x2, 0xa2, 0xa4, 0x5, 
    0x34, 0x1b, 0x2, 0xa3, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0xa4, 0x15, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa9, 0x7, 0x2a, 0x2, 
    0x2, 0xa6, 0xa8, 0x5, 0x1c, 0xf, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0xab, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xac, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa9, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x7, 0x2b, 0x2, 0x2, 0xad, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xb3, 0x5, 0x24, 0x13, 0x2, 0xaf, 0xb3, 0x5, 0x2c, 
    0x17, 0x2, 0xb0, 0xb3, 0x5, 0x2a, 0x16, 0x2, 0xb1, 0xb3, 0x5, 0x34, 
    0x1b, 0x2, 0xb2, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0xb3, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb8, 0x5, 0x30, 0x19, 0x2, 0xb5, 
    0xb8, 0x5, 0x26, 0x14, 0x2, 0xb6, 0xb8, 0x5, 0x34, 0x1b, 0x2, 0xb7, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xc1, 0x5, 
    0x1e, 0x10, 0x2, 0xba, 0xc1, 0x5, 0x20, 0x11, 0x2, 0xbb, 0xc1, 0x5, 
    0x40, 0x21, 0x2, 0xbc, 0xc1, 0x5, 0x3e, 0x20, 0x2, 0xbd, 0xc1, 0x5, 
    0x22, 0x12, 0x2, 0xbe, 0xc1, 0x5, 0x28, 0x15, 0x2, 0xbf, 0xc1, 0x5, 
    0x2e, 0x18, 0x2, 0xc0, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xba, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc3, 0x7, 0x3, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0x32, 0x1a, 0x2, 0xc4, 0xc7, 
    0x5, 0x16, 0xc, 0x2, 0xc5, 0xc6, 0x7, 0x4, 0x2, 0x2, 0xc6, 0xc8, 0x5, 
    0x16, 0xc, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x6, 0x2, 
    0x2, 0xca, 0xcb, 0x5, 0x32, 0x1a, 0x2, 0xcb, 0xcc, 0x5, 0x16, 0xc, 0x2, 
    0xcc, 0x21, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x5, 0x2, 0x2, 0xce, 
    0xcf, 0x9, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x19, 0x2, 0x2, 0xd0, 0xd1, 
    0x5, 0x16, 0xc, 0x2, 0xd1, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x7, 
    0xf, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x48, 0x25, 0x2, 0xd4, 0xd5, 0x7, 0x16, 
    0x2, 0x2, 0xd5, 0xd8, 0x5, 0x48, 0x25, 0x2, 0xd6, 0xd7, 0x7, 0x17, 0x2, 
    0x2, 0xd7, 0xd9, 0x5, 0x4a, 0x26, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 
    0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0x25, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0xdb, 0x7, 0xe, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x20, 0x2, 0x2, 0xdc, 0xdd, 
    0x7, 0x1a, 0x2, 0x2, 0xdd, 0xe0, 0x7, 0x20, 0x2, 0x2, 0xde, 0xdf, 0x7, 
    0x17, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0x4a, 0x26, 0x2, 0xe0, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xe3, 0x7, 0x11, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x20, 0x2, 0x2, 
    0xe4, 0xe5, 0x7, 0x15, 0x2, 0x2, 0xe5, 0xe8, 0x5, 0x4c, 0x27, 0x2, 0xe6, 
    0xe7, 0x7, 0x17, 0x2, 0x2, 0xe7, 0xe9, 0x5, 0x4a, 0x26, 0x2, 0xe8, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x10, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x20, 
    0x2, 0x2, 0xec, 0xed, 0x7, 0x18, 0x2, 0x2, 0xed, 0xee, 0x7, 0x24, 0x2, 
    0x2, 0xee, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x13, 0x2, 0x2, 
    0xf0, 0xf1, 0x7, 0x20, 0x2, 0x2, 0xf1, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xf2, 
    0xf3, 0x7, 0x12, 0x2, 0x2, 0xf3, 0xf7, 0x7, 0x20, 0x2, 0x2, 0xf4, 0xf5, 
    0x7, 0x14, 0x2, 0x2, 0xf5, 0xf7, 0x7, 0x20, 0x2, 0x2, 0xf6, 0xf2, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf7, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0xf8, 0xf9, 0x8, 0x19, 0x1, 0x2, 0xf9, 0xfa, 0x5, 0x42, 0x22, 
    0x2, 0xfa, 0x11f, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0xc, 0x9, 0x2, 0x2, 
    0xfc, 0xfd, 0x9, 0x3, 0x2, 0x2, 0xfd, 0x11e, 0x5, 0x30, 0x19, 0xa, 0xfe, 
    0xff, 0xc, 0x8, 0x2, 0x2, 0xff, 0x100, 0x9, 0x4, 0x2, 0x2, 0x100, 0x11e, 
    0x5, 0x30, 0x19, 0x9, 0x101, 0x109, 0xc, 0x7, 0x2, 0x2, 0x102, 0x103, 
    0x7, 0x33, 0x2, 0x2, 0x103, 0x10a, 0x7, 0x33, 0x2, 0x2, 0x104, 0x105, 
    0x7, 0x32, 0x2, 0x2, 0x105, 0x106, 0x7, 0x32, 0x2, 0x2, 0x106, 0x10a, 
    0x7, 0x32, 0x2, 0x2, 0x107, 0x108, 0x7, 0x32, 0x2, 0x2, 0x108, 0x10a, 
    0x7, 0x32, 0x2, 0x2, 0x109, 0x102, 0x3, 0x2, 0x2, 0x2, 0x109, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0x11e, 0x5, 0x30, 0x19, 0x8, 0x10c, 0x10d, 
    0xc, 0x6, 0x2, 0x2, 0x10d, 0x10e, 0x9, 0x5, 0x2, 0x2, 0x10e, 0x11e, 
    0x5, 0x30, 0x19, 0x7, 0x10f, 0x110, 0xc, 0x5, 0x2, 0x2, 0x110, 0x111, 
    0x9, 0x6, 0x2, 0x2, 0x111, 0x11e, 0x5, 0x30, 0x19, 0x6, 0x112, 0x113, 
    0xc, 0x4, 0x2, 0x2, 0x113, 0x114, 0x7, 0x3c, 0x2, 0x2, 0x114, 0x11e, 
    0x5, 0x30, 0x19, 0x5, 0x115, 0x116, 0xc, 0x3, 0x2, 0x2, 0x116, 0x117, 
    0x7, 0x3d, 0x2, 0x2, 0x117, 0x11e, 0x5, 0x30, 0x19, 0x4, 0x118, 0x119, 
    0xc, 0xa, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x2c, 0x2, 0x2, 0x11a, 0x11b, 
    0x5, 0x30, 0x19, 0x2, 0x11b, 0x11c, 0x7, 0x2d, 0x2, 0x2, 0x11c, 0x11e, 
    0x3, 0x2, 0x2, 0x2, 0x11d, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x11d, 0xfe, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x101, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x10c, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x112, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x115, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x118, 0x3, 
    0x2, 0x2, 0x2, 0x11e, 0x121, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x7, 0x28, 
    0x2, 0x2, 0x123, 0x124, 0x5, 0x30, 0x19, 0x2, 0x124, 0x125, 0x7, 0x29, 
    0x2, 0x2, 0x125, 0x33, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x7, 0x20, 
    0x2, 0x2, 0x127, 0x129, 0x7, 0x28, 0x2, 0x2, 0x128, 0x12a, 0x5, 0x36, 
    0x1c, 0x2, 0x129, 0x128, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 
    0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x7, 0x29, 
    0x2, 0x2, 0x12c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x132, 0x5, 0x30, 
    0x19, 0x2, 0x12e, 0x12f, 0x7, 0x2f, 0x2, 0x2, 0x12f, 0x131, 0x5, 0x30, 
    0x19, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x131, 0x134, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x37, 0x3, 0x2, 0x2, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x136, 0x5, 0x46, 0x24, 0x2, 0x136, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x137, 0x138, 0x7, 0x2c, 0x2, 0x2, 0x138, 0x139, 0x5, 0x3c, 0x1f, 
    0x2, 0x139, 0x13a, 0x7, 0x2d, 0x2, 0x2, 0x13a, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x13b, 0x140, 0x5, 0x38, 0x1d, 0x2, 0x13c, 0x13d, 0x7, 0x2e, 0x2, 
    0x2, 0x13d, 0x13f, 0x5, 0x38, 0x1d, 0x2, 0x13e, 0x13c, 0x3, 0x2, 0x2, 
    0x2, 0x13f, 0x142, 0x3, 0x2, 0x2, 0x2, 0x140, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x143, 0x145, 0x5, 0x3a, 0x1e, 0x2, 
    0x144, 0x143, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 0x2, 0x2, 
    0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x7, 0x20, 0x2, 0x2, 
    0x147, 0x148, 0x7, 0x31, 0x2, 0x2, 0x148, 0x149, 0x5, 0x1a, 0xe, 0x2, 
    0x149, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14c, 0x5, 0x3a, 0x1e, 0x2, 
    0x14b, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 
    0x14c, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x152, 0x7, 0x20, 0x2, 0x2, 
    0x14e, 0x14f, 0x7, 0x2f, 0x2, 0x2, 0x14f, 0x151, 0x7, 0x20, 0x2, 0x2, 
    0x150, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x151, 0x154, 0x3, 0x2, 0x2, 0x2, 
    0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x3, 0x2, 0x2, 0x2, 
    0x153, 0x155, 0x3, 0x2, 0x2, 0x2, 0x154, 0x152, 0x3, 0x2, 0x2, 0x2, 
    0x155, 0x156, 0x7, 0x31, 0x2, 0x2, 0x156, 0x16b, 0x5, 0x2a, 0x16, 0x2, 
    0x157, 0x159, 0x5, 0x3a, 0x1e, 0x2, 0x158, 0x157, 0x3, 0x2, 0x2, 0x2, 
    0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 0x2, 0x2, 
    0x15a, 0x15b, 0x7, 0x20, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x2c, 0x2, 0x2, 
    0x15c, 0x15d, 0x7, 0x2d, 0x2, 0x2, 0x15d, 0x15e, 0x7, 0x31, 0x2, 0x2, 
    0x15e, 0x16b, 0x5, 0x2a, 0x16, 0x2, 0x15f, 0x161, 0x5, 0x3a, 0x1e, 0x2, 
    0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 
    0x161, 0x162, 0x3, 0x2, 0x2, 0x2, 0x162, 0x166, 0x7, 0x20, 0x2, 0x2, 
    0x163, 0x164, 0x7, 0x2c, 0x2, 0x2, 0x164, 0x165, 0x7, 0x24, 0x2, 0x2, 
    0x165, 0x167, 0x7, 0x2d, 0x2, 0x2, 0x166, 0x163, 0x3, 0x2, 0x2, 0x2, 
    0x166, 0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x169, 0x7, 0x31, 0x2, 0x2, 0x169, 0x16b, 0x5, 0x18, 0xd, 0x2, 
    0x16a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x158, 0x3, 0x2, 0x2, 0x2, 
    0x16a, 0x160, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x41, 0x3, 0x2, 0x2, 0x2, 0x16c, 
    0x16d, 0x7, 0x28, 0x2, 0x2, 0x16d, 0x16e, 0x5, 0x30, 0x19, 0x2, 0x16e, 
    0x16f, 0x7, 0x29, 0x2, 0x2, 0x16f, 0x173, 0x3, 0x2, 0x2, 0x2, 0x170, 
    0x173, 0x5, 0x44, 0x23, 0x2, 0x171, 0x173, 0x7, 0x20, 0x2, 0x2, 0x172, 
    0x16c, 0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 
    0x171, 0x3, 0x2, 0x2, 0x2, 0x173, 0x43, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 
    0x9, 0x7, 0x2, 0x2, 0x175, 0x45, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x9, 
    0x8, 0x2, 0x2, 0x177, 0x47, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x7, 0x26, 
    0x2, 0x2, 0x179, 0x17b, 0x7, 0x1b, 0x2, 0x2, 0x17a, 0x178, 0x3, 0x2, 
    0x2, 0x2, 0x17a, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 
    0x2, 0x2, 0x17c, 0x17d, 0x7, 0x20, 0x2, 0x2, 0x17d, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x17e, 0x17f, 0x7, 0x25, 0x2, 0x2, 0x17f, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x180, 0x181, 0x7, 0x27, 0x2, 0x2, 0x181, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x56, 0x5e, 0x67, 0x6e, 0x74, 0x7b, 0x81, 0x88, 0x91, 
    0x95, 0x9a, 0xa3, 0xa9, 0xb2, 0xb7, 0xc0, 0xc7, 0xd8, 0xe0, 0xe8, 0xf6, 
    0x109, 0x11d, 0x11f, 0x129, 0x132, 0x140, 0x144, 0x14b, 0x152, 0x158, 
    0x160, 0x166, 0x16a, 0x172, 0x17a, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

BSParser::Initializer BSParser::_init;
