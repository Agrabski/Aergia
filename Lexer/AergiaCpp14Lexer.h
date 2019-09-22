
// Generated from AergiaCpp14.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  AergiaCpp14Lexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    MultiLineMacro = 15, Directive = 16, Alignas = 17, Alignof = 18, Asm = 19, 
    Auto = 20, Bool = 21, Break = 22, Case = 23, Catch = 24, Char = 25, 
    Char16 = 26, Char32 = 27, Class = 28, Const = 29, Constexpr = 30, Const_cast = 31, 
    Continue = 32, Decltype = 33, Default = 34, Delete = 35, Do = 36, Double = 37, 
    Dynamic_cast = 38, Else = 39, Enum = 40, Explicit = 41, Export = 42, 
    Extern = 43, False = 44, Final = 45, Float = 46, For = 47, Friend = 48, 
    Goto = 49, If = 50, Inline = 51, Int = 52, Long = 53, Mutable = 54, 
    Namespace = 55, New = 56, Noexcept = 57, Nullptr = 58, Operator = 59, 
    Override = 60, Private = 61, Protected = 62, Public = 63, Register = 64, 
    Reinterpret_cast = 65, Return = 66, Short = 67, Signed = 68, Sizeof = 69, 
    Static = 70, Static_assert = 71, Static_cast = 72, Struct = 73, Switch = 74, 
    Template = 75, This = 76, Thread_local = 77, Throw = 78, True = 79, 
    Try = 80, Typedef = 81, Typeid_ = 82, Typename_ = 83, Union = 84, Unsigned = 85, 
    Using = 86, Virtual = 87, Void = 88, Volatile = 89, Wchar = 90, While = 91, 
    LeftParen = 92, RightParen = 93, LeftBracket = 94, RightBracket = 95, 
    LeftBrace = 96, RightBrace = 97, Plus = 98, Minus = 99, Star = 100, 
    Div = 101, Mod = 102, Caret = 103, And = 104, Or = 105, Tilde = 106, 
    Not = 107, Assign = 108, Less = 109, Greater = 110, PlusAssign = 111, 
    MinusAssign = 112, StarAssign = 113, DivAssign = 114, ModAssign = 115, 
    XorAssign = 116, AndAssign = 117, OrAssign = 118, LeftShift = 119, RightShift = 120, 
    LeftShiftAssign = 121, RightShiftAssign = 122, Equal = 123, NotEqual = 124, 
    LessEqual = 125, GreaterEqual = 126, AndAnd = 127, OrOr = 128, PlusPlus = 129, 
    MinusMinus = 130, Comma = 131, ArrowStar = 132, Arrow = 133, Question = 134, 
    Colon = 135, Doublecolon = 136, Semi = 137, Dot = 138, DotStar = 139, 
    Ellipsis = 140, Identifier = 141, Integerliteral = 142, Decimalliteral = 143, 
    Octalliteral = 144, Hexadecimalliteral = 145, Binaryliteral = 146, Integersuffix = 147, 
    Characterliteral = 148, Floatingliteral = 149, Stringliteral = 150, 
    Userdefinedintegerliteral = 151, Userdefinedfloatingliteral = 152, Userdefinedstringliteral = 153, 
    Userdefinedcharacterliteral = 154, Whitespace = 155, Newline = 156, 
    BlockComment = 157, LineComment = 158
  };

  AergiaCpp14Lexer(antlr4::CharStream *input);
  ~AergiaCpp14Lexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

