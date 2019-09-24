
// Generated from AergiaCpp14.g4 by ANTLR 4.7.2

#pragma once


#include "../antlr/src/antlr4-runtime.h"




class  AergiaCpp14Parser : public antlr4::Parser {
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

  enum {
    RuleTranslationunit = 0, RuleAergiaexpressionbegin = 1, RuleAergiaexpressionend = 2, 
    RuleAergiaBlock = 3, RuleAergiaexpression = 4, RuleAnonymousExpression = 5, 
    RuleAnoynmousBody = 6, RuleForeach = 7, RuleForeachheader = 8, RuleForeachbody = 9, 
    RuleCallchain = 10, RulePrimaryexpression = 11, RuleIdexpression = 12, 
    RuleUnqualifiedid = 13, RuleQualifiedid = 14, RuleNestednamespecifier = 15, 
    RuleLambdaexpression = 16, RuleLambdaintroducer = 17, RuleLambdacapture = 18, 
    RuleCapturedefault = 19, RuleCapturelist = 20, RuleCapture = 21, RuleSimplecapture = 22, 
    RuleInitcapture = 23, RuleLambdadeclarator = 24, RulePostfixexpression = 25, 
    RuleTypeidofexpr = 26, RuleTypeidofthetypeid = 27, RuleExpressionlist = 28, 
    RulePseudodestructorname = 29, RuleUnaryexpression = 30, RuleUnaryoperator = 31, 
    RuleNewexpression = 32, RuleNewplacement = 33, RuleNewtypeid = 34, RuleNewdeclarator = 35, 
    RuleNoptrnewdeclarator = 36, RuleNewinitializer = 37, RuleDeleteexpression = 38, 
    RuleNoexceptexpression = 39, RuleCastexpression = 40, RulePmexpression = 41, 
    RuleMultiplicativeexpression = 42, RuleAdditiveexpression = 43, RuleShiftexpression = 44, 
    RuleShiftoperator = 45, RuleRelationalexpression = 46, RuleEqualityexpression = 47, 
    RuleAndexpression = 48, RuleExclusiveorexpression = 49, RuleInclusiveorexpression = 50, 
    RuleLogicalandexpression = 51, RuleLogicalorexpression = 52, RuleConditionalexpression = 53, 
    RuleAssignmentexpression = 54, RuleAssignmentoperator = 55, RuleExpression = 56, 
    RuleConstantexpression = 57, RuleStatement = 58, RuleLabeledstatement = 59, 
    RuleExpressionstatement = 60, RuleCompoundstatement = 61, RuleStatementseq = 62, 
    RuleSelectionstatement = 63, RuleCondition = 64, RuleIterationstatement = 65, 
    RuleForinitstatement = 66, RuleForrangedeclaration = 67, RuleForrangeinitializer = 68, 
    RuleJumpstatement = 69, RuleDeclarationstatement = 70, RuleDeclarationseq = 71, 
    RuleDeclaration = 72, RuleBlockdeclaration = 73, RuleAliasdeclaration = 74, 
    RuleSimpledeclaration = 75, RuleStatic_assertdeclaration = 76, RuleEmptydeclaration = 77, 
    RuleAttributedeclaration = 78, RuleDeclspecifier = 79, RuleDeclspecifierseq = 80, 
    RuleStorageclassspecifier = 81, RuleFunctionspecifier = 82, RuleTypedefname = 83, 
    RuleTypespecifier = 84, RuleTrailingtypespecifier = 85, RuleTypespecifierseq = 86, 
    RuleTrailingtypespecifierseq = 87, RuleSimpletypespecifier = 88, RuleThetypename = 89, 
    RuleDecltypespecifier = 90, RuleElaboratedtypespecifier = 91, RuleEnumname = 92, 
    RuleEnumspecifier = 93, RuleEnumhead = 94, RuleOpaqueenumdeclaration = 95, 
    RuleEnumkey = 96, RuleEnumbase = 97, RuleEnumeratorlist = 98, RuleEnumeratordefinition = 99, 
    RuleEnumerator = 100, RuleNamespacename = 101, RuleOriginalnamespacename = 102, 
    RuleNamespacedefinition = 103, RuleNamednamespacedefinition = 104, RuleOriginalnamespacedefinition = 105, 
    RuleUnnamednamespacedefinition = 106, RuleNamespacebody = 107, RuleNamespacealias = 108, 
    RuleNamespacealiasdefinition = 109, RuleQualifiednamespacespecifier = 110, 
    RuleUsingdeclaration = 111, RuleUsingdirective = 112, RuleAsmdefinition = 113, 
    RuleLinkagespecification = 114, RuleAttributespecifierseq = 115, RuleAttributespecifier = 116, 
    RuleAlignmentspecifier = 117, RuleAttributelist = 118, RuleAttribute = 119, 
    RuleAttributetoken = 120, RuleAttributescopedtoken = 121, RuleAttributenamespace = 122, 
    RuleAttributeargumentclause = 123, RuleBalancedtokenseq = 124, RuleBalancedtoken = 125, 
    RuleInitdeclaratorlist = 126, RuleInitdeclarator = 127, RuleDeclarator = 128, 
    RulePtrdeclarator = 129, RuleNoptrdeclarator = 130, RuleParametersandqualifiers = 131, 
    RuleTrailingreturntype = 132, RulePtroperator = 133, RuleCvqualifierseq = 134, 
    RuleCvqualifier = 135, RuleRefqualifier = 136, RuleDeclaratorid = 137, 
    RuleThetypeid = 138, RuleAbstractdeclarator = 139, RulePtrabstractdeclarator = 140, 
    RuleNoptrabstractdeclarator = 141, RuleAbstractpackdeclarator = 142, 
    RuleNoptrabstractpackdeclarator = 143, RuleParameterdeclarationclause = 144, 
    RuleParameterdeclarationlist = 145, RuleParameterdeclaration = 146, 
    RuleFunctiondefinition = 147, RuleFunctionbody = 148, RuleInitializer = 149, 
    RuleBraceorequalinitializer = 150, RuleInitializerclause = 151, RuleInitializerlist = 152, 
    RuleBracedinitlist = 153, RuleClassname = 154, RuleClassspecifier = 155, 
    RuleClasshead = 156, RuleClassheadname = 157, RuleClassvirtspecifier = 158, 
    RuleClasskey = 159, RuleMemberspecification = 160, RuleMemberdeclaration = 161, 
    RuleMemberdeclaratorlist = 162, RuleMemberdeclarator = 163, RuleVirtspecifierseq = 164, 
    RuleVirtspecifier = 165, RulePurespecifier = 166, RuleBaseclause = 167, 
    RuleBasespecifierlist = 168, RuleBasespecifier = 169, RuleClassordecltype = 170, 
    RuleBasetypespecifier = 171, RuleAccessspecifier = 172, RuleConversionfunctionid = 173, 
    RuleConversiontypeid = 174, RuleConversiondeclarator = 175, RuleCtorinitializer = 176, 
    RuleMeminitializerlist = 177, RuleMeminitializer = 178, RuleMeminitializerid = 179, 
    RuleOperatorfunctionid = 180, RuleLiteraloperatorid = 181, RuleTemplatedeclaration = 182, 
    RuleTemplateparameterlist = 183, RuleTemplateparameter = 184, RuleTypeparameter = 185, 
    RuleSimpletemplateid = 186, RuleTemplateid = 187, RuleTemplatename = 188, 
    RuleTemplateargumentlist = 189, RuleTemplateargument = 190, RuleTypenamespecifier = 191, 
    RuleExplicitinstantiation = 192, RuleExplicitspecialization = 193, RuleTryblock = 194, 
    RuleFunctiontryblock = 195, RuleHandlerseq = 196, RuleHandler = 197, 
    RuleExceptiondeclaration = 198, RuleThrowexpression = 199, RuleExceptionspecification = 200, 
    RuleDynamicexceptionspecification = 201, RuleTypeidlist = 202, RuleNoexceptspecification = 203, 
    RuleTheoperator = 204, RuleLiteral = 205, RuleBooleanliteral = 206, 
    RulePointerliteral = 207, RuleUserdefinedliteral = 208
  };

