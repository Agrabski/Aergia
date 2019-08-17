
// Generated from AergiaCpp14.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  AergiaCpp14Parser : public antlr4::Parser {
public:
	enum {
		T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7,
		T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14,
		T__14 = 15, Encodingprefix = 16, MultiLineMacro = 17, Directive = 18,
		Alignas = 19, Alignof = 20, Asm = 21, Auto = 22, Bool = 23, Break = 24,
		Case = 25, Catch = 26, Char = 27, Char16 = 28, Char32 = 29, Class = 30,
		Const = 31, Constexpr = 32, Const_cast = 33, Continue = 34, Decltype = 35,
		Default = 36, Delete = 37, Do = 38, Double = 39, Dynamic_cast = 40,
		Else = 41, Enum = 42, Explicit = 43, Export = 44, Extern = 45, False = 46,
		Final = 47, Float = 48, For = 49, Friend = 50, Goto = 51, If = 52, Inline = 53,
		Int = 54, Long = 55, Mutable = 56, Namespace = 57, New = 58, Noexcept = 59,
		Nullptr = 60, Operator = 61, Override = 62, Private = 63, Protected = 64,
		Public = 65, Register = 66, Reinterpret_cast = 67, Return = 68, Short = 69,
		Signed = 70, Sizeof = 71, Static = 72, Static_assert = 73, Static_cast = 74,
		Struct = 75, Switch = 76, Template = 77, This = 78, Thread_local = 79,
		Throw = 80, True = 81, Try = 82, Typedef = 83, Typeid_ = 84, Typename_ = 85,
		Union = 86, Unsigned = 87, Using = 88, Virtual = 89, Void = 90, Volatile = 91,
		Wchar = 92, While = 93, LeftParen = 94, RightParen = 95, LeftBracket = 96,
		RightBracket = 97, LeftBrace = 98, RightBrace = 99, Plus = 100, Minus = 101,
		Star = 102, Div = 103, Mod = 104, Caret = 105, And = 106, Or = 107,
		Tilde = 108, Not = 109, Assign = 110, Less = 111, Greater = 112, PlusAssign = 113,
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

	enum {
		RuleTranslationunit = 0, RuleAergiaexpressionbegin = 1, RuleAergiaexpressionend = 2,
		RuleAergiaBlock = 3, RuleAergiaexpression = 4, RuleAnonymousExpression = 5,
		RuleAnoynmousBody = 6, RuleAergiastring = 7, RuleForeach = 8, RuleForeachheader = 9,
		RuleForeachbody = 10, RuleCallchain = 11, RulePrimaryexpression = 12,
		RuleIdexpression = 13, RuleUnqualifiedid = 14, RuleQualifiedid = 15,
		RuleNestednamespecifier = 16, RuleLambdaexpression = 17, RuleLambdaintroducer = 18,
		RuleLambdacapture = 19, RuleCapturedefault = 20, RuleCapturelist = 21,
		RuleCapture = 22, RuleSimplecapture = 23, RuleInitcapture = 24, RuleLambdadeclarator = 25,
		RulePostfixexpression = 26, RuleTypeidofexpr = 27, RuleTypeidofthetypeid = 28,
		RuleExpressionlist = 29, RulePseudodestructorname = 30, RuleUnaryexpression = 31,
		RuleUnaryoperator = 32, RuleNewexpression = 33, RuleNewplacement = 34,
		RuleNewtypeid = 35, RuleNewdeclarator = 36, RuleNoptrnewdeclarator = 37,
		RuleNewinitializer = 38, RuleDeleteexpression = 39, RuleNoexceptexpression = 40,
		RuleCastexpression = 41, RulePmexpression = 42, RuleMultiplicativeexpression = 43,
		RuleAdditiveexpression = 44, RuleShiftexpression = 45, RuleShiftoperator = 46,
		RuleRelationalexpression = 47, RuleEqualityexpression = 48, RuleAndexpression = 49,
		RuleExclusiveorexpression = 50, RuleInclusiveorexpression = 51, RuleLogicalandexpression = 52,
		RuleLogicalorexpression = 53, RuleConditionalexpression = 54, RuleAssignmentexpression = 55,
		RuleAssignmentoperator = 56, RuleExpression = 57, RuleConstantexpression = 58,
		RuleStatement = 59, RuleLabeledstatement = 60, RuleExpressionstatement = 61,
		RuleCompoundstatement = 62, RuleStatementseq = 63, RuleSelectionstatement = 64,
		RuleCondition = 65, RuleIterationstatement = 66, RuleForinitstatement = 67,
		RuleForrangedeclaration = 68, RuleForrangeinitializer = 69, RuleJumpstatement = 70,
		RuleDeclarationstatement = 71, RuleDeclarationseq = 72, RuleDeclaration = 73,
		RuleBlockdeclaration = 74, RuleAliasdeclaration = 75, RuleSimpledeclaration = 76,
		RuleStatic_assertdeclaration = 77, RuleEmptydeclaration = 78, RuleAttributedeclaration = 79,
		RuleDeclspecifier = 80, RuleDeclspecifierseq = 81, RuleStorageclassspecifier = 82,
		RuleFunctionspecifier = 83, RuleTypedefname = 84, RuleTypespecifier = 85,
		RuleTrailingtypespecifier = 86, RuleTypespecifierseq = 87, RuleTrailingtypespecifierseq = 88,
		RuleSimpletypespecifier = 89, RuleThetypename = 90, RuleDecltypespecifier = 91,
		RuleElaboratedtypespecifier = 92, RuleEnumname = 93, RuleEnumspecifier = 94,
		RuleEnumhead = 95, RuleOpaqueenumdeclaration = 96, RuleEnumkey = 97,
		RuleEnumbase = 98, RuleEnumeratorlist = 99, RuleEnumeratordefinition = 100,
		RuleEnumerator = 101, RuleNamespacename = 102, RuleOriginalnamespacename = 103,
		RuleNamespacedefinition = 104, RuleNamednamespacedefinition = 105, RuleOriginalnamespacedefinition = 106,
		RuleExtensionnamespacedefinition = 107, RuleUnnamednamespacedefinition = 108,
		RuleNamespacebody = 109, RuleNamespacealias = 110, RuleNamespacealiasdefinition = 111,
		RuleQualifiednamespacespecifier = 112, RuleUsingdeclaration = 113, RuleUsingdirective = 114,
		RuleAsmdefinition = 115, RuleLinkagespecification = 116, RuleAttributespecifierseq = 117,
		RuleAttributespecifier = 118, RuleAlignmentspecifier = 119, RuleAttributelist = 120,
		RuleAttribute = 121, RuleAttributetoken = 122, RuleAttributescopedtoken = 123,
		RuleAttributenamespace = 124, RuleAttributeargumentclause = 125, RuleBalancedtokenseq = 126,
		RuleBalancedtoken = 127, RuleInitdeclaratorlist = 128, RuleInitdeclarator = 129,
		RuleDeclarator = 130, RulePtrdeclarator = 131, RuleNoptrdeclarator = 132,
		RuleParametersandqualifiers = 133, RuleTrailingreturntype = 134, RulePtroperator = 135,
		RuleCvqualifierseq = 136, RuleCvqualifier = 137, RuleRefqualifier = 138,
		RuleDeclaratorid = 139, RuleThetypeid = 140, RuleAbstractdeclarator = 141,
		RulePtrabstractdeclarator = 142, RuleNoptrabstractdeclarator = 143,
		RuleAbstractpackdeclarator = 144, RuleNoptrabstractpackdeclarator = 145,
		RuleParameterdeclarationclause = 146, RuleParameterdeclarationlist = 147,
		RuleParameterdeclaration = 148, RuleFunctiondefinition = 149, RuleFunctionbody = 150,
		RuleInitializer = 151, RuleBraceorequalinitializer = 152, RuleInitializerclause = 153,
		RuleInitializerlist = 154, RuleBracedinitlist = 155, RuleClassname = 156,
		RuleClassspecifier = 157, RuleClasshead = 158, RuleClassheadname = 159,
		RuleClassvirtspecifier = 160, RuleClasskey = 161, RuleMemberspecification = 162,
		RuleMemberdeclaration = 163, RuleMemberdeclaratorlist = 164, RuleMemberdeclarator = 165,
		RuleVirtspecifierseq = 166, RuleVirtspecifier = 167, RulePurespecifier = 168,
		RuleBaseclause = 169, RuleBasespecifierlist = 170, RuleBasespecifier = 171,
		RuleClassordecltype = 172, RuleBasetypespecifier = 173, RuleAccessspecifier = 174,
		RuleConversionfunctionid = 175, RuleConversiontypeid = 176, RuleConversiondeclarator = 177,
		RuleCtorinitializer = 178, RuleMeminitializerlist = 179, RuleMeminitializer = 180,
		RuleMeminitializerid = 181, RuleOperatorfunctionid = 182, RuleLiteraloperatorid = 183,
		RuleTemplatedeclaration = 184, RuleTemplateparameterlist = 185, RuleTemplateparameter = 186,
		RuleTypeparameter = 187, RuleSimpletemplateid = 188, RuleTemplateid = 189,
		RuleTemplatename = 190, RuleTemplateargumentlist = 191, RuleTemplateargument = 192,
		RuleTypenamespecifier = 193, RuleExplicitinstantiation = 194, RuleExplicitspecialization = 195,
		RuleTryblock = 196, RuleFunctiontryblock = 197, RuleHandlerseq = 198,
		RuleHandler = 199, RuleExceptiondeclaration = 200, RuleThrowexpression = 201,
		RuleExceptionspecification = 202, RuleDynamicexceptionspecification = 203,
		RuleTypeidlist = 204, RuleNoexceptspecification = 205, RuleTheoperator = 206,
		RuleLiteral = 207, RuleBooleanliteral = 208, RulePointerliteral = 209,
		RuleUserdefinedliteral = 210
	};

	AergiaCpp14Parser( antlr4::TokenStream* input );
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
	class AergiastringContext;
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
	class ExtensionnamespacedefinitionContext;
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
		TranslationunitContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* EOF();
		DeclarationseqContext* declarationseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TranslationunitContext* translationunit();

	class  AergiaexpressionbeginContext : public antlr4::ParserRuleContext {
	public:
		AergiaexpressionbeginContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AergiaexpressionbeginContext* aergiaexpressionbegin();

	class  AergiaexpressionendContext : public antlr4::ParserRuleContext {
	public:
		AergiaexpressionendContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AergiaexpressionendContext* aergiaexpressionend();

	class  AergiaBlockContext : public antlr4::ParserRuleContext {
	public:
		AergiaBlockContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		StatementseqContext* statementseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AergiaBlockContext* aergiaBlock();

	class  AergiaexpressionContext : public antlr4::ParserRuleContext {
	public:
		AergiaexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ForeachContext* foreach();
		AergiaexpressionbeginContext* aergiaexpressionbegin();
		CallchainContext* callchain();
		AergiaexpressionendContext* aergiaexpressionend();
		AnonymousExpressionContext* anonymousExpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AergiaexpressionContext* aergiaexpression();

	class  AnonymousExpressionContext : public antlr4::ParserRuleContext {
	public:
		AnonymousExpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* LeftParen();
		AnoynmousBodyContext* anoynmousBody();
		antlr4::tree::TerminalNode* RightParen();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AnonymousExpressionContext* anonymousExpression();

	class  AnoynmousBodyContext : public antlr4::ParserRuleContext {
	public:
		AnoynmousBodyContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		InitializerclauseContext* initializerclause();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AnoynmousBodyContext* anoynmousBody();

	class  AergiastringContext : public antlr4::ParserRuleContext {
	public:
		AergiastringContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		CallchainContext* callchain();
		antlr4::tree::TerminalNode* Encodingprefix();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AergiastringContext* aergiastring();

	class  ForeachContext : public antlr4::ParserRuleContext {
	public:
		ForeachContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ForeachheaderContext* foreachheader();
		antlr4::tree::TerminalNode* RightParen();
		ForeachbodyContext* foreachbody();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ForeachContext* foreach();

	class  ForeachheaderContext : public antlr4::ParserRuleContext {
	public:
		ForeachheaderContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		std::vector<AergiaexpressionbeginContext*> aergiaexpressionbegin();
		AergiaexpressionbeginContext* aergiaexpressionbegin( size_t i );
		antlr4::tree::TerminalNode* Identifier();
		CallchainContext* callchain();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ForeachheaderContext* foreachheader();

	class  ForeachbodyContext : public antlr4::ParserRuleContext {
	public:
		ForeachbodyContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		AergiaexpressionContext* aergiaexpression();
		AergiaBlockContext* aergiaBlock();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ForeachbodyContext* foreachbody();

	class  CallchainContext : public antlr4::ParserRuleContext {
	public:
		CallchainContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		std::vector<antlr4::tree::TerminalNode*> Identifier();
		antlr4::tree::TerminalNode* Identifier( size_t i );
		antlr4::tree::TerminalNode* Dot();
		CallchainContext* callchain();
		antlr4::tree::TerminalNode* LeftParen();
		antlr4::tree::TerminalNode* RightParen();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	CallchainContext* callchain();

	class  PrimaryexpressionContext : public antlr4::ParserRuleContext {
	public:
		PrimaryexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		LiteralContext* literal();
		antlr4::tree::TerminalNode* This();
		antlr4::tree::TerminalNode* LeftParen();
		ExpressionContext* expression();
		antlr4::tree::TerminalNode* RightParen();
		IdexpressionContext* idexpression();
		LambdaexpressionContext* lambdaexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	PrimaryexpressionContext* primaryexpression();

	class  IdexpressionContext : public antlr4::ParserRuleContext {
	public:
		IdexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		UnqualifiedidContext* unqualifiedid();
		QualifiedidContext* qualifiedid();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	IdexpressionContext* idexpression();

	class  UnqualifiedidContext : public antlr4::ParserRuleContext {
	public:
		UnqualifiedidContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();
		OperatorfunctionidContext* operatorfunctionid();
		ConversionfunctionidContext* conversionfunctionid();
		LiteraloperatoridContext* literaloperatorid();
		antlr4::tree::TerminalNode* Tilde();
		ClassnameContext* classname();
		DecltypespecifierContext* decltypespecifier();
		TemplateidContext* templateid();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	UnqualifiedidContext* unqualifiedid();

	class  QualifiedidContext : public antlr4::ParserRuleContext {
	public:
		QualifiedidContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		NestednamespecifierContext* nestednamespecifier();
		UnqualifiedidContext* unqualifiedid();
		antlr4::tree::TerminalNode* Template();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	QualifiedidContext* qualifiedid();

	class  NestednamespecifierContext : public antlr4::ParserRuleContext {
	public:
		NestednamespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Doublecolon();
		ThetypenameContext* thetypename();
		NamespacenameContext* namespacename();
		DecltypespecifierContext* decltypespecifier();
		NestednamespecifierContext* nestednamespecifier();
		antlr4::tree::TerminalNode* Identifier();
		SimpletemplateidContext* simpletemplateid();
		antlr4::tree::TerminalNode* Template();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NestednamespecifierContext* nestednamespecifier();
	NestednamespecifierContext* nestednamespecifier( int precedence );
	class  LambdaexpressionContext : public antlr4::ParserRuleContext {
	public:
		LambdaexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		LambdaintroducerContext* lambdaintroducer();
		CompoundstatementContext* compoundstatement();
		LambdadeclaratorContext* lambdadeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	LambdaexpressionContext* lambdaexpression();

	class  LambdaintroducerContext : public antlr4::ParserRuleContext {
	public:
		LambdaintroducerContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* LeftBracket();
		antlr4::tree::TerminalNode* RightBracket();
		LambdacaptureContext* lambdacapture();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	LambdaintroducerContext* lambdaintroducer();

	class  LambdacaptureContext : public antlr4::ParserRuleContext {
	public:
		LambdacaptureContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		CapturedefaultContext* capturedefault();
		CapturelistContext* capturelist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	LambdacaptureContext* lambdacapture();

	class  CapturedefaultContext : public antlr4::ParserRuleContext {
	public:
		CapturedefaultContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* And();
		antlr4::tree::TerminalNode* Assign();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	CapturedefaultContext* capturedefault();

	class  CapturelistContext : public antlr4::ParserRuleContext {
	public:
		CapturelistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		CaptureContext* capture();
		antlr4::tree::TerminalNode* Ellipsis();
		CapturelistContext* capturelist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	CapturelistContext* capturelist();
	CapturelistContext* capturelist( int precedence );
	class  CaptureContext : public antlr4::ParserRuleContext {
	public:
		CaptureContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		SimplecaptureContext* simplecapture();
		InitcaptureContext* initcapture();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	CaptureContext* capture();

	class  SimplecaptureContext : public antlr4::ParserRuleContext {
	public:
		SimplecaptureContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();
		antlr4::tree::TerminalNode* And();
		antlr4::tree::TerminalNode* This();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	SimplecaptureContext* simplecapture();

	class  InitcaptureContext : public antlr4::ParserRuleContext {
	public:
		InitcaptureContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();
		InitializerContext* initializer();
		antlr4::tree::TerminalNode* And();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	InitcaptureContext* initcapture();

	class  LambdadeclaratorContext : public antlr4::ParserRuleContext {
	public:
		LambdadeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* LeftParen();
		ParameterdeclarationclauseContext* parameterdeclarationclause();
		antlr4::tree::TerminalNode* RightParen();
		antlr4::tree::TerminalNode* Mutable();
		ExceptionspecificationContext* exceptionspecification();
		AttributespecifierseqContext* attributespecifierseq();
		TrailingreturntypeContext* trailingreturntype();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	LambdadeclaratorContext* lambdadeclarator();

	class  PostfixexpressionContext : public antlr4::ParserRuleContext {
	public:
		PostfixexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		PrimaryexpressionContext* primaryexpression();
		SimpletypespecifierContext* simpletypespecifier();
		antlr4::tree::TerminalNode* LeftParen();
		antlr4::tree::TerminalNode* RightParen();
		ExpressionlistContext* expressionlist();
		TypenamespecifierContext* typenamespecifier();
		BracedinitlistContext* bracedinitlist();
		antlr4::tree::TerminalNode* Dynamic_cast();
		antlr4::tree::TerminalNode* Less();
		ThetypeidContext* thetypeid();
		antlr4::tree::TerminalNode* Greater();
		ExpressionContext* expression();
		antlr4::tree::TerminalNode* Static_cast();
		antlr4::tree::TerminalNode* Reinterpret_cast();
		antlr4::tree::TerminalNode* Const_cast();
		TypeidofthetypeidContext* typeidofthetypeid();
		PostfixexpressionContext* postfixexpression();
		antlr4::tree::TerminalNode* LeftBracket();
		antlr4::tree::TerminalNode* RightBracket();
		antlr4::tree::TerminalNode* Dot();
		IdexpressionContext* idexpression();
		antlr4::tree::TerminalNode* Template();
		antlr4::tree::TerminalNode* Arrow();
		PseudodestructornameContext* pseudodestructorname();
		antlr4::tree::TerminalNode* PlusPlus();
		antlr4::tree::TerminalNode* MinusMinus();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	PostfixexpressionContext* postfixexpression();
	PostfixexpressionContext* postfixexpression( int precedence );
	class  TypeidofexprContext : public antlr4::ParserRuleContext {
	public:
		TypeidofexprContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Typeid_();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TypeidofexprContext* typeidofexpr();

	class  TypeidofthetypeidContext : public antlr4::ParserRuleContext {
	public:
		TypeidofthetypeidContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Typeid_();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TypeidofthetypeidContext* typeidofthetypeid();

	class  ExpressionlistContext : public antlr4::ParserRuleContext {
	public:
		ExpressionlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		InitializerlistContext* initializerlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ExpressionlistContext* expressionlist();

	class  PseudodestructornameContext : public antlr4::ParserRuleContext {
	public:
		PseudodestructornameContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		std::vector<ThetypenameContext*> thetypename();
		ThetypenameContext* thetypename( size_t i );
		antlr4::tree::TerminalNode* Doublecolon();
		antlr4::tree::TerminalNode* Tilde();
		NestednamespecifierContext* nestednamespecifier();
		antlr4::tree::TerminalNode* Template();
		SimpletemplateidContext* simpletemplateid();
		DecltypespecifierContext* decltypespecifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	PseudodestructornameContext* pseudodestructorname();

	class  UnaryexpressionContext : public antlr4::ParserRuleContext {
	public:
		UnaryexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		PostfixexpressionContext* postfixexpression();
		antlr4::tree::TerminalNode* PlusPlus();
		CastexpressionContext* castexpression();
		antlr4::tree::TerminalNode* MinusMinus();
		UnaryoperatorContext* unaryoperator();
		antlr4::tree::TerminalNode* Sizeof();
		UnaryexpressionContext* unaryexpression();
		antlr4::tree::TerminalNode* LeftParen();
		ThetypeidContext* thetypeid();
		antlr4::tree::TerminalNode* RightParen();
		antlr4::tree::TerminalNode* Ellipsis();
		antlr4::tree::TerminalNode* Identifier();
		antlr4::tree::TerminalNode* Alignof();
		NoexceptexpressionContext* noexceptexpression();
		NewexpressionContext* newexpression();
		DeleteexpressionContext* deleteexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	UnaryexpressionContext* unaryexpression();

	class  UnaryoperatorContext : public antlr4::ParserRuleContext {
	public:
		UnaryoperatorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Or();
		antlr4::tree::TerminalNode* Star();
		antlr4::tree::TerminalNode* And();
		antlr4::tree::TerminalNode* Plus();
		antlr4::tree::TerminalNode* Tilde();
		antlr4::tree::TerminalNode* Minus();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	UnaryoperatorContext* unaryoperator();

	class  NewexpressionContext : public antlr4::ParserRuleContext {
	public:
		NewexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* New();
		NewtypeidContext* newtypeid();
		antlr4::tree::TerminalNode* Doublecolon();
		NewplacementContext* newplacement();
		NewinitializerContext* newinitializer();
		antlr4::tree::TerminalNode* LeftParen();
		ThetypeidContext* thetypeid();
		antlr4::tree::TerminalNode* RightParen();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NewexpressionContext* newexpression();

	class  NewplacementContext : public antlr4::ParserRuleContext {
	public:
		NewplacementContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* LeftParen();
		ExpressionlistContext* expressionlist();
		antlr4::tree::TerminalNode* RightParen();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NewplacementContext* newplacement();

	class  NewtypeidContext : public antlr4::ParserRuleContext {
	public:
		NewtypeidContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		TypespecifierseqContext* typespecifierseq();
		NewdeclaratorContext* newdeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NewtypeidContext* newtypeid();

	class  NewdeclaratorContext : public antlr4::ParserRuleContext {
	public:
		NewdeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		PtroperatorContext* ptroperator();
		NewdeclaratorContext* newdeclarator();
		NoptrnewdeclaratorContext* noptrnewdeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NewdeclaratorContext* newdeclarator();

	class  NoptrnewdeclaratorContext : public antlr4::ParserRuleContext {
	public:
		NoptrnewdeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* LeftBracket();
		ExpressionContext* expression();
		antlr4::tree::TerminalNode* RightBracket();
		AttributespecifierseqContext* attributespecifierseq();
		NoptrnewdeclaratorContext* noptrnewdeclarator();
		ConstantexpressionContext* constantexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NoptrnewdeclaratorContext* noptrnewdeclarator();
	NoptrnewdeclaratorContext* noptrnewdeclarator( int precedence );
	class  NewinitializerContext : public antlr4::ParserRuleContext {
	public:
		NewinitializerContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* LeftParen();
		antlr4::tree::TerminalNode* RightParen();
		ExpressionlistContext* expressionlist();
		BracedinitlistContext* bracedinitlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NewinitializerContext* newinitializer();

	class  DeleteexpressionContext : public antlr4::ParserRuleContext {
	public:
		DeleteexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Delete();
		CastexpressionContext* castexpression();
		antlr4::tree::TerminalNode* Doublecolon();
		antlr4::tree::TerminalNode* LeftBracket();
		antlr4::tree::TerminalNode* RightBracket();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	DeleteexpressionContext* deleteexpression();

	class  NoexceptexpressionContext : public antlr4::ParserRuleContext {
	public:
		NoexceptexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Noexcept();
		antlr4::tree::TerminalNode* LeftParen();
		ExpressionContext* expression();
		antlr4::tree::TerminalNode* RightParen();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NoexceptexpressionContext* noexceptexpression();

	class  CastexpressionContext : public antlr4::ParserRuleContext {
	public:
		CastexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		UnaryexpressionContext* unaryexpression();
		antlr4::tree::TerminalNode* LeftParen();
		ThetypeidContext* thetypeid();
		antlr4::tree::TerminalNode* RightParen();
		CastexpressionContext* castexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	CastexpressionContext* castexpression();

	class  PmexpressionContext : public antlr4::ParserRuleContext {
	public:
		PmexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		PrimaryexpressionContext* primaryexpression();
		PmexpressionContext* pmexpression();
		antlr4::tree::TerminalNode* DotStar();
		CastexpressionContext* castexpression();
		antlr4::tree::TerminalNode* ArrowStar();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	PmexpressionContext* pmexpression();
	PmexpressionContext* pmexpression( int precedence );
	class  MultiplicativeexpressionContext : public antlr4::ParserRuleContext {
	public:
		MultiplicativeexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		PmexpressionContext* pmexpression();
		MultiplicativeexpressionContext* multiplicativeexpression();
		antlr4::tree::TerminalNode* Star();
		antlr4::tree::TerminalNode* Div();
		antlr4::tree::TerminalNode* Mod();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	MultiplicativeexpressionContext* multiplicativeexpression();
	MultiplicativeexpressionContext* multiplicativeexpression( int precedence );
	class  AdditiveexpressionContext : public antlr4::ParserRuleContext {
	public:
		AdditiveexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		MultiplicativeexpressionContext* multiplicativeexpression();
		AdditiveexpressionContext* additiveexpression();
		antlr4::tree::TerminalNode* Plus();
		antlr4::tree::TerminalNode* Minus();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AdditiveexpressionContext* additiveexpression();
	AdditiveexpressionContext* additiveexpression( int precedence );
	class  ShiftexpressionContext : public antlr4::ParserRuleContext {
	public:
		ShiftexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		AdditiveexpressionContext* additiveexpression();
		ShiftexpressionContext* shiftexpression();
		ShiftoperatorContext* shiftoperator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ShiftexpressionContext* shiftexpression();
	ShiftexpressionContext* shiftexpression( int precedence );
	class  ShiftoperatorContext : public antlr4::ParserRuleContext {
	public:
		ShiftoperatorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* RightShift();
		antlr4::tree::TerminalNode* LeftShift();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ShiftoperatorContext* shiftoperator();

	class  RelationalexpressionContext : public antlr4::ParserRuleContext {
	public:
		RelationalexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ShiftexpressionContext* shiftexpression();
		RelationalexpressionContext* relationalexpression();
		antlr4::tree::TerminalNode* Less();
		antlr4::tree::TerminalNode* Greater();
		antlr4::tree::TerminalNode* LessEqual();
		antlr4::tree::TerminalNode* GreaterEqual();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	RelationalexpressionContext* relationalexpression();
	RelationalexpressionContext* relationalexpression( int precedence );
	class  EqualityexpressionContext : public antlr4::ParserRuleContext {
	public:
		EqualityexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		RelationalexpressionContext* relationalexpression();
		EqualityexpressionContext* equalityexpression();
		antlr4::tree::TerminalNode* Equal();
		antlr4::tree::TerminalNode* NotEqual();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	EqualityexpressionContext* equalityexpression();
	EqualityexpressionContext* equalityexpression( int precedence );
	class  AndexpressionContext : public antlr4::ParserRuleContext {
	public:
		AndexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		EqualityexpressionContext* equalityexpression();
		AndexpressionContext* andexpression();
		antlr4::tree::TerminalNode* And();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AndexpressionContext* andexpression();
	AndexpressionContext* andexpression( int precedence );
	class  ExclusiveorexpressionContext : public antlr4::ParserRuleContext {
	public:
		ExclusiveorexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		AndexpressionContext* andexpression();
		ExclusiveorexpressionContext* exclusiveorexpression();
		antlr4::tree::TerminalNode* Caret();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ExclusiveorexpressionContext* exclusiveorexpression();
	ExclusiveorexpressionContext* exclusiveorexpression( int precedence );
	class  InclusiveorexpressionContext : public antlr4::ParserRuleContext {
	public:
		InclusiveorexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ExclusiveorexpressionContext* exclusiveorexpression();
		InclusiveorexpressionContext* inclusiveorexpression();
		antlr4::tree::TerminalNode* Or();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	InclusiveorexpressionContext* inclusiveorexpression();
	InclusiveorexpressionContext* inclusiveorexpression( int precedence );
	class  LogicalandexpressionContext : public antlr4::ParserRuleContext {
	public:
		LogicalandexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		InclusiveorexpressionContext* inclusiveorexpression();
		LogicalandexpressionContext* logicalandexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	LogicalandexpressionContext* logicalandexpression();
	LogicalandexpressionContext* logicalandexpression( int precedence );
	class  LogicalorexpressionContext : public antlr4::ParserRuleContext {
	public:
		LogicalorexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		LogicalandexpressionContext* logicalandexpression();
		LogicalorexpressionContext* logicalorexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	LogicalorexpressionContext* logicalorexpression();
	LogicalorexpressionContext* logicalorexpression( int precedence );
	class  ConditionalexpressionContext : public antlr4::ParserRuleContext {
	public:
		ConditionalexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		LogicalorexpressionContext* logicalorexpression();
		antlr4::tree::TerminalNode* Question();
		ExpressionContext* expression();
		antlr4::tree::TerminalNode* Colon();
		AssignmentexpressionContext* assignmentexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ConditionalexpressionContext* conditionalexpression();

	class  AssignmentexpressionContext : public antlr4::ParserRuleContext {
	public:
		AssignmentexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		PmexpressionContext* pmexpression();
		CastexpressionContext* castexpression();
		LogicalorexpressionContext* logicalorexpression();
		AssignmentoperatorContext* assignmentoperator();
		ThrowexpressionContext* throwexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AssignmentexpressionContext* assignmentexpression();

	class  AssignmentoperatorContext : public antlr4::ParserRuleContext {
	public:
		AssignmentoperatorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Assign();
		antlr4::tree::TerminalNode* StarAssign();
		antlr4::tree::TerminalNode* DivAssign();
		antlr4::tree::TerminalNode* ModAssign();
		antlr4::tree::TerminalNode* PlusAssign();
		antlr4::tree::TerminalNode* MinusAssign();
		antlr4::tree::TerminalNode* RightShiftAssign();
		antlr4::tree::TerminalNode* LeftShiftAssign();
		antlr4::tree::TerminalNode* AndAssign();
		antlr4::tree::TerminalNode* XorAssign();
		antlr4::tree::TerminalNode* OrAssign();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AssignmentoperatorContext* assignmentoperator();

	class  ExpressionContext : public antlr4::ParserRuleContext {
	public:
		ExpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		AssignmentexpressionContext* assignmentexpression();
		ExpressionContext* expression();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ExpressionContext* expression();
	ExpressionContext* expression( int precedence );
	class  ConstantexpressionContext : public antlr4::ParserRuleContext {
	public:
		ConstantexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ConditionalexpressionContext* conditionalexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ConstantexpressionContext* constantexpression();

	class  StatementContext : public antlr4::ParserRuleContext {
	public:
		StatementContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		LabeledstatementContext* labeledstatement();
		ExpressionstatementContext* expressionstatement();
		AttributespecifierseqContext* attributespecifierseq();
		CompoundstatementContext* compoundstatement();
		SelectionstatementContext* selectionstatement();
		IterationstatementContext* iterationstatement();
		JumpstatementContext* jumpstatement();
		DeclarationstatementContext* declarationstatement();
		AergiaexpressionContext* aergiaexpression();
		TryblockContext* tryblock();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	StatementContext* statement();

	class  LabeledstatementContext : public antlr4::ParserRuleContext {
	public:
		LabeledstatementContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();
		antlr4::tree::TerminalNode* Colon();
		StatementContext* statement();
		AttributespecifierseqContext* attributespecifierseq();
		antlr4::tree::TerminalNode* Case();
		ConstantexpressionContext* constantexpression();
		antlr4::tree::TerminalNode* Default();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	LabeledstatementContext* labeledstatement();

	class  ExpressionstatementContext : public antlr4::ParserRuleContext {
	public:
		ExpressionstatementContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Semi();
		ExpressionContext* expression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ExpressionstatementContext* expressionstatement();

	class  CompoundstatementContext : public antlr4::ParserRuleContext {
	public:
		CompoundstatementContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* LeftBrace();
		antlr4::tree::TerminalNode* RightBrace();
		StatementseqContext* statementseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	CompoundstatementContext* compoundstatement();

	class  StatementseqContext : public antlr4::ParserRuleContext {
	public:
		StatementseqContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		StatementContext* statement();
		StatementseqContext* statementseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	StatementseqContext* statementseq();
	StatementseqContext* statementseq( int precedence );
	class  SelectionstatementContext : public antlr4::ParserRuleContext {
	public:
		SelectionstatementContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* If();
		antlr4::tree::TerminalNode* LeftParen();
		ConditionContext* condition();
		antlr4::tree::TerminalNode* RightParen();
		std::vector<StatementContext*> statement();
		StatementContext* statement( size_t i );
		antlr4::tree::TerminalNode* Else();
		antlr4::tree::TerminalNode* Switch();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	SelectionstatementContext* selectionstatement();

	class  ConditionContext : public antlr4::ParserRuleContext {
	public:
		ConditionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ExpressionContext* expression();
		DeclspecifierseqContext* declspecifierseq();
		DeclaratorContext* declarator();
		antlr4::tree::TerminalNode* Assign();
		InitializerclauseContext* initializerclause();
		AttributespecifierseqContext* attributespecifierseq();
		BracedinitlistContext* bracedinitlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ConditionContext* condition();

	class  IterationstatementContext : public antlr4::ParserRuleContext {
	public:
		IterationstatementContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* While();
		antlr4::tree::TerminalNode* LeftParen();
		ConditionContext* condition();
		antlr4::tree::TerminalNode* RightParen();
		StatementContext* statement();
		antlr4::tree::TerminalNode* Do();
		ExpressionContext* expression();
		antlr4::tree::TerminalNode* Semi();
		antlr4::tree::TerminalNode* For();
		ForinitstatementContext* forinitstatement();
		ForrangedeclarationContext* forrangedeclaration();
		antlr4::tree::TerminalNode* Colon();
		ForrangeinitializerContext* forrangeinitializer();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	IterationstatementContext* iterationstatement();

	class  ForinitstatementContext : public antlr4::ParserRuleContext {
	public:
		ForinitstatementContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ExpressionstatementContext* expressionstatement();
		SimpledeclarationContext* simpledeclaration();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ForinitstatementContext* forinitstatement();

	class  ForrangedeclarationContext : public antlr4::ParserRuleContext {
	public:
		ForrangedeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		DeclspecifierseqContext* declspecifierseq();
		DeclaratorContext* declarator();
		AttributespecifierseqContext* attributespecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ForrangedeclarationContext* forrangedeclaration();

	class  ForrangeinitializerContext : public antlr4::ParserRuleContext {
	public:
		ForrangeinitializerContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ExpressionContext* expression();
		BracedinitlistContext* bracedinitlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ForrangeinitializerContext* forrangeinitializer();

	class  JumpstatementContext : public antlr4::ParserRuleContext {
	public:
		JumpstatementContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Break();
		antlr4::tree::TerminalNode* Semi();
		antlr4::tree::TerminalNode* Continue();
		antlr4::tree::TerminalNode* Return();
		ExpressionContext* expression();
		BracedinitlistContext* bracedinitlist();
		antlr4::tree::TerminalNode* Goto();
		antlr4::tree::TerminalNode* Identifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	JumpstatementContext* jumpstatement();

	class  DeclarationstatementContext : public antlr4::ParserRuleContext {
	public:
		DeclarationstatementContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		BlockdeclarationContext* blockdeclaration();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	DeclarationstatementContext* declarationstatement();

	class  DeclarationseqContext : public antlr4::ParserRuleContext {
	public:
		DeclarationseqContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		DeclarationContext* declaration();
		DeclarationseqContext* declarationseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	DeclarationseqContext* declarationseq();
	DeclarationseqContext* declarationseq( int precedence );
	class  DeclarationContext : public antlr4::ParserRuleContext {
	public:
		DeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		BlockdeclarationContext* blockdeclaration();
		FunctiondefinitionContext* functiondefinition();
		TemplatedeclarationContext* templatedeclaration();
		ExplicitinstantiationContext* explicitinstantiation();
		ExplicitspecializationContext* explicitspecialization();
		LinkagespecificationContext* linkagespecification();
		NamespacedefinitionContext* namespacedefinition();
		EmptydeclarationContext* emptydeclaration();
		AttributedeclarationContext* attributedeclaration();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	DeclarationContext* declaration();

	class  BlockdeclarationContext : public antlr4::ParserRuleContext {
	public:
		BlockdeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		SimpledeclarationContext* simpledeclaration();
		AsmdefinitionContext* asmdefinition();
		NamespacealiasdefinitionContext* namespacealiasdefinition();
		UsingdeclarationContext* usingdeclaration();
		UsingdirectiveContext* usingdirective();
		Static_assertdeclarationContext* static_assertdeclaration();
		AliasdeclarationContext* aliasdeclaration();
		OpaqueenumdeclarationContext* opaqueenumdeclaration();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	BlockdeclarationContext* blockdeclaration();

	class  AliasdeclarationContext : public antlr4::ParserRuleContext {
	public:
		AliasdeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Using();
		antlr4::tree::TerminalNode* Identifier();
		antlr4::tree::TerminalNode* Assign();
		ThetypeidContext* thetypeid();
		antlr4::tree::TerminalNode* Semi();
		AttributespecifierseqContext* attributespecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AliasdeclarationContext* aliasdeclaration();

	class  SimpledeclarationContext : public antlr4::ParserRuleContext {
	public:
		SimpledeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Semi();
		DeclspecifierseqContext* declspecifierseq();
		InitdeclaratorlistContext* initdeclaratorlist();
		AttributespecifierseqContext* attributespecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	SimpledeclarationContext* simpledeclaration();

	class  Static_assertdeclarationContext : public antlr4::ParserRuleContext {
	public:
		Static_assertdeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Static_assert();
		antlr4::tree::TerminalNode* LeftParen();
		ConstantexpressionContext* constantexpression();
		antlr4::tree::TerminalNode* Comma();
		antlr4::tree::TerminalNode* RightParen();
		antlr4::tree::TerminalNode* Semi();
		antlr4::tree::TerminalNode* Stringliteral();
		AergiastringContext* aergiastring();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	Static_assertdeclarationContext* static_assertdeclaration();

	class  EmptydeclarationContext : public antlr4::ParserRuleContext {
	public:
		EmptydeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Semi();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	EmptydeclarationContext* emptydeclaration();

	class  AttributedeclarationContext : public antlr4::ParserRuleContext {
	public:
		AttributedeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		AttributespecifierseqContext* attributespecifierseq();
		antlr4::tree::TerminalNode* Semi();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AttributedeclarationContext* attributedeclaration();

	class  DeclspecifierContext : public antlr4::ParserRuleContext {
	public:
		DeclspecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		StorageclassspecifierContext* storageclassspecifier();
		TypespecifierContext* typespecifier();
		FunctionspecifierContext* functionspecifier();
		antlr4::tree::TerminalNode* Friend();
		antlr4::tree::TerminalNode* Typedef();
		antlr4::tree::TerminalNode* Constexpr();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	DeclspecifierContext* declspecifier();

	class  DeclspecifierseqContext : public antlr4::ParserRuleContext {
	public:
		DeclspecifierseqContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		DeclspecifierContext* declspecifier();
		AttributespecifierseqContext* attributespecifierseq();
		DeclspecifierseqContext* declspecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	DeclspecifierseqContext* declspecifierseq();

	class  StorageclassspecifierContext : public antlr4::ParserRuleContext {
	public:
		StorageclassspecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Register();
		antlr4::tree::TerminalNode* Static();
		antlr4::tree::TerminalNode* Thread_local();
		antlr4::tree::TerminalNode* Extern();
		antlr4::tree::TerminalNode* Mutable();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	StorageclassspecifierContext* storageclassspecifier();

	class  FunctionspecifierContext : public antlr4::ParserRuleContext {
	public:
		FunctionspecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Inline();
		antlr4::tree::TerminalNode* Virtual();
		antlr4::tree::TerminalNode* Explicit();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	FunctionspecifierContext* functionspecifier();

	class  TypedefnameContext : public antlr4::ParserRuleContext {
	public:
		TypedefnameContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TypedefnameContext* typedefname();

	class  TypespecifierContext : public antlr4::ParserRuleContext {
	public:
		TypespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		TrailingtypespecifierContext* trailingtypespecifier();
		ClassspecifierContext* classspecifier();
		EnumspecifierContext* enumspecifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TypespecifierContext* typespecifier();

	class  TrailingtypespecifierContext : public antlr4::ParserRuleContext {
	public:
		TrailingtypespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		SimpletypespecifierContext* simpletypespecifier();
		ElaboratedtypespecifierContext* elaboratedtypespecifier();
		TypenamespecifierContext* typenamespecifier();
		CvqualifierContext* cvqualifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TrailingtypespecifierContext* trailingtypespecifier();

	class  TypespecifierseqContext : public antlr4::ParserRuleContext {
	public:
		TypespecifierseqContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		TypespecifierContext* typespecifier();
		AttributespecifierseqContext* attributespecifierseq();
		TypespecifierseqContext* typespecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TypespecifierseqContext* typespecifierseq();

	class  TrailingtypespecifierseqContext : public antlr4::ParserRuleContext {
	public:
		TrailingtypespecifierseqContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		TrailingtypespecifierContext* trailingtypespecifier();
		AttributespecifierseqContext* attributespecifierseq();
		TrailingtypespecifierseqContext* trailingtypespecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TrailingtypespecifierseqContext* trailingtypespecifierseq();

	class  SimpletypespecifierContext : public antlr4::ParserRuleContext {
	public:
		SimpletypespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ThetypenameContext* thetypename();
		NestednamespecifierContext* nestednamespecifier();
		antlr4::tree::TerminalNode* Template();
		SimpletemplateidContext* simpletemplateid();
		antlr4::tree::TerminalNode* Char();
		antlr4::tree::TerminalNode* Char16();
		antlr4::tree::TerminalNode* Char32();
		antlr4::tree::TerminalNode* Wchar();
		antlr4::tree::TerminalNode* Bool();
		antlr4::tree::TerminalNode* Short();
		antlr4::tree::TerminalNode* Int();
		antlr4::tree::TerminalNode* Long();
		antlr4::tree::TerminalNode* Signed();
		antlr4::tree::TerminalNode* Unsigned();
		antlr4::tree::TerminalNode* Float();
		antlr4::tree::TerminalNode* Double();
		antlr4::tree::TerminalNode* Void();
		antlr4::tree::TerminalNode* Auto();
		DecltypespecifierContext* decltypespecifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	SimpletypespecifierContext* simpletypespecifier();

	class  ThetypenameContext : public antlr4::ParserRuleContext {
	public:
		ThetypenameContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ClassnameContext* classname();
		EnumnameContext* enumname();
		TypedefnameContext* typedefname();
		SimpletemplateidContext* simpletemplateid();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ThetypenameContext* thetypename();

	class  DecltypespecifierContext : public antlr4::ParserRuleContext {
	public:
		DecltypespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Decltype();
		antlr4::tree::TerminalNode* LeftParen();
		ExpressionContext* expression();
		antlr4::tree::TerminalNode* RightParen();
		antlr4::tree::TerminalNode* Auto();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	DecltypespecifierContext* decltypespecifier();

	class  ElaboratedtypespecifierContext : public antlr4::ParserRuleContext {
	public:
		ElaboratedtypespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ClasskeyContext* classkey();
		antlr4::tree::TerminalNode* Identifier();
		AttributespecifierseqContext* attributespecifierseq();
		NestednamespecifierContext* nestednamespecifier();
		SimpletemplateidContext* simpletemplateid();
		antlr4::tree::TerminalNode* Template();
		antlr4::tree::TerminalNode* Enum();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ElaboratedtypespecifierContext* elaboratedtypespecifier();

	class  EnumnameContext : public antlr4::ParserRuleContext {
	public:
		EnumnameContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	EnumnameContext* enumname();

	class  EnumspecifierContext : public antlr4::ParserRuleContext {
	public:
		EnumspecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		EnumheadContext* enumhead();
		antlr4::tree::TerminalNode* LeftBrace();
		antlr4::tree::TerminalNode* RightBrace();
		EnumeratorlistContext* enumeratorlist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	EnumspecifierContext* enumspecifier();

	class  EnumheadContext : public antlr4::ParserRuleContext {
	public:
		EnumheadContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		EnumkeyContext* enumkey();
		AttributespecifierseqContext* attributespecifierseq();
		antlr4::tree::TerminalNode* Identifier();
		EnumbaseContext* enumbase();
		NestednamespecifierContext* nestednamespecifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	EnumheadContext* enumhead();

	class  OpaqueenumdeclarationContext : public antlr4::ParserRuleContext {
	public:
		OpaqueenumdeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		EnumkeyContext* enumkey();
		antlr4::tree::TerminalNode* Identifier();
		antlr4::tree::TerminalNode* Semi();
		AttributespecifierseqContext* attributespecifierseq();
		EnumbaseContext* enumbase();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	OpaqueenumdeclarationContext* opaqueenumdeclaration();

	class  EnumkeyContext : public antlr4::ParserRuleContext {
	public:
		EnumkeyContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Enum();
		antlr4::tree::TerminalNode* Class();
		antlr4::tree::TerminalNode* Struct();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	EnumkeyContext* enumkey();

	class  EnumbaseContext : public antlr4::ParserRuleContext {
	public:
		EnumbaseContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Colon();
		TypespecifierseqContext* typespecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	EnumbaseContext* enumbase();

	class  EnumeratorlistContext : public antlr4::ParserRuleContext {
	public:
		EnumeratorlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		EnumeratordefinitionContext* enumeratordefinition();
		EnumeratorlistContext* enumeratorlist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	EnumeratorlistContext* enumeratorlist();
	EnumeratorlistContext* enumeratorlist( int precedence );
	class  EnumeratordefinitionContext : public antlr4::ParserRuleContext {
	public:
		EnumeratordefinitionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		EnumeratorContext* enumerator();
		antlr4::tree::TerminalNode* Assign();
		ConstantexpressionContext* constantexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	EnumeratordefinitionContext* enumeratordefinition();

	class  EnumeratorContext : public antlr4::ParserRuleContext {
	public:
		EnumeratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	EnumeratorContext* enumerator();

	class  NamespacenameContext : public antlr4::ParserRuleContext {
	public:
		NamespacenameContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		OriginalnamespacenameContext* originalnamespacename();
		NamespacealiasContext* namespacealias();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NamespacenameContext* namespacename();

	class  OriginalnamespacenameContext : public antlr4::ParserRuleContext {
	public:
		OriginalnamespacenameContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	OriginalnamespacenameContext* originalnamespacename();

	class  NamespacedefinitionContext : public antlr4::ParserRuleContext {
	public:
		NamespacedefinitionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		NamednamespacedefinitionContext* namednamespacedefinition();
		UnnamednamespacedefinitionContext* unnamednamespacedefinition();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NamespacedefinitionContext* namespacedefinition();

	class  NamednamespacedefinitionContext : public antlr4::ParserRuleContext {
	public:
		NamednamespacedefinitionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		OriginalnamespacedefinitionContext* originalnamespacedefinition();
		ExtensionnamespacedefinitionContext* extensionnamespacedefinition();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NamednamespacedefinitionContext* namednamespacedefinition();

	class  OriginalnamespacedefinitionContext : public antlr4::ParserRuleContext {
	public:
		OriginalnamespacedefinitionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Namespace();
		antlr4::tree::TerminalNode* Identifier();
		antlr4::tree::TerminalNode* LeftBrace();
		NamespacebodyContext* namespacebody();
		antlr4::tree::TerminalNode* RightBrace();
		antlr4::tree::TerminalNode* Inline();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	OriginalnamespacedefinitionContext* originalnamespacedefinition();

	class  ExtensionnamespacedefinitionContext : public antlr4::ParserRuleContext {
	public:
		ExtensionnamespacedefinitionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Namespace();
		OriginalnamespacenameContext* originalnamespacename();
		antlr4::tree::TerminalNode* LeftBrace();
		NamespacebodyContext* namespacebody();
		antlr4::tree::TerminalNode* RightBrace();
		antlr4::tree::TerminalNode* Inline();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ExtensionnamespacedefinitionContext* extensionnamespacedefinition();

	class  UnnamednamespacedefinitionContext : public antlr4::ParserRuleContext {
	public:
		UnnamednamespacedefinitionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Namespace();
		antlr4::tree::TerminalNode* LeftBrace();
		NamespacebodyContext* namespacebody();
		antlr4::tree::TerminalNode* RightBrace();
		antlr4::tree::TerminalNode* Inline();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	UnnamednamespacedefinitionContext* unnamednamespacedefinition();

	class  NamespacebodyContext : public antlr4::ParserRuleContext {
	public:
		NamespacebodyContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		DeclarationseqContext* declarationseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NamespacebodyContext* namespacebody();

	class  NamespacealiasContext : public antlr4::ParserRuleContext {
	public:
		NamespacealiasContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NamespacealiasContext* namespacealias();

	class  NamespacealiasdefinitionContext : public antlr4::ParserRuleContext {
	public:
		NamespacealiasdefinitionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Namespace();
		antlr4::tree::TerminalNode* Identifier();
		antlr4::tree::TerminalNode* Assign();
		QualifiednamespacespecifierContext* qualifiednamespacespecifier();
		antlr4::tree::TerminalNode* Semi();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NamespacealiasdefinitionContext* namespacealiasdefinition();

	class  QualifiednamespacespecifierContext : public antlr4::ParserRuleContext {
	public:
		QualifiednamespacespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		NamespacenameContext* namespacename();
		NestednamespecifierContext* nestednamespecifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	QualifiednamespacespecifierContext* qualifiednamespacespecifier();

	class  UsingdeclarationContext : public antlr4::ParserRuleContext {
	public:
		UsingdeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Using();
		NestednamespecifierContext* nestednamespecifier();
		UnqualifiedidContext* unqualifiedid();
		antlr4::tree::TerminalNode* Semi();
		antlr4::tree::TerminalNode* Typename_();
		antlr4::tree::TerminalNode* Doublecolon();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	UsingdeclarationContext* usingdeclaration();

	class  UsingdirectiveContext : public antlr4::ParserRuleContext {
	public:
		UsingdirectiveContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Using();
		antlr4::tree::TerminalNode* Namespace();
		NamespacenameContext* namespacename();
		antlr4::tree::TerminalNode* Semi();
		AttributespecifierseqContext* attributespecifierseq();
		NestednamespecifierContext* nestednamespecifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	UsingdirectiveContext* usingdirective();

	class  AsmdefinitionContext : public antlr4::ParserRuleContext {
	public:
		AsmdefinitionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Asm();
		antlr4::tree::TerminalNode* LeftParen();
		antlr4::tree::TerminalNode* Stringliteral();
		antlr4::tree::TerminalNode* RightParen();
		antlr4::tree::TerminalNode* Semi();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AsmdefinitionContext* asmdefinition();

	class  LinkagespecificationContext : public antlr4::ParserRuleContext {
	public:
		LinkagespecificationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Extern();
		antlr4::tree::TerminalNode* Stringliteral();
		antlr4::tree::TerminalNode* LeftBrace();
		antlr4::tree::TerminalNode* RightBrace();
		DeclarationseqContext* declarationseq();
		DeclarationContext* declaration();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	LinkagespecificationContext* linkagespecification();

	class  AttributespecifierseqContext : public antlr4::ParserRuleContext {
	public:
		AttributespecifierseqContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		AttributespecifierContext* attributespecifier();
		AttributespecifierseqContext* attributespecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AttributespecifierseqContext* attributespecifierseq();
	AttributespecifierseqContext* attributespecifierseq( int precedence );
	class  AttributespecifierContext : public antlr4::ParserRuleContext {
	public:
		AttributespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		std::vector<antlr4::tree::TerminalNode*> LeftBracket();
		antlr4::tree::TerminalNode* LeftBracket( size_t i );
		AttributelistContext* attributelist();
		std::vector<antlr4::tree::TerminalNode*> RightBracket();
		antlr4::tree::TerminalNode* RightBracket( size_t i );
		AlignmentspecifierContext* alignmentspecifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AttributespecifierContext* attributespecifier();

	class  AlignmentspecifierContext : public antlr4::ParserRuleContext {
	public:
		AlignmentspecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Alignas();
		antlr4::tree::TerminalNode* LeftParen();
		ThetypeidContext* thetypeid();
		antlr4::tree::TerminalNode* RightParen();
		antlr4::tree::TerminalNode* Ellipsis();
		ConstantexpressionContext* constantexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AlignmentspecifierContext* alignmentspecifier();

	class  AttributelistContext : public antlr4::ParserRuleContext {
	public:
		AttributelistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		AttributeContext* attribute();
		antlr4::tree::TerminalNode* Ellipsis();
		AttributelistContext* attributelist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AttributelistContext* attributelist();
	AttributelistContext* attributelist( int precedence );
	class  AttributeContext : public antlr4::ParserRuleContext {
	public:
		AttributeContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		AttributetokenContext* attributetoken();
		AttributeargumentclauseContext* attributeargumentclause();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AttributeContext* attribute();

	class  AttributetokenContext : public antlr4::ParserRuleContext {
	public:
		AttributetokenContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();
		AttributescopedtokenContext* attributescopedtoken();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AttributetokenContext* attributetoken();

	class  AttributescopedtokenContext : public antlr4::ParserRuleContext {
	public:
		AttributescopedtokenContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		AttributenamespaceContext* attributenamespace();
		antlr4::tree::TerminalNode* Doublecolon();
		antlr4::tree::TerminalNode* Identifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AttributescopedtokenContext* attributescopedtoken();

	class  AttributenamespaceContext : public antlr4::ParserRuleContext {
	public:
		AttributenamespaceContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AttributenamespaceContext* attributenamespace();

	class  AttributeargumentclauseContext : public antlr4::ParserRuleContext {
	public:
		AttributeargumentclauseContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* LeftParen();
		BalancedtokenseqContext* balancedtokenseq();
		antlr4::tree::TerminalNode* RightParen();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AttributeargumentclauseContext* attributeargumentclause();

	class  BalancedtokenseqContext : public antlr4::ParserRuleContext {
	public:
		BalancedtokenseqContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		BalancedtokenContext* balancedtoken();
		BalancedtokenseqContext* balancedtokenseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	BalancedtokenseqContext* balancedtokenseq();
	BalancedtokenseqContext* balancedtokenseq( int precedence );
	class  BalancedtokenContext : public antlr4::ParserRuleContext {
	public:
		BalancedtokenContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* LeftParen();
		BalancedtokenseqContext* balancedtokenseq();
		antlr4::tree::TerminalNode* RightParen();
		antlr4::tree::TerminalNode* LeftBracket();
		antlr4::tree::TerminalNode* RightBracket();
		antlr4::tree::TerminalNode* LeftBrace();
		antlr4::tree::TerminalNode* RightBrace();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	BalancedtokenContext* balancedtoken();

	class  InitdeclaratorlistContext : public antlr4::ParserRuleContext {
	public:
		InitdeclaratorlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		InitdeclaratorContext* initdeclarator();
		InitdeclaratorlistContext* initdeclaratorlist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	InitdeclaratorlistContext* initdeclaratorlist();
	InitdeclaratorlistContext* initdeclaratorlist( int precedence );
	class  InitdeclaratorContext : public antlr4::ParserRuleContext {
	public:
		InitdeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		DeclaratorContext* declarator();
		InitializerContext* initializer();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	InitdeclaratorContext* initdeclarator();

	class  DeclaratorContext : public antlr4::ParserRuleContext {
	public:
		DeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		PtrdeclaratorContext* ptrdeclarator();
		NoptrdeclaratorContext* noptrdeclarator();
		ParametersandqualifiersContext* parametersandqualifiers();
		TrailingreturntypeContext* trailingreturntype();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	DeclaratorContext* declarator();

	class  PtrdeclaratorContext : public antlr4::ParserRuleContext {
	public:
		PtrdeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		PtroperatorContext* ptroperator();
		PtrdeclaratorContext* ptrdeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	PtrdeclaratorContext* ptrdeclarator();

	class  NoptrdeclaratorContext : public antlr4::ParserRuleContext {
	public:
		NoptrdeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		DeclaratoridContext* declaratorid();
		AttributespecifierseqContext* attributespecifierseq();
		antlr4::tree::TerminalNode* LeftParen();
		PtrdeclaratorContext* ptrdeclarator();
		antlr4::tree::TerminalNode* RightParen();
		NoptrdeclaratorContext* noptrdeclarator();
		ParametersandqualifiersContext* parametersandqualifiers();
		antlr4::tree::TerminalNode* LeftBracket();
		antlr4::tree::TerminalNode* RightBracket();
		ConstantexpressionContext* constantexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NoptrdeclaratorContext* noptrdeclarator();
	NoptrdeclaratorContext* noptrdeclarator( int precedence );
	class  ParametersandqualifiersContext : public antlr4::ParserRuleContext {
	public:
		ParametersandqualifiersContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* LeftParen();
		ParameterdeclarationclauseContext* parameterdeclarationclause();
		antlr4::tree::TerminalNode* RightParen();
		CvqualifierseqContext* cvqualifierseq();
		RefqualifierContext* refqualifier();
		ExceptionspecificationContext* exceptionspecification();
		AttributespecifierseqContext* attributespecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ParametersandqualifiersContext* parametersandqualifiers();

	class  TrailingreturntypeContext : public antlr4::ParserRuleContext {
	public:
		TrailingreturntypeContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Arrow();
		TrailingtypespecifierseqContext* trailingtypespecifierseq();
		AbstractdeclaratorContext* abstractdeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TrailingreturntypeContext* trailingreturntype();

	class  PtroperatorContext : public antlr4::ParserRuleContext {
	public:
		PtroperatorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Star();
		AttributespecifierseqContext* attributespecifierseq();
		CvqualifierseqContext* cvqualifierseq();
		antlr4::tree::TerminalNode* And();
		NestednamespecifierContext* nestednamespecifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	PtroperatorContext* ptroperator();

	class  CvqualifierseqContext : public antlr4::ParserRuleContext {
	public:
		CvqualifierseqContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		CvqualifierContext* cvqualifier();
		CvqualifierseqContext* cvqualifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	CvqualifierseqContext* cvqualifierseq();

	class  CvqualifierContext : public antlr4::ParserRuleContext {
	public:
		CvqualifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Const();
		antlr4::tree::TerminalNode* Volatile();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	CvqualifierContext* cvqualifier();

	class  RefqualifierContext : public antlr4::ParserRuleContext {
	public:
		RefqualifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* And();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	RefqualifierContext* refqualifier();

	class  DeclaratoridContext : public antlr4::ParserRuleContext {
	public:
		DeclaratoridContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		IdexpressionContext* idexpression();
		antlr4::tree::TerminalNode* Ellipsis();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	DeclaratoridContext* declaratorid();

	class  ThetypeidContext : public antlr4::ParserRuleContext {
	public:
		ThetypeidContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		TypespecifierseqContext* typespecifierseq();
		AbstractdeclaratorContext* abstractdeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ThetypeidContext* thetypeid();

	class  AbstractdeclaratorContext : public antlr4::ParserRuleContext {
	public:
		AbstractdeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		PtrabstractdeclaratorContext* ptrabstractdeclarator();
		ParametersandqualifiersContext* parametersandqualifiers();
		TrailingreturntypeContext* trailingreturntype();
		NoptrabstractdeclaratorContext* noptrabstractdeclarator();
		AbstractpackdeclaratorContext* abstractpackdeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AbstractdeclaratorContext* abstractdeclarator();

	class  PtrabstractdeclaratorContext : public antlr4::ParserRuleContext {
	public:
		PtrabstractdeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		NoptrabstractdeclaratorContext* noptrabstractdeclarator();
		PtroperatorContext* ptroperator();
		PtrabstractdeclaratorContext* ptrabstractdeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	PtrabstractdeclaratorContext* ptrabstractdeclarator();

	class  NoptrabstractdeclaratorContext : public antlr4::ParserRuleContext {
	public:
		NoptrabstractdeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ParametersandqualifiersContext* parametersandqualifiers();
		antlr4::tree::TerminalNode* LeftBracket();
		antlr4::tree::TerminalNode* RightBracket();
		ConstantexpressionContext* constantexpression();
		AttributespecifierseqContext* attributespecifierseq();
		antlr4::tree::TerminalNode* LeftParen();
		PtrabstractdeclaratorContext* ptrabstractdeclarator();
		antlr4::tree::TerminalNode* RightParen();
		NoptrabstractdeclaratorContext* noptrabstractdeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NoptrabstractdeclaratorContext* noptrabstractdeclarator();
	NoptrabstractdeclaratorContext* noptrabstractdeclarator( int precedence );
	class  AbstractpackdeclaratorContext : public antlr4::ParserRuleContext {
	public:
		AbstractpackdeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator();
		PtroperatorContext* ptroperator();
		AbstractpackdeclaratorContext* abstractpackdeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AbstractpackdeclaratorContext* abstractpackdeclarator();

	class  NoptrabstractpackdeclaratorContext : public antlr4::ParserRuleContext {
	public:
		NoptrabstractpackdeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Ellipsis();
		NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator();
		ParametersandqualifiersContext* parametersandqualifiers();
		antlr4::tree::TerminalNode* LeftBracket();
		antlr4::tree::TerminalNode* RightBracket();
		ConstantexpressionContext* constantexpression();
		AttributespecifierseqContext* attributespecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator();
	NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator( int precedence );
	class  ParameterdeclarationclauseContext : public antlr4::ParserRuleContext {
	public:
		ParameterdeclarationclauseContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ParameterdeclarationlistContext* parameterdeclarationlist();
		antlr4::tree::TerminalNode* Ellipsis();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ParameterdeclarationclauseContext* parameterdeclarationclause();

	class  ParameterdeclarationlistContext : public antlr4::ParserRuleContext {
	public:
		ParameterdeclarationlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ParameterdeclarationContext* parameterdeclaration();
		ParameterdeclarationlistContext* parameterdeclarationlist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ParameterdeclarationlistContext* parameterdeclarationlist();
	ParameterdeclarationlistContext* parameterdeclarationlist( int precedence );
	class  ParameterdeclarationContext : public antlr4::ParserRuleContext {
	public:
		ParameterdeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		DeclspecifierseqContext* declspecifierseq();
		DeclaratorContext* declarator();
		AttributespecifierseqContext* attributespecifierseq();
		antlr4::tree::TerminalNode* Assign();
		InitializerclauseContext* initializerclause();
		AbstractdeclaratorContext* abstractdeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ParameterdeclarationContext* parameterdeclaration();

	class  FunctiondefinitionContext : public antlr4::ParserRuleContext {
	public:
		FunctiondefinitionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		DeclaratorContext* declarator();
		FunctionbodyContext* functionbody();
		AttributespecifierseqContext* attributespecifierseq();
		DeclspecifierseqContext* declspecifierseq();
		VirtspecifierseqContext* virtspecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	FunctiondefinitionContext* functiondefinition();

	class  FunctionbodyContext : public antlr4::ParserRuleContext {
	public:
		FunctionbodyContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		CompoundstatementContext* compoundstatement();
		CtorinitializerContext* ctorinitializer();
		FunctiontryblockContext* functiontryblock();
		antlr4::tree::TerminalNode* Assign();
		antlr4::tree::TerminalNode* Default();
		antlr4::tree::TerminalNode* Semi();
		antlr4::tree::TerminalNode* Delete();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	FunctionbodyContext* functionbody();

	class  InitializerContext : public antlr4::ParserRuleContext {
	public:
		InitializerContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		BraceorequalinitializerContext* braceorequalinitializer();
		antlr4::tree::TerminalNode* LeftParen();
		ExpressionlistContext* expressionlist();
		antlr4::tree::TerminalNode* RightParen();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	InitializerContext* initializer();

	class  BraceorequalinitializerContext : public antlr4::ParserRuleContext {
	public:
		BraceorequalinitializerContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Assign();
		InitializerclauseContext* initializerclause();
		BracedinitlistContext* bracedinitlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	BraceorequalinitializerContext* braceorequalinitializer();

	class  InitializerclauseContext : public antlr4::ParserRuleContext {
	public:
		InitializerclauseContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		AssignmentexpressionContext* assignmentexpression();
		BracedinitlistContext* bracedinitlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	InitializerclauseContext* initializerclause();

	class  InitializerlistContext : public antlr4::ParserRuleContext {
	public:
		InitializerlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		InitializerclauseContext* initializerclause();
		antlr4::tree::TerminalNode* Ellipsis();
		InitializerlistContext* initializerlist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	InitializerlistContext* initializerlist();
	InitializerlistContext* initializerlist( int precedence );
	class  BracedinitlistContext : public antlr4::ParserRuleContext {
	public:
		BracedinitlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* LeftBrace();
		InitializerlistContext* initializerlist();
		antlr4::tree::TerminalNode* RightBrace();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	BracedinitlistContext* bracedinitlist();

	class  ClassnameContext : public antlr4::ParserRuleContext {
	public:
		ClassnameContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();
		SimpletemplateidContext* simpletemplateid();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ClassnameContext* classname();

	class  ClassspecifierContext : public antlr4::ParserRuleContext {
	public:
		ClassspecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ClassheadContext* classhead();
		antlr4::tree::TerminalNode* LeftBrace();
		antlr4::tree::TerminalNode* RightBrace();
		MemberspecificationContext* memberspecification();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ClassspecifierContext* classspecifier();

	class  ClassheadContext : public antlr4::ParserRuleContext {
	public:
		ClassheadContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ClasskeyContext* classkey();
		ClassheadnameContext* classheadname();
		AttributespecifierseqContext* attributespecifierseq();
		ClassvirtspecifierContext* classvirtspecifier();
		BaseclauseContext* baseclause();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ClassheadContext* classhead();

	class  ClassheadnameContext : public antlr4::ParserRuleContext {
	public:
		ClassheadnameContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ClassnameContext* classname();
		NestednamespecifierContext* nestednamespecifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ClassheadnameContext* classheadname();

	class  ClassvirtspecifierContext : public antlr4::ParserRuleContext {
	public:
		ClassvirtspecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Final();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ClassvirtspecifierContext* classvirtspecifier();

	class  ClasskeyContext : public antlr4::ParserRuleContext {
	public:
		ClasskeyContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Class();
		antlr4::tree::TerminalNode* Struct();
		antlr4::tree::TerminalNode* Union();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ClasskeyContext* classkey();

	class  MemberspecificationContext : public antlr4::ParserRuleContext 
	{
	public:
		MemberspecificationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		MemberdeclarationContext* memberdeclaration();
		MemberspecificationContext* memberspecification();
		AccessspecifierContext* accessspecifier();
		antlr4::tree::TerminalNode* Colon();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	MemberspecificationContext* memberspecification();

	class  MemberdeclarationContext : public antlr4::ParserRuleContext {
	public:
		MemberdeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Semi();
		AttributespecifierseqContext* attributespecifierseq();
		DeclspecifierseqContext* declspecifierseq();
		MemberdeclaratorlistContext* memberdeclaratorlist();
		FunctiondefinitionContext* functiondefinition();
		UsingdeclarationContext* usingdeclaration();
		Static_assertdeclarationContext* static_assertdeclaration();
		TemplatedeclarationContext* templatedeclaration();
		AliasdeclarationContext* aliasdeclaration();
		EmptydeclarationContext* emptydeclaration();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	MemberdeclarationContext* memberdeclaration();

	class  MemberdeclaratorlistContext : public antlr4::ParserRuleContext {
	public:
		MemberdeclaratorlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		MemberdeclaratorContext* memberdeclarator();
		MemberdeclaratorlistContext* memberdeclaratorlist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	MemberdeclaratorlistContext* memberdeclaratorlist();
	MemberdeclaratorlistContext* memberdeclaratorlist( int precedence );
	class  MemberdeclaratorContext : public antlr4::ParserRuleContext {
	public:
		MemberdeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		DeclaratorContext* declarator();
		VirtspecifierseqContext* virtspecifierseq();
		PurespecifierContext* purespecifier();
		BraceorequalinitializerContext* braceorequalinitializer();
		antlr4::tree::TerminalNode* Colon();
		ConstantexpressionContext* constantexpression();
		antlr4::tree::TerminalNode* Identifier();
		AttributespecifierseqContext* attributespecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	MemberdeclaratorContext* memberdeclarator();

	class  VirtspecifierseqContext : public antlr4::ParserRuleContext {
	public:
		VirtspecifierseqContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		VirtspecifierContext* virtspecifier();
		VirtspecifierseqContext* virtspecifierseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	VirtspecifierseqContext* virtspecifierseq();
	VirtspecifierseqContext* virtspecifierseq( int precedence );
	class  VirtspecifierContext : public antlr4::ParserRuleContext {
	public:
		VirtspecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Override();
		antlr4::tree::TerminalNode* Final();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	VirtspecifierContext* virtspecifier();

	class  PurespecifierContext : public antlr4::ParserRuleContext {
	public:
		antlr4::Token* val = nullptr;;
		PurespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Assign();
		antlr4::tree::TerminalNode* Octalliteral();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	PurespecifierContext* purespecifier();

	class  BaseclauseContext : public antlr4::ParserRuleContext {
	public:
		BaseclauseContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Colon();
		BasespecifierlistContext* basespecifierlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	BaseclauseContext* baseclause();

	class  BasespecifierlistContext : public antlr4::ParserRuleContext {
	public:
		BasespecifierlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		BasespecifierContext* basespecifier();
		antlr4::tree::TerminalNode* Ellipsis();
		BasespecifierlistContext* basespecifierlist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	BasespecifierlistContext* basespecifierlist();
	BasespecifierlistContext* basespecifierlist( int precedence );
	class  BasespecifierContext : public antlr4::ParserRuleContext {
	public:
		BasespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		BasetypespecifierContext* basetypespecifier();
		AttributespecifierseqContext* attributespecifierseq();
		antlr4::tree::TerminalNode* Virtual();
		AccessspecifierContext* accessspecifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	BasespecifierContext* basespecifier();

	class  ClassordecltypeContext : public antlr4::ParserRuleContext {
	public:
		ClassordecltypeContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ClassnameContext* classname();
		NestednamespecifierContext* nestednamespecifier();
		DecltypespecifierContext* decltypespecifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ClassordecltypeContext* classordecltype();

	class  BasetypespecifierContext : public antlr4::ParserRuleContext {
	public:
		BasetypespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ClassordecltypeContext* classordecltype();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	BasetypespecifierContext* basetypespecifier();

	class  AccessspecifierContext : public antlr4::ParserRuleContext {
	public:
		AccessspecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Private();
		antlr4::tree::TerminalNode* Protected();
		antlr4::tree::TerminalNode* Public();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	AccessspecifierContext* accessspecifier();

	class  ConversionfunctionidContext : public antlr4::ParserRuleContext {
	public:
		ConversionfunctionidContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Operator();
		ConversiontypeidContext* conversiontypeid();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ConversionfunctionidContext* conversionfunctionid();

	class  ConversiontypeidContext : public antlr4::ParserRuleContext {
	public:
		ConversiontypeidContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		TypespecifierseqContext* typespecifierseq();
		ConversiondeclaratorContext* conversiondeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ConversiontypeidContext* conversiontypeid();

	class  ConversiondeclaratorContext : public antlr4::ParserRuleContext {
	public:
		ConversiondeclaratorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		PtroperatorContext* ptroperator();
		ConversiondeclaratorContext* conversiondeclarator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ConversiondeclaratorContext* conversiondeclarator();

	class  CtorinitializerContext : public antlr4::ParserRuleContext {
	public:
		CtorinitializerContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Colon();
		MeminitializerlistContext* meminitializerlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	CtorinitializerContext* ctorinitializer();

	class  MeminitializerlistContext : public antlr4::ParserRuleContext {
	public:
		MeminitializerlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		MeminitializerContext* meminitializer();
		antlr4::tree::TerminalNode* Ellipsis();
		antlr4::tree::TerminalNode* Comma();
		MeminitializerlistContext* meminitializerlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	MeminitializerlistContext* meminitializerlist();

	class  MeminitializerContext : public antlr4::ParserRuleContext {
	public:
		MeminitializerContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		MeminitializeridContext* meminitializerid();
		antlr4::tree::TerminalNode* LeftParen();
		antlr4::tree::TerminalNode* RightParen();
		ExpressionlistContext* expressionlist();
		BracedinitlistContext* bracedinitlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	MeminitializerContext* meminitializer();

	class  MeminitializeridContext : public antlr4::ParserRuleContext {
	public:
		MeminitializeridContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ClassordecltypeContext* classordecltype();
		antlr4::tree::TerminalNode* Identifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	MeminitializeridContext* meminitializerid();

	class  OperatorfunctionidContext : public antlr4::ParserRuleContext {
	public:
		OperatorfunctionidContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Operator();
		TheoperatorContext* theoperator();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	OperatorfunctionidContext* operatorfunctionid();

	class  LiteraloperatoridContext : public antlr4::ParserRuleContext {
	public:
		LiteraloperatoridContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Operator();
		antlr4::tree::TerminalNode* Identifier();
		antlr4::tree::TerminalNode* Stringliteral();
		AergiastringContext* aergiastring();
		antlr4::tree::TerminalNode* Userdefinedstringliteral();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	LiteraloperatoridContext* literaloperatorid();

	class  TemplatedeclarationContext : public antlr4::ParserRuleContext {
	public:
		TemplatedeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Template();
		antlr4::tree::TerminalNode* Less();
		TemplateparameterlistContext* templateparameterlist();
		antlr4::tree::TerminalNode* Greater();
		DeclarationContext* declaration();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TemplatedeclarationContext* templatedeclaration();

	class  TemplateparameterlistContext : public antlr4::ParserRuleContext {
	public:
		TemplateparameterlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		TemplateparameterContext* templateparameter();
		TemplateparameterlistContext* templateparameterlist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TemplateparameterlistContext* templateparameterlist();
	TemplateparameterlistContext* templateparameterlist( int precedence );
	class  TemplateparameterContext : public antlr4::ParserRuleContext {
	public:
		TemplateparameterContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		TypeparameterContext* typeparameter();
		ParameterdeclarationContext* parameterdeclaration();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TemplateparameterContext* templateparameter();

	class  TypeparameterContext : public antlr4::ParserRuleContext {
	public:
		TypeparameterContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Class();
		antlr4::tree::TerminalNode* Ellipsis();
		antlr4::tree::TerminalNode* Identifier();
		antlr4::tree::TerminalNode* Assign();
		ThetypeidContext* thetypeid();
		antlr4::tree::TerminalNode* Typename_();
		antlr4::tree::TerminalNode* Template();
		antlr4::tree::TerminalNode* Less();
		TemplateparameterlistContext* templateparameterlist();
		antlr4::tree::TerminalNode* Greater();
		IdexpressionContext* idexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TypeparameterContext* typeparameter();

	class  SimpletemplateidContext : public antlr4::ParserRuleContext {
	public:
		SimpletemplateidContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		TemplatenameContext* templatename();
		antlr4::tree::TerminalNode* Less();
		antlr4::tree::TerminalNode* Greater();
		TemplateargumentlistContext* templateargumentlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	SimpletemplateidContext* simpletemplateid();

	class  TemplateidContext : public antlr4::ParserRuleContext {
	public:
		TemplateidContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		SimpletemplateidContext* simpletemplateid();
		OperatorfunctionidContext* operatorfunctionid();
		antlr4::tree::TerminalNode* Less();
		antlr4::tree::TerminalNode* Greater();
		TemplateargumentlistContext* templateargumentlist();
		LiteraloperatoridContext* literaloperatorid();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TemplateidContext* templateid();

	class  TemplatenameContext : public antlr4::ParserRuleContext {
	public:
		TemplatenameContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Identifier();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TemplatenameContext* templatename();

	class  TemplateargumentlistContext : public antlr4::ParserRuleContext {
	public:
		TemplateargumentlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		TemplateargumentContext* templateargument();
		antlr4::tree::TerminalNode* Ellipsis();
		TemplateargumentlistContext* templateargumentlist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TemplateargumentlistContext* templateargumentlist();
	TemplateargumentlistContext* templateargumentlist( int precedence );
	class  TemplateargumentContext : public antlr4::ParserRuleContext {
	public:
		TemplateargumentContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ThetypeidContext* thetypeid();
		ConstantexpressionContext* constantexpression();
		IdexpressionContext* idexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TemplateargumentContext* templateargument();

	class  TypenamespecifierContext : public antlr4::ParserRuleContext {
	public:
		TypenamespecifierContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Typename_();
		NestednamespecifierContext* nestednamespecifier();
		antlr4::tree::TerminalNode* Identifier();
		SimpletemplateidContext* simpletemplateid();
		antlr4::tree::TerminalNode* Template();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TypenamespecifierContext* typenamespecifier();

	class  ExplicitinstantiationContext : public antlr4::ParserRuleContext {
	public:
		ExplicitinstantiationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Template();
		DeclarationContext* declaration();
		antlr4::tree::TerminalNode* Extern();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ExplicitinstantiationContext* explicitinstantiation();

	class  ExplicitspecializationContext : public antlr4::ParserRuleContext {
	public:
		ExplicitspecializationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Template();
		antlr4::tree::TerminalNode* Less();
		antlr4::tree::TerminalNode* Greater();
		DeclarationContext* declaration();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ExplicitspecializationContext* explicitspecialization();

	class  TryblockContext : public antlr4::ParserRuleContext {
	public:
		TryblockContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Try();
		CompoundstatementContext* compoundstatement();
		HandlerseqContext* handlerseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TryblockContext* tryblock();

	class  FunctiontryblockContext : public antlr4::ParserRuleContext {
	public:
		FunctiontryblockContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Try();
		CompoundstatementContext* compoundstatement();
		HandlerseqContext* handlerseq();
		CtorinitializerContext* ctorinitializer();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	FunctiontryblockContext* functiontryblock();

	class  HandlerseqContext : public antlr4::ParserRuleContext {
	public:
		HandlerseqContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		HandlerContext* handler();
		HandlerseqContext* handlerseq();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	HandlerseqContext* handlerseq();

	class  HandlerContext : public antlr4::ParserRuleContext {
	public:
		HandlerContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Catch();
		antlr4::tree::TerminalNode* LeftParen();
		ExceptiondeclarationContext* exceptiondeclaration();
		antlr4::tree::TerminalNode* RightParen();
		CompoundstatementContext* compoundstatement();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	HandlerContext* handler();

	class  ExceptiondeclarationContext : public antlr4::ParserRuleContext {
	public:
		ExceptiondeclarationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		TypespecifierseqContext* typespecifierseq();
		DeclaratorContext* declarator();
		AttributespecifierseqContext* attributespecifierseq();
		AbstractdeclaratorContext* abstractdeclarator();
		antlr4::tree::TerminalNode* Ellipsis();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ExceptiondeclarationContext* exceptiondeclaration();

	class  ThrowexpressionContext : public antlr4::ParserRuleContext {
	public:
		ThrowexpressionContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Throw();
		AssignmentexpressionContext* assignmentexpression();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ThrowexpressionContext* throwexpression();

	class  ExceptionspecificationContext : public antlr4::ParserRuleContext {
	public:
		ExceptionspecificationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		DynamicexceptionspecificationContext* dynamicexceptionspecification();
		NoexceptspecificationContext* noexceptspecification();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	ExceptionspecificationContext* exceptionspecification();

	class  DynamicexceptionspecificationContext : public antlr4::ParserRuleContext {
	public:
		DynamicexceptionspecificationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Throw();
		antlr4::tree::TerminalNode* LeftParen();
		antlr4::tree::TerminalNode* RightParen();
		TypeidlistContext* typeidlist();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	DynamicexceptionspecificationContext* dynamicexceptionspecification();

	class  TypeidlistContext : public antlr4::ParserRuleContext {
	public:
		TypeidlistContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		ThetypeidContext* thetypeid();
		antlr4::tree::TerminalNode* Ellipsis();
		TypeidlistContext* typeidlist();
		antlr4::tree::TerminalNode* Comma();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TypeidlistContext* typeidlist();
	TypeidlistContext* typeidlist( int precedence );
	class  NoexceptspecificationContext : public antlr4::ParserRuleContext {
	public:
		NoexceptspecificationContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Noexcept();
		antlr4::tree::TerminalNode* LeftParen();
		ConstantexpressionContext* constantexpression();
		antlr4::tree::TerminalNode* RightParen();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	NoexceptspecificationContext* noexceptspecification();

	class  TheoperatorContext : public antlr4::ParserRuleContext {
	public:
		TheoperatorContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* New();
		antlr4::tree::TerminalNode* Delete();
		antlr4::tree::TerminalNode* LeftBracket();
		antlr4::tree::TerminalNode* RightBracket();
		antlr4::tree::TerminalNode* Plus();
		antlr4::tree::TerminalNode* Minus();
		antlr4::tree::TerminalNode* Star();
		antlr4::tree::TerminalNode* Div();
		antlr4::tree::TerminalNode* Mod();
		antlr4::tree::TerminalNode* Caret();
		antlr4::tree::TerminalNode* And();
		antlr4::tree::TerminalNode* Or();
		antlr4::tree::TerminalNode* Tilde();
		antlr4::tree::TerminalNode* Assign();
		antlr4::tree::TerminalNode* Less();
		antlr4::tree::TerminalNode* Greater();
		antlr4::tree::TerminalNode* PlusAssign();
		antlr4::tree::TerminalNode* MinusAssign();
		antlr4::tree::TerminalNode* StarAssign();
		antlr4::tree::TerminalNode* DivAssign();
		antlr4::tree::TerminalNode* ModAssign();
		antlr4::tree::TerminalNode* XorAssign();
		antlr4::tree::TerminalNode* AndAssign();
		antlr4::tree::TerminalNode* OrAssign();
		antlr4::tree::TerminalNode* LeftShift();
		antlr4::tree::TerminalNode* RightShift();
		antlr4::tree::TerminalNode* RightShiftAssign();
		antlr4::tree::TerminalNode* LeftShiftAssign();
		antlr4::tree::TerminalNode* Equal();
		antlr4::tree::TerminalNode* NotEqual();
		antlr4::tree::TerminalNode* LessEqual();
		antlr4::tree::TerminalNode* GreaterEqual();
		antlr4::tree::TerminalNode* PlusPlus();
		antlr4::tree::TerminalNode* MinusMinus();
		antlr4::tree::TerminalNode* Comma();
		antlr4::tree::TerminalNode* ArrowStar();
		antlr4::tree::TerminalNode* Arrow();
		antlr4::tree::TerminalNode* LeftParen();
		antlr4::tree::TerminalNode* RightParen();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	TheoperatorContext* theoperator();

	class  LiteralContext : public antlr4::ParserRuleContext {
	public:
		LiteralContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Integerliteral();
		antlr4::tree::TerminalNode* Characterliteral();
		antlr4::tree::TerminalNode* Floatingliteral();
		antlr4::tree::TerminalNode* Stringliteral();
		BooleanliteralContext* booleanliteral();
		PointerliteralContext* pointerliteral();
		UserdefinedliteralContext* userdefinedliteral();
		AergiastringContext* aergiastring();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	LiteralContext* literal();

	class  BooleanliteralContext : public antlr4::ParserRuleContext {
	public:
		BooleanliteralContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* False();
		antlr4::tree::TerminalNode* True();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	BooleanliteralContext* booleanliteral();

	class  PointerliteralContext : public antlr4::ParserRuleContext {
	public:
		PointerliteralContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Nullptr();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	PointerliteralContext* pointerliteral();

	class  UserdefinedliteralContext : public antlr4::ParserRuleContext {
	public:
		UserdefinedliteralContext( antlr4::ParserRuleContext* parent, size_t invokingState );
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode* Userdefinedintegerliteral();
		antlr4::tree::TerminalNode* Userdefinedfloatingliteral();
		antlr4::tree::TerminalNode* Userdefinedstringliteral();
		antlr4::tree::TerminalNode* Userdefinedcharacterliteral();
		AergiastringContext* aergiastring();

		virtual void enterRule( antlr4::tree::ParseTreeListener* listener ) override;
		virtual void exitRule( antlr4::tree::ParseTreeListener* listener ) override;

		virtual antlrcpp::Any accept( antlr4::tree::ParseTreeVisitor* visitor ) override;

	};

	UserdefinedliteralContext* userdefinedliteral();


	virtual bool sempred( antlr4::RuleContext* _localctx, size_t ruleIndex, size_t predicateIndex ) override;
	bool nestednamespecifierSempred( NestednamespecifierContext* _localctx, size_t predicateIndex );
	bool capturelistSempred( CapturelistContext* _localctx, size_t predicateIndex );
	bool postfixexpressionSempred( PostfixexpressionContext* _localctx, size_t predicateIndex );
	bool noptrnewdeclaratorSempred( NoptrnewdeclaratorContext* _localctx, size_t predicateIndex );
	bool pmexpressionSempred( PmexpressionContext* _localctx, size_t predicateIndex );
	bool multiplicativeexpressionSempred( MultiplicativeexpressionContext* _localctx, size_t predicateIndex );
	bool additiveexpressionSempred( AdditiveexpressionContext* _localctx, size_t predicateIndex );
	bool shiftexpressionSempred( ShiftexpressionContext* _localctx, size_t predicateIndex );
	bool relationalexpressionSempred( RelationalexpressionContext* _localctx, size_t predicateIndex );
	bool equalityexpressionSempred( EqualityexpressionContext* _localctx, size_t predicateIndex );
	bool andexpressionSempred( AndexpressionContext* _localctx, size_t predicateIndex );
	bool exclusiveorexpressionSempred( ExclusiveorexpressionContext* _localctx, size_t predicateIndex );
	bool inclusiveorexpressionSempred( InclusiveorexpressionContext* _localctx, size_t predicateIndex );
	bool logicalandexpressionSempred( LogicalandexpressionContext* _localctx, size_t predicateIndex );
	bool logicalorexpressionSempred( LogicalorexpressionContext* _localctx, size_t predicateIndex );
	bool expressionSempred( ExpressionContext* _localctx, size_t predicateIndex );
	bool statementseqSempred( StatementseqContext* _localctx, size_t predicateIndex );
	bool declarationseqSempred( DeclarationseqContext* _localctx, size_t predicateIndex );
	bool enumeratorlistSempred( EnumeratorlistContext* _localctx, size_t predicateIndex );
	bool attributespecifierseqSempred( AttributespecifierseqContext* _localctx, size_t predicateIndex );
	bool attributelistSempred( AttributelistContext* _localctx, size_t predicateIndex );
	bool balancedtokenseqSempred( BalancedtokenseqContext* _localctx, size_t predicateIndex );
	bool initdeclaratorlistSempred( InitdeclaratorlistContext* _localctx, size_t predicateIndex );
	bool noptrdeclaratorSempred( NoptrdeclaratorContext* _localctx, size_t predicateIndex );
	bool noptrabstractdeclaratorSempred( NoptrabstractdeclaratorContext* _localctx, size_t predicateIndex );
	bool noptrabstractpackdeclaratorSempred( NoptrabstractpackdeclaratorContext* _localctx, size_t predicateIndex );
	bool parameterdeclarationlistSempred( ParameterdeclarationlistContext* _localctx, size_t predicateIndex );
	bool initializerlistSempred( InitializerlistContext* _localctx, size_t predicateIndex );
	bool memberdeclaratorlistSempred( MemberdeclaratorlistContext* _localctx, size_t predicateIndex );
	bool virtspecifierseqSempred( VirtspecifierseqContext* _localctx, size_t predicateIndex );
	bool basespecifierlistSempred( BasespecifierlistContext* _localctx, size_t predicateIndex );
	bool templateparameterlistSempred( TemplateparameterlistContext* _localctx, size_t predicateIndex );
	bool templateargumentlistSempred( TemplateargumentlistContext* _localctx, size_t predicateIndex );
	bool typeidlistSempred( TypeidlistContext* _localctx, size_t predicateIndex );

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

