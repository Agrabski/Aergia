
// Generated from AergiaCpp14.g4 by ANTLR 4.7.2

#pragma once


#include "../antlr/src/antlr4-runtime.h"




class  AergiaCpp14Lexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, MultiLineMacro = 17, Directive = 18, Alignas = 19, 
    Alignof = 20, Asm = 21, Auto = 22, Bool = 23, Break = 24, Case = 25, 
    Catch = 26, Char = 27, Char16 = 28, Char32 = 29, Class = 30, Const = 31, 
    Constexpr = 32, Const_cast = 33, Continue = 34, Decltype = 35, Default = 36, 
    Delete = 37, Do = 38, Double = 39, Dynamic_cast = 40, Else = 41, Enum = 42, 
    Explicit = 43, Export = 44, Extern = 45, False = 46, Final = 47, Float = 48, 
    For = 49, Friend = 50, Goto = 51, If = 52, Inline = 53, Int = 54, Long = 55, 
    Mutable = 56, Namespace = 57, New = 58, Noexcept = 59, Nullptr = 60, 
    Operator = 61, Override = 62, Private = 63, Protected = 64, Public = 65, 
    Register = 66, Reinterpret_cast = 67, Return = 68, Short = 69, Signed = 70, 
    Sizeof = 71, Static = 72, Static_assert = 73, Static_cast = 74, Struct = 75, 
    Switch = 76, Template = 77, This = 78, Thread_local = 79, Throw = 80, 
    True = 81, Try = 82, Typedef = 83, Typeid_ = 84, Typename_ = 85, Union = 86, 
    Unsigned = 87, Using = 88, Virtual = 89, Void = 90, Volatile = 91, Wchar = 92, 
    While = 93, LeftParen = 94, RightParen = 95, LeftBracket = 96, RightBracket = 97, 
    LeftBrace = 98, RightBrace = 99, Plus = 100, Minus = 101, Star = 102, 
    Div = 103, Mod = 104, Caret = 105, And = 106, Or = 107, Tilde = 108, 
    Not = 109, Assign = 110, Less = 111, Greater = 112, PlusAssign = 113, 
    MinusAssign = 114, StarAssign = 115, DivAssign = 116, ModAssign = 117, 
    XorAssign = 118, AndAssign = 119, OrAssign = 120, LeftShift = 121, RightShift = 122, 
    LeftShiftAssign = 123, RightShiftAssign = 124, Equal = 125, NotEqual = 126, 
    LessEqual = 127, GreaterEqual = 128, AndAnd = 129, OrOr = 130, PlusPlus = 131, 
    MinusMinus = 132, Comma = 133, ArrowStar = 134, Arrow = 135, Question = 136, 
    Colon = 137, Doublecolon = 138, Semi = 139, Dot = 140, DotStar = 141, 
    Ellipsis = 142, Identifier = 143, Integerliteral = 144, Decimalliteral = 145, 
    Octalliteral = 146, Hexadecimalliteral = 147, Binaryliteral = 148, Integersuffix = 149, 
    Characterliteral = 150, Floatingliteral = 151, Stringliteral = 152, 
    Userdefinedintegerliteral = 153, Userdefinedfloatingliteral = 154, Userdefinedstringliteral = 155, 
    Userdefinedcharacterliteral = 156, Whitespace = 157, Newline = 158, 
    BlockComment = 159, LineComment = 160
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