  AergiaCpp14Parser(antlr4::TokenStream *input);
  ~AergiaCpp14Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class TranslationunitContext;
  class AergiaexpressionbeginContext;
  class AergiaexpressionendContext;
  class AergiaBlockContext;
  class AergiaexpressionContext;
  class AnonymousExpressionContext;
  class AnoynmousBodyContext;
  class ForeachContext;
  class ForeachheaderContext;
  class ForeachbodyContext;
  class CallchainContext;
  class PrimaryexpressionContext;
  class IdexpressionContext;
  class UnqualifiedidContext;
  class QualifiedidContext;
  class NestednamespecifierContext;
  class LambdaexpressionContext;
  class LambdaintroducerContext;
  class LambdacaptureContext;
  class CapturedefaultContext;
  class CapturelistContext;
  class CaptureContext;
  class SimplecaptureContext;
  class InitcaptureContext;
  class LambdadeclaratorContext;
  class PostfixexpressionContext;
  class TypeidofexprContext;
  class TypeidofthetypeidContext;
  class ExpressionlistContext;
  class PseudodestructornameContext;
  class UnaryexpressionContext;
  class UnaryoperatorContext;
  class NewexpressionContext;
  class NewplacementContext;
  class NewtypeidContext;
  class NewdeclaratorContext;
  class NoptrnewdeclaratorContext;
  class NewinitializerContext;
  class DeleteexpressionContext;
  class NoexceptexpressionContext;
  class CastexpressionContext;
  class PmexpressionContext;
  class MultiplicativeexpressionContext;
  class AdditiveexpressionContext;
  class ShiftexpressionContext;
  class ShiftoperatorContext;
  class RelationalexpressionContext;
  class EqualityexpressionContext;
  class AndexpressionContext;
  class ExclusiveorexpressionContext;
  class InclusiveorexpressionContext;
  class LogicalandexpressionContext;
  class LogicalorexpressionContext;
  class ConditionalexpressionContext;
  class AssignmentexpressionContext;
  class AssignmentoperatorContext;
  class ExpressionContext;
  class ConstantexpressionContext;
  class StatementContext;
  class LabeledstatementContext;
  class ExpressionstatementContext;
  class CompoundstatementContext;
  class StatementseqContext;
  class SelectionstatementContext;
  class ConditionContext;
  class IterationstatementContext;
  class ForinitstatementContext;
  class ForrangedeclarationContext;
  class ForrangeinitializerContext;
  class JumpstatementContext;
  class DeclarationstatementContext;
  class DeclarationseqContext;
  class DeclarationContext;
  class BlockdeclarationContext;
  class AliasdeclarationContext;
  class SimpledeclarationContext;
  class Static_assertdeclarationContext;
  class EmptydeclarationContext;
  class AttributedeclarationContext;
  class DeclspecifierContext;
  class DeclspecifierseqContext;
  class StorageclassspecifierContext;
  class FunctionspecifierContext;
  class TypedefnameContext;
  class TypespecifierContext;
  class TrailingtypespecifierContext;
  class TypespecifierseqContext;
  class TrailingtypespecifierseqContext;
  class SimpletypespecifierContext;
  class ThetypenameContext;
  class DecltypespecifierContext;
  class ElaboratedtypespecifierContext;
  class EnumnameContext;
  class EnumspecifierContext;
  class EnumheadContext;
  class OpaqueenumdeclarationContext;
  class EnumkeyContext;
  class EnumbaseContext;
  class EnumeratorlistContext;
  class EnumeratordefinitionContext;
  class EnumeratorContext;
  class NamespacenameContext;
  class OriginalnamespacenameContext;
  class NamespacedefinitionContext;
  class NamednamespacedefinitionContext;
  class OriginalnamespacedefinitionContext;
  class UnnamednamespacedefinitionContext;
  class NamespacebodyContext;
  class NamespacealiasContext;
  class NamespacealiasdefinitionContext;
  class QualifiednamespacespecifierContext;
  class UsingdeclarationContext;
  class UsingdirectiveContext;
  class AsmdefinitionContext;
  class LinkagespecificationContext;
  class AttributespecifierseqContext;
  class AttributespecifierContext;
  class AlignmentspecifierContext;
  class AttributelistContext;
  class AttributeContext;
  class AttributetokenContext;
  class AttributescopedtokenContext;
  class AttributenamespaceContext;
  class AttributeargumentclauseContext;
  class BalancedtokenseqContext;
  class BalancedtokenContext;
  class InitdeclaratorlistContext;
  class InitdeclaratorContext;
  class DeclaratorContext;
  class PtrdeclaratorContext;
  class NoptrdeclaratorContext;
  class ParametersandqualifiersContext;
  class TrailingreturntypeContext;
  class PtroperatorContext;
  class CvqualifierseqContext;
  class CvqualifierContext;
  class RefqualifierContext;
  class DeclaratoridContext;
  class ThetypeidContext;
  class AbstractdeclaratorContext;
  class PtrabstractdeclaratorContext;
  class NoptrabstractdeclaratorContext;
  class AbstractpackdeclaratorContext;
  class NoptrabstractpackdeclaratorContext;
  class ParameterdeclarationclauseContext;
  class ParameterdeclarationlistContext;
  class ParameterdeclarationContext;
  class FunctiondefinitionContext;
  class FunctionbodyContext;
  class InitializerContext;
  class BraceorequalinitializerContext;
  class InitializerclauseContext;
  class InitializerlistContext;
  class BracedinitlistContext;
  class ClassnameContext;
  class ClassspecifierContext;
  class ClassheadContext;
  class ClassheadnameContext;
  class ClassvirtspecifierContext;
  class ClasskeyContext;
  class MemberspecificationContext;
  class MemberdeclarationContext;
  class MemberdeclaratorlistContext;
  class MemberdeclaratorContext;
  class VirtspecifierseqContext;
  class VirtspecifierContext;
  class PurespecifierContext;
  class BaseclauseContext;
  class BasespecifierlistContext;
  class BasespecifierContext;
  class ClassordecltypeContext;
  class BasetypespecifierContext;
  class AccessspecifierContext;
  class ConversionfunctionidContext;
  class ConversiontypeidContext;
  class ConversiondeclaratorContext;
  class CtorinitializerContext;
  class MeminitializerlistContext;
  class MeminitializerContext;
  class MeminitializeridContext;
  class OperatorfunctionidContext;
  class LiteraloperatoridContext;
  class TemplatedeclarationContext;
  class TemplateparameterlistContext;
  class TemplateparameterContext;
  class TypeparameterContext;
  class SimpletemplateidContext;
  class TemplateidContext;
  class TemplatenameContext;
  class TemplateargumentlistContext;
  class TemplateargumentContext;
  class TypenamespecifierContext;
  class ExplicitinstantiationContext;
  class ExplicitspecializationContext;
  class TryblockContext;
  class FunctiontryblockContext;
  class HandlerseqContext;
  class HandlerContext;
  class ExceptiondeclarationContext;
  class ThrowexpressionContext;
  class ExceptionspecificationContext;
  class DynamicexceptionspecificationContext;
  class TypeidlistContext;
  class NoexceptspecificationContext;
  class TheoperatorContext;
  class LiteralContext;
  class BooleanliteralContext;
  class PointerliteralContext;
  class UserdefinedliteralContext; 

  class  TranslationunitContext : public antlr4::ParserRuleContext {
  public:
    TranslationunitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    DeclarationseqContext *declarationseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TranslationunitContext* translationunit();

  class  AergiaexpressionbeginContext : public antlr4::ParserRuleContext {
  public:
    AergiaexpressionbeginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AergiaexpressionbeginContext* aergiaexpressionbegin();

  class  AergiaexpressionendContext : public antlr4::ParserRuleContext {
  public:
    AergiaexpressionendContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AergiaexpressionendContext* aergiaexpressionend();

  class  AergiaBlockContext : public antlr4::ParserRuleContext {
  public:
    AergiaBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementseqContext *statementseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AergiaBlockContext* aergiaBlock();

  class  AergiaexpressionContext : public antlr4::ParserRuleContext {
  public:
    AergiaexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AergiaexpressionbeginContext *aergiaexpressionbegin();
    CallchainContext *callchain();
    AergiaexpressionendContext *aergiaexpressionend();
    AnonymousExpressionContext *anonymousExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AergiaexpressionContext* aergiaexpression();

  class  AnonymousExpressionContext : public antlr4::ParserRuleContext {
  public:
    AnonymousExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    AnoynmousBodyContext *anoynmousBody();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnonymousExpressionContext* anonymousExpression();

  class  AnoynmousBodyContext : public antlr4::ParserRuleContext {
  public:
    AnoynmousBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerclauseContext *initializerclause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnoynmousBodyContext* anoynmousBody();

  class  ForeachContext : public antlr4::ParserRuleContext {
  public:
    ForeachContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForeachheaderContext *foreachheader();
    antlr4::tree::TerminalNode *RightParen();
    ForeachbodyContext *foreachbody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForeachContext* foreach();

  class  ForeachheaderContext : public antlr4::ParserRuleContext {
  public:
    ForeachheaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AergiaexpressionbeginContext *> aergiaexpressionbegin();
    AergiaexpressionbeginContext* aergiaexpressionbegin(size_t i);
    antlr4::tree::TerminalNode *Identifier();
    CallchainContext *callchain();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForeachheaderContext* foreachheader();

