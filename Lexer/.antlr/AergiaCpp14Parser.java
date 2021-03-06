// Generated from c:\Users\adamg\source\repos\Agrabski\Aergia\Lexer\AergiaCpp14.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class AergiaCpp14Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, Encodingprefix=16, 
		MultiLineMacro=17, Directive=18, Alignas=19, Alignof=20, Asm=21, Auto=22, 
		Bool=23, Break=24, Case=25, Catch=26, Char=27, Char16=28, Char32=29, Class=30, 
		Const=31, Constexpr=32, Const_cast=33, Continue=34, Decltype=35, Default=36, 
		Delete=37, Do=38, Double=39, Dynamic_cast=40, Else=41, Enum=42, Explicit=43, 
		Export=44, Extern=45, False=46, Final=47, Float=48, For=49, Friend=50, 
		Goto=51, If=52, Inline=53, Int=54, Long=55, Mutable=56, Namespace=57, 
		New=58, Noexcept=59, Nullptr=60, Operator=61, Override=62, Private=63, 
		Protected=64, Public=65, Register=66, Reinterpret_cast=67, Return=68, 
		Short=69, Signed=70, Sizeof=71, Static=72, Static_assert=73, Static_cast=74, 
		Struct=75, Switch=76, Template=77, This=78, Thread_local=79, Throw=80, 
		True=81, Try=82, Typedef=83, Typeid_=84, Typename_=85, Union=86, Unsigned=87, 
		Using=88, Virtual=89, Void=90, Volatile=91, Wchar=92, While=93, LeftParen=94, 
		RightParen=95, LeftBracket=96, RightBracket=97, LeftBrace=98, RightBrace=99, 
		Plus=100, Minus=101, Star=102, Div=103, Mod=104, Caret=105, And=106, Or=107, 
		Tilde=108, Not=109, Assign=110, Less=111, Greater=112, PlusAssign=113, 
		MinusAssign=114, StarAssign=115, DivAssign=116, ModAssign=117, XorAssign=118, 
		AndAssign=119, OrAssign=120, LeftShift=121, RightShift=122, LeftShiftAssign=123, 
		RightShiftAssign=124, Equal=125, NotEqual=126, LessEqual=127, GreaterEqual=128, 
		AndAnd=129, OrOr=130, PlusPlus=131, MinusMinus=132, Comma=133, ArrowStar=134, 
		Arrow=135, Question=136, Colon=137, Doublecolon=138, Semi=139, Dot=140, 
		DotStar=141, Ellipsis=142, Identifier=143, Integerliteral=144, Decimalliteral=145, 
		Octalliteral=146, Hexadecimalliteral=147, Binaryliteral=148, Integersuffix=149, 
		Characterliteral=150, Floatingliteral=151, Stringliteral=152, Userdefinedintegerliteral=153, 
		Userdefinedfloatingliteral=154, Userdefinedstringliteral=155, Userdefinedcharacterliteral=156, 
		Whitespace=157, Newline=158, BlockComment=159, LineComment=160;
	public static final int
		RULE_translationunit = 0, RULE_aergiaexpressionbegin = 1, RULE_aergiaexpressionend = 2, 
		RULE_aergiaBlock = 3, RULE_aergiaexpression = 4, RULE_anonymousExpression = 5, 
		RULE_anoynmousBody = 6, RULE_aergiastring = 7, RULE_foreach = 8, RULE_foreachheader = 9, 
		RULE_foreachbody = 10, RULE_callchain = 11, RULE_primaryexpression = 12, 
		RULE_idexpression = 13, RULE_unqualifiedid = 14, RULE_qualifiedid = 15, 
		RULE_nestednamespecifier = 16, RULE_lambdaexpression = 17, RULE_lambdaintroducer = 18, 
		RULE_lambdacapture = 19, RULE_capturedefault = 20, RULE_capturelist = 21, 
		RULE_capture = 22, RULE_simplecapture = 23, RULE_initcapture = 24, RULE_lambdadeclarator = 25, 
		RULE_postfixexpression = 26, RULE_typeidofexpr = 27, RULE_typeidofthetypeid = 28, 
		RULE_expressionlist = 29, RULE_pseudodestructorname = 30, RULE_unaryexpression = 31, 
		RULE_unaryoperator = 32, RULE_newexpression = 33, RULE_newplacement = 34, 
		RULE_newtypeid = 35, RULE_newdeclarator = 36, RULE_noptrnewdeclarator = 37, 
		RULE_newinitializer = 38, RULE_deleteexpression = 39, RULE_noexceptexpression = 40, 
		RULE_castexpression = 41, RULE_pmexpression = 42, RULE_multiplicativeexpression = 43, 
		RULE_additiveexpression = 44, RULE_shiftexpression = 45, RULE_shiftoperator = 46, 
		RULE_relationalexpression = 47, RULE_equalityexpression = 48, RULE_andexpression = 49, 
		RULE_exclusiveorexpression = 50, RULE_inclusiveorexpression = 51, RULE_logicalandexpression = 52, 
		RULE_logicalorexpression = 53, RULE_conditionalexpression = 54, RULE_assignmentexpression = 55, 
		RULE_assignmentoperator = 56, RULE_expression = 57, RULE_constantexpression = 58, 
		RULE_statement = 59, RULE_labeledstatement = 60, RULE_expressionstatement = 61, 
		RULE_compoundstatement = 62, RULE_statementseq = 63, RULE_selectionstatement = 64, 
		RULE_condition = 65, RULE_iterationstatement = 66, RULE_forinitstatement = 67, 
		RULE_forrangedeclaration = 68, RULE_forrangeinitializer = 69, RULE_jumpstatement = 70, 
		RULE_declarationstatement = 71, RULE_declarationseq = 72, RULE_declaration = 73, 
		RULE_blockdeclaration = 74, RULE_aliasdeclaration = 75, RULE_simpledeclaration = 76, 
		RULE_static_assertdeclaration = 77, RULE_emptydeclaration = 78, RULE_attributedeclaration = 79, 
		RULE_declspecifier = 80, RULE_declspecifierseq = 81, RULE_storageclassspecifier = 82, 
		RULE_functionspecifier = 83, RULE_typedefname = 84, RULE_typespecifier = 85, 
		RULE_trailingtypespecifier = 86, RULE_typespecifierseq = 87, RULE_trailingtypespecifierseq = 88, 
		RULE_simpletypespecifier = 89, RULE_thetypename = 90, RULE_decltypespecifier = 91, 
		RULE_elaboratedtypespecifier = 92, RULE_enumname = 93, RULE_enumspecifier = 94, 
		RULE_enumhead = 95, RULE_opaqueenumdeclaration = 96, RULE_enumkey = 97, 
		RULE_enumbase = 98, RULE_enumeratorlist = 99, RULE_enumeratordefinition = 100, 
		RULE_enumerator = 101, RULE_namespacename = 102, RULE_originalnamespacename = 103, 
		RULE_namespacedefinition = 104, RULE_namednamespacedefinition = 105, RULE_originalnamespacedefinition = 106, 
		RULE_unnamednamespacedefinition = 107, RULE_namespacebody = 108, RULE_namespacealias = 109, 
		RULE_namespacealiasdefinition = 110, RULE_qualifiednamespacespecifier = 111, 
		RULE_usingdeclaration = 112, RULE_usingdirective = 113, RULE_asmdefinition = 114, 
		RULE_linkagespecification = 115, RULE_attributespecifierseq = 116, RULE_attributespecifier = 117, 
		RULE_alignmentspecifier = 118, RULE_attributelist = 119, RULE_attribute = 120, 
		RULE_attributetoken = 121, RULE_attributescopedtoken = 122, RULE_attributenamespace = 123, 
		RULE_attributeargumentclause = 124, RULE_balancedtokenseq = 125, RULE_balancedtoken = 126, 
		RULE_initdeclaratorlist = 127, RULE_initdeclarator = 128, RULE_declarator = 129, 
		RULE_ptrdeclarator = 130, RULE_noptrdeclarator = 131, RULE_parametersandqualifiers = 132, 
		RULE_trailingreturntype = 133, RULE_ptroperator = 134, RULE_cvqualifierseq = 135, 
		RULE_cvqualifier = 136, RULE_refqualifier = 137, RULE_declaratorid = 138, 
		RULE_thetypeid = 139, RULE_abstractdeclarator = 140, RULE_ptrabstractdeclarator = 141, 
		RULE_noptrabstractdeclarator = 142, RULE_abstractpackdeclarator = 143, 
		RULE_noptrabstractpackdeclarator = 144, RULE_parameterdeclarationclause = 145, 
		RULE_parameterdeclarationlist = 146, RULE_parameterdeclaration = 147, 
		RULE_functiondefinition = 148, RULE_functionbody = 149, RULE_initializer = 150, 
		RULE_braceorequalinitializer = 151, RULE_initializerclause = 152, RULE_initializerlist = 153, 
		RULE_bracedinitlist = 154, RULE_classname = 155, RULE_classspecifier = 156, 
		RULE_classhead = 157, RULE_classheadname = 158, RULE_classvirtspecifier = 159, 
		RULE_classkey = 160, RULE_memberspecification = 161, RULE_memberdeclaration = 162, 
		RULE_memberdeclaratorlist = 163, RULE_memberdeclarator = 164, RULE_virtspecifierseq = 165, 
		RULE_virtspecifier = 166, RULE_purespecifier = 167, RULE_baseclause = 168, 
		RULE_basespecifierlist = 169, RULE_basespecifier = 170, RULE_classordecltype = 171, 
		RULE_basetypespecifier = 172, RULE_accessspecifier = 173, RULE_conversionfunctionid = 174, 
		RULE_conversiontypeid = 175, RULE_conversiondeclarator = 176, RULE_ctorinitializer = 177, 
		RULE_meminitializerlist = 178, RULE_meminitializer = 179, RULE_meminitializerid = 180, 
		RULE_operatorfunctionid = 181, RULE_literaloperatorid = 182, RULE_templatedeclaration = 183, 
		RULE_templateparameterlist = 184, RULE_templateparameter = 185, RULE_typeparameter = 186, 
		RULE_simpletemplateid = 187, RULE_templateid = 188, RULE_templatename = 189, 
		RULE_templateargumentlist = 190, RULE_templateargument = 191, RULE_typenamespecifier = 192, 
		RULE_explicitinstantiation = 193, RULE_explicitspecialization = 194, RULE_tryblock = 195, 
		RULE_functiontryblock = 196, RULE_handlerseq = 197, RULE_handler = 198, 
		RULE_exceptiondeclaration = 199, RULE_throwexpression = 200, RULE_exceptionspecification = 201, 
		RULE_dynamicexceptionspecification = 202, RULE_typeidlist = 203, RULE_noexceptspecification = 204, 
		RULE_theoperator = 205, RULE_literal = 206, RULE_booleanliteral = 207, 
		RULE_pointerliteral = 208, RULE_userdefinedliteral = 209;
	public static final String[] ruleNames = {
		"translationunit", "aergiaexpressionbegin", "aergiaexpressionend", "aergiaBlock", 
		"aergiaexpression", "anonymousExpression", "anoynmousBody", "aergiastring", 
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
		"typeidlist", "noexceptspecification", "theoperator", "literal", "booleanliteral", 
		"pointerliteral", "userdefinedliteral"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'$'", "'$$'", "'${'", "'$}'", "'anonymous'", "'@'", "'$foreach('", 
		"'in'", "').'", "'!'", "'not'", "'&&'", "'and'", "'||'", "'or'", null, 
		null, null, "'alignas'", "'alignof'", "'asm'", "'auto'", "'bool'", "'break'", 
		"'case'", "'catch'", "'char'", "'char16_t'", "'char32_t'", "'class'", 
		"'const'", "'constexpr'", "'const_cast'", "'continue'", "'decltype'", 
		"'default'", "'delete'", "'do'", "'double'", "'dynamic_cast'", "'else'", 
		"'enum'", "'explicit'", "'export'", "'extern'", "'false'", "'final'", 
		"'float'", "'for'", "'friend'", "'goto'", "'if'", "'inline'", "'int'", 
		"'long'", "'mutable'", "'namespace'", "'new'", "'noexcept'", "'nullptr'", 
		"'operator'", "'override'", "'private'", "'protected'", "'public'", "'register'", 
		"'reinterpret_cast'", "'return'", "'short'", "'signed'", "'sizeof'", "'static'", 
		"'static_assert'", "'static_cast'", "'struct'", "'switch'", "'template'", 
		"'this'", "'thread_local'", "'throw'", "'true'", "'try'", "'typedef'", 
		"'typeid'", "'typename'", "'union'", "'unsigned'", "'using'", "'virtual'", 
		"'void'", "'volatile'", "'wchar_t'", "'while'", "'('", "')'", "'['", "']'", 
		"'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'&'", "'|'", 
		"'~'", null, "'='", "'<'", "'>'", "'+='", "'-='", "'*='", "'/='", "'%='", 
		"'^='", "'&='", "'|='", "'<<'", "'>>'", "'<<='", "'>>='", "'=='", "'!='", 
		"'<='", "'>='", null, null, "'++'", "'--'", "','", "'->*'", "'->'", "'?'", 
		"':'", "'::'", "';'", "'.'", "'.*'", "'...'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, "Encodingprefix", "MultiLineMacro", "Directive", 
		"Alignas", "Alignof", "Asm", "Auto", "Bool", "Break", "Case", "Catch", 
		"Char", "Char16", "Char32", "Class", "Const", "Constexpr", "Const_cast", 
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
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "AergiaCpp14.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public AergiaCpp14Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class TranslationunitContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(AergiaCpp14Parser.EOF, 0); }
		public DeclarationseqContext declarationseq() {
			return getRuleContext(DeclarationseqContext.class,0);
		}
		public TranslationunitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_translationunit; }
	}

	public final TranslationunitContext translationunit() throws RecognitionException {
		TranslationunitContext _localctx = new TranslationunitContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_translationunit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(421);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Register - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Static - 66)) | (1L << (Static_assert - 66)) | (1L << (Struct - 66)) | (1L << (Template - 66)) | (1L << (Thread_local - 66)) | (1L << (Typedef - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Using - 66)) | (1L << (Virtual - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Semi - 138)) | (1L << (Ellipsis - 138)) | (1L << (Identifier - 138)))) != 0)) {
				{
				setState(420);
				declarationseq(0);
				}
			}

			setState(423);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AergiaexpressionbeginContext extends ParserRuleContext {
		public AergiaexpressionbeginContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_aergiaexpressionbegin; }
	}

	public final AergiaexpressionbeginContext aergiaexpressionbegin() throws RecognitionException {
		AergiaexpressionbeginContext _localctx = new AergiaexpressionbeginContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_aergiaexpressionbegin);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(425);
			match(T__0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AergiaexpressionendContext extends ParserRuleContext {
		public AergiaexpressionendContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_aergiaexpressionend; }
	}

	public final AergiaexpressionendContext aergiaexpressionend() throws RecognitionException {
		AergiaexpressionendContext _localctx = new AergiaexpressionendContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_aergiaexpressionend);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(427);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AergiaBlockContext extends ParserRuleContext {
		public StatementseqContext statementseq() {
			return getRuleContext(StatementseqContext.class,0);
		}
		public AergiaBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_aergiaBlock; }
	}

	public final AergiaBlockContext aergiaBlock() throws RecognitionException {
		AergiaBlockContext _localctx = new AergiaBlockContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_aergiaBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(429);
			match(T__2);
			setState(430);
			statementseq(0);
			setState(431);
			match(T__3);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AergiaexpressionContext extends ParserRuleContext {
		public AergiaexpressionbeginContext aergiaexpressionbegin() {
			return getRuleContext(AergiaexpressionbeginContext.class,0);
		}
		public CallchainContext callchain() {
			return getRuleContext(CallchainContext.class,0);
		}
		public AergiaexpressionendContext aergiaexpressionend() {
			return getRuleContext(AergiaexpressionendContext.class,0);
		}
		public AnonymousExpressionContext anonymousExpression() {
			return getRuleContext(AnonymousExpressionContext.class,0);
		}
		public AergiaexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_aergiaexpression; }
	}

	public final AergiaexpressionContext aergiaexpression() throws RecognitionException {
		AergiaexpressionContext _localctx = new AergiaexpressionContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_aergiaexpression);
		try {
			setState(441);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(433);
				aergiaexpressionbegin();
				setState(434);
				callchain();
				setState(435);
				aergiaexpressionend();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(437);
				aergiaexpressionbegin();
				setState(438);
				anonymousExpression();
				setState(439);
				aergiaexpressionend();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AnonymousExpressionContext extends ParserRuleContext {
		public AnoynmousBodyContext anoynmousBody() {
			return getRuleContext(AnoynmousBodyContext.class,0);
		}
		public AnonymousExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_anonymousExpression; }
	}

	public final AnonymousExpressionContext anonymousExpression() throws RecognitionException {
		AnonymousExpressionContext _localctx = new AnonymousExpressionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_anonymousExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(443);
			match(T__4);
			setState(444);
			match(LeftParen);
			setState(445);
			anoynmousBody();
			setState(446);
			match(RightParen);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AnoynmousBodyContext extends ParserRuleContext {
		public InitializerclauseContext initializerclause() {
			return getRuleContext(InitializerclauseContext.class,0);
		}
		public AnoynmousBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_anoynmousBody; }
	}

	public final AnoynmousBodyContext anoynmousBody() throws RecognitionException {
		AnoynmousBodyContext _localctx = new AnoynmousBodyContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_anoynmousBody);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(448);
			initializerclause();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AergiastringContext extends ParserRuleContext {
		public CallchainContext callchain() {
			return getRuleContext(CallchainContext.class,0);
		}
		public TerminalNode Encodingprefix() { return getToken(AergiaCpp14Parser.Encodingprefix, 0); }
		public AergiastringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_aergiastring; }
	}

	public final AergiastringContext aergiastring() throws RecognitionException {
		AergiastringContext _localctx = new AergiastringContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_aergiastring);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(451);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Encodingprefix) {
				{
				setState(450);
				match(Encodingprefix);
				}
			}

			setState(453);
			match(T__5);
			setState(454);
			callchain();
			setState(455);
			match(T__5);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForeachContext extends ParserRuleContext {
		public ForeachheaderContext foreachheader() {
			return getRuleContext(ForeachheaderContext.class,0);
		}
		public ForeachbodyContext foreachbody() {
			return getRuleContext(ForeachbodyContext.class,0);
		}
		public ForeachContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_foreach; }
	}

	public final ForeachContext foreach() throws RecognitionException {
		ForeachContext _localctx = new ForeachContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_foreach);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(457);
			match(T__6);
			setState(458);
			foreachheader();
			setState(459);
			match(RightParen);
			setState(460);
			foreachbody();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForeachheaderContext extends ParserRuleContext {
		public List<AergiaexpressionbeginContext> aergiaexpressionbegin() {
			return getRuleContexts(AergiaexpressionbeginContext.class);
		}
		public AergiaexpressionbeginContext aergiaexpressionbegin(int i) {
			return getRuleContext(AergiaexpressionbeginContext.class,i);
		}
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public CallchainContext callchain() {
			return getRuleContext(CallchainContext.class,0);
		}
		public ForeachheaderContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_foreachheader; }
	}

	public final ForeachheaderContext foreachheader() throws RecognitionException {
		ForeachheaderContext _localctx = new ForeachheaderContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_foreachheader);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(462);
			aergiaexpressionbegin();
			setState(463);
			match(Identifier);
			setState(464);
			match(T__7);
			setState(465);
			aergiaexpressionbegin();
			setState(466);
			callchain();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForeachbodyContext extends ParserRuleContext {
		public AergiaexpressionContext aergiaexpression() {
			return getRuleContext(AergiaexpressionContext.class,0);
		}
		public AergiaBlockContext aergiaBlock() {
			return getRuleContext(AergiaBlockContext.class,0);
		}
		public ForeachbodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_foreachbody; }
	}

	public final ForeachbodyContext foreachbody() throws RecognitionException {
		ForeachbodyContext _localctx = new ForeachbodyContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_foreachbody);
		try {
			setState(470);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
				enterOuterAlt(_localctx, 1);
				{
				setState(468);
				aergiaexpression();
				}
				break;
			case T__2:
				enterOuterAlt(_localctx, 2);
				{
				setState(469);
				aergiaBlock();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CallchainContext extends ParserRuleContext {
		public List<TerminalNode> Identifier() { return getTokens(AergiaCpp14Parser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(AergiaCpp14Parser.Identifier, i);
		}
		public CallchainContext callchain() {
			return getRuleContext(CallchainContext.class,0);
		}
		public CallchainContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_callchain; }
	}

	public final CallchainContext callchain() throws RecognitionException {
		CallchainContext _localctx = new CallchainContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_callchain);
		try {
			setState(485);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(472);
				match(Identifier);
				setState(473);
				match(Dot);
				setState(474);
				callchain();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(475);
				match(Identifier);
				setState(476);
				match(LeftParen);
				setState(477);
				match(Identifier);
				setState(478);
				match(T__8);
				setState(479);
				callchain();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(480);
				match(Identifier);
				setState(481);
				match(LeftParen);
				setState(482);
				match(Identifier);
				setState(483);
				match(RightParen);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(484);
				match(Identifier);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrimaryexpressionContext extends ParserRuleContext {
		public LiteralContext literal() {
			return getRuleContext(LiteralContext.class,0);
		}
		public TerminalNode This() { return getToken(AergiaCpp14Parser.This, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public IdexpressionContext idexpression() {
			return getRuleContext(IdexpressionContext.class,0);
		}
		public LambdaexpressionContext lambdaexpression() {
			return getRuleContext(LambdaexpressionContext.class,0);
		}
		public PrimaryexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primaryexpression; }
	}

	public final PrimaryexpressionContext primaryexpression() throws RecognitionException {
		PrimaryexpressionContext _localctx = new PrimaryexpressionContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_primaryexpression);
		try {
			setState(495);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__5:
			case Encodingprefix:
			case False:
			case Nullptr:
			case True:
			case Integerliteral:
			case Characterliteral:
			case Floatingliteral:
			case Stringliteral:
			case Userdefinedintegerliteral:
			case Userdefinedfloatingliteral:
			case Userdefinedstringliteral:
			case Userdefinedcharacterliteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(487);
				literal();
				}
				break;
			case This:
				enterOuterAlt(_localctx, 2);
				{
				setState(488);
				match(This);
				}
				break;
			case LeftParen:
				enterOuterAlt(_localctx, 3);
				{
				setState(489);
				match(LeftParen);
				setState(490);
				expression(0);
				setState(491);
				match(RightParen);
				}
				break;
			case Decltype:
			case Operator:
			case Tilde:
			case Doublecolon:
			case Identifier:
				enterOuterAlt(_localctx, 4);
				{
				setState(493);
				idexpression();
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 5);
				{
				setState(494);
				lambdaexpression();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdexpressionContext extends ParserRuleContext {
		public UnqualifiedidContext unqualifiedid() {
			return getRuleContext(UnqualifiedidContext.class,0);
		}
		public QualifiedidContext qualifiedid() {
			return getRuleContext(QualifiedidContext.class,0);
		}
		public IdexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_idexpression; }
	}

	public final IdexpressionContext idexpression() throws RecognitionException {
		IdexpressionContext _localctx = new IdexpressionContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_idexpression);
		try {
			setState(499);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(497);
				unqualifiedid();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(498);
				qualifiedid();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnqualifiedidContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public OperatorfunctionidContext operatorfunctionid() {
			return getRuleContext(OperatorfunctionidContext.class,0);
		}
		public ConversionfunctionidContext conversionfunctionid() {
			return getRuleContext(ConversionfunctionidContext.class,0);
		}
		public LiteraloperatoridContext literaloperatorid() {
			return getRuleContext(LiteraloperatoridContext.class,0);
		}
		public ClassnameContext classname() {
			return getRuleContext(ClassnameContext.class,0);
		}
		public DecltypespecifierContext decltypespecifier() {
			return getRuleContext(DecltypespecifierContext.class,0);
		}
		public TemplateidContext templateid() {
			return getRuleContext(TemplateidContext.class,0);
		}
		public UnqualifiedidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unqualifiedid; }
	}

	public final UnqualifiedidContext unqualifiedid() throws RecognitionException {
		UnqualifiedidContext _localctx = new UnqualifiedidContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_unqualifiedid);
		try {
			setState(510);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(501);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(502);
				operatorfunctionid();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(503);
				conversionfunctionid();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(504);
				literaloperatorid();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(505);
				match(Tilde);
				setState(506);
				classname();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(507);
				match(Tilde);
				setState(508);
				decltypespecifier();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(509);
				templateid();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QualifiedidContext extends ParserRuleContext {
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public UnqualifiedidContext unqualifiedid() {
			return getRuleContext(UnqualifiedidContext.class,0);
		}
		public TerminalNode Template() { return getToken(AergiaCpp14Parser.Template, 0); }
		public QualifiedidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qualifiedid; }
	}

	public final QualifiedidContext qualifiedid() throws RecognitionException {
		QualifiedidContext _localctx = new QualifiedidContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_qualifiedid);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(512);
			nestednamespecifier(0);
			setState(514);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Template) {
				{
				setState(513);
				match(Template);
				}
			}

			setState(516);
			unqualifiedid();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NestednamespecifierContext extends ParserRuleContext {
		public ThetypenameContext thetypename() {
			return getRuleContext(ThetypenameContext.class,0);
		}
		public NamespacenameContext namespacename() {
			return getRuleContext(NamespacenameContext.class,0);
		}
		public DecltypespecifierContext decltypespecifier() {
			return getRuleContext(DecltypespecifierContext.class,0);
		}
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public SimpletemplateidContext simpletemplateid() {
			return getRuleContext(SimpletemplateidContext.class,0);
		}
		public TerminalNode Template() { return getToken(AergiaCpp14Parser.Template, 0); }
		public NestednamespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nestednamespecifier; }
	}

	public final NestednamespecifierContext nestednamespecifier() throws RecognitionException {
		return nestednamespecifier(0);
	}

	private NestednamespecifierContext nestednamespecifier(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		NestednamespecifierContext _localctx = new NestednamespecifierContext(_ctx, _parentState);
		NestednamespecifierContext _prevctx = _localctx;
		int _startState = 32;
		enterRecursionRule(_localctx, 32, RULE_nestednamespecifier, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(529);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				setState(519);
				match(Doublecolon);
				}
				break;
			case 2:
				{
				setState(520);
				thetypename();
				setState(521);
				match(Doublecolon);
				}
				break;
			case 3:
				{
				setState(523);
				namespacename();
				setState(524);
				match(Doublecolon);
				}
				break;
			case 4:
				{
				setState(526);
				decltypespecifier();
				setState(527);
				match(Doublecolon);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(543);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(541);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
					case 1:
						{
						_localctx = new NestednamespecifierContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_nestednamespecifier);
						setState(531);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(532);
						match(Identifier);
						setState(533);
						match(Doublecolon);
						}
						break;
					case 2:
						{
						_localctx = new NestednamespecifierContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_nestednamespecifier);
						setState(534);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(536);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(535);
							match(Template);
							}
						}

						setState(538);
						simpletemplateid();
						setState(539);
						match(Doublecolon);
						}
						break;
					}
					} 
				}
				setState(545);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class LambdaexpressionContext extends ParserRuleContext {
		public LambdaintroducerContext lambdaintroducer() {
			return getRuleContext(LambdaintroducerContext.class,0);
		}
		public CompoundstatementContext compoundstatement() {
			return getRuleContext(CompoundstatementContext.class,0);
		}
		public LambdadeclaratorContext lambdadeclarator() {
			return getRuleContext(LambdadeclaratorContext.class,0);
		}
		public LambdaexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lambdaexpression; }
	}

	public final LambdaexpressionContext lambdaexpression() throws RecognitionException {
		LambdaexpressionContext _localctx = new LambdaexpressionContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_lambdaexpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(546);
			lambdaintroducer();
			setState(548);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LeftParen) {
				{
				setState(547);
				lambdadeclarator();
				}
			}

			setState(550);
			compoundstatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LambdaintroducerContext extends ParserRuleContext {
		public LambdacaptureContext lambdacapture() {
			return getRuleContext(LambdacaptureContext.class,0);
		}
		public LambdaintroducerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lambdaintroducer; }
	}

	public final LambdaintroducerContext lambdaintroducer() throws RecognitionException {
		LambdaintroducerContext _localctx = new LambdaintroducerContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_lambdaintroducer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(552);
			match(LeftBracket);
			setState(554);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (This - 78)) | (1L << (And - 78)) | (1L << (Assign - 78)))) != 0) || _la==Identifier) {
				{
				setState(553);
				lambdacapture();
				}
			}

			setState(556);
			match(RightBracket);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LambdacaptureContext extends ParserRuleContext {
		public CapturedefaultContext capturedefault() {
			return getRuleContext(CapturedefaultContext.class,0);
		}
		public CapturelistContext capturelist() {
			return getRuleContext(CapturelistContext.class,0);
		}
		public LambdacaptureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lambdacapture; }
	}

	public final LambdacaptureContext lambdacapture() throws RecognitionException {
		LambdacaptureContext _localctx = new LambdacaptureContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_lambdacapture);
		try {
			setState(564);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(558);
				capturedefault();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(559);
				capturelist(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(560);
				capturedefault();
				setState(561);
				match(Comma);
				setState(562);
				capturelist(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CapturedefaultContext extends ParserRuleContext {
		public CapturedefaultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_capturedefault; }
	}

	public final CapturedefaultContext capturedefault() throws RecognitionException {
		CapturedefaultContext _localctx = new CapturedefaultContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_capturedefault);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(566);
			_la = _input.LA(1);
			if ( !(_la==And || _la==Assign) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CapturelistContext extends ParserRuleContext {
		public CaptureContext capture() {
			return getRuleContext(CaptureContext.class,0);
		}
		public CapturelistContext capturelist() {
			return getRuleContext(CapturelistContext.class,0);
		}
		public CapturelistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_capturelist; }
	}

	public final CapturelistContext capturelist() throws RecognitionException {
		return capturelist(0);
	}

	private CapturelistContext capturelist(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		CapturelistContext _localctx = new CapturelistContext(_ctx, _parentState);
		CapturelistContext _prevctx = _localctx;
		int _startState = 42;
		enterRecursionRule(_localctx, 42, RULE_capturelist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(569);
			capture();
			setState(571);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(570);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(581);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new CapturelistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_capturelist);
					setState(573);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(574);
					match(Comma);
					setState(575);
					capture();
					setState(577);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
					case 1:
						{
						setState(576);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(583);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class CaptureContext extends ParserRuleContext {
		public SimplecaptureContext simplecapture() {
			return getRuleContext(SimplecaptureContext.class,0);
		}
		public InitcaptureContext initcapture() {
			return getRuleContext(InitcaptureContext.class,0);
		}
		public CaptureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_capture; }
	}

	public final CaptureContext capture() throws RecognitionException {
		CaptureContext _localctx = new CaptureContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_capture);
		try {
			setState(586);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(584);
				simplecapture();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(585);
				initcapture();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimplecaptureContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public TerminalNode This() { return getToken(AergiaCpp14Parser.This, 0); }
		public SimplecaptureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simplecapture; }
	}

	public final SimplecaptureContext simplecapture() throws RecognitionException {
		SimplecaptureContext _localctx = new SimplecaptureContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_simplecapture);
		try {
			setState(592);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(588);
				match(Identifier);
				}
				break;
			case And:
				enterOuterAlt(_localctx, 2);
				{
				setState(589);
				match(And);
				setState(590);
				match(Identifier);
				}
				break;
			case This:
				enterOuterAlt(_localctx, 3);
				{
				setState(591);
				match(This);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitcaptureContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public InitcaptureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initcapture; }
	}

	public final InitcaptureContext initcapture() throws RecognitionException {
		InitcaptureContext _localctx = new InitcaptureContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_initcapture);
		try {
			setState(599);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(594);
				match(Identifier);
				setState(595);
				initializer();
				}
				break;
			case And:
				enterOuterAlt(_localctx, 2);
				{
				setState(596);
				match(And);
				setState(597);
				match(Identifier);
				setState(598);
				initializer();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LambdadeclaratorContext extends ParserRuleContext {
		public ParameterdeclarationclauseContext parameterdeclarationclause() {
			return getRuleContext(ParameterdeclarationclauseContext.class,0);
		}
		public TerminalNode Mutable() { return getToken(AergiaCpp14Parser.Mutable, 0); }
		public ExceptionspecificationContext exceptionspecification() {
			return getRuleContext(ExceptionspecificationContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public TrailingreturntypeContext trailingreturntype() {
			return getRuleContext(TrailingreturntypeContext.class,0);
		}
		public LambdadeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lambdadeclarator; }
	}

	public final LambdadeclaratorContext lambdadeclarator() throws RecognitionException {
		LambdadeclaratorContext _localctx = new LambdadeclaratorContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_lambdadeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(601);
			match(LeftParen);
			setState(602);
			parameterdeclarationclause();
			setState(603);
			match(RightParen);
			setState(605);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Mutable) {
				{
				setState(604);
				match(Mutable);
				}
			}

			setState(608);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Noexcept || _la==Throw) {
				{
				setState(607);
				exceptionspecification();
				}
			}

			setState(611);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(610);
				attributespecifierseq(0);
				}
			}

			setState(614);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(613);
				trailingreturntype();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PostfixexpressionContext extends ParserRuleContext {
		public PrimaryexpressionContext primaryexpression() {
			return getRuleContext(PrimaryexpressionContext.class,0);
		}
		public SimpletypespecifierContext simpletypespecifier() {
			return getRuleContext(SimpletypespecifierContext.class,0);
		}
		public ExpressionlistContext expressionlist() {
			return getRuleContext(ExpressionlistContext.class,0);
		}
		public TypenamespecifierContext typenamespecifier() {
			return getRuleContext(TypenamespecifierContext.class,0);
		}
		public BracedinitlistContext bracedinitlist() {
			return getRuleContext(BracedinitlistContext.class,0);
		}
		public TerminalNode Dynamic_cast() { return getToken(AergiaCpp14Parser.Dynamic_cast, 0); }
		public ThetypeidContext thetypeid() {
			return getRuleContext(ThetypeidContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode Static_cast() { return getToken(AergiaCpp14Parser.Static_cast, 0); }
		public TerminalNode Reinterpret_cast() { return getToken(AergiaCpp14Parser.Reinterpret_cast, 0); }
		public TerminalNode Const_cast() { return getToken(AergiaCpp14Parser.Const_cast, 0); }
		public TypeidofthetypeidContext typeidofthetypeid() {
			return getRuleContext(TypeidofthetypeidContext.class,0);
		}
		public PostfixexpressionContext postfixexpression() {
			return getRuleContext(PostfixexpressionContext.class,0);
		}
		public IdexpressionContext idexpression() {
			return getRuleContext(IdexpressionContext.class,0);
		}
		public TerminalNode Template() { return getToken(AergiaCpp14Parser.Template, 0); }
		public PseudodestructornameContext pseudodestructorname() {
			return getRuleContext(PseudodestructornameContext.class,0);
		}
		public PostfixexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfixexpression; }
	}

	public final PostfixexpressionContext postfixexpression() throws RecognitionException {
		return postfixexpression(0);
	}

	private PostfixexpressionContext postfixexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		PostfixexpressionContext _localctx = new PostfixexpressionContext(_ctx, _parentState);
		PostfixexpressionContext _prevctx = _localctx;
		int _startState = 52;
		enterRecursionRule(_localctx, 52, RULE_postfixexpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(680);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				{
				setState(617);
				primaryexpression();
				}
				break;
			case 2:
				{
				setState(618);
				simpletypespecifier();
				setState(619);
				match(LeftParen);
				setState(621);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftBrace - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(620);
					expressionlist();
					}
				}

				setState(623);
				match(RightParen);
				}
				break;
			case 3:
				{
				setState(625);
				typenamespecifier();
				setState(626);
				match(LeftParen);
				setState(628);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftBrace - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(627);
					expressionlist();
					}
				}

				setState(630);
				match(RightParen);
				}
				break;
			case 4:
				{
				setState(632);
				simpletypespecifier();
				setState(633);
				bracedinitlist();
				}
				break;
			case 5:
				{
				setState(635);
				typenamespecifier();
				setState(636);
				bracedinitlist();
				}
				break;
			case 6:
				{
				setState(638);
				match(Dynamic_cast);
				setState(639);
				match(Less);
				setState(640);
				thetypeid();
				setState(641);
				match(Greater);
				setState(642);
				match(LeftParen);
				setState(643);
				expression(0);
				setState(644);
				match(RightParen);
				}
				break;
			case 7:
				{
				setState(646);
				match(Static_cast);
				setState(647);
				match(Less);
				setState(648);
				thetypeid();
				setState(649);
				match(Greater);
				setState(650);
				match(LeftParen);
				setState(651);
				expression(0);
				setState(652);
				match(RightParen);
				}
				break;
			case 8:
				{
				setState(654);
				match(Reinterpret_cast);
				setState(655);
				match(Less);
				setState(656);
				thetypeid();
				setState(657);
				match(Greater);
				setState(658);
				match(LeftParen);
				setState(659);
				expression(0);
				setState(660);
				match(RightParen);
				}
				break;
			case 9:
				{
				setState(662);
				match(Const_cast);
				setState(663);
				match(Less);
				setState(664);
				thetypeid();
				setState(665);
				match(Greater);
				setState(666);
				match(LeftParen);
				setState(667);
				expression(0);
				setState(668);
				match(RightParen);
				}
				break;
			case 10:
				{
				setState(670);
				typeidofthetypeid();
				setState(671);
				match(LeftParen);
				setState(672);
				expression(0);
				setState(673);
				match(RightParen);
				}
				break;
			case 11:
				{
				setState(675);
				typeidofthetypeid();
				setState(676);
				match(LeftParen);
				setState(677);
				thetypeid();
				setState(678);
				match(RightParen);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(722);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(720);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
					case 1:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(682);
						if (!(precpred(_ctx, 19))) throw new FailedPredicateException(this, "precpred(_ctx, 19)");
						setState(683);
						match(LeftBracket);
						setState(684);
						expression(0);
						setState(685);
						match(RightBracket);
						}
						break;
					case 2:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(687);
						if (!(precpred(_ctx, 18))) throw new FailedPredicateException(this, "precpred(_ctx, 18)");
						setState(688);
						match(LeftBracket);
						setState(689);
						bracedinitlist();
						setState(690);
						match(RightBracket);
						}
						break;
					case 3:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(692);
						if (!(precpred(_ctx, 17))) throw new FailedPredicateException(this, "precpred(_ctx, 17)");
						setState(693);
						match(LeftParen);
						setState(695);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftBrace - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
							{
							setState(694);
							expressionlist();
							}
						}

						setState(697);
						match(RightParen);
						}
						break;
					case 4:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(698);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(699);
						match(Dot);
						setState(701);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(700);
							match(Template);
							}
						}

						setState(703);
						idexpression();
						}
						break;
					case 5:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(704);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(705);
						match(Arrow);
						setState(707);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(706);
							match(Template);
							}
						}

						setState(709);
						idexpression();
						}
						break;
					case 6:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(710);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(711);
						match(Dot);
						setState(712);
						pseudodestructorname();
						}
						break;
					case 7:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(713);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(714);
						match(Arrow);
						setState(715);
						pseudodestructorname();
						}
						break;
					case 8:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(716);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(717);
						match(PlusPlus);
						}
						break;
					case 9:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(718);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(719);
						match(MinusMinus);
						}
						break;
					}
					} 
				}
				setState(724);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class TypeidofexprContext extends ParserRuleContext {
		public TerminalNode Typeid_() { return getToken(AergiaCpp14Parser.Typeid_, 0); }
		public TypeidofexprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeidofexpr; }
	}

	public final TypeidofexprContext typeidofexpr() throws RecognitionException {
		TypeidofexprContext _localctx = new TypeidofexprContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_typeidofexpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(725);
			match(Typeid_);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeidofthetypeidContext extends ParserRuleContext {
		public TerminalNode Typeid_() { return getToken(AergiaCpp14Parser.Typeid_, 0); }
		public TypeidofthetypeidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeidofthetypeid; }
	}

	public final TypeidofthetypeidContext typeidofthetypeid() throws RecognitionException {
		TypeidofthetypeidContext _localctx = new TypeidofthetypeidContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_typeidofthetypeid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(727);
			match(Typeid_);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionlistContext extends ParserRuleContext {
		public InitializerlistContext initializerlist() {
			return getRuleContext(InitializerlistContext.class,0);
		}
		public ExpressionlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionlist; }
	}

	public final ExpressionlistContext expressionlist() throws RecognitionException {
		ExpressionlistContext _localctx = new ExpressionlistContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_expressionlist);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(729);
			initializerlist(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PseudodestructornameContext extends ParserRuleContext {
		public List<ThetypenameContext> thetypename() {
			return getRuleContexts(ThetypenameContext.class);
		}
		public ThetypenameContext thetypename(int i) {
			return getRuleContext(ThetypenameContext.class,i);
		}
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public TerminalNode Template() { return getToken(AergiaCpp14Parser.Template, 0); }
		public SimpletemplateidContext simpletemplateid() {
			return getRuleContext(SimpletemplateidContext.class,0);
		}
		public DecltypespecifierContext decltypespecifier() {
			return getRuleContext(DecltypespecifierContext.class,0);
		}
		public PseudodestructornameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pseudodestructorname; }
	}

	public final PseudodestructornameContext pseudodestructorname() throws RecognitionException {
		PseudodestructornameContext _localctx = new PseudodestructornameContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_pseudodestructorname);
		int _la;
		try {
			setState(753);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(732);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
				case 1:
					{
					setState(731);
					nestednamespecifier(0);
					}
					break;
				}
				setState(734);
				thetypename();
				setState(735);
				match(Doublecolon);
				setState(736);
				match(Tilde);
				setState(737);
				thetypename();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(739);
				nestednamespecifier(0);
				setState(740);
				match(Template);
				setState(741);
				simpletemplateid();
				setState(742);
				match(Doublecolon);
				setState(743);
				match(Tilde);
				setState(744);
				thetypename();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(747);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Decltype || _la==Doublecolon || _la==Identifier) {
					{
					setState(746);
					nestednamespecifier(0);
					}
				}

				setState(749);
				match(Tilde);
				setState(750);
				thetypename();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(751);
				match(Tilde);
				setState(752);
				decltypespecifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnaryexpressionContext extends ParserRuleContext {
		public PostfixexpressionContext postfixexpression() {
			return getRuleContext(PostfixexpressionContext.class,0);
		}
		public CastexpressionContext castexpression() {
			return getRuleContext(CastexpressionContext.class,0);
		}
		public UnaryoperatorContext unaryoperator() {
			return getRuleContext(UnaryoperatorContext.class,0);
		}
		public TerminalNode Sizeof() { return getToken(AergiaCpp14Parser.Sizeof, 0); }
		public UnaryexpressionContext unaryexpression() {
			return getRuleContext(UnaryexpressionContext.class,0);
		}
		public ThetypeidContext thetypeid() {
			return getRuleContext(ThetypeidContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public TerminalNode Alignof() { return getToken(AergiaCpp14Parser.Alignof, 0); }
		public NoexceptexpressionContext noexceptexpression() {
			return getRuleContext(NoexceptexpressionContext.class,0);
		}
		public NewexpressionContext newexpression() {
			return getRuleContext(NewexpressionContext.class,0);
		}
		public DeleteexpressionContext deleteexpression() {
			return getRuleContext(DeleteexpressionContext.class,0);
		}
		public UnaryexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unaryexpression; }
	}

	public final UnaryexpressionContext unaryexpression() throws RecognitionException {
		UnaryexpressionContext _localctx = new UnaryexpressionContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_unaryexpression);
		try {
			setState(783);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(755);
				postfixexpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(756);
				match(PlusPlus);
				setState(757);
				castexpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(758);
				match(MinusMinus);
				setState(759);
				castexpression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(760);
				unaryoperator();
				setState(761);
				castexpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(763);
				match(Sizeof);
				setState(764);
				unaryexpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(765);
				match(Sizeof);
				setState(766);
				match(LeftParen);
				setState(767);
				thetypeid();
				setState(768);
				match(RightParen);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(770);
				match(Sizeof);
				setState(771);
				match(Ellipsis);
				setState(772);
				match(LeftParen);
				setState(773);
				match(Identifier);
				setState(774);
				match(RightParen);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(775);
				match(Alignof);
				setState(776);
				match(LeftParen);
				setState(777);
				thetypeid();
				setState(778);
				match(RightParen);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(780);
				noexceptexpression();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(781);
				newexpression();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(782);
				deleteexpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnaryoperatorContext extends ParserRuleContext {
		public UnaryoperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unaryoperator; }
	}

	public final UnaryoperatorContext unaryoperator() throws RecognitionException {
		UnaryoperatorContext _localctx = new UnaryoperatorContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_unaryoperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(785);
			_la = _input.LA(1);
			if ( !(_la==T__9 || _la==T__10 || ((((_la - 100)) & ~0x3f) == 0 && ((1L << (_la - 100)) & ((1L << (Plus - 100)) | (1L << (Minus - 100)) | (1L << (Star - 100)) | (1L << (And - 100)) | (1L << (Or - 100)) | (1L << (Tilde - 100)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NewexpressionContext extends ParserRuleContext {
		public TerminalNode New() { return getToken(AergiaCpp14Parser.New, 0); }
		public NewtypeidContext newtypeid() {
			return getRuleContext(NewtypeidContext.class,0);
		}
		public NewplacementContext newplacement() {
			return getRuleContext(NewplacementContext.class,0);
		}
		public NewinitializerContext newinitializer() {
			return getRuleContext(NewinitializerContext.class,0);
		}
		public ThetypeidContext thetypeid() {
			return getRuleContext(ThetypeidContext.class,0);
		}
		public NewexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newexpression; }
	}

	public final NewexpressionContext newexpression() throws RecognitionException {
		NewexpressionContext _localctx = new NewexpressionContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_newexpression);
		int _la;
		try {
			setState(811);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(788);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(787);
					match(Doublecolon);
					}
				}

				setState(790);
				match(New);
				setState(792);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LeftParen) {
					{
					setState(791);
					newplacement();
					}
				}

				setState(794);
				newtypeid();
				setState(796);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
				case 1:
					{
					setState(795);
					newinitializer();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(799);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(798);
					match(Doublecolon);
					}
				}

				setState(801);
				match(New);
				setState(803);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
				case 1:
					{
					setState(802);
					newplacement();
					}
					break;
				}
				setState(805);
				match(LeftParen);
				setState(806);
				thetypeid();
				setState(807);
				match(RightParen);
				setState(809);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
				case 1:
					{
					setState(808);
					newinitializer();
					}
					break;
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NewplacementContext extends ParserRuleContext {
		public ExpressionlistContext expressionlist() {
			return getRuleContext(ExpressionlistContext.class,0);
		}
		public NewplacementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newplacement; }
	}

	public final NewplacementContext newplacement() throws RecognitionException {
		NewplacementContext _localctx = new NewplacementContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_newplacement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(813);
			match(LeftParen);
			setState(814);
			expressionlist();
			setState(815);
			match(RightParen);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NewtypeidContext extends ParserRuleContext {
		public TypespecifierseqContext typespecifierseq() {
			return getRuleContext(TypespecifierseqContext.class,0);
		}
		public NewdeclaratorContext newdeclarator() {
			return getRuleContext(NewdeclaratorContext.class,0);
		}
		public NewtypeidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newtypeid; }
	}

	public final NewtypeidContext newtypeid() throws RecognitionException {
		NewtypeidContext _localctx = new NewtypeidContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_newtypeid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(817);
			typespecifierseq();
			setState(819);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
			case 1:
				{
				setState(818);
				newdeclarator();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NewdeclaratorContext extends ParserRuleContext {
		public PtroperatorContext ptroperator() {
			return getRuleContext(PtroperatorContext.class,0);
		}
		public NewdeclaratorContext newdeclarator() {
			return getRuleContext(NewdeclaratorContext.class,0);
		}
		public NoptrnewdeclaratorContext noptrnewdeclarator() {
			return getRuleContext(NoptrnewdeclaratorContext.class,0);
		}
		public NewdeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newdeclarator; }
	}

	public final NewdeclaratorContext newdeclarator() throws RecognitionException {
		NewdeclaratorContext _localctx = new NewdeclaratorContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_newdeclarator);
		try {
			setState(826);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__11:
			case Decltype:
			case Star:
			case And:
			case Doublecolon:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(821);
				ptroperator();
				setState(823);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
				case 1:
					{
					setState(822);
					newdeclarator();
					}
					break;
				}
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(825);
				noptrnewdeclarator(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoptrnewdeclaratorContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public NoptrnewdeclaratorContext noptrnewdeclarator() {
			return getRuleContext(NoptrnewdeclaratorContext.class,0);
		}
		public ConstantexpressionContext constantexpression() {
			return getRuleContext(ConstantexpressionContext.class,0);
		}
		public NoptrnewdeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noptrnewdeclarator; }
	}

	public final NoptrnewdeclaratorContext noptrnewdeclarator() throws RecognitionException {
		return noptrnewdeclarator(0);
	}

	private NoptrnewdeclaratorContext noptrnewdeclarator(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		NoptrnewdeclaratorContext _localctx = new NoptrnewdeclaratorContext(_ctx, _parentState);
		NoptrnewdeclaratorContext _prevctx = _localctx;
		int _startState = 74;
		enterRecursionRule(_localctx, 74, RULE_noptrnewdeclarator, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(829);
			match(LeftBracket);
			setState(830);
			expression(0);
			setState(831);
			match(RightBracket);
			setState(833);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				{
				setState(832);
				attributespecifierseq(0);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(844);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,50,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new NoptrnewdeclaratorContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_noptrnewdeclarator);
					setState(835);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(836);
					match(LeftBracket);
					setState(837);
					constantexpression();
					setState(838);
					match(RightBracket);
					setState(840);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
					case 1:
						{
						setState(839);
						attributespecifierseq(0);
						}
						break;
					}
					}
					} 
				}
				setState(846);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,50,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class NewinitializerContext extends ParserRuleContext {
		public ExpressionlistContext expressionlist() {
			return getRuleContext(ExpressionlistContext.class,0);
		}
		public BracedinitlistContext bracedinitlist() {
			return getRuleContext(BracedinitlistContext.class,0);
		}
		public NewinitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newinitializer; }
	}

	public final NewinitializerContext newinitializer() throws RecognitionException {
		NewinitializerContext _localctx = new NewinitializerContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_newinitializer);
		int _la;
		try {
			setState(853);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParen:
				enterOuterAlt(_localctx, 1);
				{
				setState(847);
				match(LeftParen);
				setState(849);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftBrace - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(848);
					expressionlist();
					}
				}

				setState(851);
				match(RightParen);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(852);
				bracedinitlist();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeleteexpressionContext extends ParserRuleContext {
		public TerminalNode Delete() { return getToken(AergiaCpp14Parser.Delete, 0); }
		public CastexpressionContext castexpression() {
			return getRuleContext(CastexpressionContext.class,0);
		}
		public DeleteexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_deleteexpression; }
	}

	public final DeleteexpressionContext deleteexpression() throws RecognitionException {
		DeleteexpressionContext _localctx = new DeleteexpressionContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_deleteexpression);
		int _la;
		try {
			setState(867);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(856);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(855);
					match(Doublecolon);
					}
				}

				setState(858);
				match(Delete);
				setState(859);
				castexpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(861);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(860);
					match(Doublecolon);
					}
				}

				setState(863);
				match(Delete);
				setState(864);
				match(LeftBracket);
				setState(865);
				match(RightBracket);
				setState(866);
				castexpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoexceptexpressionContext extends ParserRuleContext {
		public TerminalNode Noexcept() { return getToken(AergiaCpp14Parser.Noexcept, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public NoexceptexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noexceptexpression; }
	}

	public final NoexceptexpressionContext noexceptexpression() throws RecognitionException {
		NoexceptexpressionContext _localctx = new NoexceptexpressionContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_noexceptexpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(869);
			match(Noexcept);
			setState(870);
			match(LeftParen);
			setState(871);
			expression(0);
			setState(872);
			match(RightParen);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CastexpressionContext extends ParserRuleContext {
		public UnaryexpressionContext unaryexpression() {
			return getRuleContext(UnaryexpressionContext.class,0);
		}
		public ThetypeidContext thetypeid() {
			return getRuleContext(ThetypeidContext.class,0);
		}
		public CastexpressionContext castexpression() {
			return getRuleContext(CastexpressionContext.class,0);
		}
		public CastexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_castexpression; }
	}

	public final CastexpressionContext castexpression() throws RecognitionException {
		CastexpressionContext _localctx = new CastexpressionContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_castexpression);
		try {
			setState(880);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(874);
				unaryexpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(875);
				match(LeftParen);
				setState(876);
				thetypeid();
				setState(877);
				match(RightParen);
				setState(878);
				castexpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PmexpressionContext extends ParserRuleContext {
		public PrimaryexpressionContext primaryexpression() {
			return getRuleContext(PrimaryexpressionContext.class,0);
		}
		public PmexpressionContext pmexpression() {
			return getRuleContext(PmexpressionContext.class,0);
		}
		public CastexpressionContext castexpression() {
			return getRuleContext(CastexpressionContext.class,0);
		}
		public PmexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pmexpression; }
	}

	public final PmexpressionContext pmexpression() throws RecognitionException {
		return pmexpression(0);
	}

	private PmexpressionContext pmexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		PmexpressionContext _localctx = new PmexpressionContext(_ctx, _parentState);
		PmexpressionContext _prevctx = _localctx;
		int _startState = 84;
		enterRecursionRule(_localctx, 84, RULE_pmexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(883);
			primaryexpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(893);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(891);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
					case 1:
						{
						_localctx = new PmexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pmexpression);
						setState(885);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(886);
						match(DotStar);
						setState(887);
						castexpression();
						}
						break;
					case 2:
						{
						_localctx = new PmexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pmexpression);
						setState(888);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(889);
						match(ArrowStar);
						setState(890);
						castexpression();
						}
						break;
					}
					} 
				}
				setState(895);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class MultiplicativeexpressionContext extends ParserRuleContext {
		public PmexpressionContext pmexpression() {
			return getRuleContext(PmexpressionContext.class,0);
		}
		public MultiplicativeexpressionContext multiplicativeexpression() {
			return getRuleContext(MultiplicativeexpressionContext.class,0);
		}
		public MultiplicativeexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multiplicativeexpression; }
	}

	public final MultiplicativeexpressionContext multiplicativeexpression() throws RecognitionException {
		return multiplicativeexpression(0);
	}

	private MultiplicativeexpressionContext multiplicativeexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		MultiplicativeexpressionContext _localctx = new MultiplicativeexpressionContext(_ctx, _parentState);
		MultiplicativeexpressionContext _prevctx = _localctx;
		int _startState = 86;
		enterRecursionRule(_localctx, 86, RULE_multiplicativeexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(897);
			pmexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(910);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(908);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeexpression);
						setState(899);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(900);
						match(Star);
						setState(901);
						pmexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicativeexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeexpression);
						setState(902);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(903);
						match(Div);
						setState(904);
						pmexpression(0);
						}
						break;
					case 3:
						{
						_localctx = new MultiplicativeexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeexpression);
						setState(905);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(906);
						match(Mod);
						setState(907);
						pmexpression(0);
						}
						break;
					}
					} 
				}
				setState(912);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class AdditiveexpressionContext extends ParserRuleContext {
		public MultiplicativeexpressionContext multiplicativeexpression() {
			return getRuleContext(MultiplicativeexpressionContext.class,0);
		}
		public AdditiveexpressionContext additiveexpression() {
			return getRuleContext(AdditiveexpressionContext.class,0);
		}
		public AdditiveexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_additiveexpression; }
	}

	public final AdditiveexpressionContext additiveexpression() throws RecognitionException {
		return additiveexpression(0);
	}

	private AdditiveexpressionContext additiveexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		AdditiveexpressionContext _localctx = new AdditiveexpressionContext(_ctx, _parentState);
		AdditiveexpressionContext _prevctx = _localctx;
		int _startState = 88;
		enterRecursionRule(_localctx, 88, RULE_additiveexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(914);
			multiplicativeexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(924);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(922);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,61,_ctx) ) {
					case 1:
						{
						_localctx = new AdditiveexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveexpression);
						setState(916);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(917);
						match(Plus);
						setState(918);
						multiplicativeexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveexpression);
						setState(919);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(920);
						match(Minus);
						setState(921);
						multiplicativeexpression(0);
						}
						break;
					}
					} 
				}
				setState(926);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ShiftexpressionContext extends ParserRuleContext {
		public AdditiveexpressionContext additiveexpression() {
			return getRuleContext(AdditiveexpressionContext.class,0);
		}
		public ShiftexpressionContext shiftexpression() {
			return getRuleContext(ShiftexpressionContext.class,0);
		}
		public ShiftoperatorContext shiftoperator() {
			return getRuleContext(ShiftoperatorContext.class,0);
		}
		public ShiftexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_shiftexpression; }
	}

	public final ShiftexpressionContext shiftexpression() throws RecognitionException {
		return shiftexpression(0);
	}

	private ShiftexpressionContext shiftexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ShiftexpressionContext _localctx = new ShiftexpressionContext(_ctx, _parentState);
		ShiftexpressionContext _prevctx = _localctx;
		int _startState = 90;
		enterRecursionRule(_localctx, 90, RULE_shiftexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(928);
			additiveexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(936);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ShiftexpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_shiftexpression);
					setState(930);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(931);
					shiftoperator();
					setState(932);
					additiveexpression(0);
					}
					} 
				}
				setState(938);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ShiftoperatorContext extends ParserRuleContext {
		public TerminalNode RightShift() { return getToken(AergiaCpp14Parser.RightShift, 0); }
		public TerminalNode LeftShift() { return getToken(AergiaCpp14Parser.LeftShift, 0); }
		public ShiftoperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_shiftoperator; }
	}

	public final ShiftoperatorContext shiftoperator() throws RecognitionException {
		ShiftoperatorContext _localctx = new ShiftoperatorContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_shiftoperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(939);
			_la = _input.LA(1);
			if ( !(_la==LeftShift || _la==RightShift) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RelationalexpressionContext extends ParserRuleContext {
		public ShiftexpressionContext shiftexpression() {
			return getRuleContext(ShiftexpressionContext.class,0);
		}
		public RelationalexpressionContext relationalexpression() {
			return getRuleContext(RelationalexpressionContext.class,0);
		}
		public RelationalexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relationalexpression; }
	}

	public final RelationalexpressionContext relationalexpression() throws RecognitionException {
		return relationalexpression(0);
	}

	private RelationalexpressionContext relationalexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		RelationalexpressionContext _localctx = new RelationalexpressionContext(_ctx, _parentState);
		RelationalexpressionContext _prevctx = _localctx;
		int _startState = 94;
		enterRecursionRule(_localctx, 94, RULE_relationalexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(942);
			shiftexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(958);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,65,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(956);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,64,_ctx) ) {
					case 1:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(944);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(945);
						match(Less);
						setState(946);
						shiftexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(947);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(948);
						match(Greater);
						setState(949);
						shiftexpression(0);
						}
						break;
					case 3:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(950);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(951);
						match(LessEqual);
						setState(952);
						shiftexpression(0);
						}
						break;
					case 4:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(953);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(954);
						match(GreaterEqual);
						setState(955);
						shiftexpression(0);
						}
						break;
					}
					} 
				}
				setState(960);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,65,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class EqualityexpressionContext extends ParserRuleContext {
		public RelationalexpressionContext relationalexpression() {
			return getRuleContext(RelationalexpressionContext.class,0);
		}
		public EqualityexpressionContext equalityexpression() {
			return getRuleContext(EqualityexpressionContext.class,0);
		}
		public EqualityexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_equalityexpression; }
	}

	public final EqualityexpressionContext equalityexpression() throws RecognitionException {
		return equalityexpression(0);
	}

	private EqualityexpressionContext equalityexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		EqualityexpressionContext _localctx = new EqualityexpressionContext(_ctx, _parentState);
		EqualityexpressionContext _prevctx = _localctx;
		int _startState = 96;
		enterRecursionRule(_localctx, 96, RULE_equalityexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(962);
			relationalexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(972);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,67,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(970);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
					case 1:
						{
						_localctx = new EqualityexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityexpression);
						setState(964);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(965);
						match(Equal);
						setState(966);
						relationalexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new EqualityexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityexpression);
						setState(967);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(968);
						match(NotEqual);
						setState(969);
						relationalexpression(0);
						}
						break;
					}
					} 
				}
				setState(974);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,67,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class AndexpressionContext extends ParserRuleContext {
		public EqualityexpressionContext equalityexpression() {
			return getRuleContext(EqualityexpressionContext.class,0);
		}
		public AndexpressionContext andexpression() {
			return getRuleContext(AndexpressionContext.class,0);
		}
		public AndexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_andexpression; }
	}

	public final AndexpressionContext andexpression() throws RecognitionException {
		return andexpression(0);
	}

	private AndexpressionContext andexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		AndexpressionContext _localctx = new AndexpressionContext(_ctx, _parentState);
		AndexpressionContext _prevctx = _localctx;
		int _startState = 98;
		enterRecursionRule(_localctx, 98, RULE_andexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(976);
			equalityexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(983);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,68,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AndexpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_andexpression);
					setState(978);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(979);
					match(And);
					setState(980);
					equalityexpression(0);
					}
					} 
				}
				setState(985);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,68,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ExclusiveorexpressionContext extends ParserRuleContext {
		public AndexpressionContext andexpression() {
			return getRuleContext(AndexpressionContext.class,0);
		}
		public ExclusiveorexpressionContext exclusiveorexpression() {
			return getRuleContext(ExclusiveorexpressionContext.class,0);
		}
		public ExclusiveorexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exclusiveorexpression; }
	}

	public final ExclusiveorexpressionContext exclusiveorexpression() throws RecognitionException {
		return exclusiveorexpression(0);
	}

	private ExclusiveorexpressionContext exclusiveorexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExclusiveorexpressionContext _localctx = new ExclusiveorexpressionContext(_ctx, _parentState);
		ExclusiveorexpressionContext _prevctx = _localctx;
		int _startState = 100;
		enterRecursionRule(_localctx, 100, RULE_exclusiveorexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(987);
			andexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(994);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,69,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExclusiveorexpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_exclusiveorexpression);
					setState(989);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(990);
					match(Caret);
					setState(991);
					andexpression(0);
					}
					} 
				}
				setState(996);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,69,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class InclusiveorexpressionContext extends ParserRuleContext {
		public ExclusiveorexpressionContext exclusiveorexpression() {
			return getRuleContext(ExclusiveorexpressionContext.class,0);
		}
		public InclusiveorexpressionContext inclusiveorexpression() {
			return getRuleContext(InclusiveorexpressionContext.class,0);
		}
		public InclusiveorexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inclusiveorexpression; }
	}

	public final InclusiveorexpressionContext inclusiveorexpression() throws RecognitionException {
		return inclusiveorexpression(0);
	}

	private InclusiveorexpressionContext inclusiveorexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		InclusiveorexpressionContext _localctx = new InclusiveorexpressionContext(_ctx, _parentState);
		InclusiveorexpressionContext _prevctx = _localctx;
		int _startState = 102;
		enterRecursionRule(_localctx, 102, RULE_inclusiveorexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(998);
			exclusiveorexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1005);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InclusiveorexpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_inclusiveorexpression);
					setState(1000);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1001);
					match(Or);
					setState(1002);
					exclusiveorexpression(0);
					}
					} 
				}
				setState(1007);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class LogicalandexpressionContext extends ParserRuleContext {
		public InclusiveorexpressionContext inclusiveorexpression() {
			return getRuleContext(InclusiveorexpressionContext.class,0);
		}
		public LogicalandexpressionContext logicalandexpression() {
			return getRuleContext(LogicalandexpressionContext.class,0);
		}
		public LogicalandexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicalandexpression; }
	}

	public final LogicalandexpressionContext logicalandexpression() throws RecognitionException {
		return logicalandexpression(0);
	}

	private LogicalandexpressionContext logicalandexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		LogicalandexpressionContext _localctx = new LogicalandexpressionContext(_ctx, _parentState);
		LogicalandexpressionContext _prevctx = _localctx;
		int _startState = 104;
		enterRecursionRule(_localctx, 104, RULE_logicalandexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1009);
			inclusiveorexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1019);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,72,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1017);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,71,_ctx) ) {
					case 1:
						{
						_localctx = new LogicalandexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalandexpression);
						setState(1011);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1012);
						match(T__11);
						setState(1013);
						inclusiveorexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new LogicalandexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalandexpression);
						setState(1014);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1015);
						match(T__12);
						setState(1016);
						inclusiveorexpression(0);
						}
						break;
					}
					} 
				}
				setState(1021);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,72,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class LogicalorexpressionContext extends ParserRuleContext {
		public LogicalandexpressionContext logicalandexpression() {
			return getRuleContext(LogicalandexpressionContext.class,0);
		}
		public LogicalorexpressionContext logicalorexpression() {
			return getRuleContext(LogicalorexpressionContext.class,0);
		}
		public LogicalorexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicalorexpression; }
	}

	public final LogicalorexpressionContext logicalorexpression() throws RecognitionException {
		return logicalorexpression(0);
	}

	private LogicalorexpressionContext logicalorexpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		LogicalorexpressionContext _localctx = new LogicalorexpressionContext(_ctx, _parentState);
		LogicalorexpressionContext _prevctx = _localctx;
		int _startState = 106;
		enterRecursionRule(_localctx, 106, RULE_logicalorexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1023);
			logicalandexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1033);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,74,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1031);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
					case 1:
						{
						_localctx = new LogicalorexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalorexpression);
						setState(1025);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1026);
						match(T__13);
						setState(1027);
						logicalandexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new LogicalorexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalorexpression);
						setState(1028);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1029);
						match(T__14);
						setState(1030);
						logicalandexpression(0);
						}
						break;
					}
					} 
				}
				setState(1035);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,74,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ConditionalexpressionContext extends ParserRuleContext {
		public LogicalorexpressionContext logicalorexpression() {
			return getRuleContext(LogicalorexpressionContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public AssignmentexpressionContext assignmentexpression() {
			return getRuleContext(AssignmentexpressionContext.class,0);
		}
		public ConditionalexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditionalexpression; }
	}

	public final ConditionalexpressionContext conditionalexpression() throws RecognitionException {
		ConditionalexpressionContext _localctx = new ConditionalexpressionContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_conditionalexpression);
		try {
			setState(1043);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,75,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1036);
				logicalorexpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1037);
				logicalorexpression(0);
				setState(1038);
				match(Question);
				setState(1039);
				expression(0);
				setState(1040);
				match(Colon);
				setState(1041);
				assignmentexpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentexpressionContext extends ParserRuleContext {
		public PmexpressionContext pmexpression() {
			return getRuleContext(PmexpressionContext.class,0);
		}
		public CastexpressionContext castexpression() {
			return getRuleContext(CastexpressionContext.class,0);
		}
		public LogicalorexpressionContext logicalorexpression() {
			return getRuleContext(LogicalorexpressionContext.class,0);
		}
		public AssignmentoperatorContext assignmentoperator() {
			return getRuleContext(AssignmentoperatorContext.class,0);
		}
		public ThrowexpressionContext throwexpression() {
			return getRuleContext(ThrowexpressionContext.class,0);
		}
		public AssignmentexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentexpression; }
	}

	public final AssignmentexpressionContext assignmentexpression() throws RecognitionException {
		AssignmentexpressionContext _localctx = new AssignmentexpressionContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_assignmentexpression);
		try {
			setState(1052);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1045);
				pmexpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1046);
				castexpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1047);
				logicalorexpression(0);
				setState(1048);
				assignmentoperator();
				setState(1049);
				pmexpression(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1051);
				throwexpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentoperatorContext extends ParserRuleContext {
		public TerminalNode RightShiftAssign() { return getToken(AergiaCpp14Parser.RightShiftAssign, 0); }
		public TerminalNode LeftShiftAssign() { return getToken(AergiaCpp14Parser.LeftShiftAssign, 0); }
		public AssignmentoperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentoperator; }
	}

	public final AssignmentoperatorContext assignmentoperator() throws RecognitionException {
		AssignmentoperatorContext _localctx = new AssignmentoperatorContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_assignmentoperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1054);
			_la = _input.LA(1);
			if ( !(((((_la - 110)) & ~0x3f) == 0 && ((1L << (_la - 110)) & ((1L << (Assign - 110)) | (1L << (PlusAssign - 110)) | (1L << (MinusAssign - 110)) | (1L << (StarAssign - 110)) | (1L << (DivAssign - 110)) | (1L << (ModAssign - 110)) | (1L << (XorAssign - 110)) | (1L << (AndAssign - 110)) | (1L << (OrAssign - 110)) | (1L << (LeftShiftAssign - 110)) | (1L << (RightShiftAssign - 110)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public AssignmentexpressionContext assignmentexpression() {
			return getRuleContext(AssignmentexpressionContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 114;
		enterRecursionRule(_localctx, 114, RULE_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1057);
			assignmentexpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(1064);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expression);
					setState(1059);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1060);
					match(Comma);
					setState(1061);
					assignmentexpression();
					}
					} 
				}
				setState(1066);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ConstantexpressionContext extends ParserRuleContext {
		public ConditionalexpressionContext conditionalexpression() {
			return getRuleContext(ConditionalexpressionContext.class,0);
		}
		public ConstantexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constantexpression; }
	}

	public final ConstantexpressionContext constantexpression() throws RecognitionException {
		ConstantexpressionContext _localctx = new ConstantexpressionContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_constantexpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1067);
			conditionalexpression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public LabeledstatementContext labeledstatement() {
			return getRuleContext(LabeledstatementContext.class,0);
		}
		public ExpressionstatementContext expressionstatement() {
			return getRuleContext(ExpressionstatementContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public CompoundstatementContext compoundstatement() {
			return getRuleContext(CompoundstatementContext.class,0);
		}
		public SelectionstatementContext selectionstatement() {
			return getRuleContext(SelectionstatementContext.class,0);
		}
		public IterationstatementContext iterationstatement() {
			return getRuleContext(IterationstatementContext.class,0);
		}
		public JumpstatementContext jumpstatement() {
			return getRuleContext(JumpstatementContext.class,0);
		}
		public DeclarationstatementContext declarationstatement() {
			return getRuleContext(DeclarationstatementContext.class,0);
		}
		public AergiaexpressionContext aergiaexpression() {
			return getRuleContext(AergiaexpressionContext.class,0);
		}
		public ForeachContext foreach() {
			return getRuleContext(ForeachContext.class,0);
		}
		public TryblockContext tryblock() {
			return getRuleContext(TryblockContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_statement);
		int _la;
		try {
			setState(1097);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1069);
				labeledstatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1071);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
				case 1:
					{
					setState(1070);
					attributespecifierseq(0);
					}
					break;
				}
				setState(1073);
				expressionstatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1075);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1074);
					attributespecifierseq(0);
					}
				}

				setState(1077);
				compoundstatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1079);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1078);
					attributespecifierseq(0);
					}
				}

				setState(1081);
				selectionstatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1083);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1082);
					attributespecifierseq(0);
					}
				}

				setState(1085);
				iterationstatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1087);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1086);
					attributespecifierseq(0);
					}
				}

				setState(1089);
				jumpstatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1090);
				declarationstatement();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1091);
				aergiaexpression();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1092);
				foreach();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1094);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1093);
					attributespecifierseq(0);
					}
				}

				setState(1096);
				tryblock();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LabeledstatementContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public TerminalNode Case() { return getToken(AergiaCpp14Parser.Case, 0); }
		public ConstantexpressionContext constantexpression() {
			return getRuleContext(ConstantexpressionContext.class,0);
		}
		public TerminalNode Default() { return getToken(AergiaCpp14Parser.Default, 0); }
		public LabeledstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_labeledstatement; }
	}

	public final LabeledstatementContext labeledstatement() throws RecognitionException {
		LabeledstatementContext _localctx = new LabeledstatementContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_labeledstatement);
		int _la;
		try {
			setState(1119);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,88,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1100);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1099);
					attributespecifierseq(0);
					}
				}

				setState(1102);
				match(Identifier);
				setState(1103);
				match(Colon);
				setState(1104);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1106);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1105);
					attributespecifierseq(0);
					}
				}

				setState(1108);
				match(Case);
				setState(1109);
				constantexpression();
				setState(1110);
				match(Colon);
				setState(1111);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1114);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1113);
					attributespecifierseq(0);
					}
				}

				setState(1116);
				match(Default);
				setState(1117);
				match(Colon);
				setState(1118);
				statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionstatementContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExpressionstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionstatement; }
	}

	public final ExpressionstatementContext expressionstatement() throws RecognitionException {
		ExpressionstatementContext _localctx = new ExpressionstatementContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_expressionstatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1122);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
				{
				setState(1121);
				expression(0);
				}
			}

			setState(1124);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CompoundstatementContext extends ParserRuleContext {
		public StatementseqContext statementseq() {
			return getRuleContext(StatementseqContext.class,0);
		}
		public CompoundstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoundstatement; }
	}

	public final CompoundstatementContext compoundstatement() throws RecognitionException {
		CompoundstatementContext _localctx = new CompoundstatementContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_compoundstatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1126);
			match(LeftBrace);
			setState(1128);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__5) | (1L << T__6) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << Encodingprefix) | (1L << Alignas) | (1L << Alignof) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Const_cast) | (1L << Continue) | (1L << Decltype) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << Dynamic_cast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << Goto) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Register - 66)) | (1L << (Reinterpret_cast - 66)) | (1L << (Return - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static - 66)) | (1L << (Static_assert - 66)) | (1L << (Static_cast - 66)) | (1L << (Struct - 66)) | (1L << (Switch - 66)) | (1L << (This - 66)) | (1L << (Thread_local - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Try - 66)) | (1L << (Typedef - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Using - 66)) | (1L << (Virtual - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (While - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (LeftBrace - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Semi - 131)) | (1L << (Ellipsis - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
				{
				setState(1127);
				statementseq(0);
				}
			}

			setState(1130);
			match(RightBrace);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementseqContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public StatementseqContext statementseq() {
			return getRuleContext(StatementseqContext.class,0);
		}
		public StatementseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statementseq; }
	}

	public final StatementseqContext statementseq() throws RecognitionException {
		return statementseq(0);
	}

	private StatementseqContext statementseq(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		StatementseqContext _localctx = new StatementseqContext(_ctx, _parentState);
		StatementseqContext _prevctx = _localctx;
		int _startState = 126;
		enterRecursionRule(_localctx, 126, RULE_statementseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1133);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(1139);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,91,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StatementseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_statementseq);
					setState(1135);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1136);
					statement();
					}
					} 
				}
				setState(1141);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,91,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class SelectionstatementContext extends ParserRuleContext {
		public TerminalNode If() { return getToken(AergiaCpp14Parser.If, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public TerminalNode Else() { return getToken(AergiaCpp14Parser.Else, 0); }
		public TerminalNode Switch() { return getToken(AergiaCpp14Parser.Switch, 0); }
		public SelectionstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectionstatement; }
	}

	public final SelectionstatementContext selectionstatement() throws RecognitionException {
		SelectionstatementContext _localctx = new SelectionstatementContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_selectionstatement);
		try {
			setState(1162);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1142);
				match(If);
				setState(1143);
				match(LeftParen);
				setState(1144);
				condition();
				setState(1145);
				match(RightParen);
				setState(1146);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1148);
				match(If);
				setState(1149);
				match(LeftParen);
				setState(1150);
				condition();
				setState(1151);
				match(RightParen);
				setState(1152);
				statement();
				setState(1153);
				match(Else);
				setState(1154);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1156);
				match(Switch);
				setState(1157);
				match(LeftParen);
				setState(1158);
				condition();
				setState(1159);
				match(RightParen);
				setState(1160);
				statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public DeclspecifierseqContext declspecifierseq() {
			return getRuleContext(DeclspecifierseqContext.class,0);
		}
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public InitializerclauseContext initializerclause() {
			return getRuleContext(InitializerclauseContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public BracedinitlistContext bracedinitlist() {
			return getRuleContext(BracedinitlistContext.class,0);
		}
		public ConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition; }
	}

	public final ConditionContext condition() throws RecognitionException {
		ConditionContext _localctx = new ConditionContext(_ctx, getState());
		enterRule(_localctx, 130, RULE_condition);
		int _la;
		try {
			setState(1180);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,95,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1164);
				expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1166);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1165);
					attributespecifierseq(0);
					}
				}

				setState(1168);
				declspecifierseq();
				setState(1169);
				declarator();
				setState(1170);
				match(Assign);
				setState(1171);
				initializerclause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1174);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1173);
					attributespecifierseq(0);
					}
				}

				setState(1176);
				declspecifierseq();
				setState(1177);
				declarator();
				setState(1178);
				bracedinitlist();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IterationstatementContext extends ParserRuleContext {
		public TerminalNode While() { return getToken(AergiaCpp14Parser.While, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public TerminalNode Do() { return getToken(AergiaCpp14Parser.Do, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode For() { return getToken(AergiaCpp14Parser.For, 0); }
		public ForinitstatementContext forinitstatement() {
			return getRuleContext(ForinitstatementContext.class,0);
		}
		public ForrangedeclarationContext forrangedeclaration() {
			return getRuleContext(ForrangedeclarationContext.class,0);
		}
		public ForrangeinitializerContext forrangeinitializer() {
			return getRuleContext(ForrangeinitializerContext.class,0);
		}
		public IterationstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_iterationstatement; }
	}

	public final IterationstatementContext iterationstatement() throws RecognitionException {
		IterationstatementContext _localctx = new IterationstatementContext(_ctx, getState());
		enterRule(_localctx, 132, RULE_iterationstatement);
		int _la;
		try {
			setState(1217);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,98,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1182);
				match(While);
				setState(1183);
				match(LeftParen);
				setState(1184);
				condition();
				setState(1185);
				match(RightParen);
				setState(1186);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1188);
				match(Do);
				setState(1189);
				statement();
				setState(1190);
				match(While);
				setState(1191);
				match(LeftParen);
				setState(1192);
				expression(0);
				setState(1193);
				match(RightParen);
				setState(1194);
				match(Semi);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1196);
				match(For);
				setState(1197);
				match(LeftParen);
				setState(1198);
				forinitstatement();
				setState(1200);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignas) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Register - 66)) | (1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static - 66)) | (1L << (Static_cast - 66)) | (1L << (Struct - 66)) | (1L << (This - 66)) | (1L << (Thread_local - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Typedef - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Virtual - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(1199);
					condition();
					}
				}

				setState(1202);
				match(Semi);
				setState(1204);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(1203);
					expression(0);
					}
				}

				setState(1206);
				match(RightParen);
				setState(1207);
				statement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1209);
				match(For);
				setState(1210);
				match(LeftParen);
				setState(1211);
				forrangedeclaration();
				setState(1212);
				match(Colon);
				setState(1213);
				forrangeinitializer();
				setState(1214);
				match(RightParen);
				setState(1215);
				statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForinitstatementContext extends ParserRuleContext {
		public ExpressionstatementContext expressionstatement() {
			return getRuleContext(ExpressionstatementContext.class,0);
		}
		public SimpledeclarationContext simpledeclaration() {
			return getRuleContext(SimpledeclarationContext.class,0);
		}
		public ForinitstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forinitstatement; }
	}

	public final ForinitstatementContext forinitstatement() throws RecognitionException {
		ForinitstatementContext _localctx = new ForinitstatementContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_forinitstatement);
		try {
			setState(1221);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,99,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1219);
				expressionstatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1220);
				simpledeclaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForrangedeclarationContext extends ParserRuleContext {
		public DeclspecifierseqContext declspecifierseq() {
			return getRuleContext(DeclspecifierseqContext.class,0);
		}
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public ForrangedeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forrangedeclaration; }
	}

	public final ForrangedeclarationContext forrangedeclaration() throws RecognitionException {
		ForrangedeclarationContext _localctx = new ForrangedeclarationContext(_ctx, getState());
		enterRule(_localctx, 136, RULE_forrangedeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1224);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1223);
				attributespecifierseq(0);
				}
			}

			setState(1226);
			declspecifierseq();
			setState(1227);
			declarator();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForrangeinitializerContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public BracedinitlistContext bracedinitlist() {
			return getRuleContext(BracedinitlistContext.class,0);
		}
		public ForrangeinitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forrangeinitializer; }
	}

	public final ForrangeinitializerContext forrangeinitializer() throws RecognitionException {
		ForrangeinitializerContext _localctx = new ForrangeinitializerContext(_ctx, getState());
		enterRule(_localctx, 138, RULE_forrangeinitializer);
		try {
			setState(1231);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__5:
			case T__9:
			case T__10:
			case Encodingprefix:
			case Alignof:
			case Auto:
			case Bool:
			case Char:
			case Char16:
			case Char32:
			case Const_cast:
			case Decltype:
			case Delete:
			case Double:
			case Dynamic_cast:
			case False:
			case Float:
			case Int:
			case Long:
			case New:
			case Noexcept:
			case Nullptr:
			case Operator:
			case Reinterpret_cast:
			case Short:
			case Signed:
			case Sizeof:
			case Static_cast:
			case This:
			case Throw:
			case True:
			case Typeid_:
			case Typename_:
			case Unsigned:
			case Void:
			case Wchar:
			case LeftParen:
			case LeftBracket:
			case Plus:
			case Minus:
			case Star:
			case And:
			case Or:
			case Tilde:
			case PlusPlus:
			case MinusMinus:
			case Doublecolon:
			case Identifier:
			case Integerliteral:
			case Characterliteral:
			case Floatingliteral:
			case Stringliteral:
			case Userdefinedintegerliteral:
			case Userdefinedfloatingliteral:
			case Userdefinedstringliteral:
			case Userdefinedcharacterliteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(1229);
				expression(0);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(1230);
				bracedinitlist();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class JumpstatementContext extends ParserRuleContext {
		public TerminalNode Break() { return getToken(AergiaCpp14Parser.Break, 0); }
		public TerminalNode Continue() { return getToken(AergiaCpp14Parser.Continue, 0); }
		public TerminalNode Return() { return getToken(AergiaCpp14Parser.Return, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public BracedinitlistContext bracedinitlist() {
			return getRuleContext(BracedinitlistContext.class,0);
		}
		public TerminalNode Goto() { return getToken(AergiaCpp14Parser.Goto, 0); }
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public JumpstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_jumpstatement; }
	}

	public final JumpstatementContext jumpstatement() throws RecognitionException {
		JumpstatementContext _localctx = new JumpstatementContext(_ctx, getState());
		enterRule(_localctx, 140, RULE_jumpstatement);
		int _la;
		try {
			setState(1249);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,103,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1233);
				match(Break);
				setState(1234);
				match(Semi);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1235);
				match(Continue);
				setState(1236);
				match(Semi);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1237);
				match(Return);
				setState(1239);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(1238);
					expression(0);
					}
				}

				setState(1241);
				match(Semi);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1242);
				match(Return);
				setState(1243);
				bracedinitlist();
				setState(1244);
				match(Semi);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1246);
				match(Goto);
				setState(1247);
				match(Identifier);
				setState(1248);
				match(Semi);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationstatementContext extends ParserRuleContext {
		public BlockdeclarationContext blockdeclaration() {
			return getRuleContext(BlockdeclarationContext.class,0);
		}
		public DeclarationstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationstatement; }
	}

	public final DeclarationstatementContext declarationstatement() throws RecognitionException {
		DeclarationstatementContext _localctx = new DeclarationstatementContext(_ctx, getState());
		enterRule(_localctx, 142, RULE_declarationstatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1251);
			blockdeclaration();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationseqContext extends ParserRuleContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public DeclarationseqContext declarationseq() {
			return getRuleContext(DeclarationseqContext.class,0);
		}
		public DeclarationseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationseq; }
	}

	public final DeclarationseqContext declarationseq() throws RecognitionException {
		return declarationseq(0);
	}

	private DeclarationseqContext declarationseq(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		DeclarationseqContext _localctx = new DeclarationseqContext(_ctx, _parentState);
		DeclarationseqContext _prevctx = _localctx;
		int _startState = 144;
		enterRecursionRule(_localctx, 144, RULE_declarationseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1254);
			declaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1260);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,104,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new DeclarationseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_declarationseq);
					setState(1256);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1257);
					declaration();
					}
					} 
				}
				setState(1262);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,104,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class DeclarationContext extends ParserRuleContext {
		public BlockdeclarationContext blockdeclaration() {
			return getRuleContext(BlockdeclarationContext.class,0);
		}
		public FunctiondefinitionContext functiondefinition() {
			return getRuleContext(FunctiondefinitionContext.class,0);
		}
		public TemplatedeclarationContext templatedeclaration() {
			return getRuleContext(TemplatedeclarationContext.class,0);
		}
		public ExplicitinstantiationContext explicitinstantiation() {
			return getRuleContext(ExplicitinstantiationContext.class,0);
		}
		public ExplicitspecializationContext explicitspecialization() {
			return getRuleContext(ExplicitspecializationContext.class,0);
		}
		public LinkagespecificationContext linkagespecification() {
			return getRuleContext(LinkagespecificationContext.class,0);
		}
		public NamespacedefinitionContext namespacedefinition() {
			return getRuleContext(NamespacedefinitionContext.class,0);
		}
		public EmptydeclarationContext emptydeclaration() {
			return getRuleContext(EmptydeclarationContext.class,0);
		}
		public AttributedeclarationContext attributedeclaration() {
			return getRuleContext(AttributedeclarationContext.class,0);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 146, RULE_declaration);
		try {
			setState(1272);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,105,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1263);
				blockdeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1264);
				functiondefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1265);
				templatedeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1266);
				explicitinstantiation();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1267);
				explicitspecialization();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1268);
				linkagespecification();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1269);
				namespacedefinition();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1270);
				emptydeclaration();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1271);
				attributedeclaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockdeclarationContext extends ParserRuleContext {
		public SimpledeclarationContext simpledeclaration() {
			return getRuleContext(SimpledeclarationContext.class,0);
		}
		public AsmdefinitionContext asmdefinition() {
			return getRuleContext(AsmdefinitionContext.class,0);
		}
		public NamespacealiasdefinitionContext namespacealiasdefinition() {
			return getRuleContext(NamespacealiasdefinitionContext.class,0);
		}
		public UsingdeclarationContext usingdeclaration() {
			return getRuleContext(UsingdeclarationContext.class,0);
		}
		public UsingdirectiveContext usingdirective() {
			return getRuleContext(UsingdirectiveContext.class,0);
		}
		public Static_assertdeclarationContext static_assertdeclaration() {
			return getRuleContext(Static_assertdeclarationContext.class,0);
		}
		public AliasdeclarationContext aliasdeclaration() {
			return getRuleContext(AliasdeclarationContext.class,0);
		}
		public OpaqueenumdeclarationContext opaqueenumdeclaration() {
			return getRuleContext(OpaqueenumdeclarationContext.class,0);
		}
		public BlockdeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockdeclaration; }
	}

	public final BlockdeclarationContext blockdeclaration() throws RecognitionException {
		BlockdeclarationContext _localctx = new BlockdeclarationContext(_ctx, getState());
		enterRule(_localctx, 148, RULE_blockdeclaration);
		try {
			setState(1282);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,106,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1274);
				simpledeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1275);
				asmdefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1276);
				namespacealiasdefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1277);
				usingdeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1278);
				usingdirective();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1279);
				static_assertdeclaration();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1280);
				aliasdeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1281);
				opaqueenumdeclaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AliasdeclarationContext extends ParserRuleContext {
		public TerminalNode Using() { return getToken(AergiaCpp14Parser.Using, 0); }
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public ThetypeidContext thetypeid() {
			return getRuleContext(ThetypeidContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public AliasdeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_aliasdeclaration; }
	}

	public final AliasdeclarationContext aliasdeclaration() throws RecognitionException {
		AliasdeclarationContext _localctx = new AliasdeclarationContext(_ctx, getState());
		enterRule(_localctx, 150, RULE_aliasdeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1284);
			match(Using);
			setState(1285);
			match(Identifier);
			setState(1287);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1286);
				attributespecifierseq(0);
				}
			}

			setState(1289);
			match(Assign);
			setState(1290);
			thetypeid();
			setState(1291);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpledeclarationContext extends ParserRuleContext {
		public DeclspecifierseqContext declspecifierseq() {
			return getRuleContext(DeclspecifierseqContext.class,0);
		}
		public InitdeclaratorlistContext initdeclaratorlist() {
			return getRuleContext(InitdeclaratorlistContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public SimpledeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpledeclaration; }
	}

	public final SimpledeclarationContext simpledeclaration() throws RecognitionException {
		SimpledeclarationContext _localctx = new SimpledeclarationContext(_ctx, getState());
		enterRule(_localctx, 152, RULE_simpledeclaration);
		int _la;
		try {
			setState(1307);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__11:
			case Auto:
			case Bool:
			case Char:
			case Char16:
			case Char32:
			case Class:
			case Const:
			case Constexpr:
			case Decltype:
			case Double:
			case Enum:
			case Explicit:
			case Extern:
			case Float:
			case Friend:
			case Inline:
			case Int:
			case Long:
			case Mutable:
			case Operator:
			case Register:
			case Short:
			case Signed:
			case Static:
			case Struct:
			case Thread_local:
			case Typedef:
			case Typename_:
			case Union:
			case Unsigned:
			case Virtual:
			case Void:
			case Volatile:
			case Wchar:
			case LeftParen:
			case Star:
			case And:
			case Tilde:
			case Doublecolon:
			case Semi:
			case Ellipsis:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(1294);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,108,_ctx) ) {
				case 1:
					{
					setState(1293);
					declspecifierseq();
					}
					break;
				}
				setState(1297);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Decltype) | (1L << Operator))) != 0) || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (LeftParen - 94)) | (1L << (Star - 94)) | (1L << (And - 94)) | (1L << (Tilde - 94)) | (1L << (Doublecolon - 94)) | (1L << (Ellipsis - 94)) | (1L << (Identifier - 94)))) != 0)) {
					{
					setState(1296);
					initdeclaratorlist(0);
					}
				}

				setState(1299);
				match(Semi);
				}
				break;
			case Alignas:
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1300);
				attributespecifierseq(0);
				setState(1302);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,110,_ctx) ) {
				case 1:
					{
					setState(1301);
					declspecifierseq();
					}
					break;
				}
				setState(1304);
				initdeclaratorlist(0);
				setState(1305);
				match(Semi);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Static_assertdeclarationContext extends ParserRuleContext {
		public TerminalNode Static_assert() { return getToken(AergiaCpp14Parser.Static_assert, 0); }
		public ConstantexpressionContext constantexpression() {
			return getRuleContext(ConstantexpressionContext.class,0);
		}
		public TerminalNode Stringliteral() { return getToken(AergiaCpp14Parser.Stringliteral, 0); }
		public AergiastringContext aergiastring() {
			return getRuleContext(AergiastringContext.class,0);
		}
		public Static_assertdeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_static_assertdeclaration; }
	}

	public final Static_assertdeclarationContext static_assertdeclaration() throws RecognitionException {
		Static_assertdeclarationContext _localctx = new Static_assertdeclarationContext(_ctx, getState());
		enterRule(_localctx, 154, RULE_static_assertdeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1309);
			match(Static_assert);
			setState(1310);
			match(LeftParen);
			setState(1311);
			constantexpression();
			setState(1312);
			match(Comma);
			setState(1315);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Stringliteral:
				{
				setState(1313);
				match(Stringliteral);
				}
				break;
			case T__5:
			case Encodingprefix:
				{
				setState(1314);
				aergiastring();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(1317);
			match(RightParen);
			setState(1318);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EmptydeclarationContext extends ParserRuleContext {
		public EmptydeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_emptydeclaration; }
	}

	public final EmptydeclarationContext emptydeclaration() throws RecognitionException {
		EmptydeclarationContext _localctx = new EmptydeclarationContext(_ctx, getState());
		enterRule(_localctx, 156, RULE_emptydeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1320);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributedeclarationContext extends ParserRuleContext {
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public AttributedeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributedeclaration; }
	}

	public final AttributedeclarationContext attributedeclaration() throws RecognitionException {
		AttributedeclarationContext _localctx = new AttributedeclarationContext(_ctx, getState());
		enterRule(_localctx, 158, RULE_attributedeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1322);
			attributespecifierseq(0);
			setState(1323);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclspecifierContext extends ParserRuleContext {
		public StorageclassspecifierContext storageclassspecifier() {
			return getRuleContext(StorageclassspecifierContext.class,0);
		}
		public TypespecifierContext typespecifier() {
			return getRuleContext(TypespecifierContext.class,0);
		}
		public FunctionspecifierContext functionspecifier() {
			return getRuleContext(FunctionspecifierContext.class,0);
		}
		public TerminalNode Friend() { return getToken(AergiaCpp14Parser.Friend, 0); }
		public TerminalNode Typedef() { return getToken(AergiaCpp14Parser.Typedef, 0); }
		public TerminalNode Constexpr() { return getToken(AergiaCpp14Parser.Constexpr, 0); }
		public DeclspecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declspecifier; }
	}

	public final DeclspecifierContext declspecifier() throws RecognitionException {
		DeclspecifierContext _localctx = new DeclspecifierContext(_ctx, getState());
		enterRule(_localctx, 160, RULE_declspecifier);
		try {
			setState(1331);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Extern:
			case Mutable:
			case Register:
			case Static:
			case Thread_local:
				enterOuterAlt(_localctx, 1);
				{
				setState(1325);
				storageclassspecifier();
				}
				break;
			case Auto:
			case Bool:
			case Char:
			case Char16:
			case Char32:
			case Class:
			case Const:
			case Decltype:
			case Double:
			case Enum:
			case Float:
			case Int:
			case Long:
			case Short:
			case Signed:
			case Struct:
			case Typename_:
			case Union:
			case Unsigned:
			case Void:
			case Volatile:
			case Wchar:
			case Doublecolon:
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(1326);
				typespecifier();
				}
				break;
			case Explicit:
			case Inline:
			case Virtual:
				enterOuterAlt(_localctx, 3);
				{
				setState(1327);
				functionspecifier();
				}
				break;
			case Friend:
				enterOuterAlt(_localctx, 4);
				{
				setState(1328);
				match(Friend);
				}
				break;
			case Typedef:
				enterOuterAlt(_localctx, 5);
				{
				setState(1329);
				match(Typedef);
				}
				break;
			case Constexpr:
				enterOuterAlt(_localctx, 6);
				{
				setState(1330);
				match(Constexpr);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclspecifierseqContext extends ParserRuleContext {
		public DeclspecifierContext declspecifier() {
			return getRuleContext(DeclspecifierContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public DeclspecifierseqContext declspecifierseq() {
			return getRuleContext(DeclspecifierseqContext.class,0);
		}
		public DeclspecifierseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declspecifierseq; }
	}

	public final DeclspecifierseqContext declspecifierseq() throws RecognitionException {
		DeclspecifierseqContext _localctx = new DeclspecifierseqContext(_ctx, getState());
		enterRule(_localctx, 162, RULE_declspecifierseq);
		try {
			setState(1340);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,115,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1333);
				declspecifier();
				setState(1335);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,114,_ctx) ) {
				case 1:
					{
					setState(1334);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1337);
				declspecifier();
				setState(1338);
				declspecifierseq();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StorageclassspecifierContext extends ParserRuleContext {
		public TerminalNode Register() { return getToken(AergiaCpp14Parser.Register, 0); }
		public TerminalNode Static() { return getToken(AergiaCpp14Parser.Static, 0); }
		public TerminalNode Thread_local() { return getToken(AergiaCpp14Parser.Thread_local, 0); }
		public TerminalNode Extern() { return getToken(AergiaCpp14Parser.Extern, 0); }
		public TerminalNode Mutable() { return getToken(AergiaCpp14Parser.Mutable, 0); }
		public StorageclassspecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_storageclassspecifier; }
	}

	public final StorageclassspecifierContext storageclassspecifier() throws RecognitionException {
		StorageclassspecifierContext _localctx = new StorageclassspecifierContext(_ctx, getState());
		enterRule(_localctx, 164, RULE_storageclassspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1342);
			_la = _input.LA(1);
			if ( !(((((_la - 45)) & ~0x3f) == 0 && ((1L << (_la - 45)) & ((1L << (Extern - 45)) | (1L << (Mutable - 45)) | (1L << (Register - 45)) | (1L << (Static - 45)) | (1L << (Thread_local - 45)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionspecifierContext extends ParserRuleContext {
		public TerminalNode Inline() { return getToken(AergiaCpp14Parser.Inline, 0); }
		public TerminalNode Virtual() { return getToken(AergiaCpp14Parser.Virtual, 0); }
		public TerminalNode Explicit() { return getToken(AergiaCpp14Parser.Explicit, 0); }
		public FunctionspecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionspecifier; }
	}

	public final FunctionspecifierContext functionspecifier() throws RecognitionException {
		FunctionspecifierContext _localctx = new FunctionspecifierContext(_ctx, getState());
		enterRule(_localctx, 166, RULE_functionspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1344);
			_la = _input.LA(1);
			if ( !(((((_la - 43)) & ~0x3f) == 0 && ((1L << (_la - 43)) & ((1L << (Explicit - 43)) | (1L << (Inline - 43)) | (1L << (Virtual - 43)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypedefnameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public TypedefnameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typedefname; }
	}

	public final TypedefnameContext typedefname() throws RecognitionException {
		TypedefnameContext _localctx = new TypedefnameContext(_ctx, getState());
		enterRule(_localctx, 168, RULE_typedefname);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1346);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypespecifierContext extends ParserRuleContext {
		public TrailingtypespecifierContext trailingtypespecifier() {
			return getRuleContext(TrailingtypespecifierContext.class,0);
		}
		public ClassspecifierContext classspecifier() {
			return getRuleContext(ClassspecifierContext.class,0);
		}
		public EnumspecifierContext enumspecifier() {
			return getRuleContext(EnumspecifierContext.class,0);
		}
		public TypespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typespecifier; }
	}

	public final TypespecifierContext typespecifier() throws RecognitionException {
		TypespecifierContext _localctx = new TypespecifierContext(_ctx, getState());
		enterRule(_localctx, 170, RULE_typespecifier);
		try {
			setState(1351);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,116,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1348);
				trailingtypespecifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1349);
				classspecifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1350);
				enumspecifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TrailingtypespecifierContext extends ParserRuleContext {
		public SimpletypespecifierContext simpletypespecifier() {
			return getRuleContext(SimpletypespecifierContext.class,0);
		}
		public ElaboratedtypespecifierContext elaboratedtypespecifier() {
			return getRuleContext(ElaboratedtypespecifierContext.class,0);
		}
		public TypenamespecifierContext typenamespecifier() {
			return getRuleContext(TypenamespecifierContext.class,0);
		}
		public CvqualifierContext cvqualifier() {
			return getRuleContext(CvqualifierContext.class,0);
		}
		public TrailingtypespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trailingtypespecifier; }
	}

	public final TrailingtypespecifierContext trailingtypespecifier() throws RecognitionException {
		TrailingtypespecifierContext _localctx = new TrailingtypespecifierContext(_ctx, getState());
		enterRule(_localctx, 172, RULE_trailingtypespecifier);
		try {
			setState(1357);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Auto:
			case Bool:
			case Char:
			case Char16:
			case Char32:
			case Decltype:
			case Double:
			case Float:
			case Int:
			case Long:
			case Short:
			case Signed:
			case Unsigned:
			case Void:
			case Wchar:
			case Doublecolon:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(1353);
				simpletypespecifier();
				}
				break;
			case Class:
			case Enum:
			case Struct:
			case Union:
				enterOuterAlt(_localctx, 2);
				{
				setState(1354);
				elaboratedtypespecifier();
				}
				break;
			case Typename_:
				enterOuterAlt(_localctx, 3);
				{
				setState(1355);
				typenamespecifier();
				}
				break;
			case Const:
			case Volatile:
				enterOuterAlt(_localctx, 4);
				{
				setState(1356);
				cvqualifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypespecifierseqContext extends ParserRuleContext {
		public TypespecifierContext typespecifier() {
			return getRuleContext(TypespecifierContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public TypespecifierseqContext typespecifierseq() {
			return getRuleContext(TypespecifierseqContext.class,0);
		}
		public TypespecifierseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typespecifierseq; }
	}

	public final TypespecifierseqContext typespecifierseq() throws RecognitionException {
		TypespecifierseqContext _localctx = new TypespecifierseqContext(_ctx, getState());
		enterRule(_localctx, 174, RULE_typespecifierseq);
		try {
			setState(1366);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,119,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1359);
				typespecifier();
				setState(1361);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,118,_ctx) ) {
				case 1:
					{
					setState(1360);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1363);
				typespecifier();
				setState(1364);
				typespecifierseq();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TrailingtypespecifierseqContext extends ParserRuleContext {
		public TrailingtypespecifierContext trailingtypespecifier() {
			return getRuleContext(TrailingtypespecifierContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public TrailingtypespecifierseqContext trailingtypespecifierseq() {
			return getRuleContext(TrailingtypespecifierseqContext.class,0);
		}
		public TrailingtypespecifierseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trailingtypespecifierseq; }
	}

	public final TrailingtypespecifierseqContext trailingtypespecifierseq() throws RecognitionException {
		TrailingtypespecifierseqContext _localctx = new TrailingtypespecifierseqContext(_ctx, getState());
		enterRule(_localctx, 176, RULE_trailingtypespecifierseq);
		try {
			setState(1375);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,121,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1368);
				trailingtypespecifier();
				setState(1370);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,120,_ctx) ) {
				case 1:
					{
					setState(1369);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1372);
				trailingtypespecifier();
				setState(1373);
				trailingtypespecifierseq();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpletypespecifierContext extends ParserRuleContext {
		public ThetypenameContext thetypename() {
			return getRuleContext(ThetypenameContext.class,0);
		}
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public TerminalNode Template() { return getToken(AergiaCpp14Parser.Template, 0); }
		public SimpletemplateidContext simpletemplateid() {
			return getRuleContext(SimpletemplateidContext.class,0);
		}
		public TerminalNode Char() { return getToken(AergiaCpp14Parser.Char, 0); }
		public TerminalNode Char16() { return getToken(AergiaCpp14Parser.Char16, 0); }
		public TerminalNode Char32() { return getToken(AergiaCpp14Parser.Char32, 0); }
		public TerminalNode Wchar() { return getToken(AergiaCpp14Parser.Wchar, 0); }
		public TerminalNode Bool() { return getToken(AergiaCpp14Parser.Bool, 0); }
		public TerminalNode Short() { return getToken(AergiaCpp14Parser.Short, 0); }
		public TerminalNode Int() { return getToken(AergiaCpp14Parser.Int, 0); }
		public TerminalNode Long() { return getToken(AergiaCpp14Parser.Long, 0); }
		public TerminalNode Signed() { return getToken(AergiaCpp14Parser.Signed, 0); }
		public TerminalNode Unsigned() { return getToken(AergiaCpp14Parser.Unsigned, 0); }
		public TerminalNode Float() { return getToken(AergiaCpp14Parser.Float, 0); }
		public TerminalNode Double() { return getToken(AergiaCpp14Parser.Double, 0); }
		public TerminalNode Void() { return getToken(AergiaCpp14Parser.Void, 0); }
		public TerminalNode Auto() { return getToken(AergiaCpp14Parser.Auto, 0); }
		public DecltypespecifierContext decltypespecifier() {
			return getRuleContext(DecltypespecifierContext.class,0);
		}
		public SimpletypespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpletypespecifier; }
	}

	public final SimpletypespecifierContext simpletypespecifier() throws RecognitionException {
		SimpletypespecifierContext _localctx = new SimpletypespecifierContext(_ctx, getState());
		enterRule(_localctx, 178, RULE_simpletypespecifier);
		try {
			setState(1400);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,123,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1378);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,122,_ctx) ) {
				case 1:
					{
					setState(1377);
					nestednamespecifier(0);
					}
					break;
				}
				setState(1380);
				thetypename();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1381);
				nestednamespecifier(0);
				setState(1382);
				match(Template);
				setState(1383);
				simpletemplateid();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1385);
				match(Char);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1386);
				match(Char16);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1387);
				match(Char32);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1388);
				match(Wchar);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1389);
				match(Bool);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1390);
				match(Short);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1391);
				match(Int);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1392);
				match(Long);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1393);
				match(Signed);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(1394);
				match(Unsigned);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(1395);
				match(Float);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(1396);
				match(Double);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(1397);
				match(Void);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(1398);
				match(Auto);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(1399);
				decltypespecifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ThetypenameContext extends ParserRuleContext {
		public ClassnameContext classname() {
			return getRuleContext(ClassnameContext.class,0);
		}
		public EnumnameContext enumname() {
			return getRuleContext(EnumnameContext.class,0);
		}
		public TypedefnameContext typedefname() {
			return getRuleContext(TypedefnameContext.class,0);
		}
		public SimpletemplateidContext simpletemplateid() {
			return getRuleContext(SimpletemplateidContext.class,0);
		}
		public ThetypenameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_thetypename; }
	}

	public final ThetypenameContext thetypename() throws RecognitionException {
		ThetypenameContext _localctx = new ThetypenameContext(_ctx, getState());
		enterRule(_localctx, 180, RULE_thetypename);
		try {
			setState(1406);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,124,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1402);
				classname();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1403);
				enumname();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1404);
				typedefname();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1405);
				simpletemplateid();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DecltypespecifierContext extends ParserRuleContext {
		public TerminalNode Decltype() { return getToken(AergiaCpp14Parser.Decltype, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode Auto() { return getToken(AergiaCpp14Parser.Auto, 0); }
		public DecltypespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decltypespecifier; }
	}

	public final DecltypespecifierContext decltypespecifier() throws RecognitionException {
		DecltypespecifierContext _localctx = new DecltypespecifierContext(_ctx, getState());
		enterRule(_localctx, 182, RULE_decltypespecifier);
		try {
			setState(1417);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,125,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1408);
				match(Decltype);
				setState(1409);
				match(LeftParen);
				setState(1410);
				expression(0);
				setState(1411);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1413);
				match(Decltype);
				setState(1414);
				match(LeftParen);
				setState(1415);
				match(Auto);
				setState(1416);
				match(RightParen);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElaboratedtypespecifierContext extends ParserRuleContext {
		public ClasskeyContext classkey() {
			return getRuleContext(ClasskeyContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public SimpletemplateidContext simpletemplateid() {
			return getRuleContext(SimpletemplateidContext.class,0);
		}
		public TerminalNode Template() { return getToken(AergiaCpp14Parser.Template, 0); }
		public TerminalNode Enum() { return getToken(AergiaCpp14Parser.Enum, 0); }
		public ElaboratedtypespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elaboratedtypespecifier; }
	}

	public final ElaboratedtypespecifierContext elaboratedtypespecifier() throws RecognitionException {
		ElaboratedtypespecifierContext _localctx = new ElaboratedtypespecifierContext(_ctx, getState());
		enterRule(_localctx, 184, RULE_elaboratedtypespecifier);
		int _la;
		try {
			setState(1443);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,130,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1419);
				classkey();
				setState(1421);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1420);
					attributespecifierseq(0);
					}
				}

				setState(1424);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,127,_ctx) ) {
				case 1:
					{
					setState(1423);
					nestednamespecifier(0);
					}
					break;
				}
				setState(1426);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1428);
				classkey();
				setState(1429);
				simpletemplateid();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1431);
				classkey();
				setState(1432);
				nestednamespecifier(0);
				setState(1434);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(1433);
					match(Template);
					}
				}

				setState(1436);
				simpletemplateid();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1438);
				match(Enum);
				setState(1440);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,129,_ctx) ) {
				case 1:
					{
					setState(1439);
					nestednamespecifier(0);
					}
					break;
				}
				setState(1442);
				match(Identifier);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumnameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public EnumnameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumname; }
	}

	public final EnumnameContext enumname() throws RecognitionException {
		EnumnameContext _localctx = new EnumnameContext(_ctx, getState());
		enterRule(_localctx, 186, RULE_enumname);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1445);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumspecifierContext extends ParserRuleContext {
		public EnumheadContext enumhead() {
			return getRuleContext(EnumheadContext.class,0);
		}
		public EnumeratorlistContext enumeratorlist() {
			return getRuleContext(EnumeratorlistContext.class,0);
		}
		public EnumspecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumspecifier; }
	}

	public final EnumspecifierContext enumspecifier() throws RecognitionException {
		EnumspecifierContext _localctx = new EnumspecifierContext(_ctx, getState());
		enterRule(_localctx, 188, RULE_enumspecifier);
		int _la;
		try {
			setState(1460);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,132,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1447);
				enumhead();
				setState(1448);
				match(LeftBrace);
				setState(1450);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1449);
					enumeratorlist(0);
					}
				}

				setState(1452);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1454);
				enumhead();
				setState(1455);
				match(LeftBrace);
				setState(1456);
				enumeratorlist(0);
				setState(1457);
				match(Comma);
				setState(1458);
				match(RightBrace);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumheadContext extends ParserRuleContext {
		public EnumkeyContext enumkey() {
			return getRuleContext(EnumkeyContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public EnumbaseContext enumbase() {
			return getRuleContext(EnumbaseContext.class,0);
		}
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public EnumheadContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumhead; }
	}

	public final EnumheadContext enumhead() throws RecognitionException {
		EnumheadContext _localctx = new EnumheadContext(_ctx, getState());
		enterRule(_localctx, 190, RULE_enumhead);
		int _la;
		try {
			setState(1481);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,138,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1462);
				enumkey();
				setState(1464);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1463);
					attributespecifierseq(0);
					}
				}

				setState(1467);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1466);
					match(Identifier);
					}
				}

				setState(1470);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(1469);
					enumbase();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1472);
				enumkey();
				setState(1474);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1473);
					attributespecifierseq(0);
					}
				}

				setState(1476);
				nestednamespecifier(0);
				setState(1477);
				match(Identifier);
				setState(1479);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(1478);
					enumbase();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OpaqueenumdeclarationContext extends ParserRuleContext {
		public EnumkeyContext enumkey() {
			return getRuleContext(EnumkeyContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public EnumbaseContext enumbase() {
			return getRuleContext(EnumbaseContext.class,0);
		}
		public OpaqueenumdeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_opaqueenumdeclaration; }
	}

	public final OpaqueenumdeclarationContext opaqueenumdeclaration() throws RecognitionException {
		OpaqueenumdeclarationContext _localctx = new OpaqueenumdeclarationContext(_ctx, getState());
		enterRule(_localctx, 192, RULE_opaqueenumdeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1483);
			enumkey();
			setState(1485);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1484);
				attributespecifierseq(0);
				}
			}

			setState(1487);
			match(Identifier);
			setState(1489);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1488);
				enumbase();
				}
			}

			setState(1491);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumkeyContext extends ParserRuleContext {
		public TerminalNode Enum() { return getToken(AergiaCpp14Parser.Enum, 0); }
		public TerminalNode Class() { return getToken(AergiaCpp14Parser.Class, 0); }
		public TerminalNode Struct() { return getToken(AergiaCpp14Parser.Struct, 0); }
		public EnumkeyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumkey; }
	}

	public final EnumkeyContext enumkey() throws RecognitionException {
		EnumkeyContext _localctx = new EnumkeyContext(_ctx, getState());
		enterRule(_localctx, 194, RULE_enumkey);
		try {
			setState(1498);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,141,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1493);
				match(Enum);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1494);
				match(Enum);
				setState(1495);
				match(Class);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1496);
				match(Enum);
				setState(1497);
				match(Struct);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumbaseContext extends ParserRuleContext {
		public TypespecifierseqContext typespecifierseq() {
			return getRuleContext(TypespecifierseqContext.class,0);
		}
		public EnumbaseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumbase; }
	}

	public final EnumbaseContext enumbase() throws RecognitionException {
		EnumbaseContext _localctx = new EnumbaseContext(_ctx, getState());
		enterRule(_localctx, 196, RULE_enumbase);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1500);
			match(Colon);
			setState(1501);
			typespecifierseq();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumeratorlistContext extends ParserRuleContext {
		public EnumeratordefinitionContext enumeratordefinition() {
			return getRuleContext(EnumeratordefinitionContext.class,0);
		}
		public EnumeratorlistContext enumeratorlist() {
			return getRuleContext(EnumeratorlistContext.class,0);
		}
		public EnumeratorlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumeratorlist; }
	}

	public final EnumeratorlistContext enumeratorlist() throws RecognitionException {
		return enumeratorlist(0);
	}

	private EnumeratorlistContext enumeratorlist(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		EnumeratorlistContext _localctx = new EnumeratorlistContext(_ctx, _parentState);
		EnumeratorlistContext _prevctx = _localctx;
		int _startState = 198;
		enterRecursionRule(_localctx, 198, RULE_enumeratorlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1504);
			enumeratordefinition();
			}
			_ctx.stop = _input.LT(-1);
			setState(1511);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,142,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new EnumeratorlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_enumeratorlist);
					setState(1506);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1507);
					match(Comma);
					setState(1508);
					enumeratordefinition();
					}
					} 
				}
				setState(1513);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,142,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class EnumeratordefinitionContext extends ParserRuleContext {
		public EnumeratorContext enumerator() {
			return getRuleContext(EnumeratorContext.class,0);
		}
		public ConstantexpressionContext constantexpression() {
			return getRuleContext(ConstantexpressionContext.class,0);
		}
		public EnumeratordefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumeratordefinition; }
	}

	public final EnumeratordefinitionContext enumeratordefinition() throws RecognitionException {
		EnumeratordefinitionContext _localctx = new EnumeratordefinitionContext(_ctx, getState());
		enterRule(_localctx, 200, RULE_enumeratordefinition);
		try {
			setState(1519);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,143,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1514);
				enumerator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1515);
				enumerator();
				setState(1516);
				match(Assign);
				setState(1517);
				constantexpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumeratorContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public EnumeratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumerator; }
	}

	public final EnumeratorContext enumerator() throws RecognitionException {
		EnumeratorContext _localctx = new EnumeratorContext(_ctx, getState());
		enterRule(_localctx, 202, RULE_enumerator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1521);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamespacenameContext extends ParserRuleContext {
		public OriginalnamespacenameContext originalnamespacename() {
			return getRuleContext(OriginalnamespacenameContext.class,0);
		}
		public NamespacealiasContext namespacealias() {
			return getRuleContext(NamespacealiasContext.class,0);
		}
		public NamespacenameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespacename; }
	}

	public final NamespacenameContext namespacename() throws RecognitionException {
		NamespacenameContext _localctx = new NamespacenameContext(_ctx, getState());
		enterRule(_localctx, 204, RULE_namespacename);
		try {
			setState(1525);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,144,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1523);
				originalnamespacename();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1524);
				namespacealias();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OriginalnamespacenameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public OriginalnamespacenameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_originalnamespacename; }
	}

	public final OriginalnamespacenameContext originalnamespacename() throws RecognitionException {
		OriginalnamespacenameContext _localctx = new OriginalnamespacenameContext(_ctx, getState());
		enterRule(_localctx, 206, RULE_originalnamespacename);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1527);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamespacedefinitionContext extends ParserRuleContext {
		public NamednamespacedefinitionContext namednamespacedefinition() {
			return getRuleContext(NamednamespacedefinitionContext.class,0);
		}
		public UnnamednamespacedefinitionContext unnamednamespacedefinition() {
			return getRuleContext(UnnamednamespacedefinitionContext.class,0);
		}
		public NamespacedefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespacedefinition; }
	}

	public final NamespacedefinitionContext namespacedefinition() throws RecognitionException {
		NamespacedefinitionContext _localctx = new NamespacedefinitionContext(_ctx, getState());
		enterRule(_localctx, 208, RULE_namespacedefinition);
		try {
			setState(1531);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,145,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1529);
				namednamespacedefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1530);
				unnamednamespacedefinition();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamednamespacedefinitionContext extends ParserRuleContext {
		public OriginalnamespacedefinitionContext originalnamespacedefinition() {
			return getRuleContext(OriginalnamespacedefinitionContext.class,0);
		}
		public NamednamespacedefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namednamespacedefinition; }
	}

	public final NamednamespacedefinitionContext namednamespacedefinition() throws RecognitionException {
		NamednamespacedefinitionContext _localctx = new NamednamespacedefinitionContext(_ctx, getState());
		enterRule(_localctx, 210, RULE_namednamespacedefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1533);
			originalnamespacedefinition();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OriginalnamespacedefinitionContext extends ParserRuleContext {
		public TerminalNode Namespace() { return getToken(AergiaCpp14Parser.Namespace, 0); }
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public NamespacebodyContext namespacebody() {
			return getRuleContext(NamespacebodyContext.class,0);
		}
		public TerminalNode Inline() { return getToken(AergiaCpp14Parser.Inline, 0); }
		public OriginalnamespacedefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_originalnamespacedefinition; }
	}

	public final OriginalnamespacedefinitionContext originalnamespacedefinition() throws RecognitionException {
		OriginalnamespacedefinitionContext _localctx = new OriginalnamespacedefinitionContext(_ctx, getState());
		enterRule(_localctx, 212, RULE_originalnamespacedefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1536);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1535);
				match(Inline);
				}
			}

			setState(1538);
			match(Namespace);
			setState(1539);
			match(Identifier);
			setState(1540);
			match(LeftBrace);
			setState(1541);
			namespacebody();
			setState(1542);
			match(RightBrace);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnnamednamespacedefinitionContext extends ParserRuleContext {
		public TerminalNode Namespace() { return getToken(AergiaCpp14Parser.Namespace, 0); }
		public NamespacebodyContext namespacebody() {
			return getRuleContext(NamespacebodyContext.class,0);
		}
		public TerminalNode Inline() { return getToken(AergiaCpp14Parser.Inline, 0); }
		public UnnamednamespacedefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unnamednamespacedefinition; }
	}

	public final UnnamednamespacedefinitionContext unnamednamespacedefinition() throws RecognitionException {
		UnnamednamespacedefinitionContext _localctx = new UnnamednamespacedefinitionContext(_ctx, getState());
		enterRule(_localctx, 214, RULE_unnamednamespacedefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1545);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1544);
				match(Inline);
				}
			}

			setState(1547);
			match(Namespace);
			setState(1548);
			match(LeftBrace);
			setState(1549);
			namespacebody();
			setState(1550);
			match(RightBrace);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamespacebodyContext extends ParserRuleContext {
		public DeclarationseqContext declarationseq() {
			return getRuleContext(DeclarationseqContext.class,0);
		}
		public NamespacebodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespacebody; }
	}

	public final NamespacebodyContext namespacebody() throws RecognitionException {
		NamespacebodyContext _localctx = new NamespacebodyContext(_ctx, getState());
		enterRule(_localctx, 216, RULE_namespacebody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1553);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Register - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Static - 66)) | (1L << (Static_assert - 66)) | (1L << (Struct - 66)) | (1L << (Template - 66)) | (1L << (Thread_local - 66)) | (1L << (Typedef - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Using - 66)) | (1L << (Virtual - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Semi - 138)) | (1L << (Ellipsis - 138)) | (1L << (Identifier - 138)))) != 0)) {
				{
				setState(1552);
				declarationseq(0);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamespacealiasContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public NamespacealiasContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespacealias; }
	}

	public final NamespacealiasContext namespacealias() throws RecognitionException {
		NamespacealiasContext _localctx = new NamespacealiasContext(_ctx, getState());
		enterRule(_localctx, 218, RULE_namespacealias);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1555);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamespacealiasdefinitionContext extends ParserRuleContext {
		public TerminalNode Namespace() { return getToken(AergiaCpp14Parser.Namespace, 0); }
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public QualifiednamespacespecifierContext qualifiednamespacespecifier() {
			return getRuleContext(QualifiednamespacespecifierContext.class,0);
		}
		public NamespacealiasdefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespacealiasdefinition; }
	}

	public final NamespacealiasdefinitionContext namespacealiasdefinition() throws RecognitionException {
		NamespacealiasdefinitionContext _localctx = new NamespacealiasdefinitionContext(_ctx, getState());
		enterRule(_localctx, 220, RULE_namespacealiasdefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1557);
			match(Namespace);
			setState(1558);
			match(Identifier);
			setState(1559);
			match(Assign);
			setState(1560);
			qualifiednamespacespecifier();
			setState(1561);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QualifiednamespacespecifierContext extends ParserRuleContext {
		public NamespacenameContext namespacename() {
			return getRuleContext(NamespacenameContext.class,0);
		}
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public QualifiednamespacespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qualifiednamespacespecifier; }
	}

	public final QualifiednamespacespecifierContext qualifiednamespacespecifier() throws RecognitionException {
		QualifiednamespacespecifierContext _localctx = new QualifiednamespacespecifierContext(_ctx, getState());
		enterRule(_localctx, 222, RULE_qualifiednamespacespecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1564);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,149,_ctx) ) {
			case 1:
				{
				setState(1563);
				nestednamespecifier(0);
				}
				break;
			}
			setState(1566);
			namespacename();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UsingdeclarationContext extends ParserRuleContext {
		public TerminalNode Using() { return getToken(AergiaCpp14Parser.Using, 0); }
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public UnqualifiedidContext unqualifiedid() {
			return getRuleContext(UnqualifiedidContext.class,0);
		}
		public TerminalNode Typename_() { return getToken(AergiaCpp14Parser.Typename_, 0); }
		public UsingdeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_usingdeclaration; }
	}

	public final UsingdeclarationContext usingdeclaration() throws RecognitionException {
		UsingdeclarationContext _localctx = new UsingdeclarationContext(_ctx, getState());
		enterRule(_localctx, 224, RULE_usingdeclaration);
		int _la;
		try {
			setState(1581);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,151,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1568);
				match(Using);
				setState(1570);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Typename_) {
					{
					setState(1569);
					match(Typename_);
					}
				}

				setState(1572);
				nestednamespecifier(0);
				setState(1573);
				unqualifiedid();
				setState(1574);
				match(Semi);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1576);
				match(Using);
				setState(1577);
				match(Doublecolon);
				setState(1578);
				unqualifiedid();
				setState(1579);
				match(Semi);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UsingdirectiveContext extends ParserRuleContext {
		public TerminalNode Using() { return getToken(AergiaCpp14Parser.Using, 0); }
		public TerminalNode Namespace() { return getToken(AergiaCpp14Parser.Namespace, 0); }
		public NamespacenameContext namespacename() {
			return getRuleContext(NamespacenameContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public UsingdirectiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_usingdirective; }
	}

	public final UsingdirectiveContext usingdirective() throws RecognitionException {
		UsingdirectiveContext _localctx = new UsingdirectiveContext(_ctx, getState());
		enterRule(_localctx, 226, RULE_usingdirective);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1584);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1583);
				attributespecifierseq(0);
				}
			}

			setState(1586);
			match(Using);
			setState(1587);
			match(Namespace);
			setState(1589);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,153,_ctx) ) {
			case 1:
				{
				setState(1588);
				nestednamespecifier(0);
				}
				break;
			}
			setState(1591);
			namespacename();
			setState(1592);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AsmdefinitionContext extends ParserRuleContext {
		public TerminalNode Asm() { return getToken(AergiaCpp14Parser.Asm, 0); }
		public TerminalNode Stringliteral() { return getToken(AergiaCpp14Parser.Stringliteral, 0); }
		public AsmdefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_asmdefinition; }
	}

	public final AsmdefinitionContext asmdefinition() throws RecognitionException {
		AsmdefinitionContext _localctx = new AsmdefinitionContext(_ctx, getState());
		enterRule(_localctx, 228, RULE_asmdefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1594);
			match(Asm);
			setState(1595);
			match(LeftParen);
			setState(1596);
			match(Stringliteral);
			setState(1597);
			match(RightParen);
			setState(1598);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LinkagespecificationContext extends ParserRuleContext {
		public TerminalNode Extern() { return getToken(AergiaCpp14Parser.Extern, 0); }
		public TerminalNode Stringliteral() { return getToken(AergiaCpp14Parser.Stringliteral, 0); }
		public DeclarationseqContext declarationseq() {
			return getRuleContext(DeclarationseqContext.class,0);
		}
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public LinkagespecificationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_linkagespecification; }
	}

	public final LinkagespecificationContext linkagespecification() throws RecognitionException {
		LinkagespecificationContext _localctx = new LinkagespecificationContext(_ctx, getState());
		enterRule(_localctx, 230, RULE_linkagespecification);
		int _la;
		try {
			setState(1610);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,155,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1600);
				match(Extern);
				setState(1601);
				match(Stringliteral);
				setState(1602);
				match(LeftBrace);
				setState(1604);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Register - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Static - 66)) | (1L << (Static_assert - 66)) | (1L << (Struct - 66)) | (1L << (Template - 66)) | (1L << (Thread_local - 66)) | (1L << (Typedef - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Using - 66)) | (1L << (Virtual - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Semi - 138)) | (1L << (Ellipsis - 138)) | (1L << (Identifier - 138)))) != 0)) {
					{
					setState(1603);
					declarationseq(0);
					}
				}

				setState(1606);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1607);
				match(Extern);
				setState(1608);
				match(Stringliteral);
				setState(1609);
				declaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributespecifierseqContext extends ParserRuleContext {
		public AttributespecifierContext attributespecifier() {
			return getRuleContext(AttributespecifierContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public AttributespecifierseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributespecifierseq; }
	}

	public final AttributespecifierseqContext attributespecifierseq() throws RecognitionException {
		return attributespecifierseq(0);
	}

	private AttributespecifierseqContext attributespecifierseq(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		AttributespecifierseqContext _localctx = new AttributespecifierseqContext(_ctx, _parentState);
		AttributespecifierseqContext _prevctx = _localctx;
		int _startState = 232;
		enterRecursionRule(_localctx, 232, RULE_attributespecifierseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1613);
			attributespecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(1619);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,156,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AttributespecifierseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_attributespecifierseq);
					setState(1615);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1616);
					attributespecifier();
					}
					} 
				}
				setState(1621);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,156,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class AttributespecifierContext extends ParserRuleContext {
		public AttributelistContext attributelist() {
			return getRuleContext(AttributelistContext.class,0);
		}
		public AlignmentspecifierContext alignmentspecifier() {
			return getRuleContext(AlignmentspecifierContext.class,0);
		}
		public AttributespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributespecifier; }
	}

	public final AttributespecifierContext attributespecifier() throws RecognitionException {
		AttributespecifierContext _localctx = new AttributespecifierContext(_ctx, getState());
		enterRule(_localctx, 234, RULE_attributespecifier);
		try {
			setState(1629);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1622);
				match(LeftBracket);
				setState(1623);
				match(LeftBracket);
				setState(1624);
				attributelist(0);
				setState(1625);
				match(RightBracket);
				setState(1626);
				match(RightBracket);
				}
				break;
			case Alignas:
				enterOuterAlt(_localctx, 2);
				{
				setState(1628);
				alignmentspecifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AlignmentspecifierContext extends ParserRuleContext {
		public TerminalNode Alignas() { return getToken(AergiaCpp14Parser.Alignas, 0); }
		public ThetypeidContext thetypeid() {
			return getRuleContext(ThetypeidContext.class,0);
		}
		public ConstantexpressionContext constantexpression() {
			return getRuleContext(ConstantexpressionContext.class,0);
		}
		public AlignmentspecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_alignmentspecifier; }
	}

	public final AlignmentspecifierContext alignmentspecifier() throws RecognitionException {
		AlignmentspecifierContext _localctx = new AlignmentspecifierContext(_ctx, getState());
		enterRule(_localctx, 236, RULE_alignmentspecifier);
		int _la;
		try {
			setState(1647);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,160,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1631);
				match(Alignas);
				setState(1632);
				match(LeftParen);
				setState(1633);
				thetypeid();
				setState(1635);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1634);
					match(Ellipsis);
					}
				}

				setState(1637);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1639);
				match(Alignas);
				setState(1640);
				match(LeftParen);
				setState(1641);
				constantexpression();
				setState(1643);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1642);
					match(Ellipsis);
					}
				}

				setState(1645);
				match(RightParen);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributelistContext extends ParserRuleContext {
		public AttributeContext attribute() {
			return getRuleContext(AttributeContext.class,0);
		}
		public AttributelistContext attributelist() {
			return getRuleContext(AttributelistContext.class,0);
		}
		public AttributelistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributelist; }
	}

	public final AttributelistContext attributelist() throws RecognitionException {
		return attributelist(0);
	}

	private AttributelistContext attributelist(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		AttributelistContext _localctx = new AttributelistContext(_ctx, _parentState);
		AttributelistContext _prevctx = _localctx;
		int _startState = 238;
		enterRecursionRule(_localctx, 238, RULE_attributelist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1656);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,162,_ctx) ) {
			case 1:
				{
				setState(1651);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,161,_ctx) ) {
				case 1:
					{
					setState(1650);
					attribute();
					}
					break;
				}
				}
				break;
			case 2:
				{
				setState(1653);
				attribute();
				setState(1654);
				match(Ellipsis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1670);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,165,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1668);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,164,_ctx) ) {
					case 1:
						{
						_localctx = new AttributelistContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_attributelist);
						setState(1658);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1659);
						match(Comma);
						setState(1661);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,163,_ctx) ) {
						case 1:
							{
							setState(1660);
							attribute();
							}
							break;
						}
						}
						break;
					case 2:
						{
						_localctx = new AttributelistContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_attributelist);
						setState(1663);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1664);
						match(Comma);
						setState(1665);
						attribute();
						setState(1666);
						match(Ellipsis);
						}
						break;
					}
					} 
				}
				setState(1672);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,165,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class AttributeContext extends ParserRuleContext {
		public AttributetokenContext attributetoken() {
			return getRuleContext(AttributetokenContext.class,0);
		}
		public AttributeargumentclauseContext attributeargumentclause() {
			return getRuleContext(AttributeargumentclauseContext.class,0);
		}
		public AttributeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attribute; }
	}

	public final AttributeContext attribute() throws RecognitionException {
		AttributeContext _localctx = new AttributeContext(_ctx, getState());
		enterRule(_localctx, 240, RULE_attribute);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1673);
			attributetoken();
			setState(1675);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,166,_ctx) ) {
			case 1:
				{
				setState(1674);
				attributeargumentclause();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributetokenContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public AttributescopedtokenContext attributescopedtoken() {
			return getRuleContext(AttributescopedtokenContext.class,0);
		}
		public AttributetokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributetoken; }
	}

	public final AttributetokenContext attributetoken() throws RecognitionException {
		AttributetokenContext _localctx = new AttributetokenContext(_ctx, getState());
		enterRule(_localctx, 242, RULE_attributetoken);
		try {
			setState(1679);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,167,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1677);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1678);
				attributescopedtoken();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributescopedtokenContext extends ParserRuleContext {
		public AttributenamespaceContext attributenamespace() {
			return getRuleContext(AttributenamespaceContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public AttributescopedtokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributescopedtoken; }
	}

	public final AttributescopedtokenContext attributescopedtoken() throws RecognitionException {
		AttributescopedtokenContext _localctx = new AttributescopedtokenContext(_ctx, getState());
		enterRule(_localctx, 244, RULE_attributescopedtoken);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1681);
			attributenamespace();
			setState(1682);
			match(Doublecolon);
			setState(1683);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributenamespaceContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public AttributenamespaceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributenamespace; }
	}

	public final AttributenamespaceContext attributenamespace() throws RecognitionException {
		AttributenamespaceContext _localctx = new AttributenamespaceContext(_ctx, getState());
		enterRule(_localctx, 246, RULE_attributenamespace);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1685);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributeargumentclauseContext extends ParserRuleContext {
		public BalancedtokenseqContext balancedtokenseq() {
			return getRuleContext(BalancedtokenseqContext.class,0);
		}
		public AttributeargumentclauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeargumentclause; }
	}

	public final AttributeargumentclauseContext attributeargumentclause() throws RecognitionException {
		AttributeargumentclauseContext _localctx = new AttributeargumentclauseContext(_ctx, getState());
		enterRule(_localctx, 248, RULE_attributeargumentclause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1687);
			match(LeftParen);
			setState(1688);
			balancedtokenseq(0);
			setState(1689);
			match(RightParen);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BalancedtokenseqContext extends ParserRuleContext {
		public BalancedtokenContext balancedtoken() {
			return getRuleContext(BalancedtokenContext.class,0);
		}
		public BalancedtokenseqContext balancedtokenseq() {
			return getRuleContext(BalancedtokenseqContext.class,0);
		}
		public BalancedtokenseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_balancedtokenseq; }
	}

	public final BalancedtokenseqContext balancedtokenseq() throws RecognitionException {
		return balancedtokenseq(0);
	}

	private BalancedtokenseqContext balancedtokenseq(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BalancedtokenseqContext _localctx = new BalancedtokenseqContext(_ctx, _parentState);
		BalancedtokenseqContext _prevctx = _localctx;
		int _startState = 250;
		enterRecursionRule(_localctx, 250, RULE_balancedtokenseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1693);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,168,_ctx) ) {
			case 1:
				{
				setState(1692);
				balancedtoken();
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(1699);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,169,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BalancedtokenseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_balancedtokenseq);
					setState(1695);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1696);
					balancedtoken();
					}
					} 
				}
				setState(1701);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,169,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class BalancedtokenContext extends ParserRuleContext {
		public BalancedtokenseqContext balancedtokenseq() {
			return getRuleContext(BalancedtokenseqContext.class,0);
		}
		public BalancedtokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_balancedtoken; }
	}

	public final BalancedtokenContext balancedtoken() throws RecognitionException {
		BalancedtokenContext _localctx = new BalancedtokenContext(_ctx, getState());
		enterRule(_localctx, 252, RULE_balancedtoken);
		try {
			setState(1714);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParen:
				enterOuterAlt(_localctx, 1);
				{
				setState(1702);
				match(LeftParen);
				setState(1703);
				balancedtokenseq(0);
				setState(1704);
				match(RightParen);
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1706);
				match(LeftBracket);
				setState(1707);
				balancedtokenseq(0);
				setState(1708);
				match(RightBracket);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 3);
				{
				setState(1710);
				match(LeftBrace);
				setState(1711);
				balancedtokenseq(0);
				setState(1712);
				match(RightBrace);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitdeclaratorlistContext extends ParserRuleContext {
		public InitdeclaratorContext initdeclarator() {
			return getRuleContext(InitdeclaratorContext.class,0);
		}
		public InitdeclaratorlistContext initdeclaratorlist() {
			return getRuleContext(InitdeclaratorlistContext.class,0);
		}
		public InitdeclaratorlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initdeclaratorlist; }
	}

	public final InitdeclaratorlistContext initdeclaratorlist() throws RecognitionException {
		return initdeclaratorlist(0);
	}

	private InitdeclaratorlistContext initdeclaratorlist(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		InitdeclaratorlistContext _localctx = new InitdeclaratorlistContext(_ctx, _parentState);
		InitdeclaratorlistContext _prevctx = _localctx;
		int _startState = 254;
		enterRecursionRule(_localctx, 254, RULE_initdeclaratorlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1717);
			initdeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(1724);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,171,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitdeclaratorlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initdeclaratorlist);
					setState(1719);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1720);
					match(Comma);
					setState(1721);
					initdeclarator();
					}
					} 
				}
				setState(1726);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,171,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class InitdeclaratorContext extends ParserRuleContext {
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public InitdeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initdeclarator; }
	}

	public final InitdeclaratorContext initdeclarator() throws RecognitionException {
		InitdeclaratorContext _localctx = new InitdeclaratorContext(_ctx, getState());
		enterRule(_localctx, 256, RULE_initdeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1727);
			declarator();
			setState(1729);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,172,_ctx) ) {
			case 1:
				{
				setState(1728);
				initializer();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclaratorContext extends ParserRuleContext {
		public PtrdeclaratorContext ptrdeclarator() {
			return getRuleContext(PtrdeclaratorContext.class,0);
		}
		public NoptrdeclaratorContext noptrdeclarator() {
			return getRuleContext(NoptrdeclaratorContext.class,0);
		}
		public ParametersandqualifiersContext parametersandqualifiers() {
			return getRuleContext(ParametersandqualifiersContext.class,0);
		}
		public TrailingreturntypeContext trailingreturntype() {
			return getRuleContext(TrailingreturntypeContext.class,0);
		}
		public DeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarator; }
	}

	public final DeclaratorContext declarator() throws RecognitionException {
		DeclaratorContext _localctx = new DeclaratorContext(_ctx, getState());
		enterRule(_localctx, 258, RULE_declarator);
		try {
			setState(1737);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,173,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1731);
				ptrdeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1732);
				noptrdeclarator(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1733);
				noptrdeclarator(0);
				setState(1734);
				parametersandqualifiers();
				setState(1735);
				trailingreturntype();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PtrdeclaratorContext extends ParserRuleContext {
		public PtroperatorContext ptroperator() {
			return getRuleContext(PtroperatorContext.class,0);
		}
		public PtrdeclaratorContext ptrdeclarator() {
			return getRuleContext(PtrdeclaratorContext.class,0);
		}
		public PtrdeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ptrdeclarator; }
	}

	public final PtrdeclaratorContext ptrdeclarator() throws RecognitionException {
		PtrdeclaratorContext _localctx = new PtrdeclaratorContext(_ctx, getState());
		enterRule(_localctx, 260, RULE_ptrdeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1739);
			ptroperator();
			setState(1740);
			ptrdeclarator();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoptrdeclaratorContext extends ParserRuleContext {
		public DeclaratoridContext declaratorid() {
			return getRuleContext(DeclaratoridContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public PtrdeclaratorContext ptrdeclarator() {
			return getRuleContext(PtrdeclaratorContext.class,0);
		}
		public NoptrdeclaratorContext noptrdeclarator() {
			return getRuleContext(NoptrdeclaratorContext.class,0);
		}
		public ParametersandqualifiersContext parametersandqualifiers() {
			return getRuleContext(ParametersandqualifiersContext.class,0);
		}
		public ConstantexpressionContext constantexpression() {
			return getRuleContext(ConstantexpressionContext.class,0);
		}
		public NoptrdeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noptrdeclarator; }
	}

	public final NoptrdeclaratorContext noptrdeclarator() throws RecognitionException {
		return noptrdeclarator(0);
	}

	private NoptrdeclaratorContext noptrdeclarator(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		NoptrdeclaratorContext _localctx = new NoptrdeclaratorContext(_ctx, _parentState);
		NoptrdeclaratorContext _prevctx = _localctx;
		int _startState = 262;
		enterRecursionRule(_localctx, 262, RULE_noptrdeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1751);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Decltype:
			case Operator:
			case Tilde:
			case Doublecolon:
			case Ellipsis:
			case Identifier:
				{
				setState(1743);
				declaratorid();
				setState(1745);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,174,_ctx) ) {
				case 1:
					{
					setState(1744);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case LeftParen:
				{
				setState(1747);
				match(LeftParen);
				setState(1748);
				ptrdeclarator();
				setState(1749);
				match(RightParen);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1766);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,179,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1764);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,178,_ctx) ) {
					case 1:
						{
						_localctx = new NoptrdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrdeclarator);
						setState(1753);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1754);
						parametersandqualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoptrdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrdeclarator);
						setState(1755);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1756);
						match(LeftBracket);
						setState(1758);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Decltype) | (1L << False) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (This - 78)) | (1L << (True - 78)) | (1L << (LeftParen - 78)) | (1L << (LeftBracket - 78)) | (1L << (Tilde - 78)) | (1L << (Doublecolon - 78)))) != 0) || ((((_la - 143)) & ~0x3f) == 0 && ((1L << (_la - 143)) & ((1L << (Identifier - 143)) | (1L << (Integerliteral - 143)) | (1L << (Characterliteral - 143)) | (1L << (Floatingliteral - 143)) | (1L << (Stringliteral - 143)) | (1L << (Userdefinedintegerliteral - 143)) | (1L << (Userdefinedfloatingliteral - 143)) | (1L << (Userdefinedstringliteral - 143)) | (1L << (Userdefinedcharacterliteral - 143)))) != 0)) {
							{
							setState(1757);
							constantexpression();
							}
						}

						setState(1760);
						match(RightBracket);
						setState(1762);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,177,_ctx) ) {
						case 1:
							{
							setState(1761);
							attributespecifierseq(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1768);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,179,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ParametersandqualifiersContext extends ParserRuleContext {
		public ParameterdeclarationclauseContext parameterdeclarationclause() {
			return getRuleContext(ParameterdeclarationclauseContext.class,0);
		}
		public CvqualifierseqContext cvqualifierseq() {
			return getRuleContext(CvqualifierseqContext.class,0);
		}
		public RefqualifierContext refqualifier() {
			return getRuleContext(RefqualifierContext.class,0);
		}
		public ExceptionspecificationContext exceptionspecification() {
			return getRuleContext(ExceptionspecificationContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public ParametersandqualifiersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parametersandqualifiers; }
	}

	public final ParametersandqualifiersContext parametersandqualifiers() throws RecognitionException {
		ParametersandqualifiersContext _localctx = new ParametersandqualifiersContext(_ctx, getState());
		enterRule(_localctx, 264, RULE_parametersandqualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1769);
			match(LeftParen);
			setState(1770);
			parameterdeclarationclause();
			setState(1771);
			match(RightParen);
			setState(1773);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,180,_ctx) ) {
			case 1:
				{
				setState(1772);
				cvqualifierseq();
				}
				break;
			}
			setState(1776);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,181,_ctx) ) {
			case 1:
				{
				setState(1775);
				refqualifier();
				}
				break;
			}
			setState(1779);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,182,_ctx) ) {
			case 1:
				{
				setState(1778);
				exceptionspecification();
				}
				break;
			}
			setState(1782);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,183,_ctx) ) {
			case 1:
				{
				setState(1781);
				attributespecifierseq(0);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TrailingreturntypeContext extends ParserRuleContext {
		public TrailingtypespecifierseqContext trailingtypespecifierseq() {
			return getRuleContext(TrailingtypespecifierseqContext.class,0);
		}
		public AbstractdeclaratorContext abstractdeclarator() {
			return getRuleContext(AbstractdeclaratorContext.class,0);
		}
		public TrailingreturntypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trailingreturntype; }
	}

	public final TrailingreturntypeContext trailingreturntype() throws RecognitionException {
		TrailingreturntypeContext _localctx = new TrailingreturntypeContext(_ctx, getState());
		enterRule(_localctx, 266, RULE_trailingreturntype);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1784);
			match(Arrow);
			setState(1785);
			trailingtypespecifierseq();
			setState(1787);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,184,_ctx) ) {
			case 1:
				{
				setState(1786);
				abstractdeclarator();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PtroperatorContext extends ParserRuleContext {
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public CvqualifierseqContext cvqualifierseq() {
			return getRuleContext(CvqualifierseqContext.class,0);
		}
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public PtroperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ptroperator; }
	}

	public final PtroperatorContext ptroperator() throws RecognitionException {
		PtroperatorContext _localctx = new PtroperatorContext(_ctx, getState());
		enterRule(_localctx, 268, RULE_ptroperator);
		try {
			setState(1812);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Star:
				enterOuterAlt(_localctx, 1);
				{
				setState(1789);
				match(Star);
				setState(1791);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,185,_ctx) ) {
				case 1:
					{
					setState(1790);
					attributespecifierseq(0);
					}
					break;
				}
				setState(1794);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,186,_ctx) ) {
				case 1:
					{
					setState(1793);
					cvqualifierseq();
					}
					break;
				}
				}
				break;
			case And:
				enterOuterAlt(_localctx, 2);
				{
				setState(1796);
				match(And);
				setState(1798);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,187,_ctx) ) {
				case 1:
					{
					setState(1797);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case T__11:
				enterOuterAlt(_localctx, 3);
				{
				setState(1800);
				match(T__11);
				setState(1802);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,188,_ctx) ) {
				case 1:
					{
					setState(1801);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case Decltype:
			case Doublecolon:
			case Identifier:
				enterOuterAlt(_localctx, 4);
				{
				setState(1804);
				nestednamespecifier(0);
				setState(1805);
				match(Star);
				setState(1807);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,189,_ctx) ) {
				case 1:
					{
					setState(1806);
					attributespecifierseq(0);
					}
					break;
				}
				setState(1810);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,190,_ctx) ) {
				case 1:
					{
					setState(1809);
					cvqualifierseq();
					}
					break;
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CvqualifierseqContext extends ParserRuleContext {
		public CvqualifierContext cvqualifier() {
			return getRuleContext(CvqualifierContext.class,0);
		}
		public CvqualifierseqContext cvqualifierseq() {
			return getRuleContext(CvqualifierseqContext.class,0);
		}
		public CvqualifierseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cvqualifierseq; }
	}

	public final CvqualifierseqContext cvqualifierseq() throws RecognitionException {
		CvqualifierseqContext _localctx = new CvqualifierseqContext(_ctx, getState());
		enterRule(_localctx, 270, RULE_cvqualifierseq);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1814);
			cvqualifier();
			setState(1816);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,192,_ctx) ) {
			case 1:
				{
				setState(1815);
				cvqualifierseq();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CvqualifierContext extends ParserRuleContext {
		public TerminalNode Const() { return getToken(AergiaCpp14Parser.Const, 0); }
		public TerminalNode Volatile() { return getToken(AergiaCpp14Parser.Volatile, 0); }
		public CvqualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cvqualifier; }
	}

	public final CvqualifierContext cvqualifier() throws RecognitionException {
		CvqualifierContext _localctx = new CvqualifierContext(_ctx, getState());
		enterRule(_localctx, 272, RULE_cvqualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1818);
			_la = _input.LA(1);
			if ( !(_la==Const || _la==Volatile) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RefqualifierContext extends ParserRuleContext {
		public RefqualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_refqualifier; }
	}

	public final RefqualifierContext refqualifier() throws RecognitionException {
		RefqualifierContext _localctx = new RefqualifierContext(_ctx, getState());
		enterRule(_localctx, 274, RULE_refqualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1820);
			_la = _input.LA(1);
			if ( !(_la==T__11 || _la==And) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclaratoridContext extends ParserRuleContext {
		public IdexpressionContext idexpression() {
			return getRuleContext(IdexpressionContext.class,0);
		}
		public DeclaratoridContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaratorid; }
	}

	public final DeclaratoridContext declaratorid() throws RecognitionException {
		DeclaratoridContext _localctx = new DeclaratoridContext(_ctx, getState());
		enterRule(_localctx, 276, RULE_declaratorid);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1823);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Ellipsis) {
				{
				setState(1822);
				match(Ellipsis);
				}
			}

			setState(1825);
			idexpression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ThetypeidContext extends ParserRuleContext {
		public TypespecifierseqContext typespecifierseq() {
			return getRuleContext(TypespecifierseqContext.class,0);
		}
		public AbstractdeclaratorContext abstractdeclarator() {
			return getRuleContext(AbstractdeclaratorContext.class,0);
		}
		public ThetypeidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_thetypeid; }
	}

	public final ThetypeidContext thetypeid() throws RecognitionException {
		ThetypeidContext _localctx = new ThetypeidContext(_ctx, getState());
		enterRule(_localctx, 278, RULE_thetypeid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1827);
			typespecifierseq();
			setState(1829);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,194,_ctx) ) {
			case 1:
				{
				setState(1828);
				abstractdeclarator();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AbstractdeclaratorContext extends ParserRuleContext {
		public PtrabstractdeclaratorContext ptrabstractdeclarator() {
			return getRuleContext(PtrabstractdeclaratorContext.class,0);
		}
		public ParametersandqualifiersContext parametersandqualifiers() {
			return getRuleContext(ParametersandqualifiersContext.class,0);
		}
		public TrailingreturntypeContext trailingreturntype() {
			return getRuleContext(TrailingreturntypeContext.class,0);
		}
		public NoptrabstractdeclaratorContext noptrabstractdeclarator() {
			return getRuleContext(NoptrabstractdeclaratorContext.class,0);
		}
		public AbstractpackdeclaratorContext abstractpackdeclarator() {
			return getRuleContext(AbstractpackdeclaratorContext.class,0);
		}
		public AbstractdeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_abstractdeclarator; }
	}

	public final AbstractdeclaratorContext abstractdeclarator() throws RecognitionException {
		AbstractdeclaratorContext _localctx = new AbstractdeclaratorContext(_ctx, getState());
		enterRule(_localctx, 280, RULE_abstractdeclarator);
		try {
			setState(1839);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,196,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1831);
				ptrabstractdeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1833);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,195,_ctx) ) {
				case 1:
					{
					setState(1832);
					noptrabstractdeclarator(0);
					}
					break;
				}
				setState(1835);
				parametersandqualifiers();
				setState(1836);
				trailingreturntype();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1838);
				abstractpackdeclarator();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PtrabstractdeclaratorContext extends ParserRuleContext {
		public NoptrabstractdeclaratorContext noptrabstractdeclarator() {
			return getRuleContext(NoptrabstractdeclaratorContext.class,0);
		}
		public PtroperatorContext ptroperator() {
			return getRuleContext(PtroperatorContext.class,0);
		}
		public PtrabstractdeclaratorContext ptrabstractdeclarator() {
			return getRuleContext(PtrabstractdeclaratorContext.class,0);
		}
		public PtrabstractdeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ptrabstractdeclarator; }
	}

	public final PtrabstractdeclaratorContext ptrabstractdeclarator() throws RecognitionException {
		PtrabstractdeclaratorContext _localctx = new PtrabstractdeclaratorContext(_ctx, getState());
		enterRule(_localctx, 282, RULE_ptrabstractdeclarator);
		try {
			setState(1846);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParen:
			case LeftBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1841);
				noptrabstractdeclarator(0);
				}
				break;
			case T__11:
			case Decltype:
			case Star:
			case And:
			case Doublecolon:
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(1842);
				ptroperator();
				setState(1844);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,197,_ctx) ) {
				case 1:
					{
					setState(1843);
					ptrabstractdeclarator();
					}
					break;
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoptrabstractdeclaratorContext extends ParserRuleContext {
		public ParametersandqualifiersContext parametersandqualifiers() {
			return getRuleContext(ParametersandqualifiersContext.class,0);
		}
		public ConstantexpressionContext constantexpression() {
			return getRuleContext(ConstantexpressionContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public PtrabstractdeclaratorContext ptrabstractdeclarator() {
			return getRuleContext(PtrabstractdeclaratorContext.class,0);
		}
		public NoptrabstractdeclaratorContext noptrabstractdeclarator() {
			return getRuleContext(NoptrabstractdeclaratorContext.class,0);
		}
		public NoptrabstractdeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noptrabstractdeclarator; }
	}

	public final NoptrabstractdeclaratorContext noptrabstractdeclarator() throws RecognitionException {
		return noptrabstractdeclarator(0);
	}

	private NoptrabstractdeclaratorContext noptrabstractdeclarator(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		NoptrabstractdeclaratorContext _localctx = new NoptrabstractdeclaratorContext(_ctx, _parentState);
		NoptrabstractdeclaratorContext _prevctx = _localctx;
		int _startState = 284;
		enterRecursionRule(_localctx, 284, RULE_noptrabstractdeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1862);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,201,_ctx) ) {
			case 1:
				{
				setState(1849);
				parametersandqualifiers();
				}
				break;
			case 2:
				{
				setState(1850);
				match(LeftBracket);
				setState(1852);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Decltype) | (1L << False) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (This - 78)) | (1L << (True - 78)) | (1L << (LeftParen - 78)) | (1L << (LeftBracket - 78)) | (1L << (Tilde - 78)) | (1L << (Doublecolon - 78)))) != 0) || ((((_la - 143)) & ~0x3f) == 0 && ((1L << (_la - 143)) & ((1L << (Identifier - 143)) | (1L << (Integerliteral - 143)) | (1L << (Characterliteral - 143)) | (1L << (Floatingliteral - 143)) | (1L << (Stringliteral - 143)) | (1L << (Userdefinedintegerliteral - 143)) | (1L << (Userdefinedfloatingliteral - 143)) | (1L << (Userdefinedstringliteral - 143)) | (1L << (Userdefinedcharacterliteral - 143)))) != 0)) {
					{
					setState(1851);
					constantexpression();
					}
				}

				setState(1854);
				match(RightBracket);
				setState(1856);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,200,_ctx) ) {
				case 1:
					{
					setState(1855);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 3:
				{
				setState(1858);
				match(LeftParen);
				setState(1859);
				ptrabstractdeclarator();
				setState(1860);
				match(RightParen);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1877);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,205,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1875);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,204,_ctx) ) {
					case 1:
						{
						_localctx = new NoptrabstractdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractdeclarator);
						setState(1864);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1865);
						parametersandqualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoptrabstractdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractdeclarator);
						setState(1866);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1867);
						match(LeftBracket);
						setState(1869);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Decltype) | (1L << False) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (This - 78)) | (1L << (True - 78)) | (1L << (LeftParen - 78)) | (1L << (LeftBracket - 78)) | (1L << (Tilde - 78)) | (1L << (Doublecolon - 78)))) != 0) || ((((_la - 143)) & ~0x3f) == 0 && ((1L << (_la - 143)) & ((1L << (Identifier - 143)) | (1L << (Integerliteral - 143)) | (1L << (Characterliteral - 143)) | (1L << (Floatingliteral - 143)) | (1L << (Stringliteral - 143)) | (1L << (Userdefinedintegerliteral - 143)) | (1L << (Userdefinedfloatingliteral - 143)) | (1L << (Userdefinedstringliteral - 143)) | (1L << (Userdefinedcharacterliteral - 143)))) != 0)) {
							{
							setState(1868);
							constantexpression();
							}
						}

						setState(1871);
						match(RightBracket);
						setState(1873);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,203,_ctx) ) {
						case 1:
							{
							setState(1872);
							attributespecifierseq(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1879);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,205,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class AbstractpackdeclaratorContext extends ParserRuleContext {
		public NoptrabstractpackdeclaratorContext noptrabstractpackdeclarator() {
			return getRuleContext(NoptrabstractpackdeclaratorContext.class,0);
		}
		public PtroperatorContext ptroperator() {
			return getRuleContext(PtroperatorContext.class,0);
		}
		public AbstractpackdeclaratorContext abstractpackdeclarator() {
			return getRuleContext(AbstractpackdeclaratorContext.class,0);
		}
		public AbstractpackdeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_abstractpackdeclarator; }
	}

	public final AbstractpackdeclaratorContext abstractpackdeclarator() throws RecognitionException {
		AbstractpackdeclaratorContext _localctx = new AbstractpackdeclaratorContext(_ctx, getState());
		enterRule(_localctx, 286, RULE_abstractpackdeclarator);
		try {
			setState(1884);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ellipsis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1880);
				noptrabstractpackdeclarator(0);
				}
				break;
			case T__11:
			case Decltype:
			case Star:
			case And:
			case Doublecolon:
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(1881);
				ptroperator();
				setState(1882);
				abstractpackdeclarator();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoptrabstractpackdeclaratorContext extends ParserRuleContext {
		public NoptrabstractpackdeclaratorContext noptrabstractpackdeclarator() {
			return getRuleContext(NoptrabstractpackdeclaratorContext.class,0);
		}
		public ParametersandqualifiersContext parametersandqualifiers() {
			return getRuleContext(ParametersandqualifiersContext.class,0);
		}
		public ConstantexpressionContext constantexpression() {
			return getRuleContext(ConstantexpressionContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public NoptrabstractpackdeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noptrabstractpackdeclarator; }
	}

	public final NoptrabstractpackdeclaratorContext noptrabstractpackdeclarator() throws RecognitionException {
		return noptrabstractpackdeclarator(0);
	}

	private NoptrabstractpackdeclaratorContext noptrabstractpackdeclarator(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		NoptrabstractpackdeclaratorContext _localctx = new NoptrabstractpackdeclaratorContext(_ctx, _parentState);
		NoptrabstractpackdeclaratorContext _prevctx = _localctx;
		int _startState = 288;
		enterRecursionRule(_localctx, 288, RULE_noptrabstractpackdeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1887);
			match(Ellipsis);
			}
			_ctx.stop = _input.LT(-1);
			setState(1902);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,210,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1900);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,209,_ctx) ) {
					case 1:
						{
						_localctx = new NoptrabstractpackdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractpackdeclarator);
						setState(1889);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1890);
						parametersandqualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoptrabstractpackdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractpackdeclarator);
						setState(1891);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1892);
						match(LeftBracket);
						setState(1894);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Decltype) | (1L << False) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (This - 78)) | (1L << (True - 78)) | (1L << (LeftParen - 78)) | (1L << (LeftBracket - 78)) | (1L << (Tilde - 78)) | (1L << (Doublecolon - 78)))) != 0) || ((((_la - 143)) & ~0x3f) == 0 && ((1L << (_la - 143)) & ((1L << (Identifier - 143)) | (1L << (Integerliteral - 143)) | (1L << (Characterliteral - 143)) | (1L << (Floatingliteral - 143)) | (1L << (Stringliteral - 143)) | (1L << (Userdefinedintegerliteral - 143)) | (1L << (Userdefinedfloatingliteral - 143)) | (1L << (Userdefinedstringliteral - 143)) | (1L << (Userdefinedcharacterliteral - 143)))) != 0)) {
							{
							setState(1893);
							constantexpression();
							}
						}

						setState(1896);
						match(RightBracket);
						setState(1898);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,208,_ctx) ) {
						case 1:
							{
							setState(1897);
							attributespecifierseq(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1904);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,210,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ParameterdeclarationclauseContext extends ParserRuleContext {
		public ParameterdeclarationlistContext parameterdeclarationlist() {
			return getRuleContext(ParameterdeclarationlistContext.class,0);
		}
		public ParameterdeclarationclauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterdeclarationclause; }
	}

	public final ParameterdeclarationclauseContext parameterdeclarationclause() throws RecognitionException {
		ParameterdeclarationclauseContext _localctx = new ParameterdeclarationclauseContext(_ctx, getState());
		enterRule(_localctx, 290, RULE_parameterdeclarationclause);
		int _la;
		try {
			setState(1915);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,213,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1906);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 19)) & ~0x3f) == 0 && ((1L << (_la - 19)) & ((1L << (Alignas - 19)) | (1L << (Auto - 19)) | (1L << (Bool - 19)) | (1L << (Char - 19)) | (1L << (Char16 - 19)) | (1L << (Char32 - 19)) | (1L << (Class - 19)) | (1L << (Const - 19)) | (1L << (Constexpr - 19)) | (1L << (Decltype - 19)) | (1L << (Double - 19)) | (1L << (Enum - 19)) | (1L << (Explicit - 19)) | (1L << (Extern - 19)) | (1L << (Float - 19)) | (1L << (Friend - 19)) | (1L << (Inline - 19)) | (1L << (Int - 19)) | (1L << (Long - 19)) | (1L << (Mutable - 19)) | (1L << (Register - 19)) | (1L << (Short - 19)) | (1L << (Signed - 19)) | (1L << (Static - 19)) | (1L << (Struct - 19)) | (1L << (Thread_local - 19)))) != 0) || ((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (Typedef - 83)) | (1L << (Typename_ - 83)) | (1L << (Union - 83)) | (1L << (Unsigned - 83)) | (1L << (Virtual - 83)) | (1L << (Void - 83)) | (1L << (Volatile - 83)) | (1L << (Wchar - 83)) | (1L << (LeftBracket - 83)) | (1L << (Doublecolon - 83)) | (1L << (Identifier - 83)))) != 0)) {
					{
					setState(1905);
					parameterdeclarationlist(0);
					}
				}

				setState(1909);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1908);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1911);
				parameterdeclarationlist(0);
				setState(1912);
				match(Comma);
				setState(1913);
				match(Ellipsis);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterdeclarationlistContext extends ParserRuleContext {
		public ParameterdeclarationContext parameterdeclaration() {
			return getRuleContext(ParameterdeclarationContext.class,0);
		}
		public ParameterdeclarationlistContext parameterdeclarationlist() {
			return getRuleContext(ParameterdeclarationlistContext.class,0);
		}
		public ParameterdeclarationlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterdeclarationlist; }
	}

	public final ParameterdeclarationlistContext parameterdeclarationlist() throws RecognitionException {
		return parameterdeclarationlist(0);
	}

	private ParameterdeclarationlistContext parameterdeclarationlist(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ParameterdeclarationlistContext _localctx = new ParameterdeclarationlistContext(_ctx, _parentState);
		ParameterdeclarationlistContext _prevctx = _localctx;
		int _startState = 292;
		enterRecursionRule(_localctx, 292, RULE_parameterdeclarationlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1918);
			parameterdeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1925);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,214,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ParameterdeclarationlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_parameterdeclarationlist);
					setState(1920);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1921);
					match(Comma);
					setState(1922);
					parameterdeclaration();
					}
					} 
				}
				setState(1927);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,214,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ParameterdeclarationContext extends ParserRuleContext {
		public DeclspecifierseqContext declspecifierseq() {
			return getRuleContext(DeclspecifierseqContext.class,0);
		}
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public InitializerclauseContext initializerclause() {
			return getRuleContext(InitializerclauseContext.class,0);
		}
		public AbstractdeclaratorContext abstractdeclarator() {
			return getRuleContext(AbstractdeclaratorContext.class,0);
		}
		public ParameterdeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterdeclaration; }
	}

	public final ParameterdeclarationContext parameterdeclaration() throws RecognitionException {
		ParameterdeclarationContext _localctx = new ParameterdeclarationContext(_ctx, getState());
		enterRule(_localctx, 294, RULE_parameterdeclaration);
		int _la;
		try {
			setState(1959);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,221,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1929);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1928);
					attributespecifierseq(0);
					}
				}

				setState(1931);
				declspecifierseq();
				setState(1932);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1935);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1934);
					attributespecifierseq(0);
					}
				}

				setState(1937);
				declspecifierseq();
				setState(1938);
				declarator();
				setState(1939);
				match(Assign);
				setState(1940);
				initializerclause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1943);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1942);
					attributespecifierseq(0);
					}
				}

				setState(1945);
				declspecifierseq();
				setState(1947);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,218,_ctx) ) {
				case 1:
					{
					setState(1946);
					abstractdeclarator();
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1950);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1949);
					attributespecifierseq(0);
					}
				}

				setState(1952);
				declspecifierseq();
				setState(1954);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__11 || _la==Decltype || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (LeftParen - 94)) | (1L << (LeftBracket - 94)) | (1L << (Star - 94)) | (1L << (And - 94)) | (1L << (Doublecolon - 94)) | (1L << (Ellipsis - 94)) | (1L << (Identifier - 94)))) != 0)) {
					{
					setState(1953);
					abstractdeclarator();
					}
				}

				setState(1956);
				match(Assign);
				setState(1957);
				initializerclause();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctiondefinitionContext extends ParserRuleContext {
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public FunctionbodyContext functionbody() {
			return getRuleContext(FunctionbodyContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public DeclspecifierseqContext declspecifierseq() {
			return getRuleContext(DeclspecifierseqContext.class,0);
		}
		public VirtspecifierseqContext virtspecifierseq() {
			return getRuleContext(VirtspecifierseqContext.class,0);
		}
		public FunctiondefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functiondefinition; }
	}

	public final FunctiondefinitionContext functiondefinition() throws RecognitionException {
		FunctiondefinitionContext _localctx = new FunctiondefinitionContext(_ctx, getState());
		enterRule(_localctx, 296, RULE_functiondefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1962);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1961);
				attributespecifierseq(0);
				}
			}

			setState(1965);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,223,_ctx) ) {
			case 1:
				{
				setState(1964);
				declspecifierseq();
				}
				break;
			}
			setState(1967);
			declarator();
			setState(1969);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Final || _la==Override) {
				{
				setState(1968);
				virtspecifierseq(0);
				}
			}

			setState(1971);
			functionbody();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionbodyContext extends ParserRuleContext {
		public CompoundstatementContext compoundstatement() {
			return getRuleContext(CompoundstatementContext.class,0);
		}
		public CtorinitializerContext ctorinitializer() {
			return getRuleContext(CtorinitializerContext.class,0);
		}
		public FunctiontryblockContext functiontryblock() {
			return getRuleContext(FunctiontryblockContext.class,0);
		}
		public TerminalNode Default() { return getToken(AergiaCpp14Parser.Default, 0); }
		public TerminalNode Delete() { return getToken(AergiaCpp14Parser.Delete, 0); }
		public FunctionbodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionbody; }
	}

	public final FunctionbodyContext functionbody() throws RecognitionException {
		FunctionbodyContext _localctx = new FunctionbodyContext(_ctx, getState());
		enterRule(_localctx, 298, RULE_functionbody);
		int _la;
		try {
			setState(1984);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,226,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1974);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(1973);
					ctorinitializer();
					}
				}

				setState(1976);
				compoundstatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1977);
				functiontryblock();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1978);
				match(Assign);
				setState(1979);
				match(Default);
				setState(1980);
				match(Semi);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1981);
				match(Assign);
				setState(1982);
				match(Delete);
				setState(1983);
				match(Semi);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerContext extends ParserRuleContext {
		public BraceorequalinitializerContext braceorequalinitializer() {
			return getRuleContext(BraceorequalinitializerContext.class,0);
		}
		public ExpressionlistContext expressionlist() {
			return getRuleContext(ExpressionlistContext.class,0);
		}
		public InitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializer; }
	}

	public final InitializerContext initializer() throws RecognitionException {
		InitializerContext _localctx = new InitializerContext(_ctx, getState());
		enterRule(_localctx, 300, RULE_initializer);
		try {
			setState(1991);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBrace:
			case Assign:
				enterOuterAlt(_localctx, 1);
				{
				setState(1986);
				braceorequalinitializer();
				}
				break;
			case LeftParen:
				enterOuterAlt(_localctx, 2);
				{
				setState(1987);
				match(LeftParen);
				setState(1988);
				expressionlist();
				setState(1989);
				match(RightParen);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BraceorequalinitializerContext extends ParserRuleContext {
		public InitializerclauseContext initializerclause() {
			return getRuleContext(InitializerclauseContext.class,0);
		}
		public BracedinitlistContext bracedinitlist() {
			return getRuleContext(BracedinitlistContext.class,0);
		}
		public BraceorequalinitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_braceorequalinitializer; }
	}

	public final BraceorequalinitializerContext braceorequalinitializer() throws RecognitionException {
		BraceorequalinitializerContext _localctx = new BraceorequalinitializerContext(_ctx, getState());
		enterRule(_localctx, 302, RULE_braceorequalinitializer);
		try {
			setState(1996);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Assign:
				enterOuterAlt(_localctx, 1);
				{
				setState(1993);
				match(Assign);
				setState(1994);
				initializerclause();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(1995);
				bracedinitlist();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerclauseContext extends ParserRuleContext {
		public AssignmentexpressionContext assignmentexpression() {
			return getRuleContext(AssignmentexpressionContext.class,0);
		}
		public BracedinitlistContext bracedinitlist() {
			return getRuleContext(BracedinitlistContext.class,0);
		}
		public InitializerclauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializerclause; }
	}

	public final InitializerclauseContext initializerclause() throws RecognitionException {
		InitializerclauseContext _localctx = new InitializerclauseContext(_ctx, getState());
		enterRule(_localctx, 304, RULE_initializerclause);
		try {
			setState(2000);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__5:
			case T__9:
			case T__10:
			case Encodingprefix:
			case Alignof:
			case Auto:
			case Bool:
			case Char:
			case Char16:
			case Char32:
			case Const_cast:
			case Decltype:
			case Delete:
			case Double:
			case Dynamic_cast:
			case False:
			case Float:
			case Int:
			case Long:
			case New:
			case Noexcept:
			case Nullptr:
			case Operator:
			case Reinterpret_cast:
			case Short:
			case Signed:
			case Sizeof:
			case Static_cast:
			case This:
			case Throw:
			case True:
			case Typeid_:
			case Typename_:
			case Unsigned:
			case Void:
			case Wchar:
			case LeftParen:
			case LeftBracket:
			case Plus:
			case Minus:
			case Star:
			case And:
			case Or:
			case Tilde:
			case PlusPlus:
			case MinusMinus:
			case Doublecolon:
			case Identifier:
			case Integerliteral:
			case Characterliteral:
			case Floatingliteral:
			case Stringliteral:
			case Userdefinedintegerliteral:
			case Userdefinedfloatingliteral:
			case Userdefinedstringliteral:
			case Userdefinedcharacterliteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(1998);
				assignmentexpression();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(1999);
				bracedinitlist();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerlistContext extends ParserRuleContext {
		public InitializerclauseContext initializerclause() {
			return getRuleContext(InitializerclauseContext.class,0);
		}
		public InitializerlistContext initializerlist() {
			return getRuleContext(InitializerlistContext.class,0);
		}
		public InitializerlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializerlist; }
	}

	public final InitializerlistContext initializerlist() throws RecognitionException {
		return initializerlist(0);
	}

	private InitializerlistContext initializerlist(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		InitializerlistContext _localctx = new InitializerlistContext(_ctx, _parentState);
		InitializerlistContext _prevctx = _localctx;
		int _startState = 306;
		enterRecursionRule(_localctx, 306, RULE_initializerlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2003);
			initializerclause();
			setState(2005);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,230,_ctx) ) {
			case 1:
				{
				setState(2004);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2015);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,232,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerlist);
					setState(2007);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2008);
					match(Comma);
					setState(2009);
					initializerclause();
					setState(2011);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,231,_ctx) ) {
					case 1:
						{
						setState(2010);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2017);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,232,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class BracedinitlistContext extends ParserRuleContext {
		public InitializerlistContext initializerlist() {
			return getRuleContext(InitializerlistContext.class,0);
		}
		public BracedinitlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bracedinitlist; }
	}

	public final BracedinitlistContext bracedinitlist() throws RecognitionException {
		BracedinitlistContext _localctx = new BracedinitlistContext(_ctx, getState());
		enterRule(_localctx, 308, RULE_bracedinitlist);
		int _la;
		try {
			setState(2027);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,234,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2018);
				match(LeftBrace);
				setState(2019);
				initializerlist(0);
				setState(2021);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(2020);
					match(Comma);
					}
				}

				setState(2023);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2025);
				match(LeftBrace);
				setState(2026);
				match(RightBrace);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassnameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public SimpletemplateidContext simpletemplateid() {
			return getRuleContext(SimpletemplateidContext.class,0);
		}
		public ClassnameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classname; }
	}

	public final ClassnameContext classname() throws RecognitionException {
		ClassnameContext _localctx = new ClassnameContext(_ctx, getState());
		enterRule(_localctx, 310, RULE_classname);
		try {
			setState(2031);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,235,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2029);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2030);
				simpletemplateid();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassspecifierContext extends ParserRuleContext {
		public ClassheadContext classhead() {
			return getRuleContext(ClassheadContext.class,0);
		}
		public MemberspecificationContext memberspecification() {
			return getRuleContext(MemberspecificationContext.class,0);
		}
		public ClassspecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classspecifier; }
	}

	public final ClassspecifierContext classspecifier() throws RecognitionException {
		ClassspecifierContext _localctx = new ClassspecifierContext(_ctx, getState());
		enterRule(_localctx, 312, RULE_classspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2033);
			classhead();
			setState(2034);
			match(LeftBrace);
			setState(2036);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Protected - 64)) | (1L << (Public - 64)) | (1L << (Register - 64)) | (1L << (Short - 64)) | (1L << (Signed - 64)) | (1L << (Static - 64)) | (1L << (Static_assert - 64)) | (1L << (Struct - 64)) | (1L << (Template - 64)) | (1L << (Thread_local - 64)) | (1L << (Typedef - 64)) | (1L << (Typename_ - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (Wchar - 64)) | (1L << (LeftParen - 64)) | (1L << (LeftBracket - 64)) | (1L << (Star - 64)) | (1L << (And - 64)) | (1L << (Tilde - 64)))) != 0) || ((((_la - 137)) & ~0x3f) == 0 && ((1L << (_la - 137)) & ((1L << (Colon - 137)) | (1L << (Doublecolon - 137)) | (1L << (Semi - 137)) | (1L << (Ellipsis - 137)) | (1L << (Identifier - 137)))) != 0)) {
				{
				setState(2035);
				memberspecification();
				}
			}

			setState(2038);
			match(RightBrace);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassheadContext extends ParserRuleContext {
		public ClasskeyContext classkey() {
			return getRuleContext(ClasskeyContext.class,0);
		}
		public ClassheadnameContext classheadname() {
			return getRuleContext(ClassheadnameContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public ClassvirtspecifierContext classvirtspecifier() {
			return getRuleContext(ClassvirtspecifierContext.class,0);
		}
		public BaseclauseContext baseclause() {
			return getRuleContext(BaseclauseContext.class,0);
		}
		public ClassheadContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classhead; }
	}

	public final ClassheadContext classhead() throws RecognitionException {
		ClassheadContext _localctx = new ClassheadContext(_ctx, getState());
		enterRule(_localctx, 314, RULE_classhead);
		int _la;
		try {
			setState(2058);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,242,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2040);
				classkey();
				setState(2042);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2041);
					attributespecifierseq(0);
					}
				}

				setState(2044);
				classheadname();
				setState(2046);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Final) {
					{
					setState(2045);
					classvirtspecifier();
					}
				}

				setState(2049);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2048);
					baseclause();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2051);
				classkey();
				setState(2053);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2052);
					attributespecifierseq(0);
					}
				}

				setState(2056);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2055);
					baseclause();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassheadnameContext extends ParserRuleContext {
		public ClassnameContext classname() {
			return getRuleContext(ClassnameContext.class,0);
		}
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public ClassheadnameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classheadname; }
	}

	public final ClassheadnameContext classheadname() throws RecognitionException {
		ClassheadnameContext _localctx = new ClassheadnameContext(_ctx, getState());
		enterRule(_localctx, 316, RULE_classheadname);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2061);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,243,_ctx) ) {
			case 1:
				{
				setState(2060);
				nestednamespecifier(0);
				}
				break;
			}
			setState(2063);
			classname();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassvirtspecifierContext extends ParserRuleContext {
		public TerminalNode Final() { return getToken(AergiaCpp14Parser.Final, 0); }
		public ClassvirtspecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classvirtspecifier; }
	}

	public final ClassvirtspecifierContext classvirtspecifier() throws RecognitionException {
		ClassvirtspecifierContext _localctx = new ClassvirtspecifierContext(_ctx, getState());
		enterRule(_localctx, 318, RULE_classvirtspecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2065);
			match(Final);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClasskeyContext extends ParserRuleContext {
		public TerminalNode Class() { return getToken(AergiaCpp14Parser.Class, 0); }
		public TerminalNode Struct() { return getToken(AergiaCpp14Parser.Struct, 0); }
		public TerminalNode Union() { return getToken(AergiaCpp14Parser.Union, 0); }
		public ClasskeyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classkey; }
	}

	public final ClasskeyContext classkey() throws RecognitionException {
		ClasskeyContext _localctx = new ClasskeyContext(_ctx, getState());
		enterRule(_localctx, 320, RULE_classkey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2067);
			_la = _input.LA(1);
			if ( !(((((_la - 30)) & ~0x3f) == 0 && ((1L << (_la - 30)) & ((1L << (Class - 30)) | (1L << (Struct - 30)) | (1L << (Union - 30)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MemberspecificationContext extends ParserRuleContext {
		public MemberdeclarationContext memberdeclaration() {
			return getRuleContext(MemberdeclarationContext.class,0);
		}
		public MemberspecificationContext memberspecification() {
			return getRuleContext(MemberspecificationContext.class,0);
		}
		public AccessspecifierContext accessspecifier() {
			return getRuleContext(AccessspecifierContext.class,0);
		}
		public MemberspecificationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberspecification; }
	}

	public final MemberspecificationContext memberspecification() throws RecognitionException {
		MemberspecificationContext _localctx = new MemberspecificationContext(_ctx, getState());
		enterRule(_localctx, 322, RULE_memberspecification);
		int _la;
		try {
			setState(2078);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__11:
			case Alignas:
			case Auto:
			case Bool:
			case Char:
			case Char16:
			case Char32:
			case Class:
			case Const:
			case Constexpr:
			case Decltype:
			case Double:
			case Enum:
			case Explicit:
			case Extern:
			case Float:
			case Friend:
			case Inline:
			case Int:
			case Long:
			case Mutable:
			case Operator:
			case Register:
			case Short:
			case Signed:
			case Static:
			case Static_assert:
			case Struct:
			case Template:
			case Thread_local:
			case Typedef:
			case Typename_:
			case Union:
			case Unsigned:
			case Using:
			case Virtual:
			case Void:
			case Volatile:
			case Wchar:
			case LeftParen:
			case LeftBracket:
			case Star:
			case And:
			case Tilde:
			case Colon:
			case Doublecolon:
			case Semi:
			case Ellipsis:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(2069);
				memberdeclaration();
				setState(2071);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Protected - 64)) | (1L << (Public - 64)) | (1L << (Register - 64)) | (1L << (Short - 64)) | (1L << (Signed - 64)) | (1L << (Static - 64)) | (1L << (Static_assert - 64)) | (1L << (Struct - 64)) | (1L << (Template - 64)) | (1L << (Thread_local - 64)) | (1L << (Typedef - 64)) | (1L << (Typename_ - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (Wchar - 64)) | (1L << (LeftParen - 64)) | (1L << (LeftBracket - 64)) | (1L << (Star - 64)) | (1L << (And - 64)) | (1L << (Tilde - 64)))) != 0) || ((((_la - 137)) & ~0x3f) == 0 && ((1L << (_la - 137)) & ((1L << (Colon - 137)) | (1L << (Doublecolon - 137)) | (1L << (Semi - 137)) | (1L << (Ellipsis - 137)) | (1L << (Identifier - 137)))) != 0)) {
					{
					setState(2070);
					memberspecification();
					}
				}

				}
				break;
			case Private:
			case Protected:
			case Public:
				enterOuterAlt(_localctx, 2);
				{
				setState(2073);
				accessspecifier();
				setState(2074);
				match(Colon);
				setState(2076);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Protected - 64)) | (1L << (Public - 64)) | (1L << (Register - 64)) | (1L << (Short - 64)) | (1L << (Signed - 64)) | (1L << (Static - 64)) | (1L << (Static_assert - 64)) | (1L << (Struct - 64)) | (1L << (Template - 64)) | (1L << (Thread_local - 64)) | (1L << (Typedef - 64)) | (1L << (Typename_ - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (Wchar - 64)) | (1L << (LeftParen - 64)) | (1L << (LeftBracket - 64)) | (1L << (Star - 64)) | (1L << (And - 64)) | (1L << (Tilde - 64)))) != 0) || ((((_la - 137)) & ~0x3f) == 0 && ((1L << (_la - 137)) & ((1L << (Colon - 137)) | (1L << (Doublecolon - 137)) | (1L << (Semi - 137)) | (1L << (Ellipsis - 137)) | (1L << (Identifier - 137)))) != 0)) {
					{
					setState(2075);
					memberspecification();
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MemberdeclarationContext extends ParserRuleContext {
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public DeclspecifierseqContext declspecifierseq() {
			return getRuleContext(DeclspecifierseqContext.class,0);
		}
		public MemberdeclaratorlistContext memberdeclaratorlist() {
			return getRuleContext(MemberdeclaratorlistContext.class,0);
		}
		public FunctiondefinitionContext functiondefinition() {
			return getRuleContext(FunctiondefinitionContext.class,0);
		}
		public UsingdeclarationContext usingdeclaration() {
			return getRuleContext(UsingdeclarationContext.class,0);
		}
		public Static_assertdeclarationContext static_assertdeclaration() {
			return getRuleContext(Static_assertdeclarationContext.class,0);
		}
		public TemplatedeclarationContext templatedeclaration() {
			return getRuleContext(TemplatedeclarationContext.class,0);
		}
		public AliasdeclarationContext aliasdeclaration() {
			return getRuleContext(AliasdeclarationContext.class,0);
		}
		public EmptydeclarationContext emptydeclaration() {
			return getRuleContext(EmptydeclarationContext.class,0);
		}
		public MemberdeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberdeclaration; }
	}

	public final MemberdeclarationContext memberdeclaration() throws RecognitionException {
		MemberdeclarationContext _localctx = new MemberdeclarationContext(_ctx, getState());
		enterRule(_localctx, 324, RULE_memberdeclaration);
		int _la;
		try {
			setState(2096);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,250,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2081);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,247,_ctx) ) {
				case 1:
					{
					setState(2080);
					attributespecifierseq(0);
					}
					break;
				}
				setState(2084);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,248,_ctx) ) {
				case 1:
					{
					setState(2083);
					declspecifierseq();
					}
					break;
				}
				setState(2087);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Decltype) | (1L << Operator))) != 0) || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (LeftParen - 94)) | (1L << (LeftBracket - 94)) | (1L << (Star - 94)) | (1L << (And - 94)) | (1L << (Tilde - 94)) | (1L << (Colon - 94)) | (1L << (Doublecolon - 94)) | (1L << (Ellipsis - 94)) | (1L << (Identifier - 94)))) != 0)) {
					{
					setState(2086);
					memberdeclaratorlist(0);
					}
				}

				setState(2089);
				match(Semi);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2090);
				functiondefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2091);
				usingdeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2092);
				static_assertdeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2093);
				templatedeclaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2094);
				aliasdeclaration();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2095);
				emptydeclaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MemberdeclaratorlistContext extends ParserRuleContext {
		public MemberdeclaratorContext memberdeclarator() {
			return getRuleContext(MemberdeclaratorContext.class,0);
		}
		public MemberdeclaratorlistContext memberdeclaratorlist() {
			return getRuleContext(MemberdeclaratorlistContext.class,0);
		}
		public MemberdeclaratorlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberdeclaratorlist; }
	}

	public final MemberdeclaratorlistContext memberdeclaratorlist() throws RecognitionException {
		return memberdeclaratorlist(0);
	}

	private MemberdeclaratorlistContext memberdeclaratorlist(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		MemberdeclaratorlistContext _localctx = new MemberdeclaratorlistContext(_ctx, _parentState);
		MemberdeclaratorlistContext _prevctx = _localctx;
		int _startState = 326;
		enterRecursionRule(_localctx, 326, RULE_memberdeclaratorlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2099);
			memberdeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(2106);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,251,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberdeclaratorlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberdeclaratorlist);
					setState(2101);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2102);
					match(Comma);
					setState(2103);
					memberdeclarator();
					}
					} 
				}
				setState(2108);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,251,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class MemberdeclaratorContext extends ParserRuleContext {
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public VirtspecifierseqContext virtspecifierseq() {
			return getRuleContext(VirtspecifierseqContext.class,0);
		}
		public PurespecifierContext purespecifier() {
			return getRuleContext(PurespecifierContext.class,0);
		}
		public BraceorequalinitializerContext braceorequalinitializer() {
			return getRuleContext(BraceorequalinitializerContext.class,0);
		}
		public ConstantexpressionContext constantexpression() {
			return getRuleContext(ConstantexpressionContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public MemberdeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberdeclarator; }
	}

	public final MemberdeclaratorContext memberdeclarator() throws RecognitionException {
		MemberdeclaratorContext _localctx = new MemberdeclaratorContext(_ctx, getState());
		enterRule(_localctx, 328, RULE_memberdeclarator);
		int _la;
		try {
			setState(2128);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,257,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2109);
				declarator();
				setState(2111);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,252,_ctx) ) {
				case 1:
					{
					setState(2110);
					virtspecifierseq(0);
					}
					break;
				}
				setState(2114);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,253,_ctx) ) {
				case 1:
					{
					setState(2113);
					purespecifier();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2116);
				declarator();
				setState(2118);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,254,_ctx) ) {
				case 1:
					{
					setState(2117);
					braceorequalinitializer();
					}
					break;
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2121);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2120);
					match(Identifier);
					}
				}

				setState(2124);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2123);
					attributespecifierseq(0);
					}
				}

				setState(2126);
				match(Colon);
				setState(2127);
				constantexpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VirtspecifierseqContext extends ParserRuleContext {
		public VirtspecifierContext virtspecifier() {
			return getRuleContext(VirtspecifierContext.class,0);
		}
		public VirtspecifierseqContext virtspecifierseq() {
			return getRuleContext(VirtspecifierseqContext.class,0);
		}
		public VirtspecifierseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_virtspecifierseq; }
	}

	public final VirtspecifierseqContext virtspecifierseq() throws RecognitionException {
		return virtspecifierseq(0);
	}

	private VirtspecifierseqContext virtspecifierseq(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		VirtspecifierseqContext _localctx = new VirtspecifierseqContext(_ctx, _parentState);
		VirtspecifierseqContext _prevctx = _localctx;
		int _startState = 330;
		enterRecursionRule(_localctx, 330, RULE_virtspecifierseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2131);
			virtspecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(2137);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,258,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new VirtspecifierseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_virtspecifierseq);
					setState(2133);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2134);
					virtspecifier();
					}
					} 
				}
				setState(2139);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,258,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class VirtspecifierContext extends ParserRuleContext {
		public TerminalNode Override() { return getToken(AergiaCpp14Parser.Override, 0); }
		public TerminalNode Final() { return getToken(AergiaCpp14Parser.Final, 0); }
		public VirtspecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_virtspecifier; }
	}

	public final VirtspecifierContext virtspecifier() throws RecognitionException {
		VirtspecifierContext _localctx = new VirtspecifierContext(_ctx, getState());
		enterRule(_localctx, 332, RULE_virtspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2140);
			_la = _input.LA(1);
			if ( !(_la==Final || _la==Override) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PurespecifierContext extends ParserRuleContext {
		public Token val;
		public TerminalNode Assign() { return getToken(AergiaCpp14Parser.Assign, 0); }
		public TerminalNode Octalliteral() { return getToken(AergiaCpp14Parser.Octalliteral, 0); }
		public PurespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_purespecifier; }
	}

	public final PurespecifierContext purespecifier() throws RecognitionException {
		PurespecifierContext _localctx = new PurespecifierContext(_ctx, getState());
		enterRule(_localctx, 334, RULE_purespecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2142);
			match(Assign);
			setState(2143);
			((PurespecifierContext)_localctx).val = match(Octalliteral);
			if((((PurespecifierContext)_localctx).val!=null?((PurespecifierContext)_localctx).val.getText():null).compareTo("0")!=0) throw new InputMismatchException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BaseclauseContext extends ParserRuleContext {
		public BasespecifierlistContext basespecifierlist() {
			return getRuleContext(BasespecifierlistContext.class,0);
		}
		public BaseclauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_baseclause; }
	}

	public final BaseclauseContext baseclause() throws RecognitionException {
		BaseclauseContext _localctx = new BaseclauseContext(_ctx, getState());
		enterRule(_localctx, 336, RULE_baseclause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2146);
			match(Colon);
			setState(2147);
			basespecifierlist(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BasespecifierlistContext extends ParserRuleContext {
		public BasespecifierContext basespecifier() {
			return getRuleContext(BasespecifierContext.class,0);
		}
		public BasespecifierlistContext basespecifierlist() {
			return getRuleContext(BasespecifierlistContext.class,0);
		}
		public BasespecifierlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_basespecifierlist; }
	}

	public final BasespecifierlistContext basespecifierlist() throws RecognitionException {
		return basespecifierlist(0);
	}

	private BasespecifierlistContext basespecifierlist(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BasespecifierlistContext _localctx = new BasespecifierlistContext(_ctx, _parentState);
		BasespecifierlistContext _prevctx = _localctx;
		int _startState = 338;
		enterRecursionRule(_localctx, 338, RULE_basespecifierlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2150);
			basespecifier();
			setState(2152);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,259,_ctx) ) {
			case 1:
				{
				setState(2151);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2162);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,261,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BasespecifierlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_basespecifierlist);
					setState(2154);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2155);
					match(Comma);
					setState(2156);
					basespecifier();
					setState(2158);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,260,_ctx) ) {
					case 1:
						{
						setState(2157);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2164);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,261,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class BasespecifierContext extends ParserRuleContext {
		public BasetypespecifierContext basetypespecifier() {
			return getRuleContext(BasetypespecifierContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public TerminalNode Virtual() { return getToken(AergiaCpp14Parser.Virtual, 0); }
		public AccessspecifierContext accessspecifier() {
			return getRuleContext(AccessspecifierContext.class,0);
		}
		public BasespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_basespecifier; }
	}

	public final BasespecifierContext basespecifier() throws RecognitionException {
		BasespecifierContext _localctx = new BasespecifierContext(_ctx, getState());
		enterRule(_localctx, 340, RULE_basespecifier);
		int _la;
		try {
			setState(2186);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,267,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2166);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2165);
					attributespecifierseq(0);
					}
				}

				setState(2168);
				basetypespecifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2170);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2169);
					attributespecifierseq(0);
					}
				}

				setState(2172);
				match(Virtual);
				setState(2174);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 63)) & ~0x3f) == 0 && ((1L << (_la - 63)) & ((1L << (Private - 63)) | (1L << (Protected - 63)) | (1L << (Public - 63)))) != 0)) {
					{
					setState(2173);
					accessspecifier();
					}
				}

				setState(2176);
				basetypespecifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2178);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2177);
					attributespecifierseq(0);
					}
				}

				setState(2180);
				accessspecifier();
				setState(2182);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Virtual) {
					{
					setState(2181);
					match(Virtual);
					}
				}

				setState(2184);
				basetypespecifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassordecltypeContext extends ParserRuleContext {
		public ClassnameContext classname() {
			return getRuleContext(ClassnameContext.class,0);
		}
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public DecltypespecifierContext decltypespecifier() {
			return getRuleContext(DecltypespecifierContext.class,0);
		}
		public ClassordecltypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classordecltype; }
	}

	public final ClassordecltypeContext classordecltype() throws RecognitionException {
		ClassordecltypeContext _localctx = new ClassordecltypeContext(_ctx, getState());
		enterRule(_localctx, 342, RULE_classordecltype);
		try {
			setState(2193);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,269,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2189);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,268,_ctx) ) {
				case 1:
					{
					setState(2188);
					nestednamespecifier(0);
					}
					break;
				}
				setState(2191);
				classname();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2192);
				decltypespecifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BasetypespecifierContext extends ParserRuleContext {
		public ClassordecltypeContext classordecltype() {
			return getRuleContext(ClassordecltypeContext.class,0);
		}
		public BasetypespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_basetypespecifier; }
	}

	public final BasetypespecifierContext basetypespecifier() throws RecognitionException {
		BasetypespecifierContext _localctx = new BasetypespecifierContext(_ctx, getState());
		enterRule(_localctx, 344, RULE_basetypespecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2195);
			classordecltype();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AccessspecifierContext extends ParserRuleContext {
		public TerminalNode Private() { return getToken(AergiaCpp14Parser.Private, 0); }
		public TerminalNode Protected() { return getToken(AergiaCpp14Parser.Protected, 0); }
		public TerminalNode Public() { return getToken(AergiaCpp14Parser.Public, 0); }
		public AccessspecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_accessspecifier; }
	}

	public final AccessspecifierContext accessspecifier() throws RecognitionException {
		AccessspecifierContext _localctx = new AccessspecifierContext(_ctx, getState());
		enterRule(_localctx, 346, RULE_accessspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2197);
			_la = _input.LA(1);
			if ( !(((((_la - 63)) & ~0x3f) == 0 && ((1L << (_la - 63)) & ((1L << (Private - 63)) | (1L << (Protected - 63)) | (1L << (Public - 63)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConversionfunctionidContext extends ParserRuleContext {
		public TerminalNode Operator() { return getToken(AergiaCpp14Parser.Operator, 0); }
		public ConversiontypeidContext conversiontypeid() {
			return getRuleContext(ConversiontypeidContext.class,0);
		}
		public ConversionfunctionidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conversionfunctionid; }
	}

	public final ConversionfunctionidContext conversionfunctionid() throws RecognitionException {
		ConversionfunctionidContext _localctx = new ConversionfunctionidContext(_ctx, getState());
		enterRule(_localctx, 348, RULE_conversionfunctionid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2199);
			match(Operator);
			setState(2200);
			conversiontypeid();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConversiontypeidContext extends ParserRuleContext {
		public TypespecifierseqContext typespecifierseq() {
			return getRuleContext(TypespecifierseqContext.class,0);
		}
		public ConversiondeclaratorContext conversiondeclarator() {
			return getRuleContext(ConversiondeclaratorContext.class,0);
		}
		public ConversiontypeidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conversiontypeid; }
	}

	public final ConversiontypeidContext conversiontypeid() throws RecognitionException {
		ConversiontypeidContext _localctx = new ConversiontypeidContext(_ctx, getState());
		enterRule(_localctx, 350, RULE_conversiontypeid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2202);
			typespecifierseq();
			setState(2204);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,270,_ctx) ) {
			case 1:
				{
				setState(2203);
				conversiondeclarator();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConversiondeclaratorContext extends ParserRuleContext {
		public PtroperatorContext ptroperator() {
			return getRuleContext(PtroperatorContext.class,0);
		}
		public ConversiondeclaratorContext conversiondeclarator() {
			return getRuleContext(ConversiondeclaratorContext.class,0);
		}
		public ConversiondeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conversiondeclarator; }
	}

	public final ConversiondeclaratorContext conversiondeclarator() throws RecognitionException {
		ConversiondeclaratorContext _localctx = new ConversiondeclaratorContext(_ctx, getState());
		enterRule(_localctx, 352, RULE_conversiondeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2206);
			ptroperator();
			setState(2208);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,271,_ctx) ) {
			case 1:
				{
				setState(2207);
				conversiondeclarator();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CtorinitializerContext extends ParserRuleContext {
		public MeminitializerlistContext meminitializerlist() {
			return getRuleContext(MeminitializerlistContext.class,0);
		}
		public CtorinitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ctorinitializer; }
	}

	public final CtorinitializerContext ctorinitializer() throws RecognitionException {
		CtorinitializerContext _localctx = new CtorinitializerContext(_ctx, getState());
		enterRule(_localctx, 354, RULE_ctorinitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2210);
			match(Colon);
			setState(2211);
			meminitializerlist();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MeminitializerlistContext extends ParserRuleContext {
		public MeminitializerContext meminitializer() {
			return getRuleContext(MeminitializerContext.class,0);
		}
		public MeminitializerlistContext meminitializerlist() {
			return getRuleContext(MeminitializerlistContext.class,0);
		}
		public MeminitializerlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_meminitializerlist; }
	}

	public final MeminitializerlistContext meminitializerlist() throws RecognitionException {
		MeminitializerlistContext _localctx = new MeminitializerlistContext(_ctx, getState());
		enterRule(_localctx, 356, RULE_meminitializerlist);
		int _la;
		try {
			setState(2224);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,274,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2213);
				meminitializer();
				setState(2215);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(2214);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2217);
				meminitializer();
				setState(2219);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(2218);
					match(Ellipsis);
					}
				}

				setState(2221);
				match(Comma);
				setState(2222);
				meminitializerlist();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MeminitializerContext extends ParserRuleContext {
		public MeminitializeridContext meminitializerid() {
			return getRuleContext(MeminitializeridContext.class,0);
		}
		public ExpressionlistContext expressionlist() {
			return getRuleContext(ExpressionlistContext.class,0);
		}
		public BracedinitlistContext bracedinitlist() {
			return getRuleContext(BracedinitlistContext.class,0);
		}
		public MeminitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_meminitializer; }
	}

	public final MeminitializerContext meminitializer() throws RecognitionException {
		MeminitializerContext _localctx = new MeminitializerContext(_ctx, getState());
		enterRule(_localctx, 358, RULE_meminitializer);
		int _la;
		try {
			setState(2236);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,276,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2226);
				meminitializerid();
				setState(2227);
				match(LeftParen);
				setState(2229);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftBrace - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(2228);
					expressionlist();
					}
				}

				setState(2231);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2233);
				meminitializerid();
				setState(2234);
				bracedinitlist();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MeminitializeridContext extends ParserRuleContext {
		public ClassordecltypeContext classordecltype() {
			return getRuleContext(ClassordecltypeContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public MeminitializeridContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_meminitializerid; }
	}

	public final MeminitializeridContext meminitializerid() throws RecognitionException {
		MeminitializeridContext _localctx = new MeminitializeridContext(_ctx, getState());
		enterRule(_localctx, 360, RULE_meminitializerid);
		try {
			setState(2240);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,277,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2238);
				classordecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2239);
				match(Identifier);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OperatorfunctionidContext extends ParserRuleContext {
		public TerminalNode Operator() { return getToken(AergiaCpp14Parser.Operator, 0); }
		public TheoperatorContext theoperator() {
			return getRuleContext(TheoperatorContext.class,0);
		}
		public OperatorfunctionidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operatorfunctionid; }
	}

	public final OperatorfunctionidContext operatorfunctionid() throws RecognitionException {
		OperatorfunctionidContext _localctx = new OperatorfunctionidContext(_ctx, getState());
		enterRule(_localctx, 362, RULE_operatorfunctionid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2242);
			match(Operator);
			setState(2243);
			theoperator();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LiteraloperatoridContext extends ParserRuleContext {
		public TerminalNode Operator() { return getToken(AergiaCpp14Parser.Operator, 0); }
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public TerminalNode Stringliteral() { return getToken(AergiaCpp14Parser.Stringliteral, 0); }
		public AergiastringContext aergiastring() {
			return getRuleContext(AergiastringContext.class,0);
		}
		public TerminalNode Userdefinedstringliteral() { return getToken(AergiaCpp14Parser.Userdefinedstringliteral, 0); }
		public LiteraloperatoridContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literaloperatorid; }
	}

	public final LiteraloperatoridContext literaloperatorid() throws RecognitionException {
		LiteraloperatoridContext _localctx = new LiteraloperatoridContext(_ctx, getState());
		enterRule(_localctx, 364, RULE_literaloperatorid);
		try {
			setState(2256);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,280,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2245);
				match(Operator);
				setState(2248);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case Stringliteral:
					{
					setState(2246);
					match(Stringliteral);
					}
					break;
				case T__5:
				case Encodingprefix:
					{
					setState(2247);
					aergiastring();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(2250);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2251);
				match(Operator);
				setState(2254);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case Userdefinedstringliteral:
					{
					setState(2252);
					match(Userdefinedstringliteral);
					}
					break;
				case T__5:
				case Encodingprefix:
					{
					setState(2253);
					aergiastring();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TemplatedeclarationContext extends ParserRuleContext {
		public TerminalNode Template() { return getToken(AergiaCpp14Parser.Template, 0); }
		public TemplateparameterlistContext templateparameterlist() {
			return getRuleContext(TemplateparameterlistContext.class,0);
		}
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public TemplatedeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templatedeclaration; }
	}

	public final TemplatedeclarationContext templatedeclaration() throws RecognitionException {
		TemplatedeclarationContext _localctx = new TemplatedeclarationContext(_ctx, getState());
		enterRule(_localctx, 366, RULE_templatedeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2258);
			match(Template);
			setState(2259);
			match(Less);
			setState(2260);
			templateparameterlist(0);
			setState(2261);
			match(Greater);
			setState(2262);
			declaration();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TemplateparameterlistContext extends ParserRuleContext {
		public TemplateparameterContext templateparameter() {
			return getRuleContext(TemplateparameterContext.class,0);
		}
		public TemplateparameterlistContext templateparameterlist() {
			return getRuleContext(TemplateparameterlistContext.class,0);
		}
		public TemplateparameterlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateparameterlist; }
	}

	public final TemplateparameterlistContext templateparameterlist() throws RecognitionException {
		return templateparameterlist(0);
	}

	private TemplateparameterlistContext templateparameterlist(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TemplateparameterlistContext _localctx = new TemplateparameterlistContext(_ctx, _parentState);
		TemplateparameterlistContext _prevctx = _localctx;
		int _startState = 368;
		enterRecursionRule(_localctx, 368, RULE_templateparameterlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2265);
			templateparameter();
			}
			_ctx.stop = _input.LT(-1);
			setState(2272);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,281,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateparameterlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateparameterlist);
					setState(2267);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2268);
					match(Comma);
					setState(2269);
					templateparameter();
					}
					} 
				}
				setState(2274);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,281,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class TemplateparameterContext extends ParserRuleContext {
		public TypeparameterContext typeparameter() {
			return getRuleContext(TypeparameterContext.class,0);
		}
		public ParameterdeclarationContext parameterdeclaration() {
			return getRuleContext(ParameterdeclarationContext.class,0);
		}
		public TemplateparameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateparameter; }
	}

	public final TemplateparameterContext templateparameter() throws RecognitionException {
		TemplateparameterContext _localctx = new TemplateparameterContext(_ctx, getState());
		enterRule(_localctx, 370, RULE_templateparameter);
		try {
			setState(2277);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,282,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2275);
				typeparameter();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2276);
				parameterdeclaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeparameterContext extends ParserRuleContext {
		public TerminalNode Class() { return getToken(AergiaCpp14Parser.Class, 0); }
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public ThetypeidContext thetypeid() {
			return getRuleContext(ThetypeidContext.class,0);
		}
		public TerminalNode Typename_() { return getToken(AergiaCpp14Parser.Typename_, 0); }
		public TerminalNode Template() { return getToken(AergiaCpp14Parser.Template, 0); }
		public TemplateparameterlistContext templateparameterlist() {
			return getRuleContext(TemplateparameterlistContext.class,0);
		}
		public IdexpressionContext idexpression() {
			return getRuleContext(IdexpressionContext.class,0);
		}
		public TypeparameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeparameter; }
	}

	public final TypeparameterContext typeparameter() throws RecognitionException {
		TypeparameterContext _localctx = new TypeparameterContext(_ctx, getState());
		enterRule(_localctx, 372, RULE_typeparameter);
		int _la;
		try {
			setState(2327);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,292,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2279);
				match(Class);
				setState(2281);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,283,_ctx) ) {
				case 1:
					{
					setState(2280);
					match(Ellipsis);
					}
					break;
				}
				setState(2284);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,284,_ctx) ) {
				case 1:
					{
					setState(2283);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2286);
				match(Class);
				setState(2288);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2287);
					match(Identifier);
					}
				}

				setState(2290);
				match(Assign);
				setState(2291);
				thetypeid();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2292);
				match(Typename_);
				setState(2294);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,286,_ctx) ) {
				case 1:
					{
					setState(2293);
					match(Ellipsis);
					}
					break;
				}
				setState(2297);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,287,_ctx) ) {
				case 1:
					{
					setState(2296);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2299);
				match(Typename_);
				setState(2301);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2300);
					match(Identifier);
					}
				}

				setState(2303);
				match(Assign);
				setState(2304);
				thetypeid();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2305);
				match(Template);
				setState(2306);
				match(Less);
				setState(2307);
				templateparameterlist(0);
				setState(2308);
				match(Greater);
				setState(2309);
				match(Class);
				setState(2311);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,289,_ctx) ) {
				case 1:
					{
					setState(2310);
					match(Ellipsis);
					}
					break;
				}
				setState(2314);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,290,_ctx) ) {
				case 1:
					{
					setState(2313);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2316);
				match(Template);
				setState(2317);
				match(Less);
				setState(2318);
				templateparameterlist(0);
				setState(2319);
				match(Greater);
				setState(2320);
				match(Class);
				setState(2322);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2321);
					match(Identifier);
					}
				}

				setState(2324);
				match(Assign);
				setState(2325);
				idexpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpletemplateidContext extends ParserRuleContext {
		public TemplatenameContext templatename() {
			return getRuleContext(TemplatenameContext.class,0);
		}
		public TemplateargumentlistContext templateargumentlist() {
			return getRuleContext(TemplateargumentlistContext.class,0);
		}
		public SimpletemplateidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpletemplateid; }
	}

	public final SimpletemplateidContext simpletemplateid() throws RecognitionException {
		SimpletemplateidContext _localctx = new SimpletemplateidContext(_ctx, getState());
		enterRule(_localctx, 374, RULE_simpletemplateid);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2329);
			templatename();
			setState(2330);
			match(Less);
			setState(2332);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 69)) & ~0x3f) == 0 && ((1L << (_la - 69)) & ((1L << (Short - 69)) | (1L << (Signed - 69)) | (1L << (Struct - 69)) | (1L << (This - 69)) | (1L << (True - 69)) | (1L << (Typename_ - 69)) | (1L << (Union - 69)) | (1L << (Unsigned - 69)) | (1L << (Void - 69)) | (1L << (Volatile - 69)) | (1L << (Wchar - 69)) | (1L << (LeftParen - 69)) | (1L << (LeftBracket - 69)) | (1L << (Tilde - 69)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Identifier - 138)) | (1L << (Integerliteral - 138)) | (1L << (Characterliteral - 138)) | (1L << (Floatingliteral - 138)) | (1L << (Stringliteral - 138)) | (1L << (Userdefinedintegerliteral - 138)) | (1L << (Userdefinedfloatingliteral - 138)) | (1L << (Userdefinedstringliteral - 138)) | (1L << (Userdefinedcharacterliteral - 138)))) != 0)) {
				{
				setState(2331);
				templateargumentlist(0);
				}
			}

			setState(2334);
			match(Greater);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TemplateidContext extends ParserRuleContext {
		public SimpletemplateidContext simpletemplateid() {
			return getRuleContext(SimpletemplateidContext.class,0);
		}
		public OperatorfunctionidContext operatorfunctionid() {
			return getRuleContext(OperatorfunctionidContext.class,0);
		}
		public TemplateargumentlistContext templateargumentlist() {
			return getRuleContext(TemplateargumentlistContext.class,0);
		}
		public LiteraloperatoridContext literaloperatorid() {
			return getRuleContext(LiteraloperatoridContext.class,0);
		}
		public TemplateidContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateid; }
	}

	public final TemplateidContext templateid() throws RecognitionException {
		TemplateidContext _localctx = new TemplateidContext(_ctx, getState());
		enterRule(_localctx, 376, RULE_templateid);
		int _la;
		try {
			setState(2351);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,296,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2336);
				simpletemplateid();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2337);
				operatorfunctionid();
				setState(2338);
				match(Less);
				setState(2340);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 69)) & ~0x3f) == 0 && ((1L << (_la - 69)) & ((1L << (Short - 69)) | (1L << (Signed - 69)) | (1L << (Struct - 69)) | (1L << (This - 69)) | (1L << (True - 69)) | (1L << (Typename_ - 69)) | (1L << (Union - 69)) | (1L << (Unsigned - 69)) | (1L << (Void - 69)) | (1L << (Volatile - 69)) | (1L << (Wchar - 69)) | (1L << (LeftParen - 69)) | (1L << (LeftBracket - 69)) | (1L << (Tilde - 69)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Identifier - 138)) | (1L << (Integerliteral - 138)) | (1L << (Characterliteral - 138)) | (1L << (Floatingliteral - 138)) | (1L << (Stringliteral - 138)) | (1L << (Userdefinedintegerliteral - 138)) | (1L << (Userdefinedfloatingliteral - 138)) | (1L << (Userdefinedstringliteral - 138)) | (1L << (Userdefinedcharacterliteral - 138)))) != 0)) {
					{
					setState(2339);
					templateargumentlist(0);
					}
				}

				setState(2342);
				match(Greater);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2344);
				literaloperatorid();
				setState(2345);
				match(Less);
				setState(2347);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 69)) & ~0x3f) == 0 && ((1L << (_la - 69)) & ((1L << (Short - 69)) | (1L << (Signed - 69)) | (1L << (Struct - 69)) | (1L << (This - 69)) | (1L << (True - 69)) | (1L << (Typename_ - 69)) | (1L << (Union - 69)) | (1L << (Unsigned - 69)) | (1L << (Void - 69)) | (1L << (Volatile - 69)) | (1L << (Wchar - 69)) | (1L << (LeftParen - 69)) | (1L << (LeftBracket - 69)) | (1L << (Tilde - 69)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Identifier - 138)) | (1L << (Integerliteral - 138)) | (1L << (Characterliteral - 138)) | (1L << (Floatingliteral - 138)) | (1L << (Stringliteral - 138)) | (1L << (Userdefinedintegerliteral - 138)) | (1L << (Userdefinedfloatingliteral - 138)) | (1L << (Userdefinedstringliteral - 138)) | (1L << (Userdefinedcharacterliteral - 138)))) != 0)) {
					{
					setState(2346);
					templateargumentlist(0);
					}
				}

				setState(2349);
				match(Greater);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TemplatenameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public TemplatenameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templatename; }
	}

	public final TemplatenameContext templatename() throws RecognitionException {
		TemplatenameContext _localctx = new TemplatenameContext(_ctx, getState());
		enterRule(_localctx, 378, RULE_templatename);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2353);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TemplateargumentlistContext extends ParserRuleContext {
		public TemplateargumentContext templateargument() {
			return getRuleContext(TemplateargumentContext.class,0);
		}
		public TemplateargumentlistContext templateargumentlist() {
			return getRuleContext(TemplateargumentlistContext.class,0);
		}
		public TemplateargumentlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateargumentlist; }
	}

	public final TemplateargumentlistContext templateargumentlist() throws RecognitionException {
		return templateargumentlist(0);
	}

	private TemplateargumentlistContext templateargumentlist(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TemplateargumentlistContext _localctx = new TemplateargumentlistContext(_ctx, _parentState);
		TemplateargumentlistContext _prevctx = _localctx;
		int _startState = 380;
		enterRecursionRule(_localctx, 380, RULE_templateargumentlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2356);
			templateargument();
			setState(2358);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,297,_ctx) ) {
			case 1:
				{
				setState(2357);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2368);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,299,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateargumentlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateargumentlist);
					setState(2360);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2361);
					match(Comma);
					setState(2362);
					templateargument();
					setState(2364);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,298,_ctx) ) {
					case 1:
						{
						setState(2363);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2370);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,299,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class TemplateargumentContext extends ParserRuleContext {
		public ThetypeidContext thetypeid() {
			return getRuleContext(ThetypeidContext.class,0);
		}
		public ConstantexpressionContext constantexpression() {
			return getRuleContext(ConstantexpressionContext.class,0);
		}
		public IdexpressionContext idexpression() {
			return getRuleContext(IdexpressionContext.class,0);
		}
		public TemplateargumentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateargument; }
	}

	public final TemplateargumentContext templateargument() throws RecognitionException {
		TemplateargumentContext _localctx = new TemplateargumentContext(_ctx, getState());
		enterRule(_localctx, 382, RULE_templateargument);
		try {
			setState(2374);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,300,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2371);
				thetypeid();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2372);
				constantexpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2373);
				idexpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypenamespecifierContext extends ParserRuleContext {
		public TerminalNode Typename_() { return getToken(AergiaCpp14Parser.Typename_, 0); }
		public NestednamespecifierContext nestednamespecifier() {
			return getRuleContext(NestednamespecifierContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(AergiaCpp14Parser.Identifier, 0); }
		public SimpletemplateidContext simpletemplateid() {
			return getRuleContext(SimpletemplateidContext.class,0);
		}
		public TerminalNode Template() { return getToken(AergiaCpp14Parser.Template, 0); }
		public TypenamespecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typenamespecifier; }
	}

	public final TypenamespecifierContext typenamespecifier() throws RecognitionException {
		TypenamespecifierContext _localctx = new TypenamespecifierContext(_ctx, getState());
		enterRule(_localctx, 384, RULE_typenamespecifier);
		int _la;
		try {
			setState(2387);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,302,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2376);
				match(Typename_);
				setState(2377);
				nestednamespecifier(0);
				setState(2378);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2380);
				match(Typename_);
				setState(2381);
				nestednamespecifier(0);
				setState(2383);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(2382);
					match(Template);
					}
				}

				setState(2385);
				simpletemplateid();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExplicitinstantiationContext extends ParserRuleContext {
		public TerminalNode Template() { return getToken(AergiaCpp14Parser.Template, 0); }
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public TerminalNode Extern() { return getToken(AergiaCpp14Parser.Extern, 0); }
		public ExplicitinstantiationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_explicitinstantiation; }
	}

	public final ExplicitinstantiationContext explicitinstantiation() throws RecognitionException {
		ExplicitinstantiationContext _localctx = new ExplicitinstantiationContext(_ctx, getState());
		enterRule(_localctx, 386, RULE_explicitinstantiation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2390);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Extern) {
				{
				setState(2389);
				match(Extern);
				}
			}

			setState(2392);
			match(Template);
			setState(2393);
			declaration();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExplicitspecializationContext extends ParserRuleContext {
		public TerminalNode Template() { return getToken(AergiaCpp14Parser.Template, 0); }
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public ExplicitspecializationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_explicitspecialization; }
	}

	public final ExplicitspecializationContext explicitspecialization() throws RecognitionException {
		ExplicitspecializationContext _localctx = new ExplicitspecializationContext(_ctx, getState());
		enterRule(_localctx, 388, RULE_explicitspecialization);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2395);
			match(Template);
			setState(2396);
			match(Less);
			setState(2397);
			match(Greater);
			setState(2398);
			declaration();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TryblockContext extends ParserRuleContext {
		public TerminalNode Try() { return getToken(AergiaCpp14Parser.Try, 0); }
		public CompoundstatementContext compoundstatement() {
			return getRuleContext(CompoundstatementContext.class,0);
		}
		public HandlerseqContext handlerseq() {
			return getRuleContext(HandlerseqContext.class,0);
		}
		public TryblockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tryblock; }
	}

	public final TryblockContext tryblock() throws RecognitionException {
		TryblockContext _localctx = new TryblockContext(_ctx, getState());
		enterRule(_localctx, 390, RULE_tryblock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2400);
			match(Try);
			setState(2401);
			compoundstatement();
			setState(2402);
			handlerseq();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctiontryblockContext extends ParserRuleContext {
		public TerminalNode Try() { return getToken(AergiaCpp14Parser.Try, 0); }
		public CompoundstatementContext compoundstatement() {
			return getRuleContext(CompoundstatementContext.class,0);
		}
		public HandlerseqContext handlerseq() {
			return getRuleContext(HandlerseqContext.class,0);
		}
		public CtorinitializerContext ctorinitializer() {
			return getRuleContext(CtorinitializerContext.class,0);
		}
		public FunctiontryblockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functiontryblock; }
	}

	public final FunctiontryblockContext functiontryblock() throws RecognitionException {
		FunctiontryblockContext _localctx = new FunctiontryblockContext(_ctx, getState());
		enterRule(_localctx, 392, RULE_functiontryblock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2404);
			match(Try);
			setState(2406);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2405);
				ctorinitializer();
				}
			}

			setState(2408);
			compoundstatement();
			setState(2409);
			handlerseq();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class HandlerseqContext extends ParserRuleContext {
		public HandlerContext handler() {
			return getRuleContext(HandlerContext.class,0);
		}
		public HandlerseqContext handlerseq() {
			return getRuleContext(HandlerseqContext.class,0);
		}
		public HandlerseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_handlerseq; }
	}

	public final HandlerseqContext handlerseq() throws RecognitionException {
		HandlerseqContext _localctx = new HandlerseqContext(_ctx, getState());
		enterRule(_localctx, 394, RULE_handlerseq);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2411);
			handler();
			setState(2413);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,305,_ctx) ) {
			case 1:
				{
				setState(2412);
				handlerseq();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class HandlerContext extends ParserRuleContext {
		public TerminalNode Catch() { return getToken(AergiaCpp14Parser.Catch, 0); }
		public ExceptiondeclarationContext exceptiondeclaration() {
			return getRuleContext(ExceptiondeclarationContext.class,0);
		}
		public CompoundstatementContext compoundstatement() {
			return getRuleContext(CompoundstatementContext.class,0);
		}
		public HandlerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_handler; }
	}

	public final HandlerContext handler() throws RecognitionException {
		HandlerContext _localctx = new HandlerContext(_ctx, getState());
		enterRule(_localctx, 396, RULE_handler);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2415);
			match(Catch);
			setState(2416);
			match(LeftParen);
			setState(2417);
			exceptiondeclaration();
			setState(2418);
			match(RightParen);
			setState(2419);
			compoundstatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExceptiondeclarationContext extends ParserRuleContext {
		public TypespecifierseqContext typespecifierseq() {
			return getRuleContext(TypespecifierseqContext.class,0);
		}
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public AttributespecifierseqContext attributespecifierseq() {
			return getRuleContext(AttributespecifierseqContext.class,0);
		}
		public AbstractdeclaratorContext abstractdeclarator() {
			return getRuleContext(AbstractdeclaratorContext.class,0);
		}
		public ExceptiondeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exceptiondeclaration; }
	}

	public final ExceptiondeclarationContext exceptiondeclaration() throws RecognitionException {
		ExceptiondeclarationContext _localctx = new ExceptiondeclarationContext(_ctx, getState());
		enterRule(_localctx, 398, RULE_exceptiondeclaration);
		int _la;
		try {
			setState(2435);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,309,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2422);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2421);
					attributespecifierseq(0);
					}
				}

				setState(2424);
				typespecifierseq();
				setState(2425);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2428);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2427);
					attributespecifierseq(0);
					}
				}

				setState(2430);
				typespecifierseq();
				setState(2432);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__11 || _la==Decltype || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (LeftParen - 94)) | (1L << (LeftBracket - 94)) | (1L << (Star - 94)) | (1L << (And - 94)) | (1L << (Doublecolon - 94)) | (1L << (Ellipsis - 94)) | (1L << (Identifier - 94)))) != 0)) {
					{
					setState(2431);
					abstractdeclarator();
					}
				}

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2434);
				match(Ellipsis);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ThrowexpressionContext extends ParserRuleContext {
		public TerminalNode Throw() { return getToken(AergiaCpp14Parser.Throw, 0); }
		public AssignmentexpressionContext assignmentexpression() {
			return getRuleContext(AssignmentexpressionContext.class,0);
		}
		public ThrowexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_throwexpression; }
	}

	public final ThrowexpressionContext throwexpression() throws RecognitionException {
		ThrowexpressionContext _localctx = new ThrowexpressionContext(_ctx, getState());
		enterRule(_localctx, 400, RULE_throwexpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2437);
			match(Throw);
			setState(2439);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,310,_ctx) ) {
			case 1:
				{
				setState(2438);
				assignmentexpression();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExceptionspecificationContext extends ParserRuleContext {
		public DynamicexceptionspecificationContext dynamicexceptionspecification() {
			return getRuleContext(DynamicexceptionspecificationContext.class,0);
		}
		public NoexceptspecificationContext noexceptspecification() {
			return getRuleContext(NoexceptspecificationContext.class,0);
		}
		public ExceptionspecificationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exceptionspecification; }
	}

	public final ExceptionspecificationContext exceptionspecification() throws RecognitionException {
		ExceptionspecificationContext _localctx = new ExceptionspecificationContext(_ctx, getState());
		enterRule(_localctx, 402, RULE_exceptionspecification);
		try {
			setState(2443);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Throw:
				enterOuterAlt(_localctx, 1);
				{
				setState(2441);
				dynamicexceptionspecification();
				}
				break;
			case Noexcept:
				enterOuterAlt(_localctx, 2);
				{
				setState(2442);
				noexceptspecification();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DynamicexceptionspecificationContext extends ParserRuleContext {
		public TerminalNode Throw() { return getToken(AergiaCpp14Parser.Throw, 0); }
		public TypeidlistContext typeidlist() {
			return getRuleContext(TypeidlistContext.class,0);
		}
		public DynamicexceptionspecificationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dynamicexceptionspecification; }
	}

	public final DynamicexceptionspecificationContext dynamicexceptionspecification() throws RecognitionException {
		DynamicexceptionspecificationContext _localctx = new DynamicexceptionspecificationContext(_ctx, getState());
		enterRule(_localctx, 404, RULE_dynamicexceptionspecification);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2445);
			match(Throw);
			setState(2446);
			match(LeftParen);
			setState(2448);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 22)) & ~0x3f) == 0 && ((1L << (_la - 22)) & ((1L << (Auto - 22)) | (1L << (Bool - 22)) | (1L << (Char - 22)) | (1L << (Char16 - 22)) | (1L << (Char32 - 22)) | (1L << (Class - 22)) | (1L << (Const - 22)) | (1L << (Decltype - 22)) | (1L << (Double - 22)) | (1L << (Enum - 22)) | (1L << (Float - 22)) | (1L << (Int - 22)) | (1L << (Long - 22)) | (1L << (Short - 22)) | (1L << (Signed - 22)) | (1L << (Struct - 22)) | (1L << (Typename_ - 22)))) != 0) || ((((_la - 86)) & ~0x3f) == 0 && ((1L << (_la - 86)) & ((1L << (Union - 86)) | (1L << (Unsigned - 86)) | (1L << (Void - 86)) | (1L << (Volatile - 86)) | (1L << (Wchar - 86)) | (1L << (Doublecolon - 86)) | (1L << (Identifier - 86)))) != 0)) {
				{
				setState(2447);
				typeidlist(0);
				}
			}

			setState(2450);
			match(RightParen);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeidlistContext extends ParserRuleContext {
		public ThetypeidContext thetypeid() {
			return getRuleContext(ThetypeidContext.class,0);
		}
		public TypeidlistContext typeidlist() {
			return getRuleContext(TypeidlistContext.class,0);
		}
		public TypeidlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeidlist; }
	}

	public final TypeidlistContext typeidlist() throws RecognitionException {
		return typeidlist(0);
	}

	private TypeidlistContext typeidlist(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TypeidlistContext _localctx = new TypeidlistContext(_ctx, _parentState);
		TypeidlistContext _prevctx = _localctx;
		int _startState = 406;
		enterRecursionRule(_localctx, 406, RULE_typeidlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2453);
			thetypeid();
			setState(2455);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,313,_ctx) ) {
			case 1:
				{
				setState(2454);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2465);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,315,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TypeidlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_typeidlist);
					setState(2457);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2458);
					match(Comma);
					setState(2459);
					thetypeid();
					setState(2461);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,314,_ctx) ) {
					case 1:
						{
						setState(2460);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2467);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,315,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class NoexceptspecificationContext extends ParserRuleContext {
		public TerminalNode Noexcept() { return getToken(AergiaCpp14Parser.Noexcept, 0); }
		public ConstantexpressionContext constantexpression() {
			return getRuleContext(ConstantexpressionContext.class,0);
		}
		public NoexceptspecificationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noexceptspecification; }
	}

	public final NoexceptspecificationContext noexceptspecification() throws RecognitionException {
		NoexceptspecificationContext _localctx = new NoexceptspecificationContext(_ctx, getState());
		enterRule(_localctx, 408, RULE_noexceptspecification);
		try {
			setState(2474);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,316,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2468);
				match(Noexcept);
				setState(2469);
				match(LeftParen);
				setState(2470);
				constantexpression();
				setState(2471);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2473);
				match(Noexcept);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TheoperatorContext extends ParserRuleContext {
		public TerminalNode New() { return getToken(AergiaCpp14Parser.New, 0); }
		public TerminalNode Delete() { return getToken(AergiaCpp14Parser.Delete, 0); }
		public TerminalNode LeftShift() { return getToken(AergiaCpp14Parser.LeftShift, 0); }
		public TerminalNode RightShift() { return getToken(AergiaCpp14Parser.RightShift, 0); }
		public TerminalNode RightShiftAssign() { return getToken(AergiaCpp14Parser.RightShiftAssign, 0); }
		public TerminalNode LeftShiftAssign() { return getToken(AergiaCpp14Parser.LeftShiftAssign, 0); }
		public TheoperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_theoperator; }
	}

	public final TheoperatorContext theoperator() throws RecognitionException {
		TheoperatorContext _localctx = new TheoperatorContext(_ctx, getState());
		enterRule(_localctx, 410, RULE_theoperator);
		try {
			setState(2527);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,317,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2476);
				match(New);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2477);
				match(Delete);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2478);
				match(New);
				setState(2479);
				match(LeftBracket);
				setState(2480);
				match(RightBracket);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2481);
				match(Delete);
				setState(2482);
				match(LeftBracket);
				setState(2483);
				match(RightBracket);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2484);
				match(Plus);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2485);
				match(Minus);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2486);
				match(Star);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2487);
				match(Div);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2488);
				match(Mod);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2489);
				match(Caret);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2490);
				match(And);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(2491);
				match(Or);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(2492);
				match(Tilde);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(2493);
				match(T__9);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(2494);
				match(T__10);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(2495);
				match(Assign);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(2496);
				match(Less);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(2497);
				match(Greater);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(2498);
				match(PlusAssign);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(2499);
				match(MinusAssign);
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(2500);
				match(StarAssign);
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(2501);
				match(DivAssign);
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(2502);
				match(ModAssign);
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(2503);
				match(XorAssign);
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(2504);
				match(AndAssign);
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(2505);
				match(OrAssign);
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(2506);
				match(LeftShift);
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(2507);
				match(RightShift);
				}
				break;
			case 29:
				enterOuterAlt(_localctx, 29);
				{
				setState(2508);
				match(RightShiftAssign);
				}
				break;
			case 30:
				enterOuterAlt(_localctx, 30);
				{
				setState(2509);
				match(LeftShiftAssign);
				}
				break;
			case 31:
				enterOuterAlt(_localctx, 31);
				{
				setState(2510);
				match(Equal);
				}
				break;
			case 32:
				enterOuterAlt(_localctx, 32);
				{
				setState(2511);
				match(NotEqual);
				}
				break;
			case 33:
				enterOuterAlt(_localctx, 33);
				{
				setState(2512);
				match(LessEqual);
				}
				break;
			case 34:
				enterOuterAlt(_localctx, 34);
				{
				setState(2513);
				match(GreaterEqual);
				}
				break;
			case 35:
				enterOuterAlt(_localctx, 35);
				{
				setState(2514);
				match(T__11);
				}
				break;
			case 36:
				enterOuterAlt(_localctx, 36);
				{
				setState(2515);
				match(T__12);
				}
				break;
			case 37:
				enterOuterAlt(_localctx, 37);
				{
				setState(2516);
				match(T__13);
				}
				break;
			case 38:
				enterOuterAlt(_localctx, 38);
				{
				setState(2517);
				match(T__14);
				}
				break;
			case 39:
				enterOuterAlt(_localctx, 39);
				{
				setState(2518);
				match(PlusPlus);
				}
				break;
			case 40:
				enterOuterAlt(_localctx, 40);
				{
				setState(2519);
				match(MinusMinus);
				}
				break;
			case 41:
				enterOuterAlt(_localctx, 41);
				{
				setState(2520);
				match(Comma);
				}
				break;
			case 42:
				enterOuterAlt(_localctx, 42);
				{
				setState(2521);
				match(ArrowStar);
				}
				break;
			case 43:
				enterOuterAlt(_localctx, 43);
				{
				setState(2522);
				match(Arrow);
				}
				break;
			case 44:
				enterOuterAlt(_localctx, 44);
				{
				setState(2523);
				match(LeftParen);
				setState(2524);
				match(RightParen);
				}
				break;
			case 45:
				enterOuterAlt(_localctx, 45);
				{
				setState(2525);
				match(LeftBracket);
				setState(2526);
				match(RightBracket);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LiteralContext extends ParserRuleContext {
		public TerminalNode Integerliteral() { return getToken(AergiaCpp14Parser.Integerliteral, 0); }
		public TerminalNode Characterliteral() { return getToken(AergiaCpp14Parser.Characterliteral, 0); }
		public TerminalNode Floatingliteral() { return getToken(AergiaCpp14Parser.Floatingliteral, 0); }
		public TerminalNode Stringliteral() { return getToken(AergiaCpp14Parser.Stringliteral, 0); }
		public BooleanliteralContext booleanliteral() {
			return getRuleContext(BooleanliteralContext.class,0);
		}
		public PointerliteralContext pointerliteral() {
			return getRuleContext(PointerliteralContext.class,0);
		}
		public UserdefinedliteralContext userdefinedliteral() {
			return getRuleContext(UserdefinedliteralContext.class,0);
		}
		public AergiastringContext aergiastring() {
			return getRuleContext(AergiastringContext.class,0);
		}
		public LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal; }
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 412, RULE_literal);
		try {
			setState(2537);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,318,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2529);
				match(Integerliteral);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2530);
				match(Characterliteral);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2531);
				match(Floatingliteral);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2532);
				match(Stringliteral);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2533);
				booleanliteral();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2534);
				pointerliteral();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2535);
				userdefinedliteral();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2536);
				aergiastring();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BooleanliteralContext extends ParserRuleContext {
		public TerminalNode False() { return getToken(AergiaCpp14Parser.False, 0); }
		public TerminalNode True() { return getToken(AergiaCpp14Parser.True, 0); }
		public BooleanliteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleanliteral; }
	}

	public final BooleanliteralContext booleanliteral() throws RecognitionException {
		BooleanliteralContext _localctx = new BooleanliteralContext(_ctx, getState());
		enterRule(_localctx, 414, RULE_booleanliteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2539);
			_la = _input.LA(1);
			if ( !(_la==False || _la==True) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PointerliteralContext extends ParserRuleContext {
		public TerminalNode Nullptr() { return getToken(AergiaCpp14Parser.Nullptr, 0); }
		public PointerliteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pointerliteral; }
	}

	public final PointerliteralContext pointerliteral() throws RecognitionException {
		PointerliteralContext _localctx = new PointerliteralContext(_ctx, getState());
		enterRule(_localctx, 416, RULE_pointerliteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2541);
			match(Nullptr);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UserdefinedliteralContext extends ParserRuleContext {
		public TerminalNode Userdefinedintegerliteral() { return getToken(AergiaCpp14Parser.Userdefinedintegerliteral, 0); }
		public TerminalNode Userdefinedfloatingliteral() { return getToken(AergiaCpp14Parser.Userdefinedfloatingliteral, 0); }
		public TerminalNode Userdefinedstringliteral() { return getToken(AergiaCpp14Parser.Userdefinedstringliteral, 0); }
		public TerminalNode Userdefinedcharacterliteral() { return getToken(AergiaCpp14Parser.Userdefinedcharacterliteral, 0); }
		public AergiastringContext aergiastring() {
			return getRuleContext(AergiastringContext.class,0);
		}
		public UserdefinedliteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_userdefinedliteral; }
	}

	public final UserdefinedliteralContext userdefinedliteral() throws RecognitionException {
		UserdefinedliteralContext _localctx = new UserdefinedliteralContext(_ctx, getState());
		enterRule(_localctx, 418, RULE_userdefinedliteral);
		try {
			setState(2548);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Userdefinedintegerliteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(2543);
				match(Userdefinedintegerliteral);
				}
				break;
			case Userdefinedfloatingliteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(2544);
				match(Userdefinedfloatingliteral);
				}
				break;
			case Userdefinedstringliteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(2545);
				match(Userdefinedstringliteral);
				}
				break;
			case Userdefinedcharacterliteral:
				enterOuterAlt(_localctx, 4);
				{
				setState(2546);
				match(Userdefinedcharacterliteral);
				}
				break;
			case T__5:
			case Encodingprefix:
				enterOuterAlt(_localctx, 5);
				{
				setState(2547);
				aergiastring();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 16:
			return nestednamespecifier_sempred((NestednamespecifierContext)_localctx, predIndex);
		case 21:
			return capturelist_sempred((CapturelistContext)_localctx, predIndex);
		case 26:
			return postfixexpression_sempred((PostfixexpressionContext)_localctx, predIndex);
		case 37:
			return noptrnewdeclarator_sempred((NoptrnewdeclaratorContext)_localctx, predIndex);
		case 42:
			return pmexpression_sempred((PmexpressionContext)_localctx, predIndex);
		case 43:
			return multiplicativeexpression_sempred((MultiplicativeexpressionContext)_localctx, predIndex);
		case 44:
			return additiveexpression_sempred((AdditiveexpressionContext)_localctx, predIndex);
		case 45:
			return shiftexpression_sempred((ShiftexpressionContext)_localctx, predIndex);
		case 47:
			return relationalexpression_sempred((RelationalexpressionContext)_localctx, predIndex);
		case 48:
			return equalityexpression_sempred((EqualityexpressionContext)_localctx, predIndex);
		case 49:
			return andexpression_sempred((AndexpressionContext)_localctx, predIndex);
		case 50:
			return exclusiveorexpression_sempred((ExclusiveorexpressionContext)_localctx, predIndex);
		case 51:
			return inclusiveorexpression_sempred((InclusiveorexpressionContext)_localctx, predIndex);
		case 52:
			return logicalandexpression_sempred((LogicalandexpressionContext)_localctx, predIndex);
		case 53:
			return logicalorexpression_sempred((LogicalorexpressionContext)_localctx, predIndex);
		case 57:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		case 63:
			return statementseq_sempred((StatementseqContext)_localctx, predIndex);
		case 72:
			return declarationseq_sempred((DeclarationseqContext)_localctx, predIndex);
		case 99:
			return enumeratorlist_sempred((EnumeratorlistContext)_localctx, predIndex);
		case 116:
			return attributespecifierseq_sempred((AttributespecifierseqContext)_localctx, predIndex);
		case 119:
			return attributelist_sempred((AttributelistContext)_localctx, predIndex);
		case 125:
			return balancedtokenseq_sempred((BalancedtokenseqContext)_localctx, predIndex);
		case 127:
			return initdeclaratorlist_sempred((InitdeclaratorlistContext)_localctx, predIndex);
		case 131:
			return noptrdeclarator_sempred((NoptrdeclaratorContext)_localctx, predIndex);
		case 142:
			return noptrabstractdeclarator_sempred((NoptrabstractdeclaratorContext)_localctx, predIndex);
		case 144:
			return noptrabstractpackdeclarator_sempred((NoptrabstractpackdeclaratorContext)_localctx, predIndex);
		case 146:
			return parameterdeclarationlist_sempred((ParameterdeclarationlistContext)_localctx, predIndex);
		case 153:
			return initializerlist_sempred((InitializerlistContext)_localctx, predIndex);
		case 163:
			return memberdeclaratorlist_sempred((MemberdeclaratorlistContext)_localctx, predIndex);
		case 165:
			return virtspecifierseq_sempred((VirtspecifierseqContext)_localctx, predIndex);
		case 169:
			return basespecifierlist_sempred((BasespecifierlistContext)_localctx, predIndex);
		case 184:
			return templateparameterlist_sempred((TemplateparameterlistContext)_localctx, predIndex);
		case 190:
			return templateargumentlist_sempred((TemplateargumentlistContext)_localctx, predIndex);
		case 203:
			return typeidlist_sempred((TypeidlistContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean nestednamespecifier_sempred(NestednamespecifierContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		case 1:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean capturelist_sempred(CapturelistContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean postfixexpression_sempred(PostfixexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return precpred(_ctx, 19);
		case 4:
			return precpred(_ctx, 18);
		case 5:
			return precpred(_ctx, 17);
		case 6:
			return precpred(_ctx, 12);
		case 7:
			return precpred(_ctx, 11);
		case 8:
			return precpred(_ctx, 10);
		case 9:
			return precpred(_ctx, 9);
		case 10:
			return precpred(_ctx, 8);
		case 11:
			return precpred(_ctx, 7);
		}
		return true;
	}
	private boolean noptrnewdeclarator_sempred(NoptrnewdeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 12:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean pmexpression_sempred(PmexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 13:
			return precpred(_ctx, 2);
		case 14:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean multiplicativeexpression_sempred(MultiplicativeexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 15:
			return precpred(_ctx, 3);
		case 16:
			return precpred(_ctx, 2);
		case 17:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean additiveexpression_sempred(AdditiveexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 18:
			return precpred(_ctx, 2);
		case 19:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean shiftexpression_sempred(ShiftexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 20:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean relationalexpression_sempred(RelationalexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 21:
			return precpred(_ctx, 4);
		case 22:
			return precpred(_ctx, 3);
		case 23:
			return precpred(_ctx, 2);
		case 24:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean equalityexpression_sempred(EqualityexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 25:
			return precpred(_ctx, 2);
		case 26:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean andexpression_sempred(AndexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 27:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean exclusiveorexpression_sempred(ExclusiveorexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 28:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean inclusiveorexpression_sempred(InclusiveorexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 29:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean logicalandexpression_sempred(LogicalandexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 30:
			return precpred(_ctx, 2);
		case 31:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean logicalorexpression_sempred(LogicalorexpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 32:
			return precpred(_ctx, 2);
		case 33:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 34:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean statementseq_sempred(StatementseqContext _localctx, int predIndex) {
		switch (predIndex) {
		case 35:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean declarationseq_sempred(DeclarationseqContext _localctx, int predIndex) {
		switch (predIndex) {
		case 36:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean enumeratorlist_sempred(EnumeratorlistContext _localctx, int predIndex) {
		switch (predIndex) {
		case 37:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean attributespecifierseq_sempred(AttributespecifierseqContext _localctx, int predIndex) {
		switch (predIndex) {
		case 38:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean attributelist_sempred(AttributelistContext _localctx, int predIndex) {
		switch (predIndex) {
		case 39:
			return precpred(_ctx, 3);
		case 40:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean balancedtokenseq_sempred(BalancedtokenseqContext _localctx, int predIndex) {
		switch (predIndex) {
		case 41:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initdeclaratorlist_sempred(InitdeclaratorlistContext _localctx, int predIndex) {
		switch (predIndex) {
		case 42:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean noptrdeclarator_sempred(NoptrdeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 43:
			return precpred(_ctx, 3);
		case 44:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean noptrabstractdeclarator_sempred(NoptrabstractdeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 45:
			return precpred(_ctx, 5);
		case 46:
			return precpred(_ctx, 3);
		}
		return true;
	}
	private boolean noptrabstractpackdeclarator_sempred(NoptrabstractpackdeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 47:
			return precpred(_ctx, 3);
		case 48:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean parameterdeclarationlist_sempred(ParameterdeclarationlistContext _localctx, int predIndex) {
		switch (predIndex) {
		case 49:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initializerlist_sempred(InitializerlistContext _localctx, int predIndex) {
		switch (predIndex) {
		case 50:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean memberdeclaratorlist_sempred(MemberdeclaratorlistContext _localctx, int predIndex) {
		switch (predIndex) {
		case 51:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean virtspecifierseq_sempred(VirtspecifierseqContext _localctx, int predIndex) {
		switch (predIndex) {
		case 52:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean basespecifierlist_sempred(BasespecifierlistContext _localctx, int predIndex) {
		switch (predIndex) {
		case 53:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean templateparameterlist_sempred(TemplateparameterlistContext _localctx, int predIndex) {
		switch (predIndex) {
		case 54:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean templateargumentlist_sempred(TemplateargumentlistContext _localctx, int predIndex) {
		switch (predIndex) {
		case 55:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean typeidlist_sempred(TypeidlistContext _localctx, int predIndex) {
		switch (predIndex) {
		case 56:
			return precpred(_ctx, 1);
		}
		return true;
	}

	private static final int _serializedATNSegments = 2;
	private static final String _serializedATNSegment0 =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a2\u09f9\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\tT"+
		"\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\4^\t^\4_\t_\4"+
		"`\t`\4a\ta\4b\tb\4c\tc\4d\td\4e\te\4f\tf\4g\tg\4h\th\4i\ti\4j\tj\4k\t"+
		"k\4l\tl\4m\tm\4n\tn\4o\to\4p\tp\4q\tq\4r\tr\4s\ts\4t\tt\4u\tu\4v\tv\4"+
		"w\tw\4x\tx\4y\ty\4z\tz\4{\t{\4|\t|\4}\t}\4~\t~\4\177\t\177\4\u0080\t\u0080"+
		"\4\u0081\t\u0081\4\u0082\t\u0082\4\u0083\t\u0083\4\u0084\t\u0084\4\u0085"+
		"\t\u0085\4\u0086\t\u0086\4\u0087\t\u0087\4\u0088\t\u0088\4\u0089\t\u0089"+
		"\4\u008a\t\u008a\4\u008b\t\u008b\4\u008c\t\u008c\4\u008d\t\u008d\4\u008e"+
		"\t\u008e\4\u008f\t\u008f\4\u0090\t\u0090\4\u0091\t\u0091\4\u0092\t\u0092"+
		"\4\u0093\t\u0093\4\u0094\t\u0094\4\u0095\t\u0095\4\u0096\t\u0096\4\u0097"+
		"\t\u0097\4\u0098\t\u0098\4\u0099\t\u0099\4\u009a\t\u009a\4\u009b\t\u009b"+
		"\4\u009c\t\u009c\4\u009d\t\u009d\4\u009e\t\u009e\4\u009f\t\u009f\4\u00a0"+
		"\t\u00a0\4\u00a1\t\u00a1\4\u00a2\t\u00a2\4\u00a3\t\u00a3\4\u00a4\t\u00a4"+
		"\4\u00a5\t\u00a5\4\u00a6\t\u00a6\4\u00a7\t\u00a7\4\u00a8\t\u00a8\4\u00a9"+
		"\t\u00a9\4\u00aa\t\u00aa\4\u00ab\t\u00ab\4\u00ac\t\u00ac\4\u00ad\t\u00ad"+
		"\4\u00ae\t\u00ae\4\u00af\t\u00af\4\u00b0\t\u00b0\4\u00b1\t\u00b1\4\u00b2"+
		"\t\u00b2\4\u00b3\t\u00b3\4\u00b4\t\u00b4\4\u00b5\t\u00b5\4\u00b6\t\u00b6"+
		"\4\u00b7\t\u00b7\4\u00b8\t\u00b8\4\u00b9\t\u00b9\4\u00ba\t\u00ba\4\u00bb"+
		"\t\u00bb\4\u00bc\t\u00bc\4\u00bd\t\u00bd\4\u00be\t\u00be\4\u00bf\t\u00bf"+
		"\4\u00c0\t\u00c0\4\u00c1\t\u00c1\4\u00c2\t\u00c2\4\u00c3\t\u00c3\4\u00c4"+
		"\t\u00c4\4\u00c5\t\u00c5\4\u00c6\t\u00c6\4\u00c7\t\u00c7\4\u00c8\t\u00c8"+
		"\4\u00c9\t\u00c9\4\u00ca\t\u00ca\4\u00cb\t\u00cb\4\u00cc\t\u00cc\4\u00cd"+
		"\t\u00cd\4\u00ce\t\u00ce\4\u00cf\t\u00cf\4\u00d0\t\u00d0\4\u00d1\t\u00d1"+
		"\4\u00d2\t\u00d2\4\u00d3\t\u00d3\3\2\5\2\u01a8\n\2\3\2\3\2\3\3\3\3\3\4"+
		"\3\4\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\5\6\u01bc\n\6\3\7"+
		"\3\7\3\7\3\7\3\7\3\b\3\b\3\t\5\t\u01c6\n\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n"+
		"\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\5\f\u01d9\n\f\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u01e8\n\r\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\5\16\u01f2\n\16\3\17\3\17\5\17\u01f6\n\17\3"+
		"\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\5\20\u0201\n\20\3\21\3\21"+
		"\5\21\u0205\n\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22"+
		"\3\22\3\22\5\22\u0214\n\22\3\22\3\22\3\22\3\22\3\22\5\22\u021b\n\22\3"+
		"\22\3\22\3\22\7\22\u0220\n\22\f\22\16\22\u0223\13\22\3\23\3\23\5\23\u0227"+
		"\n\23\3\23\3\23\3\24\3\24\5\24\u022d\n\24\3\24\3\24\3\25\3\25\3\25\3\25"+
		"\3\25\3\25\5\25\u0237\n\25\3\26\3\26\3\27\3\27\3\27\5\27\u023e\n\27\3"+
		"\27\3\27\3\27\3\27\5\27\u0244\n\27\7\27\u0246\n\27\f\27\16\27\u0249\13"+
		"\27\3\30\3\30\5\30\u024d\n\30\3\31\3\31\3\31\3\31\5\31\u0253\n\31\3\32"+
		"\3\32\3\32\3\32\3\32\5\32\u025a\n\32\3\33\3\33\3\33\3\33\5\33\u0260\n"+
		"\33\3\33\5\33\u0263\n\33\3\33\5\33\u0266\n\33\3\33\5\33\u0269\n\33\3\34"+
		"\3\34\3\34\3\34\3\34\5\34\u0270\n\34\3\34\3\34\3\34\3\34\3\34\5\34\u0277"+
		"\n\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\5\34\u02ab\n\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\5\34\u02ba\n\34"+
		"\3\34\3\34\3\34\3\34\5\34\u02c0\n\34\3\34\3\34\3\34\3\34\5\34\u02c6\n"+
		"\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\7\34\u02d3"+
		"\n\34\f\34\16\34\u02d6\13\34\3\35\3\35\3\36\3\36\3\37\3\37\3 \5 \u02df"+
		"\n \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \5 \u02ee\n \3 \3 \3 \3 \5 "+
		"\u02f4\n \3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!"+
		"\3!\3!\3!\3!\3!\3!\3!\3!\5!\u0312\n!\3\"\3\"\3#\5#\u0317\n#\3#\3#\5#\u031b"+
		"\n#\3#\3#\5#\u031f\n#\3#\5#\u0322\n#\3#\3#\5#\u0326\n#\3#\3#\3#\3#\5#"+
		"\u032c\n#\5#\u032e\n#\3$\3$\3$\3$\3%\3%\5%\u0336\n%\3&\3&\5&\u033a\n&"+
		"\3&\5&\u033d\n&\3\'\3\'\3\'\3\'\3\'\5\'\u0344\n\'\3\'\3\'\3\'\3\'\3\'"+
		"\5\'\u034b\n\'\7\'\u034d\n\'\f\'\16\'\u0350\13\'\3(\3(\5(\u0354\n(\3("+
		"\3(\5(\u0358\n(\3)\5)\u035b\n)\3)\3)\3)\5)\u0360\n)\3)\3)\3)\3)\5)\u0366"+
		"\n)\3*\3*\3*\3*\3*\3+\3+\3+\3+\3+\3+\5+\u0373\n+\3,\3,\3,\3,\3,\3,\3,"+
		"\3,\3,\7,\u037e\n,\f,\16,\u0381\13,\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\3"+
		"-\7-\u038f\n-\f-\16-\u0392\13-\3.\3.\3.\3.\3.\3.\3.\3.\3.\7.\u039d\n."+
		"\f.\16.\u03a0\13.\3/\3/\3/\3/\3/\3/\3/\7/\u03a9\n/\f/\16/\u03ac\13/\3"+
		"\60\3\60\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\7\61\u03bf\n\61\f\61\16\61\u03c2\13\61\3\62\3\62\3\62\3"+
		"\62\3\62\3\62\3\62\3\62\3\62\7\62\u03cd\n\62\f\62\16\62\u03d0\13\62\3"+
		"\63\3\63\3\63\3\63\3\63\3\63\7\63\u03d8\n\63\f\63\16\63\u03db\13\63\3"+
		"\64\3\64\3\64\3\64\3\64\3\64\7\64\u03e3\n\64\f\64\16\64\u03e6\13\64\3"+
		"\65\3\65\3\65\3\65\3\65\3\65\7\65\u03ee\n\65\f\65\16\65\u03f1\13\65\3"+
		"\66\3\66\3\66\3\66\3\66\3\66\3\66\3\66\3\66\7\66\u03fc\n\66\f\66\16\66"+
		"\u03ff\13\66\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\7\67\u040a\n"+
		"\67\f\67\16\67\u040d\13\67\38\38\38\38\38\38\38\58\u0416\n8\39\39\39\3"+
		"9\39\39\39\59\u041f\n9\3:\3:\3;\3;\3;\3;\3;\3;\7;\u0429\n;\f;\16;\u042c"+
		"\13;\3<\3<\3=\3=\5=\u0432\n=\3=\3=\5=\u0436\n=\3=\3=\5=\u043a\n=\3=\3"+
		"=\5=\u043e\n=\3=\3=\5=\u0442\n=\3=\3=\3=\3=\3=\5=\u0449\n=\3=\5=\u044c"+
		"\n=\3>\5>\u044f\n>\3>\3>\3>\3>\5>\u0455\n>\3>\3>\3>\3>\3>\3>\5>\u045d"+
		"\n>\3>\3>\3>\5>\u0462\n>\3?\5?\u0465\n?\3?\3?\3@\3@\5@\u046b\n@\3@\3@"+
		"\3A\3A\3A\3A\3A\7A\u0474\nA\fA\16A\u0477\13A\3B\3B\3B\3B\3B\3B\3B\3B\3"+
		"B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\5B\u048d\nB\3C\3C\5C\u0491\nC\3C\3"+
		"C\3C\3C\3C\3C\5C\u0499\nC\3C\3C\3C\3C\5C\u049f\nC\3D\3D\3D\3D\3D\3D\3"+
		"D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\5D\u04b3\nD\3D\3D\5D\u04b7\nD\3D\3"+
		"D\3D\3D\3D\3D\3D\3D\3D\3D\3D\5D\u04c4\nD\3E\3E\5E\u04c8\nE\3F\5F\u04cb"+
		"\nF\3F\3F\3F\3G\3G\5G\u04d2\nG\3H\3H\3H\3H\3H\3H\5H\u04da\nH\3H\3H\3H"+
		"\3H\3H\3H\3H\3H\5H\u04e4\nH\3I\3I\3J\3J\3J\3J\3J\7J\u04ed\nJ\fJ\16J\u04f0"+
		"\13J\3K\3K\3K\3K\3K\3K\3K\3K\3K\5K\u04fb\nK\3L\3L\3L\3L\3L\3L\3L\3L\5"+
		"L\u0505\nL\3M\3M\3M\5M\u050a\nM\3M\3M\3M\3M\3N\5N\u0511\nN\3N\5N\u0514"+
		"\nN\3N\3N\3N\5N\u0519\nN\3N\3N\3N\5N\u051e\nN\3O\3O\3O\3O\3O\3O\5O\u0526"+
		"\nO\3O\3O\3O\3P\3P\3Q\3Q\3Q\3R\3R\3R\3R\3R\3R\5R\u0536\nR\3S\3S\5S\u053a"+
		"\nS\3S\3S\3S\5S\u053f\nS\3T\3T\3U\3U\3V\3V\3W\3W\3W\5W\u054a\nW\3X\3X"+
		"\3X\3X\5X\u0550\nX\3Y\3Y\5Y\u0554\nY\3Y\3Y\3Y\5Y\u0559\nY\3Z\3Z\5Z\u055d"+
		"\nZ\3Z\3Z\3Z\5Z\u0562\nZ\3[\5[\u0565\n[\3[\3[\3[\3[\3[\3[\3[\3[\3[\3["+
		"\3[\3[\3[\3[\3[\3[\3[\3[\3[\3[\5[\u057b\n[\3\\\3\\\3\\\3\\\5\\\u0581\n"+
		"\\\3]\3]\3]\3]\3]\3]\3]\3]\3]\5]\u058c\n]\3^\3^\5^\u0590\n^\3^\5^\u0593"+
		"\n^\3^\3^\3^\3^\3^\3^\3^\3^\5^\u059d\n^\3^\3^\3^\3^\5^\u05a3\n^\3^\5^"+
		"\u05a6\n^\3_\3_\3`\3`\3`\5`\u05ad\n`\3`\3`\3`\3`\3`\3`\3`\3`\5`\u05b7"+
		"\n`\3a\3a\5a\u05bb\na\3a\5a\u05be\na\3a\5a\u05c1\na\3a\3a\5a\u05c5\na"+
		"\3a\3a\3a\5a\u05ca\na\5a\u05cc\na\3b\3b\5b\u05d0\nb\3b\3b\5b\u05d4\nb"+
		"\3b\3b\3c\3c\3c\3c\3c\5c\u05dd\nc\3d\3d\3d\3e\3e\3e\3e\3e\3e\7e\u05e8"+
		"\ne\fe\16e\u05eb\13e\3f\3f\3f\3f\3f\5f\u05f2\nf\3g\3g\3h\3h\5h\u05f8\n"+
		"h\3i\3i\3j\3j\5j\u05fe\nj\3k\3k\3l\5l\u0603\nl\3l\3l\3l\3l\3l\3l\3m\5"+
		"m\u060c\nm\3m\3m\3m\3m\3m\3n\5n\u0614\nn\3o\3o\3p\3p\3p\3p\3p\3p\3q\5"+
		"q\u061f\nq\3q\3q\3r\3r\5r\u0625\nr\3r\3r\3r\3r\3r\3r\3r\3r\3r\5r\u0630"+
		"\nr\3s\5s\u0633\ns\3s\3s\3s\5s\u0638\ns\3s\3s\3s\3t\3t\3t\3t\3t\3t\3u"+
		"\3u\3u\3u\5u\u0647\nu\3u\3u\3u\3u\5u\u064d\nu\3v\3v\3v\3v\3v\7v\u0654"+
		"\nv\fv\16v\u0657\13v\3w\3w\3w\3w\3w\3w\3w\5w\u0660\nw\3x\3x\3x\3x\5x\u0666"+
		"\nx\3x\3x\3x\3x\3x\3x\5x\u066e\nx\3x\3x\5x\u0672\nx\3y\3y\5y\u0676\ny"+
		"\3y\3y\3y\5y\u067b\ny\3y\3y\3y\5y\u0680\ny\3y\3y\3y\3y\3y\7y\u0687\ny"+
		"\fy\16y\u068a\13y\3z\3z\5z\u068e\nz\3{\3{\5{\u0692\n{\3|\3|\3|\3|\3}\3"+
		"}\3~\3~\3~\3~\3\177\3\177\5\177\u06a0\n\177\3\177\3\177\7\177\u06a4\n"+
		"\177\f\177\16\177\u06a7\13\177\3\u0080\3\u0080\3\u0080\3\u0080\3\u0080"+
		"\3\u0080\3\u0080\3\u0080\3\u0080\3\u0080\3\u0080\3\u0080\5\u0080\u06b5"+
		"\n\u0080\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081\7\u0081\u06bd"+
		"\n\u0081\f\u0081\16\u0081\u06c0\13\u0081\3\u0082\3\u0082\5\u0082\u06c4"+
		"\n\u0082\3\u0083\3\u0083\3\u0083\3\u0083\3\u0083\3\u0083\5\u0083\u06cc"+
		"\n\u0083\3\u0084\3\u0084\3\u0084\3\u0085\3\u0085\3\u0085\5\u0085\u06d4"+
		"\n\u0085\3\u0085\3\u0085\3\u0085\3\u0085\5\u0085\u06da\n\u0085\3\u0085"+
		"\3\u0085\3\u0085\3\u0085\3\u0085\5\u0085\u06e1\n\u0085\3\u0085\3\u0085"+
		"\5\u0085\u06e5\n\u0085\7\u0085\u06e7\n\u0085\f\u0085\16\u0085\u06ea\13"+
		"\u0085\3\u0086\3\u0086\3\u0086\3\u0086\5\u0086\u06f0\n\u0086\3\u0086\5"+
		"\u0086\u06f3\n\u0086\3\u0086\5\u0086\u06f6\n\u0086\3\u0086\5\u0086\u06f9"+
		"\n\u0086\3\u0087\3\u0087\3\u0087\5\u0087\u06fe\n\u0087\3\u0088\3\u0088"+
		"\5\u0088\u0702\n\u0088\3\u0088\5\u0088\u0705\n\u0088\3\u0088\3\u0088\5"+
		"\u0088\u0709\n\u0088\3\u0088\3\u0088\5\u0088\u070d\n\u0088\3\u0088\3\u0088"+
		"\3\u0088\5\u0088\u0712\n\u0088\3\u0088\5\u0088\u0715\n\u0088\5\u0088\u0717"+
		"\n\u0088\3\u0089\3\u0089\5\u0089\u071b\n\u0089\3\u008a\3\u008a\3\u008b"+
		"\3\u008b\3\u008c\5\u008c\u0722\n\u008c\3\u008c\3\u008c\3\u008d\3\u008d"+
		"\5\u008d\u0728\n\u008d\3\u008e\3\u008e\5\u008e\u072c\n\u008e\3\u008e\3"+
		"\u008e\3\u008e\3\u008e\5\u008e\u0732\n\u008e\3\u008f\3\u008f\3\u008f\5"+
		"\u008f\u0737\n\u008f\5\u008f\u0739\n\u008f\3\u0090\3\u0090\3\u0090\3\u0090"+
		"\5\u0090\u073f\n\u0090\3\u0090\3\u0090\5\u0090\u0743\n\u0090\3\u0090\3"+
		"\u0090\3\u0090\3\u0090\5\u0090\u0749\n\u0090\3\u0090\3\u0090\3\u0090\3"+
		"\u0090\3\u0090\5\u0090\u0750\n\u0090\3\u0090\3\u0090\5\u0090\u0754\n\u0090"+
		"\7\u0090\u0756\n\u0090\f\u0090\16\u0090\u0759\13\u0090\3\u0091\3\u0091"+
		"\3\u0091\3\u0091\5\u0091\u075f\n\u0091\3\u0092\3\u0092\3\u0092\3\u0092"+
		"\3\u0092\3\u0092\3\u0092\3\u0092\5\u0092\u0769\n\u0092\3\u0092\3\u0092"+
		"\5\u0092\u076d\n\u0092\7\u0092\u076f\n\u0092\f\u0092\16\u0092\u0772\13"+
		"\u0092\3\u0093\5\u0093\u0775\n\u0093\3\u0093\5\u0093\u0778\n\u0093\3\u0093"+
		"\3\u0093\3\u0093\3\u0093\5\u0093\u077e\n\u0093\3\u0094\3\u0094\3\u0094"+
		"\3\u0094\3\u0094\3\u0094\7\u0094\u0786\n\u0094\f\u0094\16\u0094\u0789"+
		"\13\u0094\3\u0095\5\u0095\u078c\n\u0095\3\u0095\3\u0095\3\u0095\3\u0095"+
		"\5\u0095\u0792\n\u0095\3\u0095\3\u0095\3\u0095\3\u0095\3\u0095\3\u0095"+
		"\5\u0095\u079a\n\u0095\3\u0095\3\u0095\5\u0095\u079e\n\u0095\3\u0095\5"+
		"\u0095\u07a1\n\u0095\3\u0095\3\u0095\5\u0095\u07a5\n\u0095\3\u0095\3\u0095"+
		"\3\u0095\5\u0095\u07aa\n\u0095\3\u0096\5\u0096\u07ad\n\u0096\3\u0096\5"+
		"\u0096\u07b0\n\u0096\3\u0096\3\u0096\5\u0096\u07b4\n\u0096\3\u0096\3\u0096"+
		"\3\u0097\5\u0097\u07b9\n\u0097\3\u0097\3\u0097\3\u0097\3\u0097\3\u0097"+
		"\3\u0097\3\u0097\3\u0097\5\u0097\u07c3\n\u0097\3\u0098\3\u0098\3\u0098"+
		"\3\u0098\3\u0098\5\u0098\u07ca\n\u0098\3\u0099\3\u0099\3\u0099\5\u0099"+
		"\u07cf\n\u0099\3\u009a\3\u009a\5\u009a\u07d3\n\u009a\3\u009b\3\u009b\3"+
		"\u009b\5\u009b\u07d8\n\u009b\3\u009b\3\u009b\3\u009b\3\u009b\5\u009b\u07de"+
		"\n\u009b\7\u009b\u07e0\n\u009b\f\u009b\16\u009b\u07e3\13\u009b\3\u009c"+
		"\3\u009c\3\u009c\5\u009c\u07e8\n\u009c\3\u009c\3\u009c\3\u009c\3\u009c"+
		"\5\u009c\u07ee\n\u009c\3\u009d\3\u009d\5\u009d\u07f2\n\u009d\3\u009e\3"+
		"\u009e\3\u009e\5\u009e\u07f7\n\u009e\3\u009e\3\u009e\3\u009f\3\u009f\5"+
		"\u009f\u07fd\n\u009f\3\u009f\3\u009f\5\u009f\u0801\n\u009f\3\u009f\5\u009f"+
		"\u0804\n\u009f\3\u009f\3\u009f\5\u009f\u0808\n\u009f\3\u009f\5\u009f\u080b"+
		"\n\u009f\5\u009f\u080d\n\u009f\3\u00a0\5\u00a0\u0810\n\u00a0\3\u00a0\3"+
		"\u00a0\3\u00a1\3\u00a1\3\u00a2\3\u00a2\3\u00a3\3\u00a3\5\u00a3\u081a\n"+
		"\u00a3\3\u00a3\3\u00a3\3\u00a3\5\u00a3\u081f\n\u00a3\5\u00a3\u0821\n\u00a3"+
		"\3\u00a4\5\u00a4\u0824\n\u00a4\3\u00a4\5\u00a4\u0827\n\u00a4\3\u00a4\5"+
		"\u00a4\u082a\n\u00a4\3\u00a4\3\u00a4\3\u00a4\3\u00a4\3\u00a4\3\u00a4\3"+
		"\u00a4\5\u00a4\u0833\n\u00a4\3\u00a5\3\u00a5\3\u00a5\3\u00a5\3\u00a5\3"+
		"\u00a5\7\u00a5\u083b\n\u00a5\f\u00a5\16\u00a5\u083e\13\u00a5\3\u00a6\3"+
		"\u00a6\5\u00a6\u0842\n\u00a6\3\u00a6\5\u00a6\u0845\n\u00a6\3\u00a6\3\u00a6"+
		"\5\u00a6\u0849\n\u00a6\3\u00a6\5\u00a6\u084c\n\u00a6\3\u00a6\5\u00a6\u084f"+
		"\n\u00a6\3\u00a6\3\u00a6\5\u00a6\u0853\n\u00a6\3\u00a7\3\u00a7\3\u00a7"+
		"\3\u00a7\3\u00a7\7\u00a7\u085a\n\u00a7\f\u00a7\16\u00a7\u085d\13\u00a7"+
		"\3\u00a8\3\u00a8\3\u00a9\3\u00a9\3\u00a9\3\u00a9\3\u00aa\3\u00aa\3\u00aa"+
		"\3\u00ab\3\u00ab\3\u00ab\5\u00ab\u086b\n\u00ab\3\u00ab\3\u00ab\3\u00ab"+
		"\3\u00ab\5\u00ab\u0871\n\u00ab\7\u00ab\u0873\n\u00ab\f\u00ab\16\u00ab"+
		"\u0876\13\u00ab\3\u00ac\5\u00ac\u0879\n\u00ac\3\u00ac\3\u00ac\5\u00ac"+
		"\u087d\n\u00ac\3\u00ac\3\u00ac\5\u00ac\u0881\n\u00ac\3\u00ac\3\u00ac\5"+
		"\u00ac\u0885\n\u00ac\3\u00ac\3\u00ac\5\u00ac\u0889\n\u00ac\3\u00ac\3\u00ac"+
		"\5\u00ac\u088d\n\u00ac\3\u00ad\5\u00ad\u0890\n\u00ad\3\u00ad\3\u00ad\5"+
		"\u00ad\u0894\n\u00ad\3\u00ae\3\u00ae\3\u00af\3\u00af\3\u00b0\3\u00b0\3"+
		"\u00b0\3\u00b1\3\u00b1\5\u00b1\u089f\n\u00b1\3\u00b2\3\u00b2\5\u00b2\u08a3"+
		"\n\u00b2\3\u00b3\3\u00b3\3\u00b3\3\u00b4\3\u00b4\5\u00b4\u08aa\n\u00b4"+
		"\3\u00b4\3\u00b4\5\u00b4\u08ae\n\u00b4\3\u00b4\3\u00b4\3\u00b4\5\u00b4"+
		"\u08b3\n\u00b4\3\u00b5\3\u00b5\3\u00b5\5\u00b5\u08b8\n\u00b5\3\u00b5\3"+
		"\u00b5\3\u00b5\3\u00b5\3\u00b5\5\u00b5\u08bf\n\u00b5\3\u00b6\3\u00b6\5"+
		"\u00b6\u08c3\n\u00b6\3\u00b7\3\u00b7\3\u00b7\3\u00b8\3\u00b8\3\u00b8\5"+
		"\u00b8\u08cb\n\u00b8\3\u00b8\3\u00b8\3\u00b8\3\u00b8\5\u00b8\u08d1\n\u00b8"+
		"\5\u00b8\u08d3\n\u00b8\3\u00b9\3\u00b9\3\u00b9\3\u00b9\3\u00b9\3\u00b9"+
		"\3\u00ba\3\u00ba\3\u00ba\3\u00ba\3\u00ba\3\u00ba\7\u00ba\u08e1\n\u00ba"+
		"\f\u00ba\16\u00ba\u08e4\13\u00ba\3\u00bb\3\u00bb\5\u00bb\u08e8\n\u00bb"+
		"\3\u00bc\3\u00bc\5\u00bc\u08ec\n\u00bc\3\u00bc\5\u00bc\u08ef\n\u00bc\3"+
		"\u00bc\3\u00bc\5\u00bc\u08f3\n\u00bc\3\u00bc\3\u00bc\3\u00bc\3\u00bc\5"+
		"\u00bc\u08f9\n\u00bc\3\u00bc\5\u00bc\u08fc\n\u00bc\3\u00bc\3\u00bc\5\u00bc"+
		"\u0900\n\u00bc\3\u00bc\3\u00bc\3\u00bc\3\u00bc\3\u00bc\3\u00bc\3\u00bc"+
		"\3\u00bc\5\u00bc\u090a\n\u00bc\3\u00bc\5\u00bc\u090d\n\u00bc\3\u00bc\3"+
		"\u00bc\3\u00bc\3\u00bc\3\u00bc\3\u00bc\5\u00bc\u0915\n\u00bc\3\u00bc\3"+
		"\u00bc\3\u00bc\5\u00bc\u091a\n\u00bc\3\u00bd\3\u00bd\3\u00bd\5\u00bd\u091f"+
		"\n\u00bd\3\u00bd\3\u00bd\3\u00be\3\u00be\3\u00be\3\u00be\5\u00be\u0927"+
		"\n\u00be\3\u00be\3\u00be\3\u00be\3\u00be\3\u00be\5\u00be\u092e\n\u00be"+
		"\3\u00be\3\u00be\5\u00be\u0932\n\u00be\3\u00bf\3\u00bf\3\u00c0\3\u00c0"+
		"\3\u00c0\5\u00c0\u0939\n\u00c0\3\u00c0\3\u00c0\3\u00c0\3\u00c0\5\u00c0"+
		"\u093f\n\u00c0\7\u00c0\u0941\n\u00c0\f\u00c0\16\u00c0\u0944\13\u00c0\3"+
		"\u00c1\3\u00c1\3\u00c1\5\u00c1\u0949\n\u00c1\3\u00c2\3\u00c2\3\u00c2\3"+
		"\u00c2\3\u00c2\3\u00c2\3\u00c2\5\u00c2\u0952\n\u00c2\3\u00c2\3\u00c2\5"+
		"\u00c2\u0956\n\u00c2\3\u00c3\5\u00c3\u0959\n\u00c3\3\u00c3\3\u00c3\3\u00c3"+
		"\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c5\3\u00c5\3\u00c5\3\u00c5"+
		"\3\u00c6\3\u00c6\5\u00c6\u0969\n\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c7"+
		"\3\u00c7\5\u00c7\u0970\n\u00c7\3\u00c8\3\u00c8\3\u00c8\3\u00c8\3\u00c8"+
		"\3\u00c8\3\u00c9\5\u00c9\u0979\n\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9"+
		"\5\u00c9\u097f\n\u00c9\3\u00c9\3\u00c9\5\u00c9\u0983\n\u00c9\3\u00c9\5"+
		"\u00c9\u0986\n\u00c9\3\u00ca\3\u00ca\5\u00ca\u098a\n\u00ca\3\u00cb\3\u00cb"+
		"\5\u00cb\u098e\n\u00cb\3\u00cc\3\u00cc\3\u00cc\5\u00cc\u0993\n\u00cc\3"+
		"\u00cc\3\u00cc\3\u00cd\3\u00cd\3\u00cd\5\u00cd\u099a\n\u00cd\3\u00cd\3"+
		"\u00cd\3\u00cd\3\u00cd\5\u00cd\u09a0\n\u00cd\7\u00cd\u09a2\n\u00cd\f\u00cd"+
		"\16\u00cd\u09a5\13\u00cd\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce"+
		"\5\u00ce\u09ad\n\u00ce\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf"+
		"\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf"+
		"\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf"+
		"\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf"+
		"\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf"+
		"\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf"+
		"\5\u00cf\u09e2\n\u00cf\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0"+
		"\3\u00d0\3\u00d0\5\u00d0\u09ec\n\u00d0\3\u00d1\3\u00d1\3\u00d2\3\u00d2"+
		"\3\u00d3\3\u00d3\3\u00d3\3\u00d3\3\u00d3\5\u00d3\u09f7\n\u00d3\3\u00d3"+
		"\2$\",\66LVXZ\\`bdfhjlt\u0080\u0092\u00c8\u00ea\u00f0\u00fc\u0100\u0108"+
		"\u011e\u0122\u0126\u0134\u0148\u014c\u0154\u0172\u017e\u0198\u00d4\2\4"+
		"\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNP"+
		"RTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e"+
		"\u0090\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6"+
		"\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be"+
		"\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4\u00d6"+
		"\u00d8\u00da\u00dc\u00de\u00e0\u00e2\u00e4\u00e6\u00e8\u00ea\u00ec\u00ee"+
		"\u00f0\u00f2\u00f4\u00f6\u00f8\u00fa\u00fc\u00fe\u0100\u0102\u0104\u0106"+
		"\u0108\u010a\u010c\u010e\u0110\u0112\u0114\u0116\u0118\u011a\u011c\u011e"+
		"\u0120\u0122\u0124\u0126\u0128\u012a\u012c\u012e\u0130\u0132\u0134\u0136"+
		"\u0138\u013a\u013c\u013e\u0140\u0142\u0144\u0146\u0148\u014a\u014c\u014e"+
		"\u0150\u0152\u0154\u0156\u0158\u015a\u015c\u015e\u0160\u0162\u0164\u0166"+
		"\u0168\u016a\u016c\u016e\u0170\u0172\u0174\u0176\u0178\u017a\u017c\u017e"+
		"\u0180\u0182\u0184\u0186\u0188\u018a\u018c\u018e\u0190\u0192\u0194\u0196"+
		"\u0198\u019a\u019c\u019e\u01a0\u01a2\u01a4\2\16\4\2llpp\5\2\f\rfhln\3"+
		"\2{|\5\2ppsz}~\7\2//::DDJJQQ\5\2--\67\67[[\4\2!!]]\4\2\16\16ll\5\2  M"+
		"MXX\4\2\61\61@@\3\2AC\4\2\60\60SS\2\u0b18\2\u01a7\3\2\2\2\4\u01ab\3\2"+
		"\2\2\6\u01ad\3\2\2\2\b\u01af\3\2\2\2\n\u01bb\3\2\2\2\f\u01bd\3\2\2\2\16"+
		"\u01c2\3\2\2\2\20\u01c5\3\2\2\2\22\u01cb\3\2\2\2\24\u01d0\3\2\2\2\26\u01d8"+
		"\3\2\2\2\30\u01e7\3\2\2\2\32\u01f1\3\2\2\2\34\u01f5\3\2\2\2\36\u0200\3"+
		"\2\2\2 \u0202\3\2\2\2\"\u0213\3\2\2\2$\u0224\3\2\2\2&\u022a\3\2\2\2(\u0236"+
		"\3\2\2\2*\u0238\3\2\2\2,\u023a\3\2\2\2.\u024c\3\2\2\2\60\u0252\3\2\2\2"+
		"\62\u0259\3\2\2\2\64\u025b\3\2\2\2\66\u02aa\3\2\2\28\u02d7\3\2\2\2:\u02d9"+
		"\3\2\2\2<\u02db\3\2\2\2>\u02f3\3\2\2\2@\u0311\3\2\2\2B\u0313\3\2\2\2D"+
		"\u032d\3\2\2\2F\u032f\3\2\2\2H\u0333\3\2\2\2J\u033c\3\2\2\2L\u033e\3\2"+
		"\2\2N\u0357\3\2\2\2P\u0365\3\2\2\2R\u0367\3\2\2\2T\u0372\3\2\2\2V\u0374"+
		"\3\2\2\2X\u0382\3\2\2\2Z\u0393\3\2\2\2\\\u03a1\3\2\2\2^\u03ad\3\2\2\2"+
		"`\u03af\3\2\2\2b\u03c3\3\2\2\2d\u03d1\3\2\2\2f\u03dc\3\2\2\2h\u03e7\3"+
		"\2\2\2j\u03f2\3\2\2\2l\u0400\3\2\2\2n\u0415\3\2\2\2p\u041e\3\2\2\2r\u0420"+
		"\3\2\2\2t\u0422\3\2\2\2v\u042d\3\2\2\2x\u044b\3\2\2\2z\u0461\3\2\2\2|"+
		"\u0464\3\2\2\2~\u0468\3\2\2\2\u0080\u046e\3\2\2\2\u0082\u048c\3\2\2\2"+
		"\u0084\u049e\3\2\2\2\u0086\u04c3\3\2\2\2\u0088\u04c7\3\2\2\2\u008a\u04ca"+
		"\3\2\2\2\u008c\u04d1\3\2\2\2\u008e\u04e3\3\2\2\2\u0090\u04e5\3\2\2\2\u0092"+
		"\u04e7\3\2\2\2\u0094\u04fa\3\2\2\2\u0096\u0504\3\2\2\2\u0098\u0506\3\2"+
		"\2\2\u009a\u051d\3\2\2\2\u009c\u051f\3\2\2\2\u009e\u052a\3\2\2\2\u00a0"+
		"\u052c\3\2\2\2\u00a2\u0535\3\2\2\2\u00a4\u053e\3\2\2\2\u00a6\u0540\3\2"+
		"\2\2\u00a8\u0542\3\2\2\2\u00aa\u0544\3\2\2\2\u00ac\u0549\3\2\2\2\u00ae"+
		"\u054f\3\2\2\2\u00b0\u0558\3\2\2\2\u00b2\u0561\3\2\2\2\u00b4\u057a\3\2"+
		"\2\2\u00b6\u0580\3\2\2\2\u00b8\u058b\3\2\2\2\u00ba\u05a5\3\2\2\2\u00bc"+
		"\u05a7\3\2\2\2\u00be\u05b6\3\2\2\2\u00c0\u05cb\3\2\2\2\u00c2\u05cd\3\2"+
		"\2\2\u00c4\u05dc\3\2\2\2\u00c6\u05de\3\2\2\2\u00c8\u05e1\3\2\2\2\u00ca"+
		"\u05f1\3\2\2\2\u00cc\u05f3\3\2\2\2\u00ce\u05f7\3\2\2\2\u00d0\u05f9\3\2"+
		"\2\2\u00d2\u05fd\3\2\2\2\u00d4\u05ff\3\2\2\2\u00d6\u0602\3\2\2\2\u00d8"+
		"\u060b\3\2\2\2\u00da\u0613\3\2\2\2\u00dc\u0615\3\2\2\2\u00de\u0617\3\2"+
		"\2\2\u00e0\u061e\3\2\2\2\u00e2\u062f\3\2\2\2\u00e4\u0632\3\2\2\2\u00e6"+
		"\u063c\3\2\2\2\u00e8\u064c\3\2\2\2\u00ea\u064e\3\2\2\2\u00ec\u065f\3\2"+
		"\2\2\u00ee\u0671\3\2\2\2\u00f0\u067a\3\2\2\2\u00f2\u068b\3\2\2\2\u00f4"+
		"\u0691\3\2\2\2\u00f6\u0693\3\2\2\2\u00f8\u0697\3\2\2\2\u00fa\u0699\3\2"+
		"\2\2\u00fc\u069d\3\2\2\2\u00fe\u06b4\3\2\2\2\u0100\u06b6\3\2\2\2\u0102"+
		"\u06c1\3\2\2\2\u0104\u06cb\3\2\2\2\u0106\u06cd\3\2\2\2\u0108\u06d9\3\2"+
		"\2\2\u010a\u06eb\3\2\2\2\u010c\u06fa\3\2\2\2\u010e\u0716\3\2\2\2\u0110"+
		"\u0718\3\2\2\2\u0112\u071c\3\2\2\2\u0114\u071e\3\2\2\2\u0116\u0721\3\2"+
		"\2\2\u0118\u0725\3\2\2\2\u011a\u0731\3\2\2\2\u011c\u0738\3\2\2\2\u011e"+
		"\u0748\3\2\2\2\u0120\u075e\3\2\2\2\u0122\u0760\3\2\2\2\u0124\u077d\3\2"+
		"\2\2\u0126\u077f\3\2\2\2\u0128\u07a9\3\2\2\2\u012a\u07ac\3\2\2\2\u012c"+
		"\u07c2\3\2\2\2\u012e\u07c9\3\2\2\2\u0130\u07ce\3\2\2\2\u0132\u07d2\3\2"+
		"\2\2\u0134\u07d4\3\2\2\2\u0136\u07ed\3\2\2\2\u0138\u07f1\3\2\2\2\u013a"+
		"\u07f3\3\2\2\2\u013c\u080c\3\2\2\2\u013e\u080f\3\2\2\2\u0140\u0813\3\2"+
		"\2\2\u0142\u0815\3\2\2\2\u0144\u0820\3\2\2\2\u0146\u0832\3\2\2\2\u0148"+
		"\u0834\3\2\2\2\u014a\u0852\3\2\2\2\u014c\u0854\3\2\2\2\u014e\u085e\3\2"+
		"\2\2\u0150\u0860\3\2\2\2\u0152\u0864\3\2\2\2\u0154\u0867\3\2\2\2\u0156"+
		"\u088c\3\2\2\2\u0158\u0893\3\2\2\2\u015a\u0895\3\2\2\2\u015c\u0897\3\2"+
		"\2\2\u015e\u0899\3\2\2\2\u0160\u089c\3\2\2\2\u0162\u08a0\3\2\2\2\u0164"+
		"\u08a4\3\2\2\2\u0166\u08b2\3\2\2\2\u0168\u08be\3\2\2\2\u016a\u08c2\3\2"+
		"\2\2\u016c\u08c4\3\2\2\2\u016e\u08d2\3\2\2\2\u0170\u08d4\3\2\2\2\u0172"+
		"\u08da\3\2\2\2\u0174\u08e7\3\2\2\2\u0176\u0919\3\2\2\2\u0178\u091b\3\2"+
		"\2\2\u017a\u0931\3\2\2\2\u017c\u0933\3\2\2\2\u017e\u0935\3\2\2\2\u0180"+
		"\u0948\3\2\2\2\u0182\u0955\3\2\2\2\u0184\u0958\3\2\2\2\u0186\u095d\3\2"+
		"\2\2\u0188\u0962\3\2\2\2\u018a\u0966\3\2\2\2\u018c\u096d\3\2\2\2\u018e"+
		"\u0971\3\2\2\2\u0190\u0985\3\2\2\2\u0192\u0987\3\2\2\2\u0194\u098d\3\2"+
		"\2\2\u0196\u098f\3\2\2\2\u0198\u0996\3\2\2\2\u019a\u09ac\3\2\2\2\u019c"+
		"\u09e1\3\2\2\2\u019e\u09eb\3\2\2\2\u01a0\u09ed\3\2\2\2\u01a2\u09ef\3\2"+
		"\2\2\u01a4\u09f6\3\2\2\2\u01a6\u01a8\5\u0092J\2\u01a7\u01a6\3\2\2\2\u01a7"+
		"\u01a8\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01aa\7\2\2\3\u01aa\3\3\2\2\2"+
		"\u01ab\u01ac\7\3\2\2\u01ac\5\3\2\2\2\u01ad\u01ae\7\4\2\2\u01ae\7\3\2\2"+
		"\2\u01af\u01b0\7\5\2\2\u01b0\u01b1\5\u0080A\2\u01b1\u01b2\7\6\2\2\u01b2"+
		"\t\3\2\2\2\u01b3\u01b4\5\4\3\2\u01b4\u01b5\5\30\r\2\u01b5\u01b6\5\6\4"+
		"\2\u01b6\u01bc\3\2\2\2\u01b7\u01b8\5\4\3\2\u01b8\u01b9\5\f\7\2\u01b9\u01ba"+
		"\5\6\4\2\u01ba\u01bc\3\2\2\2\u01bb\u01b3\3\2\2\2\u01bb\u01b7\3\2\2\2\u01bc"+
		"\13\3\2\2\2\u01bd\u01be\7\7\2\2\u01be\u01bf\7`\2\2\u01bf\u01c0\5\16\b"+
		"\2\u01c0\u01c1\7a\2\2\u01c1\r\3\2\2\2\u01c2\u01c3\5\u0132\u009a\2\u01c3"+
		"\17\3\2\2\2\u01c4\u01c6\7\22\2\2\u01c5\u01c4\3\2\2\2\u01c5\u01c6\3\2\2"+
		"\2\u01c6\u01c7\3\2\2\2\u01c7\u01c8\7\b\2\2\u01c8\u01c9\5\30\r\2\u01c9"+
		"\u01ca\7\b\2\2\u01ca\21\3\2\2\2\u01cb\u01cc\7\t\2\2\u01cc\u01cd\5\24\13"+
		"\2\u01cd\u01ce\7a\2\2\u01ce\u01cf\5\26\f\2\u01cf\23\3\2\2\2\u01d0\u01d1"+
		"\5\4\3\2\u01d1\u01d2\7\u0091\2\2\u01d2\u01d3\7\n\2\2\u01d3\u01d4\5\4\3"+
		"\2\u01d4\u01d5\5\30\r\2\u01d5\25\3\2\2\2\u01d6\u01d9\5\n\6\2\u01d7\u01d9"+
		"\5\b\5\2\u01d8\u01d6\3\2\2\2\u01d8\u01d7\3\2\2\2\u01d9\27\3\2\2\2\u01da"+
		"\u01db\7\u0091\2\2\u01db\u01dc\7\u008e\2\2\u01dc\u01e8\5\30\r\2\u01dd"+
		"\u01de\7\u0091\2\2\u01de\u01df\7`\2\2\u01df\u01e0\7\u0091\2\2\u01e0\u01e1"+
		"\7\13\2\2\u01e1\u01e8\5\30\r\2\u01e2\u01e3\7\u0091\2\2\u01e3\u01e4\7`"+
		"\2\2\u01e4\u01e5\7\u0091\2\2\u01e5\u01e8\7a\2\2\u01e6\u01e8\7\u0091\2"+
		"\2\u01e7\u01da\3\2\2\2\u01e7\u01dd\3\2\2\2\u01e7\u01e2\3\2\2\2\u01e7\u01e6"+
		"\3\2\2\2\u01e8\31\3\2\2\2\u01e9\u01f2\5\u019e\u00d0\2\u01ea\u01f2\7P\2"+
		"\2\u01eb\u01ec\7`\2\2\u01ec\u01ed\5t;\2\u01ed\u01ee\7a\2\2\u01ee\u01f2"+
		"\3\2\2\2\u01ef\u01f2\5\34\17\2\u01f0\u01f2\5$\23\2\u01f1\u01e9\3\2\2\2"+
		"\u01f1\u01ea\3\2\2\2\u01f1\u01eb\3\2\2\2\u01f1\u01ef\3\2\2\2\u01f1\u01f0"+
		"\3\2\2\2\u01f2\33\3\2\2\2\u01f3\u01f6\5\36\20\2\u01f4\u01f6\5 \21\2\u01f5"+
		"\u01f3\3\2\2\2\u01f5\u01f4\3\2\2\2\u01f6\35\3\2\2\2\u01f7\u0201\7\u0091"+
		"\2\2\u01f8\u0201\5\u016c\u00b7\2\u01f9\u0201\5\u015e\u00b0\2\u01fa\u0201"+
		"\5\u016e\u00b8\2\u01fb\u01fc\7n\2\2\u01fc\u0201\5\u0138\u009d\2\u01fd"+
		"\u01fe\7n\2\2\u01fe\u0201\5\u00b8]\2\u01ff\u0201\5\u017a\u00be\2\u0200"+
		"\u01f7\3\2\2\2\u0200\u01f8\3\2\2\2\u0200\u01f9\3\2\2\2\u0200\u01fa\3\2"+
		"\2\2\u0200\u01fb\3\2\2\2\u0200\u01fd\3\2\2\2\u0200\u01ff\3\2\2\2\u0201"+
		"\37\3\2\2\2\u0202\u0204\5\"\22\2\u0203\u0205\7O\2\2\u0204\u0203\3\2\2"+
		"\2\u0204\u0205\3\2\2\2\u0205\u0206\3\2\2\2\u0206\u0207\5\36\20\2\u0207"+
		"!\3\2\2\2\u0208\u0209\b\22\1\2\u0209\u0214\7\u008c\2\2\u020a\u020b\5\u00b6"+
		"\\\2\u020b\u020c\7\u008c\2\2\u020c\u0214\3\2\2\2\u020d\u020e\5\u00ceh"+
		"\2\u020e\u020f\7\u008c\2\2\u020f\u0214\3\2\2\2\u0210\u0211\5\u00b8]\2"+
		"\u0211\u0212\7\u008c\2\2\u0212\u0214\3\2\2\2\u0213\u0208\3\2\2\2\u0213"+
		"\u020a\3\2\2\2\u0213\u020d\3\2\2\2\u0213\u0210\3\2\2\2\u0214\u0221\3\2"+
		"\2\2\u0215\u0216\f\4\2\2\u0216\u0217\7\u0091\2\2\u0217\u0220\7\u008c\2"+
		"\2\u0218\u021a\f\3\2\2\u0219\u021b\7O\2\2\u021a\u0219\3\2\2\2\u021a\u021b"+
		"\3\2\2\2\u021b\u021c\3\2\2\2\u021c\u021d\5\u0178\u00bd\2\u021d\u021e\7"+
		"\u008c\2\2\u021e\u0220\3\2\2\2\u021f\u0215\3\2\2\2\u021f\u0218\3\2\2\2"+
		"\u0220\u0223\3\2\2\2\u0221\u021f\3\2\2\2\u0221\u0222\3\2\2\2\u0222#\3"+
		"\2\2\2\u0223\u0221\3\2\2\2\u0224\u0226\5&\24\2\u0225\u0227\5\64\33\2\u0226"+
		"\u0225\3\2\2\2\u0226\u0227\3\2\2\2\u0227\u0228\3\2\2\2\u0228\u0229\5~"+
		"@\2\u0229%\3\2\2\2\u022a\u022c\7b\2\2\u022b\u022d\5(\25\2\u022c\u022b"+
		"\3\2\2\2\u022c\u022d\3\2\2\2\u022d\u022e\3\2\2\2\u022e\u022f\7c\2\2\u022f"+
		"\'\3\2\2\2\u0230\u0237\5*\26\2\u0231\u0237\5,\27\2\u0232\u0233\5*\26\2"+
		"\u0233\u0234\7\u0087\2\2\u0234\u0235\5,\27\2\u0235\u0237\3\2\2\2\u0236"+
		"\u0230\3\2\2\2\u0236\u0231\3\2\2\2\u0236\u0232\3\2\2\2\u0237)\3\2\2\2"+
		"\u0238\u0239\t\2\2\2\u0239+\3\2\2\2\u023a\u023b\b\27\1\2\u023b\u023d\5"+
		".\30\2\u023c\u023e\7\u0090\2\2\u023d\u023c\3\2\2\2\u023d\u023e\3\2\2\2"+
		"\u023e\u0247\3\2\2\2\u023f\u0240\f\3\2\2\u0240\u0241\7\u0087\2\2\u0241"+
		"\u0243\5.\30\2\u0242\u0244\7\u0090\2\2\u0243\u0242\3\2\2\2\u0243\u0244"+
		"\3\2\2\2\u0244\u0246\3\2\2\2\u0245\u023f\3\2\2\2\u0246\u0249\3\2\2\2\u0247"+
		"\u0245\3\2\2\2\u0247\u0248\3\2\2\2\u0248-\3\2\2\2\u0249\u0247\3\2\2\2"+
		"\u024a\u024d\5\60\31\2\u024b\u024d\5\62\32\2\u024c\u024a\3\2\2\2\u024c"+
		"\u024b\3\2\2\2\u024d/\3\2\2\2\u024e\u0253\7\u0091\2\2\u024f\u0250\7l\2"+
		"\2\u0250\u0253\7\u0091\2\2\u0251\u0253\7P\2\2\u0252\u024e\3\2\2\2\u0252"+
		"\u024f\3\2\2\2\u0252\u0251\3\2\2\2\u0253\61\3\2\2\2\u0254\u0255\7\u0091"+
		"\2\2\u0255\u025a\5\u012e\u0098\2\u0256\u0257\7l\2\2\u0257\u0258\7\u0091"+
		"\2\2\u0258\u025a\5\u012e\u0098\2\u0259\u0254\3\2\2\2\u0259\u0256\3\2\2"+
		"\2\u025a\63\3\2\2\2\u025b\u025c\7`\2\2\u025c\u025d\5\u0124\u0093\2\u025d"+
		"\u025f\7a\2\2\u025e\u0260\7:\2\2\u025f\u025e\3\2\2\2\u025f\u0260\3\2\2"+
		"\2\u0260\u0262\3\2\2\2\u0261\u0263\5\u0194\u00cb\2\u0262\u0261\3\2\2\2"+
		"\u0262\u0263\3\2\2\2\u0263\u0265\3\2\2\2\u0264\u0266\5\u00eav\2\u0265"+
		"\u0264\3\2\2\2\u0265\u0266\3\2\2\2\u0266\u0268\3\2\2\2\u0267\u0269\5\u010c"+
		"\u0087\2\u0268\u0267\3\2\2\2\u0268\u0269\3\2\2\2\u0269\65\3\2\2\2\u026a"+
		"\u026b\b\34\1\2\u026b\u02ab\5\32\16\2\u026c\u026d\5\u00b4[\2\u026d\u026f"+
		"\7`\2\2\u026e\u0270\5<\37\2\u026f\u026e\3\2\2\2\u026f\u0270\3\2\2\2\u0270"+
		"\u0271\3\2\2\2\u0271\u0272\7a\2\2\u0272\u02ab\3\2\2\2\u0273\u0274\5\u0182"+
		"\u00c2\2\u0274\u0276\7`\2\2\u0275\u0277\5<\37\2\u0276\u0275\3\2\2\2\u0276"+
		"\u0277\3\2\2\2\u0277\u0278\3\2\2\2\u0278\u0279\7a\2\2\u0279\u02ab\3\2"+
		"\2\2\u027a\u027b\5\u00b4[\2\u027b\u027c\5\u0136\u009c\2\u027c\u02ab\3"+
		"\2\2\2\u027d\u027e\5\u0182\u00c2\2\u027e\u027f\5\u0136\u009c\2\u027f\u02ab"+
		"\3\2\2\2\u0280\u0281\7*\2\2\u0281\u0282\7q\2\2\u0282\u0283\5\u0118\u008d"+
		"\2\u0283\u0284\7r\2\2\u0284\u0285\7`\2\2\u0285\u0286\5t;\2\u0286\u0287"+
		"\7a\2\2\u0287\u02ab\3\2\2\2\u0288\u0289\7L\2\2\u0289\u028a\7q\2\2\u028a"+
		"\u028b\5\u0118\u008d\2\u028b\u028c\7r\2\2\u028c\u028d\7`\2\2\u028d\u028e"+
		"\5t;\2\u028e\u028f\7a\2\2\u028f\u02ab\3\2\2\2\u0290\u0291\7E\2\2\u0291"+
		"\u0292\7q\2\2\u0292\u0293\5\u0118\u008d\2\u0293\u0294\7r\2\2\u0294\u0295"+
		"\7`\2\2\u0295\u0296\5t;\2\u0296\u0297\7a\2\2\u0297\u02ab\3\2\2\2\u0298"+
		"\u0299\7#\2\2\u0299\u029a\7q\2\2\u029a\u029b\5\u0118\u008d\2\u029b\u029c"+
		"\7r\2\2\u029c\u029d\7`\2\2\u029d\u029e\5t;\2\u029e\u029f\7a\2\2\u029f"+
		"\u02ab\3\2\2\2\u02a0\u02a1\5:\36\2\u02a1\u02a2\7`\2\2\u02a2\u02a3\5t;"+
		"\2\u02a3\u02a4\7a\2\2\u02a4\u02ab\3\2\2\2\u02a5\u02a6\5:\36\2\u02a6\u02a7"+
		"\7`\2\2\u02a7\u02a8\5\u0118\u008d\2\u02a8\u02a9\7a\2\2\u02a9\u02ab\3\2"+
		"\2\2\u02aa\u026a\3\2\2\2\u02aa\u026c\3\2\2\2\u02aa\u0273\3\2\2\2\u02aa"+
		"\u027a\3\2\2\2\u02aa\u027d\3\2\2\2\u02aa\u0280\3\2\2\2\u02aa\u0288\3\2"+
		"\2\2\u02aa\u0290\3\2\2\2\u02aa\u0298\3\2\2\2\u02aa\u02a0\3\2\2\2\u02aa"+
		"\u02a5\3\2\2\2\u02ab\u02d4\3\2\2\2\u02ac\u02ad\f\25\2\2\u02ad\u02ae\7"+
		"b\2\2\u02ae\u02af\5t;\2\u02af\u02b0\7c\2\2\u02b0\u02d3\3\2\2\2\u02b1\u02b2"+
		"\f\24\2\2\u02b2\u02b3\7b\2\2\u02b3\u02b4\5\u0136\u009c\2\u02b4\u02b5\7"+
		"c\2\2\u02b5\u02d3\3\2\2\2\u02b6\u02b7\f\23\2\2\u02b7\u02b9\7`\2\2\u02b8"+
		"\u02ba\5<\37\2\u02b9\u02b8\3\2\2\2\u02b9\u02ba\3\2\2\2\u02ba\u02bb\3\2"+
		"\2\2\u02bb\u02d3\7a\2\2\u02bc\u02bd\f\16\2\2\u02bd\u02bf\7\u008e\2\2\u02be"+
		"\u02c0\7O\2\2\u02bf\u02be\3\2\2\2\u02bf\u02c0\3\2\2\2\u02c0\u02c1\3\2"+
		"\2\2\u02c1\u02d3\5\34\17\2\u02c2\u02c3\f\r\2\2\u02c3\u02c5\7\u0089\2\2"+
		"\u02c4\u02c6\7O\2\2\u02c5\u02c4\3\2\2\2\u02c5\u02c6\3\2\2\2\u02c6\u02c7"+
		"\3\2\2\2\u02c7\u02d3\5\34\17\2\u02c8\u02c9\f\f\2\2\u02c9\u02ca\7\u008e"+
		"\2\2\u02ca\u02d3\5> \2\u02cb\u02cc\f\13\2\2\u02cc\u02cd\7\u0089\2\2\u02cd"+
		"\u02d3\5> \2\u02ce\u02cf\f\n\2\2\u02cf\u02d3\7\u0085\2\2\u02d0\u02d1\f"+
		"\t\2\2\u02d1\u02d3\7\u0086\2\2\u02d2\u02ac\3\2\2\2\u02d2\u02b1\3\2\2\2"+
		"\u02d2\u02b6\3\2\2\2\u02d2\u02bc\3\2\2\2\u02d2\u02c2\3\2\2\2\u02d2\u02c8"+
		"\3\2\2\2\u02d2\u02cb\3\2\2\2\u02d2\u02ce\3\2\2\2\u02d2\u02d0\3\2\2\2\u02d3"+
		"\u02d6\3\2\2\2\u02d4\u02d2\3\2\2\2\u02d4\u02d5\3\2\2\2\u02d5\67\3\2\2"+
		"\2\u02d6\u02d4\3\2\2\2\u02d7\u02d8\7V\2\2\u02d89\3\2\2\2\u02d9\u02da\7"+
		"V\2\2\u02da;\3\2\2\2\u02db\u02dc\5\u0134\u009b\2\u02dc=\3\2\2\2\u02dd"+
		"\u02df\5\"\22\2\u02de\u02dd\3\2\2\2\u02de\u02df\3\2\2\2\u02df\u02e0\3"+
		"\2\2\2\u02e0\u02e1\5\u00b6\\\2\u02e1\u02e2\7\u008c\2\2\u02e2\u02e3\7n"+
		"\2\2\u02e3\u02e4\5\u00b6\\\2\u02e4\u02f4\3\2\2\2\u02e5\u02e6\5\"\22\2"+
		"\u02e6\u02e7\7O\2\2\u02e7\u02e8\5\u0178\u00bd\2\u02e8\u02e9\7\u008c\2"+
		"\2\u02e9\u02ea\7n\2\2\u02ea\u02eb\5\u00b6\\\2\u02eb\u02f4\3\2\2\2\u02ec"+
		"\u02ee\5\"\22\2\u02ed\u02ec\3\2\2\2\u02ed\u02ee\3\2\2\2\u02ee\u02ef\3"+
		"\2\2\2\u02ef\u02f0\7n\2\2\u02f0\u02f4\5\u00b6\\\2\u02f1\u02f2\7n\2\2\u02f2"+
		"\u02f4\5\u00b8]\2\u02f3\u02de\3\2\2\2\u02f3\u02e5\3\2\2\2\u02f3\u02ed"+
		"\3\2\2\2\u02f3\u02f1\3\2\2\2\u02f4?\3\2\2\2\u02f5\u0312\5\66\34\2\u02f6"+
		"\u02f7\7\u0085\2\2\u02f7\u0312\5T+\2\u02f8\u02f9\7\u0086\2\2\u02f9\u0312"+
		"\5T+\2\u02fa\u02fb\5B\"\2\u02fb\u02fc\5T+\2\u02fc\u0312\3\2\2\2\u02fd"+
		"\u02fe\7I\2\2\u02fe\u0312\5@!\2\u02ff\u0300\7I\2\2\u0300\u0301\7`\2\2"+
		"\u0301\u0302\5\u0118\u008d\2\u0302\u0303\7a\2\2\u0303\u0312\3\2\2\2\u0304"+
		"\u0305\7I\2\2\u0305\u0306\7\u0090\2\2\u0306\u0307\7`\2\2\u0307\u0308\7"+
		"\u0091\2\2\u0308\u0312\7a\2\2\u0309\u030a\7\26\2\2\u030a\u030b\7`\2\2"+
		"\u030b\u030c\5\u0118\u008d\2\u030c\u030d\7a\2\2\u030d\u0312\3\2\2\2\u030e"+
		"\u0312\5R*\2\u030f\u0312\5D#\2\u0310\u0312\5P)\2\u0311\u02f5\3\2\2\2\u0311"+
		"\u02f6\3\2\2\2\u0311\u02f8\3\2\2\2\u0311\u02fa\3\2\2\2\u0311\u02fd\3\2"+
		"\2\2\u0311\u02ff\3\2\2\2\u0311\u0304\3\2\2\2\u0311\u0309\3\2\2\2\u0311"+
		"\u030e\3\2\2\2\u0311\u030f\3\2\2\2\u0311\u0310\3\2\2\2\u0312A\3\2\2\2"+
		"\u0313\u0314\t\3\2\2\u0314C\3\2\2\2\u0315\u0317\7\u008c\2\2\u0316\u0315"+
		"\3\2\2\2\u0316\u0317\3\2\2\2\u0317\u0318\3\2\2\2\u0318\u031a\7<\2\2\u0319"+
		"\u031b\5F$\2\u031a\u0319\3\2\2\2\u031a\u031b\3\2\2\2\u031b\u031c\3\2\2"+
		"\2\u031c\u031e\5H%\2\u031d\u031f\5N(\2\u031e\u031d\3\2\2\2\u031e\u031f"+
		"\3\2\2\2\u031f\u032e\3\2\2\2\u0320\u0322\7\u008c\2\2\u0321\u0320\3\2\2"+
		"\2\u0321\u0322\3\2\2\2\u0322\u0323\3\2\2\2\u0323\u0325\7<\2\2\u0324\u0326"+
		"\5F$\2\u0325\u0324\3\2\2\2\u0325\u0326\3\2\2\2\u0326\u0327\3\2\2\2\u0327"+
		"\u0328\7`\2\2\u0328\u0329\5\u0118\u008d\2\u0329\u032b\7a\2\2\u032a\u032c"+
		"\5N(\2\u032b\u032a\3\2\2\2\u032b\u032c\3\2\2\2\u032c\u032e\3\2\2\2\u032d"+
		"\u0316\3\2\2\2\u032d\u0321\3\2\2\2\u032eE\3\2\2\2\u032f\u0330\7`\2\2\u0330"+
		"\u0331\5<\37\2\u0331\u0332\7a\2\2\u0332G\3\2\2\2\u0333\u0335\5\u00b0Y"+
		"\2\u0334\u0336\5J&\2\u0335\u0334\3\2\2\2\u0335\u0336\3\2\2\2\u0336I\3"+
		"\2\2\2\u0337\u0339\5\u010e\u0088\2\u0338\u033a\5J&\2\u0339\u0338\3\2\2"+
		"\2\u0339\u033a\3\2\2\2\u033a\u033d\3\2\2\2\u033b\u033d\5L\'\2\u033c\u0337"+
		"\3\2\2\2\u033c\u033b\3\2\2\2\u033dK\3\2\2\2\u033e\u033f\b\'\1\2\u033f"+
		"\u0340\7b\2\2\u0340\u0341\5t;\2\u0341\u0343\7c\2\2\u0342\u0344\5\u00ea"+
		"v\2\u0343\u0342\3\2\2\2\u0343\u0344\3\2\2\2\u0344\u034e\3\2\2\2\u0345"+
		"\u0346\f\3\2\2\u0346\u0347\7b\2\2\u0347\u0348\5v<\2\u0348\u034a\7c\2\2"+
		"\u0349\u034b\5\u00eav\2\u034a\u0349\3\2\2\2\u034a\u034b\3\2\2\2\u034b"+
		"\u034d\3\2\2\2\u034c\u0345\3\2\2\2\u034d\u0350\3\2\2\2\u034e\u034c\3\2"+
		"\2\2\u034e\u034f\3\2\2\2\u034fM\3\2\2\2\u0350\u034e\3\2\2\2\u0351\u0353"+
		"\7`\2\2\u0352\u0354\5<\37\2\u0353\u0352\3\2\2\2\u0353\u0354\3\2\2\2\u0354"+
		"\u0355\3\2\2\2\u0355\u0358\7a\2\2\u0356\u0358\5\u0136\u009c\2\u0357\u0351"+
		"\3\2\2\2\u0357\u0356\3\2\2\2\u0358O\3\2\2\2\u0359\u035b\7\u008c\2\2\u035a"+
		"\u0359\3\2\2\2\u035a\u035b\3\2\2\2\u035b\u035c\3\2\2\2\u035c\u035d\7\'"+
		"\2\2\u035d\u0366\5T+\2\u035e\u0360\7\u008c\2\2\u035f\u035e\3\2\2\2\u035f"+
		"\u0360\3\2\2\2\u0360\u0361\3\2\2\2\u0361\u0362\7\'\2\2\u0362\u0363\7b"+
		"\2\2\u0363\u0364\7c\2\2\u0364\u0366\5T+\2\u0365\u035a\3\2\2\2\u0365\u035f"+
		"\3\2\2\2\u0366Q\3\2\2\2\u0367\u0368\7=\2\2\u0368\u0369\7`\2\2\u0369\u036a"+
		"\5t;\2\u036a\u036b\7a\2\2\u036bS\3\2\2\2\u036c\u0373\5@!\2\u036d\u036e"+
		"\7`\2\2\u036e\u036f\5\u0118\u008d\2\u036f\u0370\7a\2\2\u0370\u0371\5T"+
		"+\2\u0371\u0373\3\2\2\2\u0372\u036c\3\2\2\2\u0372\u036d\3\2\2\2\u0373"+
		"U\3\2\2\2\u0374\u0375\b,\1\2\u0375\u0376\5\32\16\2\u0376\u037f\3\2\2\2"+
		"\u0377\u0378\f\4\2\2\u0378\u0379\7\u008f\2\2\u0379\u037e\5T+\2\u037a\u037b"+
		"\f\3\2\2\u037b\u037c\7\u0088\2\2\u037c\u037e\5T+\2\u037d\u0377\3\2\2\2"+
		"\u037d\u037a\3\2\2\2\u037e\u0381\3\2\2\2\u037f\u037d\3\2\2\2\u037f\u0380"+
		"\3\2\2\2\u0380W\3\2\2\2\u0381\u037f\3\2\2\2\u0382\u0383\b-\1\2\u0383\u0384"+
		"\5V,\2\u0384\u0390\3\2\2\2\u0385\u0386\f\5\2\2\u0386\u0387\7h\2\2\u0387"+
		"\u038f\5V,\2\u0388\u0389\f\4\2\2\u0389\u038a\7i\2\2\u038a\u038f\5V,\2"+
		"\u038b\u038c\f\3\2\2\u038c\u038d\7j\2\2\u038d\u038f\5V,\2\u038e\u0385"+
		"\3\2\2\2\u038e\u0388\3\2\2\2\u038e\u038b\3\2\2\2\u038f\u0392\3\2\2\2\u0390"+
		"\u038e\3\2\2\2\u0390\u0391\3\2\2\2\u0391Y\3\2\2\2\u0392\u0390\3\2\2\2"+
		"\u0393\u0394\b.\1\2\u0394\u0395\5X-\2\u0395\u039e\3\2\2\2\u0396\u0397"+
		"\f\4\2\2\u0397\u0398\7f\2\2\u0398\u039d\5X-\2\u0399\u039a\f\3\2\2\u039a"+
		"\u039b\7g\2\2\u039b\u039d\5X-\2\u039c\u0396\3\2\2\2\u039c\u0399\3\2\2"+
		"\2\u039d\u03a0\3\2\2\2\u039e\u039c\3\2\2\2\u039e\u039f\3\2\2\2\u039f["+
		"\3\2\2\2\u03a0\u039e\3\2\2\2\u03a1\u03a2\b/\1\2\u03a2\u03a3\5Z.\2\u03a3"+
		"\u03aa\3\2\2\2\u03a4\u03a5\f\3\2\2\u03a5\u03a6\5^\60\2\u03a6\u03a7\5Z"+
		".\2\u03a7\u03a9\3\2\2\2\u03a8\u03a4\3\2\2\2\u03a9\u03ac\3\2\2\2\u03aa"+
		"\u03a8\3\2\2\2\u03aa\u03ab\3\2\2\2\u03ab]\3\2\2\2\u03ac\u03aa\3\2\2\2"+
		"\u03ad\u03ae\t\4\2\2\u03ae_\3\2\2\2\u03af\u03b0\b\61\1\2\u03b0\u03b1\5"+
		"\\/\2\u03b1\u03c0\3\2\2\2\u03b2\u03b3\f\6\2\2\u03b3\u03b4\7q\2\2\u03b4"+
		"\u03bf\5\\/\2\u03b5\u03b6\f\5\2\2\u03b6\u03b7\7r\2\2\u03b7\u03bf\5\\/"+
		"\2\u03b8\u03b9\f\4\2\2\u03b9\u03ba\7\u0081\2\2\u03ba\u03bf\5\\/\2\u03bb"+
		"\u03bc\f\3\2\2\u03bc\u03bd\7\u0082\2\2\u03bd\u03bf\5\\/\2\u03be\u03b2"+
		"\3\2\2\2\u03be\u03b5\3\2\2\2\u03be\u03b8\3\2\2\2\u03be\u03bb\3\2\2\2\u03bf"+
		"\u03c2\3\2\2\2\u03c0\u03be\3\2\2\2\u03c0\u03c1\3\2\2\2\u03c1a\3\2\2\2"+
		"\u03c2\u03c0\3\2\2\2\u03c3\u03c4\b\62\1\2\u03c4\u03c5\5`\61\2\u03c5\u03ce"+
		"\3\2\2\2\u03c6\u03c7\f\4\2\2\u03c7\u03c8\7\177\2\2\u03c8\u03cd\5`\61\2"+
		"\u03c9\u03ca\f\3\2\2\u03ca\u03cb\7\u0080\2\2\u03cb\u03cd\5`\61\2\u03cc"+
		"\u03c6\3\2\2\2\u03cc\u03c9\3\2\2\2\u03cd\u03d0\3\2\2\2\u03ce\u03cc\3\2"+
		"\2\2\u03ce\u03cf\3\2\2\2\u03cfc\3\2\2\2\u03d0\u03ce\3\2\2\2\u03d1\u03d2"+
		"\b\63\1\2\u03d2\u03d3\5b\62\2\u03d3\u03d9\3\2\2\2\u03d4\u03d5\f\3\2\2"+
		"\u03d5\u03d6\7l\2\2\u03d6\u03d8\5b\62\2\u03d7\u03d4\3\2\2\2\u03d8\u03db"+
		"\3\2\2\2\u03d9\u03d7\3\2\2\2\u03d9\u03da\3\2\2\2\u03dae\3\2\2\2\u03db"+
		"\u03d9\3\2\2\2\u03dc\u03dd\b\64\1\2\u03dd\u03de\5d\63\2\u03de\u03e4\3"+
		"\2\2\2\u03df\u03e0\f\3\2\2\u03e0\u03e1\7k\2\2\u03e1\u03e3\5d\63\2\u03e2"+
		"\u03df\3\2\2\2\u03e3\u03e6\3\2\2\2\u03e4\u03e2\3\2\2\2\u03e4\u03e5\3\2"+
		"\2\2\u03e5g\3\2\2\2\u03e6\u03e4\3\2\2\2\u03e7\u03e8\b\65\1\2\u03e8\u03e9"+
		"\5f\64\2\u03e9\u03ef\3\2\2\2\u03ea\u03eb\f\3\2\2\u03eb\u03ec\7m\2\2\u03ec"+
		"\u03ee\5f\64\2\u03ed\u03ea\3\2\2\2\u03ee\u03f1\3\2\2\2\u03ef\u03ed\3\2"+
		"\2\2\u03ef\u03f0\3\2\2\2\u03f0i\3\2\2\2\u03f1\u03ef\3\2\2\2\u03f2\u03f3"+
		"\b\66\1\2\u03f3\u03f4\5h\65\2\u03f4\u03fd\3\2\2\2\u03f5\u03f6\f\4\2\2"+
		"\u03f6\u03f7\7\16\2\2\u03f7\u03fc\5h\65\2\u03f8\u03f9\f\3\2\2\u03f9\u03fa"+
		"\7\17\2\2\u03fa\u03fc\5h\65\2\u03fb\u03f5\3\2\2\2\u03fb\u03f8\3\2\2\2"+
		"\u03fc\u03ff\3\2\2\2\u03fd\u03fb\3\2\2\2\u03fd\u03fe\3\2\2\2\u03fek\3"+
		"\2\2\2\u03ff\u03fd\3\2\2\2\u0400\u0401\b\67\1\2\u0401\u0402\5j\66\2\u0402"+
		"\u040b\3\2\2\2\u0403\u0404\f\4\2\2\u0404\u0405\7\20\2\2\u0405\u040a\5"+
		"j\66\2\u0406\u0407\f\3\2\2\u0407\u0408\7\21\2\2\u0408\u040a\5j\66\2\u0409"+
		"\u0403\3\2\2\2\u0409\u0406\3\2\2\2\u040a\u040d\3\2\2\2\u040b\u0409\3\2"+
		"\2\2\u040b\u040c\3\2\2\2\u040cm\3\2\2\2\u040d\u040b\3\2\2\2\u040e\u0416"+
		"\5l\67\2\u040f\u0410\5l\67\2\u0410\u0411\7\u008a\2\2\u0411\u0412\5t;\2"+
		"\u0412\u0413\7\u008b\2\2\u0413\u0414\5p9\2\u0414\u0416\3\2\2\2\u0415\u040e"+
		"\3\2\2\2\u0415\u040f\3\2\2\2\u0416o\3\2\2\2\u0417\u041f\5V,\2\u0418\u041f"+
		"\5T+\2\u0419\u041a\5l\67\2\u041a\u041b\5r:\2\u041b\u041c\5V,\2\u041c\u041f"+
		"\3\2\2\2\u041d\u041f\5\u0192\u00ca\2\u041e\u0417\3\2\2\2\u041e\u0418\3"+
		"\2\2\2\u041e\u0419\3\2\2\2\u041e\u041d\3\2\2\2\u041fq\3\2\2\2\u0420\u0421"+
		"\t\5\2\2\u0421s\3\2\2\2\u0422\u0423\b;\1\2\u0423\u0424\5p9\2\u0424\u042a"+
		"\3\2\2\2\u0425\u0426\f\3\2\2\u0426\u0427\7\u0087\2\2\u0427\u0429\5p9\2"+
		"\u0428\u0425\3\2\2\2\u0429\u042c\3\2\2\2\u042a\u0428\3\2\2\2\u042a\u042b"+
		"\3\2\2\2\u042bu\3\2\2\2\u042c\u042a\3\2\2\2\u042d\u042e\5n8\2\u042ew\3"+
		"\2\2\2\u042f\u044c\5z>\2\u0430\u0432\5\u00eav\2\u0431\u0430\3\2\2\2\u0431"+
		"\u0432\3\2\2\2\u0432\u0433\3\2\2\2\u0433\u044c\5|?\2\u0434\u0436\5\u00ea"+
		"v\2\u0435\u0434\3\2\2\2\u0435\u0436\3\2\2\2\u0436\u0437\3\2\2\2\u0437"+
		"\u044c\5~@\2\u0438\u043a\5\u00eav\2\u0439\u0438\3\2\2\2\u0439\u043a\3"+
		"\2\2\2\u043a\u043b\3\2\2\2\u043b\u044c\5\u0082B\2\u043c\u043e\5\u00ea"+
		"v\2\u043d\u043c\3\2\2\2\u043d\u043e\3\2\2\2\u043e\u043f\3\2\2\2\u043f"+
		"\u044c\5\u0086D\2\u0440\u0442\5\u00eav\2\u0441\u0440\3\2\2\2\u0441\u0442"+
		"\3\2\2\2\u0442\u0443\3\2\2\2\u0443\u044c\5\u008eH\2\u0444\u044c\5\u0090"+
		"I\2\u0445\u044c\5\n\6\2\u0446\u044c\5\22\n\2\u0447\u0449\5\u00eav\2\u0448"+
		"\u0447\3\2\2\2\u0448\u0449\3\2\2\2\u0449\u044a\3\2\2\2\u044a\u044c\5\u0188"+
		"\u00c5\2\u044b\u042f\3\2\2\2\u044b\u0431\3\2\2\2\u044b\u0435\3\2\2\2\u044b"+
		"\u0439\3\2\2\2\u044b\u043d\3\2\2\2\u044b\u0441\3\2\2\2\u044b\u0444\3\2"+
		"\2\2\u044b\u0445\3\2\2\2\u044b\u0446\3\2\2\2\u044b\u0448\3\2\2\2\u044c"+
		"y\3\2\2\2\u044d\u044f\5\u00eav\2\u044e\u044d\3\2\2\2\u044e\u044f\3\2\2"+
		"\2\u044f\u0450\3\2\2\2\u0450\u0451\7\u0091\2\2\u0451\u0452\7\u008b\2\2"+
		"\u0452\u0462\5x=\2\u0453\u0455\5\u00eav\2\u0454\u0453\3\2\2\2\u0454\u0455"+
		"\3\2\2\2\u0455\u0456\3\2\2\2\u0456\u0457\7\33\2\2\u0457\u0458\5v<\2\u0458"+
		"\u0459\7\u008b\2\2\u0459\u045a\5x=\2\u045a\u0462\3\2\2\2\u045b\u045d\5"+
		"\u00eav\2\u045c\u045b\3\2\2\2\u045c\u045d\3\2\2\2\u045d\u045e\3\2\2\2"+
		"\u045e\u045f\7&\2\2\u045f\u0460\7\u008b\2\2\u0460\u0462\5x=\2\u0461\u044e"+
		"\3\2\2\2\u0461\u0454\3\2\2\2\u0461\u045c\3\2\2\2\u0462{\3\2\2\2\u0463"+
		"\u0465\5t;\2\u0464\u0463\3\2\2\2\u0464\u0465\3\2\2\2\u0465\u0466\3\2\2"+
		"\2\u0466\u0467\7\u008d\2\2\u0467}\3\2\2\2\u0468\u046a\7d\2\2\u0469\u046b"+
		"\5\u0080A\2\u046a\u0469\3\2\2\2\u046a\u046b\3\2\2\2\u046b\u046c\3\2\2"+
		"\2\u046c\u046d\7e\2\2\u046d\177\3\2\2\2\u046e\u046f\bA\1\2\u046f\u0470"+
		"\5x=\2\u0470\u0475\3\2\2\2\u0471\u0472\f\3\2\2\u0472\u0474\5x=\2\u0473"+
		"\u0471\3\2\2\2\u0474\u0477\3\2\2\2\u0475\u0473\3\2\2\2\u0475\u0476\3\2"+
		"\2\2\u0476\u0081\3\2\2\2\u0477\u0475\3\2\2\2\u0478\u0479\7\66\2\2\u0479"+
		"\u047a\7`\2\2\u047a\u047b\5\u0084C\2\u047b\u047c\7a\2\2\u047c\u047d\5"+
		"x=\2\u047d\u048d\3\2\2\2\u047e\u047f\7\66\2\2\u047f\u0480\7`\2\2\u0480"+
		"\u0481\5\u0084C\2\u0481\u0482\7a\2\2\u0482\u0483\5x=\2\u0483\u0484\7+"+
		"\2\2\u0484\u0485\5x=\2\u0485\u048d\3\2\2\2\u0486\u0487\7N\2\2\u0487\u0488"+
		"\7`\2\2\u0488\u0489\5\u0084C\2\u0489\u048a\7a\2\2\u048a\u048b\5x=\2\u048b"+
		"\u048d\3\2\2\2\u048c\u0478\3\2\2\2\u048c\u047e\3\2\2\2\u048c\u0486\3\2"+
		"\2\2\u048d\u0083\3\2\2\2\u048e\u049f\5t;\2\u048f\u0491\5\u00eav\2\u0490"+
		"\u048f\3\2\2\2\u0490\u0491\3\2\2\2\u0491\u0492\3\2\2\2\u0492\u0493\5\u00a4"+
		"S\2\u0493\u0494\5\u0104\u0083\2\u0494\u0495\7p\2\2\u0495\u0496\5\u0132"+
		"\u009a\2\u0496\u049f\3\2\2\2\u0497\u0499\5\u00eav\2\u0498\u0497\3\2\2"+
		"\2\u0498\u0499\3\2\2\2\u0499\u049a\3\2\2\2\u049a\u049b\5\u00a4S\2\u049b"+
		"\u049c\5\u0104\u0083\2\u049c\u049d\5\u0136\u009c\2\u049d\u049f\3\2\2\2"+
		"\u049e\u048e\3\2\2\2\u049e\u0490\3\2\2\2\u049e\u0498\3\2\2\2\u049f\u0085"+
		"\3\2\2\2\u04a0\u04a1\7_\2\2\u04a1\u04a2\7`\2\2\u04a2\u04a3\5\u0084C\2"+
		"\u04a3\u04a4\7a\2\2\u04a4\u04a5\5x=\2\u04a5\u04c4\3\2\2\2\u04a6\u04a7"+
		"\7(\2\2\u04a7\u04a8\5x=\2\u04a8\u04a9\7_\2\2\u04a9\u04aa\7`\2\2\u04aa"+
		"\u04ab\5t;\2\u04ab\u04ac\7a\2\2\u04ac\u04ad\7\u008d\2\2\u04ad\u04c4\3"+
		"\2\2\2\u04ae\u04af\7\63\2\2\u04af\u04b0\7`\2\2\u04b0\u04b2\5\u0088E\2"+
		"\u04b1\u04b3\5\u0084C\2\u04b2\u04b1\3\2\2\2\u04b2\u04b3\3\2\2\2\u04b3"+
		"\u04b4\3\2\2\2\u04b4\u04b6\7\u008d\2\2\u04b5\u04b7\5t;\2\u04b6\u04b5\3"+
		"\2\2\2\u04b6\u04b7\3\2\2\2\u04b7\u04b8\3\2\2\2\u04b8\u04b9\7a\2\2\u04b9"+
		"\u04ba\5x=\2\u04ba\u04c4\3\2\2\2\u04bb\u04bc\7\63\2\2\u04bc\u04bd\7`\2"+
		"\2\u04bd\u04be\5\u008aF\2\u04be\u04bf\7\u008b\2\2\u04bf\u04c0\5\u008c"+
		"G\2\u04c0\u04c1\7a\2\2\u04c1\u04c2\5x=\2\u04c2\u04c4\3\2\2\2\u04c3\u04a0"+
		"\3\2\2\2\u04c3\u04a6\3\2\2\2\u04c3\u04ae\3\2\2\2\u04c3\u04bb\3\2\2\2\u04c4"+
		"\u0087\3\2\2\2\u04c5\u04c8\5|?\2\u04c6\u04c8\5\u009aN\2\u04c7\u04c5\3"+
		"\2\2\2\u04c7\u04c6\3\2\2\2\u04c8\u0089\3\2\2\2\u04c9\u04cb\5\u00eav\2"+
		"\u04ca\u04c9\3\2\2\2\u04ca\u04cb\3\2\2\2\u04cb\u04cc\3\2\2\2\u04cc\u04cd"+
		"\5\u00a4S\2\u04cd\u04ce\5\u0104\u0083\2\u04ce\u008b\3\2\2\2\u04cf\u04d2"+
		"\5t;\2\u04d0\u04d2\5\u0136\u009c\2\u04d1\u04cf\3\2\2\2\u04d1\u04d0\3\2"+
		"\2\2\u04d2\u008d\3\2\2\2\u04d3\u04d4\7\32\2\2\u04d4\u04e4\7\u008d\2\2"+
		"\u04d5\u04d6\7$\2\2\u04d6\u04e4\7\u008d\2\2\u04d7\u04d9\7F\2\2\u04d8\u04da"+
		"\5t;\2\u04d9\u04d8\3\2\2\2\u04d9\u04da\3\2\2\2\u04da\u04db\3\2\2\2\u04db"+
		"\u04e4\7\u008d\2\2\u04dc\u04dd\7F\2\2\u04dd\u04de\5\u0136\u009c\2\u04de"+
		"\u04df\7\u008d\2\2\u04df\u04e4\3\2\2\2\u04e0\u04e1\7\65\2\2\u04e1\u04e2"+
		"\7\u0091\2\2\u04e2\u04e4\7\u008d\2\2\u04e3\u04d3\3\2\2\2\u04e3\u04d5\3"+
		"\2\2\2\u04e3\u04d7\3\2\2\2\u04e3\u04dc\3\2\2\2\u04e3\u04e0\3\2\2\2\u04e4"+
		"\u008f\3\2\2\2\u04e5\u04e6\5\u0096L\2\u04e6\u0091\3\2\2\2\u04e7\u04e8"+
		"\bJ\1\2\u04e8\u04e9\5\u0094K\2\u04e9\u04ee\3\2\2\2\u04ea\u04eb\f\3\2\2"+
		"\u04eb\u04ed\5\u0094K\2\u04ec\u04ea\3\2\2\2\u04ed\u04f0\3\2\2\2\u04ee"+
		"\u04ec\3\2\2\2\u04ee\u04ef\3\2\2\2\u04ef\u0093\3\2\2\2\u04f0\u04ee\3\2"+
		"\2\2\u04f1\u04fb\5\u0096L\2\u04f2\u04fb\5\u012a\u0096\2\u04f3\u04fb\5"+
		"\u0170\u00b9\2\u04f4\u04fb\5\u0184\u00c3\2\u04f5\u04fb\5\u0186\u00c4\2"+
		"\u04f6\u04fb\5\u00e8u\2\u04f7\u04fb\5\u00d2j\2\u04f8\u04fb\5\u009eP\2"+
		"\u04f9\u04fb\5\u00a0Q\2\u04fa\u04f1\3\2\2\2\u04fa\u04f2\3\2\2\2\u04fa"+
		"\u04f3\3\2\2\2\u04fa\u04f4\3\2\2\2\u04fa\u04f5\3\2\2\2\u04fa\u04f6\3\2"+
		"\2\2\u04fa\u04f7\3\2\2\2\u04fa\u04f8\3\2\2\2\u04fa\u04f9\3\2\2\2\u04fb"+
		"\u0095\3\2\2\2\u04fc\u0505\5\u009aN\2\u04fd\u0505\5\u00e6t\2\u04fe\u0505"+
		"\5\u00dep\2\u04ff\u0505\5\u00e2r\2\u0500\u0505\5\u00e4s\2\u0501\u0505"+
		"\5\u009cO\2\u0502\u0505\5\u0098M\2\u0503\u0505\5\u00c2b\2\u0504\u04fc"+
		"\3\2\2\2\u0504\u04fd\3\2\2\2\u0504\u04fe\3\2\2\2\u0504\u04ff\3\2\2\2\u0504"+
		"\u0500\3\2\2\2\u0504\u0501\3\2\2\2\u0504\u0502\3\2\2\2\u0504\u0503\3\2"+
		"\2\2\u0505\u0097\3\2\2\2\u0506\u0507\7Z\2\2\u0507\u0509\7\u0091\2\2\u0508"+
		"\u050a\5\u00eav\2\u0509\u0508\3\2\2\2\u0509\u050a\3\2\2\2\u050a\u050b"+
		"\3\2\2\2\u050b\u050c\7p\2\2\u050c\u050d\5\u0118\u008d\2\u050d\u050e\7"+
		"\u008d\2\2\u050e\u0099\3\2\2\2\u050f\u0511\5\u00a4S\2\u0510\u050f\3\2"+
		"\2\2\u0510\u0511\3\2\2\2\u0511\u0513\3\2\2\2\u0512\u0514\5\u0100\u0081"+
		"\2\u0513\u0512\3\2\2\2\u0513\u0514\3\2\2\2\u0514\u0515\3\2\2\2\u0515\u051e"+
		"\7\u008d\2\2\u0516\u0518\5\u00eav\2\u0517\u0519\5\u00a4S\2\u0518\u0517"+
		"\3\2\2\2\u0518\u0519\3\2\2\2\u0519\u051a\3\2\2\2\u051a\u051b\5\u0100\u0081"+
		"\2\u051b\u051c\7\u008d\2\2\u051c\u051e\3\2\2\2\u051d\u0510\3\2\2\2\u051d"+
		"\u0516\3\2\2\2\u051e\u009b\3\2\2\2\u051f\u0520\7K\2\2\u0520\u0521\7`\2"+
		"\2\u0521\u0522\5v<\2\u0522\u0525\7\u0087\2\2\u0523\u0526\7\u009a\2\2\u0524"+
		"\u0526\5\20\t\2\u0525\u0523\3\2\2\2\u0525\u0524\3\2\2\2\u0526\u0527\3"+
		"\2\2\2\u0527\u0528\7a\2\2\u0528\u0529\7\u008d\2\2\u0529\u009d\3\2\2\2"+
		"\u052a\u052b\7\u008d\2\2\u052b\u009f\3\2\2\2\u052c\u052d\5\u00eav\2\u052d"+
		"\u052e\7\u008d\2\2\u052e\u00a1\3\2\2\2\u052f\u0536\5\u00a6T\2\u0530\u0536"+
		"\5\u00acW\2\u0531\u0536\5\u00a8U\2\u0532\u0536\7\64\2\2\u0533\u0536\7"+
		"U\2\2\u0534\u0536\7\"\2\2\u0535\u052f\3\2\2\2\u0535\u0530\3\2\2\2\u0535"+
		"\u0531\3\2\2\2\u0535\u0532\3\2\2\2\u0535\u0533\3\2\2\2\u0535\u0534\3\2"+
		"\2\2\u0536\u00a3\3\2\2\2\u0537\u0539\5\u00a2R\2\u0538\u053a\5\u00eav\2"+
		"\u0539\u0538\3\2\2\2\u0539\u053a\3\2\2\2\u053a\u053f\3\2\2\2\u053b\u053c"+
		"\5\u00a2R\2\u053c\u053d\5\u00a4S\2\u053d\u053f\3\2\2\2\u053e\u0537\3\2"+
		"\2\2\u053e\u053b\3\2\2\2\u053f\u00a5\3\2\2\2\u0540\u0541\t\6\2\2\u0541"+
		"\u00a7\3\2\2\2\u0542\u0543\t\7\2\2\u0543\u00a9\3\2\2\2\u0544\u0545\7\u0091"+
		"\2\2\u0545\u00ab\3\2\2\2\u0546\u054a\5\u00aeX\2\u0547\u054a\5\u013a\u009e"+
		"\2\u0548\u054a\5\u00be`\2\u0549\u0546\3\2\2\2\u0549\u0547\3\2\2\2\u0549"+
		"\u0548\3\2\2\2\u054a\u00ad\3\2\2\2\u054b\u0550\5\u00b4[\2\u054c\u0550"+
		"\5\u00ba^\2\u054d\u0550\5\u0182\u00c2\2\u054e\u0550\5\u0112\u008a\2\u054f"+
		"\u054b\3\2\2\2\u054f\u054c\3\2\2\2\u054f\u054d\3\2\2\2\u054f\u054e\3\2"+
		"\2\2\u0550\u00af\3\2\2\2\u0551\u0553\5\u00acW\2\u0552\u0554\5\u00eav\2"+
		"\u0553\u0552\3\2\2\2\u0553\u0554\3\2\2\2\u0554\u0559\3\2\2\2\u0555\u0556"+
		"\5\u00acW\2\u0556\u0557\5\u00b0Y\2\u0557\u0559\3\2\2\2\u0558\u0551\3\2"+
		"\2\2\u0558\u0555\3\2\2\2\u0559\u00b1\3\2\2\2\u055a\u055c\5\u00aeX\2\u055b"+
		"\u055d\5\u00eav\2\u055c\u055b\3\2\2\2\u055c\u055d\3\2\2\2\u055d\u0562"+
		"\3\2\2\2\u055e\u055f\5\u00aeX\2\u055f\u0560\5\u00b2Z\2\u0560\u0562\3\2"+
		"\2\2\u0561\u055a\3\2\2\2\u0561\u055e\3\2\2\2\u0562\u00b3\3\2\2\2\u0563"+
		"\u0565\5\"\22\2\u0564\u0563\3\2\2\2\u0564\u0565\3\2\2\2\u0565\u0566\3"+
		"\2\2\2\u0566\u057b\5\u00b6\\\2\u0567\u0568\5\"\22\2\u0568\u0569\7O\2\2"+
		"\u0569\u056a\5\u0178\u00bd\2\u056a\u057b\3\2\2\2\u056b\u057b\7\35\2\2"+
		"\u056c\u057b\7\36\2\2\u056d\u057b\7\37\2\2\u056e\u057b\7^\2\2\u056f\u057b"+
		"\7\31\2\2\u0570\u057b\7G\2\2\u0571\u057b\78\2\2\u0572\u057b\79\2\2\u0573"+
		"\u057b\7H\2\2\u0574\u057b\7Y\2\2\u0575\u057b\7\62\2\2\u0576\u057b\7)\2"+
		"\2\u0577\u057b\7\\\2\2\u0578\u057b\7\30\2\2\u0579\u057b\5\u00b8]\2\u057a"+
		"\u0564\3\2\2\2\u057a\u0567\3\2\2\2\u057a\u056b\3\2\2\2\u057a\u056c\3\2"+
		"\2\2\u057a\u056d\3\2\2\2\u057a\u056e\3\2\2\2\u057a\u056f\3\2\2\2\u057a"+
		"\u0570\3\2\2\2\u057a\u0571\3\2\2\2\u057a\u0572\3\2\2\2\u057a\u0573\3\2"+
		"\2\2\u057a\u0574\3\2\2\2\u057a\u0575\3\2\2\2\u057a\u0576\3\2\2\2\u057a"+
		"\u0577\3\2\2\2\u057a\u0578\3\2\2\2\u057a\u0579\3\2\2\2\u057b\u00b5\3\2"+
		"\2\2\u057c\u0581\5\u0138\u009d\2\u057d\u0581\5\u00bc_\2\u057e\u0581\5"+
		"\u00aaV\2\u057f\u0581\5\u0178\u00bd\2\u0580\u057c\3\2\2\2\u0580\u057d"+
		"\3\2\2\2\u0580\u057e\3\2\2\2\u0580\u057f\3\2\2\2\u0581\u00b7\3\2\2\2\u0582"+
		"\u0583\7%\2\2\u0583\u0584\7`\2\2\u0584\u0585\5t;\2\u0585\u0586\7a\2\2"+
		"\u0586\u058c\3\2\2\2\u0587\u0588\7%\2\2\u0588\u0589\7`\2\2\u0589\u058a"+
		"\7\30\2\2\u058a\u058c\7a\2\2\u058b\u0582\3\2\2\2\u058b\u0587\3\2\2\2\u058c"+
		"\u00b9\3\2\2\2\u058d\u058f\5\u0142\u00a2\2\u058e\u0590\5\u00eav\2\u058f"+
		"\u058e\3\2\2\2\u058f\u0590\3\2\2\2\u0590\u0592\3\2\2\2\u0591\u0593\5\""+
		"\22\2\u0592\u0591\3\2\2\2\u0592\u0593\3\2\2\2\u0593\u0594\3\2\2\2\u0594"+
		"\u0595\7\u0091\2\2\u0595\u05a6\3\2\2\2\u0596\u0597\5\u0142\u00a2\2\u0597"+
		"\u0598\5\u0178\u00bd\2\u0598\u05a6\3\2\2\2\u0599\u059a\5\u0142\u00a2\2"+
		"\u059a\u059c\5\"\22\2\u059b\u059d\7O\2\2\u059c\u059b\3\2\2\2\u059c\u059d"+
		"\3\2\2\2\u059d\u059e\3\2\2\2\u059e\u059f\5\u0178\u00bd\2\u059f\u05a6\3"+
		"\2\2\2\u05a0\u05a2\7,\2\2\u05a1\u05a3\5\"\22\2\u05a2\u05a1\3\2\2\2\u05a2"+
		"\u05a3\3\2\2\2\u05a3\u05a4\3\2\2\2\u05a4\u05a6\7\u0091\2\2\u05a5\u058d"+
		"\3\2\2\2\u05a5\u0596\3\2\2\2\u05a5\u0599\3\2\2\2\u05a5\u05a0\3\2\2\2\u05a6"+
		"\u00bb\3\2\2\2\u05a7\u05a8\7\u0091\2\2\u05a8\u00bd\3\2\2\2\u05a9\u05aa"+
		"\5\u00c0a\2\u05aa\u05ac\7d\2\2\u05ab\u05ad\5\u00c8e\2\u05ac\u05ab\3\2"+
		"\2\2\u05ac\u05ad\3\2\2\2\u05ad\u05ae\3\2\2\2\u05ae\u05af\7e\2\2\u05af"+
		"\u05b7\3\2\2\2\u05b0\u05b1\5\u00c0a\2\u05b1\u05b2\7d\2\2\u05b2\u05b3\5"+
		"\u00c8e\2\u05b3\u05b4\7\u0087\2\2\u05b4\u05b5\7e\2\2\u05b5\u05b7\3\2\2"+
		"\2\u05b6\u05a9\3\2\2\2\u05b6\u05b0\3\2\2\2\u05b7\u00bf\3\2\2\2\u05b8\u05ba"+
		"\5\u00c4c\2\u05b9\u05bb\5\u00eav\2\u05ba\u05b9\3\2\2\2\u05ba\u05bb\3\2"+
		"\2\2\u05bb\u05bd\3\2\2\2\u05bc\u05be\7\u0091\2\2\u05bd\u05bc\3\2\2\2\u05bd"+
		"\u05be\3\2\2\2\u05be\u05c0\3\2\2\2\u05bf\u05c1\5\u00c6d\2\u05c0\u05bf"+
		"\3\2\2\2\u05c0\u05c1\3\2\2\2\u05c1\u05cc\3\2\2\2\u05c2\u05c4\5\u00c4c"+
		"\2\u05c3\u05c5\5\u00eav\2\u05c4\u05c3\3\2\2\2\u05c4\u05c5\3\2\2\2\u05c5"+
		"\u05c6\3\2\2\2\u05c6\u05c7\5\"\22\2\u05c7\u05c9\7\u0091\2\2\u05c8\u05ca"+
		"\5\u00c6d\2\u05c9\u05c8\3\2\2\2\u05c9\u05ca\3\2\2\2\u05ca\u05cc\3\2\2"+
		"\2\u05cb\u05b8\3\2\2\2\u05cb\u05c2\3\2\2\2\u05cc\u00c1\3\2\2\2\u05cd\u05cf"+
		"\5\u00c4c\2\u05ce\u05d0\5\u00eav\2\u05cf\u05ce\3\2\2\2\u05cf\u05d0\3\2"+
		"\2\2\u05d0\u05d1\3\2\2\2\u05d1\u05d3\7\u0091\2\2\u05d2\u05d4\5\u00c6d"+
		"\2\u05d3\u05d2\3\2\2\2\u05d3\u05d4\3\2\2\2\u05d4\u05d5\3\2\2\2\u05d5\u05d6"+
		"\7\u008d\2\2\u05d6\u00c3\3\2\2\2\u05d7\u05dd\7,\2\2\u05d8\u05d9\7,\2\2"+
		"\u05d9\u05dd\7 \2\2\u05da\u05db\7,\2\2\u05db\u05dd\7M\2\2\u05dc\u05d7"+
		"\3\2\2\2\u05dc\u05d8\3\2\2\2\u05dc\u05da\3\2\2\2\u05dd\u00c5\3\2\2\2\u05de"+
		"\u05df\7\u008b\2\2\u05df\u05e0\5\u00b0Y\2\u05e0\u00c7\3\2\2\2\u05e1\u05e2"+
		"\be\1\2\u05e2\u05e3\5\u00caf\2\u05e3\u05e9\3\2\2\2\u05e4\u05e5\f\3\2\2"+
		"\u05e5\u05e6\7\u0087\2\2\u05e6\u05e8\5\u00caf\2\u05e7\u05e4\3\2\2\2\u05e8"+
		"\u05eb\3\2\2\2\u05e9\u05e7\3\2\2\2\u05e9\u05ea\3\2\2\2\u05ea\u00c9\3\2"+
		"\2\2\u05eb\u05e9\3\2\2\2\u05ec\u05f2\5\u00ccg\2\u05ed\u05ee\5\u00ccg\2"+
		"\u05ee\u05ef\7p\2\2\u05ef\u05f0\5v<\2\u05f0\u05f2\3\2\2\2\u05f1\u05ec"+
		"\3\2\2\2\u05f1\u05ed\3\2\2\2\u05f2\u00cb\3\2\2\2\u05f3\u05f4\7\u0091\2"+
		"\2\u05f4\u00cd\3\2\2\2\u05f5\u05f8\5\u00d0i\2\u05f6\u05f8\5\u00dco\2\u05f7"+
		"\u05f5\3\2\2\2\u05f7\u05f6\3\2\2\2\u05f8\u00cf\3\2\2\2\u05f9\u05fa\7\u0091"+
		"\2\2\u05fa\u00d1\3\2\2\2\u05fb\u05fe\5\u00d4k\2\u05fc\u05fe\5\u00d8m\2"+
		"\u05fd\u05fb\3\2\2\2\u05fd\u05fc\3\2\2\2\u05fe\u00d3\3\2\2\2\u05ff\u0600"+
		"\5\u00d6l\2\u0600\u00d5\3\2\2\2\u0601\u0603\7\67\2\2\u0602\u0601\3\2\2"+
		"\2\u0602\u0603\3\2\2\2\u0603\u0604\3\2\2\2\u0604\u0605\7;\2\2\u0605\u0606"+
		"\7\u0091\2\2\u0606\u0607\7d\2\2\u0607\u0608\5\u00dan\2\u0608\u0609\7e"+
		"\2\2\u0609\u00d7\3\2\2\2\u060a\u060c\7\67\2\2\u060b\u060a\3\2\2\2\u060b"+
		"\u060c\3\2\2\2\u060c\u060d\3\2\2\2\u060d\u060e\7;\2\2\u060e\u060f\7d\2"+
		"\2\u060f\u0610\5\u00dan\2\u0610\u0611\7e\2\2\u0611\u00d9\3\2\2\2\u0612"+
		"\u0614\5\u0092J\2\u0613\u0612\3\2\2\2\u0613\u0614\3\2\2\2\u0614\u00db"+
		"\3\2\2\2\u0615\u0616\7\u0091\2\2\u0616\u00dd\3\2\2\2\u0617\u0618\7;\2"+
		"\2\u0618\u0619\7\u0091\2\2\u0619\u061a\7p\2\2\u061a\u061b\5\u00e0q\2\u061b"+
		"\u061c\7\u008d\2\2\u061c\u00df\3\2\2\2\u061d\u061f\5\"\22\2\u061e\u061d"+
		"\3\2\2\2\u061e\u061f\3\2\2\2\u061f\u0620\3\2\2\2\u0620\u0621\5\u00ceh"+
		"\2\u0621\u00e1\3\2\2\2\u0622\u0624\7Z\2\2\u0623\u0625\7W\2\2\u0624\u0623"+
		"\3\2\2\2\u0624\u0625\3\2\2\2\u0625\u0626\3\2\2\2\u0626\u0627\5\"\22\2"+
		"\u0627\u0628\5\36\20\2\u0628\u0629\7\u008d\2\2\u0629\u0630\3\2\2\2\u062a"+
		"\u062b\7Z\2\2\u062b\u062c\7\u008c\2\2\u062c\u062d\5\36\20\2\u062d\u062e"+
		"\7\u008d\2\2\u062e\u0630\3\2\2\2\u062f\u0622\3\2\2\2\u062f\u062a\3\2\2"+
		"\2\u0630\u00e3\3\2\2\2\u0631\u0633\5\u00eav\2\u0632\u0631\3\2\2\2\u0632"+
		"\u0633\3\2\2\2\u0633\u0634\3\2\2\2\u0634\u0635\7Z\2\2\u0635\u0637\7;\2"+
		"\2\u0636\u0638\5\"\22\2\u0637\u0636\3\2\2\2\u0637\u0638\3\2\2\2\u0638"+
		"\u0639\3\2\2\2\u0639\u063a\5\u00ceh\2\u063a\u063b\7\u008d\2\2\u063b\u00e5"+
		"\3\2\2\2\u063c\u063d\7\27\2\2\u063d\u063e\7`\2\2\u063e\u063f\7\u009a\2"+
		"\2\u063f\u0640\7a\2\2\u0640\u0641\7\u008d\2\2\u0641\u00e7\3\2\2\2\u0642"+
		"\u0643\7/\2\2\u0643\u0644\7\u009a\2\2\u0644\u0646\7d\2\2\u0645\u0647\5"+
		"\u0092J\2\u0646\u0645\3\2\2\2\u0646\u0647\3\2\2\2\u0647\u0648\3\2\2\2"+
		"\u0648\u064d\7e\2\2\u0649\u064a\7/\2\2\u064a\u064b\7\u009a\2\2\u064b\u064d"+
		"\5\u0094K\2\u064c\u0642\3\2\2\2\u064c\u0649\3\2\2\2\u064d\u00e9\3\2\2"+
		"\2\u064e\u064f\bv\1\2\u064f\u0650\5\u00ecw\2\u0650\u0655\3\2\2\2\u0651"+
		"\u0652\f\3\2\2\u0652\u0654\5\u00ecw\2\u0653\u0651\3\2\2\2\u0654\u0657"+
		"\3\2\2\2\u0655\u0653\3\2\2\2\u0655\u0656\3\2\2\2\u0656\u00eb\3\2\2\2\u0657"+
		"\u0655\3\2\2\2\u0658\u0659\7b\2\2\u0659\u065a\7b\2\2\u065a\u065b\5\u00f0"+
		"y\2\u065b\u065c\7c\2\2\u065c\u065d\7c\2\2\u065d\u0660\3\2\2\2\u065e\u0660"+
		"\5\u00eex\2\u065f\u0658\3\2\2\2\u065f\u065e\3\2\2\2\u0660\u00ed\3\2\2"+
		"\2\u0661\u0662\7\25\2\2\u0662\u0663\7`\2\2\u0663\u0665\5\u0118\u008d\2"+
		"\u0664\u0666\7\u0090\2\2\u0665\u0664\3\2\2\2\u0665\u0666\3\2\2\2\u0666"+
		"\u0667\3\2\2\2\u0667\u0668\7a\2\2\u0668\u0672\3\2\2\2\u0669\u066a\7\25"+
		"\2\2\u066a\u066b\7`\2\2\u066b\u066d\5v<\2\u066c\u066e\7\u0090\2\2\u066d"+
		"\u066c\3\2\2\2\u066d\u066e\3\2\2\2\u066e\u066f\3\2\2\2\u066f\u0670\7a"+
		"\2\2\u0670\u0672\3\2\2\2\u0671\u0661\3\2\2\2\u0671\u0669\3\2\2\2\u0672"+
		"\u00ef\3\2\2\2\u0673\u0675\by\1\2\u0674\u0676\5\u00f2z\2\u0675\u0674\3"+
		"\2\2\2\u0675\u0676\3\2\2\2\u0676\u067b\3\2\2\2\u0677\u0678\5\u00f2z\2"+
		"\u0678\u0679\7\u0090\2\2\u0679\u067b\3\2\2\2\u067a\u0673\3\2\2\2\u067a"+
		"\u0677\3\2\2\2\u067b\u0688\3\2\2\2\u067c\u067d\f\5\2\2\u067d\u067f\7\u0087"+
		"\2\2\u067e\u0680\5\u00f2z\2\u067f\u067e\3\2\2\2\u067f\u0680\3\2\2\2\u0680"+
		"\u0687\3\2\2\2\u0681\u0682\f\3\2\2\u0682\u0683\7\u0087\2\2\u0683\u0684"+
		"\5\u00f2z\2\u0684\u0685\7\u0090\2\2\u0685\u0687\3\2\2\2\u0686\u067c\3"+
		"\2\2\2\u0686\u0681\3\2\2\2\u0687\u068a\3\2\2\2\u0688\u0686\3\2\2\2\u0688"+
		"\u0689\3\2\2\2\u0689\u00f1\3\2\2\2\u068a\u0688\3\2\2\2\u068b\u068d\5\u00f4"+
		"{\2\u068c\u068e\5\u00fa~\2\u068d\u068c\3\2\2\2\u068d\u068e\3\2\2\2\u068e"+
		"\u00f3\3\2\2\2\u068f\u0692\7\u0091\2\2\u0690\u0692\5\u00f6|\2\u0691\u068f"+
		"\3\2\2\2\u0691\u0690\3\2\2\2\u0692\u00f5\3\2\2\2\u0693\u0694\5\u00f8}"+
		"\2\u0694\u0695\7\u008c\2\2\u0695\u0696\7\u0091\2\2\u0696\u00f7\3\2\2\2"+
		"\u0697\u0698\7\u0091\2\2\u0698\u00f9\3\2\2\2\u0699\u069a\7`\2\2\u069a"+
		"\u069b\5\u00fc\177\2\u069b\u069c\7a\2\2\u069c\u00fb\3\2\2\2\u069d\u069f"+
		"\b\177\1\2\u069e\u06a0\5\u00fe\u0080\2\u069f\u069e\3\2\2\2\u069f\u06a0"+
		"\3\2\2\2\u06a0\u06a5\3\2\2\2\u06a1\u06a2\f\3\2\2\u06a2\u06a4\5\u00fe\u0080"+
		"\2\u06a3\u06a1\3\2\2\2\u06a4\u06a7\3\2\2\2\u06a5\u06a3\3\2\2\2\u06a5\u06a6"+
		"\3\2\2\2\u06a6\u00fd\3\2\2\2\u06a7\u06a5\3\2\2\2\u06a8\u06a9\7`\2\2\u06a9"+
		"\u06aa\5\u00fc\177\2\u06aa\u06ab\7a\2\2\u06ab\u06b5\3\2\2\2\u06ac\u06ad"+
		"\7b\2\2\u06ad\u06ae\5\u00fc\177\2\u06ae\u06af\7c\2\2\u06af\u06b5\3\2\2"+
		"\2\u06b0\u06b1\7d\2\2\u06b1\u06b2\5\u00fc\177\2\u06b2\u06b3\7e\2\2\u06b3"+
		"\u06b5\3\2\2\2\u06b4\u06a8\3\2\2\2\u06b4\u06ac\3\2\2\2\u06b4\u06b0\3\2"+
		"\2\2\u06b5\u00ff\3\2\2\2\u06b6\u06b7\b\u0081\1\2\u06b7\u06b8\5\u0102\u0082"+
		"\2\u06b8\u06be\3\2\2\2\u06b9\u06ba\f\3\2\2\u06ba\u06bb\7\u0087\2\2\u06bb"+
		"\u06bd\5\u0102\u0082\2\u06bc\u06b9\3\2\2\2\u06bd\u06c0\3\2\2\2\u06be\u06bc"+
		"\3\2\2\2\u06be\u06bf\3\2\2\2\u06bf\u0101\3\2\2\2\u06c0\u06be\3\2\2\2\u06c1"+
		"\u06c3\5\u0104\u0083\2\u06c2\u06c4\5\u012e\u0098\2\u06c3\u06c2\3\2\2\2"+
		"\u06c3\u06c4\3\2\2\2\u06c4\u0103\3\2\2\2\u06c5\u06cc\5\u0106\u0084\2\u06c6"+
		"\u06cc\5\u0108\u0085\2\u06c7\u06c8\5\u0108\u0085\2\u06c8\u06c9\5\u010a"+
		"\u0086\2\u06c9\u06ca\5\u010c\u0087\2\u06ca\u06cc\3\2\2\2\u06cb\u06c5\3"+
		"\2\2\2\u06cb\u06c6\3\2\2\2\u06cb\u06c7\3\2\2\2\u06cc\u0105\3\2\2\2\u06cd"+
		"\u06ce\5\u010e\u0088\2\u06ce\u06cf\5\u0106\u0084\2\u06cf\u0107\3\2\2\2"+
		"\u06d0\u06d1\b\u0085\1\2\u06d1\u06d3\5\u0116\u008c\2\u06d2\u06d4\5\u00ea"+
		"v\2\u06d3\u06d2\3\2\2\2\u06d3\u06d4\3\2\2\2\u06d4\u06da\3\2\2\2\u06d5"+
		"\u06d6\7`\2\2\u06d6\u06d7\5\u0106\u0084\2\u06d7\u06d8\7a\2\2\u06d8\u06da"+
		"\3\2\2\2\u06d9\u06d0\3\2\2\2\u06d9\u06d5\3\2\2\2\u06da\u06e8\3\2\2\2\u06db"+
		"\u06dc\f\5\2\2\u06dc\u06e7\5\u010a\u0086\2\u06dd\u06de\f\4\2\2\u06de\u06e0"+
		"\7b\2\2\u06df\u06e1\5v<\2\u06e0\u06df\3\2\2\2\u06e0\u06e1\3\2\2\2\u06e1"+
		"\u06e2\3\2\2\2\u06e2\u06e4\7c\2\2\u06e3\u06e5\5\u00eav\2\u06e4\u06e3\3"+
		"\2\2\2\u06e4\u06e5\3\2\2\2\u06e5\u06e7\3\2\2\2\u06e6\u06db\3\2\2\2\u06e6"+
		"\u06dd\3\2\2\2\u06e7\u06ea\3\2\2\2\u06e8\u06e6\3\2\2\2\u06e8\u06e9\3\2"+
		"\2\2\u06e9\u0109\3\2\2\2\u06ea\u06e8\3\2\2\2\u06eb\u06ec\7`\2\2\u06ec"+
		"\u06ed\5\u0124\u0093\2\u06ed\u06ef\7a\2\2\u06ee\u06f0\5\u0110\u0089\2"+
		"\u06ef\u06ee\3\2\2\2\u06ef\u06f0\3\2\2\2\u06f0\u06f2\3\2\2\2\u06f1\u06f3"+
		"\5\u0114\u008b\2\u06f2\u06f1\3\2\2\2\u06f2\u06f3\3\2\2\2\u06f3\u06f5\3"+
		"\2\2\2\u06f4\u06f6\5\u0194\u00cb\2\u06f5\u06f4\3\2\2\2\u06f5\u06f6\3\2"+
		"\2\2\u06f6\u06f8\3\2\2\2\u06f7\u06f9\5\u00eav\2\u06f8\u06f7\3\2\2\2\u06f8"+
		"\u06f9\3\2\2\2\u06f9\u010b\3\2\2\2\u06fa\u06fb\7\u0089\2\2\u06fb\u06fd"+
		"\5\u00b2Z\2\u06fc\u06fe\5\u011a\u008e\2\u06fd\u06fc\3\2\2\2\u06fd\u06fe"+
		"\3\2\2\2\u06fe\u010d\3\2\2\2\u06ff\u0701\7h\2\2\u0700\u0702\5\u00eav\2"+
		"\u0701\u0700\3\2\2\2\u0701\u0702\3\2\2\2\u0702\u0704\3\2\2\2\u0703\u0705"+
		"\5\u0110\u0089\2\u0704\u0703\3\2\2\2\u0704\u0705\3\2\2\2\u0705\u0717\3"+
		"\2\2\2\u0706\u0708\7l\2\2\u0707\u0709\5\u00eav\2\u0708\u0707\3\2\2\2\u0708"+
		"\u0709\3\2\2\2\u0709\u0717\3\2\2\2\u070a\u070c\7\16\2\2\u070b\u070d\5"+
		"\u00eav\2\u070c\u070b\3\2\2\2\u070c\u070d\3\2\2\2\u070d\u0717\3\2\2\2"+
		"\u070e\u070f\5\"\22\2\u070f\u0711\7h\2\2\u0710\u0712\5\u00eav\2\u0711"+
		"\u0710\3\2\2\2\u0711\u0712\3\2\2\2\u0712\u0714\3\2\2\2\u0713\u0715\5\u0110"+
		"\u0089\2\u0714\u0713\3\2\2\2\u0714\u0715\3\2\2\2\u0715\u0717\3\2\2\2\u0716"+
		"\u06ff\3\2\2\2\u0716\u0706\3\2\2\2\u0716\u070a\3\2\2\2\u0716\u070e\3\2"+
		"\2\2\u0717\u010f\3\2\2\2\u0718\u071a\5\u0112\u008a\2\u0719\u071b\5\u0110"+
		"\u0089\2\u071a\u0719\3\2\2\2\u071a\u071b\3\2\2\2\u071b\u0111\3\2\2\2\u071c"+
		"\u071d\t\b\2\2\u071d\u0113\3\2\2\2\u071e\u071f\t\t\2\2\u071f\u0115\3\2"+
		"\2\2\u0720\u0722\7\u0090\2\2\u0721\u0720\3\2\2\2\u0721\u0722\3\2\2\2\u0722"+
		"\u0723\3\2\2\2\u0723\u0724\5\34\17\2\u0724\u0117\3\2\2\2\u0725\u0727\5"+
		"\u00b0Y\2\u0726\u0728\5\u011a\u008e\2\u0727\u0726\3\2\2\2\u0727\u0728"+
		"\3\2\2\2\u0728\u0119\3\2\2\2\u0729\u0732\5\u011c\u008f\2\u072a\u072c\5"+
		"\u011e\u0090\2\u072b\u072a\3\2\2\2\u072b\u072c\3\2\2\2\u072c\u072d\3\2"+
		"\2\2\u072d\u072e\5\u010a\u0086\2\u072e\u072f\5\u010c\u0087\2\u072f\u0732"+
		"\3\2\2\2\u0730\u0732\5\u0120\u0091\2\u0731\u0729\3\2\2\2\u0731\u072b\3"+
		"\2\2\2\u0731\u0730\3\2\2\2\u0732\u011b\3\2\2\2\u0733\u0739\5\u011e\u0090"+
		"\2\u0734\u0736\5\u010e\u0088\2\u0735\u0737\5\u011c\u008f\2\u0736\u0735"+
		"\3\2\2\2\u0736\u0737\3\2\2\2\u0737\u0739\3\2\2\2\u0738\u0733\3\2\2\2\u0738"+
		"\u0734\3\2\2\2\u0739\u011d\3\2\2\2\u073a\u073b\b\u0090\1\2\u073b\u0749"+
		"\5\u010a\u0086\2\u073c\u073e\7b\2\2\u073d\u073f\5v<\2\u073e\u073d\3\2"+
		"\2\2\u073e\u073f\3\2\2\2\u073f\u0740\3\2\2\2\u0740\u0742\7c\2\2\u0741"+
		"\u0743\5\u00eav\2\u0742\u0741\3\2\2\2\u0742\u0743\3\2\2\2\u0743\u0749"+
		"\3\2\2\2\u0744\u0745\7`\2\2\u0745\u0746\5\u011c\u008f\2\u0746\u0747\7"+
		"a\2\2\u0747\u0749\3\2\2\2\u0748\u073a\3\2\2\2\u0748\u073c\3\2\2\2\u0748"+
		"\u0744\3\2\2\2\u0749\u0757\3\2\2\2\u074a\u074b\f\7\2\2\u074b\u0756\5\u010a"+
		"\u0086\2\u074c\u074d\f\5\2\2\u074d\u074f\7b\2\2\u074e\u0750\5v<\2\u074f"+
		"\u074e\3\2\2\2\u074f\u0750\3\2\2\2\u0750\u0751\3\2\2\2\u0751\u0753\7c"+
		"\2\2\u0752\u0754\5\u00eav\2\u0753\u0752\3\2\2\2\u0753\u0754\3\2\2\2\u0754"+
		"\u0756\3\2\2\2\u0755\u074a\3\2\2\2\u0755\u074c\3\2\2\2\u0756\u0759\3\2"+
		"\2\2\u0757\u0755\3\2\2\2\u0757\u0758\3\2\2\2\u0758\u011f\3\2\2\2\u0759"+
		"\u0757\3\2\2\2\u075a\u075f\5\u0122\u0092\2\u075b\u075c\5\u010e\u0088\2"+
		"\u075c\u075d\5\u0120\u0091\2\u075d\u075f\3\2\2\2\u075e\u075a\3\2\2\2\u075e"+
		"\u075b\3\2\2\2\u075f\u0121\3\2\2\2\u0760\u0761\b\u0092\1\2\u0761\u0762"+
		"\7\u0090\2\2\u0762\u0770\3\2\2\2\u0763\u0764\f\5\2\2\u0764\u076f\5\u010a"+
		"\u0086\2\u0765\u0766\f\4\2\2\u0766\u0768\7b\2\2\u0767\u0769\5v<\2\u0768"+
		"\u0767\3\2\2\2\u0768\u0769\3\2\2\2\u0769\u076a\3\2\2\2\u076a\u076c\7c"+
		"\2\2\u076b\u076d\5\u00eav\2\u076c\u076b\3\2\2\2\u076c\u076d\3\2\2\2\u076d"+
		"\u076f\3\2\2\2\u076e\u0763\3\2\2\2\u076e\u0765\3\2\2\2\u076f\u0772\3\2"+
		"\2\2\u0770\u076e\3\2\2\2\u0770\u0771\3\2\2\2\u0771\u0123\3\2\2\2\u0772"+
		"\u0770\3\2\2\2\u0773\u0775\5\u0126\u0094\2\u0774\u0773\3\2\2\2\u0774\u0775"+
		"\3\2\2\2\u0775\u0777\3\2\2\2\u0776\u0778\7\u0090\2\2\u0777\u0776\3\2\2"+
		"\2\u0777\u0778\3\2\2\2\u0778\u077e\3\2\2\2\u0779\u077a\5\u0126\u0094\2"+
		"\u077a\u077b\7\u0087\2\2\u077b\u077c\7\u0090\2\2\u077c\u077e\3\2\2\2\u077d"+
		"\u0774\3\2\2\2\u077d\u0779\3\2\2\2\u077e\u0125\3\2\2\2\u077f\u0780\b\u0094"+
		"\1\2\u0780\u0781\5\u0128\u0095\2\u0781\u0787\3\2\2\2\u0782\u0783\f\3\2"+
		"\2\u0783\u0784\7\u0087\2\2\u0784\u0786\5\u0128\u0095\2\u0785\u0782\3\2"+
		"\2\2\u0786\u0789\3\2\2\2\u0787\u0785\3\2\2\2\u0787\u0788\3\2\2\2\u0788"+
		"\u0127\3\2\2\2\u0789\u0787\3\2\2\2\u078a\u078c\5\u00eav\2\u078b\u078a"+
		"\3\2\2\2\u078b\u078c\3\2\2\2\u078c\u078d\3\2\2\2\u078d\u078e\5\u00a4S"+
		"\2\u078e\u078f\5\u0104\u0083\2\u078f\u07aa\3\2\2\2\u0790\u0792\5\u00ea"+
		"v\2\u0791\u0790\3\2\2\2\u0791\u0792\3\2\2\2\u0792\u0793\3\2\2\2\u0793"+
		"\u0794\5\u00a4S\2\u0794\u0795\5\u0104\u0083\2\u0795\u0796\7p\2\2\u0796"+
		"\u0797\5\u0132\u009a\2\u0797\u07aa\3\2\2\2\u0798\u079a\5\u00eav\2\u0799"+
		"\u0798\3\2\2\2\u0799\u079a\3\2\2\2\u079a\u079b\3\2\2\2\u079b\u079d\5\u00a4"+
		"S\2\u079c\u079e\5\u011a\u008e\2\u079d\u079c\3\2\2\2\u079d\u079e\3\2\2"+
		"\2\u079e\u07aa\3\2\2\2\u079f\u07a1\5\u00eav\2\u07a0\u079f\3\2\2\2\u07a0"+
		"\u07a1\3\2\2\2\u07a1\u07a2\3\2\2\2\u07a2\u07a4\5\u00a4S\2\u07a3\u07a5"+
		"\5\u011a\u008e\2\u07a4\u07a3\3\2\2\2\u07a4\u07a5\3\2\2\2\u07a5\u07a6\3"+
		"\2\2\2\u07a6\u07a7\7p\2\2\u07a7\u07a8\5\u0132\u009a\2\u07a8\u07aa\3\2"+
		"\2\2\u07a9\u078b\3\2\2\2\u07a9\u0791\3\2\2\2\u07a9\u0799\3\2\2\2\u07a9"+
		"\u07a0\3\2\2\2\u07aa\u0129\3\2\2\2\u07ab\u07ad\5\u00eav\2\u07ac\u07ab"+
		"\3\2\2\2\u07ac\u07ad\3\2\2\2\u07ad\u07af\3\2\2\2\u07ae\u07b0\5\u00a4S"+
		"\2\u07af\u07ae\3\2\2\2\u07af\u07b0\3\2\2\2\u07b0\u07b1\3\2\2\2\u07b1\u07b3"+
		"\5\u0104\u0083\2\u07b2\u07b4\5\u014c\u00a7\2\u07b3\u07b2\3\2\2\2\u07b3"+
		"\u07b4\3\2\2\2\u07b4\u07b5\3\2\2\2\u07b5\u07b6\5\u012c\u0097\2\u07b6\u012b"+
		"\3\2\2\2\u07b7\u07b9\5\u0164\u00b3\2\u07b8\u07b7\3\2\2\2\u07b8\u07b9\3"+
		"\2\2\2\u07b9\u07ba\3\2\2\2\u07ba\u07c3\5~@\2\u07bb\u07c3\5\u018a\u00c6"+
		"\2\u07bc\u07bd\7p\2\2\u07bd\u07be\7&\2\2\u07be\u07c3\7\u008d\2\2\u07bf"+
		"\u07c0\7p\2\2\u07c0\u07c1\7\'\2\2\u07c1\u07c3\7\u008d\2\2\u07c2\u07b8"+
		"\3\2\2\2\u07c2\u07bb\3\2\2\2\u07c2\u07bc\3\2\2\2\u07c2\u07bf\3\2\2\2\u07c3"+
		"\u012d\3\2\2\2\u07c4\u07ca\5\u0130\u0099\2\u07c5\u07c6\7`\2\2\u07c6\u07c7"+
		"\5<\37\2\u07c7\u07c8\7a\2\2\u07c8\u07ca\3\2\2\2\u07c9\u07c4\3\2\2\2\u07c9"+
		"\u07c5\3\2\2\2\u07ca\u012f\3\2\2\2\u07cb\u07cc\7p\2\2\u07cc\u07cf\5\u0132"+
		"\u009a\2\u07cd\u07cf\5\u0136\u009c\2\u07ce\u07cb\3\2\2\2\u07ce\u07cd\3"+
		"\2\2\2\u07cf\u0131\3\2\2\2\u07d0\u07d3\5p9\2\u07d1\u07d3\5\u0136\u009c"+
		"\2\u07d2\u07d0\3\2\2\2\u07d2\u07d1\3\2\2\2\u07d3\u0133\3\2\2\2\u07d4\u07d5"+
		"\b\u009b\1\2\u07d5\u07d7\5\u0132\u009a\2\u07d6\u07d8\7\u0090\2\2\u07d7"+
		"\u07d6\3\2\2\2\u07d7\u07d8\3\2\2\2\u07d8\u07e1\3\2\2\2\u07d9\u07da\f\3"+
		"\2\2\u07da\u07db\7\u0087\2\2\u07db\u07dd\5\u0132\u009a\2\u07dc\u07de\7"+
		"\u0090\2\2\u07dd\u07dc\3\2\2\2\u07dd\u07de\3\2\2\2\u07de\u07e0\3\2\2\2"+
		"\u07df\u07d9\3\2\2\2\u07e0\u07e3\3\2\2\2\u07e1\u07df\3\2\2\2\u07e1\u07e2"+
		"\3\2\2\2\u07e2\u0135\3\2\2\2\u07e3\u07e1\3\2\2\2\u07e4\u07e5\7d\2\2\u07e5"+
		"\u07e7\5\u0134\u009b\2\u07e6\u07e8\7\u0087\2\2\u07e7\u07e6\3\2\2\2\u07e7"+
		"\u07e8\3\2\2\2\u07e8\u07e9\3\2\2\2\u07e9\u07ea\7e\2\2\u07ea\u07ee\3\2"+
		"\2\2\u07eb\u07ec\7d\2\2\u07ec\u07ee\7e\2\2\u07ed\u07e4\3\2\2\2\u07ed\u07eb"+
		"\3\2\2\2\u07ee\u0137\3\2\2\2\u07ef\u07f2\7\u0091\2\2\u07f0\u07f2\5\u0178"+
		"\u00bd\2\u07f1\u07ef\3\2\2\2\u07f1\u07f0\3\2\2\2\u07f2\u0139\3\2\2\2\u07f3"+
		"\u07f4\5\u013c\u009f\2\u07f4\u07f6\7d\2\2\u07f5\u07f7\5\u0144\u00a3\2"+
		"\u07f6\u07f5\3\2\2\2\u07f6\u07f7\3\2\2\2\u07f7\u07f8\3\2\2\2\u07f8\u07f9"+
		"\7e\2\2\u07f9\u013b\3\2\2\2\u07fa\u07fc\5\u0142\u00a2\2\u07fb\u07fd\5"+
		"\u00eav\2\u07fc\u07fb\3\2\2\2\u07fc\u07fd\3\2\2\2\u07fd\u07fe\3\2\2\2"+
		"\u07fe\u0800\5\u013e\u00a0\2\u07ff\u0801\5\u0140\u00a1\2\u0800\u07ff\3"+
		"\2\2\2\u0800\u0801\3\2\2\2\u0801\u0803\3\2\2\2\u0802\u0804\5\u0152\u00aa"+
		"\2\u0803\u0802\3\2\2\2\u0803\u0804\3\2\2\2\u0804\u080d\3\2\2\2\u0805\u0807"+
		"\5\u0142\u00a2\2\u0806\u0808\5\u00eav\2\u0807\u0806\3\2\2\2\u0807\u0808"+
		"\3\2\2\2\u0808\u080a\3\2\2\2\u0809\u080b\5\u0152\u00aa\2\u080a\u0809\3"+
		"\2\2\2\u080a\u080b\3\2\2\2\u080b\u080d\3\2\2\2\u080c\u07fa\3\2\2\2\u080c"+
		"\u0805\3\2\2\2\u080d\u013d\3\2\2\2\u080e\u0810\5\"\22\2\u080f\u080e\3"+
		"\2\2\2\u080f\u0810\3\2\2\2\u0810\u0811\3\2\2\2\u0811\u0812\5\u0138\u009d"+
		"\2\u0812\u013f\3\2\2\2\u0813\u0814\7\61\2\2\u0814\u0141\3\2\2\2\u0815"+
		"\u0816\t\n\2\2\u0816\u0143\3\2\2\2\u0817\u0819\5\u0146\u00a4\2\u0818\u081a"+
		"\5\u0144\u00a3\2\u0819\u0818\3\2\2\2\u0819\u081a\3\2\2\2\u081a\u0821\3"+
		"\2\2\2\u081b\u081c\5\u015c\u00af\2\u081c\u081e\7\u008b\2\2\u081d\u081f"+
		"\5\u0144\u00a3\2\u081e\u081d\3\2\2\2\u081e\u081f\3\2\2\2\u081f\u0821\3"+
		"\2\2\2\u0820\u0817\3\2\2\2\u0820\u081b\3\2\2\2\u0821\u0145\3\2\2\2\u0822"+
		"\u0824\5\u00eav\2\u0823\u0822\3\2\2\2\u0823\u0824\3\2\2\2\u0824\u0826"+
		"\3\2\2\2\u0825\u0827\5\u00a4S\2\u0826\u0825\3\2\2\2\u0826\u0827\3\2\2"+
		"\2\u0827\u0829\3\2\2\2\u0828\u082a\5\u0148\u00a5\2\u0829\u0828\3\2\2\2"+
		"\u0829\u082a\3\2\2\2\u082a\u082b\3\2\2\2\u082b\u0833\7\u008d\2\2\u082c"+
		"\u0833\5\u012a\u0096\2\u082d\u0833\5\u00e2r\2\u082e\u0833\5\u009cO\2\u082f"+
		"\u0833\5\u0170\u00b9\2\u0830\u0833\5\u0098M\2\u0831\u0833\5\u009eP\2\u0832"+
		"\u0823\3\2\2\2\u0832\u082c\3\2\2\2\u0832\u082d\3\2\2\2\u0832\u082e\3\2"+
		"\2\2\u0832\u082f\3\2\2\2\u0832\u0830\3\2\2\2\u0832\u0831\3\2\2\2\u0833"+
		"\u0147\3\2\2\2\u0834\u0835\b\u00a5\1\2\u0835\u0836\5\u014a\u00a6\2\u0836"+
		"\u083c\3\2\2\2\u0837\u0838\f\3\2\2\u0838\u0839\7\u0087\2\2\u0839\u083b"+
		"\5\u014a\u00a6\2\u083a\u0837\3\2\2\2\u083b\u083e\3\2\2\2\u083c\u083a\3"+
		"\2\2\2\u083c\u083d\3\2\2\2\u083d\u0149\3\2\2\2\u083e\u083c\3\2\2\2\u083f"+
		"\u0841\5\u0104\u0083\2\u0840\u0842\5\u014c\u00a7\2\u0841\u0840\3\2\2\2"+
		"\u0841\u0842\3\2\2\2\u0842\u0844\3\2\2\2\u0843\u0845\5\u0150\u00a9\2\u0844"+
		"\u0843\3\2\2\2\u0844\u0845\3\2\2\2\u0845\u0853\3\2\2\2\u0846\u0848\5\u0104"+
		"\u0083\2\u0847\u0849\5\u0130\u0099\2\u0848\u0847\3\2\2\2\u0848\u0849\3"+
		"\2\2\2\u0849\u0853\3\2\2\2\u084a\u084c\7\u0091\2\2\u084b\u084a\3\2\2\2"+
		"\u084b\u084c\3\2\2\2\u084c\u084e\3\2\2\2\u084d\u084f\5\u00eav\2\u084e"+
		"\u084d\3\2\2\2\u084e\u084f\3\2\2\2\u084f\u0850\3\2\2\2\u0850\u0851\7\u008b"+
		"\2\2\u0851\u0853\5v<\2\u0852\u083f\3\2\2\2\u0852\u0846\3\2\2\2\u0852\u084b"+
		"\3\2\2\2\u0853\u014b\3\2\2\2\u0854\u0855\b\u00a7\1\2\u0855\u0856\5\u014e"+
		"\u00a8\2\u0856\u085b\3\2\2\2\u0857\u0858\f\3\2\2\u0858\u085a\5\u014e\u00a8"+
		"\2\u0859\u0857\3\2\2\2\u085a\u085d\3\2\2\2\u085b\u0859\3\2\2\2\u085b\u085c"+
		"\3\2\2\2\u085c\u014d\3\2\2\2\u085d\u085b\3\2\2\2\u085e\u085f\t\13\2\2"+
		"\u085f\u014f\3\2\2\2\u0860\u0861\7p\2\2\u0861\u0862\7\u0094\2\2\u0862"+
		"\u0863\b\u00a9\1\2\u0863\u0151\3\2\2\2\u0864\u0865\7\u008b\2\2\u0865\u0866"+
		"\5\u0154\u00ab\2\u0866\u0153\3\2\2\2\u0867\u0868\b\u00ab\1\2\u0868\u086a"+
		"\5\u0156\u00ac\2\u0869\u086b\7\u0090\2\2\u086a\u0869\3\2\2\2\u086a\u086b"+
		"\3\2\2\2\u086b\u0874\3\2\2\2\u086c\u086d\f\3\2\2\u086d\u086e\7\u0087\2"+
		"\2\u086e\u0870\5\u0156\u00ac\2\u086f\u0871\7\u0090\2\2\u0870\u086f\3\2"+
		"\2\2\u0870\u0871\3\2\2\2\u0871\u0873\3\2\2\2\u0872\u086c\3\2\2\2\u0873"+
		"\u0876\3\2\2\2\u0874\u0872\3\2\2\2\u0874\u0875\3\2\2\2\u0875\u0155\3\2"+
		"\2\2\u0876\u0874\3\2\2\2\u0877\u0879\5\u00eav\2\u0878\u0877\3\2\2\2\u0878"+
		"\u0879\3\2\2\2\u0879\u087a\3\2\2\2\u087a\u088d\5\u015a\u00ae\2\u087b\u087d"+
		"\5\u00eav\2\u087c\u087b\3\2\2\2\u087c\u087d\3\2\2\2\u087d\u087e\3\2\2"+
		"\2\u087e\u0880\7[\2\2\u087f\u0881\5\u015c\u00af\2\u0880\u087f\3\2\2\2"+
		"\u0880\u0881\3\2\2\2\u0881\u0882\3\2\2\2\u0882\u088d\5\u015a\u00ae\2\u0883"+
		"\u0885\5\u00eav\2\u0884\u0883\3\2\2\2\u0884\u0885\3\2\2\2\u0885\u0886"+
		"\3\2\2\2\u0886\u0888\5\u015c\u00af\2\u0887\u0889\7[\2\2\u0888\u0887\3"+
		"\2\2\2\u0888\u0889\3\2\2\2\u0889\u088a\3\2\2\2\u088a\u088b\5\u015a\u00ae"+
		"\2\u088b\u088d\3\2\2\2\u088c\u0878\3\2\2\2\u088c\u087c\3\2\2\2\u088c\u0884"+
		"\3\2\2\2\u088d\u0157\3\2\2\2\u088e\u0890\5\"\22\2\u088f\u088e\3\2\2\2"+
		"\u088f\u0890\3\2\2\2\u0890\u0891\3\2\2\2\u0891\u0894\5\u0138\u009d\2\u0892"+
		"\u0894\5\u00b8]\2\u0893\u088f\3\2\2\2\u0893\u0892\3\2\2\2\u0894\u0159"+
		"\3\2\2\2\u0895\u0896\5\u0158\u00ad\2\u0896\u015b\3\2\2\2\u0897\u0898\t"+
		"\f\2\2\u0898\u015d\3\2\2\2\u0899\u089a\7?\2\2\u089a\u089b\5\u0160\u00b1"+
		"\2\u089b\u015f\3\2\2\2\u089c\u089e\5\u00b0Y\2\u089d\u089f\5\u0162\u00b2"+
		"\2\u089e\u089d\3\2\2\2\u089e\u089f\3\2\2\2\u089f\u0161\3\2\2\2\u08a0\u08a2"+
		"\5\u010e\u0088\2\u08a1\u08a3\5\u0162\u00b2\2\u08a2\u08a1\3\2\2\2\u08a2"+
		"\u08a3\3\2\2\2\u08a3\u0163\3\2\2\2\u08a4\u08a5\7\u008b\2\2\u08a5\u08a6"+
		"\5\u0166\u00b4\2\u08a6\u0165\3\2\2\2\u08a7\u08a9\5\u0168\u00b5\2\u08a8"+
		"\u08aa\7\u0090\2\2\u08a9\u08a8\3\2\2\2\u08a9\u08aa\3\2\2\2\u08aa\u08b3"+
		"\3\2\2\2\u08ab\u08ad\5\u0168\u00b5\2\u08ac\u08ae\7\u0090\2\2\u08ad\u08ac"+
		"\3\2\2\2\u08ad\u08ae\3\2\2\2\u08ae\u08af\3\2\2\2\u08af\u08b0\7\u0087\2"+
		"\2\u08b0\u08b1\5\u0166\u00b4\2\u08b1\u08b3\3\2\2\2\u08b2\u08a7\3\2\2\2"+
		"\u08b2\u08ab\3\2\2\2\u08b3\u0167\3\2\2\2\u08b4\u08b5\5\u016a\u00b6\2\u08b5"+
		"\u08b7\7`\2\2\u08b6\u08b8\5<\37\2\u08b7\u08b6\3\2\2\2\u08b7\u08b8\3\2"+
		"\2\2\u08b8\u08b9\3\2\2\2\u08b9\u08ba\7a\2\2\u08ba\u08bf\3\2\2\2\u08bb"+
		"\u08bc\5\u016a\u00b6\2\u08bc\u08bd\5\u0136\u009c\2\u08bd\u08bf\3\2\2\2"+
		"\u08be\u08b4\3\2\2\2\u08be\u08bb\3\2\2\2\u08bf\u0169\3\2\2\2\u08c0\u08c3"+
		"\5\u0158\u00ad\2\u08c1\u08c3\7\u0091\2\2\u08c2\u08c0\3\2\2\2\u08c2\u08c1"+
		"\3\2\2\2\u08c3\u016b\3\2\2\2\u08c4\u08c5\7?\2\2\u08c5\u08c6\5\u019c\u00cf"+
		"\2\u08c6\u016d\3\2\2\2\u08c7\u08ca\7?\2\2\u08c8\u08cb\7\u009a\2\2\u08c9"+
		"\u08cb\5\20\t\2\u08ca\u08c8\3\2\2\2\u08ca\u08c9\3\2\2\2\u08cb\u08cc\3"+
		"\2\2\2\u08cc\u08d3\7\u0091\2\2\u08cd\u08d0\7?\2\2\u08ce\u08d1\7\u009d"+
		"\2\2\u08cf\u08d1\5\20\t\2\u08d0\u08ce\3\2\2\2\u08d0\u08cf\3\2\2\2\u08d1"+
		"\u08d3\3\2\2\2\u08d2\u08c7\3\2\2\2\u08d2\u08cd\3\2\2\2\u08d3\u016f\3\2"+
		"\2\2\u08d4\u08d5\7O\2\2\u08d5\u08d6\7q\2\2\u08d6\u08d7\5\u0172\u00ba\2"+
		"\u08d7\u08d8\7r\2\2\u08d8\u08d9\5\u0094K\2\u08d9\u0171\3\2\2\2\u08da\u08db"+
		"\b\u00ba\1\2\u08db\u08dc\5\u0174\u00bb\2\u08dc\u08e2\3\2\2\2\u08dd\u08de"+
		"\f\3\2\2\u08de\u08df\7\u0087\2\2\u08df\u08e1\5\u0174\u00bb\2\u08e0\u08dd"+
		"\3\2\2\2\u08e1\u08e4\3\2\2\2\u08e2\u08e0\3\2\2\2\u08e2\u08e3\3\2\2\2\u08e3"+
		"\u0173\3\2\2\2\u08e4\u08e2\3\2\2\2\u08e5\u08e8\5\u0176\u00bc\2\u08e6\u08e8"+
		"\5\u0128\u0095\2\u08e7\u08e5\3\2\2\2\u08e7\u08e6\3\2\2\2\u08e8\u0175\3"+
		"\2\2\2\u08e9\u08eb\7 \2\2\u08ea\u08ec\7\u0090\2\2\u08eb\u08ea\3\2\2\2"+
		"\u08eb\u08ec\3\2\2\2\u08ec\u08ee\3\2\2\2\u08ed\u08ef\7\u0091\2\2\u08ee"+
		"\u08ed\3\2\2\2\u08ee\u08ef\3\2\2\2\u08ef\u091a\3\2\2\2\u08f0\u08f2\7 "+
		"\2\2\u08f1\u08f3\7\u0091\2\2\u08f2\u08f1\3\2\2\2\u08f2\u08f3\3\2\2\2\u08f3"+
		"\u08f4\3\2\2\2\u08f4\u08f5\7p\2\2\u08f5\u091a\5\u0118\u008d\2\u08f6\u08f8"+
		"\7W\2\2\u08f7\u08f9\7\u0090\2\2\u08f8\u08f7\3\2\2\2\u08f8\u08f9\3\2\2"+
		"\2\u08f9\u08fb\3\2\2\2\u08fa\u08fc\7\u0091\2\2\u08fb\u08fa\3\2\2\2\u08fb"+
		"\u08fc\3\2\2\2\u08fc\u091a\3\2\2\2\u08fd\u08ff\7W\2\2\u08fe\u0900\7\u0091"+
		"\2\2\u08ff\u08fe\3\2\2\2\u08ff\u0900\3\2\2\2\u0900\u0901\3\2\2\2\u0901"+
		"\u0902\7p\2\2\u0902\u091a\5\u0118\u008d\2\u0903\u0904\7O\2\2\u0904\u0905"+
		"\7q\2\2\u0905\u0906\5\u0172\u00ba\2\u0906\u0907\7r\2\2\u0907\u0909\7 "+
		"\2\2\u0908\u090a\7\u0090\2\2\u0909\u0908\3\2\2\2\u0909\u090a\3\2\2\2\u090a"+
		"\u090c\3\2\2\2\u090b\u090d\7\u0091\2\2\u090c\u090b\3\2\2\2\u090c\u090d"+
		"\3\2\2\2\u090d\u091a\3\2\2\2\u090e\u090f\7O\2\2\u090f\u0910\7q\2\2\u0910"+
		"\u0911\5\u0172\u00ba\2\u0911\u0912\7r\2\2\u0912\u0914\7 \2\2\u0913\u0915"+
		"\7\u0091\2\2\u0914\u0913\3\2\2\2\u0914\u0915\3\2\2\2\u0915\u0916\3\2\2"+
		"\2\u0916\u0917\7p\2\2\u0917\u0918\5\34\17\2\u0918\u091a\3\2\2\2\u0919"+
		"\u08e9\3\2\2\2\u0919\u08f0\3\2\2\2\u0919\u08f6\3\2\2\2\u0919\u08fd\3\2"+
		"\2\2\u0919\u0903\3\2\2\2\u0919\u090e\3\2\2\2\u091a\u0177\3\2\2\2\u091b"+
		"\u091c\5\u017c\u00bf\2\u091c\u091e\7q\2\2\u091d\u091f\5\u017e\u00c0\2"+
		"\u091e\u091d\3\2\2\2\u091e\u091f\3\2\2\2\u091f\u0920\3\2\2\2\u0920\u0921"+
		"\7r\2\2\u0921\u0179\3\2\2\2\u0922\u0932\5\u0178\u00bd\2\u0923\u0924\5"+
		"\u016c\u00b7\2\u0924\u0926\7q\2\2\u0925\u0927\5\u017e\u00c0\2\u0926\u0925"+
		"\3\2\2\2\u0926\u0927\3\2\2\2\u0927\u0928\3\2\2\2\u0928\u0929\7r\2\2\u0929"+
		"\u0932\3\2\2\2\u092a\u092b\5\u016e\u00b8\2\u092b\u092d\7q\2\2\u092c\u092e"+
		"\5\u017e\u00c0\2\u092d\u092c\3\2\2\2\u092d\u092e\3\2\2\2\u092e\u092f\3"+
		"\2\2\2\u092f\u0930\7r\2\2\u0930\u0932\3\2\2\2\u0931\u0922\3\2\2\2\u0931"+
		"\u0923\3\2\2\2\u0931\u092a\3\2\2\2\u0932\u017b\3\2\2\2\u0933\u0934\7\u0091"+
		"\2\2\u0934\u017d\3\2\2\2\u0935\u0936\b\u00c0\1\2\u0936\u0938\5\u0180\u00c1"+
		"\2\u0937\u0939\7\u0090\2\2\u0938\u0937\3\2\2\2\u0938\u0939\3\2\2\2\u0939"+
		"\u0942\3\2\2\2\u093a\u093b\f\3\2\2\u093b\u093c\7\u0087\2\2\u093c\u093e"+
		"\5\u0180\u00c1\2\u093d\u093f\7\u0090\2\2\u093e\u093d\3\2\2\2\u093e\u093f"+
		"\3\2\2\2\u093f\u0941\3\2\2\2\u0940\u093a\3\2\2\2\u0941\u0944\3\2\2\2\u0942"+
		"\u0940\3\2\2\2\u0942\u0943\3\2\2\2\u0943\u017f\3\2\2\2\u0944\u0942\3\2"+
		"\2\2\u0945\u0949\5\u0118\u008d\2\u0946\u0949\5v<\2\u0947\u0949\5\34\17"+
		"\2\u0948\u0945\3\2\2\2\u0948\u0946\3\2\2\2\u0948\u0947\3\2\2\2\u0949\u0181"+
		"\3\2\2\2\u094a\u094b\7W\2\2\u094b\u094c\5\"\22\2\u094c\u094d\7\u0091\2"+
		"\2\u094d\u0956\3\2\2\2\u094e\u094f\7W\2\2\u094f\u0951\5\"\22\2\u0950\u0952"+
		"\7O\2\2\u0951\u0950\3\2\2\2\u0951\u0952\3\2\2\2\u0952\u0953\3\2\2\2\u0953"+
		"\u0954\5\u0178\u00bd\2\u0954\u0956\3\2\2\2\u0955\u094a\3\2\2\2\u0955\u094e"+
		"\3\2\2\2\u0956\u0183\3\2\2\2\u0957\u0959\7/\2\2\u0958\u0957\3\2\2\2\u0958"+
		"\u0959\3\2\2\2\u0959\u095a\3\2\2\2\u095a\u095b\7O\2\2\u095b\u095c\5\u0094"+
		"K\2\u095c\u0185\3\2\2\2\u095d\u095e\7O\2\2\u095e\u095f\7q\2\2\u095f\u0960"+
		"\7r\2\2\u0960\u0961\5\u0094K\2\u0961\u0187\3\2\2\2\u0962\u0963\7T\2\2"+
		"\u0963\u0964\5~@\2\u0964\u0965\5\u018c\u00c7\2\u0965\u0189\3\2\2\2\u0966"+
		"\u0968\7T\2\2\u0967\u0969\5\u0164\u00b3\2\u0968\u0967\3\2\2\2\u0968\u0969"+
		"\3\2\2\2\u0969\u096a\3\2\2\2\u096a\u096b\5~@\2\u096b\u096c\5\u018c\u00c7"+
		"\2\u096c\u018b\3\2\2\2\u096d\u096f\5\u018e\u00c8\2\u096e\u0970\5\u018c"+
		"\u00c7\2\u096f\u096e\3\2\2\2\u096f\u0970\3\2\2\2\u0970\u018d\3\2\2\2\u0971"+
		"\u0972\7\34\2\2\u0972\u0973\7`\2\2\u0973\u0974\5\u0190\u00c9\2\u0974\u0975"+
		"\7a\2\2\u0975\u0976\5~@\2\u0976\u018f\3\2\2\2\u0977\u0979\5\u00eav\2\u0978"+
		"\u0977\3\2\2\2\u0978\u0979\3\2\2\2\u0979\u097a\3\2\2\2\u097a\u097b\5\u00b0"+
		"Y\2\u097b\u097c\5\u0104\u0083\2\u097c\u0986\3\2\2\2\u097d\u097f\5\u00ea"+
		"v\2\u097e\u097d\3\2\2\2\u097e\u097f\3\2\2\2\u097f\u0980\3\2\2\2\u0980"+
		"\u0982\5\u00b0Y\2\u0981\u0983\5\u011a\u008e\2\u0982\u0981\3\2\2\2\u0982"+
		"\u0983\3\2\2\2\u0983\u0986\3\2\2\2\u0984\u0986\7\u0090\2\2\u0985\u0978"+
		"\3\2\2\2\u0985\u097e\3\2\2\2\u0985\u0984\3\2\2\2\u0986\u0191\3\2\2\2\u0987"+
		"\u0989\7R\2\2\u0988\u098a\5p9\2\u0989\u0988\3\2\2\2\u0989\u098a\3\2\2"+
		"\2\u098a\u0193\3\2\2\2\u098b\u098e\5\u0196\u00cc\2\u098c\u098e\5\u019a"+
		"\u00ce\2\u098d\u098b\3\2\2\2\u098d\u098c\3\2\2\2\u098e\u0195\3\2\2\2\u098f"+
		"\u0990\7R\2\2\u0990\u0992\7`\2\2\u0991\u0993\5\u0198\u00cd\2\u0992";
	private static final String _serializedATNSegment1 =
		"\u0991\3\2\2\2\u0992\u0993\3\2\2\2\u0993\u0994\3\2\2\2\u0994\u0995\7a"+
		"\2\2\u0995\u0197\3\2\2\2\u0996\u0997\b\u00cd\1\2\u0997\u0999\5\u0118\u008d"+
		"\2\u0998\u099a\7\u0090\2\2\u0999\u0998\3\2\2\2\u0999\u099a\3\2\2\2\u099a"+
		"\u09a3\3\2\2\2\u099b\u099c\f\3\2\2\u099c\u099d\7\u0087\2\2\u099d\u099f"+
		"\5\u0118\u008d\2\u099e\u09a0\7\u0090\2\2\u099f\u099e\3\2\2\2\u099f\u09a0"+
		"\3\2\2\2\u09a0\u09a2\3\2\2\2\u09a1\u099b\3\2\2\2\u09a2\u09a5\3\2\2\2\u09a3"+
		"\u09a1\3\2\2\2\u09a3\u09a4\3\2\2\2\u09a4\u0199\3\2\2\2\u09a5\u09a3\3\2"+
		"\2\2\u09a6\u09a7\7=\2\2\u09a7\u09a8\7`\2\2\u09a8\u09a9\5v<\2\u09a9\u09aa"+
		"\7a\2\2\u09aa\u09ad\3\2\2\2\u09ab\u09ad\7=\2\2\u09ac\u09a6\3\2\2\2\u09ac"+
		"\u09ab\3\2\2\2\u09ad\u019b\3\2\2\2\u09ae\u09e2\7<\2\2\u09af\u09e2\7\'"+
		"\2\2\u09b0\u09b1\7<\2\2\u09b1\u09b2\7b\2\2\u09b2\u09e2\7c\2\2\u09b3\u09b4"+
		"\7\'\2\2\u09b4\u09b5\7b\2\2\u09b5\u09e2\7c\2\2\u09b6\u09e2\7f\2\2\u09b7"+
		"\u09e2\7g\2\2\u09b8\u09e2\7h\2\2\u09b9\u09e2\7i\2\2\u09ba\u09e2\7j\2\2"+
		"\u09bb\u09e2\7k\2\2\u09bc\u09e2\7l\2\2\u09bd\u09e2\7m\2\2\u09be\u09e2"+
		"\7n\2\2\u09bf\u09e2\7\f\2\2\u09c0\u09e2\7\r\2\2\u09c1\u09e2\7p\2\2\u09c2"+
		"\u09e2\7q\2\2\u09c3\u09e2\7r\2\2\u09c4\u09e2\7s\2\2\u09c5\u09e2\7t\2\2"+
		"\u09c6\u09e2\7u\2\2\u09c7\u09e2\7v\2\2\u09c8\u09e2\7w\2\2\u09c9\u09e2"+
		"\7x\2\2\u09ca\u09e2\7y\2\2\u09cb\u09e2\7z\2\2\u09cc\u09e2\7{\2\2\u09cd"+
		"\u09e2\7|\2\2\u09ce\u09e2\7~\2\2\u09cf\u09e2\7}\2\2\u09d0\u09e2\7\177"+
		"\2\2\u09d1\u09e2\7\u0080\2\2\u09d2\u09e2\7\u0081\2\2\u09d3\u09e2\7\u0082"+
		"\2\2\u09d4\u09e2\7\16\2\2\u09d5\u09e2\7\17\2\2\u09d6\u09e2\7\20\2\2\u09d7"+
		"\u09e2\7\21\2\2\u09d8\u09e2\7\u0085\2\2\u09d9\u09e2\7\u0086\2\2\u09da"+
		"\u09e2\7\u0087\2\2\u09db\u09e2\7\u0088\2\2\u09dc\u09e2\7\u0089\2\2\u09dd"+
		"\u09de\7`\2\2\u09de\u09e2\7a\2\2\u09df\u09e0\7b\2\2\u09e0\u09e2\7c\2\2"+
		"\u09e1\u09ae\3\2\2\2\u09e1\u09af\3\2\2\2\u09e1\u09b0\3\2\2\2\u09e1\u09b3"+
		"\3\2\2\2\u09e1\u09b6\3\2\2\2\u09e1\u09b7\3\2\2\2\u09e1\u09b8\3\2\2\2\u09e1"+
		"\u09b9\3\2\2\2\u09e1\u09ba\3\2\2\2\u09e1\u09bb\3\2\2\2\u09e1\u09bc\3\2"+
		"\2\2\u09e1\u09bd\3\2\2\2\u09e1\u09be\3\2\2\2\u09e1\u09bf\3\2\2\2\u09e1"+
		"\u09c0\3\2\2\2\u09e1\u09c1\3\2\2\2\u09e1\u09c2\3\2\2\2\u09e1\u09c3\3\2"+
		"\2\2\u09e1\u09c4\3\2\2\2\u09e1\u09c5\3\2\2\2\u09e1\u09c6\3\2\2\2\u09e1"+
		"\u09c7\3\2\2\2\u09e1\u09c8\3\2\2\2\u09e1\u09c9\3\2\2\2\u09e1\u09ca\3\2"+
		"\2\2\u09e1\u09cb\3\2\2\2\u09e1\u09cc\3\2\2\2\u09e1\u09cd\3\2\2\2\u09e1"+
		"\u09ce\3\2\2\2\u09e1\u09cf\3\2\2\2\u09e1\u09d0\3\2\2\2\u09e1\u09d1\3\2"+
		"\2\2\u09e1\u09d2\3\2\2\2\u09e1\u09d3\3\2\2\2\u09e1\u09d4\3\2\2\2\u09e1"+
		"\u09d5\3\2\2\2\u09e1\u09d6\3\2\2\2\u09e1\u09d7\3\2\2\2\u09e1\u09d8\3\2"+
		"\2\2\u09e1\u09d9\3\2\2\2\u09e1\u09da\3\2\2\2\u09e1\u09db\3\2\2\2\u09e1"+
		"\u09dc\3\2\2\2\u09e1\u09dd\3\2\2\2\u09e1\u09df\3\2\2\2\u09e2\u019d\3\2"+
		"\2\2\u09e3\u09ec\7\u0092\2\2\u09e4\u09ec\7\u0098\2\2\u09e5\u09ec\7\u0099"+
		"\2\2\u09e6\u09ec\7\u009a\2\2\u09e7\u09ec\5\u01a0\u00d1\2\u09e8\u09ec\5"+
		"\u01a2\u00d2\2\u09e9\u09ec\5\u01a4\u00d3\2\u09ea\u09ec\5\20\t\2\u09eb"+
		"\u09e3\3\2\2\2\u09eb\u09e4\3\2\2\2\u09eb\u09e5\3\2\2\2\u09eb\u09e6\3\2"+
		"\2\2\u09eb\u09e7\3\2\2\2\u09eb\u09e8\3\2\2\2\u09eb\u09e9\3\2\2\2\u09eb"+
		"\u09ea\3\2\2\2\u09ec\u019f\3\2\2\2\u09ed\u09ee\t\r\2\2\u09ee\u01a1\3\2"+
		"\2\2\u09ef\u09f0\7>\2\2\u09f0\u01a3\3\2\2\2\u09f1\u09f7\7\u009b\2\2\u09f2"+
		"\u09f7\7\u009c\2\2\u09f3\u09f7\7\u009d\2\2\u09f4\u09f7\7\u009e\2\2\u09f5"+
		"\u09f7\5\20\t\2\u09f6\u09f1\3\2\2\2\u09f6\u09f2\3\2\2\2\u09f6\u09f3\3"+
		"\2\2\2\u09f6\u09f4\3\2\2\2\u09f6\u09f5\3\2\2\2\u09f7\u01a5\3\2\2\2\u0142"+
		"\u01a7\u01bb\u01c5\u01d8\u01e7\u01f1\u01f5\u0200\u0204\u0213\u021a\u021f"+
		"\u0221\u0226\u022c\u0236\u023d\u0243\u0247\u024c\u0252\u0259\u025f\u0262"+
		"\u0265\u0268\u026f\u0276\u02aa\u02b9\u02bf\u02c5\u02d2\u02d4\u02de\u02ed"+
		"\u02f3\u0311\u0316\u031a\u031e\u0321\u0325\u032b\u032d\u0335\u0339\u033c"+
		"\u0343\u034a\u034e\u0353\u0357\u035a\u035f\u0365\u0372\u037d\u037f\u038e"+
		"\u0390\u039c\u039e\u03aa\u03be\u03c0\u03cc\u03ce\u03d9\u03e4\u03ef\u03fb"+
		"\u03fd\u0409\u040b\u0415\u041e\u042a\u0431\u0435\u0439\u043d\u0441\u0448"+
		"\u044b\u044e\u0454\u045c\u0461\u0464\u046a\u0475\u048c\u0490\u0498\u049e"+
		"\u04b2\u04b6\u04c3\u04c7\u04ca\u04d1\u04d9\u04e3\u04ee\u04fa\u0504\u0509"+
		"\u0510\u0513\u0518\u051d\u0525\u0535\u0539\u053e\u0549\u054f\u0553\u0558"+
		"\u055c\u0561\u0564\u057a\u0580\u058b\u058f\u0592\u059c\u05a2\u05a5\u05ac"+
		"\u05b6\u05ba\u05bd\u05c0\u05c4\u05c9\u05cb\u05cf\u05d3\u05dc\u05e9\u05f1"+
		"\u05f7\u05fd\u0602\u060b\u0613\u061e\u0624\u062f\u0632\u0637\u0646\u064c"+
		"\u0655\u065f\u0665\u066d\u0671\u0675\u067a\u067f\u0686\u0688\u068d\u0691"+
		"\u069f\u06a5\u06b4\u06be\u06c3\u06cb\u06d3\u06d9\u06e0\u06e4\u06e6\u06e8"+
		"\u06ef\u06f2\u06f5\u06f8\u06fd\u0701\u0704\u0708\u070c\u0711\u0714\u0716"+
		"\u071a\u0721\u0727\u072b\u0731\u0736\u0738\u073e\u0742\u0748\u074f\u0753"+
		"\u0755\u0757\u075e\u0768\u076c\u076e\u0770\u0774\u0777\u077d\u0787\u078b"+
		"\u0791\u0799\u079d\u07a0\u07a4\u07a9\u07ac\u07af\u07b3\u07b8\u07c2\u07c9"+
		"\u07ce\u07d2\u07d7\u07dd\u07e1\u07e7\u07ed\u07f1\u07f6\u07fc\u0800\u0803"+
		"\u0807\u080a\u080c\u080f\u0819\u081e\u0820\u0823\u0826\u0829\u0832\u083c"+
		"\u0841\u0844\u0848\u084b\u084e\u0852\u085b\u086a\u0870\u0874\u0878\u087c"+
		"\u0880\u0884\u0888\u088c\u088f\u0893\u089e\u08a2\u08a9\u08ad\u08b2\u08b7"+
		"\u08be\u08c2\u08ca\u08d0\u08d2\u08e2\u08e7\u08eb\u08ee\u08f2\u08f8\u08fb"+
		"\u08ff\u0909\u090c\u0914\u0919\u091e\u0926\u092d\u0931\u0938\u093e\u0942"+
		"\u0948\u0951\u0955\u0958\u0968\u096f\u0978\u097e\u0982\u0985\u0989\u098d"+
		"\u0992\u0999\u099f\u09a3\u09ac\u09e1\u09eb\u09f6";
	public static final String _serializedATN = Utils.join(
		new String[] {
			_serializedATNSegment0,
			_serializedATNSegment1
		},
		""
	);
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}