
// Generated from AergiaCpp14.g4 by ANTLR 4.7.2

#pragma once


#include "../antlr/src/antlr4-runtime.h"




class  AergiaCpp14Lexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, MultiLineMacro = 16, Directive = 17, Alignas = 18, Alignof = 19, 
    Asm = 20, Auto = 21, Bool = 22, Break = 23, Case = 24, Catch = 25, Char = 26, 
    Char16 = 27, Char32 = 28, Class = 29, Const = 30, Constexpr = 31, Const_cast = 32, 
    Continue = 33, Decltype = 34, Default = 35, Delete = 36, Do = 37, Double = 38, 
    Dynamic_cast = 39, Else = 40, Enum = 41, Explicit = 42, Export = 43, 
    Extern = 44, False = 45, Final = 46, Float = 47, For = 48, Friend = 49, 
    Goto = 50, If = 51, Inline = 52, Int = 53, Long = 54, Mutable = 55, 
    Namespace = 56, New = 57, Noexcept = 58, Nullptr = 59, Operator = 60, 
    Override = 61, Private = 62, Protected = 63, Public = 64, Register = 65, 
    Reinterpret_cast = 66, Return = 67, Short = 68, Signed = 69, Sizeof = 70, 
    Static = 71, Static_assert = 72, Static_cast = 73, Struct = 74, Switch = 75, 
    Template = 76, This = 77, Thread_local = 78, Throw = 79, True = 80, 
    Try = 81, Typedef = 82, Typeid_ = 83, Typename_ = 84, Union = 85, Unsigned = 86, 
    Using = 87, Virtual = 88, Void = 89, Volatile = 90, Wchar = 91, While = 92, 
    LeftParen = 93, RightParen = 94, LeftBracket = 95, RightBracket = 96, 
    LeftBrace = 97, RightBrace = 98, Plus = 99, Minus = 100, Star = 101, 
    Div = 102, Mod = 103, Caret = 104, And = 105, Or = 106, Tilde = 107, 
    Not = 108, Assign = 109, Less = 110, Greater = 111, PlusAssign = 112, 
    MinusAssign = 113, StarAssign = 114, DivAssign = 115, ModAssign = 116, 
    XorAssign = 117, AndAssign = 118, OrAssign = 119, LeftShift = 120, RightShift = 121, 
    LeftShiftAssign = 122, RightShiftAssign = 123, Equal = 124, NotEqual = 125, 
    LessEqual = 126, GreaterEqual = 127, AndAnd = 128, OrOr = 129, PlusPlus = 130, 
    MinusMinus = 131, Comma = 132, ArrowStar = 133, Arrow = 134, Question = 135, 
    Colon = 136, Doublecolon = 137, Semi = 138, Dot = 139, DotStar = 140, 
    Ellipsis = 141, Identifier = 142, Integerliteral = 143, Decimalliteral = 144, 
    Octalliteral = 145, Hexadecimalliteral = 146, Binaryliteral = 147, Integersuffix = 148, 
    Characterliteral = 149, Floatingliteral = 150, Stringliteral = 151, 
    Userdefinedintegerliteral = 152, Userdefinedfloatingliteral = 153, Userdefinedstringliteral = 154, 
    Userdefinedcharacterliteral = 155, Whitespace = 156, Newline = 157, 
    BlockComment = 158, LineComment = 159
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