  class  ForeachbodyContext : public antlr4::ParserRuleContext {
  public:
    ForeachbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AergiaexpressionContext *aergiaexpression();
    AergiaBlockContext *aergiaBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForeachbodyContext* foreachbody();

  class  CallchainContext : public antlr4::ParserRuleContext {
  public:
    CallchainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Dot();
    CallchainContext *callchain();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallchainContext* callchain();

  class  PrimaryexpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParen();
    IdexpressionContext *idexpression();
    LambdaexpressionContext *lambdaexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryexpressionContext* primaryexpression();

  class  IdexpressionContext : public antlr4::ParserRuleContext {
  public:
    IdexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedidContext *unqualifiedid();
    QualifiedidContext *qualifiedid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdexpressionContext* idexpression();

  class  UnqualifiedidContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    OperatorfunctionidContext *operatorfunctionid();
    ConversionfunctionidContext *conversionfunctionid();
    LiteraloperatoridContext *literaloperatorid();
    antlr4::tree::TerminalNode *Tilde();
    ClassnameContext *classname();
    DecltypespecifierContext *decltypespecifier();
    TemplateidContext *templateid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnqualifiedidContext* unqualifiedid();

  class  QualifiedidContext : public antlr4::ParserRuleContext {
  public:
    QualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestednamespecifierContext *nestednamespecifier();
    UnqualifiedidContext *unqualifiedid();
    antlr4::tree::TerminalNode *Template();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedidContext* qualifiedid();

  class  NestednamespecifierContext : public antlr4::ParserRuleContext {
  public:
    NestednamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Doublecolon();
    ThetypenameContext *thetypename();
    NamespacenameContext *namespacename();
    DecltypespecifierContext *decltypespecifier();
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Template();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestednamespecifierContext* nestednamespecifier();
  NestednamespecifierContext* nestednamespecifier(int precedence);
  class  LambdaexpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaintroducerContext *lambdaintroducer();
    CompoundstatementContext *compoundstatement();
    LambdadeclaratorContext *lambdadeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaexpressionContext* lambdaexpression();

  class  LambdaintroducerContext : public antlr4::ParserRuleContext {
  public:
    LambdaintroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    LambdacaptureContext *lambdacapture();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaintroducerContext* lambdaintroducer();

  class  LambdacaptureContext : public antlr4::ParserRuleContext {
  public:
    LambdacaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CapturedefaultContext *capturedefault();
    CapturelistContext *capturelist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdacaptureContext* lambdacapture();

  class  CapturedefaultContext : public antlr4::ParserRuleContext {
  public:
    CapturedefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Assign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CapturedefaultContext* capturedefault();

  class  CapturelistContext : public antlr4::ParserRuleContext {
  public:
    CapturelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaptureContext *capture();
    antlr4::tree::TerminalNode *Ellipsis();
    CapturelistContext *capturelist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CapturelistContext* capturelist();
  CapturelistContext* capturelist(int precedence);
  class  CaptureContext : public antlr4::ParserRuleContext {
  public:
    CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimplecaptureContext *simplecapture();
    InitcaptureContext *initcapture();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureContext* capture();

  class  SimplecaptureContext : public antlr4::ParserRuleContext {
  public:
    SimplecaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *This();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimplecaptureContext* simplecapture();

  class  InitcaptureContext : public antlr4::ParserRuleContext {
  public:
    InitcaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    InitializerContext *initializer();
    antlr4::tree::TerminalNode *And();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitcaptureContext* initcapture();

  class  LambdadeclaratorContext : public antlr4::ParserRuleContext {
  public:
    LambdadeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    ParameterdeclarationclauseContext *parameterdeclarationclause();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Mutable();
    ExceptionspecificationContext *exceptionspecification();
    AttributespecifierseqContext *attributespecifierseq();
    TrailingreturntypeContext *trailingreturntype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdadeclaratorContext* lambdadeclarator();

  class  PostfixexpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryexpressionContext *primaryexpression();
    SimpletypespecifierContext *simpletypespecifier();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionlistContext *expressionlist();
    TypenamespecifierContext *typenamespecifier();
    BracedinitlistContext *bracedinitlist();
    antlr4::tree::TerminalNode *Dynamic_cast();
    antlr4::tree::TerminalNode *Less();
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *Greater();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Static_cast();
    antlr4::tree::TerminalNode *Reinterpret_cast();
    antlr4::tree::TerminalNode *Const_cast();
    TypeidofthetypeidContext *typeidofthetypeid();
    PostfixexpressionContext *postfixexpression();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Dot();
    IdexpressionContext *idexpression();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Arrow();
    PseudodestructornameContext *pseudodestructorname();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixexpressionContext* postfixexpression();
  PostfixexpressionContext* postfixexpression(int precedence);
  class  TypeidofexprContext : public antlr4::ParserRuleContext {
  public:
    TypeidofexprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typeid_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeidofexprContext* typeidofexpr();

  class  TypeidofthetypeidContext : public antlr4::ParserRuleContext {
  public:
    TypeidofthetypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typeid_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeidofthetypeidContext* typeidofthetypeid();

  class  ExpressionlistContext : public antlr4::ParserRuleContext {
  public:
    ExpressionlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerlistContext *initializerlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionlistContext* expressionlist();

  class  PseudodestructornameContext : public antlr4::ParserRuleContext {
  public:
    PseudodestructornameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ThetypenameContext *> thetypename();
    ThetypenameContext* thetypename(size_t i);
    antlr4::tree::TerminalNode *Doublecolon();
    antlr4::tree::TerminalNode *Tilde();
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Template();
    SimpletemplateidContext *simpletemplateid();
    DecltypespecifierContext *decltypespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PseudodestructornameContext* pseudodestructorname();

  class  UnaryexpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixexpressionContext *postfixexpression();
    antlr4::tree::TerminalNode *PlusPlus();
    CastexpressionContext *castexpression();
    antlr4::tree::TerminalNode *MinusMinus();
    UnaryoperatorContext *unaryoperator();
    antlr4::tree::TerminalNode *Sizeof();
    UnaryexpressionContext *unaryexpression();
    antlr4::tree::TerminalNode *LeftParen();
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Alignof();
    NoexceptexpressionContext *noexceptexpression();
    NewexpressionContext *newexpression();
    DeleteexpressionContext *deleteexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryexpressionContext* unaryexpression();

  class  UnaryoperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Minus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryoperatorContext* unaryoperator();

  class  NewexpressionContext : public antlr4::ParserRuleContext {
  public:
    NewexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    NewtypeidContext *newtypeid();
    antlr4::tree::TerminalNode *Doublecolon();
    NewplacementContext *newplacement();
    NewinitializerContext *newinitializer();
    antlr4::tree::TerminalNode *LeftParen();
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewexpressionContext* newexpression();

  class  NewplacementContext : public antlr4::ParserRuleContext {
  public:
    NewplacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionlistContext *expressionlist();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewplacementContext* newplacement();

  class  NewtypeidContext : public antlr4::ParserRuleContext {
  public:
    NewtypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    NewdeclaratorContext *newdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewtypeidContext* newtypeid();

  class  NewdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtroperatorContext *ptroperator();
    NewdeclaratorContext *newdeclarator();
    NoptrnewdeclaratorContext *noptrnewdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewdeclaratorContext* newdeclarator();

  class  NoptrnewdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrnewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightBracket();
    AttributespecifierseqContext *attributespecifierseq();
    NoptrnewdeclaratorContext *noptrnewdeclarator();
    ConstantexpressionContext *constantexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrnewdeclaratorContext* noptrnewdeclarator();
  NoptrnewdeclaratorContext* noptrnewdeclarator(int precedence);
  class  NewinitializerContext : public antlr4::ParserRuleContext {
  public:
    NewinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionlistContext *expressionlist();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewinitializerContext* newinitializer();

  class  DeleteexpressionContext : public antlr4::ParserRuleContext {
  public:
    DeleteexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Delete();
    CastexpressionContext *castexpression();
    antlr4::tree::TerminalNode *Doublecolon();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteexpressionContext* deleteexpression();

  class  NoexceptexpressionContext : public antlr4::ParserRuleContext {
  public:
    NoexceptexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoexceptexpressionContext* noexceptexpression();

  class  CastexpressionContext : public antlr4::ParserRuleContext {
  public:
    CastexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryexpressionContext *unaryexpression();
    antlr4::tree::TerminalNode *LeftParen();
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *RightParen();
    CastexpressionContext *castexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastexpressionContext* castexpression();

