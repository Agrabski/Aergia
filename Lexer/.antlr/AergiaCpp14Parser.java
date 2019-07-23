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
		RULE_extensionnamespacedefinition = 107, RULE_unnamednamespacedefinition = 108, 
		RULE_namespacebody = 109, RULE_namespacealias = 110, RULE_namespacealiasdefinition = 111, 
		RULE_qualifiednamespacespecifier = 112, RULE_usingdeclaration = 113, RULE_usingdirective = 114, 
		RULE_asmdefinition = 115, RULE_linkagespecification = 116, RULE_attributespecifierseq = 117, 
		RULE_attributespecifier = 118, RULE_alignmentspecifier = 119, RULE_attributelist = 120, 
		RULE_attribute = 121, RULE_attributetoken = 122, RULE_attributescopedtoken = 123, 
		RULE_attributenamespace = 124, RULE_attributeargumentclause = 125, RULE_balancedtokenseq = 126, 
		RULE_balancedtoken = 127, RULE_initdeclaratorlist = 128, RULE_initdeclarator = 129, 
		RULE_declarator = 130, RULE_ptrdeclarator = 131, RULE_noptrdeclarator = 132, 
		RULE_parametersandqualifiers = 133, RULE_trailingreturntype = 134, RULE_ptroperator = 135, 
		RULE_cvqualifierseq = 136, RULE_cvqualifier = 137, RULE_refqualifier = 138, 
		RULE_declaratorid = 139, RULE_thetypeid = 140, RULE_abstractdeclarator = 141, 
		RULE_ptrabstractdeclarator = 142, RULE_noptrabstractdeclarator = 143, 
		RULE_abstractpackdeclarator = 144, RULE_noptrabstractpackdeclarator = 145, 
		RULE_parameterdeclarationclause = 146, RULE_parameterdeclarationlist = 147, 
		RULE_parameterdeclaration = 148, RULE_functiondefinition = 149, RULE_functionbody = 150, 
		RULE_initializer = 151, RULE_braceorequalinitializer = 152, RULE_initializerclause = 153, 
		RULE_initializerlist = 154, RULE_bracedinitlist = 155, RULE_classname = 156, 
		RULE_classspecifier = 157, RULE_classhead = 158, RULE_classheadname = 159, 
		RULE_classvirtspecifier = 160, RULE_classkey = 161, RULE_memberspecification = 162, 
		RULE_memberdeclaration = 163, RULE_memberdeclaratorlist = 164, RULE_memberdeclarator = 165, 
		RULE_virtspecifierseq = 166, RULE_virtspecifier = 167, RULE_purespecifier = 168, 
		RULE_baseclause = 169, RULE_basespecifierlist = 170, RULE_basespecifier = 171, 
		RULE_classordecltype = 172, RULE_basetypespecifier = 173, RULE_accessspecifier = 174, 
		RULE_conversionfunctionid = 175, RULE_conversiontypeid = 176, RULE_conversiondeclarator = 177, 
		RULE_ctorinitializer = 178, RULE_meminitializerlist = 179, RULE_meminitializer = 180, 
		RULE_meminitializerid = 181, RULE_operatorfunctionid = 182, RULE_literaloperatorid = 183, 
		RULE_templatedeclaration = 184, RULE_templateparameterlist = 185, RULE_templateparameter = 186, 
		RULE_typeparameter = 187, RULE_simpletemplateid = 188, RULE_templateid = 189, 
		RULE_templatename = 190, RULE_templateargumentlist = 191, RULE_templateargument = 192, 
		RULE_typenamespecifier = 193, RULE_explicitinstantiation = 194, RULE_explicitspecialization = 195, 
		RULE_tryblock = 196, RULE_functiontryblock = 197, RULE_handlerseq = 198, 
		RULE_handler = 199, RULE_exceptiondeclaration = 200, RULE_throwexpression = 201, 
		RULE_exceptionspecification = 202, RULE_dynamicexceptionspecification = 203, 
		RULE_typeidlist = 204, RULE_noexceptspecification = 205, RULE_theoperator = 206, 
		RULE_literal = 207, RULE_booleanliteral = 208, RULE_pointerliteral = 209, 
		RULE_userdefinedliteral = 210;
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
		"originalnamespacedefinition", "extensionnamespacedefinition", "unnamednamespacedefinition", 
		"namespacebody", "namespacealias", "namespacealiasdefinition", "qualifiednamespacespecifier", 
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
			setState(423);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Register - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Static - 66)) | (1L << (Static_assert - 66)) | (1L << (Struct - 66)) | (1L << (Template - 66)) | (1L << (Thread_local - 66)) | (1L << (Typedef - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Using - 66)) | (1L << (Virtual - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Semi - 138)) | (1L << (Ellipsis - 138)) | (1L << (Identifier - 138)))) != 0)) {
				{
				setState(422);
				declarationseq(0);
				}
			}

			setState(425);
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
			setState(427);
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
			setState(429);
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
			setState(431);
			match(T__2);
			setState(432);
			statementseq(0);
			setState(433);
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
		public ForeachContext foreach() {
			return getRuleContext(ForeachContext.class,0);
		}
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
			setState(444);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(435);
				foreach();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(436);
				aergiaexpressionbegin();
				setState(437);
				callchain();
				setState(438);
				aergiaexpressionend();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(440);
				aergiaexpressionbegin();
				setState(441);
				anonymousExpression();
				setState(442);
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
			setState(446);
			match(T__4);
			setState(447);
			match(LeftParen);
			setState(448);
			anoynmousBody();
			setState(449);
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
			setState(451);
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
			setState(454);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Encodingprefix) {
				{
				setState(453);
				match(Encodingprefix);
				}
			}

			setState(456);
			match(T__5);
			setState(457);
			callchain();
			setState(458);
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
			setState(460);
			match(T__6);
			setState(461);
			foreachheader();
			setState(462);
			match(RightParen);
			setState(463);
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
			setState(465);
			aergiaexpressionbegin();
			setState(466);
			match(Identifier);
			setState(467);
			match(T__7);
			setState(468);
			aergiaexpressionbegin();
			setState(469);
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
			setState(473);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
			case T__6:
				enterOuterAlt(_localctx, 1);
				{
				setState(471);
				aergiaexpression();
				}
				break;
			case T__2:
				enterOuterAlt(_localctx, 2);
				{
				setState(472);
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
			setState(488);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(475);
				match(Identifier);
				setState(476);
				match(Dot);
				setState(477);
				callchain();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(478);
				match(Identifier);
				setState(479);
				match(LeftParen);
				setState(480);
				match(Identifier);
				setState(481);
				match(T__8);
				setState(482);
				callchain();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(483);
				match(Identifier);
				setState(484);
				match(LeftParen);
				setState(485);
				match(Identifier);
				setState(486);
				match(RightParen);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(487);
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
			setState(498);
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
				setState(490);
				literal();
				}
				break;
			case This:
				enterOuterAlt(_localctx, 2);
				{
				setState(491);
				match(This);
				}
				break;
			case LeftParen:
				enterOuterAlt(_localctx, 3);
				{
				setState(492);
				match(LeftParen);
				setState(493);
				expression(0);
				setState(494);
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
				setState(496);
				idexpression();
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 5);
				{
				setState(497);
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
			setState(502);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(500);
				unqualifiedid();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(501);
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
			setState(513);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(504);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(505);
				operatorfunctionid();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(506);
				conversionfunctionid();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(507);
				literaloperatorid();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(508);
				match(Tilde);
				setState(509);
				classname();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(510);
				match(Tilde);
				setState(511);
				decltypespecifier();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(512);
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
			setState(515);
			nestednamespecifier(0);
			setState(517);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Template) {
				{
				setState(516);
				match(Template);
				}
			}

			setState(519);
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
			setState(532);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				setState(522);
				match(Doublecolon);
				}
				break;
			case 2:
				{
				setState(523);
				thetypename();
				setState(524);
				match(Doublecolon);
				}
				break;
			case 3:
				{
				setState(526);
				namespacename();
				setState(527);
				match(Doublecolon);
				}
				break;
			case 4:
				{
				setState(529);
				decltypespecifier();
				setState(530);
				match(Doublecolon);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(546);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(544);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
					case 1:
						{
						_localctx = new NestednamespecifierContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_nestednamespecifier);
						setState(534);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(535);
						match(Identifier);
						setState(536);
						match(Doublecolon);
						}
						break;
					case 2:
						{
						_localctx = new NestednamespecifierContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_nestednamespecifier);
						setState(537);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(539);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(538);
							match(Template);
							}
						}

						setState(541);
						simpletemplateid();
						setState(542);
						match(Doublecolon);
						}
						break;
					}
					} 
				}
				setState(548);
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
			setState(549);
			lambdaintroducer();
			setState(551);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LeftParen) {
				{
				setState(550);
				lambdadeclarator();
				}
			}

			setState(553);
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
			setState(555);
			match(LeftBracket);
			setState(557);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (This - 78)) | (1L << (And - 78)) | (1L << (Assign - 78)))) != 0) || _la==Identifier) {
				{
				setState(556);
				lambdacapture();
				}
			}

			setState(559);
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
			setState(567);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(561);
				capturedefault();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(562);
				capturelist(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(563);
				capturedefault();
				setState(564);
				match(Comma);
				setState(565);
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
			setState(569);
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
			setState(572);
			capture();
			setState(574);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(573);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(584);
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
					setState(576);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(577);
					match(Comma);
					setState(578);
					capture();
					setState(580);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
					case 1:
						{
						setState(579);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(586);
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
			setState(589);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(587);
				simplecapture();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(588);
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
			setState(595);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(591);
				match(Identifier);
				}
				break;
			case And:
				enterOuterAlt(_localctx, 2);
				{
				setState(592);
				match(And);
				setState(593);
				match(Identifier);
				}
				break;
			case This:
				enterOuterAlt(_localctx, 3);
				{
				setState(594);
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
			setState(602);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(597);
				match(Identifier);
				setState(598);
				initializer();
				}
				break;
			case And:
				enterOuterAlt(_localctx, 2);
				{
				setState(599);
				match(And);
				setState(600);
				match(Identifier);
				setState(601);
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
			setState(604);
			match(LeftParen);
			setState(605);
			parameterdeclarationclause();
			setState(606);
			match(RightParen);
			setState(608);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Mutable) {
				{
				setState(607);
				match(Mutable);
				}
			}

			setState(611);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Noexcept || _la==Throw) {
				{
				setState(610);
				exceptionspecification();
				}
			}

			setState(614);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(613);
				attributespecifierseq(0);
				}
			}

			setState(617);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(616);
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
			setState(683);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				{
				setState(620);
				primaryexpression();
				}
				break;
			case 2:
				{
				setState(621);
				simpletypespecifier();
				setState(622);
				match(LeftParen);
				setState(624);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftBrace - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(623);
					expressionlist();
					}
				}

				setState(626);
				match(RightParen);
				}
				break;
			case 3:
				{
				setState(628);
				typenamespecifier();
				setState(629);
				match(LeftParen);
				setState(631);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftBrace - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(630);
					expressionlist();
					}
				}

				setState(633);
				match(RightParen);
				}
				break;
			case 4:
				{
				setState(635);
				simpletypespecifier();
				setState(636);
				bracedinitlist();
				}
				break;
			case 5:
				{
				setState(638);
				typenamespecifier();
				setState(639);
				bracedinitlist();
				}
				break;
			case 6:
				{
				setState(641);
				match(Dynamic_cast);
				setState(642);
				match(Less);
				setState(643);
				thetypeid();
				setState(644);
				match(Greater);
				setState(645);
				match(LeftParen);
				setState(646);
				expression(0);
				setState(647);
				match(RightParen);
				}
				break;
			case 7:
				{
				setState(649);
				match(Static_cast);
				setState(650);
				match(Less);
				setState(651);
				thetypeid();
				setState(652);
				match(Greater);
				setState(653);
				match(LeftParen);
				setState(654);
				expression(0);
				setState(655);
				match(RightParen);
				}
				break;
			case 8:
				{
				setState(657);
				match(Reinterpret_cast);
				setState(658);
				match(Less);
				setState(659);
				thetypeid();
				setState(660);
				match(Greater);
				setState(661);
				match(LeftParen);
				setState(662);
				expression(0);
				setState(663);
				match(RightParen);
				}
				break;
			case 9:
				{
				setState(665);
				match(Const_cast);
				setState(666);
				match(Less);
				setState(667);
				thetypeid();
				setState(668);
				match(Greater);
				setState(669);
				match(LeftParen);
				setState(670);
				expression(0);
				setState(671);
				match(RightParen);
				}
				break;
			case 10:
				{
				setState(673);
				typeidofthetypeid();
				setState(674);
				match(LeftParen);
				setState(675);
				expression(0);
				setState(676);
				match(RightParen);
				}
				break;
			case 11:
				{
				setState(678);
				typeidofthetypeid();
				setState(679);
				match(LeftParen);
				setState(680);
				thetypeid();
				setState(681);
				match(RightParen);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(725);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(723);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
					case 1:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(685);
						if (!(precpred(_ctx, 19))) throw new FailedPredicateException(this, "precpred(_ctx, 19)");
						setState(686);
						match(LeftBracket);
						setState(687);
						expression(0);
						setState(688);
						match(RightBracket);
						}
						break;
					case 2:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(690);
						if (!(precpred(_ctx, 18))) throw new FailedPredicateException(this, "precpred(_ctx, 18)");
						setState(691);
						match(LeftBracket);
						setState(692);
						bracedinitlist();
						setState(693);
						match(RightBracket);
						}
						break;
					case 3:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(695);
						if (!(precpred(_ctx, 17))) throw new FailedPredicateException(this, "precpred(_ctx, 17)");
						setState(696);
						match(LeftParen);
						setState(698);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftBrace - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
							{
							setState(697);
							expressionlist();
							}
						}

						setState(700);
						match(RightParen);
						}
						break;
					case 4:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(701);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(702);
						match(Dot);
						setState(704);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(703);
							match(Template);
							}
						}

						setState(706);
						idexpression();
						}
						break;
					case 5:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(707);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(708);
						match(Arrow);
						setState(710);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(709);
							match(Template);
							}
						}

						setState(712);
						idexpression();
						}
						break;
					case 6:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(713);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(714);
						match(Dot);
						setState(715);
						pseudodestructorname();
						}
						break;
					case 7:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(716);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(717);
						match(Arrow);
						setState(718);
						pseudodestructorname();
						}
						break;
					case 8:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(719);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(720);
						match(PlusPlus);
						}
						break;
					case 9:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(721);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(722);
						match(MinusMinus);
						}
						break;
					}
					} 
				}
				setState(727);
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
			setState(728);
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
			setState(730);
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
			setState(732);
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
			setState(756);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(735);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
				case 1:
					{
					setState(734);
					nestednamespecifier(0);
					}
					break;
				}
				setState(737);
				thetypename();
				setState(738);
				match(Doublecolon);
				setState(739);
				match(Tilde);
				setState(740);
				thetypename();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(742);
				nestednamespecifier(0);
				setState(743);
				match(Template);
				setState(744);
				simpletemplateid();
				setState(745);
				match(Doublecolon);
				setState(746);
				match(Tilde);
				setState(747);
				thetypename();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(750);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Decltype || _la==Doublecolon || _la==Identifier) {
					{
					setState(749);
					nestednamespecifier(0);
					}
				}

				setState(752);
				match(Tilde);
				setState(753);
				thetypename();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(754);
				match(Tilde);
				setState(755);
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
			setState(786);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(758);
				postfixexpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(759);
				match(PlusPlus);
				setState(760);
				castexpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(761);
				match(MinusMinus);
				setState(762);
				castexpression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(763);
				unaryoperator();
				setState(764);
				castexpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(766);
				match(Sizeof);
				setState(767);
				unaryexpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(768);
				match(Sizeof);
				setState(769);
				match(LeftParen);
				setState(770);
				thetypeid();
				setState(771);
				match(RightParen);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(773);
				match(Sizeof);
				setState(774);
				match(Ellipsis);
				setState(775);
				match(LeftParen);
				setState(776);
				match(Identifier);
				setState(777);
				match(RightParen);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(778);
				match(Alignof);
				setState(779);
				match(LeftParen);
				setState(780);
				thetypeid();
				setState(781);
				match(RightParen);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(783);
				noexceptexpression();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(784);
				newexpression();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(785);
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
			setState(788);
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
			setState(814);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(791);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(790);
					match(Doublecolon);
					}
				}

				setState(793);
				match(New);
				setState(795);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LeftParen) {
					{
					setState(794);
					newplacement();
					}
				}

				setState(797);
				newtypeid();
				setState(799);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
				case 1:
					{
					setState(798);
					newinitializer();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(802);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(801);
					match(Doublecolon);
					}
				}

				setState(804);
				match(New);
				setState(806);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
				case 1:
					{
					setState(805);
					newplacement();
					}
					break;
				}
				setState(808);
				match(LeftParen);
				setState(809);
				thetypeid();
				setState(810);
				match(RightParen);
				setState(812);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
				case 1:
					{
					setState(811);
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
			setState(816);
			match(LeftParen);
			setState(817);
			expressionlist();
			setState(818);
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
			setState(820);
			typespecifierseq();
			setState(822);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
			case 1:
				{
				setState(821);
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
			setState(829);
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
				setState(824);
				ptroperator();
				setState(826);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
				case 1:
					{
					setState(825);
					newdeclarator();
					}
					break;
				}
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(828);
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
			setState(832);
			match(LeftBracket);
			setState(833);
			expression(0);
			setState(834);
			match(RightBracket);
			setState(836);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				{
				setState(835);
				attributespecifierseq(0);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(847);
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
					setState(838);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(839);
					match(LeftBracket);
					setState(840);
					constantexpression();
					setState(841);
					match(RightBracket);
					setState(843);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
					case 1:
						{
						setState(842);
						attributespecifierseq(0);
						}
						break;
					}
					}
					} 
				}
				setState(849);
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
			setState(856);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParen:
				enterOuterAlt(_localctx, 1);
				{
				setState(850);
				match(LeftParen);
				setState(852);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftBrace - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(851);
					expressionlist();
					}
				}

				setState(854);
				match(RightParen);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(855);
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
			setState(870);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(859);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(858);
					match(Doublecolon);
					}
				}

				setState(861);
				match(Delete);
				setState(862);
				castexpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(864);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(863);
					match(Doublecolon);
					}
				}

				setState(866);
				match(Delete);
				setState(867);
				match(LeftBracket);
				setState(868);
				match(RightBracket);
				setState(869);
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
			setState(872);
			match(Noexcept);
			setState(873);
			match(LeftParen);
			setState(874);
			expression(0);
			setState(875);
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
			setState(883);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(877);
				unaryexpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(878);
				match(LeftParen);
				setState(879);
				thetypeid();
				setState(880);
				match(RightParen);
				setState(881);
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
			setState(886);
			primaryexpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(896);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(894);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
					case 1:
						{
						_localctx = new PmexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pmexpression);
						setState(888);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(889);
						match(DotStar);
						setState(890);
						castexpression();
						}
						break;
					case 2:
						{
						_localctx = new PmexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pmexpression);
						setState(891);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(892);
						match(ArrowStar);
						setState(893);
						castexpression();
						}
						break;
					}
					} 
				}
				setState(898);
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
			setState(900);
			pmexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(913);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(911);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeexpression);
						setState(902);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(903);
						match(Star);
						setState(904);
						pmexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicativeexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeexpression);
						setState(905);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(906);
						match(Div);
						setState(907);
						pmexpression(0);
						}
						break;
					case 3:
						{
						_localctx = new MultiplicativeexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeexpression);
						setState(908);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(909);
						match(Mod);
						setState(910);
						pmexpression(0);
						}
						break;
					}
					} 
				}
				setState(915);
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
			setState(917);
			multiplicativeexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(927);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(925);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,61,_ctx) ) {
					case 1:
						{
						_localctx = new AdditiveexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveexpression);
						setState(919);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(920);
						match(Plus);
						setState(921);
						multiplicativeexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveexpression);
						setState(922);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(923);
						match(Minus);
						setState(924);
						multiplicativeexpression(0);
						}
						break;
					}
					} 
				}
				setState(929);
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
			setState(931);
			additiveexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(939);
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
					setState(933);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(934);
					shiftoperator();
					setState(935);
					additiveexpression(0);
					}
					} 
				}
				setState(941);
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
			setState(942);
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
			setState(945);
			shiftexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(961);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,65,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(959);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,64,_ctx) ) {
					case 1:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(947);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(948);
						match(Less);
						setState(949);
						shiftexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(950);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(951);
						match(Greater);
						setState(952);
						shiftexpression(0);
						}
						break;
					case 3:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(953);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(954);
						match(LessEqual);
						setState(955);
						shiftexpression(0);
						}
						break;
					case 4:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(956);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(957);
						match(GreaterEqual);
						setState(958);
						shiftexpression(0);
						}
						break;
					}
					} 
				}
				setState(963);
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
			setState(965);
			relationalexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(975);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,67,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(973);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
					case 1:
						{
						_localctx = new EqualityexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityexpression);
						setState(967);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(968);
						match(Equal);
						setState(969);
						relationalexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new EqualityexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityexpression);
						setState(970);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(971);
						match(NotEqual);
						setState(972);
						relationalexpression(0);
						}
						break;
					}
					} 
				}
				setState(977);
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
			setState(979);
			equalityexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(986);
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
					setState(981);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(982);
					match(And);
					setState(983);
					equalityexpression(0);
					}
					} 
				}
				setState(988);
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
			setState(990);
			andexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(997);
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
					setState(992);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(993);
					match(Caret);
					setState(994);
					andexpression(0);
					}
					} 
				}
				setState(999);
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
			setState(1001);
			exclusiveorexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1008);
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
					setState(1003);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1004);
					match(Or);
					setState(1005);
					exclusiveorexpression(0);
					}
					} 
				}
				setState(1010);
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
			setState(1012);
			inclusiveorexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1022);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,72,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1020);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,71,_ctx) ) {
					case 1:
						{
						_localctx = new LogicalandexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalandexpression);
						setState(1014);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1015);
						match(T__11);
						setState(1016);
						inclusiveorexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new LogicalandexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalandexpression);
						setState(1017);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1018);
						match(T__12);
						setState(1019);
						inclusiveorexpression(0);
						}
						break;
					}
					} 
				}
				setState(1024);
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
			setState(1026);
			logicalandexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1036);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,74,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1034);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
					case 1:
						{
						_localctx = new LogicalorexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalorexpression);
						setState(1028);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1029);
						match(T__13);
						setState(1030);
						logicalandexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new LogicalorexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalorexpression);
						setState(1031);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1032);
						match(T__14);
						setState(1033);
						logicalandexpression(0);
						}
						break;
					}
					} 
				}
				setState(1038);
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
			setState(1046);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,75,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1039);
				logicalorexpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1040);
				logicalorexpression(0);
				setState(1041);
				match(Question);
				setState(1042);
				expression(0);
				setState(1043);
				match(Colon);
				setState(1044);
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
			setState(1055);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1048);
				pmexpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1049);
				castexpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1050);
				logicalorexpression(0);
				setState(1051);
				assignmentoperator();
				setState(1052);
				pmexpression(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1054);
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
			setState(1057);
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
			setState(1060);
			assignmentexpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(1067);
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
					setState(1062);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1063);
					match(Comma);
					setState(1064);
					assignmentexpression();
					}
					} 
				}
				setState(1069);
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
			setState(1070);
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
			setState(1099);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1072);
				labeledstatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1074);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
				case 1:
					{
					setState(1073);
					attributespecifierseq(0);
					}
					break;
				}
				setState(1076);
				expressionstatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1078);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1077);
					attributespecifierseq(0);
					}
				}

				setState(1080);
				compoundstatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1082);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1081);
					attributespecifierseq(0);
					}
				}

				setState(1084);
				selectionstatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1086);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1085);
					attributespecifierseq(0);
					}
				}

				setState(1088);
				iterationstatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1090);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1089);
					attributespecifierseq(0);
					}
				}

				setState(1092);
				jumpstatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1093);
				declarationstatement();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1094);
				aergiaexpression();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1096);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1095);
					attributespecifierseq(0);
					}
				}

				setState(1098);
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
			setState(1121);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,88,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1102);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1101);
					attributespecifierseq(0);
					}
				}

				setState(1104);
				match(Identifier);
				setState(1105);
				match(Colon);
				setState(1106);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1108);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1107);
					attributespecifierseq(0);
					}
				}

				setState(1110);
				match(Case);
				setState(1111);
				constantexpression();
				setState(1112);
				match(Colon);
				setState(1113);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1116);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1115);
					attributespecifierseq(0);
					}
				}

				setState(1118);
				match(Default);
				setState(1119);
				match(Colon);
				setState(1120);
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
			setState(1124);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
				{
				setState(1123);
				expression(0);
				}
			}

			setState(1126);
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
			setState(1128);
			match(LeftBrace);
			setState(1130);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__5) | (1L << T__6) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << Encodingprefix) | (1L << Alignas) | (1L << Alignof) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Const_cast) | (1L << Continue) | (1L << Decltype) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << Dynamic_cast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << Goto) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Register - 66)) | (1L << (Reinterpret_cast - 66)) | (1L << (Return - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static - 66)) | (1L << (Static_assert - 66)) | (1L << (Static_cast - 66)) | (1L << (Struct - 66)) | (1L << (Switch - 66)) | (1L << (This - 66)) | (1L << (Thread_local - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Try - 66)) | (1L << (Typedef - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Using - 66)) | (1L << (Virtual - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (While - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (LeftBrace - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Semi - 131)) | (1L << (Ellipsis - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
				{
				setState(1129);
				statementseq(0);
				}
			}

			setState(1132);
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
			setState(1135);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(1141);
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
					setState(1137);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1138);
					statement();
					}
					} 
				}
				setState(1143);
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
			setState(1164);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1144);
				match(If);
				setState(1145);
				match(LeftParen);
				setState(1146);
				condition();
				setState(1147);
				match(RightParen);
				setState(1148);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1150);
				match(If);
				setState(1151);
				match(LeftParen);
				setState(1152);
				condition();
				setState(1153);
				match(RightParen);
				setState(1154);
				statement();
				setState(1155);
				match(Else);
				setState(1156);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1158);
				match(Switch);
				setState(1159);
				match(LeftParen);
				setState(1160);
				condition();
				setState(1161);
				match(RightParen);
				setState(1162);
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
			setState(1182);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,95,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1166);
				expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1168);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1167);
					attributespecifierseq(0);
					}
				}

				setState(1170);
				declspecifierseq();
				setState(1171);
				declarator();
				setState(1172);
				match(Assign);
				setState(1173);
				initializerclause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1176);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1175);
					attributespecifierseq(0);
					}
				}

				setState(1178);
				declspecifierseq();
				setState(1179);
				declarator();
				setState(1180);
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
			setState(1219);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,98,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1184);
				match(While);
				setState(1185);
				match(LeftParen);
				setState(1186);
				condition();
				setState(1187);
				match(RightParen);
				setState(1188);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1190);
				match(Do);
				setState(1191);
				statement();
				setState(1192);
				match(While);
				setState(1193);
				match(LeftParen);
				setState(1194);
				expression(0);
				setState(1195);
				match(RightParen);
				setState(1196);
				match(Semi);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1198);
				match(For);
				setState(1199);
				match(LeftParen);
				setState(1200);
				forinitstatement();
				setState(1202);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignas) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Register - 66)) | (1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static - 66)) | (1L << (Static_cast - 66)) | (1L << (Struct - 66)) | (1L << (This - 66)) | (1L << (Thread_local - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Typedef - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Virtual - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(1201);
					condition();
					}
				}

				setState(1204);
				match(Semi);
				setState(1206);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(1205);
					expression(0);
					}
				}

				setState(1208);
				match(RightParen);
				setState(1209);
				statement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1211);
				match(For);
				setState(1212);
				match(LeftParen);
				setState(1213);
				forrangedeclaration();
				setState(1214);
				match(Colon);
				setState(1215);
				forrangeinitializer();
				setState(1216);
				match(RightParen);
				setState(1217);
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
			setState(1223);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,99,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1221);
				expressionstatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1222);
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
			setState(1226);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1225);
				attributespecifierseq(0);
				}
			}

			setState(1228);
			declspecifierseq();
			setState(1229);
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
			setState(1233);
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
				setState(1231);
				expression(0);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(1232);
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
			setState(1251);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,103,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1235);
				match(Break);
				setState(1236);
				match(Semi);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1237);
				match(Continue);
				setState(1238);
				match(Semi);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1239);
				match(Return);
				setState(1241);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(1240);
					expression(0);
					}
				}

				setState(1243);
				match(Semi);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1244);
				match(Return);
				setState(1245);
				bracedinitlist();
				setState(1246);
				match(Semi);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1248);
				match(Goto);
				setState(1249);
				match(Identifier);
				setState(1250);
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
			setState(1253);
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
			setState(1256);
			declaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1262);
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
					setState(1258);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1259);
					declaration();
					}
					} 
				}
				setState(1264);
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
			setState(1274);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,105,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1265);
				blockdeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1266);
				functiondefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1267);
				templatedeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1268);
				explicitinstantiation();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1269);
				explicitspecialization();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1270);
				linkagespecification();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1271);
				namespacedefinition();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1272);
				emptydeclaration();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1273);
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
			setState(1284);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,106,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1276);
				simpledeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1277);
				asmdefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1278);
				namespacealiasdefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1279);
				usingdeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1280);
				usingdirective();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1281);
				static_assertdeclaration();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1282);
				aliasdeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1283);
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
			setState(1286);
			match(Using);
			setState(1287);
			match(Identifier);
			setState(1289);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1288);
				attributespecifierseq(0);
				}
			}

			setState(1291);
			match(Assign);
			setState(1292);
			thetypeid();
			setState(1293);
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
			setState(1309);
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
				setState(1296);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,108,_ctx) ) {
				case 1:
					{
					setState(1295);
					declspecifierseq();
					}
					break;
				}
				setState(1299);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Decltype) | (1L << Operator))) != 0) || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (LeftParen - 94)) | (1L << (Star - 94)) | (1L << (And - 94)) | (1L << (Tilde - 94)) | (1L << (Doublecolon - 94)) | (1L << (Ellipsis - 94)) | (1L << (Identifier - 94)))) != 0)) {
					{
					setState(1298);
					initdeclaratorlist(0);
					}
				}

				setState(1301);
				match(Semi);
				}
				break;
			case Alignas:
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1302);
				attributespecifierseq(0);
				setState(1304);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,110,_ctx) ) {
				case 1:
					{
					setState(1303);
					declspecifierseq();
					}
					break;
				}
				setState(1306);
				initdeclaratorlist(0);
				setState(1307);
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
			setState(1311);
			match(Static_assert);
			setState(1312);
			match(LeftParen);
			setState(1313);
			constantexpression();
			setState(1314);
			match(Comma);
			setState(1317);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Stringliteral:
				{
				setState(1315);
				match(Stringliteral);
				}
				break;
			case T__5:
			case Encodingprefix:
				{
				setState(1316);
				aergiastring();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(1319);
			match(RightParen);
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
			setState(1322);
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
			setState(1324);
			attributespecifierseq(0);
			setState(1325);
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
			setState(1333);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Extern:
			case Mutable:
			case Register:
			case Static:
			case Thread_local:
				enterOuterAlt(_localctx, 1);
				{
				setState(1327);
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
				setState(1328);
				typespecifier();
				}
				break;
			case Explicit:
			case Inline:
			case Virtual:
				enterOuterAlt(_localctx, 3);
				{
				setState(1329);
				functionspecifier();
				}
				break;
			case Friend:
				enterOuterAlt(_localctx, 4);
				{
				setState(1330);
				match(Friend);
				}
				break;
			case Typedef:
				enterOuterAlt(_localctx, 5);
				{
				setState(1331);
				match(Typedef);
				}
				break;
			case Constexpr:
				enterOuterAlt(_localctx, 6);
				{
				setState(1332);
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
			setState(1342);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,115,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1335);
				declspecifier();
				setState(1337);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,114,_ctx) ) {
				case 1:
					{
					setState(1336);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1339);
				declspecifier();
				setState(1340);
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
			setState(1344);
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
			setState(1346);
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
			setState(1348);
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
			setState(1353);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,116,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1350);
				trailingtypespecifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1351);
				classspecifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1352);
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
			setState(1359);
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
				setState(1355);
				simpletypespecifier();
				}
				break;
			case Class:
			case Enum:
			case Struct:
			case Union:
				enterOuterAlt(_localctx, 2);
				{
				setState(1356);
				elaboratedtypespecifier();
				}
				break;
			case Typename_:
				enterOuterAlt(_localctx, 3);
				{
				setState(1357);
				typenamespecifier();
				}
				break;
			case Const:
			case Volatile:
				enterOuterAlt(_localctx, 4);
				{
				setState(1358);
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
			setState(1368);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,119,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1361);
				typespecifier();
				setState(1363);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,118,_ctx) ) {
				case 1:
					{
					setState(1362);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1365);
				typespecifier();
				setState(1366);
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
			setState(1377);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,121,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1370);
				trailingtypespecifier();
				setState(1372);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,120,_ctx) ) {
				case 1:
					{
					setState(1371);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1374);
				trailingtypespecifier();
				setState(1375);
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
			setState(1402);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,123,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1380);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,122,_ctx) ) {
				case 1:
					{
					setState(1379);
					nestednamespecifier(0);
					}
					break;
				}
				setState(1382);
				thetypename();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1383);
				nestednamespecifier(0);
				setState(1384);
				match(Template);
				setState(1385);
				simpletemplateid();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1387);
				match(Char);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1388);
				match(Char16);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1389);
				match(Char32);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1390);
				match(Wchar);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1391);
				match(Bool);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1392);
				match(Short);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1393);
				match(Int);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1394);
				match(Long);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1395);
				match(Signed);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(1396);
				match(Unsigned);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(1397);
				match(Float);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(1398);
				match(Double);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(1399);
				match(Void);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(1400);
				match(Auto);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(1401);
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
			setState(1408);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,124,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1404);
				classname();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1405);
				enumname();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1406);
				typedefname();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1407);
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
			setState(1419);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,125,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1410);
				match(Decltype);
				setState(1411);
				match(LeftParen);
				setState(1412);
				expression(0);
				setState(1413);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1415);
				match(Decltype);
				setState(1416);
				match(LeftParen);
				setState(1417);
				match(Auto);
				setState(1418);
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
			setState(1445);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,130,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1421);
				classkey();
				setState(1423);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1422);
					attributespecifierseq(0);
					}
				}

				setState(1426);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,127,_ctx) ) {
				case 1:
					{
					setState(1425);
					nestednamespecifier(0);
					}
					break;
				}
				setState(1428);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1430);
				classkey();
				setState(1431);
				simpletemplateid();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1433);
				classkey();
				setState(1434);
				nestednamespecifier(0);
				setState(1436);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(1435);
					match(Template);
					}
				}

				setState(1438);
				simpletemplateid();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1440);
				match(Enum);
				setState(1442);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,129,_ctx) ) {
				case 1:
					{
					setState(1441);
					nestednamespecifier(0);
					}
					break;
				}
				setState(1444);
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
			setState(1447);
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
			setState(1462);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,132,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1449);
				enumhead();
				setState(1450);
				match(LeftBrace);
				setState(1452);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1451);
					enumeratorlist(0);
					}
				}

				setState(1454);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1456);
				enumhead();
				setState(1457);
				match(LeftBrace);
				setState(1458);
				enumeratorlist(0);
				setState(1459);
				match(Comma);
				setState(1460);
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
			setState(1483);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,138,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1464);
				enumkey();
				setState(1466);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1465);
					attributespecifierseq(0);
					}
				}

				setState(1469);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1468);
					match(Identifier);
					}
				}

				setState(1472);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(1471);
					enumbase();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1474);
				enumkey();
				setState(1476);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1475);
					attributespecifierseq(0);
					}
				}

				setState(1478);
				nestednamespecifier(0);
				setState(1479);
				match(Identifier);
				setState(1481);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(1480);
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
			setState(1485);
			enumkey();
			setState(1487);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1486);
				attributespecifierseq(0);
				}
			}

			setState(1489);
			match(Identifier);
			setState(1491);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1490);
				enumbase();
				}
			}

			setState(1493);
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
			setState(1500);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,141,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1495);
				match(Enum);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1496);
				match(Enum);
				setState(1497);
				match(Class);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1498);
				match(Enum);
				setState(1499);
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
			setState(1502);
			match(Colon);
			setState(1503);
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
			setState(1506);
			enumeratordefinition();
			}
			_ctx.stop = _input.LT(-1);
			setState(1513);
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
					setState(1508);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1509);
					match(Comma);
					setState(1510);
					enumeratordefinition();
					}
					} 
				}
				setState(1515);
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
			setState(1521);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,143,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1516);
				enumerator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1517);
				enumerator();
				setState(1518);
				match(Assign);
				setState(1519);
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
			setState(1523);
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
			setState(1527);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,144,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1525);
				originalnamespacename();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1526);
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
			setState(1529);
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
			setState(1533);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,145,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1531);
				namednamespacedefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1532);
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
		public ExtensionnamespacedefinitionContext extensionnamespacedefinition() {
			return getRuleContext(ExtensionnamespacedefinitionContext.class,0);
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
			setState(1537);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,146,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1535);
				originalnamespacedefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1536);
				extensionnamespacedefinition();
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
			setState(1540);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1539);
				match(Inline);
				}
			}

			setState(1542);
			match(Namespace);
			setState(1543);
			match(Identifier);
			setState(1544);
			match(LeftBrace);
			setState(1545);
			namespacebody();
			setState(1546);
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

	public static class ExtensionnamespacedefinitionContext extends ParserRuleContext {
		public TerminalNode Namespace() { return getToken(AergiaCpp14Parser.Namespace, 0); }
		public OriginalnamespacenameContext originalnamespacename() {
			return getRuleContext(OriginalnamespacenameContext.class,0);
		}
		public NamespacebodyContext namespacebody() {
			return getRuleContext(NamespacebodyContext.class,0);
		}
		public TerminalNode Inline() { return getToken(AergiaCpp14Parser.Inline, 0); }
		public ExtensionnamespacedefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionnamespacedefinition; }
	}

	public final ExtensionnamespacedefinitionContext extensionnamespacedefinition() throws RecognitionException {
		ExtensionnamespacedefinitionContext _localctx = new ExtensionnamespacedefinitionContext(_ctx, getState());
		enterRule(_localctx, 214, RULE_extensionnamespacedefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1549);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1548);
				match(Inline);
				}
			}

			setState(1551);
			match(Namespace);
			setState(1552);
			originalnamespacename();
			setState(1553);
			match(LeftBrace);
			setState(1554);
			namespacebody();
			setState(1555);
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
		enterRule(_localctx, 216, RULE_unnamednamespacedefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1558);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1557);
				match(Inline);
				}
			}

			setState(1560);
			match(Namespace);
			setState(1561);
			match(LeftBrace);
			setState(1562);
			namespacebody();
			setState(1563);
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
		enterRule(_localctx, 218, RULE_namespacebody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1566);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Register - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Static - 66)) | (1L << (Static_assert - 66)) | (1L << (Struct - 66)) | (1L << (Template - 66)) | (1L << (Thread_local - 66)) | (1L << (Typedef - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Using - 66)) | (1L << (Virtual - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Semi - 138)) | (1L << (Ellipsis - 138)) | (1L << (Identifier - 138)))) != 0)) {
				{
				setState(1565);
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
		enterRule(_localctx, 220, RULE_namespacealias);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1568);
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
		enterRule(_localctx, 222, RULE_namespacealiasdefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1570);
			match(Namespace);
			setState(1571);
			match(Identifier);
			setState(1572);
			match(Assign);
			setState(1573);
			qualifiednamespacespecifier();
			setState(1574);
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
		enterRule(_localctx, 224, RULE_qualifiednamespacespecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1577);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,151,_ctx) ) {
			case 1:
				{
				setState(1576);
				nestednamespecifier(0);
				}
				break;
			}
			setState(1579);
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
		enterRule(_localctx, 226, RULE_usingdeclaration);
		int _la;
		try {
			setState(1594);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,153,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1581);
				match(Using);
				setState(1583);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Typename_) {
					{
					setState(1582);
					match(Typename_);
					}
				}

				setState(1585);
				nestednamespecifier(0);
				setState(1586);
				unqualifiedid();
				setState(1587);
				match(Semi);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1589);
				match(Using);
				setState(1590);
				match(Doublecolon);
				setState(1591);
				unqualifiedid();
				setState(1592);
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
		enterRule(_localctx, 228, RULE_usingdirective);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1597);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1596);
				attributespecifierseq(0);
				}
			}

			setState(1599);
			match(Using);
			setState(1600);
			match(Namespace);
			setState(1602);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,155,_ctx) ) {
			case 1:
				{
				setState(1601);
				nestednamespecifier(0);
				}
				break;
			}
			setState(1604);
			namespacename();
			setState(1605);
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
		enterRule(_localctx, 230, RULE_asmdefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1607);
			match(Asm);
			setState(1608);
			match(LeftParen);
			setState(1609);
			match(Stringliteral);
			setState(1610);
			match(RightParen);
			setState(1611);
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
		enterRule(_localctx, 232, RULE_linkagespecification);
		int _la;
		try {
			setState(1623);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,157,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1613);
				match(Extern);
				setState(1614);
				match(Stringliteral);
				setState(1615);
				match(LeftBrace);
				setState(1617);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Register - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Static - 66)) | (1L << (Static_assert - 66)) | (1L << (Struct - 66)) | (1L << (Template - 66)) | (1L << (Thread_local - 66)) | (1L << (Typedef - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Using - 66)) | (1L << (Virtual - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Semi - 138)) | (1L << (Ellipsis - 138)) | (1L << (Identifier - 138)))) != 0)) {
					{
					setState(1616);
					declarationseq(0);
					}
				}

				setState(1619);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1620);
				match(Extern);
				setState(1621);
				match(Stringliteral);
				setState(1622);
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
		int _startState = 234;
		enterRecursionRule(_localctx, 234, RULE_attributespecifierseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1626);
			attributespecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(1632);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,158,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AttributespecifierseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_attributespecifierseq);
					setState(1628);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1629);
					attributespecifier();
					}
					} 
				}
				setState(1634);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,158,_ctx);
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
		enterRule(_localctx, 236, RULE_attributespecifier);
		try {
			setState(1642);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1635);
				match(LeftBracket);
				setState(1636);
				match(LeftBracket);
				setState(1637);
				attributelist(0);
				setState(1638);
				match(RightBracket);
				setState(1639);
				match(RightBracket);
				}
				break;
			case Alignas:
				enterOuterAlt(_localctx, 2);
				{
				setState(1641);
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
		enterRule(_localctx, 238, RULE_alignmentspecifier);
		int _la;
		try {
			setState(1660);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,162,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1644);
				match(Alignas);
				setState(1645);
				match(LeftParen);
				setState(1646);
				thetypeid();
				setState(1648);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1647);
					match(Ellipsis);
					}
				}

				setState(1650);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1652);
				match(Alignas);
				setState(1653);
				match(LeftParen);
				setState(1654);
				constantexpression();
				setState(1656);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1655);
					match(Ellipsis);
					}
				}

				setState(1658);
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
		int _startState = 240;
		enterRecursionRule(_localctx, 240, RULE_attributelist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1669);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,164,_ctx) ) {
			case 1:
				{
				setState(1664);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,163,_ctx) ) {
				case 1:
					{
					setState(1663);
					attribute();
					}
					break;
				}
				}
				break;
			case 2:
				{
				setState(1666);
				attribute();
				setState(1667);
				match(Ellipsis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1683);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,167,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1681);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,166,_ctx) ) {
					case 1:
						{
						_localctx = new AttributelistContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_attributelist);
						setState(1671);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1672);
						match(Comma);
						setState(1674);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,165,_ctx) ) {
						case 1:
							{
							setState(1673);
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
						setState(1676);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1677);
						match(Comma);
						setState(1678);
						attribute();
						setState(1679);
						match(Ellipsis);
						}
						break;
					}
					} 
				}
				setState(1685);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,167,_ctx);
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
		enterRule(_localctx, 242, RULE_attribute);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1686);
			attributetoken();
			setState(1688);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,168,_ctx) ) {
			case 1:
				{
				setState(1687);
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
		enterRule(_localctx, 244, RULE_attributetoken);
		try {
			setState(1692);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,169,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1690);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1691);
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
		enterRule(_localctx, 246, RULE_attributescopedtoken);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1694);
			attributenamespace();
			setState(1695);
			match(Doublecolon);
			setState(1696);
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
		enterRule(_localctx, 248, RULE_attributenamespace);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1698);
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
		enterRule(_localctx, 250, RULE_attributeargumentclause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1700);
			match(LeftParen);
			setState(1701);
			balancedtokenseq(0);
			setState(1702);
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
		int _startState = 252;
		enterRecursionRule(_localctx, 252, RULE_balancedtokenseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1706);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,170,_ctx) ) {
			case 1:
				{
				setState(1705);
				balancedtoken();
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(1712);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,171,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BalancedtokenseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_balancedtokenseq);
					setState(1708);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1709);
					balancedtoken();
					}
					} 
				}
				setState(1714);
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
		enterRule(_localctx, 254, RULE_balancedtoken);
		try {
			setState(1727);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParen:
				enterOuterAlt(_localctx, 1);
				{
				setState(1715);
				match(LeftParen);
				setState(1716);
				balancedtokenseq(0);
				setState(1717);
				match(RightParen);
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1719);
				match(LeftBracket);
				setState(1720);
				balancedtokenseq(0);
				setState(1721);
				match(RightBracket);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 3);
				{
				setState(1723);
				match(LeftBrace);
				setState(1724);
				balancedtokenseq(0);
				setState(1725);
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
		int _startState = 256;
		enterRecursionRule(_localctx, 256, RULE_initdeclaratorlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1730);
			initdeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(1737);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,173,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitdeclaratorlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initdeclaratorlist);
					setState(1732);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1733);
					match(Comma);
					setState(1734);
					initdeclarator();
					}
					} 
				}
				setState(1739);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,173,_ctx);
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
		enterRule(_localctx, 258, RULE_initdeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1740);
			declarator();
			setState(1742);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,174,_ctx) ) {
			case 1:
				{
				setState(1741);
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
		enterRule(_localctx, 260, RULE_declarator);
		try {
			setState(1750);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,175,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1744);
				ptrdeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1745);
				noptrdeclarator(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1746);
				noptrdeclarator(0);
				setState(1747);
				parametersandqualifiers();
				setState(1748);
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
		enterRule(_localctx, 262, RULE_ptrdeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1752);
			ptroperator();
			setState(1753);
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
		int _startState = 264;
		enterRecursionRule(_localctx, 264, RULE_noptrdeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1764);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Decltype:
			case Operator:
			case Tilde:
			case Doublecolon:
			case Ellipsis:
			case Identifier:
				{
				setState(1756);
				declaratorid();
				setState(1758);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,176,_ctx) ) {
				case 1:
					{
					setState(1757);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case LeftParen:
				{
				setState(1760);
				match(LeftParen);
				setState(1761);
				ptrdeclarator();
				setState(1762);
				match(RightParen);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1779);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,181,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1777);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,180,_ctx) ) {
					case 1:
						{
						_localctx = new NoptrdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrdeclarator);
						setState(1766);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1767);
						parametersandqualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoptrdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrdeclarator);
						setState(1768);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1769);
						match(LeftBracket);
						setState(1771);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Decltype) | (1L << False) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (This - 78)) | (1L << (True - 78)) | (1L << (LeftParen - 78)) | (1L << (LeftBracket - 78)) | (1L << (Tilde - 78)) | (1L << (Doublecolon - 78)))) != 0) || ((((_la - 143)) & ~0x3f) == 0 && ((1L << (_la - 143)) & ((1L << (Identifier - 143)) | (1L << (Integerliteral - 143)) | (1L << (Characterliteral - 143)) | (1L << (Floatingliteral - 143)) | (1L << (Stringliteral - 143)) | (1L << (Userdefinedintegerliteral - 143)) | (1L << (Userdefinedfloatingliteral - 143)) | (1L << (Userdefinedstringliteral - 143)) | (1L << (Userdefinedcharacterliteral - 143)))) != 0)) {
							{
							setState(1770);
							constantexpression();
							}
						}

						setState(1773);
						match(RightBracket);
						setState(1775);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,179,_ctx) ) {
						case 1:
							{
							setState(1774);
							attributespecifierseq(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1781);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,181,_ctx);
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
		enterRule(_localctx, 266, RULE_parametersandqualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1782);
			match(LeftParen);
			setState(1783);
			parameterdeclarationclause();
			setState(1784);
			match(RightParen);
			setState(1786);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,182,_ctx) ) {
			case 1:
				{
				setState(1785);
				cvqualifierseq();
				}
				break;
			}
			setState(1789);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,183,_ctx) ) {
			case 1:
				{
				setState(1788);
				refqualifier();
				}
				break;
			}
			setState(1792);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,184,_ctx) ) {
			case 1:
				{
				setState(1791);
				exceptionspecification();
				}
				break;
			}
			setState(1795);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,185,_ctx) ) {
			case 1:
				{
				setState(1794);
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
		enterRule(_localctx, 268, RULE_trailingreturntype);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1797);
			match(Arrow);
			setState(1798);
			trailingtypespecifierseq();
			setState(1800);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,186,_ctx) ) {
			case 1:
				{
				setState(1799);
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
		enterRule(_localctx, 270, RULE_ptroperator);
		try {
			setState(1825);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Star:
				enterOuterAlt(_localctx, 1);
				{
				setState(1802);
				match(Star);
				setState(1804);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,187,_ctx) ) {
				case 1:
					{
					setState(1803);
					attributespecifierseq(0);
					}
					break;
				}
				setState(1807);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,188,_ctx) ) {
				case 1:
					{
					setState(1806);
					cvqualifierseq();
					}
					break;
				}
				}
				break;
			case And:
				enterOuterAlt(_localctx, 2);
				{
				setState(1809);
				match(And);
				setState(1811);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,189,_ctx) ) {
				case 1:
					{
					setState(1810);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case T__11:
				enterOuterAlt(_localctx, 3);
				{
				setState(1813);
				match(T__11);
				setState(1815);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,190,_ctx) ) {
				case 1:
					{
					setState(1814);
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
				setState(1817);
				nestednamespecifier(0);
				setState(1818);
				match(Star);
				setState(1820);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,191,_ctx) ) {
				case 1:
					{
					setState(1819);
					attributespecifierseq(0);
					}
					break;
				}
				setState(1823);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,192,_ctx) ) {
				case 1:
					{
					setState(1822);
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
		enterRule(_localctx, 272, RULE_cvqualifierseq);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1827);
			cvqualifier();
			setState(1829);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,194,_ctx) ) {
			case 1:
				{
				setState(1828);
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
		enterRule(_localctx, 274, RULE_cvqualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1831);
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
		enterRule(_localctx, 276, RULE_refqualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1833);
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
		enterRule(_localctx, 278, RULE_declaratorid);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1836);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Ellipsis) {
				{
				setState(1835);
				match(Ellipsis);
				}
			}

			setState(1838);
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
		enterRule(_localctx, 280, RULE_thetypeid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1840);
			typespecifierseq();
			setState(1842);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,196,_ctx) ) {
			case 1:
				{
				setState(1841);
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
		enterRule(_localctx, 282, RULE_abstractdeclarator);
		try {
			setState(1852);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,198,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1844);
				ptrabstractdeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1846);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,197,_ctx) ) {
				case 1:
					{
					setState(1845);
					noptrabstractdeclarator(0);
					}
					break;
				}
				setState(1848);
				parametersandqualifiers();
				setState(1849);
				trailingreturntype();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1851);
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
		enterRule(_localctx, 284, RULE_ptrabstractdeclarator);
		try {
			setState(1859);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParen:
			case LeftBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1854);
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
				setState(1855);
				ptroperator();
				setState(1857);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,199,_ctx) ) {
				case 1:
					{
					setState(1856);
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
		int _startState = 286;
		enterRecursionRule(_localctx, 286, RULE_noptrabstractdeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1875);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,203,_ctx) ) {
			case 1:
				{
				setState(1862);
				parametersandqualifiers();
				}
				break;
			case 2:
				{
				setState(1863);
				match(LeftBracket);
				setState(1865);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Decltype) | (1L << False) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (This - 78)) | (1L << (True - 78)) | (1L << (LeftParen - 78)) | (1L << (LeftBracket - 78)) | (1L << (Tilde - 78)) | (1L << (Doublecolon - 78)))) != 0) || ((((_la - 143)) & ~0x3f) == 0 && ((1L << (_la - 143)) & ((1L << (Identifier - 143)) | (1L << (Integerliteral - 143)) | (1L << (Characterliteral - 143)) | (1L << (Floatingliteral - 143)) | (1L << (Stringliteral - 143)) | (1L << (Userdefinedintegerliteral - 143)) | (1L << (Userdefinedfloatingliteral - 143)) | (1L << (Userdefinedstringliteral - 143)) | (1L << (Userdefinedcharacterliteral - 143)))) != 0)) {
					{
					setState(1864);
					constantexpression();
					}
				}

				setState(1867);
				match(RightBracket);
				setState(1869);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,202,_ctx) ) {
				case 1:
					{
					setState(1868);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 3:
				{
				setState(1871);
				match(LeftParen);
				setState(1872);
				ptrabstractdeclarator();
				setState(1873);
				match(RightParen);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1890);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,207,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1888);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,206,_ctx) ) {
					case 1:
						{
						_localctx = new NoptrabstractdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractdeclarator);
						setState(1877);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1878);
						parametersandqualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoptrabstractdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractdeclarator);
						setState(1879);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1880);
						match(LeftBracket);
						setState(1882);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Decltype) | (1L << False) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (This - 78)) | (1L << (True - 78)) | (1L << (LeftParen - 78)) | (1L << (LeftBracket - 78)) | (1L << (Tilde - 78)) | (1L << (Doublecolon - 78)))) != 0) || ((((_la - 143)) & ~0x3f) == 0 && ((1L << (_la - 143)) & ((1L << (Identifier - 143)) | (1L << (Integerliteral - 143)) | (1L << (Characterliteral - 143)) | (1L << (Floatingliteral - 143)) | (1L << (Stringliteral - 143)) | (1L << (Userdefinedintegerliteral - 143)) | (1L << (Userdefinedfloatingliteral - 143)) | (1L << (Userdefinedstringliteral - 143)) | (1L << (Userdefinedcharacterliteral - 143)))) != 0)) {
							{
							setState(1881);
							constantexpression();
							}
						}

						setState(1884);
						match(RightBracket);
						setState(1886);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,205,_ctx) ) {
						case 1:
							{
							setState(1885);
							attributespecifierseq(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1892);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,207,_ctx);
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
		enterRule(_localctx, 288, RULE_abstractpackdeclarator);
		try {
			setState(1897);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ellipsis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1893);
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
				setState(1894);
				ptroperator();
				setState(1895);
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
		int _startState = 290;
		enterRecursionRule(_localctx, 290, RULE_noptrabstractpackdeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1900);
			match(Ellipsis);
			}
			_ctx.stop = _input.LT(-1);
			setState(1915);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,212,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1913);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,211,_ctx) ) {
					case 1:
						{
						_localctx = new NoptrabstractpackdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractpackdeclarator);
						setState(1902);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1903);
						parametersandqualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoptrabstractpackdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractpackdeclarator);
						setState(1904);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1905);
						match(LeftBracket);
						setState(1907);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Decltype) | (1L << False) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (This - 78)) | (1L << (True - 78)) | (1L << (LeftParen - 78)) | (1L << (LeftBracket - 78)) | (1L << (Tilde - 78)) | (1L << (Doublecolon - 78)))) != 0) || ((((_la - 143)) & ~0x3f) == 0 && ((1L << (_la - 143)) & ((1L << (Identifier - 143)) | (1L << (Integerliteral - 143)) | (1L << (Characterliteral - 143)) | (1L << (Floatingliteral - 143)) | (1L << (Stringliteral - 143)) | (1L << (Userdefinedintegerliteral - 143)) | (1L << (Userdefinedfloatingliteral - 143)) | (1L << (Userdefinedstringliteral - 143)) | (1L << (Userdefinedcharacterliteral - 143)))) != 0)) {
							{
							setState(1906);
							constantexpression();
							}
						}

						setState(1909);
						match(RightBracket);
						setState(1911);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,210,_ctx) ) {
						case 1:
							{
							setState(1910);
							attributespecifierseq(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1917);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,212,_ctx);
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
		enterRule(_localctx, 292, RULE_parameterdeclarationclause);
		int _la;
		try {
			setState(1928);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,215,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1919);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 19)) & ~0x3f) == 0 && ((1L << (_la - 19)) & ((1L << (Alignas - 19)) | (1L << (Auto - 19)) | (1L << (Bool - 19)) | (1L << (Char - 19)) | (1L << (Char16 - 19)) | (1L << (Char32 - 19)) | (1L << (Class - 19)) | (1L << (Const - 19)) | (1L << (Constexpr - 19)) | (1L << (Decltype - 19)) | (1L << (Double - 19)) | (1L << (Enum - 19)) | (1L << (Explicit - 19)) | (1L << (Extern - 19)) | (1L << (Float - 19)) | (1L << (Friend - 19)) | (1L << (Inline - 19)) | (1L << (Int - 19)) | (1L << (Long - 19)) | (1L << (Mutable - 19)) | (1L << (Register - 19)) | (1L << (Short - 19)) | (1L << (Signed - 19)) | (1L << (Static - 19)) | (1L << (Struct - 19)) | (1L << (Thread_local - 19)))) != 0) || ((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (Typedef - 83)) | (1L << (Typename_ - 83)) | (1L << (Union - 83)) | (1L << (Unsigned - 83)) | (1L << (Virtual - 83)) | (1L << (Void - 83)) | (1L << (Volatile - 83)) | (1L << (Wchar - 83)) | (1L << (LeftBracket - 83)) | (1L << (Doublecolon - 83)) | (1L << (Identifier - 83)))) != 0)) {
					{
					setState(1918);
					parameterdeclarationlist(0);
					}
				}

				setState(1922);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1921);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1924);
				parameterdeclarationlist(0);
				setState(1925);
				match(Comma);
				setState(1926);
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
		int _startState = 294;
		enterRecursionRule(_localctx, 294, RULE_parameterdeclarationlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1931);
			parameterdeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1938);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,216,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ParameterdeclarationlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_parameterdeclarationlist);
					setState(1933);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1934);
					match(Comma);
					setState(1935);
					parameterdeclaration();
					}
					} 
				}
				setState(1940);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,216,_ctx);
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
		enterRule(_localctx, 296, RULE_parameterdeclaration);
		int _la;
		try {
			setState(1972);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,223,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1942);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1941);
					attributespecifierseq(0);
					}
				}

				setState(1944);
				declspecifierseq();
				setState(1945);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1948);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1947);
					attributespecifierseq(0);
					}
				}

				setState(1950);
				declspecifierseq();
				setState(1951);
				declarator();
				setState(1952);
				match(Assign);
				setState(1953);
				initializerclause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1956);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1955);
					attributespecifierseq(0);
					}
				}

				setState(1958);
				declspecifierseq();
				setState(1960);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,220,_ctx) ) {
				case 1:
					{
					setState(1959);
					abstractdeclarator();
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1963);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1962);
					attributespecifierseq(0);
					}
				}

				setState(1965);
				declspecifierseq();
				setState(1967);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__11 || _la==Decltype || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (LeftParen - 94)) | (1L << (LeftBracket - 94)) | (1L << (Star - 94)) | (1L << (And - 94)) | (1L << (Doublecolon - 94)) | (1L << (Ellipsis - 94)) | (1L << (Identifier - 94)))) != 0)) {
					{
					setState(1966);
					abstractdeclarator();
					}
				}

				setState(1969);
				match(Assign);
				setState(1970);
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
		enterRule(_localctx, 298, RULE_functiondefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1975);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1974);
				attributespecifierseq(0);
				}
			}

			setState(1978);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,225,_ctx) ) {
			case 1:
				{
				setState(1977);
				declspecifierseq();
				}
				break;
			}
			setState(1980);
			declarator();
			setState(1982);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Final || _la==Override) {
				{
				setState(1981);
				virtspecifierseq(0);
				}
			}

			setState(1984);
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
		enterRule(_localctx, 300, RULE_functionbody);
		int _la;
		try {
			setState(1997);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,228,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1987);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(1986);
					ctorinitializer();
					}
				}

				setState(1989);
				compoundstatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1990);
				functiontryblock();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1991);
				match(Assign);
				setState(1992);
				match(Default);
				setState(1993);
				match(Semi);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1994);
				match(Assign);
				setState(1995);
				match(Delete);
				setState(1996);
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
		enterRule(_localctx, 302, RULE_initializer);
		try {
			setState(2004);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBrace:
			case Assign:
				enterOuterAlt(_localctx, 1);
				{
				setState(1999);
				braceorequalinitializer();
				}
				break;
			case LeftParen:
				enterOuterAlt(_localctx, 2);
				{
				setState(2000);
				match(LeftParen);
				setState(2001);
				expressionlist();
				setState(2002);
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
		enterRule(_localctx, 304, RULE_braceorequalinitializer);
		try {
			setState(2009);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Assign:
				enterOuterAlt(_localctx, 1);
				{
				setState(2006);
				match(Assign);
				setState(2007);
				initializerclause();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2008);
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
		enterRule(_localctx, 306, RULE_initializerclause);
		try {
			setState(2013);
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
				setState(2011);
				assignmentexpression();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2012);
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
		int _startState = 308;
		enterRecursionRule(_localctx, 308, RULE_initializerlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2016);
			initializerclause();
			setState(2018);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,232,_ctx) ) {
			case 1:
				{
				setState(2017);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2028);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,234,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerlist);
					setState(2020);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2021);
					match(Comma);
					setState(2022);
					initializerclause();
					setState(2024);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,233,_ctx) ) {
					case 1:
						{
						setState(2023);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2030);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,234,_ctx);
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
		enterRule(_localctx, 310, RULE_bracedinitlist);
		int _la;
		try {
			setState(2040);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,236,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2031);
				match(LeftBrace);
				setState(2032);
				initializerlist(0);
				setState(2034);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(2033);
					match(Comma);
					}
				}

				setState(2036);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2038);
				match(LeftBrace);
				setState(2039);
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
		enterRule(_localctx, 312, RULE_classname);
		try {
			setState(2044);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,237,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2042);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2043);
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
		enterRule(_localctx, 314, RULE_classspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2046);
			classhead();
			setState(2047);
			match(LeftBrace);
			setState(2049);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Protected - 64)) | (1L << (Public - 64)) | (1L << (Register - 64)) | (1L << (Short - 64)) | (1L << (Signed - 64)) | (1L << (Static - 64)) | (1L << (Static_assert - 64)) | (1L << (Struct - 64)) | (1L << (Template - 64)) | (1L << (Thread_local - 64)) | (1L << (Typedef - 64)) | (1L << (Typename_ - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (Wchar - 64)) | (1L << (LeftParen - 64)) | (1L << (LeftBracket - 64)) | (1L << (Star - 64)) | (1L << (And - 64)) | (1L << (Tilde - 64)))) != 0) || ((((_la - 137)) & ~0x3f) == 0 && ((1L << (_la - 137)) & ((1L << (Colon - 137)) | (1L << (Doublecolon - 137)) | (1L << (Semi - 137)) | (1L << (Ellipsis - 137)) | (1L << (Identifier - 137)))) != 0)) {
				{
				setState(2048);
				memberspecification();
				}
			}

			setState(2051);
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
		enterRule(_localctx, 316, RULE_classhead);
		int _la;
		try {
			setState(2071);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,244,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2053);
				classkey();
				setState(2055);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2054);
					attributespecifierseq(0);
					}
				}

				setState(2057);
				classheadname();
				setState(2059);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Final) {
					{
					setState(2058);
					classvirtspecifier();
					}
				}

				setState(2062);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2061);
					baseclause();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2064);
				classkey();
				setState(2066);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2065);
					attributespecifierseq(0);
					}
				}

				setState(2069);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2068);
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
		enterRule(_localctx, 318, RULE_classheadname);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2074);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,245,_ctx) ) {
			case 1:
				{
				setState(2073);
				nestednamespecifier(0);
				}
				break;
			}
			setState(2076);
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
		enterRule(_localctx, 320, RULE_classvirtspecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2078);
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
		enterRule(_localctx, 322, RULE_classkey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2080);
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
		enterRule(_localctx, 324, RULE_memberspecification);
		int _la;
		try {
			setState(2091);
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
				setState(2082);
				memberdeclaration();
				setState(2084);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Protected - 64)) | (1L << (Public - 64)) | (1L << (Register - 64)) | (1L << (Short - 64)) | (1L << (Signed - 64)) | (1L << (Static - 64)) | (1L << (Static_assert - 64)) | (1L << (Struct - 64)) | (1L << (Template - 64)) | (1L << (Thread_local - 64)) | (1L << (Typedef - 64)) | (1L << (Typename_ - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (Wchar - 64)) | (1L << (LeftParen - 64)) | (1L << (LeftBracket - 64)) | (1L << (Star - 64)) | (1L << (And - 64)) | (1L << (Tilde - 64)))) != 0) || ((((_la - 137)) & ~0x3f) == 0 && ((1L << (_la - 137)) & ((1L << (Colon - 137)) | (1L << (Doublecolon - 137)) | (1L << (Semi - 137)) | (1L << (Ellipsis - 137)) | (1L << (Identifier - 137)))) != 0)) {
					{
					setState(2083);
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
				setState(2086);
				accessspecifier();
				setState(2087);
				match(Colon);
				setState(2089);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Protected - 64)) | (1L << (Public - 64)) | (1L << (Register - 64)) | (1L << (Short - 64)) | (1L << (Signed - 64)) | (1L << (Static - 64)) | (1L << (Static_assert - 64)) | (1L << (Struct - 64)) | (1L << (Template - 64)) | (1L << (Thread_local - 64)) | (1L << (Typedef - 64)) | (1L << (Typename_ - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (Wchar - 64)) | (1L << (LeftParen - 64)) | (1L << (LeftBracket - 64)) | (1L << (Star - 64)) | (1L << (And - 64)) | (1L << (Tilde - 64)))) != 0) || ((((_la - 137)) & ~0x3f) == 0 && ((1L << (_la - 137)) & ((1L << (Colon - 137)) | (1L << (Doublecolon - 137)) | (1L << (Semi - 137)) | (1L << (Ellipsis - 137)) | (1L << (Identifier - 137)))) != 0)) {
					{
					setState(2088);
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
		enterRule(_localctx, 326, RULE_memberdeclaration);
		int _la;
		try {
			setState(2109);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,252,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2094);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,249,_ctx) ) {
				case 1:
					{
					setState(2093);
					attributespecifierseq(0);
					}
					break;
				}
				setState(2097);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,250,_ctx) ) {
				case 1:
					{
					setState(2096);
					declspecifierseq();
					}
					break;
				}
				setState(2100);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << Alignas) | (1L << Decltype) | (1L << Operator))) != 0) || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (LeftParen - 94)) | (1L << (LeftBracket - 94)) | (1L << (Star - 94)) | (1L << (And - 94)) | (1L << (Tilde - 94)) | (1L << (Colon - 94)) | (1L << (Doublecolon - 94)) | (1L << (Ellipsis - 94)) | (1L << (Identifier - 94)))) != 0)) {
					{
					setState(2099);
					memberdeclaratorlist(0);
					}
				}

				setState(2102);
				match(Semi);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2103);
				functiondefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2104);
				usingdeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2105);
				static_assertdeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2106);
				templatedeclaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2107);
				aliasdeclaration();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2108);
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
		int _startState = 328;
		enterRecursionRule(_localctx, 328, RULE_memberdeclaratorlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2112);
			memberdeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(2119);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,253,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberdeclaratorlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberdeclaratorlist);
					setState(2114);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2115);
					match(Comma);
					setState(2116);
					memberdeclarator();
					}
					} 
				}
				setState(2121);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,253,_ctx);
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
		enterRule(_localctx, 330, RULE_memberdeclarator);
		int _la;
		try {
			setState(2141);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,259,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2122);
				declarator();
				setState(2124);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,254,_ctx) ) {
				case 1:
					{
					setState(2123);
					virtspecifierseq(0);
					}
					break;
				}
				setState(2127);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,255,_ctx) ) {
				case 1:
					{
					setState(2126);
					purespecifier();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2129);
				declarator();
				setState(2131);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,256,_ctx) ) {
				case 1:
					{
					setState(2130);
					braceorequalinitializer();
					}
					break;
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2134);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2133);
					match(Identifier);
					}
				}

				setState(2137);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2136);
					attributespecifierseq(0);
					}
				}

				setState(2139);
				match(Colon);
				setState(2140);
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
		int _startState = 332;
		enterRecursionRule(_localctx, 332, RULE_virtspecifierseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2144);
			virtspecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(2150);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,260,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new VirtspecifierseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_virtspecifierseq);
					setState(2146);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2147);
					virtspecifier();
					}
					} 
				}
				setState(2152);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,260,_ctx);
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
		enterRule(_localctx, 334, RULE_virtspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2153);
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
		enterRule(_localctx, 336, RULE_purespecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2155);
			match(Assign);
			setState(2156);
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
		enterRule(_localctx, 338, RULE_baseclause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2159);
			match(Colon);
			setState(2160);
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
		int _startState = 340;
		enterRecursionRule(_localctx, 340, RULE_basespecifierlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2163);
			basespecifier();
			setState(2165);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,261,_ctx) ) {
			case 1:
				{
				setState(2164);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2175);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,263,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BasespecifierlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_basespecifierlist);
					setState(2167);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2168);
					match(Comma);
					setState(2169);
					basespecifier();
					setState(2171);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,262,_ctx) ) {
					case 1:
						{
						setState(2170);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2177);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,263,_ctx);
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
		enterRule(_localctx, 342, RULE_basespecifier);
		int _la;
		try {
			setState(2199);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,269,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2179);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2178);
					attributespecifierseq(0);
					}
				}

				setState(2181);
				basetypespecifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2183);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2182);
					attributespecifierseq(0);
					}
				}

				setState(2185);
				match(Virtual);
				setState(2187);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 63)) & ~0x3f) == 0 && ((1L << (_la - 63)) & ((1L << (Private - 63)) | (1L << (Protected - 63)) | (1L << (Public - 63)))) != 0)) {
					{
					setState(2186);
					accessspecifier();
					}
				}

				setState(2189);
				basetypespecifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2191);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2190);
					attributespecifierseq(0);
					}
				}

				setState(2193);
				accessspecifier();
				setState(2195);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Virtual) {
					{
					setState(2194);
					match(Virtual);
					}
				}

				setState(2197);
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
		enterRule(_localctx, 344, RULE_classordecltype);
		try {
			setState(2206);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,271,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2202);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,270,_ctx) ) {
				case 1:
					{
					setState(2201);
					nestednamespecifier(0);
					}
					break;
				}
				setState(2204);
				classname();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2205);
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
		enterRule(_localctx, 346, RULE_basetypespecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2208);
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
		enterRule(_localctx, 348, RULE_accessspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2210);
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
		enterRule(_localctx, 350, RULE_conversionfunctionid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2212);
			match(Operator);
			setState(2213);
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
		enterRule(_localctx, 352, RULE_conversiontypeid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2215);
			typespecifierseq();
			setState(2217);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,272,_ctx) ) {
			case 1:
				{
				setState(2216);
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
		enterRule(_localctx, 354, RULE_conversiondeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2219);
			ptroperator();
			setState(2221);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,273,_ctx) ) {
			case 1:
				{
				setState(2220);
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
		enterRule(_localctx, 356, RULE_ctorinitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2223);
			match(Colon);
			setState(2224);
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
		enterRule(_localctx, 358, RULE_meminitializerlist);
		int _la;
		try {
			setState(2237);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,276,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2226);
				meminitializer();
				setState(2228);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(2227);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2230);
				meminitializer();
				setState(2232);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(2231);
					match(Ellipsis);
					}
				}

				setState(2234);
				match(Comma);
				setState(2235);
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
		enterRule(_localctx, 360, RULE_meminitializer);
		int _la;
		try {
			setState(2249);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,278,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2239);
				meminitializerid();
				setState(2240);
				match(LeftParen);
				setState(2242);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (Reinterpret_cast - 67)) | (1L << (Short - 67)) | (1L << (Signed - 67)) | (1L << (Sizeof - 67)) | (1L << (Static_cast - 67)) | (1L << (This - 67)) | (1L << (Throw - 67)) | (1L << (True - 67)) | (1L << (Typeid_ - 67)) | (1L << (Typename_ - 67)) | (1L << (Unsigned - 67)) | (1L << (Void - 67)) | (1L << (Wchar - 67)) | (1L << (LeftParen - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftBrace - 67)) | (1L << (Plus - 67)) | (1L << (Minus - 67)) | (1L << (Star - 67)) | (1L << (And - 67)) | (1L << (Or - 67)) | (1L << (Tilde - 67)))) != 0) || ((((_la - 131)) & ~0x3f) == 0 && ((1L << (_la - 131)) & ((1L << (PlusPlus - 131)) | (1L << (MinusMinus - 131)) | (1L << (Doublecolon - 131)) | (1L << (Identifier - 131)) | (1L << (Integerliteral - 131)) | (1L << (Characterliteral - 131)) | (1L << (Floatingliteral - 131)) | (1L << (Stringliteral - 131)) | (1L << (Userdefinedintegerliteral - 131)) | (1L << (Userdefinedfloatingliteral - 131)) | (1L << (Userdefinedstringliteral - 131)) | (1L << (Userdefinedcharacterliteral - 131)))) != 0)) {
					{
					setState(2241);
					expressionlist();
					}
				}

				setState(2244);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2246);
				meminitializerid();
				setState(2247);
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
		enterRule(_localctx, 362, RULE_meminitializerid);
		try {
			setState(2253);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,279,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2251);
				classordecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2252);
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
		enterRule(_localctx, 364, RULE_operatorfunctionid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2255);
			match(Operator);
			setState(2256);
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
		enterRule(_localctx, 366, RULE_literaloperatorid);
		try {
			setState(2269);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,282,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2258);
				match(Operator);
				setState(2261);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case Stringliteral:
					{
					setState(2259);
					match(Stringliteral);
					}
					break;
				case T__5:
				case Encodingprefix:
					{
					setState(2260);
					aergiastring();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(2263);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2264);
				match(Operator);
				setState(2267);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case Userdefinedstringliteral:
					{
					setState(2265);
					match(Userdefinedstringliteral);
					}
					break;
				case T__5:
				case Encodingprefix:
					{
					setState(2266);
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
		enterRule(_localctx, 368, RULE_templatedeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2271);
			match(Template);
			setState(2272);
			match(Less);
			setState(2273);
			templateparameterlist(0);
			setState(2274);
			match(Greater);
			setState(2275);
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
		int _startState = 370;
		enterRecursionRule(_localctx, 370, RULE_templateparameterlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2278);
			templateparameter();
			}
			_ctx.stop = _input.LT(-1);
			setState(2285);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,283,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateparameterlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateparameterlist);
					setState(2280);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2281);
					match(Comma);
					setState(2282);
					templateparameter();
					}
					} 
				}
				setState(2287);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,283,_ctx);
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
		enterRule(_localctx, 372, RULE_templateparameter);
		try {
			setState(2290);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,284,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2288);
				typeparameter();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2289);
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
		enterRule(_localctx, 374, RULE_typeparameter);
		int _la;
		try {
			setState(2340);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,294,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2292);
				match(Class);
				setState(2294);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,285,_ctx) ) {
				case 1:
					{
					setState(2293);
					match(Ellipsis);
					}
					break;
				}
				setState(2297);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,286,_ctx) ) {
				case 1:
					{
					setState(2296);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2299);
				match(Class);
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
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2305);
				match(Typename_);
				setState(2307);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,288,_ctx) ) {
				case 1:
					{
					setState(2306);
					match(Ellipsis);
					}
					break;
				}
				setState(2310);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,289,_ctx) ) {
				case 1:
					{
					setState(2309);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2312);
				match(Typename_);
				setState(2314);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2313);
					match(Identifier);
					}
				}

				setState(2316);
				match(Assign);
				setState(2317);
				thetypeid();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2318);
				match(Template);
				setState(2319);
				match(Less);
				setState(2320);
				templateparameterlist(0);
				setState(2321);
				match(Greater);
				setState(2322);
				match(Class);
				setState(2324);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,291,_ctx) ) {
				case 1:
					{
					setState(2323);
					match(Ellipsis);
					}
					break;
				}
				setState(2327);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,292,_ctx) ) {
				case 1:
					{
					setState(2326);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2329);
				match(Template);
				setState(2330);
				match(Less);
				setState(2331);
				templateparameterlist(0);
				setState(2332);
				match(Greater);
				setState(2333);
				match(Class);
				setState(2335);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2334);
					match(Identifier);
					}
				}

				setState(2337);
				match(Assign);
				setState(2338);
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
		enterRule(_localctx, 376, RULE_simpletemplateid);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2342);
			templatename();
			setState(2343);
			match(Less);
			setState(2345);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 69)) & ~0x3f) == 0 && ((1L << (_la - 69)) & ((1L << (Short - 69)) | (1L << (Signed - 69)) | (1L << (Struct - 69)) | (1L << (This - 69)) | (1L << (True - 69)) | (1L << (Typename_ - 69)) | (1L << (Union - 69)) | (1L << (Unsigned - 69)) | (1L << (Void - 69)) | (1L << (Volatile - 69)) | (1L << (Wchar - 69)) | (1L << (LeftParen - 69)) | (1L << (LeftBracket - 69)) | (1L << (Tilde - 69)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Identifier - 138)) | (1L << (Integerliteral - 138)) | (1L << (Characterliteral - 138)) | (1L << (Floatingliteral - 138)) | (1L << (Stringliteral - 138)) | (1L << (Userdefinedintegerliteral - 138)) | (1L << (Userdefinedfloatingliteral - 138)) | (1L << (Userdefinedstringliteral - 138)) | (1L << (Userdefinedcharacterliteral - 138)))) != 0)) {
				{
				setState(2344);
				templateargumentlist(0);
				}
			}

			setState(2347);
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
		enterRule(_localctx, 378, RULE_templateid);
		int _la;
		try {
			setState(2364);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,298,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2349);
				simpletemplateid();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2350);
				operatorfunctionid();
				setState(2351);
				match(Less);
				setState(2353);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 69)) & ~0x3f) == 0 && ((1L << (_la - 69)) & ((1L << (Short - 69)) | (1L << (Signed - 69)) | (1L << (Struct - 69)) | (1L << (This - 69)) | (1L << (True - 69)) | (1L << (Typename_ - 69)) | (1L << (Union - 69)) | (1L << (Unsigned - 69)) | (1L << (Void - 69)) | (1L << (Volatile - 69)) | (1L << (Wchar - 69)) | (1L << (LeftParen - 69)) | (1L << (LeftBracket - 69)) | (1L << (Tilde - 69)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Identifier - 138)) | (1L << (Integerliteral - 138)) | (1L << (Characterliteral - 138)) | (1L << (Floatingliteral - 138)) | (1L << (Stringliteral - 138)) | (1L << (Userdefinedintegerliteral - 138)) | (1L << (Userdefinedfloatingliteral - 138)) | (1L << (Userdefinedstringliteral - 138)) | (1L << (Userdefinedcharacterliteral - 138)))) != 0)) {
					{
					setState(2352);
					templateargumentlist(0);
					}
				}

				setState(2355);
				match(Greater);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2357);
				literaloperatorid();
				setState(2358);
				match(Less);
				setState(2360);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << Encodingprefix) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 69)) & ~0x3f) == 0 && ((1L << (_la - 69)) & ((1L << (Short - 69)) | (1L << (Signed - 69)) | (1L << (Struct - 69)) | (1L << (This - 69)) | (1L << (True - 69)) | (1L << (Typename_ - 69)) | (1L << (Union - 69)) | (1L << (Unsigned - 69)) | (1L << (Void - 69)) | (1L << (Volatile - 69)) | (1L << (Wchar - 69)) | (1L << (LeftParen - 69)) | (1L << (LeftBracket - 69)) | (1L << (Tilde - 69)))) != 0) || ((((_la - 138)) & ~0x3f) == 0 && ((1L << (_la - 138)) & ((1L << (Doublecolon - 138)) | (1L << (Identifier - 138)) | (1L << (Integerliteral - 138)) | (1L << (Characterliteral - 138)) | (1L << (Floatingliteral - 138)) | (1L << (Stringliteral - 138)) | (1L << (Userdefinedintegerliteral - 138)) | (1L << (Userdefinedfloatingliteral - 138)) | (1L << (Userdefinedstringliteral - 138)) | (1L << (Userdefinedcharacterliteral - 138)))) != 0)) {
					{
					setState(2359);
					templateargumentlist(0);
					}
				}

				setState(2362);
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
		enterRule(_localctx, 380, RULE_templatename);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2366);
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
		int _startState = 382;
		enterRecursionRule(_localctx, 382, RULE_templateargumentlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2369);
			templateargument();
			setState(2371);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,299,_ctx) ) {
			case 1:
				{
				setState(2370);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2381);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,301,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateargumentlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateargumentlist);
					setState(2373);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2374);
					match(Comma);
					setState(2375);
					templateargument();
					setState(2377);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,300,_ctx) ) {
					case 1:
						{
						setState(2376);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2383);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,301,_ctx);
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
		enterRule(_localctx, 384, RULE_templateargument);
		try {
			setState(2387);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,302,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2384);
				thetypeid();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2385);
				constantexpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2386);
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
		enterRule(_localctx, 386, RULE_typenamespecifier);
		int _la;
		try {
			setState(2400);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,304,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2389);
				match(Typename_);
				setState(2390);
				nestednamespecifier(0);
				setState(2391);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2393);
				match(Typename_);
				setState(2394);
				nestednamespecifier(0);
				setState(2396);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(2395);
					match(Template);
					}
				}

				setState(2398);
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
		enterRule(_localctx, 388, RULE_explicitinstantiation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2403);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Extern) {
				{
				setState(2402);
				match(Extern);
				}
			}

			setState(2405);
			match(Template);
			setState(2406);
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
		enterRule(_localctx, 390, RULE_explicitspecialization);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2408);
			match(Template);
			setState(2409);
			match(Less);
			setState(2410);
			match(Greater);
			setState(2411);
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
		enterRule(_localctx, 392, RULE_tryblock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2413);
			match(Try);
			setState(2414);
			compoundstatement();
			setState(2415);
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
		enterRule(_localctx, 394, RULE_functiontryblock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2417);
			match(Try);
			setState(2419);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2418);
				ctorinitializer();
				}
			}

			setState(2421);
			compoundstatement();
			setState(2422);
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
		enterRule(_localctx, 396, RULE_handlerseq);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2424);
			handler();
			setState(2426);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,307,_ctx) ) {
			case 1:
				{
				setState(2425);
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
		enterRule(_localctx, 398, RULE_handler);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2428);
			match(Catch);
			setState(2429);
			match(LeftParen);
			setState(2430);
			exceptiondeclaration();
			setState(2431);
			match(RightParen);
			setState(2432);
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
		enterRule(_localctx, 400, RULE_exceptiondeclaration);
		int _la;
		try {
			setState(2448);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,311,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2435);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2434);
					attributespecifierseq(0);
					}
				}

				setState(2437);
				typespecifierseq();
				setState(2438);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2441);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2440);
					attributespecifierseq(0);
					}
				}

				setState(2443);
				typespecifierseq();
				setState(2445);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__11 || _la==Decltype || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (LeftParen - 94)) | (1L << (LeftBracket - 94)) | (1L << (Star - 94)) | (1L << (And - 94)) | (1L << (Doublecolon - 94)) | (1L << (Ellipsis - 94)) | (1L << (Identifier - 94)))) != 0)) {
					{
					setState(2444);
					abstractdeclarator();
					}
				}

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2447);
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
		enterRule(_localctx, 402, RULE_throwexpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2450);
			match(Throw);
			setState(2452);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,312,_ctx) ) {
			case 1:
				{
				setState(2451);
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
		enterRule(_localctx, 404, RULE_exceptionspecification);
		try {
			setState(2456);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Throw:
				enterOuterAlt(_localctx, 1);
				{
				setState(2454);
				dynamicexceptionspecification();
				}
				break;
			case Noexcept:
				enterOuterAlt(_localctx, 2);
				{
				setState(2455);
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
		enterRule(_localctx, 406, RULE_dynamicexceptionspecification);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2458);
			match(Throw);
			setState(2459);
			match(LeftParen);
			setState(2461);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 22)) & ~0x3f) == 0 && ((1L << (_la - 22)) & ((1L << (Auto - 22)) | (1L << (Bool - 22)) | (1L << (Char - 22)) | (1L << (Char16 - 22)) | (1L << (Char32 - 22)) | (1L << (Class - 22)) | (1L << (Const - 22)) | (1L << (Decltype - 22)) | (1L << (Double - 22)) | (1L << (Enum - 22)) | (1L << (Float - 22)) | (1L << (Int - 22)) | (1L << (Long - 22)) | (1L << (Short - 22)) | (1L << (Signed - 22)) | (1L << (Struct - 22)) | (1L << (Typename_ - 22)))) != 0) || ((((_la - 86)) & ~0x3f) == 0 && ((1L << (_la - 86)) & ((1L << (Union - 86)) | (1L << (Unsigned - 86)) | (1L << (Void - 86)) | (1L << (Volatile - 86)) | (1L << (Wchar - 86)) | (1L << (Doublecolon - 86)) | (1L << (Identifier - 86)))) != 0)) {
				{
				setState(2460);
				typeidlist(0);
				}
			}

			setState(2463);
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
		int _startState = 408;
		enterRecursionRule(_localctx, 408, RULE_typeidlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2466);
			thetypeid();
			setState(2468);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,315,_ctx) ) {
			case 1:
				{
				setState(2467);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2478);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,317,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TypeidlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_typeidlist);
					setState(2470);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2471);
					match(Comma);
					setState(2472);
					thetypeid();
					setState(2474);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,316,_ctx) ) {
					case 1:
						{
						setState(2473);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2480);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,317,_ctx);
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
		enterRule(_localctx, 410, RULE_noexceptspecification);
		try {
			setState(2487);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,318,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2481);
				match(Noexcept);
				setState(2482);
				match(LeftParen);
				setState(2483);
				constantexpression();
				setState(2484);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2486);
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
		enterRule(_localctx, 412, RULE_theoperator);
		try {
			setState(2540);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,319,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2489);
				match(New);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2490);
				match(Delete);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2491);
				match(New);
				setState(2492);
				match(LeftBracket);
				setState(2493);
				match(RightBracket);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2494);
				match(Delete);
				setState(2495);
				match(LeftBracket);
				setState(2496);
				match(RightBracket);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2497);
				match(Plus);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2498);
				match(Minus);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2499);
				match(Star);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2500);
				match(Div);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2501);
				match(Mod);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2502);
				match(Caret);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2503);
				match(And);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(2504);
				match(Or);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(2505);
				match(Tilde);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(2506);
				match(T__9);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(2507);
				match(T__10);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(2508);
				match(Assign);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(2509);
				match(Less);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(2510);
				match(Greater);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(2511);
				match(PlusAssign);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(2512);
				match(MinusAssign);
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(2513);
				match(StarAssign);
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(2514);
				match(DivAssign);
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(2515);
				match(ModAssign);
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(2516);
				match(XorAssign);
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(2517);
				match(AndAssign);
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(2518);
				match(OrAssign);
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(2519);
				match(LeftShift);
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(2520);
				match(RightShift);
				}
				break;
			case 29:
				enterOuterAlt(_localctx, 29);
				{
				setState(2521);
				match(RightShiftAssign);
				}
				break;
			case 30:
				enterOuterAlt(_localctx, 30);
				{
				setState(2522);
				match(LeftShiftAssign);
				}
				break;
			case 31:
				enterOuterAlt(_localctx, 31);
				{
				setState(2523);
				match(Equal);
				}
				break;
			case 32:
				enterOuterAlt(_localctx, 32);
				{
				setState(2524);
				match(NotEqual);
				}
				break;
			case 33:
				enterOuterAlt(_localctx, 33);
				{
				setState(2525);
				match(LessEqual);
				}
				break;
			case 34:
				enterOuterAlt(_localctx, 34);
				{
				setState(2526);
				match(GreaterEqual);
				}
				break;
			case 35:
				enterOuterAlt(_localctx, 35);
				{
				setState(2527);
				match(T__11);
				}
				break;
			case 36:
				enterOuterAlt(_localctx, 36);
				{
				setState(2528);
				match(T__12);
				}
				break;
			case 37:
				enterOuterAlt(_localctx, 37);
				{
				setState(2529);
				match(T__13);
				}
				break;
			case 38:
				enterOuterAlt(_localctx, 38);
				{
				setState(2530);
				match(T__14);
				}
				break;
			case 39:
				enterOuterAlt(_localctx, 39);
				{
				setState(2531);
				match(PlusPlus);
				}
				break;
			case 40:
				enterOuterAlt(_localctx, 40);
				{
				setState(2532);
				match(MinusMinus);
				}
				break;
			case 41:
				enterOuterAlt(_localctx, 41);
				{
				setState(2533);
				match(Comma);
				}
				break;
			case 42:
				enterOuterAlt(_localctx, 42);
				{
				setState(2534);
				match(ArrowStar);
				}
				break;
			case 43:
				enterOuterAlt(_localctx, 43);
				{
				setState(2535);
				match(Arrow);
				}
				break;
			case 44:
				enterOuterAlt(_localctx, 44);
				{
				setState(2536);
				match(LeftParen);
				setState(2537);
				match(RightParen);
				}
				break;
			case 45:
				enterOuterAlt(_localctx, 45);
				{
				setState(2538);
				match(LeftBracket);
				setState(2539);
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
		enterRule(_localctx, 414, RULE_literal);
		try {
			setState(2550);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,320,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2542);
				match(Integerliteral);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2543);
				match(Characterliteral);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2544);
				match(Floatingliteral);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2545);
				match(Stringliteral);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2546);
				booleanliteral();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2547);
				pointerliteral();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2548);
				userdefinedliteral();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2549);
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
		enterRule(_localctx, 416, RULE_booleanliteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2552);
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
		enterRule(_localctx, 418, RULE_pointerliteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2554);
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
		enterRule(_localctx, 420, RULE_userdefinedliteral);
		try {
			setState(2561);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Userdefinedintegerliteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(2556);
				match(Userdefinedintegerliteral);
				}
				break;
			case Userdefinedfloatingliteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(2557);
				match(Userdefinedfloatingliteral);
				}
				break;
			case Userdefinedstringliteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(2558);
				match(Userdefinedstringliteral);
				}
				break;
			case Userdefinedcharacterliteral:
				enterOuterAlt(_localctx, 4);
				{
				setState(2559);
				match(Userdefinedcharacterliteral);
				}
				break;
			case T__5:
			case Encodingprefix:
				enterOuterAlt(_localctx, 5);
				{
				setState(2560);
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
		case 117:
			return attributespecifierseq_sempred((AttributespecifierseqContext)_localctx, predIndex);
		case 120:
			return attributelist_sempred((AttributelistContext)_localctx, predIndex);
		case 126:
			return balancedtokenseq_sempred((BalancedtokenseqContext)_localctx, predIndex);
		case 128:
			return initdeclaratorlist_sempred((InitdeclaratorlistContext)_localctx, predIndex);
		case 132:
			return noptrdeclarator_sempred((NoptrdeclaratorContext)_localctx, predIndex);
		case 143:
			return noptrabstractdeclarator_sempred((NoptrabstractdeclaratorContext)_localctx, predIndex);
		case 145:
			return noptrabstractpackdeclarator_sempred((NoptrabstractpackdeclaratorContext)_localctx, predIndex);
		case 147:
			return parameterdeclarationlist_sempred((ParameterdeclarationlistContext)_localctx, predIndex);
		case 154:
			return initializerlist_sempred((InitializerlistContext)_localctx, predIndex);
		case 164:
			return memberdeclaratorlist_sempred((MemberdeclaratorlistContext)_localctx, predIndex);
		case 166:
			return virtspecifierseq_sempred((VirtspecifierseqContext)_localctx, predIndex);
		case 170:
			return basespecifierlist_sempred((BasespecifierlistContext)_localctx, predIndex);
		case 185:
			return templateparameterlist_sempred((TemplateparameterlistContext)_localctx, predIndex);
		case 191:
			return templateargumentlist_sempred((TemplateargumentlistContext)_localctx, predIndex);
		case 204:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a2\u0a06\4\2\t"+
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
		"\4\u00d2\t\u00d2\4\u00d3\t\u00d3\4\u00d4\t\u00d4\3\2\5\2\u01aa\n\2\3\2"+
		"\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3"+
		"\6\5\6\u01bf\n\6\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\t\5\t\u01c9\n\t\3\t\3\t"+
		"\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\5\f"+
		"\u01dc\n\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u01eb"+
		"\n\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u01f5\n\16\3\17\3\17"+
		"\5\17\u01f9\n\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\5\20\u0204"+
		"\n\20\3\21\3\21\5\21\u0208\n\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22"+
		"\3\22\3\22\3\22\3\22\3\22\5\22\u0217\n\22\3\22\3\22\3\22\3\22\3\22\5\22"+
		"\u021e\n\22\3\22\3\22\3\22\7\22\u0223\n\22\f\22\16\22\u0226\13\22\3\23"+
		"\3\23\5\23\u022a\n\23\3\23\3\23\3\24\3\24\5\24\u0230\n\24\3\24\3\24\3"+
		"\25\3\25\3\25\3\25\3\25\3\25\5\25\u023a\n\25\3\26\3\26\3\27\3\27\3\27"+
		"\5\27\u0241\n\27\3\27\3\27\3\27\3\27\5\27\u0247\n\27\7\27\u0249\n\27\f"+
		"\27\16\27\u024c\13\27\3\30\3\30\5\30\u0250\n\30\3\31\3\31\3\31\3\31\5"+
		"\31\u0256\n\31\3\32\3\32\3\32\3\32\3\32\5\32\u025d\n\32\3\33\3\33\3\33"+
		"\3\33\5\33\u0263\n\33\3\33\5\33\u0266\n\33\3\33\5\33\u0269\n\33\3\33\5"+
		"\33\u026c\n\33\3\34\3\34\3\34\3\34\3\34\5\34\u0273\n\34\3\34\3\34\3\34"+
		"\3\34\3\34\5\34\u027a\n\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\5\34"+
		"\u02ae\n\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\5\34\u02bd\n\34\3\34\3\34\3\34\3\34\5\34\u02c3\n\34\3\34\3\34\3"+
		"\34\3\34\5\34\u02c9\n\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\7\34\u02d6\n\34\f\34\16\34\u02d9\13\34\3\35\3\35\3\36\3\36"+
		"\3\37\3\37\3 \5 \u02e2\n \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \5 \u02f1"+
		"\n \3 \3 \3 \3 \5 \u02f7\n \3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!"+
		"\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\5!\u0315\n!\3\"\3\"\3#\5#\u031a"+
		"\n#\3#\3#\5#\u031e\n#\3#\3#\5#\u0322\n#\3#\5#\u0325\n#\3#\3#\5#\u0329"+
		"\n#\3#\3#\3#\3#\5#\u032f\n#\5#\u0331\n#\3$\3$\3$\3$\3%\3%\5%\u0339\n%"+
		"\3&\3&\5&\u033d\n&\3&\5&\u0340\n&\3\'\3\'\3\'\3\'\3\'\5\'\u0347\n\'\3"+
		"\'\3\'\3\'\3\'\3\'\5\'\u034e\n\'\7\'\u0350\n\'\f\'\16\'\u0353\13\'\3("+
		"\3(\5(\u0357\n(\3(\3(\5(\u035b\n(\3)\5)\u035e\n)\3)\3)\3)\5)\u0363\n)"+
		"\3)\3)\3)\3)\5)\u0369\n)\3*\3*\3*\3*\3*\3+\3+\3+\3+\3+\3+\5+\u0376\n+"+
		"\3,\3,\3,\3,\3,\3,\3,\3,\3,\7,\u0381\n,\f,\16,\u0384\13,\3-\3-\3-\3-\3"+
		"-\3-\3-\3-\3-\3-\3-\3-\7-\u0392\n-\f-\16-\u0395\13-\3.\3.\3.\3.\3.\3."+
		"\3.\3.\3.\7.\u03a0\n.\f.\16.\u03a3\13.\3/\3/\3/\3/\3/\3/\3/\7/\u03ac\n"+
		"/\f/\16/\u03af\13/\3\60\3\60\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\7\61\u03c2\n\61\f\61\16\61\u03c5\13"+
		"\61\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\7\62\u03d0\n\62\f\62"+
		"\16\62\u03d3\13\62\3\63\3\63\3\63\3\63\3\63\3\63\7\63\u03db\n\63\f\63"+
		"\16\63\u03de\13\63\3\64\3\64\3\64\3\64\3\64\3\64\7\64\u03e6\n\64\f\64"+
		"\16\64\u03e9\13\64\3\65\3\65\3\65\3\65\3\65\3\65\7\65\u03f1\n\65\f\65"+
		"\16\65\u03f4\13\65\3\66\3\66\3\66\3\66\3\66\3\66\3\66\3\66\3\66\7\66\u03ff"+
		"\n\66\f\66\16\66\u0402\13\66\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3"+
		"\67\7\67\u040d\n\67\f\67\16\67\u0410\13\67\38\38\38\38\38\38\38\58\u0419"+
		"\n8\39\39\39\39\39\39\39\59\u0422\n9\3:\3:\3;\3;\3;\3;\3;\3;\7;\u042c"+
		"\n;\f;\16;\u042f\13;\3<\3<\3=\3=\5=\u0435\n=\3=\3=\5=\u0439\n=\3=\3=\5"+
		"=\u043d\n=\3=\3=\5=\u0441\n=\3=\3=\5=\u0445\n=\3=\3=\3=\3=\5=\u044b\n"+
		"=\3=\5=\u044e\n=\3>\5>\u0451\n>\3>\3>\3>\3>\5>\u0457\n>\3>\3>\3>\3>\3"+
		">\3>\5>\u045f\n>\3>\3>\3>\5>\u0464\n>\3?\5?\u0467\n?\3?\3?\3@\3@\5@\u046d"+
		"\n@\3@\3@\3A\3A\3A\3A\3A\7A\u0476\nA\fA\16A\u0479\13A\3B\3B\3B\3B\3B\3"+
		"B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\5B\u048f\nB\3C\3C\5C\u0493"+
		"\nC\3C\3C\3C\3C\3C\3C\5C\u049b\nC\3C\3C\3C\3C\5C\u04a1\nC\3D\3D\3D\3D"+
		"\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\5D\u04b5\nD\3D\3D\5D\u04b9"+
		"\nD\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\5D\u04c6\nD\3E\3E\5E\u04ca\nE\3F"+
		"\5F\u04cd\nF\3F\3F\3F\3G\3G\5G\u04d4\nG\3H\3H\3H\3H\3H\3H\5H\u04dc\nH"+
		"\3H\3H\3H\3H\3H\3H\3H\3H\5H\u04e6\nH\3I\3I\3J\3J\3J\3J\3J\7J\u04ef\nJ"+
		"\fJ\16J\u04f2\13J\3K\3K\3K\3K\3K\3K\3K\3K\3K\5K\u04fd\nK\3L\3L\3L\3L\3"+
		"L\3L\3L\3L\5L\u0507\nL\3M\3M\3M\5M\u050c\nM\3M\3M\3M\3M\3N\5N\u0513\n"+
		"N\3N\5N\u0516\nN\3N\3N\3N\5N\u051b\nN\3N\3N\3N\5N\u0520\nN\3O\3O\3O\3"+
		"O\3O\3O\5O\u0528\nO\3O\3O\3O\3P\3P\3Q\3Q\3Q\3R\3R\3R\3R\3R\3R\5R\u0538"+
		"\nR\3S\3S\5S\u053c\nS\3S\3S\3S\5S\u0541\nS\3T\3T\3U\3U\3V\3V\3W\3W\3W"+
		"\5W\u054c\nW\3X\3X\3X\3X\5X\u0552\nX\3Y\3Y\5Y\u0556\nY\3Y\3Y\3Y\5Y\u055b"+
		"\nY\3Z\3Z\5Z\u055f\nZ\3Z\3Z\3Z\5Z\u0564\nZ\3[\5[\u0567\n[\3[\3[\3[\3["+
		"\3[\3[\3[\3[\3[\3[\3[\3[\3[\3[\3[\3[\3[\3[\3[\3[\5[\u057d\n[\3\\\3\\\3"+
		"\\\3\\\5\\\u0583\n\\\3]\3]\3]\3]\3]\3]\3]\3]\3]\5]\u058e\n]\3^\3^\5^\u0592"+
		"\n^\3^\5^\u0595\n^\3^\3^\3^\3^\3^\3^\3^\3^\5^\u059f\n^\3^\3^\3^\3^\5^"+
		"\u05a5\n^\3^\5^\u05a8\n^\3_\3_\3`\3`\3`\5`\u05af\n`\3`\3`\3`\3`\3`\3`"+
		"\3`\3`\5`\u05b9\n`\3a\3a\5a\u05bd\na\3a\5a\u05c0\na\3a\5a\u05c3\na\3a"+
		"\3a\5a\u05c7\na\3a\3a\3a\5a\u05cc\na\5a\u05ce\na\3b\3b\5b\u05d2\nb\3b"+
		"\3b\5b\u05d6\nb\3b\3b\3c\3c\3c\3c\3c\5c\u05df\nc\3d\3d\3d\3e\3e\3e\3e"+
		"\3e\3e\7e\u05ea\ne\fe\16e\u05ed\13e\3f\3f\3f\3f\3f\5f\u05f4\nf\3g\3g\3"+
		"h\3h\5h\u05fa\nh\3i\3i\3j\3j\5j\u0600\nj\3k\3k\5k\u0604\nk\3l\5l\u0607"+
		"\nl\3l\3l\3l\3l\3l\3l\3m\5m\u0610\nm\3m\3m\3m\3m\3m\3m\3n\5n\u0619\nn"+
		"\3n\3n\3n\3n\3n\3o\5o\u0621\no\3p\3p\3q\3q\3q\3q\3q\3q\3r\5r\u062c\nr"+
		"\3r\3r\3s\3s\5s\u0632\ns\3s\3s\3s\3s\3s\3s\3s\3s\3s\5s\u063d\ns\3t\5t"+
		"\u0640\nt\3t\3t\3t\5t\u0645\nt\3t\3t\3t\3u\3u\3u\3u\3u\3u\3v\3v\3v\3v"+
		"\5v\u0654\nv\3v\3v\3v\3v\5v\u065a\nv\3w\3w\3w\3w\3w\7w\u0661\nw\fw\16"+
		"w\u0664\13w\3x\3x\3x\3x\3x\3x\3x\5x\u066d\nx\3y\3y\3y\3y\5y\u0673\ny\3"+
		"y\3y\3y\3y\3y\3y\5y\u067b\ny\3y\3y\5y\u067f\ny\3z\3z\5z\u0683\nz\3z\3"+
		"z\3z\5z\u0688\nz\3z\3z\3z\5z\u068d\nz\3z\3z\3z\3z\3z\7z\u0694\nz\fz\16"+
		"z\u0697\13z\3{\3{\5{\u069b\n{\3|\3|\5|\u069f\n|\3}\3}\3}\3}\3~\3~\3\177"+
		"\3\177\3\177\3\177\3\u0080\3\u0080\5\u0080\u06ad\n\u0080\3\u0080\3\u0080"+
		"\7\u0080\u06b1\n\u0080\f\u0080\16\u0080\u06b4\13\u0080\3\u0081\3\u0081"+
		"\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081"+
		"\3\u0081\5\u0081\u06c2\n\u0081\3\u0082\3\u0082\3\u0082\3\u0082\3\u0082"+
		"\3\u0082\7\u0082\u06ca\n\u0082\f\u0082\16\u0082\u06cd\13\u0082\3\u0083"+
		"\3\u0083\5\u0083\u06d1\n\u0083\3\u0084\3\u0084\3\u0084\3\u0084\3\u0084"+
		"\3\u0084\5\u0084\u06d9\n\u0084\3\u0085\3\u0085\3\u0085\3\u0086\3\u0086"+
		"\3\u0086\5\u0086\u06e1\n\u0086\3\u0086\3\u0086\3\u0086\3\u0086\5\u0086"+
		"\u06e7\n\u0086\3\u0086\3\u0086\3\u0086\3\u0086\3\u0086\5\u0086\u06ee\n"+
		"\u0086\3\u0086\3\u0086\5\u0086\u06f2\n\u0086\7\u0086\u06f4\n\u0086\f\u0086"+
		"\16\u0086\u06f7\13\u0086\3\u0087\3\u0087\3\u0087\3\u0087\5\u0087\u06fd"+
		"\n\u0087\3\u0087\5\u0087\u0700\n\u0087\3\u0087\5\u0087\u0703\n\u0087\3"+
		"\u0087\5\u0087\u0706\n\u0087\3\u0088\3\u0088\3\u0088\5\u0088\u070b\n\u0088"+
		"\3\u0089\3\u0089\5\u0089\u070f\n\u0089\3\u0089\5\u0089\u0712\n\u0089\3"+
		"\u0089\3\u0089\5\u0089\u0716\n\u0089\3\u0089\3\u0089\5\u0089\u071a\n\u0089"+
		"\3\u0089\3\u0089\3\u0089\5\u0089\u071f\n\u0089\3\u0089\5\u0089\u0722\n"+
		"\u0089\5\u0089\u0724\n\u0089\3\u008a\3\u008a\5\u008a\u0728\n\u008a\3\u008b"+
		"\3\u008b\3\u008c\3\u008c\3\u008d\5\u008d\u072f\n\u008d\3\u008d\3\u008d"+
		"\3\u008e\3\u008e\5\u008e\u0735\n\u008e\3\u008f\3\u008f\5\u008f\u0739\n"+
		"\u008f\3\u008f\3\u008f\3\u008f\3\u008f\5\u008f\u073f\n\u008f\3\u0090\3"+
		"\u0090\3\u0090\5\u0090\u0744\n\u0090\5\u0090\u0746\n\u0090\3\u0091\3\u0091"+
		"\3\u0091\3\u0091\5\u0091\u074c\n\u0091\3\u0091\3\u0091\5\u0091\u0750\n"+
		"\u0091\3\u0091\3\u0091\3\u0091\3\u0091\5\u0091\u0756\n\u0091\3\u0091\3"+
		"\u0091\3\u0091\3\u0091\3\u0091\5\u0091\u075d\n\u0091\3\u0091\3\u0091\5"+
		"\u0091\u0761\n\u0091\7\u0091\u0763\n\u0091\f\u0091\16\u0091\u0766\13\u0091"+
		"\3\u0092\3\u0092\3\u0092\3\u0092\5\u0092\u076c\n\u0092\3\u0093\3\u0093"+
		"\3\u0093\3\u0093\3\u0093\3\u0093\3\u0093\3\u0093\5\u0093\u0776\n\u0093"+
		"\3\u0093\3\u0093\5\u0093\u077a\n\u0093\7\u0093\u077c\n\u0093\f\u0093\16"+
		"\u0093\u077f\13\u0093\3\u0094\5\u0094\u0782\n\u0094\3\u0094\5\u0094\u0785"+
		"\n\u0094\3\u0094\3\u0094\3\u0094\3\u0094\5\u0094\u078b\n\u0094\3\u0095"+
		"\3\u0095\3\u0095\3\u0095\3\u0095\3\u0095\7\u0095\u0793\n\u0095\f\u0095"+
		"\16\u0095\u0796\13\u0095\3\u0096\5\u0096\u0799\n\u0096\3\u0096\3\u0096"+
		"\3\u0096\3\u0096\5\u0096\u079f\n\u0096\3\u0096\3\u0096\3\u0096\3\u0096"+
		"\3\u0096\3\u0096\5\u0096\u07a7\n\u0096\3\u0096\3\u0096\5\u0096\u07ab\n"+
		"\u0096\3\u0096\5\u0096\u07ae\n\u0096\3\u0096\3\u0096\5\u0096\u07b2\n\u0096"+
		"\3\u0096\3\u0096\3\u0096\5\u0096\u07b7\n\u0096\3\u0097\5\u0097\u07ba\n"+
		"\u0097\3\u0097\5\u0097\u07bd\n\u0097\3\u0097\3\u0097\5\u0097\u07c1\n\u0097"+
		"\3\u0097\3\u0097\3\u0098\5\u0098\u07c6\n\u0098\3\u0098\3\u0098\3\u0098"+
		"\3\u0098\3\u0098\3\u0098\3\u0098\3\u0098\5\u0098\u07d0\n\u0098\3\u0099"+
		"\3\u0099\3\u0099\3\u0099\3\u0099\5\u0099\u07d7\n\u0099\3\u009a\3\u009a"+
		"\3\u009a\5\u009a\u07dc\n\u009a\3\u009b\3\u009b\5\u009b\u07e0\n\u009b\3"+
		"\u009c\3\u009c\3\u009c\5\u009c\u07e5\n\u009c\3\u009c\3\u009c\3\u009c\3"+
		"\u009c\5\u009c\u07eb\n\u009c\7\u009c\u07ed\n\u009c\f\u009c\16\u009c\u07f0"+
		"\13\u009c\3\u009d\3\u009d\3\u009d\5\u009d\u07f5\n\u009d\3\u009d\3\u009d"+
		"\3\u009d\3\u009d\5\u009d\u07fb\n\u009d\3\u009e\3\u009e\5\u009e\u07ff\n"+
		"\u009e\3\u009f\3\u009f\3\u009f\5\u009f\u0804\n\u009f\3\u009f\3\u009f\3"+
		"\u00a0\3\u00a0\5\u00a0\u080a\n\u00a0\3\u00a0\3\u00a0\5\u00a0\u080e\n\u00a0"+
		"\3\u00a0\5\u00a0\u0811\n\u00a0\3\u00a0\3\u00a0\5\u00a0\u0815\n\u00a0\3"+
		"\u00a0\5\u00a0\u0818\n\u00a0\5\u00a0\u081a\n\u00a0\3\u00a1\5\u00a1\u081d"+
		"\n\u00a1\3\u00a1\3\u00a1\3\u00a2\3\u00a2\3\u00a3\3\u00a3\3\u00a4\3\u00a4"+
		"\5\u00a4\u0827\n\u00a4\3\u00a4\3\u00a4\3\u00a4\5\u00a4\u082c\n\u00a4\5"+
		"\u00a4\u082e\n\u00a4\3\u00a5\5\u00a5\u0831\n\u00a5\3\u00a5\5\u00a5\u0834"+
		"\n\u00a5\3\u00a5\5\u00a5\u0837\n\u00a5\3\u00a5\3\u00a5\3\u00a5\3\u00a5"+
		"\3\u00a5\3\u00a5\3\u00a5\5\u00a5\u0840\n\u00a5\3\u00a6\3\u00a6\3\u00a6"+
		"\3\u00a6\3\u00a6\3\u00a6\7\u00a6\u0848\n\u00a6\f\u00a6\16\u00a6\u084b"+
		"\13\u00a6\3\u00a7\3\u00a7\5\u00a7\u084f\n\u00a7\3\u00a7\5\u00a7\u0852"+
		"\n\u00a7\3\u00a7\3\u00a7\5\u00a7\u0856\n\u00a7\3\u00a7\5\u00a7\u0859\n"+
		"\u00a7\3\u00a7\5\u00a7\u085c\n\u00a7\3\u00a7\3\u00a7\5\u00a7\u0860\n\u00a7"+
		"\3\u00a8\3\u00a8\3\u00a8\3\u00a8\3\u00a8\7\u00a8\u0867\n\u00a8\f\u00a8"+
		"\16\u00a8\u086a\13\u00a8\3\u00a9\3\u00a9\3\u00aa\3\u00aa\3\u00aa\3\u00aa"+
		"\3\u00ab\3\u00ab\3\u00ab\3\u00ac\3\u00ac\3\u00ac\5\u00ac\u0878\n\u00ac"+
		"\3\u00ac\3\u00ac\3\u00ac\3\u00ac\5\u00ac\u087e\n\u00ac\7\u00ac\u0880\n"+
		"\u00ac\f\u00ac\16\u00ac\u0883\13\u00ac\3\u00ad\5\u00ad\u0886\n\u00ad\3"+
		"\u00ad\3\u00ad\5\u00ad\u088a\n\u00ad\3\u00ad\3\u00ad\5\u00ad\u088e\n\u00ad"+
		"\3\u00ad\3\u00ad\5\u00ad\u0892\n\u00ad\3\u00ad\3\u00ad\5\u00ad\u0896\n"+
		"\u00ad\3\u00ad\3\u00ad\5\u00ad\u089a\n\u00ad\3\u00ae\5\u00ae\u089d\n\u00ae"+
		"\3\u00ae\3\u00ae\5\u00ae\u08a1\n\u00ae\3\u00af\3\u00af\3\u00b0\3\u00b0"+
		"\3\u00b1\3\u00b1\3\u00b1\3\u00b2\3\u00b2\5\u00b2\u08ac\n\u00b2\3\u00b3"+
		"\3\u00b3\5\u00b3\u08b0\n\u00b3\3\u00b4\3\u00b4\3\u00b4\3\u00b5\3\u00b5"+
		"\5\u00b5\u08b7\n\u00b5\3\u00b5\3\u00b5\5\u00b5\u08bb\n\u00b5\3\u00b5\3"+
		"\u00b5\3\u00b5\5\u00b5\u08c0\n\u00b5\3\u00b6\3\u00b6\3\u00b6\5\u00b6\u08c5"+
		"\n\u00b6\3\u00b6\3\u00b6\3\u00b6\3\u00b6\3\u00b6\5\u00b6\u08cc\n\u00b6"+
		"\3\u00b7\3\u00b7\5\u00b7\u08d0\n\u00b7\3\u00b8\3\u00b8\3\u00b8\3\u00b9"+
		"\3\u00b9\3\u00b9\5\u00b9\u08d8\n\u00b9\3\u00b9\3\u00b9\3\u00b9\3\u00b9"+
		"\5\u00b9\u08de\n\u00b9\5\u00b9\u08e0\n\u00b9\3\u00ba\3\u00ba\3\u00ba\3"+
		"\u00ba\3\u00ba\3\u00ba\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\7\u00bb\u08ee\n\u00bb\f\u00bb\16\u00bb\u08f1\13\u00bb\3\u00bc\3\u00bc"+
		"\5\u00bc\u08f5\n\u00bc\3\u00bd\3\u00bd\5\u00bd\u08f9\n\u00bd\3\u00bd\5"+
		"\u00bd\u08fc\n\u00bd\3\u00bd\3\u00bd\5\u00bd\u0900\n\u00bd\3\u00bd\3\u00bd"+
		"\3\u00bd\3\u00bd\5\u00bd\u0906\n\u00bd\3\u00bd\5\u00bd\u0909\n\u00bd\3"+
		"\u00bd\3\u00bd\5\u00bd\u090d\n\u00bd\3\u00bd\3\u00bd\3\u00bd\3\u00bd\3"+
		"\u00bd\3\u00bd\3\u00bd\3\u00bd\5\u00bd\u0917\n\u00bd\3\u00bd\5\u00bd\u091a"+
		"\n\u00bd\3\u00bd\3\u00bd\3\u00bd\3\u00bd\3\u00bd\3\u00bd\5\u00bd\u0922"+
		"\n\u00bd\3\u00bd\3\u00bd\3\u00bd\5\u00bd\u0927\n\u00bd\3\u00be\3\u00be"+
		"\3\u00be\5\u00be\u092c\n\u00be\3\u00be\3\u00be\3\u00bf\3\u00bf\3\u00bf"+
		"\3\u00bf\5\u00bf\u0934\n\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf"+
		"\5\u00bf\u093b\n\u00bf\3\u00bf\3\u00bf\5\u00bf\u093f\n\u00bf\3\u00c0\3"+
		"\u00c0\3\u00c1\3\u00c1\3\u00c1\5\u00c1\u0946\n\u00c1\3\u00c1\3\u00c1\3"+
		"\u00c1\3\u00c1\5\u00c1\u094c\n\u00c1\7\u00c1\u094e\n\u00c1\f\u00c1\16"+
		"\u00c1\u0951\13\u00c1\3\u00c2\3\u00c2\3\u00c2\5\u00c2\u0956\n\u00c2\3"+
		"\u00c3\3\u00c3\3\u00c3\3\u00c3\3\u00c3\3\u00c3\3\u00c3\5\u00c3\u095f\n"+
		"\u00c3\3\u00c3\3\u00c3\5\u00c3\u0963\n\u00c3\3\u00c4\5\u00c4\u0966\n\u00c4"+
		"\3\u00c4\3\u00c4\3\u00c4\3\u00c5\3\u00c5\3\u00c5\3\u00c5\3\u00c5\3\u00c6"+
		"\3\u00c6\3\u00c6\3\u00c6\3\u00c7\3\u00c7\5\u00c7\u0976\n\u00c7\3\u00c7"+
		"\3\u00c7\3\u00c7\3\u00c8\3\u00c8\5\u00c8\u097d\n\u00c8\3\u00c9\3\u00c9"+
		"\3\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00ca\5\u00ca\u0986\n\u00ca\3\u00ca"+
		"\3\u00ca\3\u00ca\3\u00ca\5\u00ca\u098c\n\u00ca\3\u00ca\3\u00ca\5\u00ca"+
		"\u0990\n\u00ca\3\u00ca\5\u00ca\u0993\n\u00ca\3\u00cb\3\u00cb\5\u00cb\u0997"+
		"\n\u00cb\3\u00cc\3\u00cc\5\u00cc\u099b\n\u00cc\3\u00cd\3\u00cd\3\u00cd"+
		"\5\u00cd\u09a0\n\u00cd\3\u00cd\3\u00cd\3\u00ce\3\u00ce\3\u00ce\5\u00ce"+
		"\u09a7\n\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\5\u00ce\u09ad\n\u00ce\7"+
		"\u00ce\u09af\n\u00ce\f\u00ce\16\u00ce\u09b2\13\u00ce\3\u00cf\3\u00cf\3"+
		"\u00cf\3\u00cf\3\u00cf\3\u00cf\5\u00cf\u09ba\n\u00cf\3\u00d0\3\u00d0\3"+
		"\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0"+
		"\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0"+
		"\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0"+
		"\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0"+
		"\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0"+
		"\3\u00d0\3\u00d0\3\u00d0\3\u00d0\5\u00d0\u09ef\n\u00d0\3\u00d1\3\u00d1"+
		"\3\u00d1\3\u00d1\3\u00d1\3\u00d1\3\u00d1\3\u00d1\5\u00d1\u09f9\n\u00d1"+
		"\3\u00d2\3\u00d2\3\u00d3\3\u00d3\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4"+
		"\5\u00d4\u0a04\n\u00d4\3\u00d4\2$\",\66LVXZ\\`bdfhjlt\u0080\u0092\u00c8"+
		"\u00ec\u00f2\u00fe\u0102\u010a\u0120\u0124\u0128\u0136\u014a\u014e\u0156"+
		"\u0174\u0180\u019a\u00d5\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&("+
		"*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084"+
		"\u0086\u0088\u008a\u008c\u008e\u0090\u0092\u0094\u0096\u0098\u009a\u009c"+
		"\u009e\u00a0\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4"+
		"\u00b6\u00b8\u00ba\u00bc\u00be\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc"+
		"\u00ce\u00d0\u00d2\u00d4\u00d6\u00d8\u00da\u00dc\u00de\u00e0\u00e2\u00e4"+
		"\u00e6\u00e8\u00ea\u00ec\u00ee\u00f0\u00f2\u00f4\u00f6\u00f8\u00fa\u00fc"+
		"\u00fe\u0100\u0102\u0104\u0106\u0108\u010a\u010c\u010e\u0110\u0112\u0114"+
		"\u0116\u0118\u011a\u011c\u011e\u0120\u0122\u0124\u0126\u0128\u012a\u012c"+
		"\u012e\u0130\u0132\u0134\u0136\u0138\u013a\u013c\u013e\u0140\u0142\u0144"+
		"\u0146\u0148\u014a\u014c\u014e\u0150\u0152\u0154\u0156\u0158\u015a\u015c"+
		"\u015e\u0160\u0162\u0164\u0166\u0168\u016a\u016c\u016e\u0170\u0172\u0174"+
		"\u0176\u0178\u017a\u017c\u017e\u0180\u0182\u0184\u0186\u0188\u018a\u018c"+
		"\u018e\u0190\u0192\u0194\u0196\u0198\u019a\u019c\u019e\u01a0\u01a2\u01a4"+
		"\u01a6\2\16\4\2llpp\5\2\f\rfhln\3\2{|\5\2ppsz}~\7\2//::DDJJQQ\5\2--\67"+
		"\67[[\4\2!!]]\4\2\16\16ll\5\2  MMXX\4\2\61\61@@\3\2AC\4\2\60\60SS\2\u0b26"+
		"\2\u01a9\3\2\2\2\4\u01ad\3\2\2\2\6\u01af\3\2\2\2\b\u01b1\3\2\2\2\n\u01be"+
		"\3\2\2\2\f\u01c0\3\2\2\2\16\u01c5\3\2\2\2\20\u01c8\3\2\2\2\22\u01ce\3"+
		"\2\2\2\24\u01d3\3\2\2\2\26\u01db\3\2\2\2\30\u01ea\3\2\2\2\32\u01f4\3\2"+
		"\2\2\34\u01f8\3\2\2\2\36\u0203\3\2\2\2 \u0205\3\2\2\2\"\u0216\3\2\2\2"+
		"$\u0227\3\2\2\2&\u022d\3\2\2\2(\u0239\3\2\2\2*\u023b\3\2\2\2,\u023d\3"+
		"\2\2\2.\u024f\3\2\2\2\60\u0255\3\2\2\2\62\u025c\3\2\2\2\64\u025e\3\2\2"+
		"\2\66\u02ad\3\2\2\28\u02da\3\2\2\2:\u02dc\3\2\2\2<\u02de\3\2\2\2>\u02f6"+
		"\3\2\2\2@\u0314\3\2\2\2B\u0316\3\2\2\2D\u0330\3\2\2\2F\u0332\3\2\2\2H"+
		"\u0336\3\2\2\2J\u033f\3\2\2\2L\u0341\3\2\2\2N\u035a\3\2\2\2P\u0368\3\2"+
		"\2\2R\u036a\3\2\2\2T\u0375\3\2\2\2V\u0377\3\2\2\2X\u0385\3\2\2\2Z\u0396"+
		"\3\2\2\2\\\u03a4\3\2\2\2^\u03b0\3\2\2\2`\u03b2\3\2\2\2b\u03c6\3\2\2\2"+
		"d\u03d4\3\2\2\2f\u03df\3\2\2\2h\u03ea\3\2\2\2j\u03f5\3\2\2\2l\u0403\3"+
		"\2\2\2n\u0418\3\2\2\2p\u0421\3\2\2\2r\u0423\3\2\2\2t\u0425\3\2\2\2v\u0430"+
		"\3\2\2\2x\u044d\3\2\2\2z\u0463\3\2\2\2|\u0466\3\2\2\2~\u046a\3\2\2\2\u0080"+
		"\u0470\3\2\2\2\u0082\u048e\3\2\2\2\u0084\u04a0\3\2\2\2\u0086\u04c5\3\2"+
		"\2\2\u0088\u04c9\3\2\2\2\u008a\u04cc\3\2\2\2\u008c\u04d3\3\2\2\2\u008e"+
		"\u04e5\3\2\2\2\u0090\u04e7\3\2\2\2\u0092\u04e9\3\2\2\2\u0094\u04fc\3\2"+
		"\2\2\u0096\u0506\3\2\2\2\u0098\u0508\3\2\2\2\u009a\u051f\3\2\2\2\u009c"+
		"\u0521\3\2\2\2\u009e\u052c\3\2\2\2\u00a0\u052e\3\2\2\2\u00a2\u0537\3\2"+
		"\2\2\u00a4\u0540\3\2\2\2\u00a6\u0542\3\2\2\2\u00a8\u0544\3\2\2\2\u00aa"+
		"\u0546\3\2\2\2\u00ac\u054b\3\2\2\2\u00ae\u0551\3\2\2\2\u00b0\u055a\3\2"+
		"\2\2\u00b2\u0563\3\2\2\2\u00b4\u057c\3\2\2\2\u00b6\u0582\3\2\2\2\u00b8"+
		"\u058d\3\2\2\2\u00ba\u05a7\3\2\2\2\u00bc\u05a9\3\2\2\2\u00be\u05b8\3\2"+
		"\2\2\u00c0\u05cd\3\2\2\2\u00c2\u05cf\3\2\2\2\u00c4\u05de\3\2\2\2\u00c6"+
		"\u05e0\3\2\2\2\u00c8\u05e3\3\2\2\2\u00ca\u05f3\3\2\2\2\u00cc\u05f5\3\2"+
		"\2\2\u00ce\u05f9\3\2\2\2\u00d0\u05fb\3\2\2\2\u00d2\u05ff\3\2\2\2\u00d4"+
		"\u0603\3\2\2\2\u00d6\u0606\3\2\2\2\u00d8\u060f\3\2\2\2\u00da\u0618\3\2"+
		"\2\2\u00dc\u0620\3\2\2\2\u00de\u0622\3\2\2\2\u00e0\u0624\3\2\2\2\u00e2"+
		"\u062b\3\2\2\2\u00e4\u063c\3\2\2\2\u00e6\u063f\3\2\2\2\u00e8\u0649\3\2"+
		"\2\2\u00ea\u0659\3\2\2\2\u00ec\u065b\3\2\2\2\u00ee\u066c\3\2\2\2\u00f0"+
		"\u067e\3\2\2\2\u00f2\u0687\3\2\2\2\u00f4\u0698\3\2\2\2\u00f6\u069e\3\2"+
		"\2\2\u00f8\u06a0\3\2\2\2\u00fa\u06a4\3\2\2\2\u00fc\u06a6\3\2\2\2\u00fe"+
		"\u06aa\3\2\2\2\u0100\u06c1\3\2\2\2\u0102\u06c3\3\2\2\2\u0104\u06ce\3\2"+
		"\2\2\u0106\u06d8\3\2\2\2\u0108\u06da\3\2\2\2\u010a\u06e6\3\2\2\2\u010c"+
		"\u06f8\3\2\2\2\u010e\u0707\3\2\2\2\u0110\u0723\3\2\2\2\u0112\u0725\3\2"+
		"\2\2\u0114\u0729\3\2\2\2\u0116\u072b\3\2\2\2\u0118\u072e\3\2\2\2\u011a"+
		"\u0732\3\2\2\2\u011c\u073e\3\2\2\2\u011e\u0745\3\2\2\2\u0120\u0755\3\2"+
		"\2\2\u0122\u076b\3\2\2\2\u0124\u076d\3\2\2\2\u0126\u078a\3\2\2\2\u0128"+
		"\u078c\3\2\2\2\u012a\u07b6\3\2\2\2\u012c\u07b9\3\2\2\2\u012e\u07cf\3\2"+
		"\2\2\u0130\u07d6\3\2\2\2\u0132\u07db\3\2\2\2\u0134\u07df\3\2\2\2\u0136"+
		"\u07e1\3\2\2\2\u0138\u07fa\3\2\2\2\u013a\u07fe\3\2\2\2\u013c\u0800\3\2"+
		"\2\2\u013e\u0819\3\2\2\2\u0140\u081c\3\2\2\2\u0142\u0820\3\2\2\2\u0144"+
		"\u0822\3\2\2\2\u0146\u082d\3\2\2\2\u0148\u083f\3\2\2\2\u014a\u0841\3\2"+
		"\2\2\u014c\u085f\3\2\2\2\u014e\u0861\3\2\2\2\u0150\u086b\3\2\2\2\u0152"+
		"\u086d\3\2\2\2\u0154\u0871\3\2\2\2\u0156\u0874\3\2\2\2\u0158\u0899\3\2"+
		"\2\2\u015a\u08a0\3\2\2\2\u015c\u08a2\3\2\2\2\u015e\u08a4\3\2\2\2\u0160"+
		"\u08a6\3\2\2\2\u0162\u08a9\3\2\2\2\u0164\u08ad\3\2\2\2\u0166\u08b1\3\2"+
		"\2\2\u0168\u08bf\3\2\2\2\u016a\u08cb\3\2\2\2\u016c\u08cf\3\2\2\2\u016e"+
		"\u08d1\3\2\2\2\u0170\u08df\3\2\2\2\u0172\u08e1\3\2\2\2\u0174\u08e7\3\2"+
		"\2\2\u0176\u08f4\3\2\2\2\u0178\u0926\3\2\2\2\u017a\u0928\3\2\2\2\u017c"+
		"\u093e\3\2\2\2\u017e\u0940\3\2\2\2\u0180\u0942\3\2\2\2\u0182\u0955\3\2"+
		"\2\2\u0184\u0962\3\2\2\2\u0186\u0965\3\2\2\2\u0188\u096a\3\2\2\2\u018a"+
		"\u096f\3\2\2\2\u018c\u0973\3\2\2\2\u018e\u097a\3\2\2\2\u0190\u097e\3\2"+
		"\2\2\u0192\u0992\3\2\2\2\u0194\u0994\3\2\2\2\u0196\u099a\3\2\2\2\u0198"+
		"\u099c\3\2\2\2\u019a\u09a3\3\2\2\2\u019c\u09b9\3\2\2\2\u019e\u09ee\3\2"+
		"\2\2\u01a0\u09f8\3\2\2\2\u01a2\u09fa\3\2\2\2\u01a4\u09fc\3\2\2\2\u01a6"+
		"\u0a03\3\2\2\2\u01a8\u01aa\5\u0092J\2\u01a9\u01a8\3\2\2\2\u01a9\u01aa"+
		"\3\2\2\2\u01aa\u01ab\3\2\2\2\u01ab\u01ac\7\2\2\3\u01ac\3\3\2\2\2\u01ad"+
		"\u01ae\7\3\2\2\u01ae\5\3\2\2\2\u01af\u01b0\7\4\2\2\u01b0\7\3\2\2\2\u01b1"+
		"\u01b2\7\5\2\2\u01b2\u01b3\5\u0080A\2\u01b3\u01b4\7\6\2\2\u01b4\t\3\2"+
		"\2\2\u01b5\u01bf\5\22\n\2\u01b6\u01b7\5\4\3\2\u01b7\u01b8\5\30\r\2\u01b8"+
		"\u01b9\5\6\4\2\u01b9\u01bf\3\2\2\2\u01ba\u01bb\5\4\3\2\u01bb\u01bc\5\f"+
		"\7\2\u01bc\u01bd\5\6\4\2\u01bd\u01bf\3\2\2\2\u01be\u01b5\3\2\2\2\u01be"+
		"\u01b6\3\2\2\2\u01be\u01ba\3\2\2\2\u01bf\13\3\2\2\2\u01c0\u01c1\7\7\2"+
		"\2\u01c1\u01c2\7`\2\2\u01c2\u01c3\5\16\b\2\u01c3\u01c4\7a\2\2\u01c4\r"+
		"\3\2\2\2\u01c5\u01c6\5\u0134\u009b\2\u01c6\17\3\2\2\2\u01c7\u01c9\7\22"+
		"\2\2\u01c8\u01c7\3\2\2\2\u01c8\u01c9\3\2\2\2\u01c9\u01ca\3\2\2\2\u01ca"+
		"\u01cb\7\b\2\2\u01cb\u01cc\5\30\r\2\u01cc\u01cd\7\b\2\2\u01cd\21\3\2\2"+
		"\2\u01ce\u01cf\7\t\2\2\u01cf\u01d0\5\24\13\2\u01d0\u01d1\7a\2\2\u01d1"+
		"\u01d2\5\26\f\2\u01d2\23\3\2\2\2\u01d3\u01d4\5\4\3\2\u01d4\u01d5\7\u0091"+
		"\2\2\u01d5\u01d6\7\n\2\2\u01d6\u01d7\5\4\3\2\u01d7\u01d8\5\30\r\2\u01d8"+
		"\25\3\2\2\2\u01d9\u01dc\5\n\6\2\u01da\u01dc\5\b\5\2\u01db\u01d9\3\2\2"+
		"\2\u01db\u01da\3\2\2\2\u01dc\27\3\2\2\2\u01dd\u01de\7\u0091\2\2\u01de"+
		"\u01df\7\u008e\2\2\u01df\u01eb\5\30\r\2\u01e0\u01e1\7\u0091\2\2\u01e1"+
		"\u01e2\7`\2\2\u01e2\u01e3\7\u0091\2\2\u01e3\u01e4\7\13\2\2\u01e4\u01eb"+
		"\5\30\r\2\u01e5\u01e6\7\u0091\2\2\u01e6\u01e7\7`\2\2\u01e7\u01e8\7\u0091"+
		"\2\2\u01e8\u01eb\7a\2\2\u01e9\u01eb\7\u0091\2\2\u01ea\u01dd\3\2\2\2\u01ea"+
		"\u01e0\3\2\2\2\u01ea\u01e5\3\2\2\2\u01ea\u01e9\3\2\2\2\u01eb\31\3\2\2"+
		"\2\u01ec\u01f5\5\u01a0\u00d1\2\u01ed\u01f5\7P\2\2\u01ee\u01ef\7`\2\2\u01ef"+
		"\u01f0\5t;\2\u01f0\u01f1\7a\2\2\u01f1\u01f5\3\2\2\2\u01f2\u01f5\5\34\17"+
		"\2\u01f3\u01f5\5$\23\2\u01f4\u01ec\3\2\2\2\u01f4\u01ed\3\2\2\2\u01f4\u01ee"+
		"\3\2\2\2\u01f4\u01f2\3\2\2\2\u01f4\u01f3\3\2\2\2\u01f5\33\3\2\2\2\u01f6"+
		"\u01f9\5\36\20\2\u01f7\u01f9\5 \21\2\u01f8\u01f6\3\2\2\2\u01f8\u01f7\3"+
		"\2\2\2\u01f9\35\3\2\2\2\u01fa\u0204\7\u0091\2\2\u01fb\u0204\5\u016e\u00b8"+
		"\2\u01fc\u0204\5\u0160\u00b1\2\u01fd\u0204\5\u0170\u00b9\2\u01fe\u01ff"+
		"\7n\2\2\u01ff\u0204\5\u013a\u009e\2\u0200\u0201\7n\2\2\u0201\u0204\5\u00b8"+
		"]\2\u0202\u0204\5\u017c\u00bf\2\u0203\u01fa\3\2\2\2\u0203\u01fb\3\2\2"+
		"\2\u0203\u01fc\3\2\2\2\u0203\u01fd\3\2\2\2\u0203\u01fe\3\2\2\2\u0203\u0200"+
		"\3\2\2\2\u0203\u0202\3\2\2\2\u0204\37\3\2\2\2\u0205\u0207\5\"\22\2\u0206"+
		"\u0208\7O\2\2\u0207\u0206\3\2\2\2\u0207\u0208\3\2\2\2\u0208\u0209\3\2"+
		"\2\2\u0209\u020a\5\36\20\2\u020a!\3\2\2\2\u020b\u020c\b\22\1\2\u020c\u0217"+
		"\7\u008c\2\2\u020d\u020e\5\u00b6\\\2\u020e\u020f\7\u008c\2\2\u020f\u0217"+
		"\3\2\2\2\u0210\u0211\5\u00ceh\2\u0211\u0212\7\u008c\2\2\u0212\u0217\3"+
		"\2\2\2\u0213\u0214\5\u00b8]\2\u0214\u0215\7\u008c\2\2\u0215\u0217\3\2"+
		"\2\2\u0216\u020b\3\2\2\2\u0216\u020d\3\2\2\2\u0216\u0210\3\2\2\2\u0216"+
		"\u0213\3\2\2\2\u0217\u0224\3\2\2\2\u0218\u0219\f\4\2\2\u0219\u021a\7\u0091"+
		"\2\2\u021a\u0223\7\u008c\2\2\u021b\u021d\f\3\2\2\u021c\u021e\7O\2\2\u021d"+
		"\u021c\3\2\2\2\u021d\u021e\3\2\2\2\u021e\u021f\3\2\2\2\u021f\u0220\5\u017a"+
		"\u00be\2\u0220\u0221\7\u008c\2\2\u0221\u0223\3\2\2\2\u0222\u0218\3\2\2"+
		"\2\u0222\u021b\3\2\2\2\u0223\u0226\3\2\2\2\u0224\u0222\3\2\2\2\u0224\u0225"+
		"\3\2\2\2\u0225#\3\2\2\2\u0226\u0224\3\2\2\2\u0227\u0229\5&\24\2\u0228"+
		"\u022a\5\64\33\2\u0229\u0228\3\2\2\2\u0229\u022a\3\2\2\2\u022a\u022b\3"+
		"\2\2\2\u022b\u022c\5~@\2\u022c%\3\2\2\2\u022d\u022f\7b\2\2\u022e\u0230"+
		"\5(\25\2\u022f\u022e\3\2\2\2\u022f\u0230\3\2\2\2\u0230\u0231\3\2\2\2\u0231"+
		"\u0232\7c\2\2\u0232\'\3\2\2\2\u0233\u023a\5*\26\2\u0234\u023a\5,\27\2"+
		"\u0235\u0236\5*\26\2\u0236\u0237\7\u0087\2\2\u0237\u0238\5,\27\2\u0238"+
		"\u023a\3\2\2\2\u0239\u0233\3\2\2\2\u0239\u0234\3\2\2\2\u0239\u0235\3\2"+
		"\2\2\u023a)\3\2\2\2\u023b\u023c\t\2\2\2\u023c+\3\2\2\2\u023d\u023e\b\27"+
		"\1\2\u023e\u0240\5.\30\2\u023f\u0241\7\u0090\2\2\u0240\u023f\3\2\2\2\u0240"+
		"\u0241\3\2\2\2\u0241\u024a\3\2\2\2\u0242\u0243\f\3\2\2\u0243\u0244\7\u0087"+
		"\2\2\u0244\u0246\5.\30\2\u0245\u0247\7\u0090\2\2\u0246\u0245\3\2\2\2\u0246"+
		"\u0247\3\2\2\2\u0247\u0249\3\2\2\2\u0248\u0242\3\2\2\2\u0249\u024c\3\2"+
		"\2\2\u024a\u0248\3\2\2\2\u024a\u024b\3\2\2\2\u024b-\3\2\2\2\u024c\u024a"+
		"\3\2\2\2\u024d\u0250\5\60\31\2\u024e\u0250\5\62\32\2\u024f\u024d\3\2\2"+
		"\2\u024f\u024e\3\2\2\2\u0250/\3\2\2\2\u0251\u0256\7\u0091\2\2\u0252\u0253"+
		"\7l\2\2\u0253\u0256\7\u0091\2\2\u0254\u0256\7P\2\2\u0255\u0251\3\2\2\2"+
		"\u0255\u0252\3\2\2\2\u0255\u0254\3\2\2\2\u0256\61\3\2\2\2\u0257\u0258"+
		"\7\u0091\2\2\u0258\u025d\5\u0130\u0099\2\u0259\u025a\7l\2\2\u025a\u025b"+
		"\7\u0091\2\2\u025b\u025d\5\u0130\u0099\2\u025c\u0257\3\2\2\2\u025c\u0259"+
		"\3\2\2\2\u025d\63\3\2\2\2\u025e\u025f\7`\2\2\u025f\u0260\5\u0126\u0094"+
		"\2\u0260\u0262\7a\2\2\u0261\u0263\7:\2\2\u0262\u0261\3\2\2\2\u0262\u0263"+
		"\3\2\2\2\u0263\u0265\3\2\2\2\u0264\u0266\5\u0196\u00cc\2\u0265\u0264\3"+
		"\2\2\2\u0265\u0266\3\2\2\2\u0266\u0268\3\2\2\2\u0267\u0269\5\u00ecw\2"+
		"\u0268\u0267\3\2\2\2\u0268\u0269\3\2\2\2\u0269\u026b\3\2\2\2\u026a\u026c"+
		"\5\u010e\u0088\2\u026b\u026a\3\2\2\2\u026b\u026c\3\2\2\2\u026c\65\3\2"+
		"\2\2\u026d\u026e\b\34\1\2\u026e\u02ae\5\32\16\2\u026f\u0270\5\u00b4[\2"+
		"\u0270\u0272\7`\2\2\u0271\u0273\5<\37\2\u0272\u0271\3\2\2\2\u0272\u0273"+
		"\3\2\2\2\u0273\u0274\3\2\2\2\u0274\u0275\7a\2\2\u0275\u02ae\3\2\2\2\u0276"+
		"\u0277\5\u0184\u00c3\2\u0277\u0279\7`\2\2\u0278\u027a\5<\37\2\u0279\u0278"+
		"\3\2\2\2\u0279\u027a\3\2\2\2\u027a\u027b\3\2\2\2\u027b\u027c\7a\2\2\u027c"+
		"\u02ae\3\2\2\2\u027d\u027e\5\u00b4[\2\u027e\u027f\5\u0138\u009d\2\u027f"+
		"\u02ae\3\2\2\2\u0280\u0281\5\u0184\u00c3\2\u0281\u0282\5\u0138\u009d\2"+
		"\u0282\u02ae\3\2\2\2\u0283\u0284\7*\2\2\u0284\u0285\7q\2\2\u0285\u0286"+
		"\5\u011a\u008e\2\u0286\u0287\7r\2\2\u0287\u0288\7`\2\2\u0288\u0289\5t"+
		";\2\u0289\u028a\7a\2\2\u028a\u02ae\3\2\2\2\u028b\u028c\7L\2\2\u028c\u028d"+
		"\7q\2\2\u028d\u028e\5\u011a\u008e\2\u028e\u028f\7r\2\2\u028f\u0290\7`"+
		"\2\2\u0290\u0291\5t;\2\u0291\u0292\7a\2\2\u0292\u02ae\3\2\2\2\u0293\u0294"+
		"\7E\2\2\u0294\u0295\7q\2\2\u0295\u0296\5\u011a\u008e\2\u0296\u0297\7r"+
		"\2\2\u0297\u0298\7`\2\2\u0298\u0299\5t;\2\u0299\u029a\7a\2\2\u029a\u02ae"+
		"\3\2\2\2\u029b\u029c\7#\2\2\u029c\u029d\7q\2\2\u029d\u029e\5\u011a\u008e"+
		"\2\u029e\u029f\7r\2\2\u029f\u02a0\7`\2\2\u02a0\u02a1\5t;\2\u02a1\u02a2"+
		"\7a\2\2\u02a2\u02ae\3\2\2\2\u02a3\u02a4\5:\36\2\u02a4\u02a5\7`\2\2\u02a5"+
		"\u02a6\5t;\2\u02a6\u02a7\7a\2\2\u02a7\u02ae\3\2\2\2\u02a8\u02a9\5:\36"+
		"\2\u02a9\u02aa\7`\2\2\u02aa\u02ab\5\u011a\u008e\2\u02ab\u02ac\7a\2\2\u02ac"+
		"\u02ae\3\2\2\2\u02ad\u026d\3\2\2\2\u02ad\u026f\3\2\2\2\u02ad\u0276\3\2"+
		"\2\2\u02ad\u027d\3\2\2\2\u02ad\u0280\3\2\2\2\u02ad\u0283\3\2\2\2\u02ad"+
		"\u028b\3\2\2\2\u02ad\u0293\3\2\2\2\u02ad\u029b\3\2\2\2\u02ad\u02a3\3\2"+
		"\2\2\u02ad\u02a8\3\2\2\2\u02ae\u02d7\3\2\2\2\u02af\u02b0\f\25\2\2\u02b0"+
		"\u02b1\7b\2\2\u02b1\u02b2\5t;\2\u02b2\u02b3\7c\2\2\u02b3\u02d6\3\2\2\2"+
		"\u02b4\u02b5\f\24\2\2\u02b5\u02b6\7b\2\2\u02b6\u02b7\5\u0138\u009d\2\u02b7"+
		"\u02b8\7c\2\2\u02b8\u02d6\3\2\2\2\u02b9\u02ba\f\23\2\2\u02ba\u02bc\7`"+
		"\2\2\u02bb\u02bd\5<\37\2\u02bc\u02bb\3\2\2\2\u02bc\u02bd\3\2\2\2\u02bd"+
		"\u02be\3\2\2\2\u02be\u02d6\7a\2\2\u02bf\u02c0\f\16\2\2\u02c0\u02c2\7\u008e"+
		"\2\2\u02c1\u02c3\7O\2\2\u02c2\u02c1\3\2\2\2\u02c2\u02c3\3\2\2\2\u02c3"+
		"\u02c4\3\2\2\2\u02c4\u02d6\5\34\17\2\u02c5\u02c6\f\r\2\2\u02c6\u02c8\7"+
		"\u0089\2\2\u02c7\u02c9\7O\2\2\u02c8\u02c7\3\2\2\2\u02c8\u02c9\3\2\2\2"+
		"\u02c9\u02ca\3\2\2\2\u02ca\u02d6\5\34\17\2\u02cb\u02cc\f\f\2\2\u02cc\u02cd"+
		"\7\u008e\2\2\u02cd\u02d6\5> \2\u02ce\u02cf\f\13\2\2\u02cf\u02d0\7\u0089"+
		"\2\2\u02d0\u02d6\5> \2\u02d1\u02d2\f\n\2\2\u02d2\u02d6\7\u0085\2\2\u02d3"+
		"\u02d4\f\t\2\2\u02d4\u02d6\7\u0086\2\2\u02d5\u02af\3\2\2\2\u02d5\u02b4"+
		"\3\2\2\2\u02d5\u02b9\3\2\2\2\u02d5\u02bf\3\2\2\2\u02d5\u02c5\3\2\2\2\u02d5"+
		"\u02cb\3\2\2\2\u02d5\u02ce\3\2\2\2\u02d5\u02d1\3\2\2\2\u02d5\u02d3\3\2"+
		"\2\2\u02d6\u02d9\3\2\2\2\u02d7\u02d5\3\2\2\2\u02d7\u02d8\3\2\2\2\u02d8"+
		"\67\3\2\2\2\u02d9\u02d7\3\2\2\2\u02da\u02db\7V\2\2\u02db9\3\2\2\2\u02dc"+
		"\u02dd\7V\2\2\u02dd;\3\2\2\2\u02de\u02df\5\u0136\u009c\2\u02df=\3\2\2"+
		"\2\u02e0\u02e2\5\"\22\2\u02e1\u02e0\3\2\2\2\u02e1\u02e2\3\2\2\2\u02e2"+
		"\u02e3\3\2\2\2\u02e3\u02e4\5\u00b6\\\2\u02e4\u02e5\7\u008c\2\2\u02e5\u02e6"+
		"\7n\2\2\u02e6\u02e7\5\u00b6\\\2\u02e7\u02f7\3\2\2\2\u02e8\u02e9\5\"\22"+
		"\2\u02e9\u02ea\7O\2\2\u02ea\u02eb\5\u017a\u00be\2\u02eb\u02ec\7\u008c"+
		"\2\2\u02ec\u02ed\7n\2\2\u02ed\u02ee\5\u00b6\\\2\u02ee\u02f7\3\2\2\2\u02ef"+
		"\u02f1\5\"\22\2\u02f0\u02ef\3\2\2\2\u02f0\u02f1\3\2\2\2\u02f1\u02f2\3"+
		"\2\2\2\u02f2\u02f3\7n\2\2\u02f3\u02f7\5\u00b6\\\2\u02f4\u02f5\7n\2\2\u02f5"+
		"\u02f7\5\u00b8]\2\u02f6\u02e1\3\2\2\2\u02f6\u02e8\3\2\2\2\u02f6\u02f0"+
		"\3\2\2\2\u02f6\u02f4\3\2\2\2\u02f7?\3\2\2\2\u02f8\u0315\5\66\34\2\u02f9"+
		"\u02fa\7\u0085\2\2\u02fa\u0315\5T+\2\u02fb\u02fc\7\u0086\2\2\u02fc\u0315"+
		"\5T+\2\u02fd\u02fe\5B\"\2\u02fe\u02ff\5T+\2\u02ff\u0315\3\2\2\2\u0300"+
		"\u0301\7I\2\2\u0301\u0315\5@!\2\u0302\u0303\7I\2\2\u0303\u0304\7`\2\2"+
		"\u0304\u0305\5\u011a\u008e\2\u0305\u0306\7a\2\2\u0306\u0315\3\2\2\2\u0307"+
		"\u0308\7I\2\2\u0308\u0309\7\u0090\2\2\u0309\u030a\7`\2\2\u030a\u030b\7"+
		"\u0091\2\2\u030b\u0315\7a\2\2\u030c\u030d\7\26\2\2\u030d\u030e\7`\2\2"+
		"\u030e\u030f\5\u011a\u008e\2\u030f\u0310\7a\2\2\u0310\u0315\3\2\2\2\u0311"+
		"\u0315\5R*\2\u0312\u0315\5D#\2\u0313\u0315\5P)\2\u0314\u02f8\3\2\2\2\u0314"+
		"\u02f9\3\2\2\2\u0314\u02fb\3\2\2\2\u0314\u02fd\3\2\2\2\u0314\u0300\3\2"+
		"\2\2\u0314\u0302\3\2\2\2\u0314\u0307\3\2\2\2\u0314\u030c\3\2\2\2\u0314"+
		"\u0311\3\2\2\2\u0314\u0312\3\2\2\2\u0314\u0313\3\2\2\2\u0315A\3\2\2\2"+
		"\u0316\u0317\t\3\2\2\u0317C\3\2\2\2\u0318\u031a\7\u008c\2\2\u0319\u0318"+
		"\3\2\2\2\u0319\u031a\3\2\2\2\u031a\u031b\3\2\2\2\u031b\u031d\7<\2\2\u031c"+
		"\u031e\5F$\2\u031d\u031c\3\2\2\2\u031d\u031e\3\2\2\2\u031e\u031f\3\2\2"+
		"\2\u031f\u0321\5H%\2\u0320\u0322\5N(\2\u0321\u0320\3\2\2\2\u0321\u0322"+
		"\3\2\2\2\u0322\u0331\3\2\2\2\u0323\u0325\7\u008c\2\2\u0324\u0323\3\2\2"+
		"\2\u0324\u0325\3\2\2\2\u0325\u0326\3\2\2\2\u0326\u0328\7<\2\2\u0327\u0329"+
		"\5F$\2\u0328\u0327\3\2\2\2\u0328\u0329\3\2\2\2\u0329\u032a\3\2\2\2\u032a"+
		"\u032b\7`\2\2\u032b\u032c\5\u011a\u008e\2\u032c\u032e\7a\2\2\u032d\u032f"+
		"\5N(\2\u032e\u032d\3\2\2\2\u032e\u032f\3\2\2\2\u032f\u0331\3\2\2\2\u0330"+
		"\u0319\3\2\2\2\u0330\u0324\3\2\2\2\u0331E\3\2\2\2\u0332\u0333\7`\2\2\u0333"+
		"\u0334\5<\37\2\u0334\u0335\7a\2\2\u0335G\3\2\2\2\u0336\u0338\5\u00b0Y"+
		"\2\u0337\u0339\5J&\2\u0338\u0337\3\2\2\2\u0338\u0339\3\2\2\2\u0339I\3"+
		"\2\2\2\u033a\u033c\5\u0110\u0089\2\u033b\u033d\5J&\2\u033c\u033b\3\2\2"+
		"\2\u033c\u033d\3\2\2\2\u033d\u0340\3\2\2\2\u033e\u0340\5L\'\2\u033f\u033a"+
		"\3\2\2\2\u033f\u033e\3\2\2\2\u0340K\3\2\2\2\u0341\u0342\b\'\1\2\u0342"+
		"\u0343\7b\2\2\u0343\u0344\5t;\2\u0344\u0346\7c\2\2\u0345\u0347\5\u00ec"+
		"w\2\u0346\u0345\3\2\2\2\u0346\u0347\3\2\2\2\u0347\u0351\3\2\2\2\u0348"+
		"\u0349\f\3\2\2\u0349\u034a\7b\2\2\u034a\u034b\5v<\2\u034b\u034d\7c\2\2"+
		"\u034c\u034e\5\u00ecw\2\u034d\u034c\3\2\2\2\u034d\u034e\3\2\2\2\u034e"+
		"\u0350\3\2\2\2\u034f\u0348\3\2\2\2\u0350\u0353\3\2\2\2\u0351\u034f\3\2"+
		"\2\2\u0351\u0352\3\2\2\2\u0352M\3\2\2\2\u0353\u0351\3\2\2\2\u0354\u0356"+
		"\7`\2\2\u0355\u0357\5<\37\2\u0356\u0355\3\2\2\2\u0356\u0357\3\2\2\2\u0357"+
		"\u0358\3\2\2\2\u0358\u035b\7a\2\2\u0359\u035b\5\u0138\u009d\2\u035a\u0354"+
		"\3\2\2\2\u035a\u0359\3\2\2\2\u035bO\3\2\2\2\u035c\u035e\7\u008c\2\2\u035d"+
		"\u035c\3\2\2\2\u035d\u035e\3\2\2\2\u035e\u035f\3\2\2\2\u035f\u0360\7\'"+
		"\2\2\u0360\u0369\5T+\2\u0361\u0363\7\u008c\2\2\u0362\u0361\3\2\2\2\u0362"+
		"\u0363\3\2\2\2\u0363\u0364\3\2\2\2\u0364\u0365\7\'\2\2\u0365\u0366\7b"+
		"\2\2\u0366\u0367\7c\2\2\u0367\u0369\5T+\2\u0368\u035d\3\2\2\2\u0368\u0362"+
		"\3\2\2\2\u0369Q\3\2\2\2\u036a\u036b\7=\2\2\u036b\u036c\7`\2\2\u036c\u036d"+
		"\5t;\2\u036d\u036e\7a\2\2\u036eS\3\2\2\2\u036f\u0376\5@!\2\u0370\u0371"+
		"\7`\2\2\u0371\u0372\5\u011a\u008e\2\u0372\u0373\7a\2\2\u0373\u0374\5T"+
		"+\2\u0374\u0376\3\2\2\2\u0375\u036f\3\2\2\2\u0375\u0370\3\2\2\2\u0376"+
		"U\3\2\2\2\u0377\u0378\b,\1\2\u0378\u0379\5\32\16\2\u0379\u0382\3\2\2\2"+
		"\u037a\u037b\f\4\2\2\u037b\u037c\7\u008f\2\2\u037c\u0381\5T+\2\u037d\u037e"+
		"\f\3\2\2\u037e\u037f\7\u0088\2\2\u037f\u0381\5T+\2\u0380\u037a\3\2\2\2"+
		"\u0380\u037d\3\2\2\2\u0381\u0384\3\2\2\2\u0382\u0380\3\2\2\2\u0382\u0383"+
		"\3\2\2\2\u0383W\3\2\2\2\u0384\u0382\3\2\2\2\u0385\u0386\b-\1\2\u0386\u0387"+
		"\5V,\2\u0387\u0393\3\2\2\2\u0388\u0389\f\5\2\2\u0389\u038a\7h\2\2\u038a"+
		"\u0392\5V,\2\u038b\u038c\f\4\2\2\u038c\u038d\7i\2\2\u038d\u0392\5V,\2"+
		"\u038e\u038f\f\3\2\2\u038f\u0390\7j\2\2\u0390\u0392\5V,\2\u0391\u0388"+
		"\3\2\2\2\u0391\u038b\3\2\2\2\u0391\u038e\3\2\2\2\u0392\u0395\3\2\2\2\u0393"+
		"\u0391\3\2\2\2\u0393\u0394\3\2\2\2\u0394Y\3\2\2\2\u0395\u0393\3\2\2\2"+
		"\u0396\u0397\b.\1\2\u0397\u0398\5X-\2\u0398\u03a1\3\2\2\2\u0399\u039a"+
		"\f\4\2\2\u039a\u039b\7f\2\2\u039b\u03a0\5X-\2\u039c\u039d\f\3\2\2\u039d"+
		"\u039e\7g\2\2\u039e\u03a0\5X-\2\u039f\u0399\3\2\2\2\u039f\u039c\3\2\2"+
		"\2\u03a0\u03a3\3\2\2\2\u03a1\u039f\3\2\2\2\u03a1\u03a2\3\2\2\2\u03a2["+
		"\3\2\2\2\u03a3\u03a1\3\2\2\2\u03a4\u03a5\b/\1\2\u03a5\u03a6\5Z.\2\u03a6"+
		"\u03ad\3\2\2\2\u03a7\u03a8\f\3\2\2\u03a8\u03a9\5^\60\2\u03a9\u03aa\5Z"+
		".\2\u03aa\u03ac\3\2\2\2\u03ab\u03a7\3\2\2\2\u03ac\u03af\3\2\2\2\u03ad"+
		"\u03ab\3\2\2\2\u03ad\u03ae\3\2\2\2\u03ae]\3\2\2\2\u03af\u03ad\3\2\2\2"+
		"\u03b0\u03b1\t\4\2\2\u03b1_\3\2\2\2\u03b2\u03b3\b\61\1\2\u03b3\u03b4\5"+
		"\\/\2\u03b4\u03c3\3\2\2\2\u03b5\u03b6\f\6\2\2\u03b6\u03b7\7q\2\2\u03b7"+
		"\u03c2\5\\/\2\u03b8\u03b9\f\5\2\2\u03b9\u03ba\7r\2\2\u03ba\u03c2\5\\/"+
		"\2\u03bb\u03bc\f\4\2\2\u03bc\u03bd\7\u0081\2\2\u03bd\u03c2\5\\/\2\u03be"+
		"\u03bf\f\3\2\2\u03bf\u03c0\7\u0082\2\2\u03c0\u03c2\5\\/\2\u03c1\u03b5"+
		"\3\2\2\2\u03c1\u03b8\3\2\2\2\u03c1\u03bb\3\2\2\2\u03c1\u03be\3\2\2\2\u03c2"+
		"\u03c5\3\2\2\2\u03c3\u03c1\3\2\2\2\u03c3\u03c4\3\2\2\2\u03c4a\3\2\2\2"+
		"\u03c5\u03c3\3\2\2\2\u03c6\u03c7\b\62\1\2\u03c7\u03c8\5`\61\2\u03c8\u03d1"+
		"\3\2\2\2\u03c9\u03ca\f\4\2\2\u03ca\u03cb\7\177\2\2\u03cb\u03d0\5`\61\2"+
		"\u03cc\u03cd\f\3\2\2\u03cd\u03ce\7\u0080\2\2\u03ce\u03d0\5`\61\2\u03cf"+
		"\u03c9\3\2\2\2\u03cf\u03cc\3\2\2\2\u03d0\u03d3\3\2\2\2\u03d1\u03cf\3\2"+
		"\2\2\u03d1\u03d2\3\2\2\2\u03d2c\3\2\2\2\u03d3\u03d1\3\2\2\2\u03d4\u03d5"+
		"\b\63\1\2\u03d5\u03d6\5b\62\2\u03d6\u03dc\3\2\2\2\u03d7\u03d8\f\3\2\2"+
		"\u03d8\u03d9\7l\2\2\u03d9\u03db\5b\62\2\u03da\u03d7\3\2\2\2\u03db\u03de"+
		"\3\2\2\2\u03dc\u03da\3\2\2\2\u03dc\u03dd\3\2\2\2\u03dde\3\2\2\2\u03de"+
		"\u03dc\3\2\2\2\u03df\u03e0\b\64\1\2\u03e0\u03e1\5d\63\2\u03e1\u03e7\3"+
		"\2\2\2\u03e2\u03e3\f\3\2\2\u03e3\u03e4\7k\2\2\u03e4\u03e6\5d\63\2\u03e5"+
		"\u03e2\3\2\2\2\u03e6\u03e9\3\2\2\2\u03e7\u03e5\3\2\2\2\u03e7\u03e8\3\2"+
		"\2\2\u03e8g\3\2\2\2\u03e9\u03e7\3\2\2\2\u03ea\u03eb\b\65\1\2\u03eb\u03ec"+
		"\5f\64\2\u03ec\u03f2\3\2\2\2\u03ed\u03ee\f\3\2\2\u03ee\u03ef\7m\2\2\u03ef"+
		"\u03f1\5f\64\2\u03f0\u03ed\3\2\2\2\u03f1\u03f4\3\2\2\2\u03f2\u03f0\3\2"+
		"\2\2\u03f2\u03f3\3\2\2\2\u03f3i\3\2\2\2\u03f4\u03f2\3\2\2\2\u03f5\u03f6"+
		"\b\66\1\2\u03f6\u03f7\5h\65\2\u03f7\u0400\3\2\2\2\u03f8\u03f9\f\4\2\2"+
		"\u03f9\u03fa\7\16\2\2\u03fa\u03ff\5h\65\2\u03fb\u03fc\f\3\2\2\u03fc\u03fd"+
		"\7\17\2\2\u03fd\u03ff\5h\65\2\u03fe\u03f8\3\2\2\2\u03fe\u03fb\3\2\2\2"+
		"\u03ff\u0402\3\2\2\2\u0400\u03fe\3\2\2\2\u0400\u0401\3\2\2\2\u0401k\3"+
		"\2\2\2\u0402\u0400\3\2\2\2\u0403\u0404\b\67\1\2\u0404\u0405\5j\66\2\u0405"+
		"\u040e\3\2\2\2\u0406\u0407\f\4\2\2\u0407\u0408\7\20\2\2\u0408\u040d\5"+
		"j\66\2\u0409\u040a\f\3\2\2\u040a\u040b\7\21\2\2\u040b\u040d\5j\66\2\u040c"+
		"\u0406\3\2\2\2\u040c\u0409\3\2\2\2\u040d\u0410\3\2\2\2\u040e\u040c\3\2"+
		"\2\2\u040e\u040f\3\2\2\2\u040fm\3\2\2\2\u0410\u040e\3\2\2\2\u0411\u0419"+
		"\5l\67\2\u0412\u0413\5l\67\2\u0413\u0414\7\u008a\2\2\u0414\u0415\5t;\2"+
		"\u0415\u0416\7\u008b\2\2\u0416\u0417\5p9\2\u0417\u0419\3\2\2\2\u0418\u0411"+
		"\3\2\2\2\u0418\u0412\3\2\2\2\u0419o\3\2\2\2\u041a\u0422\5V,\2\u041b\u0422"+
		"\5T+\2\u041c\u041d\5l\67\2\u041d\u041e\5r:\2\u041e\u041f\5V,\2\u041f\u0422"+
		"\3\2\2\2\u0420\u0422\5\u0194\u00cb\2\u0421\u041a\3\2\2\2\u0421\u041b\3"+
		"\2\2\2\u0421\u041c\3\2\2\2\u0421\u0420\3\2\2\2\u0422q\3\2\2\2\u0423\u0424"+
		"\t\5\2\2\u0424s\3\2\2\2\u0425\u0426\b;\1\2\u0426\u0427\5p9\2\u0427\u042d"+
		"\3\2\2\2\u0428\u0429\f\3\2\2\u0429\u042a\7\u0087\2\2\u042a\u042c\5p9\2"+
		"\u042b\u0428\3\2\2\2\u042c\u042f\3\2\2\2\u042d\u042b\3\2\2\2\u042d\u042e"+
		"\3\2\2\2\u042eu\3\2\2\2\u042f\u042d\3\2\2\2\u0430\u0431\5n8\2\u0431w\3"+
		"\2\2\2\u0432\u044e\5z>\2\u0433\u0435\5\u00ecw\2\u0434\u0433\3\2\2\2\u0434"+
		"\u0435\3\2\2\2\u0435\u0436\3\2\2\2\u0436\u044e\5|?\2\u0437\u0439\5\u00ec"+
		"w\2\u0438\u0437\3\2\2\2\u0438\u0439\3\2\2\2\u0439\u043a\3\2\2\2\u043a"+
		"\u044e\5~@\2\u043b\u043d\5\u00ecw\2\u043c\u043b\3\2\2\2\u043c\u043d\3"+
		"\2\2\2\u043d\u043e\3\2\2\2\u043e\u044e\5\u0082B\2\u043f\u0441\5\u00ec"+
		"w\2\u0440\u043f\3\2\2\2\u0440\u0441\3\2\2\2\u0441\u0442\3\2\2\2\u0442"+
		"\u044e\5\u0086D\2\u0443\u0445\5\u00ecw\2\u0444\u0443\3\2\2\2\u0444\u0445"+
		"\3\2\2\2\u0445\u0446\3\2\2\2\u0446\u044e\5\u008eH\2\u0447\u044e\5\u0090"+
		"I\2\u0448\u044e\5\n\6\2\u0449\u044b\5\u00ecw\2\u044a\u0449\3\2\2\2\u044a"+
		"\u044b\3\2\2\2\u044b\u044c\3\2\2\2\u044c\u044e\5\u018a\u00c6\2\u044d\u0432"+
		"\3\2\2\2\u044d\u0434\3\2\2\2\u044d\u0438\3\2\2\2\u044d\u043c\3\2\2\2\u044d"+
		"\u0440\3\2\2\2\u044d\u0444\3\2\2\2\u044d\u0447\3\2\2\2\u044d\u0448\3\2"+
		"\2\2\u044d\u044a\3\2\2\2\u044ey\3\2\2\2\u044f\u0451\5\u00ecw\2\u0450\u044f"+
		"\3\2\2\2\u0450\u0451\3\2\2\2\u0451\u0452\3\2\2\2\u0452\u0453\7\u0091\2"+
		"\2\u0453\u0454\7\u008b\2\2\u0454\u0464\5x=\2\u0455\u0457\5\u00ecw\2\u0456"+
		"\u0455\3\2\2\2\u0456\u0457\3\2\2\2\u0457\u0458\3\2\2\2\u0458\u0459\7\33"+
		"\2\2\u0459\u045a\5v<\2\u045a\u045b\7\u008b\2\2\u045b\u045c\5x=\2\u045c"+
		"\u0464\3\2\2\2\u045d\u045f\5\u00ecw\2\u045e\u045d\3\2\2\2\u045e\u045f"+
		"\3\2\2\2\u045f\u0460\3\2\2\2\u0460\u0461\7&\2\2\u0461\u0462\7\u008b\2"+
		"\2\u0462\u0464\5x=\2\u0463\u0450\3\2\2\2\u0463\u0456\3\2\2\2\u0463\u045e"+
		"\3\2\2\2\u0464{\3\2\2\2\u0465\u0467\5t;\2\u0466\u0465\3\2\2\2\u0466\u0467"+
		"\3\2\2\2\u0467\u0468\3\2\2\2\u0468\u0469\7\u008d\2\2\u0469}\3\2\2\2\u046a"+
		"\u046c\7d\2\2\u046b\u046d\5\u0080A\2\u046c\u046b\3\2\2\2\u046c\u046d\3"+
		"\2\2\2\u046d\u046e\3\2\2\2\u046e\u046f\7e\2\2\u046f\177\3\2\2\2\u0470"+
		"\u0471\bA\1\2\u0471\u0472\5x=\2\u0472\u0477\3\2\2\2\u0473\u0474\f\3\2"+
		"\2\u0474\u0476\5x=\2\u0475\u0473\3\2\2\2\u0476\u0479\3\2\2\2\u0477\u0475"+
		"\3\2\2\2\u0477\u0478\3\2\2\2\u0478\u0081\3\2\2\2\u0479\u0477\3\2\2\2\u047a"+
		"\u047b\7\66\2\2\u047b\u047c\7`\2\2\u047c\u047d\5\u0084C\2\u047d\u047e"+
		"\7a\2\2\u047e\u047f\5x=\2\u047f\u048f\3\2\2\2\u0480\u0481\7\66\2\2\u0481"+
		"\u0482\7`\2\2\u0482\u0483\5\u0084C\2\u0483\u0484\7a\2\2\u0484\u0485\5"+
		"x=\2\u0485\u0486\7+\2\2\u0486\u0487\5x=\2\u0487\u048f\3\2\2\2\u0488\u0489"+
		"\7N\2\2\u0489\u048a\7`\2\2\u048a\u048b\5\u0084C\2\u048b\u048c\7a\2\2\u048c"+
		"\u048d\5x=\2\u048d\u048f\3\2\2\2\u048e\u047a\3\2\2\2\u048e\u0480\3\2\2"+
		"\2\u048e\u0488\3\2\2\2\u048f\u0083\3\2\2\2\u0490\u04a1\5t;\2\u0491\u0493"+
		"\5\u00ecw\2\u0492\u0491\3\2\2\2\u0492\u0493\3\2\2\2\u0493\u0494\3\2\2"+
		"\2\u0494\u0495\5\u00a4S\2\u0495\u0496\5\u0106\u0084\2\u0496\u0497\7p\2"+
		"\2\u0497\u0498\5\u0134\u009b\2\u0498\u04a1\3\2\2\2\u0499\u049b\5\u00ec"+
		"w\2\u049a\u0499\3\2\2\2\u049a\u049b\3\2\2\2\u049b\u049c\3\2\2\2\u049c"+
		"\u049d\5\u00a4S\2\u049d\u049e\5\u0106\u0084\2\u049e\u049f\5\u0138\u009d"+
		"\2\u049f\u04a1\3\2\2\2\u04a0\u0490\3\2\2\2\u04a0\u0492\3\2\2\2\u04a0\u049a"+
		"\3\2\2\2\u04a1\u0085\3\2\2\2\u04a2\u04a3\7_\2\2\u04a3\u04a4\7`\2\2\u04a4"+
		"\u04a5\5\u0084C\2\u04a5\u04a6\7a\2\2\u04a6\u04a7\5x=\2\u04a7\u04c6\3\2"+
		"\2\2\u04a8\u04a9\7(\2\2\u04a9\u04aa\5x=\2\u04aa\u04ab\7_\2\2\u04ab\u04ac"+
		"\7`\2\2\u04ac\u04ad\5t;\2\u04ad\u04ae\7a\2\2\u04ae\u04af\7\u008d\2\2\u04af"+
		"\u04c6\3\2\2\2\u04b0\u04b1\7\63\2\2\u04b1\u04b2\7`\2\2\u04b2\u04b4\5\u0088"+
		"E\2\u04b3\u04b5\5\u0084C\2\u04b4\u04b3\3\2\2\2\u04b4\u04b5\3\2\2\2\u04b5"+
		"\u04b6\3\2\2\2\u04b6\u04b8\7\u008d\2\2\u04b7\u04b9\5t;\2\u04b8\u04b7\3"+
		"\2\2\2\u04b8\u04b9\3\2\2\2\u04b9\u04ba\3\2\2\2\u04ba\u04bb\7a\2\2\u04bb"+
		"\u04bc\5x=\2\u04bc\u04c6\3\2\2\2\u04bd\u04be\7\63\2\2\u04be\u04bf\7`\2"+
		"\2\u04bf\u04c0\5\u008aF\2\u04c0\u04c1\7\u008b\2\2\u04c1\u04c2\5\u008c"+
		"G\2\u04c2\u04c3\7a\2\2\u04c3\u04c4\5x=\2\u04c4\u04c6\3\2\2\2\u04c5\u04a2"+
		"\3\2\2\2\u04c5\u04a8\3\2\2\2\u04c5\u04b0\3\2\2\2\u04c5\u04bd\3\2\2\2\u04c6"+
		"\u0087\3\2\2\2\u04c7\u04ca\5|?\2\u04c8\u04ca\5\u009aN\2\u04c9\u04c7\3"+
		"\2\2\2\u04c9\u04c8\3\2\2\2\u04ca\u0089\3\2\2\2\u04cb\u04cd\5\u00ecw\2"+
		"\u04cc\u04cb\3\2\2\2\u04cc\u04cd\3\2\2\2\u04cd\u04ce\3\2\2\2\u04ce\u04cf"+
		"\5\u00a4S\2\u04cf\u04d0\5\u0106\u0084\2\u04d0\u008b\3\2\2\2\u04d1\u04d4"+
		"\5t;\2\u04d2\u04d4\5\u0138\u009d\2\u04d3\u04d1\3\2\2\2\u04d3\u04d2\3\2"+
		"\2\2\u04d4\u008d\3\2\2\2\u04d5\u04d6\7\32\2\2\u04d6\u04e6\7\u008d\2\2"+
		"\u04d7\u04d8\7$\2\2\u04d8\u04e6\7\u008d\2\2\u04d9\u04db\7F\2\2\u04da\u04dc"+
		"\5t;\2\u04db\u04da\3\2\2\2\u04db\u04dc\3\2\2\2\u04dc\u04dd\3\2\2\2\u04dd"+
		"\u04e6\7\u008d\2\2\u04de\u04df\7F\2\2\u04df\u04e0\5\u0138\u009d\2\u04e0"+
		"\u04e1\7\u008d\2\2\u04e1\u04e6\3\2\2\2\u04e2\u04e3\7\65\2\2\u04e3\u04e4"+
		"\7\u0091\2\2\u04e4\u04e6\7\u008d\2\2\u04e5\u04d5\3\2\2\2\u04e5\u04d7\3"+
		"\2\2\2\u04e5\u04d9\3\2\2\2\u04e5\u04de\3\2\2\2\u04e5\u04e2\3\2\2\2\u04e6"+
		"\u008f\3\2\2\2\u04e7\u04e8\5\u0096L\2\u04e8\u0091\3\2\2\2\u04e9\u04ea"+
		"\bJ\1\2\u04ea\u04eb\5\u0094K\2\u04eb\u04f0\3\2\2\2\u04ec\u04ed\f\3\2\2"+
		"\u04ed\u04ef\5\u0094K\2\u04ee\u04ec\3\2\2\2\u04ef\u04f2\3\2\2\2\u04f0"+
		"\u04ee\3\2\2\2\u04f0\u04f1\3\2\2\2\u04f1\u0093\3\2\2\2\u04f2\u04f0\3\2"+
		"\2\2\u04f3\u04fd\5\u0096L\2\u04f4\u04fd\5\u012c\u0097\2\u04f5\u04fd\5"+
		"\u0172\u00ba\2\u04f6\u04fd\5\u0186\u00c4\2\u04f7\u04fd\5\u0188\u00c5\2"+
		"\u04f8\u04fd\5\u00eav\2\u04f9\u04fd\5\u00d2j\2\u04fa\u04fd\5\u009eP\2"+
		"\u04fb\u04fd\5\u00a0Q\2\u04fc\u04f3\3\2\2\2\u04fc\u04f4\3\2\2\2\u04fc"+
		"\u04f5\3\2\2\2\u04fc\u04f6\3\2\2\2\u04fc\u04f7\3\2\2\2\u04fc\u04f8\3\2"+
		"\2\2\u04fc\u04f9\3\2\2\2\u04fc\u04fa\3\2\2\2\u04fc\u04fb\3\2\2\2\u04fd"+
		"\u0095\3\2\2\2\u04fe\u0507\5\u009aN\2\u04ff\u0507\5\u00e8u\2\u0500\u0507"+
		"\5\u00e0q\2\u0501\u0507\5\u00e4s\2\u0502\u0507\5\u00e6t\2\u0503\u0507"+
		"\5\u009cO\2\u0504\u0507\5\u0098M\2\u0505\u0507\5\u00c2b\2\u0506\u04fe"+
		"\3\2\2\2\u0506\u04ff\3\2\2\2\u0506\u0500\3\2\2\2\u0506\u0501\3\2\2\2\u0506"+
		"\u0502\3\2\2\2\u0506\u0503\3\2\2\2\u0506\u0504\3\2\2\2\u0506\u0505\3\2"+
		"\2\2\u0507\u0097\3\2\2\2\u0508\u0509\7Z\2\2\u0509\u050b\7\u0091\2\2\u050a"+
		"\u050c\5\u00ecw\2\u050b\u050a\3\2\2\2\u050b\u050c\3\2\2\2\u050c\u050d"+
		"\3\2\2\2\u050d\u050e\7p\2\2\u050e\u050f\5\u011a\u008e\2\u050f\u0510\7"+
		"\u008d\2\2\u0510\u0099\3\2\2\2\u0511\u0513\5\u00a4S\2\u0512\u0511\3\2"+
		"\2\2\u0512\u0513\3\2\2\2\u0513\u0515\3\2\2\2\u0514\u0516\5\u0102\u0082"+
		"\2\u0515\u0514\3\2\2\2\u0515\u0516\3\2\2\2\u0516\u0517\3\2\2\2\u0517\u0520"+
		"\7\u008d\2\2\u0518\u051a\5\u00ecw\2\u0519\u051b\5\u00a4S\2\u051a\u0519"+
		"\3\2\2\2\u051a\u051b\3\2\2\2\u051b\u051c\3\2\2\2\u051c\u051d\5\u0102\u0082"+
		"\2\u051d\u051e\7\u008d\2\2\u051e\u0520\3\2\2\2\u051f\u0512\3\2\2\2\u051f"+
		"\u0518\3\2\2\2\u0520\u009b\3\2\2\2\u0521\u0522\7K\2\2\u0522\u0523\7`\2"+
		"\2\u0523\u0524\5v<\2\u0524\u0527\7\u0087\2\2\u0525\u0528\7\u009a\2\2\u0526"+
		"\u0528\5\20\t\2\u0527\u0525\3\2\2\2\u0527\u0526\3\2\2\2\u0528\u0529\3"+
		"\2\2\2\u0529\u052a\7a\2\2\u052a\u052b\7\u008d\2\2\u052b\u009d\3\2\2\2"+
		"\u052c\u052d\7\u008d\2\2\u052d\u009f\3\2\2\2\u052e\u052f\5\u00ecw\2\u052f"+
		"\u0530\7\u008d\2\2\u0530\u00a1\3\2\2\2\u0531\u0538\5\u00a6T\2\u0532\u0538"+
		"\5\u00acW\2\u0533\u0538\5\u00a8U\2\u0534\u0538\7\64\2\2\u0535\u0538\7"+
		"U\2\2\u0536\u0538\7\"\2\2\u0537\u0531\3\2\2\2\u0537\u0532\3\2\2\2\u0537"+
		"\u0533\3\2\2\2\u0537\u0534\3\2\2\2\u0537\u0535\3\2\2\2\u0537\u0536\3\2"+
		"\2\2\u0538\u00a3\3\2\2\2\u0539\u053b\5\u00a2R\2\u053a\u053c\5\u00ecw\2"+
		"\u053b\u053a\3\2\2\2\u053b\u053c\3\2\2\2\u053c\u0541\3\2\2\2\u053d\u053e"+
		"\5\u00a2R\2\u053e\u053f\5\u00a4S\2\u053f\u0541\3\2\2\2\u0540\u0539\3\2"+
		"\2\2\u0540\u053d\3\2\2\2\u0541\u00a5\3\2\2\2\u0542\u0543\t\6\2\2\u0543"+
		"\u00a7\3\2\2\2\u0544\u0545\t\7\2\2\u0545\u00a9\3\2\2\2\u0546\u0547\7\u0091"+
		"\2\2\u0547\u00ab\3\2\2\2\u0548\u054c\5\u00aeX\2\u0549\u054c\5\u013c\u009f"+
		"\2\u054a\u054c\5\u00be`\2\u054b\u0548\3\2\2\2\u054b\u0549\3\2\2\2\u054b"+
		"\u054a\3\2\2\2\u054c\u00ad\3\2\2\2\u054d\u0552\5\u00b4[\2\u054e\u0552"+
		"\5\u00ba^\2\u054f\u0552\5\u0184\u00c3\2\u0550\u0552\5\u0114\u008b\2\u0551"+
		"\u054d\3\2\2\2\u0551\u054e\3\2\2\2\u0551\u054f\3\2\2\2\u0551\u0550\3\2"+
		"\2\2\u0552\u00af\3\2\2\2\u0553\u0555\5\u00acW\2\u0554\u0556\5\u00ecw\2"+
		"\u0555\u0554\3\2\2\2\u0555\u0556\3\2\2\2\u0556\u055b\3\2\2\2\u0557\u0558"+
		"\5\u00acW\2\u0558\u0559\5\u00b0Y\2\u0559\u055b\3\2\2\2\u055a\u0553\3\2"+
		"\2\2\u055a\u0557\3\2\2\2\u055b\u00b1\3\2\2\2\u055c\u055e\5\u00aeX\2\u055d"+
		"\u055f\5\u00ecw\2\u055e\u055d\3\2\2\2\u055e\u055f\3\2\2\2\u055f\u0564"+
		"\3\2\2\2\u0560\u0561\5\u00aeX\2\u0561\u0562\5\u00b2Z\2\u0562\u0564\3\2"+
		"\2\2\u0563\u055c\3\2\2\2\u0563\u0560\3\2\2\2\u0564\u00b3\3\2\2\2\u0565"+
		"\u0567\5\"\22\2\u0566\u0565\3\2\2\2\u0566\u0567\3\2\2\2\u0567\u0568\3"+
		"\2\2\2\u0568\u057d\5\u00b6\\\2\u0569\u056a\5\"\22\2\u056a\u056b\7O\2\2"+
		"\u056b\u056c\5\u017a\u00be\2\u056c\u057d\3\2\2\2\u056d\u057d\7\35\2\2"+
		"\u056e\u057d\7\36\2\2\u056f\u057d\7\37\2\2\u0570\u057d\7^\2\2\u0571\u057d"+
		"\7\31\2\2\u0572\u057d\7G\2\2\u0573\u057d\78\2\2\u0574\u057d\79\2\2\u0575"+
		"\u057d\7H\2\2\u0576\u057d\7Y\2\2\u0577\u057d\7\62\2\2\u0578\u057d\7)\2"+
		"\2\u0579\u057d\7\\\2\2\u057a\u057d\7\30\2\2\u057b\u057d\5\u00b8]\2\u057c"+
		"\u0566\3\2\2\2\u057c\u0569\3\2\2\2\u057c\u056d\3\2\2\2\u057c\u056e\3\2"+
		"\2\2\u057c\u056f\3\2\2\2\u057c\u0570\3\2\2\2\u057c\u0571\3\2\2\2\u057c"+
		"\u0572\3\2\2\2\u057c\u0573\3\2\2\2\u057c\u0574\3\2\2\2\u057c\u0575\3\2"+
		"\2\2\u057c\u0576\3\2\2\2\u057c\u0577\3\2\2\2\u057c\u0578\3\2\2\2\u057c"+
		"\u0579\3\2\2\2\u057c\u057a\3\2\2\2\u057c\u057b\3\2\2\2\u057d\u00b5\3\2"+
		"\2\2\u057e\u0583\5\u013a\u009e\2\u057f\u0583\5\u00bc_\2\u0580\u0583\5"+
		"\u00aaV\2\u0581\u0583\5\u017a\u00be\2\u0582\u057e\3\2\2\2\u0582\u057f"+
		"\3\2\2\2\u0582\u0580\3\2\2\2\u0582\u0581\3\2\2\2\u0583\u00b7\3\2\2\2\u0584"+
		"\u0585\7%\2\2\u0585\u0586\7`\2\2\u0586\u0587\5t;\2\u0587\u0588\7a\2\2"+
		"\u0588\u058e\3\2\2\2\u0589\u058a\7%\2\2\u058a\u058b\7`\2\2\u058b\u058c"+
		"\7\30\2\2\u058c\u058e\7a\2\2\u058d\u0584\3\2\2\2\u058d\u0589\3\2\2\2\u058e"+
		"\u00b9\3\2\2\2\u058f\u0591\5\u0144\u00a3\2\u0590\u0592\5\u00ecw\2\u0591"+
		"\u0590\3\2\2\2\u0591\u0592\3\2\2\2\u0592\u0594\3\2\2\2\u0593\u0595\5\""+
		"\22\2\u0594\u0593\3\2\2\2\u0594\u0595\3\2\2\2\u0595\u0596\3\2\2\2\u0596"+
		"\u0597\7\u0091\2\2\u0597\u05a8\3\2\2\2\u0598\u0599\5\u0144\u00a3\2\u0599"+
		"\u059a\5\u017a\u00be\2\u059a\u05a8\3\2\2\2\u059b\u059c\5\u0144\u00a3\2"+
		"\u059c\u059e\5\"\22\2\u059d\u059f\7O\2\2\u059e\u059d\3\2\2\2\u059e\u059f"+
		"\3\2\2\2\u059f\u05a0\3\2\2\2\u05a0\u05a1\5\u017a\u00be\2\u05a1\u05a8\3"+
		"\2\2\2\u05a2\u05a4\7,\2\2\u05a3\u05a5\5\"\22\2\u05a4\u05a3\3\2\2\2\u05a4"+
		"\u05a5\3\2\2\2\u05a5\u05a6\3\2\2\2\u05a6\u05a8\7\u0091\2\2\u05a7\u058f"+
		"\3\2\2\2\u05a7\u0598\3\2\2\2\u05a7\u059b\3\2\2\2\u05a7\u05a2\3\2\2\2\u05a8"+
		"\u00bb\3\2\2\2\u05a9\u05aa\7\u0091\2\2\u05aa\u00bd\3\2\2\2\u05ab\u05ac"+
		"\5\u00c0a\2\u05ac\u05ae\7d\2\2\u05ad\u05af\5\u00c8e\2\u05ae\u05ad\3\2"+
		"\2\2\u05ae\u05af\3\2\2\2\u05af\u05b0\3\2\2\2\u05b0\u05b1\7e\2\2\u05b1"+
		"\u05b9\3\2\2\2\u05b2\u05b3\5\u00c0a\2\u05b3\u05b4\7d\2\2\u05b4\u05b5\5"+
		"\u00c8e\2\u05b5\u05b6\7\u0087\2\2\u05b6\u05b7\7e\2\2\u05b7\u05b9\3\2\2"+
		"\2\u05b8\u05ab\3\2\2\2\u05b8\u05b2\3\2\2\2\u05b9\u00bf\3\2\2\2\u05ba\u05bc"+
		"\5\u00c4c\2\u05bb\u05bd\5\u00ecw\2\u05bc\u05bb\3\2\2\2\u05bc\u05bd\3\2"+
		"\2\2\u05bd\u05bf\3\2\2\2\u05be\u05c0\7\u0091\2\2\u05bf\u05be\3\2\2\2\u05bf"+
		"\u05c0\3\2\2\2\u05c0\u05c2\3\2\2\2\u05c1\u05c3\5\u00c6d\2\u05c2\u05c1"+
		"\3\2\2\2\u05c2\u05c3\3\2\2\2\u05c3\u05ce\3\2\2\2\u05c4\u05c6\5\u00c4c"+
		"\2\u05c5\u05c7\5\u00ecw\2\u05c6\u05c5\3\2\2\2\u05c6\u05c7\3\2\2\2\u05c7"+
		"\u05c8\3\2\2\2\u05c8\u05c9\5\"\22\2\u05c9\u05cb\7\u0091\2\2\u05ca\u05cc"+
		"\5\u00c6d\2\u05cb\u05ca\3\2\2\2\u05cb\u05cc\3\2\2\2\u05cc\u05ce\3\2\2"+
		"\2\u05cd\u05ba\3\2\2\2\u05cd\u05c4\3\2\2\2\u05ce\u00c1\3\2\2\2\u05cf\u05d1"+
		"\5\u00c4c\2\u05d0\u05d2\5\u00ecw\2\u05d1\u05d0\3\2\2\2\u05d1\u05d2\3\2"+
		"\2\2\u05d2\u05d3\3\2\2\2\u05d3\u05d5\7\u0091\2\2\u05d4\u05d6\5\u00c6d"+
		"\2\u05d5\u05d4\3\2\2\2\u05d5\u05d6\3\2\2\2\u05d6\u05d7\3\2\2\2\u05d7\u05d8"+
		"\7\u008d\2\2\u05d8\u00c3\3\2\2\2\u05d9\u05df\7,\2\2\u05da\u05db\7,\2\2"+
		"\u05db\u05df\7 \2\2\u05dc\u05dd\7,\2\2\u05dd\u05df\7M\2\2\u05de\u05d9"+
		"\3\2\2\2\u05de\u05da\3\2\2\2\u05de\u05dc\3\2\2\2\u05df\u00c5\3\2\2\2\u05e0"+
		"\u05e1\7\u008b\2\2\u05e1\u05e2\5\u00b0Y\2\u05e2\u00c7\3\2\2\2\u05e3\u05e4"+
		"\be\1\2\u05e4\u05e5\5\u00caf\2\u05e5\u05eb\3\2\2\2\u05e6\u05e7\f\3\2\2"+
		"\u05e7\u05e8\7\u0087\2\2\u05e8\u05ea\5\u00caf\2\u05e9\u05e6\3\2\2\2\u05ea"+
		"\u05ed\3\2\2\2\u05eb\u05e9\3\2\2\2\u05eb\u05ec\3\2\2\2\u05ec\u00c9\3\2"+
		"\2\2\u05ed\u05eb\3\2\2\2\u05ee\u05f4\5\u00ccg\2\u05ef\u05f0\5\u00ccg\2"+
		"\u05f0\u05f1\7p\2\2\u05f1\u05f2\5v<\2\u05f2\u05f4\3\2\2\2\u05f3\u05ee"+
		"\3\2\2\2\u05f3\u05ef\3\2\2\2\u05f4\u00cb\3\2\2\2\u05f5\u05f6\7\u0091\2"+
		"\2\u05f6\u00cd\3\2\2\2\u05f7\u05fa\5\u00d0i\2\u05f8\u05fa\5\u00dep\2\u05f9"+
		"\u05f7\3\2\2\2\u05f9\u05f8\3\2\2\2\u05fa\u00cf\3\2\2\2\u05fb\u05fc\7\u0091"+
		"\2\2\u05fc\u00d1\3\2\2\2\u05fd\u0600\5\u00d4k\2\u05fe\u0600\5\u00dan\2"+
		"\u05ff\u05fd\3\2\2\2\u05ff\u05fe\3\2\2\2\u0600\u00d3\3\2\2\2\u0601\u0604"+
		"\5\u00d6l\2\u0602\u0604\5\u00d8m\2\u0603\u0601\3\2\2\2\u0603\u0602\3\2"+
		"\2\2\u0604\u00d5\3\2\2\2\u0605\u0607\7\67\2\2\u0606\u0605\3\2\2\2\u0606"+
		"\u0607\3\2\2\2\u0607\u0608\3\2\2\2\u0608\u0609\7;\2\2\u0609\u060a\7\u0091"+
		"\2\2\u060a\u060b\7d\2\2\u060b\u060c\5\u00dco\2\u060c\u060d\7e\2\2\u060d"+
		"\u00d7\3\2\2\2\u060e\u0610\7\67\2\2\u060f\u060e\3\2\2\2\u060f\u0610\3"+
		"\2\2\2\u0610\u0611\3\2\2\2\u0611\u0612\7;\2\2\u0612\u0613\5\u00d0i\2\u0613"+
		"\u0614\7d\2\2\u0614\u0615\5\u00dco\2\u0615\u0616\7e\2\2\u0616\u00d9\3"+
		"\2\2\2\u0617\u0619\7\67\2\2\u0618\u0617\3\2\2\2\u0618\u0619\3\2\2\2\u0619"+
		"\u061a\3\2\2\2\u061a\u061b\7;\2\2\u061b\u061c\7d\2\2\u061c\u061d\5\u00dc"+
		"o\2\u061d\u061e\7e\2\2\u061e\u00db\3\2\2\2\u061f\u0621\5\u0092J\2\u0620"+
		"\u061f\3\2\2\2\u0620\u0621\3\2\2\2\u0621\u00dd\3\2\2\2\u0622\u0623\7\u0091"+
		"\2\2\u0623\u00df\3\2\2\2\u0624\u0625\7;\2\2\u0625\u0626\7\u0091\2\2\u0626"+
		"\u0627\7p\2\2\u0627\u0628\5\u00e2r\2\u0628\u0629\7\u008d\2\2\u0629\u00e1"+
		"\3\2\2\2\u062a\u062c\5\"\22\2\u062b\u062a\3\2\2\2\u062b\u062c\3\2\2\2"+
		"\u062c\u062d\3\2\2\2\u062d\u062e\5\u00ceh\2\u062e\u00e3\3\2\2\2\u062f"+
		"\u0631\7Z\2\2\u0630\u0632\7W\2\2\u0631\u0630\3\2\2\2\u0631\u0632\3\2\2"+
		"\2\u0632\u0633\3\2\2\2\u0633\u0634\5\"\22\2\u0634\u0635\5\36\20\2\u0635"+
		"\u0636\7\u008d\2\2\u0636\u063d\3\2\2\2\u0637\u0638\7Z\2\2\u0638\u0639"+
		"\7\u008c\2\2\u0639\u063a\5\36\20\2\u063a\u063b\7\u008d\2\2\u063b\u063d"+
		"\3\2\2\2\u063c\u062f\3\2\2\2\u063c\u0637\3\2\2\2\u063d\u00e5\3\2\2\2\u063e"+
		"\u0640\5\u00ecw\2\u063f\u063e\3\2\2\2\u063f\u0640\3\2\2\2\u0640\u0641"+
		"\3\2\2\2\u0641\u0642\7Z\2\2\u0642\u0644\7;\2\2\u0643\u0645\5\"\22\2\u0644"+
		"\u0643\3\2\2\2\u0644\u0645\3\2\2\2\u0645\u0646\3\2\2\2\u0646\u0647\5\u00ce"+
		"h\2\u0647\u0648\7\u008d\2\2\u0648\u00e7\3\2\2\2\u0649\u064a\7\27\2\2\u064a"+
		"\u064b\7`\2\2\u064b\u064c\7\u009a\2\2\u064c\u064d\7a\2\2\u064d\u064e\7"+
		"\u008d\2\2\u064e\u00e9\3\2\2\2\u064f\u0650\7/\2\2\u0650\u0651\7\u009a"+
		"\2\2\u0651\u0653\7d\2\2\u0652\u0654\5\u0092J\2\u0653\u0652\3\2\2\2\u0653"+
		"\u0654\3\2\2\2\u0654\u0655\3\2\2\2\u0655\u065a\7e\2\2\u0656\u0657\7/\2"+
		"\2\u0657\u0658\7\u009a\2\2\u0658\u065a\5\u0094K\2\u0659\u064f\3\2\2\2"+
		"\u0659\u0656\3\2\2\2\u065a\u00eb\3\2\2\2\u065b\u065c\bw\1\2\u065c\u065d"+
		"\5\u00eex\2\u065d\u0662\3\2\2\2\u065e\u065f\f\3\2\2\u065f\u0661\5\u00ee"+
		"x\2\u0660\u065e\3\2\2\2\u0661\u0664\3\2\2\2\u0662\u0660\3\2\2\2\u0662"+
		"\u0663\3\2\2\2\u0663\u00ed\3\2\2\2\u0664\u0662\3\2\2\2\u0665\u0666\7b"+
		"\2\2\u0666\u0667\7b\2\2\u0667\u0668\5\u00f2z\2\u0668\u0669\7c\2\2\u0669"+
		"\u066a\7c\2\2\u066a\u066d\3\2\2\2\u066b\u066d\5\u00f0y\2\u066c\u0665\3"+
		"\2\2\2\u066c\u066b\3\2\2\2\u066d\u00ef\3\2\2\2\u066e\u066f\7\25\2\2\u066f"+
		"\u0670\7`\2\2\u0670\u0672\5\u011a\u008e\2\u0671\u0673\7\u0090\2\2\u0672"+
		"\u0671\3\2\2\2\u0672\u0673\3\2\2\2\u0673\u0674\3\2\2\2\u0674\u0675\7a"+
		"\2\2\u0675\u067f\3\2\2\2\u0676\u0677\7\25\2\2\u0677\u0678\7`\2\2\u0678"+
		"\u067a\5v<\2\u0679\u067b\7\u0090\2\2\u067a\u0679\3\2\2\2\u067a\u067b\3"+
		"\2\2\2\u067b\u067c\3\2\2\2\u067c\u067d\7a\2\2\u067d\u067f\3\2\2\2\u067e"+
		"\u066e\3\2\2\2\u067e\u0676\3\2\2\2\u067f\u00f1\3\2\2\2\u0680\u0682\bz"+
		"\1\2\u0681\u0683\5\u00f4{\2\u0682\u0681\3\2\2\2\u0682\u0683\3\2\2\2\u0683"+
		"\u0688\3\2\2\2\u0684\u0685\5\u00f4{\2\u0685\u0686\7\u0090\2\2\u0686\u0688"+
		"\3\2\2\2\u0687\u0680\3\2\2\2\u0687\u0684\3\2\2\2\u0688\u0695\3\2\2\2\u0689"+
		"\u068a\f\5\2\2\u068a\u068c\7\u0087\2\2\u068b\u068d\5\u00f4{\2\u068c\u068b"+
		"\3\2\2\2\u068c\u068d\3\2\2\2\u068d\u0694\3\2\2\2\u068e\u068f\f\3\2\2\u068f"+
		"\u0690\7\u0087\2\2\u0690\u0691\5\u00f4{\2\u0691\u0692\7\u0090\2\2\u0692"+
		"\u0694\3\2\2\2\u0693\u0689\3\2\2\2\u0693\u068e\3\2\2\2\u0694\u0697\3\2"+
		"\2\2\u0695\u0693\3\2\2\2\u0695\u0696\3\2\2\2\u0696\u00f3\3\2\2\2\u0697"+
		"\u0695\3\2\2\2\u0698\u069a\5\u00f6|\2\u0699\u069b\5\u00fc\177\2\u069a"+
		"\u0699\3\2\2\2\u069a\u069b\3\2\2\2\u069b\u00f5\3\2\2\2\u069c\u069f\7\u0091"+
		"\2\2\u069d\u069f\5\u00f8}\2\u069e\u069c\3\2\2\2\u069e\u069d\3\2\2\2\u069f"+
		"\u00f7\3\2\2\2\u06a0\u06a1\5\u00fa~\2\u06a1\u06a2\7\u008c\2\2\u06a2\u06a3"+
		"\7\u0091\2\2\u06a3\u00f9\3\2\2\2\u06a4\u06a5\7\u0091\2\2\u06a5\u00fb\3"+
		"\2\2\2\u06a6\u06a7\7`\2\2\u06a7\u06a8\5\u00fe\u0080\2\u06a8\u06a9\7a\2"+
		"\2\u06a9\u00fd\3\2\2\2\u06aa\u06ac\b\u0080\1\2\u06ab\u06ad\5\u0100\u0081"+
		"\2\u06ac\u06ab\3\2\2\2\u06ac\u06ad\3\2\2\2\u06ad\u06b2\3\2\2\2\u06ae\u06af"+
		"\f\3\2\2\u06af\u06b1\5\u0100\u0081\2\u06b0\u06ae\3\2\2\2\u06b1\u06b4\3"+
		"\2\2\2\u06b2\u06b0\3\2\2\2\u06b2\u06b3\3\2\2\2\u06b3\u00ff\3\2\2\2\u06b4"+
		"\u06b2\3\2\2\2\u06b5\u06b6\7`\2\2\u06b6\u06b7\5\u00fe\u0080\2\u06b7\u06b8"+
		"\7a\2\2\u06b8\u06c2\3\2\2\2\u06b9\u06ba\7b\2\2\u06ba\u06bb\5\u00fe\u0080"+
		"\2\u06bb\u06bc\7c\2\2\u06bc\u06c2\3\2\2\2\u06bd\u06be\7d\2\2\u06be\u06bf"+
		"\5\u00fe\u0080\2\u06bf\u06c0\7e\2\2\u06c0\u06c2\3\2\2\2\u06c1\u06b5\3"+
		"\2\2\2\u06c1\u06b9\3\2\2\2\u06c1\u06bd\3\2\2\2\u06c2\u0101\3\2\2\2\u06c3"+
		"\u06c4\b\u0082\1\2\u06c4\u06c5\5\u0104\u0083\2\u06c5\u06cb\3\2\2\2\u06c6"+
		"\u06c7\f\3\2\2\u06c7\u06c8\7\u0087\2\2\u06c8\u06ca\5\u0104\u0083\2\u06c9"+
		"\u06c6\3\2\2\2\u06ca\u06cd\3\2\2\2\u06cb\u06c9\3\2\2\2\u06cb\u06cc\3\2"+
		"\2\2\u06cc\u0103\3\2\2\2\u06cd\u06cb\3\2\2\2\u06ce\u06d0\5\u0106\u0084"+
		"\2\u06cf\u06d1\5\u0130\u0099\2\u06d0\u06cf\3\2\2\2\u06d0\u06d1\3\2\2\2"+
		"\u06d1\u0105\3\2\2\2\u06d2\u06d9\5\u0108\u0085\2\u06d3\u06d9\5\u010a\u0086"+
		"\2\u06d4\u06d5\5\u010a\u0086\2\u06d5\u06d6\5\u010c\u0087\2\u06d6\u06d7"+
		"\5\u010e\u0088\2\u06d7\u06d9\3\2\2\2\u06d8\u06d2\3\2\2\2\u06d8\u06d3\3"+
		"\2\2\2\u06d8\u06d4\3\2\2\2\u06d9\u0107\3\2\2\2\u06da\u06db\5\u0110\u0089"+
		"\2\u06db\u06dc\5\u0108\u0085\2\u06dc\u0109\3\2\2\2\u06dd\u06de\b\u0086"+
		"\1\2\u06de\u06e0\5\u0118\u008d\2\u06df\u06e1\5\u00ecw\2\u06e0\u06df\3"+
		"\2\2\2\u06e0\u06e1\3\2\2\2\u06e1\u06e7\3\2\2\2\u06e2\u06e3\7`\2\2\u06e3"+
		"\u06e4\5\u0108\u0085\2\u06e4\u06e5\7a\2\2\u06e5\u06e7\3\2\2\2\u06e6\u06dd"+
		"\3\2\2\2\u06e6\u06e2\3\2\2\2\u06e7\u06f5\3\2\2\2\u06e8\u06e9\f\5\2\2\u06e9"+
		"\u06f4\5\u010c\u0087\2\u06ea\u06eb\f\4\2\2\u06eb\u06ed\7b\2\2\u06ec\u06ee"+
		"\5v<\2\u06ed\u06ec\3\2\2\2\u06ed\u06ee\3\2\2\2\u06ee\u06ef\3\2\2\2\u06ef"+
		"\u06f1\7c\2\2\u06f0\u06f2\5\u00ecw\2\u06f1\u06f0\3\2\2\2\u06f1\u06f2\3"+
		"\2\2\2\u06f2\u06f4\3\2\2\2\u06f3\u06e8\3\2\2\2\u06f3\u06ea\3\2\2\2\u06f4"+
		"\u06f7\3\2\2\2\u06f5\u06f3\3\2\2\2\u06f5\u06f6\3\2\2\2\u06f6\u010b\3\2"+
		"\2\2\u06f7\u06f5\3\2\2\2\u06f8\u06f9\7`\2\2\u06f9\u06fa\5\u0126\u0094"+
		"\2\u06fa\u06fc\7a\2\2\u06fb\u06fd\5\u0112\u008a\2\u06fc\u06fb\3\2\2\2"+
		"\u06fc\u06fd\3\2\2\2\u06fd\u06ff\3\2\2\2\u06fe\u0700\5\u0116\u008c\2\u06ff"+
		"\u06fe\3\2\2\2\u06ff\u0700\3\2\2\2\u0700\u0702\3\2\2\2\u0701\u0703\5\u0196"+
		"\u00cc\2\u0702\u0701\3\2\2\2\u0702\u0703\3\2\2\2\u0703\u0705\3\2\2\2\u0704"+
		"\u0706\5\u00ecw\2\u0705\u0704\3\2\2\2\u0705\u0706\3\2\2\2\u0706\u010d"+
		"\3\2\2\2\u0707\u0708\7\u0089\2\2\u0708\u070a\5\u00b2Z\2\u0709\u070b\5"+
		"\u011c\u008f\2\u070a\u0709\3\2\2\2\u070a\u070b\3\2\2\2\u070b\u010f\3\2"+
		"\2\2\u070c\u070e\7h\2\2\u070d\u070f\5\u00ecw\2\u070e\u070d\3\2\2\2\u070e"+
		"\u070f\3\2\2\2\u070f\u0711\3\2\2\2\u0710\u0712\5\u0112\u008a\2\u0711\u0710"+
		"\3\2\2\2\u0711\u0712\3\2\2\2\u0712\u0724\3\2\2\2\u0713\u0715\7l\2\2\u0714"+
		"\u0716\5\u00ecw\2\u0715\u0714\3\2\2\2\u0715\u0716\3\2\2\2\u0716\u0724"+
		"\3\2\2\2\u0717\u0719\7\16\2\2\u0718\u071a\5\u00ecw\2\u0719\u0718\3\2\2"+
		"\2\u0719\u071a\3\2\2\2\u071a\u0724\3\2\2\2\u071b\u071c\5\"\22\2\u071c"+
		"\u071e\7h\2\2\u071d\u071f\5\u00ecw\2\u071e\u071d\3\2\2\2\u071e\u071f\3"+
		"\2\2\2\u071f\u0721\3\2\2\2\u0720\u0722\5\u0112\u008a\2\u0721\u0720\3\2"+
		"\2\2\u0721\u0722\3\2\2\2\u0722\u0724\3\2\2\2\u0723\u070c\3\2\2\2\u0723"+
		"\u0713\3\2\2\2\u0723\u0717\3\2\2\2\u0723\u071b\3\2\2\2\u0724\u0111\3\2"+
		"\2\2\u0725\u0727\5\u0114\u008b\2\u0726\u0728\5\u0112\u008a\2\u0727\u0726"+
		"\3\2\2\2\u0727\u0728\3\2\2\2\u0728\u0113\3\2\2\2\u0729\u072a\t\b\2\2\u072a"+
		"\u0115\3\2\2\2\u072b\u072c\t\t\2\2\u072c\u0117\3\2\2\2\u072d\u072f\7\u0090"+
		"\2\2\u072e\u072d\3\2\2\2\u072e\u072f\3\2\2\2\u072f\u0730\3\2\2\2\u0730"+
		"\u0731\5\34\17\2\u0731\u0119\3\2\2\2\u0732\u0734\5\u00b0Y\2\u0733\u0735"+
		"\5\u011c\u008f\2\u0734\u0733\3\2\2\2\u0734\u0735\3\2\2\2\u0735\u011b\3"+
		"\2\2\2\u0736\u073f\5\u011e\u0090\2\u0737\u0739\5\u0120\u0091\2\u0738\u0737"+
		"\3\2\2\2\u0738\u0739\3\2\2\2\u0739\u073a\3\2\2\2\u073a\u073b\5\u010c\u0087"+
		"\2\u073b\u073c\5\u010e\u0088\2\u073c\u073f\3\2\2\2\u073d\u073f\5\u0122"+
		"\u0092\2\u073e\u0736\3\2\2\2\u073e\u0738\3\2\2\2\u073e\u073d\3\2\2\2\u073f"+
		"\u011d\3\2\2\2\u0740\u0746\5\u0120\u0091\2\u0741\u0743\5\u0110\u0089\2"+
		"\u0742\u0744\5\u011e\u0090\2\u0743\u0742\3\2\2\2\u0743\u0744\3\2\2\2\u0744"+
		"\u0746\3\2\2\2\u0745\u0740\3\2\2\2\u0745\u0741\3\2\2\2\u0746\u011f\3\2"+
		"\2\2\u0747\u0748\b\u0091\1\2\u0748\u0756\5\u010c\u0087\2\u0749\u074b\7"+
		"b\2\2\u074a\u074c\5v<\2\u074b\u074a\3\2\2\2\u074b\u074c\3\2\2\2\u074c"+
		"\u074d\3\2\2\2\u074d\u074f\7c\2\2\u074e\u0750\5\u00ecw\2\u074f\u074e\3"+
		"\2\2\2\u074f\u0750\3\2\2\2\u0750\u0756\3\2\2\2\u0751\u0752\7`\2\2\u0752"+
		"\u0753\5\u011e\u0090\2\u0753\u0754\7a\2\2\u0754\u0756\3\2\2\2\u0755\u0747"+
		"\3\2\2\2\u0755\u0749\3\2\2\2\u0755\u0751\3\2\2\2\u0756\u0764\3\2\2\2\u0757"+
		"\u0758\f\7\2\2\u0758\u0763\5\u010c\u0087\2\u0759\u075a\f\5\2\2\u075a\u075c"+
		"\7b\2\2\u075b\u075d\5v<\2\u075c\u075b\3\2\2\2\u075c\u075d\3\2\2\2\u075d"+
		"\u075e\3\2\2\2\u075e\u0760\7c\2\2\u075f\u0761\5\u00ecw\2\u0760\u075f\3"+
		"\2\2\2\u0760\u0761\3\2\2\2\u0761\u0763\3\2\2\2\u0762\u0757\3\2\2\2\u0762"+
		"\u0759\3\2\2\2\u0763\u0766\3\2\2\2\u0764\u0762\3\2\2\2\u0764\u0765\3\2"+
		"\2\2\u0765\u0121\3\2\2\2\u0766\u0764\3\2\2\2\u0767\u076c\5\u0124\u0093"+
		"\2\u0768\u0769\5\u0110\u0089\2\u0769\u076a\5\u0122\u0092\2\u076a\u076c"+
		"\3\2\2\2\u076b\u0767\3\2\2\2\u076b\u0768\3\2\2\2\u076c\u0123\3\2\2\2\u076d"+
		"\u076e\b\u0093\1\2\u076e\u076f\7\u0090\2\2\u076f\u077d\3\2\2\2\u0770\u0771"+
		"\f\5\2\2\u0771\u077c\5\u010c\u0087\2\u0772\u0773\f\4\2\2\u0773\u0775\7"+
		"b\2\2\u0774\u0776\5v<\2\u0775\u0774\3\2\2\2\u0775\u0776\3\2\2\2\u0776"+
		"\u0777\3\2\2\2\u0777\u0779\7c\2\2\u0778\u077a\5\u00ecw\2\u0779\u0778\3"+
		"\2\2\2\u0779\u077a\3\2\2\2\u077a\u077c\3\2\2\2\u077b\u0770\3\2\2\2\u077b"+
		"\u0772\3\2\2\2\u077c\u077f\3\2\2\2\u077d\u077b\3\2\2\2\u077d\u077e\3\2"+
		"\2\2\u077e\u0125\3\2\2\2\u077f\u077d\3\2\2\2\u0780\u0782\5\u0128\u0095"+
		"\2\u0781\u0780\3\2\2\2\u0781\u0782\3\2\2\2\u0782\u0784\3\2\2\2\u0783\u0785"+
		"\7\u0090\2\2\u0784\u0783\3\2\2\2\u0784\u0785\3\2\2\2\u0785\u078b\3\2\2"+
		"\2\u0786\u0787\5\u0128\u0095\2\u0787\u0788\7\u0087\2\2\u0788\u0789\7\u0090"+
		"\2\2\u0789\u078b\3\2\2\2\u078a\u0781\3\2\2\2\u078a\u0786\3\2\2\2\u078b"+
		"\u0127\3\2\2\2\u078c\u078d\b\u0095\1\2\u078d\u078e\5\u012a\u0096\2\u078e"+
		"\u0794\3\2\2\2\u078f\u0790\f\3\2\2\u0790\u0791\7\u0087\2\2\u0791\u0793"+
		"\5\u012a\u0096\2\u0792\u078f\3\2\2\2\u0793\u0796\3\2\2\2\u0794\u0792\3"+
		"\2\2\2\u0794\u0795\3\2\2\2\u0795\u0129\3\2\2\2\u0796\u0794\3\2\2\2\u0797"+
		"\u0799\5\u00ecw\2\u0798\u0797\3\2\2\2\u0798\u0799\3\2\2\2\u0799\u079a"+
		"\3\2\2\2\u079a\u079b\5\u00a4S\2\u079b\u079c\5\u0106\u0084\2\u079c\u07b7"+
		"\3\2\2\2\u079d\u079f\5\u00ecw\2\u079e\u079d\3\2\2\2\u079e\u079f\3\2\2"+
		"\2\u079f\u07a0\3\2\2\2\u07a0\u07a1\5\u00a4S\2\u07a1\u07a2\5\u0106\u0084"+
		"\2\u07a2\u07a3\7p\2\2\u07a3\u07a4\5\u0134\u009b\2\u07a4\u07b7\3\2\2\2"+
		"\u07a5\u07a7\5\u00ecw\2\u07a6\u07a5\3\2\2\2\u07a6\u07a7\3\2\2\2\u07a7"+
		"\u07a8\3\2\2\2\u07a8\u07aa\5\u00a4S\2\u07a9\u07ab\5\u011c\u008f\2\u07aa"+
		"\u07a9\3\2\2\2\u07aa\u07ab\3\2\2\2\u07ab\u07b7\3\2\2\2\u07ac\u07ae\5\u00ec"+
		"w\2\u07ad\u07ac\3\2\2\2\u07ad\u07ae\3\2\2\2\u07ae\u07af\3\2\2\2\u07af"+
		"\u07b1\5\u00a4S\2\u07b0\u07b2\5\u011c\u008f\2\u07b1\u07b0\3\2\2\2\u07b1"+
		"\u07b2\3\2\2\2\u07b2\u07b3\3\2\2\2\u07b3\u07b4\7p\2\2\u07b4\u07b5\5\u0134"+
		"\u009b\2\u07b5\u07b7\3\2\2\2\u07b6\u0798\3\2\2\2\u07b6\u079e\3\2\2\2\u07b6"+
		"\u07a6\3\2\2\2\u07b6\u07ad\3\2\2\2\u07b7\u012b\3\2\2\2\u07b8\u07ba\5\u00ec"+
		"w\2\u07b9\u07b8\3\2\2\2\u07b9\u07ba\3\2\2\2\u07ba\u07bc\3\2\2\2\u07bb"+
		"\u07bd\5\u00a4S\2\u07bc\u07bb\3\2\2\2\u07bc\u07bd\3\2\2\2\u07bd\u07be"+
		"\3\2\2\2\u07be\u07c0\5\u0106\u0084\2\u07bf\u07c1\5\u014e\u00a8\2\u07c0"+
		"\u07bf\3\2\2\2\u07c0\u07c1\3\2\2\2\u07c1\u07c2\3\2\2\2\u07c2\u07c3\5\u012e"+
		"\u0098\2\u07c3\u012d\3\2\2\2\u07c4\u07c6\5\u0166\u00b4\2\u07c5\u07c4\3"+
		"\2\2\2\u07c5\u07c6\3\2\2\2\u07c6\u07c7\3\2\2\2\u07c7\u07d0\5~@\2\u07c8"+
		"\u07d0\5\u018c\u00c7\2\u07c9\u07ca\7p\2\2\u07ca\u07cb\7&\2\2\u07cb\u07d0"+
		"\7\u008d\2\2\u07cc\u07cd\7p\2\2\u07cd\u07ce\7\'\2\2\u07ce\u07d0\7\u008d"+
		"\2\2\u07cf\u07c5\3\2\2\2\u07cf\u07c8\3\2\2\2\u07cf\u07c9\3\2\2\2\u07cf"+
		"\u07cc\3\2\2\2\u07d0\u012f\3\2\2\2\u07d1\u07d7\5\u0132\u009a\2\u07d2\u07d3"+
		"\7`\2\2\u07d3\u07d4\5<\37\2\u07d4\u07d5\7a\2\2\u07d5\u07d7\3\2\2\2\u07d6"+
		"\u07d1\3\2\2\2\u07d6\u07d2\3\2\2\2\u07d7\u0131\3\2\2\2\u07d8\u07d9\7p"+
		"\2\2\u07d9\u07dc\5\u0134\u009b\2\u07da\u07dc\5\u0138\u009d\2\u07db\u07d8"+
		"\3\2\2\2\u07db\u07da\3\2\2\2\u07dc\u0133\3\2\2\2\u07dd\u07e0\5p9\2\u07de"+
		"\u07e0\5\u0138\u009d\2\u07df\u07dd\3\2\2\2\u07df\u07de\3\2\2\2\u07e0\u0135"+
		"\3\2\2\2\u07e1\u07e2\b\u009c\1\2\u07e2\u07e4\5\u0134\u009b\2\u07e3\u07e5"+
		"\7\u0090\2\2\u07e4\u07e3\3\2\2\2\u07e4\u07e5\3\2\2\2\u07e5\u07ee\3\2\2"+
		"\2\u07e6\u07e7\f\3\2\2\u07e7\u07e8\7\u0087\2\2\u07e8\u07ea\5\u0134\u009b"+
		"\2\u07e9\u07eb\7\u0090\2\2\u07ea\u07e9\3\2\2\2\u07ea\u07eb\3\2\2\2\u07eb"+
		"\u07ed\3\2\2\2\u07ec\u07e6\3\2\2\2\u07ed\u07f0\3\2\2\2\u07ee\u07ec\3\2"+
		"\2\2\u07ee\u07ef\3\2\2\2\u07ef\u0137\3\2\2\2\u07f0\u07ee\3\2\2\2\u07f1"+
		"\u07f2\7d\2\2\u07f2\u07f4\5\u0136\u009c\2\u07f3\u07f5\7\u0087\2\2\u07f4"+
		"\u07f3\3\2\2\2\u07f4\u07f5\3\2\2\2\u07f5\u07f6\3\2\2\2\u07f6\u07f7\7e"+
		"\2\2\u07f7\u07fb\3\2\2\2\u07f8\u07f9\7d\2\2\u07f9\u07fb\7e\2\2\u07fa\u07f1"+
		"\3\2\2\2\u07fa\u07f8\3\2\2\2\u07fb\u0139\3\2\2\2\u07fc\u07ff\7\u0091\2"+
		"\2\u07fd\u07ff\5\u017a\u00be\2\u07fe\u07fc\3\2\2\2\u07fe\u07fd\3\2\2\2"+
		"\u07ff\u013b\3\2\2\2\u0800\u0801\5\u013e\u00a0\2\u0801\u0803\7d\2\2\u0802"+
		"\u0804\5\u0146\u00a4\2\u0803\u0802\3\2\2\2\u0803\u0804\3\2\2\2\u0804\u0805"+
		"\3\2\2\2\u0805\u0806\7e\2\2\u0806\u013d\3\2\2\2\u0807\u0809\5\u0144\u00a3"+
		"\2\u0808\u080a\5\u00ecw\2\u0809\u0808\3\2\2\2\u0809\u080a\3\2\2\2\u080a"+
		"\u080b\3\2\2\2\u080b\u080d\5\u0140\u00a1\2\u080c\u080e\5\u0142\u00a2\2"+
		"\u080d\u080c\3\2\2\2\u080d\u080e\3\2\2\2\u080e\u0810\3\2\2\2\u080f\u0811"+
		"\5\u0154\u00ab\2\u0810\u080f\3\2\2\2\u0810\u0811\3\2\2\2\u0811\u081a\3"+
		"\2\2\2\u0812\u0814\5\u0144\u00a3\2\u0813\u0815\5\u00ecw\2\u0814\u0813"+
		"\3\2\2\2\u0814\u0815\3\2\2\2\u0815\u0817\3\2\2\2\u0816\u0818\5\u0154\u00ab"+
		"\2\u0817\u0816\3\2\2\2\u0817\u0818\3\2\2\2\u0818\u081a\3\2\2\2\u0819\u0807"+
		"\3\2\2\2\u0819\u0812\3\2\2\2\u081a\u013f\3\2\2\2\u081b\u081d\5\"\22\2"+
		"\u081c\u081b\3\2\2\2\u081c\u081d\3\2\2\2\u081d\u081e\3\2\2\2\u081e\u081f"+
		"\5\u013a\u009e\2\u081f\u0141\3\2\2\2\u0820\u0821\7\61\2\2\u0821\u0143"+
		"\3\2\2\2\u0822\u0823\t\n\2\2\u0823\u0145\3\2\2\2\u0824\u0826\5\u0148\u00a5"+
		"\2\u0825\u0827\5\u0146\u00a4\2\u0826\u0825\3\2\2\2\u0826\u0827\3\2\2\2"+
		"\u0827\u082e\3\2\2\2\u0828\u0829\5\u015e\u00b0\2\u0829\u082b\7\u008b\2"+
		"\2\u082a\u082c\5\u0146\u00a4\2\u082b\u082a\3\2\2\2\u082b\u082c\3\2\2\2"+
		"\u082c\u082e\3\2\2\2\u082d\u0824\3\2\2\2\u082d\u0828\3\2\2\2\u082e\u0147"+
		"\3\2\2\2\u082f\u0831\5\u00ecw\2\u0830\u082f\3\2\2\2\u0830\u0831\3\2\2"+
		"\2\u0831\u0833\3\2\2\2\u0832\u0834\5\u00a4S\2\u0833\u0832\3\2\2\2\u0833"+
		"\u0834\3\2\2\2\u0834\u0836\3\2\2\2\u0835\u0837\5\u014a\u00a6\2\u0836\u0835"+
		"\3\2\2\2\u0836\u0837\3\2\2\2\u0837\u0838\3\2\2\2\u0838\u0840\7\u008d\2"+
		"\2\u0839\u0840\5\u012c\u0097\2\u083a\u0840\5\u00e4s\2\u083b\u0840\5\u009c"+
		"O\2\u083c\u0840\5\u0172\u00ba\2\u083d\u0840\5\u0098M\2\u083e\u0840\5\u009e"+
		"P\2\u083f\u0830\3\2\2\2\u083f\u0839\3\2\2\2\u083f\u083a\3\2\2\2\u083f"+
		"\u083b\3\2\2\2\u083f\u083c\3\2\2\2\u083f\u083d\3\2\2\2\u083f\u083e\3\2"+
		"\2\2\u0840\u0149\3\2\2\2\u0841\u0842\b\u00a6\1\2\u0842\u0843\5\u014c\u00a7"+
		"\2\u0843\u0849\3\2\2\2\u0844\u0845\f\3\2\2\u0845\u0846\7\u0087\2\2\u0846"+
		"\u0848\5\u014c\u00a7\2\u0847\u0844\3\2\2\2\u0848\u084b\3\2\2\2\u0849\u0847"+
		"\3\2\2\2\u0849\u084a\3\2\2\2\u084a\u014b\3\2\2\2\u084b\u0849\3\2\2\2\u084c"+
		"\u084e\5\u0106\u0084\2\u084d\u084f\5\u014e\u00a8\2\u084e\u084d\3\2\2\2"+
		"\u084e\u084f\3\2\2\2\u084f\u0851\3\2\2\2\u0850\u0852\5\u0152\u00aa\2\u0851"+
		"\u0850\3\2\2\2\u0851\u0852\3\2\2\2\u0852\u0860\3\2\2\2\u0853\u0855\5\u0106"+
		"\u0084\2\u0854\u0856\5\u0132\u009a\2\u0855\u0854\3\2\2\2\u0855\u0856\3"+
		"\2\2\2\u0856\u0860\3\2\2\2\u0857\u0859\7\u0091\2\2\u0858\u0857\3\2\2\2"+
		"\u0858\u0859\3\2\2\2\u0859\u085b\3\2\2\2\u085a\u085c\5\u00ecw\2\u085b"+
		"\u085a\3\2\2\2\u085b\u085c\3\2\2\2\u085c\u085d\3\2\2\2\u085d\u085e\7\u008b"+
		"\2\2\u085e\u0860\5v<\2\u085f\u084c\3\2\2\2\u085f\u0853\3\2\2\2\u085f\u0858"+
		"\3\2\2\2\u0860\u014d\3\2\2\2\u0861\u0862\b\u00a8\1\2\u0862\u0863\5\u0150"+
		"\u00a9\2\u0863\u0868\3\2\2\2\u0864\u0865\f\3\2\2\u0865\u0867\5\u0150\u00a9"+
		"\2\u0866\u0864\3\2\2\2\u0867\u086a\3\2\2\2\u0868\u0866\3\2\2\2\u0868\u0869"+
		"\3\2\2\2\u0869\u014f\3\2\2\2\u086a\u0868\3\2\2\2\u086b\u086c\t\13\2\2"+
		"\u086c\u0151\3\2\2\2\u086d\u086e\7p\2\2\u086e\u086f\7\u0094\2\2\u086f"+
		"\u0870\b\u00aa\1\2\u0870\u0153\3\2\2\2\u0871\u0872\7\u008b\2\2\u0872\u0873"+
		"\5\u0156\u00ac\2\u0873\u0155\3\2\2\2\u0874\u0875\b\u00ac\1\2\u0875\u0877"+
		"\5\u0158\u00ad\2\u0876\u0878\7\u0090\2\2\u0877\u0876\3\2\2\2\u0877\u0878"+
		"\3\2\2\2\u0878\u0881\3\2\2\2\u0879\u087a\f\3\2\2\u087a\u087b\7\u0087\2"+
		"\2\u087b\u087d\5\u0158\u00ad\2\u087c\u087e\7\u0090\2\2\u087d\u087c\3\2"+
		"\2\2\u087d\u087e\3\2\2\2\u087e\u0880\3\2\2\2\u087f\u0879\3\2\2\2\u0880"+
		"\u0883\3\2\2\2\u0881\u087f\3\2\2\2\u0881\u0882\3\2\2\2\u0882\u0157\3\2"+
		"\2\2\u0883\u0881\3\2\2\2\u0884\u0886\5\u00ecw\2\u0885\u0884\3\2\2\2\u0885"+
		"\u0886\3\2\2\2\u0886\u0887\3\2\2\2\u0887\u089a\5\u015c\u00af\2\u0888\u088a"+
		"\5\u00ecw\2\u0889\u0888\3\2\2\2\u0889\u088a\3\2\2\2\u088a\u088b\3\2\2"+
		"\2\u088b\u088d\7[\2\2\u088c\u088e\5\u015e\u00b0\2\u088d\u088c\3\2\2\2"+
		"\u088d\u088e\3\2\2\2\u088e\u088f\3\2\2\2\u088f\u089a\5\u015c\u00af\2\u0890"+
		"\u0892\5\u00ecw\2\u0891\u0890\3\2\2\2\u0891\u0892\3\2\2\2\u0892\u0893"+
		"\3\2\2\2\u0893\u0895\5\u015e\u00b0\2\u0894\u0896\7[\2\2\u0895\u0894\3"+
		"\2\2\2\u0895\u0896\3\2\2\2\u0896\u0897\3\2\2\2\u0897\u0898\5\u015c\u00af"+
		"\2\u0898\u089a\3\2\2\2\u0899\u0885\3\2\2\2\u0899\u0889\3\2\2\2\u0899\u0891"+
		"\3\2\2\2\u089a\u0159\3\2\2\2\u089b\u089d\5\"\22\2\u089c\u089b\3\2\2\2"+
		"\u089c\u089d\3\2\2\2\u089d\u089e\3\2\2\2\u089e\u08a1\5\u013a\u009e\2\u089f"+
		"\u08a1\5\u00b8]\2\u08a0\u089c\3\2\2\2\u08a0\u089f\3\2\2\2\u08a1\u015b"+
		"\3\2\2\2\u08a2\u08a3\5\u015a\u00ae\2\u08a3\u015d\3\2\2\2\u08a4\u08a5\t"+
		"\f\2\2\u08a5\u015f\3\2\2\2\u08a6\u08a7\7?\2\2\u08a7\u08a8\5\u0162\u00b2"+
		"\2\u08a8\u0161\3\2\2\2\u08a9\u08ab\5\u00b0Y\2\u08aa\u08ac\5\u0164\u00b3"+
		"\2\u08ab\u08aa\3\2\2\2\u08ab\u08ac\3\2\2\2\u08ac\u0163\3\2\2\2\u08ad\u08af"+
		"\5\u0110\u0089\2\u08ae\u08b0\5\u0164\u00b3\2\u08af\u08ae\3\2\2\2\u08af"+
		"\u08b0\3\2\2\2\u08b0\u0165\3\2\2\2\u08b1\u08b2\7\u008b\2\2\u08b2\u08b3"+
		"\5\u0168\u00b5\2\u08b3\u0167\3\2\2\2\u08b4\u08b6\5\u016a\u00b6\2\u08b5"+
		"\u08b7\7\u0090\2\2\u08b6\u08b5\3\2\2\2\u08b6\u08b7\3\2\2\2\u08b7\u08c0"+
		"\3\2\2\2\u08b8\u08ba\5\u016a\u00b6\2\u08b9\u08bb\7\u0090\2\2\u08ba\u08b9"+
		"\3\2\2\2\u08ba\u08bb\3\2\2\2\u08bb\u08bc\3\2\2\2\u08bc\u08bd\7\u0087\2"+
		"\2\u08bd\u08be\5\u0168\u00b5\2\u08be\u08c0\3\2\2\2\u08bf\u08b4\3\2\2\2"+
		"\u08bf\u08b8\3\2\2\2\u08c0\u0169\3\2\2\2\u08c1\u08c2\5\u016c\u00b7\2\u08c2"+
		"\u08c4\7`\2\2\u08c3\u08c5\5<\37\2\u08c4\u08c3\3\2\2\2\u08c4\u08c5\3\2"+
		"\2\2\u08c5\u08c6\3\2\2\2\u08c6\u08c7\7a\2\2\u08c7\u08cc\3\2\2\2\u08c8"+
		"\u08c9\5\u016c\u00b7\2\u08c9\u08ca\5\u0138\u009d\2\u08ca\u08cc\3\2\2\2"+
		"\u08cb\u08c1\3\2\2\2\u08cb\u08c8\3\2\2\2\u08cc\u016b\3\2\2\2\u08cd\u08d0"+
		"\5\u015a\u00ae\2\u08ce\u08d0\7\u0091\2\2\u08cf\u08cd\3\2\2\2\u08cf\u08ce"+
		"\3\2\2\2\u08d0\u016d\3\2\2\2\u08d1\u08d2\7?\2\2\u08d2\u08d3\5\u019e\u00d0"+
		"\2\u08d3\u016f\3\2\2\2\u08d4\u08d7\7?\2\2\u08d5\u08d8\7\u009a\2\2\u08d6"+
		"\u08d8\5\20\t\2\u08d7\u08d5\3\2\2\2\u08d7\u08d6\3\2\2\2\u08d8\u08d9\3"+
		"\2\2\2\u08d9\u08e0\7\u0091\2\2\u08da\u08dd\7?\2\2\u08db\u08de\7\u009d"+
		"\2\2\u08dc\u08de\5\20\t\2\u08dd\u08db\3\2\2\2\u08dd\u08dc\3\2\2\2\u08de"+
		"\u08e0\3\2\2\2\u08df\u08d4\3\2\2\2\u08df\u08da\3\2\2\2\u08e0\u0171\3\2"+
		"\2\2\u08e1\u08e2\7O\2\2\u08e2\u08e3\7q\2\2\u08e3\u08e4\5\u0174\u00bb\2"+
		"\u08e4\u08e5\7r\2\2\u08e5\u08e6\5\u0094K\2\u08e6\u0173\3\2\2\2\u08e7\u08e8"+
		"\b\u00bb\1\2\u08e8\u08e9\5\u0176\u00bc\2\u08e9\u08ef\3\2\2\2\u08ea\u08eb"+
		"\f\3\2\2\u08eb\u08ec\7\u0087\2\2\u08ec\u08ee\5\u0176\u00bc\2\u08ed\u08ea"+
		"\3\2\2\2\u08ee\u08f1\3\2\2\2\u08ef\u08ed\3\2\2\2\u08ef\u08f0\3\2\2\2\u08f0"+
		"\u0175\3\2\2\2\u08f1\u08ef\3\2\2\2\u08f2\u08f5\5\u0178\u00bd\2\u08f3\u08f5"+
		"\5\u012a\u0096\2\u08f4\u08f2\3\2\2\2\u08f4\u08f3\3\2\2\2\u08f5\u0177\3"+
		"\2\2\2\u08f6\u08f8\7 \2\2\u08f7\u08f9\7\u0090\2\2\u08f8\u08f7\3\2\2\2"+
		"\u08f8\u08f9\3\2\2\2\u08f9\u08fb\3\2\2\2\u08fa\u08fc\7\u0091\2\2\u08fb"+
		"\u08fa\3\2\2\2\u08fb\u08fc\3\2\2\2\u08fc\u0927\3\2\2\2\u08fd\u08ff\7 "+
		"\2\2\u08fe\u0900\7\u0091\2\2\u08ff\u08fe\3\2\2\2\u08ff\u0900\3\2\2\2\u0900"+
		"\u0901\3\2\2\2\u0901\u0902\7p\2\2\u0902\u0927\5\u011a\u008e\2\u0903\u0905"+
		"\7W\2\2\u0904\u0906\7\u0090\2\2\u0905\u0904\3\2\2\2\u0905\u0906\3\2\2"+
		"\2\u0906\u0908\3\2\2\2\u0907\u0909\7\u0091\2\2\u0908\u0907\3\2\2\2\u0908"+
		"\u0909\3\2\2\2\u0909\u0927\3\2\2\2\u090a\u090c\7W\2\2\u090b\u090d\7\u0091"+
		"\2\2\u090c\u090b\3\2\2\2\u090c\u090d\3\2\2\2\u090d\u090e\3\2\2\2\u090e"+
		"\u090f\7p\2\2\u090f\u0927\5\u011a\u008e\2\u0910\u0911\7O\2\2\u0911\u0912"+
		"\7q\2\2\u0912\u0913\5\u0174\u00bb\2\u0913\u0914\7r\2\2\u0914\u0916\7 "+
		"\2\2\u0915\u0917\7\u0090\2\2\u0916\u0915\3\2\2\2\u0916\u0917\3\2\2\2\u0917"+
		"\u0919\3\2\2\2\u0918\u091a\7\u0091\2\2\u0919\u0918\3\2\2\2\u0919\u091a"+
		"\3\2\2\2\u091a\u0927\3\2\2\2\u091b\u091c\7O\2\2\u091c\u091d\7q\2\2\u091d"+
		"\u091e\5\u0174\u00bb\2\u091e\u091f\7r\2\2\u091f\u0921\7 \2\2\u0920\u0922"+
		"\7\u0091\2\2\u0921\u0920\3\2\2\2\u0921\u0922\3\2\2\2\u0922\u0923\3\2\2"+
		"\2\u0923\u0924\7p\2\2\u0924\u0925\5\34\17\2\u0925\u0927\3\2\2\2\u0926"+
		"\u08f6\3\2\2\2\u0926\u08fd\3\2\2\2\u0926\u0903\3\2\2\2\u0926\u090a\3\2"+
		"\2\2\u0926\u0910\3\2\2\2\u0926\u091b\3\2\2\2\u0927\u0179\3\2\2\2\u0928"+
		"\u0929\5\u017e\u00c0\2\u0929\u092b\7q\2\2\u092a\u092c\5\u0180\u00c1\2"+
		"\u092b\u092a\3\2\2\2\u092b\u092c\3\2\2\2\u092c\u092d\3\2\2\2\u092d\u092e"+
		"\7r\2\2\u092e\u017b\3\2\2\2\u092f\u093f\5\u017a\u00be\2\u0930\u0931\5"+
		"\u016e\u00b8\2\u0931\u0933\7q\2\2\u0932\u0934\5\u0180\u00c1\2\u0933\u0932"+
		"\3\2\2\2\u0933\u0934\3\2\2\2\u0934\u0935\3\2\2\2\u0935\u0936\7r\2\2\u0936"+
		"\u093f\3\2\2\2\u0937\u0938\5\u0170\u00b9\2\u0938\u093a\7q\2\2\u0939\u093b"+
		"\5\u0180\u00c1\2\u093a\u0939\3\2\2\2\u093a\u093b\3\2\2\2\u093b\u093c\3"+
		"\2\2\2\u093c\u093d\7r\2\2\u093d\u093f\3\2\2\2\u093e\u092f\3\2\2\2\u093e"+
		"\u0930\3\2\2\2\u093e\u0937\3\2\2\2\u093f\u017d\3\2\2\2\u0940\u0941\7\u0091"+
		"\2\2\u0941\u017f\3\2\2\2\u0942\u0943\b\u00c1\1\2\u0943\u0945\5\u0182\u00c2"+
		"\2\u0944\u0946\7\u0090\2\2\u0945\u0944\3\2\2\2\u0945\u0946\3\2\2\2\u0946"+
		"\u094f\3\2\2\2\u0947\u0948\f\3\2\2\u0948\u0949\7\u0087\2\2\u0949\u094b"+
		"\5\u0182\u00c2\2\u094a\u094c\7\u0090\2\2\u094b\u094a\3\2\2\2\u094b\u094c"+
		"\3\2\2\2\u094c\u094e\3\2\2\2\u094d\u0947\3\2\2\2\u094e\u0951\3\2\2\2\u094f"+
		"\u094d\3\2\2\2\u094f\u0950\3\2\2\2\u0950\u0181\3\2\2\2\u0951\u094f\3\2"+
		"\2\2\u0952\u0956\5\u011a\u008e\2\u0953\u0956\5v<\2\u0954\u0956\5\34\17"+
		"\2\u0955\u0952\3\2\2\2\u0955\u0953\3\2\2\2\u0955\u0954\3\2\2\2\u0956\u0183"+
		"\3\2\2\2\u0957\u0958\7W\2\2\u0958\u0959\5\"\22\2\u0959\u095a\7\u0091\2"+
		"\2\u095a\u0963\3\2\2\2\u095b\u095c\7W\2\2\u095c\u095e\5\"\22\2\u095d\u095f"+
		"\7O\2\2\u095e\u095d\3\2\2\2\u095e\u095f\3\2\2\2\u095f\u0960\3\2\2\2\u0960"+
		"\u0961\5\u017a\u00be\2\u0961\u0963\3\2\2\2\u0962\u0957\3\2\2\2\u0962\u095b"+
		"\3\2\2\2\u0963\u0185\3\2\2\2\u0964\u0966\7/\2\2\u0965\u0964\3\2\2\2\u0965"+
		"\u0966\3\2\2\2\u0966\u0967\3\2\2\2\u0967\u0968\7O\2\2\u0968\u0969\5\u0094"+
		"K\2\u0969\u0187\3\2\2\2\u096a\u096b\7O\2\2\u096b\u096c\7q\2\2\u096c\u096d"+
		"\7r\2\2\u096d\u096e\5\u0094K\2\u096e\u0189\3\2\2\2\u096f\u0970\7T\2\2"+
		"\u0970\u0971\5~@\2\u0971\u0972\5\u018e\u00c8\2\u0972\u018b\3\2\2\2\u0973"+
		"\u0975\7T\2\2\u0974\u0976\5\u0166\u00b4\2\u0975\u0974\3\2\2\2\u0975\u0976"+
		"\3\2\2\2\u0976\u0977\3\2\2\2\u0977\u0978\5~@\2\u0978\u0979\5\u018e\u00c8"+
		"\2\u0979\u018d\3\2\2\2\u097a\u097c\5\u0190\u00c9\2\u097b\u097d\5\u018e"+
		"\u00c8\2\u097c\u097b\3\2\2\2\u097c\u097d\3\2\2\2\u097d\u018f\3\2\2\2\u097e"+
		"\u097f\7\34\2\2\u097f\u0980\7`\2\2\u0980\u0981\5\u0192\u00ca\2\u0981\u0982"+
		"\7a\2\2\u0982\u0983\5~@\2\u0983\u0191\3\2\2\2\u0984\u0986\5\u00ecw\2\u0985"+
		"\u0984\3\2\2\2\u0985\u0986\3\2\2\2\u0986\u0987\3\2\2\2\u0987\u0988\5\u00b0"+
		"Y\2\u0988\u0989\5\u0106\u0084\2\u0989\u0993\3\2\2\2\u098a\u098c\5\u00ec"+
		"w\2\u098b\u098a\3\2\2\2\u098b\u098c\3\2\2\2\u098c\u098d\3\2\2\2\u098d"+
		"\u098f\5\u00b0Y\2\u098e\u0990\5\u011c\u008f\2\u098f\u098e\3\2\2\2\u098f"+
		"\u0990\3\2\2\2\u0990\u0993";
	private static final String _serializedATNSegment1 =
		"\3\2\2\2\u0991\u0993\7\u0090\2\2\u0992\u0985\3\2\2\2\u0992\u098b\3\2\2"+
		"\2\u0992\u0991\3\2\2\2\u0993\u0193\3\2\2\2\u0994\u0996\7R\2\2\u0995\u0997"+
		"\5p9\2\u0996\u0995\3\2\2\2\u0996\u0997\3\2\2\2\u0997\u0195\3\2\2\2\u0998"+
		"\u099b\5\u0198\u00cd\2\u0999\u099b\5\u019c\u00cf\2\u099a\u0998\3\2\2\2"+
		"\u099a\u0999\3\2\2\2\u099b\u0197\3\2\2\2\u099c\u099d\7R\2\2\u099d\u099f"+
		"\7`\2\2\u099e\u09a0\5\u019a\u00ce\2\u099f\u099e\3\2\2\2\u099f\u09a0\3"+
		"\2\2\2\u09a0\u09a1\3\2\2\2\u09a1\u09a2\7a\2\2\u09a2\u0199\3\2\2\2\u09a3"+
		"\u09a4\b\u00ce\1\2\u09a4\u09a6\5\u011a\u008e\2\u09a5\u09a7\7\u0090\2\2"+
		"\u09a6\u09a5\3\2\2\2\u09a6\u09a7\3\2\2\2\u09a7\u09b0\3\2\2\2\u09a8\u09a9"+
		"\f\3\2\2\u09a9\u09aa\7\u0087\2\2\u09aa\u09ac\5\u011a\u008e\2\u09ab\u09ad"+
		"\7\u0090\2\2\u09ac\u09ab\3\2\2\2\u09ac\u09ad\3\2\2\2\u09ad\u09af\3\2\2"+
		"\2\u09ae\u09a8\3\2\2\2\u09af\u09b2\3\2\2\2\u09b0\u09ae\3\2\2\2\u09b0\u09b1"+
		"\3\2\2\2\u09b1\u019b\3\2\2\2\u09b2\u09b0\3\2\2\2\u09b3\u09b4\7=\2\2\u09b4"+
		"\u09b5\7`\2\2\u09b5\u09b6\5v<\2\u09b6\u09b7\7a\2\2\u09b7\u09ba\3\2\2\2"+
		"\u09b8\u09ba\7=\2\2\u09b9\u09b3\3\2\2\2\u09b9\u09b8\3\2\2\2\u09ba\u019d"+
		"\3\2\2\2\u09bb\u09ef\7<\2\2\u09bc\u09ef\7\'\2\2\u09bd\u09be\7<\2\2\u09be"+
		"\u09bf\7b\2\2\u09bf\u09ef\7c\2\2\u09c0\u09c1\7\'\2\2\u09c1\u09c2\7b\2"+
		"\2\u09c2\u09ef\7c\2\2\u09c3\u09ef\7f\2\2\u09c4\u09ef\7g\2\2\u09c5\u09ef"+
		"\7h\2\2\u09c6\u09ef\7i\2\2\u09c7\u09ef\7j\2\2\u09c8\u09ef\7k\2\2\u09c9"+
		"\u09ef\7l\2\2\u09ca\u09ef\7m\2\2\u09cb\u09ef\7n\2\2\u09cc\u09ef\7\f\2"+
		"\2\u09cd\u09ef\7\r\2\2\u09ce\u09ef\7p\2\2\u09cf\u09ef\7q\2\2\u09d0\u09ef"+
		"\7r\2\2\u09d1\u09ef\7s\2\2\u09d2\u09ef\7t\2\2\u09d3\u09ef\7u\2\2\u09d4"+
		"\u09ef\7v\2\2\u09d5\u09ef\7w\2\2\u09d6\u09ef\7x\2\2\u09d7\u09ef\7y\2\2"+
		"\u09d8\u09ef\7z\2\2\u09d9\u09ef\7{\2\2\u09da\u09ef\7|\2\2\u09db\u09ef"+
		"\7~\2\2\u09dc\u09ef\7}\2\2\u09dd\u09ef\7\177\2\2\u09de\u09ef\7\u0080\2"+
		"\2\u09df\u09ef\7\u0081\2\2\u09e0\u09ef\7\u0082\2\2\u09e1\u09ef\7\16\2"+
		"\2\u09e2\u09ef\7\17\2\2\u09e3\u09ef\7\20\2\2\u09e4\u09ef\7\21\2\2\u09e5"+
		"\u09ef\7\u0085\2\2\u09e6\u09ef\7\u0086\2\2\u09e7\u09ef\7\u0087\2\2\u09e8"+
		"\u09ef\7\u0088\2\2\u09e9\u09ef\7\u0089\2\2\u09ea\u09eb\7`\2\2\u09eb\u09ef"+
		"\7a\2\2\u09ec\u09ed\7b\2\2\u09ed\u09ef\7c\2\2\u09ee\u09bb\3\2\2\2\u09ee"+
		"\u09bc\3\2\2\2\u09ee\u09bd\3\2\2\2\u09ee\u09c0\3\2\2\2\u09ee\u09c3\3\2"+
		"\2\2\u09ee\u09c4\3\2\2\2\u09ee\u09c5\3\2\2\2\u09ee\u09c6\3\2\2\2\u09ee"+
		"\u09c7\3\2\2\2\u09ee\u09c8\3\2\2\2\u09ee\u09c9\3\2\2\2\u09ee\u09ca\3\2"+
		"\2\2\u09ee\u09cb\3\2\2\2\u09ee\u09cc\3\2\2\2\u09ee\u09cd\3\2\2\2\u09ee"+
		"\u09ce\3\2\2\2\u09ee\u09cf\3\2\2\2\u09ee\u09d0\3\2\2\2\u09ee\u09d1\3\2"+
		"\2\2\u09ee\u09d2\3\2\2\2\u09ee\u09d3\3\2\2\2\u09ee\u09d4\3\2\2\2\u09ee"+
		"\u09d5\3\2\2\2\u09ee\u09d6\3\2\2\2\u09ee\u09d7\3\2\2\2\u09ee\u09d8\3\2"+
		"\2\2\u09ee\u09d9\3\2\2\2\u09ee\u09da\3\2\2\2\u09ee\u09db\3\2\2\2\u09ee"+
		"\u09dc\3\2\2\2\u09ee\u09dd\3\2\2\2\u09ee\u09de\3\2\2\2\u09ee\u09df\3\2"+
		"\2\2\u09ee\u09e0\3\2\2\2\u09ee\u09e1\3\2\2\2\u09ee\u09e2\3\2\2\2\u09ee"+
		"\u09e3\3\2\2\2\u09ee\u09e4\3\2\2\2\u09ee\u09e5\3\2\2\2\u09ee\u09e6\3\2"+
		"\2\2\u09ee\u09e7\3\2\2\2\u09ee\u09e8\3\2\2\2\u09ee\u09e9\3\2\2\2\u09ee"+
		"\u09ea\3\2\2\2\u09ee\u09ec\3\2\2\2\u09ef\u019f\3\2\2\2\u09f0\u09f9\7\u0092"+
		"\2\2\u09f1\u09f9\7\u0098\2\2\u09f2\u09f9\7\u0099\2\2\u09f3\u09f9\7\u009a"+
		"\2\2\u09f4\u09f9\5\u01a2\u00d2\2\u09f5\u09f9\5\u01a4\u00d3\2\u09f6\u09f9"+
		"\5\u01a6\u00d4\2\u09f7\u09f9\5\20\t\2\u09f8\u09f0\3\2\2\2\u09f8\u09f1"+
		"\3\2\2\2\u09f8\u09f2\3\2\2\2\u09f8\u09f3\3\2\2\2\u09f8\u09f4\3\2\2\2\u09f8"+
		"\u09f5\3\2\2\2\u09f8\u09f6\3\2\2\2\u09f8\u09f7\3\2\2\2\u09f9\u01a1\3\2"+
		"\2\2\u09fa\u09fb\t\r\2\2\u09fb\u01a3\3\2\2\2\u09fc\u09fd\7>\2\2\u09fd"+
		"\u01a5\3\2\2\2\u09fe\u0a04\7\u009b\2\2\u09ff\u0a04\7\u009c\2\2\u0a00\u0a04"+
		"\7\u009d\2\2\u0a01\u0a04\7\u009e\2\2\u0a02\u0a04\5\20\t\2\u0a03\u09fe"+
		"\3\2\2\2\u0a03\u09ff\3\2\2\2\u0a03\u0a00\3\2\2\2\u0a03\u0a01\3\2\2\2\u0a03"+
		"\u0a02\3\2\2\2\u0a04\u01a7\3\2\2\2\u0144\u01a9\u01be\u01c8\u01db\u01ea"+
		"\u01f4\u01f8\u0203\u0207\u0216\u021d\u0222\u0224\u0229\u022f\u0239\u0240"+
		"\u0246\u024a\u024f\u0255\u025c\u0262\u0265\u0268\u026b\u0272\u0279\u02ad"+
		"\u02bc\u02c2\u02c8\u02d5\u02d7\u02e1\u02f0\u02f6\u0314\u0319\u031d\u0321"+
		"\u0324\u0328\u032e\u0330\u0338\u033c\u033f\u0346\u034d\u0351\u0356\u035a"+
		"\u035d\u0362\u0368\u0375\u0380\u0382\u0391\u0393\u039f\u03a1\u03ad\u03c1"+
		"\u03c3\u03cf\u03d1\u03dc\u03e7\u03f2\u03fe\u0400\u040c\u040e\u0418\u0421"+
		"\u042d\u0434\u0438\u043c\u0440\u0444\u044a\u044d\u0450\u0456\u045e\u0463"+
		"\u0466\u046c\u0477\u048e\u0492\u049a\u04a0\u04b4\u04b8\u04c5\u04c9\u04cc"+
		"\u04d3\u04db\u04e5\u04f0\u04fc\u0506\u050b\u0512\u0515\u051a\u051f\u0527"+
		"\u0537\u053b\u0540\u054b\u0551\u0555\u055a\u055e\u0563\u0566\u057c\u0582"+
		"\u058d\u0591\u0594\u059e\u05a4\u05a7\u05ae\u05b8\u05bc\u05bf\u05c2\u05c6"+
		"\u05cb\u05cd\u05d1\u05d5\u05de\u05eb\u05f3\u05f9\u05ff\u0603\u0606\u060f"+
		"\u0618\u0620\u062b\u0631\u063c\u063f\u0644\u0653\u0659\u0662\u066c\u0672"+
		"\u067a\u067e\u0682\u0687\u068c\u0693\u0695\u069a\u069e\u06ac\u06b2\u06c1"+
		"\u06cb\u06d0\u06d8\u06e0\u06e6\u06ed\u06f1\u06f3\u06f5\u06fc\u06ff\u0702"+
		"\u0705\u070a\u070e\u0711\u0715\u0719\u071e\u0721\u0723\u0727\u072e\u0734"+
		"\u0738\u073e\u0743\u0745\u074b\u074f\u0755\u075c\u0760\u0762\u0764\u076b"+
		"\u0775\u0779\u077b\u077d\u0781\u0784\u078a\u0794\u0798\u079e\u07a6\u07aa"+
		"\u07ad\u07b1\u07b6\u07b9\u07bc\u07c0\u07c5\u07cf\u07d6\u07db\u07df\u07e4"+
		"\u07ea\u07ee\u07f4\u07fa\u07fe\u0803\u0809\u080d\u0810\u0814\u0817\u0819"+
		"\u081c\u0826\u082b\u082d\u0830\u0833\u0836\u083f\u0849\u084e\u0851\u0855"+
		"\u0858\u085b\u085f\u0868\u0877\u087d\u0881\u0885\u0889\u088d\u0891\u0895"+
		"\u0899\u089c\u08a0\u08ab\u08af\u08b6\u08ba\u08bf\u08c4\u08cb\u08cf\u08d7"+
		"\u08dd\u08df\u08ef\u08f4\u08f8\u08fb\u08ff\u0905\u0908\u090c\u0916\u0919"+
		"\u0921\u0926\u092b\u0933\u093a\u093e\u0945\u094b\u094f\u0955\u095e\u0962"+
		"\u0965\u0975\u097c\u0985\u098b\u098f\u0992\u0996\u099a\u099f\u09a6\u09ac"+
		"\u09b0\u09b9\u09ee\u09f8\u0a03";
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