  class  PmexpressionContext : public antlr4::ParserRuleContext {
  public:
    PmexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CastexpressionContext *castexpression();
    PmexpressionContext *pmexpression();
    antlr4::tree::TerminalNode *DotStar();
    antlr4::tree::TerminalNode *ArrowStar();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PmexpressionContext* pmexpression();
  PmexpressionContext* pmexpression(int precedence);
  class  MultiplicativeexpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PmexpressionContext *pmexpression();
    MultiplicativeexpressionContext *multiplicativeexpression();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeexpressionContext* multiplicativeexpression();
  MultiplicativeexpressionContext* multiplicativeexpression(int precedence);
  class  AdditiveexpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeexpressionContext *multiplicativeexpression();
    AdditiveexpressionContext *additiveexpression();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditiveexpressionContext* additiveexpression();
  AdditiveexpressionContext* additiveexpression(int precedence);
  class  ShiftexpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveexpressionContext *additiveexpression();
    ShiftexpressionContext *shiftexpression();
    ShiftoperatorContext *shiftoperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftexpressionContext* shiftexpression();
  ShiftexpressionContext* shiftexpression(int precedence);
  class  ShiftoperatorContext : public antlr4::ParserRuleContext {
  public:
    ShiftoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RightShift();
    antlr4::tree::TerminalNode *LeftShift();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftoperatorContext* shiftoperator();

  class  RelationalexpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftexpressionContext *shiftexpression();
    RelationalexpressionContext *relationalexpression();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalexpressionContext* relationalexpression();
  RelationalexpressionContext* relationalexpression(int precedence);
  class  EqualityexpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalexpressionContext *relationalexpression();
    EqualityexpressionContext *equalityexpression();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityexpressionContext* equalityexpression();
  EqualityexpressionContext* equalityexpression(int precedence);
  class  AndexpressionContext : public antlr4::ParserRuleContext {
  public:
    AndexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualityexpressionContext *equalityexpression();
    AndexpressionContext *andexpression();
    antlr4::tree::TerminalNode *And();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndexpressionContext* andexpression();
  AndexpressionContext* andexpression(int precedence);
  class  ExclusiveorexpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndexpressionContext *andexpression();
    ExclusiveorexpressionContext *exclusiveorexpression();
    antlr4::tree::TerminalNode *Caret();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExclusiveorexpressionContext* exclusiveorexpression();
  ExclusiveorexpressionContext* exclusiveorexpression(int precedence);
  class  InclusiveorexpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExclusiveorexpressionContext *exclusiveorexpression();
    InclusiveorexpressionContext *inclusiveorexpression();
    antlr4::tree::TerminalNode *Or();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InclusiveorexpressionContext* inclusiveorexpression();
  InclusiveorexpressionContext* inclusiveorexpression(int precedence);
  class  LogicalandexpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalandexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InclusiveorexpressionContext *inclusiveorexpression();
    LogicalandexpressionContext *logicalandexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalandexpressionContext* logicalandexpression();
  LogicalandexpressionContext* logicalandexpression(int precedence);
  class  LogicalorexpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalandexpressionContext *logicalandexpression();
    LogicalorexpressionContext *logicalorexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalorexpressionContext* logicalorexpression();
  LogicalorexpressionContext* logicalorexpression(int precedence);
  class  ConditionalexpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalorexpressionContext *logicalorexpression();
    antlr4::tree::TerminalNode *Question();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Colon();
    AssignmentexpressionContext *assignmentexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalexpressionContext* conditionalexpression();

  class  AssignmentexpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalexpressionContext *conditionalexpression();
    LogicalorexpressionContext *logicalorexpression();
    AssignmentoperatorContext *assignmentoperator();
    InitializerclauseContext *initializerclause();
    ThrowexpressionContext *throwexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentexpressionContext* assignmentexpression();

  class  AssignmentoperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *OrAssign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentoperatorContext* assignmentoperator();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentexpressionContext *assignmentexpression();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ConstantexpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalexpressionContext *conditionalexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantexpressionContext* constantexpression();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabeledstatementContext *labeledstatement();
    ExpressionstatementContext *expressionstatement();
    AttributespecifierseqContext *attributespecifierseq();
    CompoundstatementContext *compoundstatement();
    SelectionstatementContext *selectionstatement();
    IterationstatementContext *iterationstatement();
    JumpstatementContext *jumpstatement();
    DeclarationstatementContext *declarationstatement();
    AergiaexpressionContext *aergiaexpression();
    ForeachContext *foreach();
    TryblockContext *tryblock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  LabeledstatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    StatementContext *statement();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *Case();
    ConstantexpressionContext *constantexpression();
    antlr4::tree::TerminalNode *Default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledstatementContext* labeledstatement();

  class  ExpressionstatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionstatementContext* expressionstatement();

  class  CompoundstatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StatementseqContext *statementseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundstatementContext* compoundstatement();

  class  StatementseqContext : public antlr4::ParserRuleContext {
  public:
    StatementseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    StatementseqContext *statementseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementseqContext* statementseq();
  StatementseqContext* statementseq(int precedence);
  class  SelectionstatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Switch();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectionstatementContext* selectionstatement();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    DeclspecifierseqContext *declspecifierseq();
    DeclaratorContext *declarator();
    antlr4::tree::TerminalNode *Assign();
    InitializerclauseContext *initializerclause();
    AttributespecifierseqContext *attributespecifierseq();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  IterationstatementContext : public antlr4::ParserRuleContext {
  public:
    IterationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Do();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *For();
    ForinitstatementContext *forinitstatement();
    ForrangedeclarationContext *forrangedeclaration();
    antlr4::tree::TerminalNode *Colon();
    ForrangeinitializerContext *forrangeinitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterationstatementContext* iterationstatement();

  class  ForinitstatementContext : public antlr4::ParserRuleContext {
  public:
    ForinitstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionstatementContext *expressionstatement();
    SimpledeclarationContext *simpledeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForinitstatementContext* forinitstatement();

  class  ForrangedeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForrangedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclspecifierseqContext *declspecifierseq();
    DeclaratorContext *declarator();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForrangedeclarationContext* forrangedeclaration();

  class  ForrangeinitializerContext : public antlr4::ParserRuleContext {
  public:
    ForrangeinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForrangeinitializerContext* forrangeinitializer();

  class  JumpstatementContext : public antlr4::ParserRuleContext {
  public:
    JumpstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Return();
    ExpressionContext *expression();
    BracedinitlistContext *bracedinitlist();
    antlr4::tree::TerminalNode *Goto();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpstatementContext* jumpstatement();

  class  DeclarationstatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockdeclarationContext *blockdeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationstatementContext* declarationstatement();

  class  DeclarationseqContext : public antlr4::ParserRuleContext {
  public:
    DeclarationseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    DeclarationseqContext *declarationseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationseqContext* declarationseq();
  DeclarationseqContext* declarationseq(int precedence);
  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockdeclarationContext *blockdeclaration();
    FunctiondefinitionContext *functiondefinition();
    TemplatedeclarationContext *templatedeclaration();
    ExplicitinstantiationContext *explicitinstantiation();
    ExplicitspecializationContext *explicitspecialization();
    LinkagespecificationContext *linkagespecification();
    NamespacedefinitionContext *namespacedefinition();
    EmptydeclarationContext *emptydeclaration();
    AttributedeclarationContext *attributedeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  BlockdeclarationContext : public antlr4::ParserRuleContext {
  public:
    BlockdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpledeclarationContext *simpledeclaration();
    AsmdefinitionContext *asmdefinition();
    NamespacealiasdefinitionContext *namespacealiasdefinition();
    UsingdeclarationContext *usingdeclaration();
    UsingdirectiveContext *usingdirective();
    Static_assertdeclarationContext *static_assertdeclaration();
    AliasdeclarationContext *aliasdeclaration();
    OpaqueenumdeclarationContext *opaqueenumdeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockdeclarationContext* blockdeclaration();

  class  AliasdeclarationContext : public antlr4::ParserRuleContext {
  public:
    AliasdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *Semi();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasdeclarationContext* aliasdeclaration();

  class  SimpledeclarationContext : public antlr4::ParserRuleContext {
  public:
    SimpledeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    DeclspecifierseqContext *declspecifierseq();
    InitdeclaratorlistContext *initdeclaratorlist();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpledeclarationContext* simpledeclaration();

  class  Static_assertdeclarationContext : public antlr4::ParserRuleContext {
  public:
    Static_assertdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static_assert();
    antlr4::tree::TerminalNode *LeftParen();
    ConstantexpressionContext *constantexpression();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Stringliteral();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Static_assertdeclarationContext* static_assertdeclaration();

  class  EmptydeclarationContext : public antlr4::ParserRuleContext {
  public:
    EmptydeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptydeclarationContext* emptydeclaration();

  class  AttributedeclarationContext : public antlr4::ParserRuleContext {
  public:
    AttributedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributedeclarationContext* attributedeclaration();

  class  DeclspecifierContext : public antlr4::ParserRuleContext {
  public:
    DeclspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StorageclassspecifierContext *storageclassspecifier();
    TypespecifierContext *typespecifier();
    FunctionspecifierContext *functionspecifier();
    antlr4::tree::TerminalNode *Friend();
    antlr4::tree::TerminalNode *Typedef();
    antlr4::tree::TerminalNode *Constexpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclspecifierContext* declspecifier();

  class  DeclspecifierseqContext : public antlr4::ParserRuleContext {
  public:
    DeclspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclspecifierContext *declspecifier();
    AttributespecifierseqContext *attributespecifierseq();
    DeclspecifierseqContext *declspecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclspecifierseqContext* declspecifierseq();

  class  StorageclassspecifierContext : public antlr4::ParserRuleContext {
  public:
    StorageclassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Register();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Thread_local();
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Mutable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorageclassspecifierContext* storageclassspecifier();

  class  FunctionspecifierContext : public antlr4::ParserRuleContext {
  public:
    FunctionspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Inline();
    antlr4::tree::TerminalNode *Virtual();
    antlr4::tree::TerminalNode *Explicit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionspecifierContext* functionspecifier();

  class  TypedefnameContext : public antlr4::ParserRuleContext {
  public:
    TypedefnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypedefnameContext* typedefname();

  class  TypespecifierContext : public antlr4::ParserRuleContext {
  public:
    TypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingtypespecifierContext *trailingtypespecifier();
    ClassspecifierContext *classspecifier();
    EnumspecifierContext *enumspecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypespecifierContext* typespecifier();

  class  TrailingtypespecifierContext : public antlr4::ParserRuleContext {
  public:
    TrailingtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpletypespecifierContext *simpletypespecifier();
    ElaboratedtypespecifierContext *elaboratedtypespecifier();
    TypenamespecifierContext *typenamespecifier();
    CvqualifierContext *cvqualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingtypespecifierContext* trailingtypespecifier();

  class  TypespecifierseqContext : public antlr4::ParserRuleContext {
  public:
    TypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierContext *typespecifier();
    AttributespecifierseqContext *attributespecifierseq();
    TypespecifierseqContext *typespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypespecifierseqContext* typespecifierseq();

  class  TrailingtypespecifierseqContext : public antlr4::ParserRuleContext {
  public:
    TrailingtypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingtypespecifierContext *trailingtypespecifier();
    AttributespecifierseqContext *attributespecifierseq();
    TrailingtypespecifierseqContext *trailingtypespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingtypespecifierseqContext* trailingtypespecifierseq();

  class  SimpletypespecifierContext : public antlr4::ParserRuleContext {
  public:
    SimpletypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThetypenameContext *thetypename();
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Template();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Char16();
    antlr4::tree::TerminalNode *Char32();
    antlr4::tree::TerminalNode *Wchar();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Short();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Long();
    antlr4::tree::TerminalNode *Signed();
    antlr4::tree::TerminalNode *Unsigned();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Auto();
    DecltypespecifierContext *decltypespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpletypespecifierContext* simpletypespecifier();

  class  ThetypenameContext : public antlr4::ParserRuleContext {
  public:
    ThetypenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassnameContext *classname();
    EnumnameContext *enumname();
    TypedefnameContext *typedefname();
    SimpletemplateidContext *simpletemplateid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThetypenameContext* thetypename();

  class  DecltypespecifierContext : public antlr4::ParserRuleContext {
  public:
    DecltypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decltype();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Auto();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecltypespecifierContext* decltypespecifier();

  class  ElaboratedtypespecifierContext : public antlr4::ParserRuleContext {
  public:
    ElaboratedtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClasskeyContext *classkey();
    antlr4::tree::TerminalNode *Identifier();
    AttributespecifierseqContext *attributespecifierseq();
    NestednamespecifierContext *nestednamespecifier();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Enum();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElaboratedtypespecifierContext* elaboratedtypespecifier();

  class  EnumnameContext : public antlr4::ParserRuleContext {
  public:
    EnumnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumnameContext* enumname();

  class  EnumspecifierContext : public antlr4::ParserRuleContext {
  public:
    EnumspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumheadContext *enumhead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    EnumeratorlistContext *enumeratorlist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumspecifierContext* enumspecifier();

  class  EnumheadContext : public antlr4::ParserRuleContext {
  public:
    EnumheadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *Identifier();
    EnumbaseContext *enumbase();
    NestednamespecifierContext *nestednamespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumheadContext* enumhead();

  class  OpaqueenumdeclarationContext : public antlr4::ParserRuleContext {
  public:
    OpaqueenumdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Semi();
    AttributespecifierseqContext *attributespecifierseq();
    EnumbaseContext *enumbase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpaqueenumdeclarationContext* opaqueenumdeclaration();

  class  EnumkeyContext : public antlr4::ParserRuleContext {
  public:
    EnumkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumkeyContext* enumkey();

  class  EnumbaseContext : public antlr4::ParserRuleContext {
  public:
    EnumbaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    TypespecifierseqContext *typespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumbaseContext* enumbase();

  class  EnumeratorlistContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratordefinitionContext *enumeratordefinition();
    EnumeratorlistContext *enumeratorlist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorlistContext* enumeratorlist();
  EnumeratorlistContext* enumeratorlist(int precedence);
  class  EnumeratordefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumeratordefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratorContext *enumerator();
    antlr4::tree::TerminalNode *Assign();
    ConstantexpressionContext *constantexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratordefinitionContext* enumeratordefinition();

  class  EnumeratorContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorContext* enumerator();

  class  NamespacenameContext : public antlr4::ParserRuleContext {
  public:
    NamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OriginalnamespacenameContext *originalnamespacename();
    NamespacealiasContext *namespacealias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacenameContext* namespacename();

  class  OriginalnamespacenameContext : public antlr4::ParserRuleContext {
  public:
    OriginalnamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OriginalnamespacenameContext* originalnamespacename();

  class  NamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamednamespacedefinitionContext *namednamespacedefinition();
    UnnamednamespacedefinitionContext *unnamednamespacedefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacedefinitionContext* namespacedefinition();

  class  NamednamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OriginalnamespacedefinitionContext *originalnamespacedefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamednamespacedefinitionContext* namednamespacedefinition();

  class  OriginalnamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    OriginalnamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftBrace();
    NamespacebodyContext *namespacebody();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Inline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OriginalnamespacedefinitionContext* originalnamespacedefinition();

  class  UnnamednamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    UnnamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *LeftBrace();
    NamespacebodyContext *namespacebody();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Inline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnnamednamespacedefinitionContext* unnamednamespacedefinition();

  class  NamespacebodyContext : public antlr4::ParserRuleContext {
  public:
    NamespacebodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationseqContext *declarationseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacebodyContext* namespacebody();

  class  NamespacealiasContext : public antlr4::ParserRuleContext {
  public:
    NamespacealiasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacealiasContext* namespacealias();

  class  NamespacealiasdefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespacealiasdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    QualifiednamespacespecifierContext *qualifiednamespacespecifier();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacealiasdefinitionContext* namespacealiasdefinition();

  class  QualifiednamespacespecifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiednamespacespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamespacenameContext *namespacename();
    NestednamespecifierContext *nestednamespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiednamespacespecifierContext* qualifiednamespacespecifier();

  class  UsingdeclarationContext : public antlr4::ParserRuleContext {
  public:
    UsingdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    NestednamespecifierContext *nestednamespecifier();
    UnqualifiedidContext *unqualifiedid();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Typename_();
    antlr4::tree::TerminalNode *Doublecolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingdeclarationContext* usingdeclaration();

  class  UsingdirectiveContext : public antlr4::ParserRuleContext {
  public:
    UsingdirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Namespace();
    NamespacenameContext *namespacename();
    antlr4::tree::TerminalNode *Semi();
    AttributespecifierseqContext *attributespecifierseq();
    NestednamespecifierContext *nestednamespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingdirectiveContext* usingdirective();

  class  AsmdefinitionContext : public antlr4::ParserRuleContext {
  public:
    AsmdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Asm();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *Stringliteral();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsmdefinitionContext* asmdefinition();

  class  LinkagespecificationContext : public antlr4::ParserRuleContext {
  public:
    LinkagespecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Stringliteral();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    DeclarationseqContext *declarationseq();
    DeclarationContext *declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinkagespecificationContext* linkagespecification();

  class  AttributespecifierseqContext : public antlr4::ParserRuleContext {
  public:
    AttributespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributespecifierContext *attributespecifier();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributespecifierseqContext* attributespecifierseq();
  AttributespecifierseqContext* attributespecifierseq(int precedence);
  class  AttributespecifierContext : public antlr4::ParserRuleContext {
  public:
    AttributespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    AttributelistContext *attributelist();
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    AlignmentspecifierContext *alignmentspecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributespecifierContext* attributespecifier();

  class  AlignmentspecifierContext : public antlr4::ParserRuleContext {
  public:
    AlignmentspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Alignas();
    antlr4::tree::TerminalNode *LeftParen();
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Ellipsis();
    ConstantexpressionContext *constantexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlignmentspecifierContext* alignmentspecifier();

  class  AttributelistContext : public antlr4::ParserRuleContext {
  public:
    AttributelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    antlr4::tree::TerminalNode *Ellipsis();
    AttributelistContext *attributelist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributelistContext* attributelist();
  AttributelistContext* attributelist(int precedence);
  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributetokenContext *attributetoken();
    AttributeargumentclauseContext *attributeargumentclause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeContext* attribute();

  class  AttributetokenContext : public antlr4::ParserRuleContext {
  public:
    AttributetokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributescopedtokenContext *attributescopedtoken();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributetokenContext* attributetoken();

  class  AttributescopedtokenContext : public antlr4::ParserRuleContext {
  public:
    AttributescopedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributenamespaceContext *attributenamespace();
    antlr4::tree::TerminalNode *Doublecolon();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributescopedtokenContext* attributescopedtoken();

  class  AttributenamespaceContext : public antlr4::ParserRuleContext {
  public:
    AttributenamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributenamespaceContext* attributenamespace();

  class  AttributeargumentclauseContext : public antlr4::ParserRuleContext {
  public:
    AttributeargumentclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    BalancedtokenseqContext *balancedtokenseq();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeargumentclauseContext* attributeargumentclause();

  class  BalancedtokenseqContext : public antlr4::ParserRuleContext {
  public:
    BalancedtokenseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BalancedtokenContext *balancedtoken();
    BalancedtokenseqContext *balancedtokenseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedtokenseqContext* balancedtokenseq();
  BalancedtokenseqContext* balancedtokenseq(int precedence);
  class  BalancedtokenContext : public antlr4::ParserRuleContext {
  public:
    BalancedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    BalancedtokenseqContext *balancedtokenseq();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedtokenContext* balancedtoken();

  class  InitdeclaratorlistContext : public antlr4::ParserRuleContext {
  public:
    InitdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitdeclaratorContext *initdeclarator();
    InitdeclaratorlistContext *initdeclaratorlist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitdeclaratorlistContext* initdeclaratorlist();
  InitdeclaratorlistContext* initdeclaratorlist(int precedence);
  class  InitdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    InitdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitdeclaratorContext* initdeclarator();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtrdeclaratorContext *ptrdeclarator();
    NoptrdeclaratorContext *noptrdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    TrailingreturntypeContext *trailingreturntype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorContext* declarator();

  class  PtrdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PtrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoptrdeclaratorContext *noptrdeclarator();
    PtroperatorContext *ptroperator();
    PtrdeclaratorContext *ptrdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrdeclaratorContext* ptrdeclarator();

  class  NoptrdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratoridContext *declaratorid();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *LeftParen();
    PtrdeclaratorContext *ptrdeclarator();
    antlr4::tree::TerminalNode *RightParen();
    NoptrdeclaratorContext *noptrdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantexpressionContext *constantexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrdeclaratorContext* noptrdeclarator();
  NoptrdeclaratorContext* noptrdeclarator(int precedence);
  class  ParametersandqualifiersContext : public antlr4::ParserRuleContext {
  public:
    ParametersandqualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    ParameterdeclarationclauseContext *parameterdeclarationclause();
    antlr4::tree::TerminalNode *RightParen();
    CvqualifierseqContext *cvqualifierseq();
    RefqualifierContext *refqualifier();
    ExceptionspecificationContext *exceptionspecification();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersandqualifiersContext* parametersandqualifiers();

  class  TrailingreturntypeContext : public antlr4::ParserRuleContext {
  public:
    TrailingreturntypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Arrow();
    TrailingtypespecifierseqContext *trailingtypespecifierseq();
    AbstractdeclaratorContext *abstractdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingreturntypeContext* trailingreturntype();

  class  PtroperatorContext : public antlr4::ParserRuleContext {
  public:
    PtroperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Star();
    AttributespecifierseqContext *attributespecifierseq();
    CvqualifierseqContext *cvqualifierseq();
    antlr4::tree::TerminalNode *And();
    NestednamespecifierContext *nestednamespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtroperatorContext* ptroperator();

  class  CvqualifierseqContext : public antlr4::ParserRuleContext {
  public:
    CvqualifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CvqualifierContext *cvqualifier();
    CvqualifierseqContext *cvqualifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CvqualifierseqContext* cvqualifierseq();

  class  CvqualifierContext : public antlr4::ParserRuleContext {
  public:
    CvqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CvqualifierContext* cvqualifier();

  class  RefqualifierContext : public antlr4::ParserRuleContext {
  public:
    RefqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RefqualifierContext* refqualifier();

  class  DeclaratoridContext : public antlr4::ParserRuleContext {
  public:
    DeclaratoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdexpressionContext *idexpression();
    antlr4::tree::TerminalNode *Ellipsis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratoridContext* declaratorid();

  class  ThetypeidContext : public antlr4::ParserRuleContext {
  public:
    ThetypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    AbstractdeclaratorContext *abstractdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThetypeidContext* thetypeid();

  class  AbstractdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtrabstractdeclaratorContext *ptrabstractdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    TrailingreturntypeContext *trailingreturntype();
    NoptrabstractdeclaratorContext *noptrabstractdeclarator();
    AbstractpackdeclaratorContext *abstractpackdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractdeclaratorContext* abstractdeclarator();

  class  PtrabstractdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PtrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoptrabstractdeclaratorContext *noptrabstractdeclarator();
    PtroperatorContext *ptroperator();
    PtrabstractdeclaratorContext *ptrabstractdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrabstractdeclaratorContext* ptrabstractdeclarator();

  class  NoptrabstractdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParametersandqualifiersContext *parametersandqualifiers();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantexpressionContext *constantexpression();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *LeftParen();
    PtrabstractdeclaratorContext *ptrabstractdeclarator();
    antlr4::tree::TerminalNode *RightParen();
    NoptrabstractdeclaratorContext *noptrabstractdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrabstractdeclaratorContext* noptrabstractdeclarator();
  NoptrabstractdeclaratorContext* noptrabstractdeclarator(int precedence);
  class  AbstractpackdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoptrabstractpackdeclaratorContext *noptrabstractpackdeclarator();
    PtroperatorContext *ptroperator();
    AbstractpackdeclaratorContext *abstractpackdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractpackdeclaratorContext* abstractpackdeclarator();

  class  NoptrabstractpackdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrabstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    NoptrabstractpackdeclaratorContext *noptrabstractpackdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantexpressionContext *constantexpression();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator();
  NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator(int precedence);
  class  ParameterdeclarationclauseContext : public antlr4::ParserRuleContext {
  public:
    ParameterdeclarationclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterdeclarationlistContext *parameterdeclarationlist();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterdeclarationclauseContext* parameterdeclarationclause();

  class  ParameterdeclarationlistContext : public antlr4::ParserRuleContext {
  public:
    ParameterdeclarationlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterdeclarationContext *parameterdeclaration();
    ParameterdeclarationlistContext *parameterdeclarationlist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterdeclarationlistContext* parameterdeclarationlist();
  ParameterdeclarationlistContext* parameterdeclarationlist(int precedence);
  class  ParameterdeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParameterdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclspecifierseqContext *declspecifierseq();
    DeclaratorContext *declarator();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *Assign();
    InitializerclauseContext *initializerclause();
    AbstractdeclaratorContext *abstractdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterdeclarationContext* parameterdeclaration();

  class  FunctiondefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctiondefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    FunctionbodyContext *functionbody();
    AttributespecifierseqContext *attributespecifierseq();
    DeclspecifierseqContext *declspecifierseq();
    VirtspecifierseqContext *virtspecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctiondefinitionContext* functiondefinition();

  class  FunctionbodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundstatementContext *compoundstatement();
    CtorinitializerContext *ctorinitializer();
    FunctiontryblockContext *functiontryblock();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Delete();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionbodyContext* functionbody();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BraceorequalinitializerContext *braceorequalinitializer();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionlistContext *expressionlist();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  BraceorequalinitializerContext : public antlr4::ParserRuleContext {
  public:
    BraceorequalinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    InitializerclauseContext *initializerclause();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BraceorequalinitializerContext* braceorequalinitializer();

  class  InitializerclauseContext : public antlr4::ParserRuleContext {
  public:
    InitializerclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentexpressionContext *assignmentexpression();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerclauseContext* initializerclause();

  class  InitializerlistContext : public antlr4::ParserRuleContext {
  public:
    InitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerclauseContext *initializerclause();
    antlr4::tree::TerminalNode *Ellipsis();
    InitializerlistContext *initializerlist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerlistContext* initializerlist();
  InitializerlistContext* initializerlist(int precedence);
  class  BracedinitlistContext : public antlr4::ParserRuleContext {
  public:
    BracedinitlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    InitializerlistContext *initializerlist();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BracedinitlistContext* bracedinitlist();

  class  ClassnameContext : public antlr4::ParserRuleContext {
  public:
    ClassnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    SimpletemplateidContext *simpletemplateid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassnameContext* classname();

  class  ClassspecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassheadContext *classhead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    MemberspecificationContext *memberspecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassspecifierContext* classspecifier();

  class  ClassheadContext : public antlr4::ParserRuleContext {
  public:
    ClassheadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClasskeyContext *classkey();
    ClassheadnameContext *classheadname();
    AttributespecifierseqContext *attributespecifierseq();
    ClassvirtspecifierContext *classvirtspecifier();
    BaseclauseContext *baseclause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassheadContext* classhead();

  class  ClassheadnameContext : public antlr4::ParserRuleContext {
  public:
    ClassheadnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassnameContext *classname();
    NestednamespecifierContext *nestednamespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassheadnameContext* classheadname();

  class  ClassvirtspecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassvirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Final();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassvirtspecifierContext* classvirtspecifier();

  class  ClasskeyContext : public antlr4::ParserRuleContext {
  public:
    ClasskeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();
    antlr4::tree::TerminalNode *Union();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClasskeyContext* classkey();

  class  MemberspecificationContext : public antlr4::ParserRuleContext {
  public:
    MemberspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberdeclarationContext *memberdeclaration();
    MemberspecificationContext *memberspecification();
    AccessspecifierContext *accessspecifier();
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberspecificationContext* memberspecification();

  class  MemberdeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    AttributespecifierseqContext *attributespecifierseq();
    DeclspecifierseqContext *declspecifierseq();
    MemberdeclaratorlistContext *memberdeclaratorlist();
    FunctiondefinitionContext *functiondefinition();
    UsingdeclarationContext *usingdeclaration();
    Static_assertdeclarationContext *static_assertdeclaration();
    TemplatedeclarationContext *templatedeclaration();
    AliasdeclarationContext *aliasdeclaration();
    EmptydeclarationContext *emptydeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberdeclarationContext* memberdeclaration();

  class  MemberdeclaratorlistContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberdeclaratorContext *memberdeclarator();
    MemberdeclaratorlistContext *memberdeclaratorlist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberdeclaratorlistContext* memberdeclaratorlist();
  MemberdeclaratorlistContext* memberdeclaratorlist(int precedence);
  class  MemberdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    VirtspecifierseqContext *virtspecifierseq();
    PurespecifierContext *purespecifier();
    BraceorequalinitializerContext *braceorequalinitializer();
    antlr4::tree::TerminalNode *Colon();
    ConstantexpressionContext *constantexpression();
    antlr4::tree::TerminalNode *Identifier();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberdeclaratorContext* memberdeclarator();

  class  VirtspecifierseqContext : public antlr4::ParserRuleContext {
  public:
    VirtspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VirtspecifierContext *virtspecifier();
    VirtspecifierseqContext *virtspecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtspecifierseqContext* virtspecifierseq();
  VirtspecifierseqContext* virtspecifierseq(int precedence);
  class  VirtspecifierContext : public antlr4::ParserRuleContext {
  public:
    VirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Override();
    antlr4::tree::TerminalNode *Final();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtspecifierContext* virtspecifier();

  class  PurespecifierContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *val = nullptr;;
    PurespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Octalliteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PurespecifierContext* purespecifier();

  class  BaseclauseContext : public antlr4::ParserRuleContext {
  public:
    BaseclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    BasespecifierlistContext *basespecifierlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseclauseContext* baseclause();

  class  BasespecifierlistContext : public antlr4::ParserRuleContext {
  public:
    BasespecifierlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasespecifierContext *basespecifier();
    antlr4::tree::TerminalNode *Ellipsis();
    BasespecifierlistContext *basespecifierlist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasespecifierlistContext* basespecifierlist();
  BasespecifierlistContext* basespecifierlist(int precedence);
  class  BasespecifierContext : public antlr4::ParserRuleContext {
  public:
    BasespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasetypespecifierContext *basetypespecifier();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *Virtual();
    AccessspecifierContext *accessspecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasespecifierContext* basespecifier();

  class  ClassordecltypeContext : public antlr4::ParserRuleContext {
  public:
    ClassordecltypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassnameContext *classname();
    NestednamespecifierContext *nestednamespecifier();
    DecltypespecifierContext *decltypespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassordecltypeContext* classordecltype();

  class  BasetypespecifierContext : public antlr4::ParserRuleContext {
  public:
    BasetypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassordecltypeContext *classordecltype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasetypespecifierContext* basetypespecifier();

  class  AccessspecifierContext : public antlr4::ParserRuleContext {
  public:
    AccessspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Public();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessspecifierContext* accessspecifier();

  class  ConversionfunctionidContext : public antlr4::ParserRuleContext {
  public:
    ConversionfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    ConversiontypeidContext *conversiontypeid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionfunctionidContext* conversionfunctionid();

  class  ConversiontypeidContext : public antlr4::ParserRuleContext {
  public:
    ConversiontypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    ConversiondeclaratorContext *conversiondeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversiontypeidContext* conversiontypeid();

  class  ConversiondeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ConversiondeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtroperatorContext *ptroperator();
    ConversiondeclaratorContext *conversiondeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversiondeclaratorContext* conversiondeclarator();

  class  CtorinitializerContext : public antlr4::ParserRuleContext {
  public:
    CtorinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    MeminitializerlistContext *meminitializerlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CtorinitializerContext* ctorinitializer();

  class  MeminitializerlistContext : public antlr4::ParserRuleContext {
  public:
    MeminitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MeminitializerContext *meminitializer();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Comma();
    MeminitializerlistContext *meminitializerlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeminitializerlistContext* meminitializerlist();

  class  MeminitializerContext : public antlr4::ParserRuleContext {
  public:
    MeminitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MeminitializeridContext *meminitializerid();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionlistContext *expressionlist();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeminitializerContext* meminitializer();

  class  MeminitializeridContext : public antlr4::ParserRuleContext {
  public:
    MeminitializeridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassordecltypeContext *classordecltype();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeminitializeridContext* meminitializerid();

  class  OperatorfunctionidContext : public antlr4::ParserRuleContext {
  public:
    OperatorfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    TheoperatorContext *theoperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorfunctionidContext* operatorfunctionid();

  class  LiteraloperatoridContext : public antlr4::ParserRuleContext {
  public:
    LiteraloperatoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    antlr4::tree::TerminalNode *Stringliteral();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Userdefinedstringliteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteraloperatoridContext* literaloperatorid();

  class  TemplatedeclarationContext : public antlr4::ParserRuleContext {
  public:
    TemplatedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Less();
    TemplateparameterlistContext *templateparameterlist();
    antlr4::tree::TerminalNode *Greater();
    DeclarationContext *declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplatedeclarationContext* templatedeclaration();

  class  TemplateparameterlistContext : public antlr4::ParserRuleContext {
  public:
    TemplateparameterlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateparameterContext *templateparameter();
    TemplateparameterlistContext *templateparameterlist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateparameterlistContext* templateparameterlist();
  TemplateparameterlistContext* templateparameterlist(int precedence);
  class  TemplateparameterContext : public antlr4::ParserRuleContext {
  public:
    TemplateparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeparameterContext *typeparameter();
    ParameterdeclarationContext *parameterdeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateparameterContext* templateparameter();

  class  TypeparameterContext : public antlr4::ParserRuleContext {
  public:
    TypeparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *Typename_();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Less();
    TemplateparameterlistContext *templateparameterlist();
    antlr4::tree::TerminalNode *Greater();
    IdexpressionContext *idexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeparameterContext* typeparameter();

  class  SimpletemplateidContext : public antlr4::ParserRuleContext {
  public:
    SimpletemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplatenameContext *templatename();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateargumentlistContext *templateargumentlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpletemplateidContext* simpletemplateid();

  class  TemplateidContext : public antlr4::ParserRuleContext {
  public:
    TemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpletemplateidContext *simpletemplateid();
    OperatorfunctionidContext *operatorfunctionid();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateargumentlistContext *templateargumentlist();
    LiteraloperatoridContext *literaloperatorid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateidContext* templateid();

  class  TemplatenameContext : public antlr4::ParserRuleContext {
  public:
    TemplatenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplatenameContext* templatename();

  class  TemplateargumentlistContext : public antlr4::ParserRuleContext {
  public:
    TemplateargumentlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateargumentContext *templateargument();
    antlr4::tree::TerminalNode *Ellipsis();
    TemplateargumentlistContext *templateargumentlist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateargumentlistContext* templateargumentlist();
  TemplateargumentlistContext* templateargumentlist(int precedence);
  class  TemplateargumentContext : public antlr4::ParserRuleContext {
  public:
    TemplateargumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThetypeidContext *thetypeid();
    ConstantexpressionContext *constantexpression();
    IdexpressionContext *idexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateargumentContext* templateargument();

  class  TypenamespecifierContext : public antlr4::ParserRuleContext {
  public:
    TypenamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typename_();
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Template();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypenamespecifierContext* typenamespecifier();

  class  ExplicitinstantiationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitinstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *Extern();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitinstantiationContext* explicitinstantiation();

  class  ExplicitspecializationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitspecializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    DeclarationContext *declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitspecializationContext* explicitspecialization();

  class  TryblockContext : public antlr4::ParserRuleContext {
  public:
    TryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundstatementContext *compoundstatement();
    HandlerseqContext *handlerseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryblockContext* tryblock();

  class  FunctiontryblockContext : public antlr4::ParserRuleContext {
  public:
    FunctiontryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundstatementContext *compoundstatement();
    HandlerseqContext *handlerseq();
    CtorinitializerContext *ctorinitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctiontryblockContext* functiontryblock();

  class  HandlerseqContext : public antlr4::ParserRuleContext {
  public:
    HandlerseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HandlerContext *handler();
    HandlerseqContext *handlerseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerseqContext* handlerseq();

  class  HandlerContext : public antlr4::ParserRuleContext {
  public:
    HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *LeftParen();
    ExceptiondeclarationContext *exceptiondeclaration();
    antlr4::tree::TerminalNode *RightParen();
    CompoundstatementContext *compoundstatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerContext* handler();

  class  ExceptiondeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExceptiondeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    DeclaratorContext *declarator();
    AttributespecifierseqContext *attributespecifierseq();
    AbstractdeclaratorContext *abstractdeclarator();
    antlr4::tree::TerminalNode *Ellipsis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptiondeclarationContext* exceptiondeclaration();

  class  ThrowexpressionContext : public antlr4::ParserRuleContext {
  public:
    ThrowexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    AssignmentexpressionContext *assignmentexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThrowexpressionContext* throwexpression();

  class  ExceptionspecificationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DynamicexceptionspecificationContext *dynamicexceptionspecification();
    NoexceptspecificationContext *noexceptspecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionspecificationContext* exceptionspecification();

  class  DynamicexceptionspecificationContext : public antlr4::ParserRuleContext {
  public:
    DynamicexceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    TypeidlistContext *typeidlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DynamicexceptionspecificationContext* dynamicexceptionspecification();

  class  TypeidlistContext : public antlr4::ParserRuleContext {
  public:
    TypeidlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *Ellipsis();
    TypeidlistContext *typeidlist();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeidlistContext* typeidlist();
  TypeidlistContext* typeidlist(int precedence);
  class  NoexceptspecificationContext : public antlr4::ParserRuleContext {
  public:
    NoexceptspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    antlr4::tree::TerminalNode *LeftParen();
    ConstantexpressionContext *constantexpression();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoexceptspecificationContext* noexceptspecification();

  class  TheoperatorContext : public antlr4::ParserRuleContext {
  public:
    TheoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *OrAssign();
    antlr4::tree::TerminalNode *LeftShift();
    antlr4::tree::TerminalNode *RightShift();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *ArrowStar();
    antlr4::tree::TerminalNode *Arrow();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheoperatorContext* theoperator();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integerliteral();
    antlr4::tree::TerminalNode *Characterliteral();
    antlr4::tree::TerminalNode *Floatingliteral();
    antlr4::tree::TerminalNode *Stringliteral();
    BooleanliteralContext *booleanliteral();
    PointerliteralContext *pointerliteral();
    UserdefinedliteralContext *userdefinedliteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  BooleanliteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *False();
    antlr4::tree::TerminalNode *True();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanliteralContext* booleanliteral();

  class  PointerliteralContext : public antlr4::ParserRuleContext {
  public:
    PointerliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Nullptr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerliteralContext* pointerliteral();

  class  UserdefinedliteralContext : public antlr4::ParserRuleContext {
  public:
    UserdefinedliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Userdefinedintegerliteral();
    antlr4::tree::TerminalNode *Userdefinedfloatingliteral();
    antlr4::tree::TerminalNode *Userdefinedstringliteral();
    antlr4::tree::TerminalNode *Userdefinedcharacterliteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserdefinedliteralContext* userdefinedliteral();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool nestednamespecifierSempred(NestednamespecifierContext *_localctx, size_t predicateIndex);
  bool capturelistSempred(CapturelistContext *_localctx, size_t predicateIndex);
  bool postfixexpressionSempred(PostfixexpressionContext *_localctx, size_t predicateIndex);
  bool noptrnewdeclaratorSempred(NoptrnewdeclaratorContext *_localctx, size_t predicateIndex);
  bool pmexpressionSempred(PmexpressionContext *_localctx, size_t predicateIndex);
  bool multiplicativeexpressionSempred(MultiplicativeexpressionContext *_localctx, size_t predicateIndex);
  bool additiveexpressionSempred(AdditiveexpressionContext *_localctx, size_t predicateIndex);
  bool shiftexpressionSempred(ShiftexpressionContext *_localctx, size_t predicateIndex);
  bool relationalexpressionSempred(RelationalexpressionContext *_localctx, size_t predicateIndex);
  bool equalityexpressionSempred(EqualityexpressionContext *_localctx, size_t predicateIndex);
  bool andexpressionSempred(AndexpressionContext *_localctx, size_t predicateIndex);
  bool exclusiveorexpressionSempred(ExclusiveorexpressionContext *_localctx, size_t predicateIndex);
  bool inclusiveorexpressionSempred(InclusiveorexpressionContext *_localctx, size_t predicateIndex);
  bool logicalandexpressionSempred(LogicalandexpressionContext *_localctx, size_t predicateIndex);
  bool logicalorexpressionSempred(LogicalorexpressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool statementseqSempred(StatementseqContext *_localctx, size_t predicateIndex);
  bool declarationseqSempred(DeclarationseqContext *_localctx, size_t predicateIndex);
  bool enumeratorlistSempred(EnumeratorlistContext *_localctx, size_t predicateIndex);
  bool attributespecifierseqSempred(AttributespecifierseqContext *_localctx, size_t predicateIndex);
  bool attributelistSempred(AttributelistContext *_localctx, size_t predicateIndex);
  bool balancedtokenseqSempred(BalancedtokenseqContext *_localctx, size_t predicateIndex);
  bool initdeclaratorlistSempred(InitdeclaratorlistContext *_localctx, size_t predicateIndex);
  bool noptrdeclaratorSempred(NoptrdeclaratorContext *_localctx, size_t predicateIndex);
  bool noptrabstractdeclaratorSempred(NoptrabstractdeclaratorContext *_localctx, size_t predicateIndex);
  bool noptrabstractpackdeclaratorSempred(NoptrabstractpackdeclaratorContext *_localctx, size_t predicateIndex);
  bool parameterdeclarationlistSempred(ParameterdeclarationlistContext *_localctx, size_t predicateIndex);
  bool initializerlistSempred(InitializerlistContext *_localctx, size_t predicateIndex);
  bool memberdeclaratorlistSempred(MemberdeclaratorlistContext *_localctx, size_t predicateIndex);
  bool virtspecifierseqSempred(VirtspecifierseqContext *_localctx, size_t predicateIndex);
  bool basespecifierlistSempred(BasespecifierlistContext *_localctx, size_t predicateIndex);
  bool templateparameterlistSempred(TemplateparameterlistContext *_localctx, size_t predicateIndex);
  bool templateargumentlistSempred(TemplateargumentlistContext *_localctx, size_t predicateIndex);
  bool typeidlistSempred(TypeidlistContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

