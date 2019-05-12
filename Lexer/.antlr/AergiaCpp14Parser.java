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
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, Encodingprefix=15, MultiLineMacro=16, 
		Directive=17, Alignas=18, Alignof=19, Asm=20, Auto=21, Bool=22, Break=23, 
		Case=24, Catch=25, Char=26, Char16=27, Char32=28, Class=29, Const=30, 
		Constexpr=31, Const_cast=32, Continue=33, Decltype=34, Default=35, Delete=36, 
		Do=37, Double=38, Dynamic_cast=39, Else=40, Enum=41, Explicit=42, Export=43, 
		Extern=44, False=45, Final=46, Float=47, For=48, Friend=49, Goto=50, If=51, 
		Inline=52, Int=53, Long=54, Mutable=55, Namespace=56, New=57, Noexcept=58, 
		Nullptr=59, Operator=60, Override=61, Private=62, Protected=63, Public=64, 
		Register=65, Reinterpret_cast=66, Return=67, Short=68, Signed=69, Sizeof=70, 
		Static=71, Static_assert=72, Static_cast=73, Struct=74, Switch=75, Template=76, 
		This=77, Thread_local=78, Throw=79, True=80, Try=81, Typedef=82, Typeid_=83, 
		Typename_=84, Union=85, Unsigned=86, Using=87, Virtual=88, Void=89, Volatile=90, 
		Wchar=91, While=92, LeftParen=93, RightParen=94, LeftBracket=95, RightBracket=96, 
		LeftBrace=97, RightBrace=98, Plus=99, Minus=100, Star=101, Div=102, Mod=103, 
		Caret=104, And=105, Or=106, Tilde=107, Not=108, Assign=109, Less=110, 
		Greater=111, PlusAssign=112, MinusAssign=113, StarAssign=114, DivAssign=115, 
		ModAssign=116, XorAssign=117, AndAssign=118, OrAssign=119, LeftShift=120, 
		RightShift=121, LeftShiftAssign=122, RightShiftAssign=123, Equal=124, 
		NotEqual=125, LessEqual=126, GreaterEqual=127, AndAnd=128, OrOr=129, PlusPlus=130, 
		MinusMinus=131, Comma=132, ArrowStar=133, Arrow=134, Question=135, Colon=136, 
		Doublecolon=137, Semi=138, Dot=139, DotStar=140, Ellipsis=141, Identifier=142, 
		Integerliteral=143, Decimalliteral=144, Octalliteral=145, Hexadecimalliteral=146, 
		Binaryliteral=147, Integersuffix=148, Characterliteral=149, Floatingliteral=150, 
		Stringliteral=151, Userdefinedintegerliteral=152, Userdefinedfloatingliteral=153, 
		Userdefinedstringliteral=154, Userdefinedcharacterliteral=155, Whitespace=156, 
		Newline=157, BlockComment=158, LineComment=159;
	public static final int
		RULE_translationunit = 0, RULE_aergiaexpressionbegin = 1, RULE_aergiaexpressionend = 2, 
		RULE_aergiaBlock = 3, RULE_aergiaexpression = 4, RULE_aergiastring = 5, 
		RULE_foreach = 6, RULE_foreachheader = 7, RULE_foreachbody = 8, RULE_callchain = 9, 
		RULE_primaryexpression = 10, RULE_idexpression = 11, RULE_unqualifiedid = 12, 
		RULE_qualifiedid = 13, RULE_nestednamespecifier = 14, RULE_lambdaexpression = 15, 
		RULE_lambdaintroducer = 16, RULE_lambdacapture = 17, RULE_capturedefault = 18, 
		RULE_capturelist = 19, RULE_capture = 20, RULE_simplecapture = 21, RULE_initcapture = 22, 
		RULE_lambdadeclarator = 23, RULE_postfixexpression = 24, RULE_typeidofexpr = 25, 
		RULE_typeidofthetypeid = 26, RULE_expressionlist = 27, RULE_pseudodestructorname = 28, 
		RULE_unaryexpression = 29, RULE_unaryoperator = 30, RULE_newexpression = 31, 
		RULE_newplacement = 32, RULE_newtypeid = 33, RULE_newdeclarator = 34, 
		RULE_noptrnewdeclarator = 35, RULE_newinitializer = 36, RULE_deleteexpression = 37, 
		RULE_noexceptexpression = 38, RULE_castexpression = 39, RULE_pmexpression = 40, 
		RULE_multiplicativeexpression = 41, RULE_additiveexpression = 42, RULE_shiftexpression = 43, 
		RULE_shiftoperator = 44, RULE_relationalexpression = 45, RULE_equalityexpression = 46, 
		RULE_andexpression = 47, RULE_exclusiveorexpression = 48, RULE_inclusiveorexpression = 49, 
		RULE_logicalandexpression = 50, RULE_logicalorexpression = 51, RULE_conditionalexpression = 52, 
		RULE_assignmentexpression = 53, RULE_assignmentoperator = 54, RULE_expression = 55, 
		RULE_constantexpression = 56, RULE_statement = 57, RULE_labeledstatement = 58, 
		RULE_expressionstatement = 59, RULE_compoundstatement = 60, RULE_statementseq = 61, 
		RULE_selectionstatement = 62, RULE_condition = 63, RULE_iterationstatement = 64, 
		RULE_forinitstatement = 65, RULE_forrangedeclaration = 66, RULE_forrangeinitializer = 67, 
		RULE_jumpstatement = 68, RULE_declarationstatement = 69, RULE_declarationseq = 70, 
		RULE_declaration = 71, RULE_blockdeclaration = 72, RULE_aliasdeclaration = 73, 
		RULE_simpledeclaration = 74, RULE_static_assertdeclaration = 75, RULE_emptydeclaration = 76, 
		RULE_attributedeclaration = 77, RULE_declspecifier = 78, RULE_declspecifierseq = 79, 
		RULE_storageclassspecifier = 80, RULE_functionspecifier = 81, RULE_typedefname = 82, 
		RULE_typespecifier = 83, RULE_trailingtypespecifier = 84, RULE_typespecifierseq = 85, 
		RULE_trailingtypespecifierseq = 86, RULE_simpletypespecifier = 87, RULE_thetypename = 88, 
		RULE_decltypespecifier = 89, RULE_elaboratedtypespecifier = 90, RULE_enumname = 91, 
		RULE_enumspecifier = 92, RULE_enumhead = 93, RULE_opaqueenumdeclaration = 94, 
		RULE_enumkey = 95, RULE_enumbase = 96, RULE_enumeratorlist = 97, RULE_enumeratordefinition = 98, 
		RULE_enumerator = 99, RULE_namespacename = 100, RULE_originalnamespacename = 101, 
		RULE_namespacedefinition = 102, RULE_namednamespacedefinition = 103, RULE_originalnamespacedefinition = 104, 
		RULE_extensionnamespacedefinition = 105, RULE_unnamednamespacedefinition = 106, 
		RULE_namespacebody = 107, RULE_namespacealias = 108, RULE_namespacealiasdefinition = 109, 
		RULE_qualifiednamespacespecifier = 110, RULE_usingdeclaration = 111, RULE_usingdirective = 112, 
		RULE_asmdefinition = 113, RULE_linkagespecification = 114, RULE_attributespecifierseq = 115, 
		RULE_attributespecifier = 116, RULE_alignmentspecifier = 117, RULE_attributelist = 118, 
		RULE_attribute = 119, RULE_attributetoken = 120, RULE_attributescopedtoken = 121, 
		RULE_attributenamespace = 122, RULE_attributeargumentclause = 123, RULE_balancedtokenseq = 124, 
		RULE_balancedtoken = 125, RULE_initdeclaratorlist = 126, RULE_initdeclarator = 127, 
		RULE_declarator = 128, RULE_ptrdeclarator = 129, RULE_noptrdeclarator = 130, 
		RULE_parametersandqualifiers = 131, RULE_trailingreturntype = 132, RULE_ptroperator = 133, 
		RULE_cvqualifierseq = 134, RULE_cvqualifier = 135, RULE_refqualifier = 136, 
		RULE_declaratorid = 137, RULE_thetypeid = 138, RULE_abstractdeclarator = 139, 
		RULE_ptrabstractdeclarator = 140, RULE_noptrabstractdeclarator = 141, 
		RULE_abstractpackdeclarator = 142, RULE_noptrabstractpackdeclarator = 143, 
		RULE_parameterdeclarationclause = 144, RULE_parameterdeclarationlist = 145, 
		RULE_parameterdeclaration = 146, RULE_functiondefinition = 147, RULE_functionbody = 148, 
		RULE_initializer = 149, RULE_braceorequalinitializer = 150, RULE_initializerclause = 151, 
		RULE_initializerlist = 152, RULE_bracedinitlist = 153, RULE_classname = 154, 
		RULE_classspecifier = 155, RULE_classhead = 156, RULE_classheadname = 157, 
		RULE_classvirtspecifier = 158, RULE_classkey = 159, RULE_memberspecification = 160, 
		RULE_memberdeclaration = 161, RULE_memberdeclaratorlist = 162, RULE_memberdeclarator = 163, 
		RULE_virtspecifierseq = 164, RULE_virtspecifier = 165, RULE_purespecifier = 166, 
		RULE_baseclause = 167, RULE_basespecifierlist = 168, RULE_basespecifier = 169, 
		RULE_classordecltype = 170, RULE_basetypespecifier = 171, RULE_accessspecifier = 172, 
		RULE_conversionfunctionid = 173, RULE_conversiontypeid = 174, RULE_conversiondeclarator = 175, 
		RULE_ctorinitializer = 176, RULE_meminitializerlist = 177, RULE_meminitializer = 178, 
		RULE_meminitializerid = 179, RULE_operatorfunctionid = 180, RULE_literaloperatorid = 181, 
		RULE_templatedeclaration = 182, RULE_templateparameterlist = 183, RULE_templateparameter = 184, 
		RULE_typeparameter = 185, RULE_simpletemplateid = 186, RULE_templateid = 187, 
		RULE_templatename = 188, RULE_templateargumentlist = 189, RULE_templateargument = 190, 
		RULE_typenamespecifier = 191, RULE_explicitinstantiation = 192, RULE_explicitspecialization = 193, 
		RULE_tryblock = 194, RULE_functiontryblock = 195, RULE_handlerseq = 196, 
		RULE_handler = 197, RULE_exceptiondeclaration = 198, RULE_throwexpression = 199, 
		RULE_exceptionspecification = 200, RULE_dynamicexceptionspecification = 201, 
		RULE_typeidlist = 202, RULE_noexceptspecification = 203, RULE_theoperator = 204, 
		RULE_literal = 205, RULE_booleanliteral = 206, RULE_pointerliteral = 207, 
		RULE_userdefinedliteral = 208;
	public static final String[] ruleNames = {
		"translationunit", "aergiaexpressionbegin", "aergiaexpressionend", "aergiaBlock", 
		"aergiaexpression", "aergiastring", "foreach", "foreachheader", "foreachbody", 
		"callchain", "primaryexpression", "idexpression", "unqualifiedid", "qualifiedid", 
		"nestednamespecifier", "lambdaexpression", "lambdaintroducer", "lambdacapture", 
		"capturedefault", "capturelist", "capture", "simplecapture", "initcapture", 
		"lambdadeclarator", "postfixexpression", "typeidofexpr", "typeidofthetypeid", 
		"expressionlist", "pseudodestructorname", "unaryexpression", "unaryoperator", 
		"newexpression", "newplacement", "newtypeid", "newdeclarator", "noptrnewdeclarator", 
		"newinitializer", "deleteexpression", "noexceptexpression", "castexpression", 
		"pmexpression", "multiplicativeexpression", "additiveexpression", "shiftexpression", 
		"shiftoperator", "relationalexpression", "equalityexpression", "andexpression", 
		"exclusiveorexpression", "inclusiveorexpression", "logicalandexpression", 
		"logicalorexpression", "conditionalexpression", "assignmentexpression", 
		"assignmentoperator", "expression", "constantexpression", "statement", 
		"labeledstatement", "expressionstatement", "compoundstatement", "statementseq", 
		"selectionstatement", "condition", "iterationstatement", "forinitstatement", 
		"forrangedeclaration", "forrangeinitializer", "jumpstatement", "declarationstatement", 
		"declarationseq", "declaration", "blockdeclaration", "aliasdeclaration", 
		"simpledeclaration", "static_assertdeclaration", "emptydeclaration", "attributedeclaration", 
		"declspecifier", "declspecifierseq", "storageclassspecifier", "functionspecifier", 
		"typedefname", "typespecifier", "trailingtypespecifier", "typespecifierseq", 
		"trailingtypespecifierseq", "simpletypespecifier", "thetypename", "decltypespecifier", 
		"elaboratedtypespecifier", "enumname", "enumspecifier", "enumhead", "opaqueenumdeclaration", 
		"enumkey", "enumbase", "enumeratorlist", "enumeratordefinition", "enumerator", 
		"namespacename", "originalnamespacename", "namespacedefinition", "namednamespacedefinition", 
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
		null, "'$'", "'$$'", "'${'", "'$}'", "'@'", "'$foreach('", "'in'", "').'", 
		"'!'", "'not'", "'&&'", "'and'", "'||'", "'or'", null, null, null, "'alignas'", 
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
		"'%'", "'^'", "'&'", "'|'", "'~'", null, "'='", "'<'", "'>'", "'+='", 
		"'-='", "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", "'<<'", "'>>'", 
		"'<<='", "'>>='", "'=='", "'!='", "'<='", "'>='", null, null, "'++'", 
		"'--'", "','", "'->*'", "'->'", "'?'", "':'", "'::'", "';'", "'.'", "'.*'", 
		"'...'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, "Encodingprefix", "MultiLineMacro", "Directive", "Alignas", 
		"Alignof", "Asm", "Auto", "Bool", "Break", "Case", "Catch", "Char", "Char16", 
		"Char32", "Class", "Const", "Constexpr", "Const_cast", "Continue", "Decltype", 
		"Default", "Delete", "Do", "Double", "Dynamic_cast", "Else", "Enum", "Explicit", 
		"Export", "Extern", "False", "Final", "Float", "For", "Friend", "Goto", 
		"If", "Inline", "Int", "Long", "Mutable", "Namespace", "New", "Noexcept", 
		"Nullptr", "Operator", "Override", "Private", "Protected", "Public", "Register", 
		"Reinterpret_cast", "Return", "Short", "Signed", "Sizeof", "Static", "Static_assert", 
		"Static_cast", "Struct", "Switch", "Template", "This", "Thread_local", 
		"Throw", "True", "Try", "Typedef", "Typeid_", "Typename_", "Union", "Unsigned", 
		"Using", "Virtual", "Void", "Volatile", "Wchar", "While", "LeftParen", 
		"RightParen", "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", 
		"Plus", "Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Tilde", 
		"Not", "Assign", "Less", "Greater", "PlusAssign", "MinusAssign", "StarAssign", 
		"DivAssign", "ModAssign", "XorAssign", "AndAssign", "OrAssign", "LeftShift", 
		"RightShift", "LeftShiftAssign", "RightShiftAssign", "Equal", "NotEqual", 
		"LessEqual", "GreaterEqual", "AndAnd", "OrOr", "PlusPlus", "MinusMinus", 
		"Comma", "ArrowStar", "Arrow", "Question", "Colon", "Doublecolon", "Semi", 
		"Dot", "DotStar", "Ellipsis", "Identifier", "Integerliteral", "Decimalliteral", 
		"Octalliteral", "Hexadecimalliteral", "Binaryliteral", "Integersuffix", 
		"Characterliteral", "Floatingliteral", "Stringliteral", "Userdefinedintegerliteral", 
		"Userdefinedfloatingliteral", "Userdefinedstringliteral", "Userdefinedcharacterliteral", 
		"Whitespace", "Newline", "BlockComment", "LineComment"
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
			setState(419);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << Alignas) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (Register - 65)) | (1L << (Short - 65)) | (1L << (Signed - 65)) | (1L << (Static - 65)) | (1L << (Static_assert - 65)) | (1L << (Struct - 65)) | (1L << (Template - 65)) | (1L << (Thread_local - 65)) | (1L << (Typedef - 65)) | (1L << (Typename_ - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (Wchar - 65)) | (1L << (LeftParen - 65)) | (1L << (LeftBracket - 65)) | (1L << (Star - 65)) | (1L << (And - 65)) | (1L << (Tilde - 65)))) != 0) || ((((_la - 137)) & ~0x3f) == 0 && ((1L << (_la - 137)) & ((1L << (Doublecolon - 137)) | (1L << (Semi - 137)) | (1L << (Ellipsis - 137)) | (1L << (Identifier - 137)))) != 0)) {
				{
				setState(418);
				declarationseq(0);
				}
			}

			setState(421);
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
			setState(423);
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
			setState(425);
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
			setState(427);
			match(T__2);
			setState(428);
			statementseq(0);
			setState(429);
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
		public AergiaexpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_aergiaexpression; }
	}

	public final AergiaexpressionContext aergiaexpression() throws RecognitionException {
		AergiaexpressionContext _localctx = new AergiaexpressionContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_aergiaexpression);
		try {
			setState(436);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__5:
				enterOuterAlt(_localctx, 1);
				{
				setState(431);
				foreach();
				}
				break;
			case T__0:
				enterOuterAlt(_localctx, 2);
				{
				setState(432);
				aergiaexpressionbegin();
				setState(433);
				callchain();
				setState(434);
				aergiaexpressionend();
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
		enterRule(_localctx, 10, RULE_aergiastring);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(439);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Encodingprefix) {
				{
				setState(438);
				match(Encodingprefix);
				}
			}

			setState(441);
			match(T__4);
			setState(442);
			callchain();
			setState(443);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 12, RULE_foreach);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(445);
			match(T__5);
			setState(446);
			foreachheader();
			setState(447);
			match(RightParen);
			setState(448);
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
		enterRule(_localctx, 14, RULE_foreachheader);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(450);
			aergiaexpressionbegin();
			setState(451);
			match(Identifier);
			setState(452);
			match(T__6);
			setState(453);
			aergiaexpressionbegin();
			setState(454);
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
		enterRule(_localctx, 16, RULE_foreachbody);
		try {
			setState(458);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
			case T__5:
				enterOuterAlt(_localctx, 1);
				{
				setState(456);
				aergiaexpression();
				}
				break;
			case T__2:
				enterOuterAlt(_localctx, 2);
				{
				setState(457);
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
		enterRule(_localctx, 18, RULE_callchain);
		try {
			setState(473);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(460);
				match(Identifier);
				setState(461);
				match(Dot);
				setState(462);
				callchain();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(463);
				match(Identifier);
				setState(464);
				match(LeftParen);
				setState(465);
				match(Identifier);
				setState(466);
				match(T__7);
				setState(467);
				callchain();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(468);
				match(Identifier);
				setState(469);
				match(LeftParen);
				setState(470);
				match(Identifier);
				setState(471);
				match(RightParen);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(472);
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
		enterRule(_localctx, 20, RULE_primaryexpression);
		try {
			setState(483);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__4:
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
				setState(475);
				literal();
				}
				break;
			case This:
				enterOuterAlt(_localctx, 2);
				{
				setState(476);
				match(This);
				}
				break;
			case LeftParen:
				enterOuterAlt(_localctx, 3);
				{
				setState(477);
				match(LeftParen);
				setState(478);
				expression(0);
				setState(479);
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
				setState(481);
				idexpression();
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 5);
				{
				setState(482);
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
		enterRule(_localctx, 22, RULE_idexpression);
		try {
			setState(487);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(485);
				unqualifiedid();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(486);
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
		enterRule(_localctx, 24, RULE_unqualifiedid);
		try {
			setState(498);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(489);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(490);
				operatorfunctionid();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(491);
				conversionfunctionid();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(492);
				literaloperatorid();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(493);
				match(Tilde);
				setState(494);
				classname();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(495);
				match(Tilde);
				setState(496);
				decltypespecifier();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(497);
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
		enterRule(_localctx, 26, RULE_qualifiedid);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(500);
			nestednamespecifier(0);
			setState(502);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Template) {
				{
				setState(501);
				match(Template);
				}
			}

			setState(504);
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
		int _startState = 28;
		enterRecursionRule(_localctx, 28, RULE_nestednamespecifier, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(517);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				setState(507);
				match(Doublecolon);
				}
				break;
			case 2:
				{
				setState(508);
				thetypename();
				setState(509);
				match(Doublecolon);
				}
				break;
			case 3:
				{
				setState(511);
				namespacename();
				setState(512);
				match(Doublecolon);
				}
				break;
			case 4:
				{
				setState(514);
				decltypespecifier();
				setState(515);
				match(Doublecolon);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(531);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(529);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
					case 1:
						{
						_localctx = new NestednamespecifierContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_nestednamespecifier);
						setState(519);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(520);
						match(Identifier);
						setState(521);
						match(Doublecolon);
						}
						break;
					case 2:
						{
						_localctx = new NestednamespecifierContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_nestednamespecifier);
						setState(522);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(524);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(523);
							match(Template);
							}
						}

						setState(526);
						simpletemplateid();
						setState(527);
						match(Doublecolon);
						}
						break;
					}
					} 
				}
				setState(533);
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
		enterRule(_localctx, 30, RULE_lambdaexpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(534);
			lambdaintroducer();
			setState(536);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LeftParen) {
				{
				setState(535);
				lambdadeclarator();
				}
			}

			setState(538);
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
		enterRule(_localctx, 32, RULE_lambdaintroducer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(540);
			match(LeftBracket);
			setState(542);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 77)) & ~0x3f) == 0 && ((1L << (_la - 77)) & ((1L << (This - 77)) | (1L << (And - 77)) | (1L << (Assign - 77)))) != 0) || _la==Identifier) {
				{
				setState(541);
				lambdacapture();
				}
			}

			setState(544);
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
		enterRule(_localctx, 34, RULE_lambdacapture);
		try {
			setState(552);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(546);
				capturedefault();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(547);
				capturelist(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(548);
				capturedefault();
				setState(549);
				match(Comma);
				setState(550);
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
		enterRule(_localctx, 36, RULE_capturedefault);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(554);
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
		int _startState = 38;
		enterRecursionRule(_localctx, 38, RULE_capturelist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(557);
			capture();
			setState(559);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(558);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(569);
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
					setState(561);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(562);
					match(Comma);
					setState(563);
					capture();
					setState(565);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
					case 1:
						{
						setState(564);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(571);
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
		enterRule(_localctx, 40, RULE_capture);
		try {
			setState(574);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(572);
				simplecapture();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(573);
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
		enterRule(_localctx, 42, RULE_simplecapture);
		try {
			setState(580);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(576);
				match(Identifier);
				}
				break;
			case And:
				enterOuterAlt(_localctx, 2);
				{
				setState(577);
				match(And);
				setState(578);
				match(Identifier);
				}
				break;
			case This:
				enterOuterAlt(_localctx, 3);
				{
				setState(579);
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
		enterRule(_localctx, 44, RULE_initcapture);
		try {
			setState(587);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(582);
				match(Identifier);
				setState(583);
				initializer();
				}
				break;
			case And:
				enterOuterAlt(_localctx, 2);
				{
				setState(584);
				match(And);
				setState(585);
				match(Identifier);
				setState(586);
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
		enterRule(_localctx, 46, RULE_lambdadeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(589);
			match(LeftParen);
			setState(590);
			parameterdeclarationclause();
			setState(591);
			match(RightParen);
			setState(593);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Mutable) {
				{
				setState(592);
				match(Mutable);
				}
			}

			setState(596);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Noexcept || _la==Throw) {
				{
				setState(595);
				exceptionspecification();
				}
			}

			setState(599);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(598);
				attributespecifierseq(0);
				}
			}

			setState(602);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(601);
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
		int _startState = 48;
		enterRecursionRule(_localctx, 48, RULE_postfixexpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(668);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				{
				setState(605);
				primaryexpression();
				}
				break;
			case 2:
				{
				setState(606);
				simpletypespecifier();
				setState(607);
				match(LeftParen);
				setState(609);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (LeftBrace - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
					{
					setState(608);
					expressionlist();
					}
				}

				setState(611);
				match(RightParen);
				}
				break;
			case 3:
				{
				setState(613);
				typenamespecifier();
				setState(614);
				match(LeftParen);
				setState(616);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (LeftBrace - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
					{
					setState(615);
					expressionlist();
					}
				}

				setState(618);
				match(RightParen);
				}
				break;
			case 4:
				{
				setState(620);
				simpletypespecifier();
				setState(621);
				bracedinitlist();
				}
				break;
			case 5:
				{
				setState(623);
				typenamespecifier();
				setState(624);
				bracedinitlist();
				}
				break;
			case 6:
				{
				setState(626);
				match(Dynamic_cast);
				setState(627);
				match(Less);
				setState(628);
				thetypeid();
				setState(629);
				match(Greater);
				setState(630);
				match(LeftParen);
				setState(631);
				expression(0);
				setState(632);
				match(RightParen);
				}
				break;
			case 7:
				{
				setState(634);
				match(Static_cast);
				setState(635);
				match(Less);
				setState(636);
				thetypeid();
				setState(637);
				match(Greater);
				setState(638);
				match(LeftParen);
				setState(639);
				expression(0);
				setState(640);
				match(RightParen);
				}
				break;
			case 8:
				{
				setState(642);
				match(Reinterpret_cast);
				setState(643);
				match(Less);
				setState(644);
				thetypeid();
				setState(645);
				match(Greater);
				setState(646);
				match(LeftParen);
				setState(647);
				expression(0);
				setState(648);
				match(RightParen);
				}
				break;
			case 9:
				{
				setState(650);
				match(Const_cast);
				setState(651);
				match(Less);
				setState(652);
				thetypeid();
				setState(653);
				match(Greater);
				setState(654);
				match(LeftParen);
				setState(655);
				expression(0);
				setState(656);
				match(RightParen);
				}
				break;
			case 10:
				{
				setState(658);
				typeidofthetypeid();
				setState(659);
				match(LeftParen);
				setState(660);
				expression(0);
				setState(661);
				match(RightParen);
				}
				break;
			case 11:
				{
				setState(663);
				typeidofthetypeid();
				setState(664);
				match(LeftParen);
				setState(665);
				thetypeid();
				setState(666);
				match(RightParen);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(710);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(708);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
					case 1:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(670);
						if (!(precpred(_ctx, 19))) throw new FailedPredicateException(this, "precpred(_ctx, 19)");
						setState(671);
						match(LeftBracket);
						setState(672);
						expression(0);
						setState(673);
						match(RightBracket);
						}
						break;
					case 2:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(675);
						if (!(precpred(_ctx, 18))) throw new FailedPredicateException(this, "precpred(_ctx, 18)");
						setState(676);
						match(LeftBracket);
						setState(677);
						bracedinitlist();
						setState(678);
						match(RightBracket);
						}
						break;
					case 3:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(680);
						if (!(precpred(_ctx, 17))) throw new FailedPredicateException(this, "precpred(_ctx, 17)");
						setState(681);
						match(LeftParen);
						setState(683);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (LeftBrace - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
							{
							setState(682);
							expressionlist();
							}
						}

						setState(685);
						match(RightParen);
						}
						break;
					case 4:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(686);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(687);
						match(Dot);
						setState(689);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(688);
							match(Template);
							}
						}

						setState(691);
						idexpression();
						}
						break;
					case 5:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(692);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(693);
						match(Arrow);
						setState(695);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(694);
							match(Template);
							}
						}

						setState(697);
						idexpression();
						}
						break;
					case 6:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(698);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(699);
						match(Dot);
						setState(700);
						pseudodestructorname();
						}
						break;
					case 7:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(701);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(702);
						match(Arrow);
						setState(703);
						pseudodestructorname();
						}
						break;
					case 8:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(704);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(705);
						match(PlusPlus);
						}
						break;
					case 9:
						{
						_localctx = new PostfixexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixexpression);
						setState(706);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(707);
						match(MinusMinus);
						}
						break;
					}
					} 
				}
				setState(712);
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
		enterRule(_localctx, 50, RULE_typeidofexpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(713);
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
		enterRule(_localctx, 52, RULE_typeidofthetypeid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(715);
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
		enterRule(_localctx, 54, RULE_expressionlist);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(717);
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
		enterRule(_localctx, 56, RULE_pseudodestructorname);
		int _la;
		try {
			setState(741);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(720);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
				case 1:
					{
					setState(719);
					nestednamespecifier(0);
					}
					break;
				}
				setState(722);
				thetypename();
				setState(723);
				match(Doublecolon);
				setState(724);
				match(Tilde);
				setState(725);
				thetypename();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(727);
				nestednamespecifier(0);
				setState(728);
				match(Template);
				setState(729);
				simpletemplateid();
				setState(730);
				match(Doublecolon);
				setState(731);
				match(Tilde);
				setState(732);
				thetypename();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(735);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Decltype || _la==Doublecolon || _la==Identifier) {
					{
					setState(734);
					nestednamespecifier(0);
					}
				}

				setState(737);
				match(Tilde);
				setState(738);
				thetypename();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(739);
				match(Tilde);
				setState(740);
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
		enterRule(_localctx, 58, RULE_unaryexpression);
		try {
			setState(771);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(743);
				postfixexpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(744);
				match(PlusPlus);
				setState(745);
				castexpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(746);
				match(MinusMinus);
				setState(747);
				castexpression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(748);
				unaryoperator();
				setState(749);
				castexpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(751);
				match(Sizeof);
				setState(752);
				unaryexpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(753);
				match(Sizeof);
				setState(754);
				match(LeftParen);
				setState(755);
				thetypeid();
				setState(756);
				match(RightParen);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(758);
				match(Sizeof);
				setState(759);
				match(Ellipsis);
				setState(760);
				match(LeftParen);
				setState(761);
				match(Identifier);
				setState(762);
				match(RightParen);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(763);
				match(Alignof);
				setState(764);
				match(LeftParen);
				setState(765);
				thetypeid();
				setState(766);
				match(RightParen);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(768);
				noexceptexpression();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(769);
				newexpression();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(770);
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
		enterRule(_localctx, 60, RULE_unaryoperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(773);
			_la = _input.LA(1);
			if ( !(_la==T__8 || _la==T__9 || ((((_la - 99)) & ~0x3f) == 0 && ((1L << (_la - 99)) & ((1L << (Plus - 99)) | (1L << (Minus - 99)) | (1L << (Star - 99)) | (1L << (And - 99)) | (1L << (Or - 99)) | (1L << (Tilde - 99)))) != 0)) ) {
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
		enterRule(_localctx, 62, RULE_newexpression);
		int _la;
		try {
			setState(799);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(776);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(775);
					match(Doublecolon);
					}
				}

				setState(778);
				match(New);
				setState(780);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LeftParen) {
					{
					setState(779);
					newplacement();
					}
				}

				setState(782);
				newtypeid();
				setState(784);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
				case 1:
					{
					setState(783);
					newinitializer();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(787);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(786);
					match(Doublecolon);
					}
				}

				setState(789);
				match(New);
				setState(791);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
				case 1:
					{
					setState(790);
					newplacement();
					}
					break;
				}
				setState(793);
				match(LeftParen);
				setState(794);
				thetypeid();
				setState(795);
				match(RightParen);
				setState(797);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
				case 1:
					{
					setState(796);
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
		enterRule(_localctx, 64, RULE_newplacement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(801);
			match(LeftParen);
			setState(802);
			expressionlist();
			setState(803);
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
		enterRule(_localctx, 66, RULE_newtypeid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(805);
			typespecifierseq();
			setState(807);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
			case 1:
				{
				setState(806);
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
		enterRule(_localctx, 68, RULE_newdeclarator);
		try {
			setState(814);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__10:
			case Decltype:
			case Star:
			case And:
			case Doublecolon:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(809);
				ptroperator();
				setState(811);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
				case 1:
					{
					setState(810);
					newdeclarator();
					}
					break;
				}
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(813);
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
		int _startState = 70;
		enterRecursionRule(_localctx, 70, RULE_noptrnewdeclarator, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(817);
			match(LeftBracket);
			setState(818);
			expression(0);
			setState(819);
			match(RightBracket);
			setState(821);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				{
				setState(820);
				attributespecifierseq(0);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(832);
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
					setState(823);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(824);
					match(LeftBracket);
					setState(825);
					constantexpression();
					setState(826);
					match(RightBracket);
					setState(828);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
					case 1:
						{
						setState(827);
						attributespecifierseq(0);
						}
						break;
					}
					}
					} 
				}
				setState(834);
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
		enterRule(_localctx, 72, RULE_newinitializer);
		int _la;
		try {
			setState(841);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParen:
				enterOuterAlt(_localctx, 1);
				{
				setState(835);
				match(LeftParen);
				setState(837);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (LeftBrace - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
					{
					setState(836);
					expressionlist();
					}
				}

				setState(839);
				match(RightParen);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(840);
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
		enterRule(_localctx, 74, RULE_deleteexpression);
		int _la;
		try {
			setState(855);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(844);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(843);
					match(Doublecolon);
					}
				}

				setState(846);
				match(Delete);
				setState(847);
				castexpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(849);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Doublecolon) {
					{
					setState(848);
					match(Doublecolon);
					}
				}

				setState(851);
				match(Delete);
				setState(852);
				match(LeftBracket);
				setState(853);
				match(RightBracket);
				setState(854);
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
		enterRule(_localctx, 76, RULE_noexceptexpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(857);
			match(Noexcept);
			setState(858);
			match(LeftParen);
			setState(859);
			expression(0);
			setState(860);
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
		enterRule(_localctx, 78, RULE_castexpression);
		try {
			setState(868);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(862);
				unaryexpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(863);
				match(LeftParen);
				setState(864);
				thetypeid();
				setState(865);
				match(RightParen);
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

	public static class PmexpressionContext extends ParserRuleContext {
		public CastexpressionContext castexpression() {
			return getRuleContext(CastexpressionContext.class,0);
		}
		public PmexpressionContext pmexpression() {
			return getRuleContext(PmexpressionContext.class,0);
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
		int _startState = 80;
		enterRecursionRule(_localctx, 80, RULE_pmexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(871);
			castexpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(881);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(879);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
					case 1:
						{
						_localctx = new PmexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pmexpression);
						setState(873);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(874);
						match(DotStar);
						setState(875);
						castexpression();
						}
						break;
					case 2:
						{
						_localctx = new PmexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pmexpression);
						setState(876);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(877);
						match(ArrowStar);
						setState(878);
						castexpression();
						}
						break;
					}
					} 
				}
				setState(883);
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
		int _startState = 82;
		enterRecursionRule(_localctx, 82, RULE_multiplicativeexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(885);
			pmexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(898);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(896);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeexpression);
						setState(887);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(888);
						match(Star);
						setState(889);
						pmexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicativeexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeexpression);
						setState(890);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(891);
						match(Div);
						setState(892);
						pmexpression(0);
						}
						break;
					case 3:
						{
						_localctx = new MultiplicativeexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeexpression);
						setState(893);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(894);
						match(Mod);
						setState(895);
						pmexpression(0);
						}
						break;
					}
					} 
				}
				setState(900);
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
		int _startState = 84;
		enterRecursionRule(_localctx, 84, RULE_additiveexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(902);
			multiplicativeexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(912);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(910);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,61,_ctx) ) {
					case 1:
						{
						_localctx = new AdditiveexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveexpression);
						setState(904);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(905);
						match(Plus);
						setState(906);
						multiplicativeexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveexpression);
						setState(907);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(908);
						match(Minus);
						setState(909);
						multiplicativeexpression(0);
						}
						break;
					}
					} 
				}
				setState(914);
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
		int _startState = 86;
		enterRecursionRule(_localctx, 86, RULE_shiftexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(916);
			additiveexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(924);
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
					setState(918);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(919);
					shiftoperator();
					setState(920);
					additiveexpression(0);
					}
					} 
				}
				setState(926);
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
		enterRule(_localctx, 88, RULE_shiftoperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(927);
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
		int _startState = 90;
		enterRecursionRule(_localctx, 90, RULE_relationalexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(930);
			shiftexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(946);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,65,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(944);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,64,_ctx) ) {
					case 1:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(932);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(933);
						match(Less);
						setState(934);
						shiftexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(935);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(936);
						match(Greater);
						setState(937);
						shiftexpression(0);
						}
						break;
					case 3:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(938);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(939);
						match(LessEqual);
						setState(940);
						shiftexpression(0);
						}
						break;
					case 4:
						{
						_localctx = new RelationalexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalexpression);
						setState(941);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(942);
						match(GreaterEqual);
						setState(943);
						shiftexpression(0);
						}
						break;
					}
					} 
				}
				setState(948);
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
		int _startState = 92;
		enterRecursionRule(_localctx, 92, RULE_equalityexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(950);
			relationalexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(960);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,67,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(958);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
					case 1:
						{
						_localctx = new EqualityexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityexpression);
						setState(952);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(953);
						match(Equal);
						setState(954);
						relationalexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new EqualityexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityexpression);
						setState(955);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(956);
						match(NotEqual);
						setState(957);
						relationalexpression(0);
						}
						break;
					}
					} 
				}
				setState(962);
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
		int _startState = 94;
		enterRecursionRule(_localctx, 94, RULE_andexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(964);
			equalityexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(971);
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
					setState(966);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(967);
					match(And);
					setState(968);
					equalityexpression(0);
					}
					} 
				}
				setState(973);
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
		int _startState = 96;
		enterRecursionRule(_localctx, 96, RULE_exclusiveorexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(975);
			andexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(982);
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
					setState(977);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(978);
					match(Caret);
					setState(979);
					andexpression(0);
					}
					} 
				}
				setState(984);
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
		int _startState = 98;
		enterRecursionRule(_localctx, 98, RULE_inclusiveorexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(986);
			exclusiveorexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(993);
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
					setState(988);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(989);
					match(Or);
					setState(990);
					exclusiveorexpression(0);
					}
					} 
				}
				setState(995);
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
		int _startState = 100;
		enterRecursionRule(_localctx, 100, RULE_logicalandexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(997);
			inclusiveorexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1007);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,72,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1005);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,71,_ctx) ) {
					case 1:
						{
						_localctx = new LogicalandexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalandexpression);
						setState(999);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1000);
						match(T__10);
						setState(1001);
						inclusiveorexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new LogicalandexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalandexpression);
						setState(1002);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1003);
						match(T__11);
						setState(1004);
						inclusiveorexpression(0);
						}
						break;
					}
					} 
				}
				setState(1009);
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
		int _startState = 102;
		enterRecursionRule(_localctx, 102, RULE_logicalorexpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1011);
			logicalandexpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1021);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,74,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1019);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
					case 1:
						{
						_localctx = new LogicalorexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalorexpression);
						setState(1013);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1014);
						match(T__12);
						setState(1015);
						logicalandexpression(0);
						}
						break;
					case 2:
						{
						_localctx = new LogicalorexpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_logicalorexpression);
						setState(1016);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1017);
						match(T__13);
						setState(1018);
						logicalandexpression(0);
						}
						break;
					}
					} 
				}
				setState(1023);
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
		enterRule(_localctx, 104, RULE_conditionalexpression);
		try {
			setState(1031);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,75,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1024);
				logicalorexpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1025);
				logicalorexpression(0);
				setState(1026);
				match(Question);
				setState(1027);
				expression(0);
				setState(1028);
				match(Colon);
				setState(1029);
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
		public ConditionalexpressionContext conditionalexpression() {
			return getRuleContext(ConditionalexpressionContext.class,0);
		}
		public LogicalorexpressionContext logicalorexpression() {
			return getRuleContext(LogicalorexpressionContext.class,0);
		}
		public AssignmentoperatorContext assignmentoperator() {
			return getRuleContext(AssignmentoperatorContext.class,0);
		}
		public InitializerclauseContext initializerclause() {
			return getRuleContext(InitializerclauseContext.class,0);
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
		enterRule(_localctx, 106, RULE_assignmentexpression);
		try {
			setState(1039);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1033);
				conditionalexpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1034);
				logicalorexpression(0);
				setState(1035);
				assignmentoperator();
				setState(1036);
				initializerclause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1038);
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
		enterRule(_localctx, 108, RULE_assignmentoperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1041);
			_la = _input.LA(1);
			if ( !(((((_la - 109)) & ~0x3f) == 0 && ((1L << (_la - 109)) & ((1L << (Assign - 109)) | (1L << (PlusAssign - 109)) | (1L << (MinusAssign - 109)) | (1L << (StarAssign - 109)) | (1L << (DivAssign - 109)) | (1L << (ModAssign - 109)) | (1L << (XorAssign - 109)) | (1L << (AndAssign - 109)) | (1L << (OrAssign - 109)) | (1L << (LeftShiftAssign - 109)) | (1L << (RightShiftAssign - 109)))) != 0)) ) {
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
		int _startState = 110;
		enterRecursionRule(_localctx, 110, RULE_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1044);
			assignmentexpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(1051);
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
					setState(1046);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1047);
					match(Comma);
					setState(1048);
					assignmentexpression();
					}
					} 
				}
				setState(1053);
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
		enterRule(_localctx, 112, RULE_constantexpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1054);
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
		enterRule(_localctx, 114, RULE_statement);
		int _la;
		try {
			setState(1082);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1056);
				labeledstatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1058);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
				case 1:
					{
					setState(1057);
					attributespecifierseq(0);
					}
					break;
				}
				setState(1060);
				expressionstatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1062);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1061);
					attributespecifierseq(0);
					}
				}

				setState(1064);
				compoundstatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1066);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1065);
					attributespecifierseq(0);
					}
				}

				setState(1068);
				selectionstatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1070);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1069);
					attributespecifierseq(0);
					}
				}

				setState(1072);
				iterationstatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1074);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1073);
					attributespecifierseq(0);
					}
				}

				setState(1076);
				jumpstatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1077);
				declarationstatement();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
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
		enterRule(_localctx, 116, RULE_labeledstatement);
		int _la;
		try {
			setState(1104);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,88,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1085);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1084);
					attributespecifierseq(0);
					}
				}

				setState(1087);
				match(Identifier);
				setState(1088);
				match(Colon);
				setState(1089);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1091);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1090);
					attributespecifierseq(0);
					}
				}

				setState(1093);
				match(Case);
				setState(1094);
				constantexpression();
				setState(1095);
				match(Colon);
				setState(1096);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1099);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1098);
					attributespecifierseq(0);
					}
				}

				setState(1101);
				match(Default);
				setState(1102);
				match(Colon);
				setState(1103);
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
		enterRule(_localctx, 118, RULE_expressionstatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1107);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
				{
				setState(1106);
				expression(0);
				}
			}

			setState(1109);
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
		enterRule(_localctx, 120, RULE_compoundstatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1111);
			match(LeftBrace);
			setState(1113);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__4) | (1L << T__5) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << Encodingprefix) | (1L << Alignas) | (1L << Alignof) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Const_cast) | (1L << Continue) | (1L << Decltype) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << Dynamic_cast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << Goto) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (Register - 65)) | (1L << (Reinterpret_cast - 65)) | (1L << (Return - 65)) | (1L << (Short - 65)) | (1L << (Signed - 65)) | (1L << (Sizeof - 65)) | (1L << (Static - 65)) | (1L << (Static_assert - 65)) | (1L << (Static_cast - 65)) | (1L << (Struct - 65)) | (1L << (Switch - 65)) | (1L << (This - 65)) | (1L << (Thread_local - 65)) | (1L << (Throw - 65)) | (1L << (True - 65)) | (1L << (Try - 65)) | (1L << (Typedef - 65)) | (1L << (Typeid_ - 65)) | (1L << (Typename_ - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (Wchar - 65)) | (1L << (While - 65)) | (1L << (LeftParen - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftBrace - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Star - 65)) | (1L << (And - 65)) | (1L << (Or - 65)) | (1L << (Tilde - 65)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Semi - 130)) | (1L << (Ellipsis - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
				{
				setState(1112);
				statementseq(0);
				}
			}

			setState(1115);
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
		public AergiaexpressionContext aergiaexpression() {
			return getRuleContext(AergiaexpressionContext.class,0);
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
		int _startState = 122;
		enterRecursionRule(_localctx, 122, RULE_statementseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1123);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,91,_ctx) ) {
			case 1:
				{
				setState(1118);
				statement();
				}
				break;
			case 2:
				{
				setState(1119);
				aergiaexpression();
				setState(1120);
				statementseq(2);
				}
				break;
			case 3:
				{
				setState(1122);
				aergiaexpression();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1129);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,92,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StatementseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_statementseq);
					setState(1125);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(1126);
					statement();
					}
					} 
				}
				setState(1131);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,92,_ctx);
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
		enterRule(_localctx, 124, RULE_selectionstatement);
		try {
			setState(1152);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1132);
				match(If);
				setState(1133);
				match(LeftParen);
				setState(1134);
				condition();
				setState(1135);
				match(RightParen);
				setState(1136);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1138);
				match(If);
				setState(1139);
				match(LeftParen);
				setState(1140);
				condition();
				setState(1141);
				match(RightParen);
				setState(1142);
				statement();
				setState(1143);
				match(Else);
				setState(1144);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1146);
				match(Switch);
				setState(1147);
				match(LeftParen);
				setState(1148);
				condition();
				setState(1149);
				match(RightParen);
				setState(1150);
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
		enterRule(_localctx, 126, RULE_condition);
		int _la;
		try {
			setState(1170);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,96,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1154);
				expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1156);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1155);
					attributespecifierseq(0);
					}
				}

				setState(1158);
				declspecifierseq();
				setState(1159);
				declarator();
				setState(1160);
				match(Assign);
				setState(1161);
				initializerclause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1164);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1163);
					attributespecifierseq(0);
					}
				}

				setState(1166);
				declspecifierseq();
				setState(1167);
				declarator();
				setState(1168);
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
		enterRule(_localctx, 128, RULE_iterationstatement);
		int _la;
		try {
			setState(1207);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,99,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1172);
				match(While);
				setState(1173);
				match(LeftParen);
				setState(1174);
				condition();
				setState(1175);
				match(RightParen);
				setState(1176);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1178);
				match(Do);
				setState(1179);
				statement();
				setState(1180);
				match(While);
				setState(1181);
				match(LeftParen);
				setState(1182);
				expression(0);
				setState(1183);
				match(RightParen);
				setState(1184);
				match(Semi);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1186);
				match(For);
				setState(1187);
				match(LeftParen);
				setState(1188);
				forinitstatement();
				setState(1190);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignas) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (Register - 65)) | (1L << (Reinterpret_cast - 65)) | (1L << (Short - 65)) | (1L << (Signed - 65)) | (1L << (Sizeof - 65)) | (1L << (Static - 65)) | (1L << (Static_cast - 65)) | (1L << (Struct - 65)) | (1L << (This - 65)) | (1L << (Thread_local - 65)) | (1L << (Throw - 65)) | (1L << (True - 65)) | (1L << (Typedef - 65)) | (1L << (Typeid_ - 65)) | (1L << (Typename_ - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (Wchar - 65)) | (1L << (LeftParen - 65)) | (1L << (LeftBracket - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Star - 65)) | (1L << (And - 65)) | (1L << (Or - 65)) | (1L << (Tilde - 65)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
					{
					setState(1189);
					condition();
					}
				}

				setState(1192);
				match(Semi);
				setState(1194);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
					{
					setState(1193);
					expression(0);
					}
				}

				setState(1196);
				match(RightParen);
				setState(1197);
				statement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1199);
				match(For);
				setState(1200);
				match(LeftParen);
				setState(1201);
				forrangedeclaration();
				setState(1202);
				match(Colon);
				setState(1203);
				forrangeinitializer();
				setState(1204);
				match(RightParen);
				setState(1205);
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
		enterRule(_localctx, 130, RULE_forinitstatement);
		try {
			setState(1211);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,100,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1209);
				expressionstatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1210);
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
		enterRule(_localctx, 132, RULE_forrangedeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1214);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1213);
				attributespecifierseq(0);
				}
			}

			setState(1216);
			declspecifierseq();
			setState(1217);
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
		enterRule(_localctx, 134, RULE_forrangeinitializer);
		try {
			setState(1221);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__4:
			case T__8:
			case T__9:
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
				setState(1219);
				expression(0);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(1220);
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
		enterRule(_localctx, 136, RULE_jumpstatement);
		int _la;
		try {
			setState(1239);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,104,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1223);
				match(Break);
				setState(1224);
				match(Semi);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1225);
				match(Continue);
				setState(1226);
				match(Semi);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1227);
				match(Return);
				setState(1229);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
					{
					setState(1228);
					expression(0);
					}
				}

				setState(1231);
				match(Semi);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1232);
				match(Return);
				setState(1233);
				bracedinitlist();
				setState(1234);
				match(Semi);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1236);
				match(Goto);
				setState(1237);
				match(Identifier);
				setState(1238);
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
		enterRule(_localctx, 138, RULE_declarationstatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1241);
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
		int _startState = 140;
		enterRecursionRule(_localctx, 140, RULE_declarationseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1244);
			declaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1250);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,105,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new DeclarationseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_declarationseq);
					setState(1246);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1247);
					declaration();
					}
					} 
				}
				setState(1252);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,105,_ctx);
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
		enterRule(_localctx, 142, RULE_declaration);
		try {
			setState(1262);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,106,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1253);
				blockdeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1254);
				functiondefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1255);
				templatedeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1256);
				explicitinstantiation();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1257);
				explicitspecialization();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1258);
				linkagespecification();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1259);
				namespacedefinition();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1260);
				emptydeclaration();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1261);
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
		enterRule(_localctx, 144, RULE_blockdeclaration);
		try {
			setState(1272);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,107,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1264);
				simpledeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1265);
				asmdefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1266);
				namespacealiasdefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1267);
				usingdeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1268);
				usingdirective();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1269);
				static_assertdeclaration();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1270);
				aliasdeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1271);
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
		enterRule(_localctx, 146, RULE_aliasdeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1274);
			match(Using);
			setState(1275);
			match(Identifier);
			setState(1277);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1276);
				attributespecifierseq(0);
				}
			}

			setState(1279);
			match(Assign);
			setState(1280);
			thetypeid();
			setState(1281);
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
		enterRule(_localctx, 148, RULE_simpledeclaration);
		int _la;
		try {
			setState(1297);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__10:
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
				setState(1284);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,109,_ctx) ) {
				case 1:
					{
					setState(1283);
					declspecifierseq();
					}
					break;
				}
				setState(1287);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << Decltype) | (1L << Operator))) != 0) || ((((_la - 93)) & ~0x3f) == 0 && ((1L << (_la - 93)) & ((1L << (LeftParen - 93)) | (1L << (Star - 93)) | (1L << (And - 93)) | (1L << (Tilde - 93)) | (1L << (Doublecolon - 93)) | (1L << (Ellipsis - 93)) | (1L << (Identifier - 93)))) != 0)) {
					{
					setState(1286);
					initdeclaratorlist(0);
					}
				}

				setState(1289);
				match(Semi);
				}
				break;
			case Alignas:
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1290);
				attributespecifierseq(0);
				setState(1292);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,111,_ctx) ) {
				case 1:
					{
					setState(1291);
					declspecifierseq();
					}
					break;
				}
				setState(1294);
				initdeclaratorlist(0);
				setState(1295);
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
		enterRule(_localctx, 150, RULE_static_assertdeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1299);
			match(Static_assert);
			setState(1300);
			match(LeftParen);
			setState(1301);
			constantexpression();
			setState(1302);
			match(Comma);
			setState(1305);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Stringliteral:
				{
				setState(1303);
				match(Stringliteral);
				}
				break;
			case T__4:
			case Encodingprefix:
				{
				setState(1304);
				aergiastring();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(1307);
			match(RightParen);
			setState(1308);
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
		enterRule(_localctx, 152, RULE_emptydeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1310);
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
		enterRule(_localctx, 154, RULE_attributedeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1312);
			attributespecifierseq(0);
			setState(1313);
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
		enterRule(_localctx, 156, RULE_declspecifier);
		try {
			setState(1321);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Extern:
			case Mutable:
			case Register:
			case Static:
			case Thread_local:
				enterOuterAlt(_localctx, 1);
				{
				setState(1315);
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
				setState(1316);
				typespecifier();
				}
				break;
			case Explicit:
			case Inline:
			case Virtual:
				enterOuterAlt(_localctx, 3);
				{
				setState(1317);
				functionspecifier();
				}
				break;
			case Friend:
				enterOuterAlt(_localctx, 4);
				{
				setState(1318);
				match(Friend);
				}
				break;
			case Typedef:
				enterOuterAlt(_localctx, 5);
				{
				setState(1319);
				match(Typedef);
				}
				break;
			case Constexpr:
				enterOuterAlt(_localctx, 6);
				{
				setState(1320);
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
		enterRule(_localctx, 158, RULE_declspecifierseq);
		try {
			setState(1330);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,116,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1323);
				declspecifier();
				setState(1325);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,115,_ctx) ) {
				case 1:
					{
					setState(1324);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1327);
				declspecifier();
				setState(1328);
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
		enterRule(_localctx, 160, RULE_storageclassspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1332);
			_la = _input.LA(1);
			if ( !(((((_la - 44)) & ~0x3f) == 0 && ((1L << (_la - 44)) & ((1L << (Extern - 44)) | (1L << (Mutable - 44)) | (1L << (Register - 44)) | (1L << (Static - 44)) | (1L << (Thread_local - 44)))) != 0)) ) {
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
		enterRule(_localctx, 162, RULE_functionspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1334);
			_la = _input.LA(1);
			if ( !(((((_la - 42)) & ~0x3f) == 0 && ((1L << (_la - 42)) & ((1L << (Explicit - 42)) | (1L << (Inline - 42)) | (1L << (Virtual - 42)))) != 0)) ) {
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
		enterRule(_localctx, 164, RULE_typedefname);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1336);
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
		enterRule(_localctx, 166, RULE_typespecifier);
		try {
			setState(1341);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,117,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1338);
				trailingtypespecifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1339);
				classspecifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1340);
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
		enterRule(_localctx, 168, RULE_trailingtypespecifier);
		try {
			setState(1347);
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
				setState(1343);
				simpletypespecifier();
				}
				break;
			case Class:
			case Enum:
			case Struct:
			case Union:
				enterOuterAlt(_localctx, 2);
				{
				setState(1344);
				elaboratedtypespecifier();
				}
				break;
			case Typename_:
				enterOuterAlt(_localctx, 3);
				{
				setState(1345);
				typenamespecifier();
				}
				break;
			case Const:
			case Volatile:
				enterOuterAlt(_localctx, 4);
				{
				setState(1346);
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
		enterRule(_localctx, 170, RULE_typespecifierseq);
		try {
			setState(1356);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,120,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1349);
				typespecifier();
				setState(1351);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,119,_ctx) ) {
				case 1:
					{
					setState(1350);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1353);
				typespecifier();
				setState(1354);
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
		enterRule(_localctx, 172, RULE_trailingtypespecifierseq);
		try {
			setState(1365);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,122,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1358);
				trailingtypespecifier();
				setState(1360);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,121,_ctx) ) {
				case 1:
					{
					setState(1359);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1362);
				trailingtypespecifier();
				setState(1363);
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
		enterRule(_localctx, 174, RULE_simpletypespecifier);
		try {
			setState(1390);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,124,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1368);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,123,_ctx) ) {
				case 1:
					{
					setState(1367);
					nestednamespecifier(0);
					}
					break;
				}
				setState(1370);
				thetypename();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1371);
				nestednamespecifier(0);
				setState(1372);
				match(Template);
				setState(1373);
				simpletemplateid();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1375);
				match(Char);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1376);
				match(Char16);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1377);
				match(Char32);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1378);
				match(Wchar);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1379);
				match(Bool);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1380);
				match(Short);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1381);
				match(Int);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1382);
				match(Long);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1383);
				match(Signed);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(1384);
				match(Unsigned);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(1385);
				match(Float);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(1386);
				match(Double);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(1387);
				match(Void);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(1388);
				match(Auto);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(1389);
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
		enterRule(_localctx, 176, RULE_thetypename);
		try {
			setState(1396);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,125,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1392);
				classname();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1393);
				enumname();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1394);
				typedefname();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1395);
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
		enterRule(_localctx, 178, RULE_decltypespecifier);
		try {
			setState(1407);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,126,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1398);
				match(Decltype);
				setState(1399);
				match(LeftParen);
				setState(1400);
				expression(0);
				setState(1401);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1403);
				match(Decltype);
				setState(1404);
				match(LeftParen);
				setState(1405);
				match(Auto);
				setState(1406);
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
		enterRule(_localctx, 180, RULE_elaboratedtypespecifier);
		int _la;
		try {
			setState(1433);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,131,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1409);
				classkey();
				setState(1411);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1410);
					attributespecifierseq(0);
					}
				}

				setState(1414);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,128,_ctx) ) {
				case 1:
					{
					setState(1413);
					nestednamespecifier(0);
					}
					break;
				}
				setState(1416);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1418);
				classkey();
				setState(1419);
				simpletemplateid();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1421);
				classkey();
				setState(1422);
				nestednamespecifier(0);
				setState(1424);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(1423);
					match(Template);
					}
				}

				setState(1426);
				simpletemplateid();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1428);
				match(Enum);
				setState(1430);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,130,_ctx) ) {
				case 1:
					{
					setState(1429);
					nestednamespecifier(0);
					}
					break;
				}
				setState(1432);
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
		enterRule(_localctx, 182, RULE_enumname);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1435);
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
		enterRule(_localctx, 184, RULE_enumspecifier);
		int _la;
		try {
			setState(1450);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,133,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1437);
				enumhead();
				setState(1438);
				match(LeftBrace);
				setState(1440);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1439);
					enumeratorlist(0);
					}
				}

				setState(1442);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1444);
				enumhead();
				setState(1445);
				match(LeftBrace);
				setState(1446);
				enumeratorlist(0);
				setState(1447);
				match(Comma);
				setState(1448);
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
		enterRule(_localctx, 186, RULE_enumhead);
		int _la;
		try {
			setState(1471);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,139,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1452);
				enumkey();
				setState(1454);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1453);
					attributespecifierseq(0);
					}
				}

				setState(1457);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1456);
					match(Identifier);
					}
				}

				setState(1460);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(1459);
					enumbase();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
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

				setState(1466);
				nestednamespecifier(0);
				setState(1467);
				match(Identifier);
				setState(1469);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(1468);
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
		enterRule(_localctx, 188, RULE_opaqueenumdeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1473);
			enumkey();
			setState(1475);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1474);
				attributespecifierseq(0);
				}
			}

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

			setState(1481);
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
		enterRule(_localctx, 190, RULE_enumkey);
		try {
			setState(1488);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,142,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1483);
				match(Enum);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1484);
				match(Enum);
				setState(1485);
				match(Class);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1486);
				match(Enum);
				setState(1487);
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
		enterRule(_localctx, 192, RULE_enumbase);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1490);
			match(Colon);
			setState(1491);
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
		int _startState = 194;
		enterRecursionRule(_localctx, 194, RULE_enumeratorlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1494);
			enumeratordefinition();
			}
			_ctx.stop = _input.LT(-1);
			setState(1501);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,143,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new EnumeratorlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_enumeratorlist);
					setState(1496);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1497);
					match(Comma);
					setState(1498);
					enumeratordefinition();
					}
					} 
				}
				setState(1503);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,143,_ctx);
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
		enterRule(_localctx, 196, RULE_enumeratordefinition);
		try {
			setState(1509);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,144,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1504);
				enumerator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1505);
				enumerator();
				setState(1506);
				match(Assign);
				setState(1507);
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
		enterRule(_localctx, 198, RULE_enumerator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1511);
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
		enterRule(_localctx, 200, RULE_namespacename);
		try {
			setState(1515);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,145,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1513);
				originalnamespacename();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1514);
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
		enterRule(_localctx, 202, RULE_originalnamespacename);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1517);
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
		enterRule(_localctx, 204, RULE_namespacedefinition);
		try {
			setState(1521);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,146,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1519);
				namednamespacedefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1520);
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
		enterRule(_localctx, 206, RULE_namednamespacedefinition);
		try {
			setState(1525);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,147,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1523);
				originalnamespacedefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1524);
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
		enterRule(_localctx, 208, RULE_originalnamespacedefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1528);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1527);
				match(Inline);
				}
			}

			setState(1530);
			match(Namespace);
			setState(1531);
			match(Identifier);
			setState(1532);
			match(LeftBrace);
			setState(1533);
			namespacebody();
			setState(1534);
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
		enterRule(_localctx, 210, RULE_extensionnamespacedefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1537);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1536);
				match(Inline);
				}
			}

			setState(1539);
			match(Namespace);
			setState(1540);
			originalnamespacename();
			setState(1541);
			match(LeftBrace);
			setState(1542);
			namespacebody();
			setState(1543);
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
		enterRule(_localctx, 212, RULE_unnamednamespacedefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1546);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1545);
				match(Inline);
				}
			}

			setState(1548);
			match(Namespace);
			setState(1549);
			match(LeftBrace);
			setState(1550);
			namespacebody();
			setState(1551);
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
		enterRule(_localctx, 214, RULE_namespacebody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1554);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << Alignas) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (Register - 65)) | (1L << (Short - 65)) | (1L << (Signed - 65)) | (1L << (Static - 65)) | (1L << (Static_assert - 65)) | (1L << (Struct - 65)) | (1L << (Template - 65)) | (1L << (Thread_local - 65)) | (1L << (Typedef - 65)) | (1L << (Typename_ - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (Wchar - 65)) | (1L << (LeftParen - 65)) | (1L << (LeftBracket - 65)) | (1L << (Star - 65)) | (1L << (And - 65)) | (1L << (Tilde - 65)))) != 0) || ((((_la - 137)) & ~0x3f) == 0 && ((1L << (_la - 137)) & ((1L << (Doublecolon - 137)) | (1L << (Semi - 137)) | (1L << (Ellipsis - 137)) | (1L << (Identifier - 137)))) != 0)) {
				{
				setState(1553);
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
		enterRule(_localctx, 216, RULE_namespacealias);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1556);
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
		enterRule(_localctx, 218, RULE_namespacealiasdefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1558);
			match(Namespace);
			setState(1559);
			match(Identifier);
			setState(1560);
			match(Assign);
			setState(1561);
			qualifiednamespacespecifier();
			setState(1562);
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
		enterRule(_localctx, 220, RULE_qualifiednamespacespecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1565);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,152,_ctx) ) {
			case 1:
				{
				setState(1564);
				nestednamespecifier(0);
				}
				break;
			}
			setState(1567);
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
		enterRule(_localctx, 222, RULE_usingdeclaration);
		int _la;
		try {
			setState(1582);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,154,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1569);
				match(Using);
				setState(1571);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Typename_) {
					{
					setState(1570);
					match(Typename_);
					}
				}

				setState(1573);
				nestednamespecifier(0);
				setState(1574);
				unqualifiedid();
				setState(1575);
				match(Semi);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1577);
				match(Using);
				setState(1578);
				match(Doublecolon);
				setState(1579);
				unqualifiedid();
				setState(1580);
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
		enterRule(_localctx, 224, RULE_usingdirective);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1585);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1584);
				attributespecifierseq(0);
				}
			}

			setState(1587);
			match(Using);
			setState(1588);
			match(Namespace);
			setState(1590);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,156,_ctx) ) {
			case 1:
				{
				setState(1589);
				nestednamespecifier(0);
				}
				break;
			}
			setState(1592);
			namespacename();
			setState(1593);
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
		enterRule(_localctx, 226, RULE_asmdefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1595);
			match(Asm);
			setState(1596);
			match(LeftParen);
			setState(1597);
			match(Stringliteral);
			setState(1598);
			match(RightParen);
			setState(1599);
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
		enterRule(_localctx, 228, RULE_linkagespecification);
		int _la;
		try {
			setState(1611);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,158,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1601);
				match(Extern);
				setState(1602);
				match(Stringliteral);
				setState(1603);
				match(LeftBrace);
				setState(1605);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << Alignas) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (Register - 65)) | (1L << (Short - 65)) | (1L << (Signed - 65)) | (1L << (Static - 65)) | (1L << (Static_assert - 65)) | (1L << (Struct - 65)) | (1L << (Template - 65)) | (1L << (Thread_local - 65)) | (1L << (Typedef - 65)) | (1L << (Typename_ - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (Wchar - 65)) | (1L << (LeftParen - 65)) | (1L << (LeftBracket - 65)) | (1L << (Star - 65)) | (1L << (And - 65)) | (1L << (Tilde - 65)))) != 0) || ((((_la - 137)) & ~0x3f) == 0 && ((1L << (_la - 137)) & ((1L << (Doublecolon - 137)) | (1L << (Semi - 137)) | (1L << (Ellipsis - 137)) | (1L << (Identifier - 137)))) != 0)) {
					{
					setState(1604);
					declarationseq(0);
					}
				}

				setState(1607);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1608);
				match(Extern);
				setState(1609);
				match(Stringliteral);
				setState(1610);
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
		int _startState = 230;
		enterRecursionRule(_localctx, 230, RULE_attributespecifierseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1614);
			attributespecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(1620);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,159,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AttributespecifierseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_attributespecifierseq);
					setState(1616);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1617);
					attributespecifier();
					}
					} 
				}
				setState(1622);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,159,_ctx);
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
		enterRule(_localctx, 232, RULE_attributespecifier);
		try {
			setState(1630);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1623);
				match(LeftBracket);
				setState(1624);
				match(LeftBracket);
				setState(1625);
				attributelist(0);
				setState(1626);
				match(RightBracket);
				setState(1627);
				match(RightBracket);
				}
				break;
			case Alignas:
				enterOuterAlt(_localctx, 2);
				{
				setState(1629);
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
		enterRule(_localctx, 234, RULE_alignmentspecifier);
		int _la;
		try {
			setState(1648);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,163,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1632);
				match(Alignas);
				setState(1633);
				match(LeftParen);
				setState(1634);
				thetypeid();
				setState(1636);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1635);
					match(Ellipsis);
					}
				}

				setState(1638);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1640);
				match(Alignas);
				setState(1641);
				match(LeftParen);
				setState(1642);
				constantexpression();
				setState(1644);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1643);
					match(Ellipsis);
					}
				}

				setState(1646);
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
		int _startState = 236;
		enterRecursionRule(_localctx, 236, RULE_attributelist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1657);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,165,_ctx) ) {
			case 1:
				{
				setState(1652);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,164,_ctx) ) {
				case 1:
					{
					setState(1651);
					attribute();
					}
					break;
				}
				}
				break;
			case 2:
				{
				setState(1654);
				attribute();
				setState(1655);
				match(Ellipsis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1671);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,168,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1669);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,167,_ctx) ) {
					case 1:
						{
						_localctx = new AttributelistContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_attributelist);
						setState(1659);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1660);
						match(Comma);
						setState(1662);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,166,_ctx) ) {
						case 1:
							{
							setState(1661);
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
						setState(1664);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1665);
						match(Comma);
						setState(1666);
						attribute();
						setState(1667);
						match(Ellipsis);
						}
						break;
					}
					} 
				}
				setState(1673);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,168,_ctx);
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
		enterRule(_localctx, 238, RULE_attribute);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1674);
			attributetoken();
			setState(1676);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,169,_ctx) ) {
			case 1:
				{
				setState(1675);
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
		enterRule(_localctx, 240, RULE_attributetoken);
		try {
			setState(1680);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,170,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1678);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1679);
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
		enterRule(_localctx, 242, RULE_attributescopedtoken);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1682);
			attributenamespace();
			setState(1683);
			match(Doublecolon);
			setState(1684);
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
		enterRule(_localctx, 244, RULE_attributenamespace);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1686);
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
		enterRule(_localctx, 246, RULE_attributeargumentclause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1688);
			match(LeftParen);
			setState(1689);
			balancedtokenseq(0);
			setState(1690);
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
		int _startState = 248;
		enterRecursionRule(_localctx, 248, RULE_balancedtokenseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1694);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,171,_ctx) ) {
			case 1:
				{
				setState(1693);
				balancedtoken();
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(1700);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,172,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BalancedtokenseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_balancedtokenseq);
					setState(1696);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1697);
					balancedtoken();
					}
					} 
				}
				setState(1702);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,172,_ctx);
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
		enterRule(_localctx, 250, RULE_balancedtoken);
		try {
			setState(1715);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParen:
				enterOuterAlt(_localctx, 1);
				{
				setState(1703);
				match(LeftParen);
				setState(1704);
				balancedtokenseq(0);
				setState(1705);
				match(RightParen);
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1707);
				match(LeftBracket);
				setState(1708);
				balancedtokenseq(0);
				setState(1709);
				match(RightBracket);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 3);
				{
				setState(1711);
				match(LeftBrace);
				setState(1712);
				balancedtokenseq(0);
				setState(1713);
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
		int _startState = 252;
		enterRecursionRule(_localctx, 252, RULE_initdeclaratorlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1718);
			initdeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(1725);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,174,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitdeclaratorlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initdeclaratorlist);
					setState(1720);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1721);
					match(Comma);
					setState(1722);
					initdeclarator();
					}
					} 
				}
				setState(1727);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,174,_ctx);
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
		enterRule(_localctx, 254, RULE_initdeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1728);
			declarator();
			setState(1730);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,175,_ctx) ) {
			case 1:
				{
				setState(1729);
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
		enterRule(_localctx, 256, RULE_declarator);
		try {
			setState(1737);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,176,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1732);
				ptrdeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
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
		public NoptrdeclaratorContext noptrdeclarator() {
			return getRuleContext(NoptrdeclaratorContext.class,0);
		}
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
		enterRule(_localctx, 258, RULE_ptrdeclarator);
		try {
			setState(1743);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,177,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1739);
				noptrdeclarator(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1740);
				ptroperator();
				setState(1741);
				ptrdeclarator();
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
		int _startState = 260;
		enterRecursionRule(_localctx, 260, RULE_noptrdeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1754);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Decltype:
			case Operator:
			case Tilde:
			case Doublecolon:
			case Ellipsis:
			case Identifier:
				{
				setState(1746);
				declaratorid();
				setState(1748);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,178,_ctx) ) {
				case 1:
					{
					setState(1747);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case LeftParen:
				{
				setState(1750);
				match(LeftParen);
				setState(1751);
				ptrdeclarator();
				setState(1752);
				match(RightParen);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1769);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,183,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1767);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,182,_ctx) ) {
					case 1:
						{
						_localctx = new NoptrdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrdeclarator);
						setState(1756);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1757);
						parametersandqualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoptrdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrdeclarator);
						setState(1758);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1759);
						match(LeftBracket);
						setState(1761);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
							{
							setState(1760);
							constantexpression();
							}
						}

						setState(1763);
						match(RightBracket);
						setState(1765);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,181,_ctx) ) {
						case 1:
							{
							setState(1764);
							attributespecifierseq(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1771);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,183,_ctx);
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
		enterRule(_localctx, 262, RULE_parametersandqualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1772);
			match(LeftParen);
			setState(1773);
			parameterdeclarationclause();
			setState(1774);
			match(RightParen);
			setState(1776);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,184,_ctx) ) {
			case 1:
				{
				setState(1775);
				cvqualifierseq();
				}
				break;
			}
			setState(1779);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,185,_ctx) ) {
			case 1:
				{
				setState(1778);
				refqualifier();
				}
				break;
			}
			setState(1782);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,186,_ctx) ) {
			case 1:
				{
				setState(1781);
				exceptionspecification();
				}
				break;
			}
			setState(1785);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,187,_ctx) ) {
			case 1:
				{
				setState(1784);
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
		enterRule(_localctx, 264, RULE_trailingreturntype);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1787);
			match(Arrow);
			setState(1788);
			trailingtypespecifierseq();
			setState(1790);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,188,_ctx) ) {
			case 1:
				{
				setState(1789);
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
		enterRule(_localctx, 266, RULE_ptroperator);
		try {
			setState(1815);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Star:
				enterOuterAlt(_localctx, 1);
				{
				setState(1792);
				match(Star);
				setState(1794);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,189,_ctx) ) {
				case 1:
					{
					setState(1793);
					attributespecifierseq(0);
					}
					break;
				}
				setState(1797);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,190,_ctx) ) {
				case 1:
					{
					setState(1796);
					cvqualifierseq();
					}
					break;
				}
				}
				break;
			case And:
				enterOuterAlt(_localctx, 2);
				{
				setState(1799);
				match(And);
				setState(1801);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,191,_ctx) ) {
				case 1:
					{
					setState(1800);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case T__10:
				enterOuterAlt(_localctx, 3);
				{
				setState(1803);
				match(T__10);
				setState(1805);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,192,_ctx) ) {
				case 1:
					{
					setState(1804);
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
				setState(1807);
				nestednamespecifier(0);
				setState(1808);
				match(Star);
				setState(1810);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,193,_ctx) ) {
				case 1:
					{
					setState(1809);
					attributespecifierseq(0);
					}
					break;
				}
				setState(1813);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,194,_ctx) ) {
				case 1:
					{
					setState(1812);
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
		enterRule(_localctx, 268, RULE_cvqualifierseq);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1817);
			cvqualifier();
			setState(1819);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,196,_ctx) ) {
			case 1:
				{
				setState(1818);
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
		enterRule(_localctx, 270, RULE_cvqualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1821);
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
		enterRule(_localctx, 272, RULE_refqualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1823);
			_la = _input.LA(1);
			if ( !(_la==T__10 || _la==And) ) {
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
		enterRule(_localctx, 274, RULE_declaratorid);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1826);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Ellipsis) {
				{
				setState(1825);
				match(Ellipsis);
				}
			}

			setState(1828);
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
		enterRule(_localctx, 276, RULE_thetypeid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1830);
			typespecifierseq();
			setState(1832);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,198,_ctx) ) {
			case 1:
				{
				setState(1831);
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
		enterRule(_localctx, 278, RULE_abstractdeclarator);
		try {
			setState(1842);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,200,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1834);
				ptrabstractdeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1836);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,199,_ctx) ) {
				case 1:
					{
					setState(1835);
					noptrabstractdeclarator(0);
					}
					break;
				}
				setState(1838);
				parametersandqualifiers();
				setState(1839);
				trailingreturntype();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1841);
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
		enterRule(_localctx, 280, RULE_ptrabstractdeclarator);
		try {
			setState(1849);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParen:
			case LeftBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1844);
				noptrabstractdeclarator(0);
				}
				break;
			case T__10:
			case Decltype:
			case Star:
			case And:
			case Doublecolon:
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(1845);
				ptroperator();
				setState(1847);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,201,_ctx) ) {
				case 1:
					{
					setState(1846);
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
		int _startState = 282;
		enterRecursionRule(_localctx, 282, RULE_noptrabstractdeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1865);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,205,_ctx) ) {
			case 1:
				{
				setState(1852);
				parametersandqualifiers();
				}
				break;
			case 2:
				{
				setState(1853);
				match(LeftBracket);
				setState(1855);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
					{
					setState(1854);
					constantexpression();
					}
				}

				setState(1857);
				match(RightBracket);
				setState(1859);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,204,_ctx) ) {
				case 1:
					{
					setState(1858);
					attributespecifierseq(0);
					}
					break;
				}
				}
				break;
			case 3:
				{
				setState(1861);
				match(LeftParen);
				setState(1862);
				ptrabstractdeclarator();
				setState(1863);
				match(RightParen);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1880);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,209,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1878);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,208,_ctx) ) {
					case 1:
						{
						_localctx = new NoptrabstractdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractdeclarator);
						setState(1867);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1868);
						parametersandqualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoptrabstractdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractdeclarator);
						setState(1869);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1870);
						match(LeftBracket);
						setState(1872);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
							{
							setState(1871);
							constantexpression();
							}
						}

						setState(1874);
						match(RightBracket);
						setState(1876);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,207,_ctx) ) {
						case 1:
							{
							setState(1875);
							attributespecifierseq(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1882);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,209,_ctx);
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
		enterRule(_localctx, 284, RULE_abstractpackdeclarator);
		try {
			setState(1887);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ellipsis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1883);
				noptrabstractpackdeclarator(0);
				}
				break;
			case T__10:
			case Decltype:
			case Star:
			case And:
			case Doublecolon:
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(1884);
				ptroperator();
				setState(1885);
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
		int _startState = 286;
		enterRecursionRule(_localctx, 286, RULE_noptrabstractpackdeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1890);
			match(Ellipsis);
			}
			_ctx.stop = _input.LT(-1);
			setState(1905);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,214,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1903);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,213,_ctx) ) {
					case 1:
						{
						_localctx = new NoptrabstractpackdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractpackdeclarator);
						setState(1892);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1893);
						parametersandqualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoptrabstractpackdeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noptrabstractpackdeclarator);
						setState(1894);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1895);
						match(LeftBracket);
						setState(1897);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
							{
							setState(1896);
							constantexpression();
							}
						}

						setState(1899);
						match(RightBracket);
						setState(1901);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,212,_ctx) ) {
						case 1:
							{
							setState(1900);
							attributespecifierseq(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1907);
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
		enterRule(_localctx, 288, RULE_parameterdeclarationclause);
		int _la;
		try {
			setState(1918);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,217,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1909);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 18)) & ~0x3f) == 0 && ((1L << (_la - 18)) & ((1L << (Alignas - 18)) | (1L << (Auto - 18)) | (1L << (Bool - 18)) | (1L << (Char - 18)) | (1L << (Char16 - 18)) | (1L << (Char32 - 18)) | (1L << (Class - 18)) | (1L << (Const - 18)) | (1L << (Constexpr - 18)) | (1L << (Decltype - 18)) | (1L << (Double - 18)) | (1L << (Enum - 18)) | (1L << (Explicit - 18)) | (1L << (Extern - 18)) | (1L << (Float - 18)) | (1L << (Friend - 18)) | (1L << (Inline - 18)) | (1L << (Int - 18)) | (1L << (Long - 18)) | (1L << (Mutable - 18)) | (1L << (Register - 18)) | (1L << (Short - 18)) | (1L << (Signed - 18)) | (1L << (Static - 18)) | (1L << (Struct - 18)) | (1L << (Thread_local - 18)))) != 0) || ((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (Typedef - 82)) | (1L << (Typename_ - 82)) | (1L << (Union - 82)) | (1L << (Unsigned - 82)) | (1L << (Virtual - 82)) | (1L << (Void - 82)) | (1L << (Volatile - 82)) | (1L << (Wchar - 82)) | (1L << (LeftBracket - 82)) | (1L << (Doublecolon - 82)) | (1L << (Identifier - 82)))) != 0)) {
					{
					setState(1908);
					parameterdeclarationlist(0);
					}
				}

				setState(1912);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1911);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1914);
				parameterdeclarationlist(0);
				setState(1915);
				match(Comma);
				setState(1916);
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
		int _startState = 290;
		enterRecursionRule(_localctx, 290, RULE_parameterdeclarationlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1921);
			parameterdeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1928);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,218,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ParameterdeclarationlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_parameterdeclarationlist);
					setState(1923);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1924);
					match(Comma);
					setState(1925);
					parameterdeclaration();
					}
					} 
				}
				setState(1930);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,218,_ctx);
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
		enterRule(_localctx, 292, RULE_parameterdeclaration);
		int _la;
		try {
			setState(1962);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,225,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1932);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1931);
					attributespecifierseq(0);
					}
				}

				setState(1934);
				declspecifierseq();
				setState(1935);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1938);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1937);
					attributespecifierseq(0);
					}
				}

				setState(1940);
				declspecifierseq();
				setState(1941);
				declarator();
				setState(1942);
				match(Assign);
				setState(1943);
				initializerclause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1946);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1945);
					attributespecifierseq(0);
					}
				}

				setState(1948);
				declspecifierseq();
				setState(1950);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,222,_ctx) ) {
				case 1:
					{
					setState(1949);
					abstractdeclarator();
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1953);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(1952);
					attributespecifierseq(0);
					}
				}

				setState(1955);
				declspecifierseq();
				setState(1957);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__10 || _la==Decltype || ((((_la - 93)) & ~0x3f) == 0 && ((1L << (_la - 93)) & ((1L << (LeftParen - 93)) | (1L << (LeftBracket - 93)) | (1L << (Star - 93)) | (1L << (And - 93)) | (1L << (Doublecolon - 93)) | (1L << (Ellipsis - 93)) | (1L << (Identifier - 93)))) != 0)) {
					{
					setState(1956);
					abstractdeclarator();
					}
				}

				setState(1959);
				match(Assign);
				setState(1960);
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
		enterRule(_localctx, 294, RULE_functiondefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1965);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Alignas || _la==LeftBracket) {
				{
				setState(1964);
				attributespecifierseq(0);
				}
			}

			setState(1968);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,227,_ctx) ) {
			case 1:
				{
				setState(1967);
				declspecifierseq();
				}
				break;
			}
			setState(1970);
			declarator();
			setState(1972);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Final || _la==Override) {
				{
				setState(1971);
				virtspecifierseq(0);
				}
			}

			setState(1974);
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
		enterRule(_localctx, 296, RULE_functionbody);
		int _la;
		try {
			setState(1987);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,230,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1977);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(1976);
					ctorinitializer();
					}
				}

				setState(1979);
				compoundstatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1980);
				functiontryblock();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1981);
				match(Assign);
				setState(1982);
				match(Default);
				setState(1983);
				match(Semi);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1984);
				match(Assign);
				setState(1985);
				match(Delete);
				setState(1986);
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
		enterRule(_localctx, 298, RULE_initializer);
		try {
			setState(1994);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBrace:
			case Assign:
				enterOuterAlt(_localctx, 1);
				{
				setState(1989);
				braceorequalinitializer();
				}
				break;
			case LeftParen:
				enterOuterAlt(_localctx, 2);
				{
				setState(1990);
				match(LeftParen);
				setState(1991);
				expressionlist();
				setState(1992);
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
		enterRule(_localctx, 300, RULE_braceorequalinitializer);
		try {
			setState(1999);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Assign:
				enterOuterAlt(_localctx, 1);
				{
				setState(1996);
				match(Assign);
				setState(1997);
				initializerclause();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(1998);
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
		enterRule(_localctx, 302, RULE_initializerclause);
		try {
			setState(2003);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__4:
			case T__8:
			case T__9:
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
				setState(2001);
				assignmentexpression();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2002);
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
		int _startState = 304;
		enterRecursionRule(_localctx, 304, RULE_initializerlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2006);
			initializerclause();
			setState(2008);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,234,_ctx) ) {
			case 1:
				{
				setState(2007);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2018);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,236,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerlist);
					setState(2010);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2011);
					match(Comma);
					setState(2012);
					initializerclause();
					setState(2014);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,235,_ctx) ) {
					case 1:
						{
						setState(2013);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2020);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,236,_ctx);
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
		enterRule(_localctx, 306, RULE_bracedinitlist);
		int _la;
		try {
			setState(2030);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,238,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2021);
				match(LeftBrace);
				setState(2022);
				initializerlist(0);
				setState(2024);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(2023);
					match(Comma);
					}
				}

				setState(2026);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2028);
				match(LeftBrace);
				setState(2029);
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
		enterRule(_localctx, 308, RULE_classname);
		try {
			setState(2034);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,239,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2032);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2033);
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
		enterRule(_localctx, 310, RULE_classspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2036);
			classhead();
			setState(2037);
			match(LeftBrace);
			setState(2039);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << Alignas) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Public - 64)) | (1L << (Register - 64)) | (1L << (Short - 64)) | (1L << (Signed - 64)) | (1L << (Static - 64)) | (1L << (Static_assert - 64)) | (1L << (Struct - 64)) | (1L << (Template - 64)) | (1L << (Thread_local - 64)) | (1L << (Typedef - 64)) | (1L << (Typename_ - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (Wchar - 64)) | (1L << (LeftParen - 64)) | (1L << (LeftBracket - 64)) | (1L << (Star - 64)) | (1L << (And - 64)) | (1L << (Tilde - 64)))) != 0) || ((((_la - 136)) & ~0x3f) == 0 && ((1L << (_la - 136)) & ((1L << (Colon - 136)) | (1L << (Doublecolon - 136)) | (1L << (Semi - 136)) | (1L << (Ellipsis - 136)) | (1L << (Identifier - 136)))) != 0)) {
				{
				setState(2038);
				memberspecification();
				}
			}

			setState(2041);
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
		enterRule(_localctx, 312, RULE_classhead);
		int _la;
		try {
			setState(2061);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,246,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2043);
				classkey();
				setState(2045);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2044);
					attributespecifierseq(0);
					}
				}

				setState(2047);
				classheadname();
				setState(2049);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Final) {
					{
					setState(2048);
					classvirtspecifier();
					}
				}

				setState(2052);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2051);
					baseclause();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2054);
				classkey();
				setState(2056);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2055);
					attributespecifierseq(0);
					}
				}

				setState(2059);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2058);
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
		enterRule(_localctx, 314, RULE_classheadname);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2064);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,247,_ctx) ) {
			case 1:
				{
				setState(2063);
				nestednamespecifier(0);
				}
				break;
			}
			setState(2066);
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
		enterRule(_localctx, 316, RULE_classvirtspecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2068);
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
		enterRule(_localctx, 318, RULE_classkey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2070);
			_la = _input.LA(1);
			if ( !(((((_la - 29)) & ~0x3f) == 0 && ((1L << (_la - 29)) & ((1L << (Class - 29)) | (1L << (Struct - 29)) | (1L << (Union - 29)))) != 0)) ) {
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
		enterRule(_localctx, 320, RULE_memberspecification);
		int _la;
		try {
			setState(2081);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__10:
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
				setState(2072);
				memberdeclaration();
				setState(2074);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << Alignas) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Public - 64)) | (1L << (Register - 64)) | (1L << (Short - 64)) | (1L << (Signed - 64)) | (1L << (Static - 64)) | (1L << (Static_assert - 64)) | (1L << (Struct - 64)) | (1L << (Template - 64)) | (1L << (Thread_local - 64)) | (1L << (Typedef - 64)) | (1L << (Typename_ - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (Wchar - 64)) | (1L << (LeftParen - 64)) | (1L << (LeftBracket - 64)) | (1L << (Star - 64)) | (1L << (And - 64)) | (1L << (Tilde - 64)))) != 0) || ((((_la - 136)) & ~0x3f) == 0 && ((1L << (_la - 136)) & ((1L << (Colon - 136)) | (1L << (Doublecolon - 136)) | (1L << (Semi - 136)) | (1L << (Ellipsis - 136)) | (1L << (Identifier - 136)))) != 0)) {
					{
					setState(2073);
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
				setState(2076);
				accessspecifier();
				setState(2077);
				match(Colon);
				setState(2079);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << Alignas) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Constexpr) | (1L << Decltype) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Public - 64)) | (1L << (Register - 64)) | (1L << (Short - 64)) | (1L << (Signed - 64)) | (1L << (Static - 64)) | (1L << (Static_assert - 64)) | (1L << (Struct - 64)) | (1L << (Template - 64)) | (1L << (Thread_local - 64)) | (1L << (Typedef - 64)) | (1L << (Typename_ - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (Wchar - 64)) | (1L << (LeftParen - 64)) | (1L << (LeftBracket - 64)) | (1L << (Star - 64)) | (1L << (And - 64)) | (1L << (Tilde - 64)))) != 0) || ((((_la - 136)) & ~0x3f) == 0 && ((1L << (_la - 136)) & ((1L << (Colon - 136)) | (1L << (Doublecolon - 136)) | (1L << (Semi - 136)) | (1L << (Ellipsis - 136)) | (1L << (Identifier - 136)))) != 0)) {
					{
					setState(2078);
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
		enterRule(_localctx, 322, RULE_memberdeclaration);
		int _la;
		try {
			setState(2099);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,254,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2084);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,251,_ctx) ) {
				case 1:
					{
					setState(2083);
					attributespecifierseq(0);
					}
					break;
				}
				setState(2087);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,252,_ctx) ) {
				case 1:
					{
					setState(2086);
					declspecifierseq();
					}
					break;
				}
				setState(2090);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << Alignas) | (1L << Decltype) | (1L << Operator))) != 0) || ((((_la - 93)) & ~0x3f) == 0 && ((1L << (_la - 93)) & ((1L << (LeftParen - 93)) | (1L << (LeftBracket - 93)) | (1L << (Star - 93)) | (1L << (And - 93)) | (1L << (Tilde - 93)) | (1L << (Colon - 93)) | (1L << (Doublecolon - 93)) | (1L << (Ellipsis - 93)) | (1L << (Identifier - 93)))) != 0)) {
					{
					setState(2089);
					memberdeclaratorlist(0);
					}
				}

				setState(2092);
				match(Semi);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2093);
				functiondefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2094);
				usingdeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2095);
				static_assertdeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2096);
				templatedeclaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2097);
				aliasdeclaration();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2098);
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
		int _startState = 324;
		enterRecursionRule(_localctx, 324, RULE_memberdeclaratorlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2102);
			memberdeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(2109);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,255,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberdeclaratorlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberdeclaratorlist);
					setState(2104);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2105);
					match(Comma);
					setState(2106);
					memberdeclarator();
					}
					} 
				}
				setState(2111);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,255,_ctx);
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
		enterRule(_localctx, 326, RULE_memberdeclarator);
		int _la;
		try {
			setState(2131);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,261,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2112);
				declarator();
				setState(2114);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,256,_ctx) ) {
				case 1:
					{
					setState(2113);
					virtspecifierseq(0);
					}
					break;
				}
				setState(2117);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,257,_ctx) ) {
				case 1:
					{
					setState(2116);
					purespecifier();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2119);
				declarator();
				setState(2121);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,258,_ctx) ) {
				case 1:
					{
					setState(2120);
					braceorequalinitializer();
					}
					break;
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2124);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2123);
					match(Identifier);
					}
				}

				setState(2127);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2126);
					attributespecifierseq(0);
					}
				}

				setState(2129);
				match(Colon);
				setState(2130);
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
		int _startState = 328;
		enterRecursionRule(_localctx, 328, RULE_virtspecifierseq, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2134);
			virtspecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(2140);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,262,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new VirtspecifierseqContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_virtspecifierseq);
					setState(2136);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2137);
					virtspecifier();
					}
					} 
				}
				setState(2142);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,262,_ctx);
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
		enterRule(_localctx, 330, RULE_virtspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2143);
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
		enterRule(_localctx, 332, RULE_purespecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2145);
			match(Assign);
			setState(2146);
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
		enterRule(_localctx, 334, RULE_baseclause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2149);
			match(Colon);
			setState(2150);
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
		int _startState = 336;
		enterRecursionRule(_localctx, 336, RULE_basespecifierlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2153);
			basespecifier();
			setState(2155);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,263,_ctx) ) {
			case 1:
				{
				setState(2154);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2165);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,265,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BasespecifierlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_basespecifierlist);
					setState(2157);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2158);
					match(Comma);
					setState(2159);
					basespecifier();
					setState(2161);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,264,_ctx) ) {
					case 1:
						{
						setState(2160);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2167);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,265,_ctx);
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
		enterRule(_localctx, 338, RULE_basespecifier);
		int _la;
		try {
			setState(2189);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,271,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2169);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2168);
					attributespecifierseq(0);
					}
				}

				setState(2171);
				basetypespecifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2173);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2172);
					attributespecifierseq(0);
					}
				}

				setState(2175);
				match(Virtual);
				setState(2177);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 62)) & ~0x3f) == 0 && ((1L << (_la - 62)) & ((1L << (Private - 62)) | (1L << (Protected - 62)) | (1L << (Public - 62)))) != 0)) {
					{
					setState(2176);
					accessspecifier();
					}
				}

				setState(2179);
				basetypespecifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2181);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2180);
					attributespecifierseq(0);
					}
				}

				setState(2183);
				accessspecifier();
				setState(2185);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Virtual) {
					{
					setState(2184);
					match(Virtual);
					}
				}

				setState(2187);
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
		enterRule(_localctx, 340, RULE_classordecltype);
		try {
			setState(2196);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,273,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2192);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,272,_ctx) ) {
				case 1:
					{
					setState(2191);
					nestednamespecifier(0);
					}
					break;
				}
				setState(2194);
				classname();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2195);
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
		enterRule(_localctx, 342, RULE_basetypespecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2198);
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
		enterRule(_localctx, 344, RULE_accessspecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2200);
			_la = _input.LA(1);
			if ( !(((((_la - 62)) & ~0x3f) == 0 && ((1L << (_la - 62)) & ((1L << (Private - 62)) | (1L << (Protected - 62)) | (1L << (Public - 62)))) != 0)) ) {
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
		enterRule(_localctx, 346, RULE_conversionfunctionid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2202);
			match(Operator);
			setState(2203);
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
		enterRule(_localctx, 348, RULE_conversiontypeid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2205);
			typespecifierseq();
			setState(2207);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,274,_ctx) ) {
			case 1:
				{
				setState(2206);
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
		enterRule(_localctx, 350, RULE_conversiondeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2209);
			ptroperator();
			setState(2211);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,275,_ctx) ) {
			case 1:
				{
				setState(2210);
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
		enterRule(_localctx, 352, RULE_ctorinitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2213);
			match(Colon);
			setState(2214);
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
		enterRule(_localctx, 354, RULE_meminitializerlist);
		int _la;
		try {
			setState(2227);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,278,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2216);
				meminitializer();
				setState(2218);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(2217);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2220);
				meminitializer();
				setState(2222);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(2221);
					match(Ellipsis);
					}
				}

				setState(2224);
				match(Comma);
				setState(2225);
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
		enterRule(_localctx, 356, RULE_meminitializer);
		int _la;
		try {
			setState(2239);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,280,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2229);
				meminitializerid();
				setState(2230);
				match(LeftParen);
				setState(2232);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (This - 66)) | (1L << (Throw - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (LeftBrace - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
					{
					setState(2231);
					expressionlist();
					}
				}

				setState(2234);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2236);
				meminitializerid();
				setState(2237);
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
		enterRule(_localctx, 358, RULE_meminitializerid);
		try {
			setState(2243);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,281,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2241);
				classordecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2242);
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
		enterRule(_localctx, 360, RULE_operatorfunctionid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2245);
			match(Operator);
			setState(2246);
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
		enterRule(_localctx, 362, RULE_literaloperatorid);
		try {
			setState(2259);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,284,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2248);
				match(Operator);
				setState(2251);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case Stringliteral:
					{
					setState(2249);
					match(Stringliteral);
					}
					break;
				case T__4:
				case Encodingprefix:
					{
					setState(2250);
					aergiastring();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(2253);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2254);
				match(Operator);
				setState(2257);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case Userdefinedstringliteral:
					{
					setState(2255);
					match(Userdefinedstringliteral);
					}
					break;
				case T__4:
				case Encodingprefix:
					{
					setState(2256);
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
		enterRule(_localctx, 364, RULE_templatedeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2261);
			match(Template);
			setState(2262);
			match(Less);
			setState(2263);
			templateparameterlist(0);
			setState(2264);
			match(Greater);
			setState(2265);
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
		int _startState = 366;
		enterRecursionRule(_localctx, 366, RULE_templateparameterlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2268);
			templateparameter();
			}
			_ctx.stop = _input.LT(-1);
			setState(2275);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,285,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateparameterlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateparameterlist);
					setState(2270);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2271);
					match(Comma);
					setState(2272);
					templateparameter();
					}
					} 
				}
				setState(2277);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,285,_ctx);
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
		enterRule(_localctx, 368, RULE_templateparameter);
		try {
			setState(2280);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,286,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2278);
				typeparameter();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2279);
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
		enterRule(_localctx, 370, RULE_typeparameter);
		int _la;
		try {
			setState(2330);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,296,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2282);
				match(Class);
				setState(2284);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,287,_ctx) ) {
				case 1:
					{
					setState(2283);
					match(Ellipsis);
					}
					break;
				}
				setState(2287);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,288,_ctx) ) {
				case 1:
					{
					setState(2286);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2289);
				match(Class);
				setState(2291);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2290);
					match(Identifier);
					}
				}

				setState(2293);
				match(Assign);
				setState(2294);
				thetypeid();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2295);
				match(Typename_);
				setState(2297);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,290,_ctx) ) {
				case 1:
					{
					setState(2296);
					match(Ellipsis);
					}
					break;
				}
				setState(2300);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,291,_ctx) ) {
				case 1:
					{
					setState(2299);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2302);
				match(Typename_);
				setState(2304);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2303);
					match(Identifier);
					}
				}

				setState(2306);
				match(Assign);
				setState(2307);
				thetypeid();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2308);
				match(Template);
				setState(2309);
				match(Less);
				setState(2310);
				templateparameterlist(0);
				setState(2311);
				match(Greater);
				setState(2312);
				match(Class);
				setState(2314);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,293,_ctx) ) {
				case 1:
					{
					setState(2313);
					match(Ellipsis);
					}
					break;
				}
				setState(2317);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,294,_ctx) ) {
				case 1:
					{
					setState(2316);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2319);
				match(Template);
				setState(2320);
				match(Less);
				setState(2321);
				templateparameterlist(0);
				setState(2322);
				match(Greater);
				setState(2323);
				match(Class);
				setState(2325);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2324);
					match(Identifier);
					}
				}

				setState(2327);
				match(Assign);
				setState(2328);
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
		enterRule(_localctx, 372, RULE_simpletemplateid);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2332);
			templatename();
			setState(2333);
			match(Less);
			setState(2335);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (Struct - 66)) | (1L << (This - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
				{
				setState(2334);
				templateargumentlist(0);
				}
			}

			setState(2337);
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
		enterRule(_localctx, 374, RULE_templateid);
		int _la;
		try {
			setState(2354);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,300,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2339);
				simpletemplateid();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2340);
				operatorfunctionid();
				setState(2341);
				match(Less);
				setState(2343);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (Struct - 66)) | (1L << (This - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
					{
					setState(2342);
					templateargumentlist(0);
					}
				}

				setState(2345);
				match(Greater);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2347);
				literaloperatorid();
				setState(2348);
				match(Less);
				setState(2350);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__8) | (1L << T__9) | (1L << Encodingprefix) | (1L << Alignof) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << Const_cast) | (1L << Decltype) | (1L << Delete) | (1L << Double) | (1L << Dynamic_cast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << Noexcept) | (1L << Nullptr) | (1L << Operator))) != 0) || ((((_la - 66)) & ~0x3f) == 0 && ((1L << (_la - 66)) & ((1L << (Reinterpret_cast - 66)) | (1L << (Short - 66)) | (1L << (Signed - 66)) | (1L << (Sizeof - 66)) | (1L << (Static_cast - 66)) | (1L << (Struct - 66)) | (1L << (This - 66)) | (1L << (True - 66)) | (1L << (Typeid_ - 66)) | (1L << (Typename_ - 66)) | (1L << (Union - 66)) | (1L << (Unsigned - 66)) | (1L << (Void - 66)) | (1L << (Volatile - 66)) | (1L << (Wchar - 66)) | (1L << (LeftParen - 66)) | (1L << (LeftBracket - 66)) | (1L << (Plus - 66)) | (1L << (Minus - 66)) | (1L << (Star - 66)) | (1L << (And - 66)) | (1L << (Or - 66)) | (1L << (Tilde - 66)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (PlusPlus - 130)) | (1L << (MinusMinus - 130)) | (1L << (Doublecolon - 130)) | (1L << (Identifier - 130)) | (1L << (Integerliteral - 130)) | (1L << (Characterliteral - 130)) | (1L << (Floatingliteral - 130)) | (1L << (Stringliteral - 130)) | (1L << (Userdefinedintegerliteral - 130)) | (1L << (Userdefinedfloatingliteral - 130)) | (1L << (Userdefinedstringliteral - 130)) | (1L << (Userdefinedcharacterliteral - 130)))) != 0)) {
					{
					setState(2349);
					templateargumentlist(0);
					}
				}

				setState(2352);
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
		enterRule(_localctx, 376, RULE_templatename);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2356);
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
		int _startState = 378;
		enterRecursionRule(_localctx, 378, RULE_templateargumentlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2359);
			templateargument();
			setState(2361);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,301,_ctx) ) {
			case 1:
				{
				setState(2360);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2371);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,303,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateargumentlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateargumentlist);
					setState(2363);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2364);
					match(Comma);
					setState(2365);
					templateargument();
					setState(2367);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,302,_ctx) ) {
					case 1:
						{
						setState(2366);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2373);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,303,_ctx);
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
		enterRule(_localctx, 380, RULE_templateargument);
		try {
			setState(2377);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,304,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2374);
				thetypeid();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2375);
				constantexpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2376);
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
		enterRule(_localctx, 382, RULE_typenamespecifier);
		int _la;
		try {
			setState(2390);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,306,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2379);
				match(Typename_);
				setState(2380);
				nestednamespecifier(0);
				setState(2381);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2383);
				match(Typename_);
				setState(2384);
				nestednamespecifier(0);
				setState(2386);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(2385);
					match(Template);
					}
				}

				setState(2388);
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
		enterRule(_localctx, 384, RULE_explicitinstantiation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2393);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Extern) {
				{
				setState(2392);
				match(Extern);
				}
			}

			setState(2395);
			match(Template);
			setState(2396);
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
		enterRule(_localctx, 386, RULE_explicitspecialization);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2398);
			match(Template);
			setState(2399);
			match(Less);
			setState(2400);
			match(Greater);
			setState(2401);
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
		enterRule(_localctx, 388, RULE_tryblock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2403);
			match(Try);
			setState(2404);
			compoundstatement();
			setState(2405);
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
		enterRule(_localctx, 390, RULE_functiontryblock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2407);
			match(Try);
			setState(2409);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2408);
				ctorinitializer();
				}
			}

			setState(2411);
			compoundstatement();
			setState(2412);
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
		enterRule(_localctx, 392, RULE_handlerseq);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2414);
			handler();
			setState(2416);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,309,_ctx) ) {
			case 1:
				{
				setState(2415);
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
		enterRule(_localctx, 394, RULE_handler);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2418);
			match(Catch);
			setState(2419);
			match(LeftParen);
			setState(2420);
			exceptiondeclaration();
			setState(2421);
			match(RightParen);
			setState(2422);
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
		enterRule(_localctx, 396, RULE_exceptiondeclaration);
		int _la;
		try {
			setState(2438);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,313,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2425);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2424);
					attributespecifierseq(0);
					}
				}

				setState(2427);
				typespecifierseq();
				setState(2428);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2431);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Alignas || _la==LeftBracket) {
					{
					setState(2430);
					attributespecifierseq(0);
					}
				}

				setState(2433);
				typespecifierseq();
				setState(2435);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__10 || _la==Decltype || ((((_la - 93)) & ~0x3f) == 0 && ((1L << (_la - 93)) & ((1L << (LeftParen - 93)) | (1L << (LeftBracket - 93)) | (1L << (Star - 93)) | (1L << (And - 93)) | (1L << (Doublecolon - 93)) | (1L << (Ellipsis - 93)) | (1L << (Identifier - 93)))) != 0)) {
					{
					setState(2434);
					abstractdeclarator();
					}
				}

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2437);
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
		enterRule(_localctx, 398, RULE_throwexpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2440);
			match(Throw);
			setState(2442);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,314,_ctx) ) {
			case 1:
				{
				setState(2441);
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
		enterRule(_localctx, 400, RULE_exceptionspecification);
		try {
			setState(2446);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Throw:
				enterOuterAlt(_localctx, 1);
				{
				setState(2444);
				dynamicexceptionspecification();
				}
				break;
			case Noexcept:
				enterOuterAlt(_localctx, 2);
				{
				setState(2445);
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
		enterRule(_localctx, 402, RULE_dynamicexceptionspecification);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2448);
			match(Throw);
			setState(2449);
			match(LeftParen);
			setState(2451);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 21)) & ~0x3f) == 0 && ((1L << (_la - 21)) & ((1L << (Auto - 21)) | (1L << (Bool - 21)) | (1L << (Char - 21)) | (1L << (Char16 - 21)) | (1L << (Char32 - 21)) | (1L << (Class - 21)) | (1L << (Const - 21)) | (1L << (Decltype - 21)) | (1L << (Double - 21)) | (1L << (Enum - 21)) | (1L << (Float - 21)) | (1L << (Int - 21)) | (1L << (Long - 21)) | (1L << (Short - 21)) | (1L << (Signed - 21)) | (1L << (Struct - 21)) | (1L << (Typename_ - 21)))) != 0) || ((((_la - 85)) & ~0x3f) == 0 && ((1L << (_la - 85)) & ((1L << (Union - 85)) | (1L << (Unsigned - 85)) | (1L << (Void - 85)) | (1L << (Volatile - 85)) | (1L << (Wchar - 85)) | (1L << (Doublecolon - 85)) | (1L << (Identifier - 85)))) != 0)) {
				{
				setState(2450);
				typeidlist(0);
				}
			}

			setState(2453);
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
		int _startState = 404;
		enterRecursionRule(_localctx, 404, RULE_typeidlist, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2456);
			thetypeid();
			setState(2458);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,317,_ctx) ) {
			case 1:
				{
				setState(2457);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2468);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,319,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TypeidlistContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_typeidlist);
					setState(2460);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2461);
					match(Comma);
					setState(2462);
					thetypeid();
					setState(2464);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,318,_ctx) ) {
					case 1:
						{
						setState(2463);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2470);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,319,_ctx);
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
		enterRule(_localctx, 406, RULE_noexceptspecification);
		try {
			setState(2477);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,320,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2471);
				match(Noexcept);
				setState(2472);
				match(LeftParen);
				setState(2473);
				constantexpression();
				setState(2474);
				match(RightParen);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2476);
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
		enterRule(_localctx, 408, RULE_theoperator);
		try {
			setState(2530);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,321,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2479);
				match(New);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2480);
				match(Delete);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2481);
				match(New);
				setState(2482);
				match(LeftBracket);
				setState(2483);
				match(RightBracket);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2484);
				match(Delete);
				setState(2485);
				match(LeftBracket);
				setState(2486);
				match(RightBracket);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2487);
				match(Plus);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2488);
				match(Minus);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2489);
				match(Star);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2490);
				match(Div);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2491);
				match(Mod);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2492);
				match(Caret);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2493);
				match(And);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(2494);
				match(Or);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(2495);
				match(Tilde);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(2496);
				match(T__8);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(2497);
				match(T__9);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(2498);
				match(Assign);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(2499);
				match(Less);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(2500);
				match(Greater);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(2501);
				match(PlusAssign);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(2502);
				match(MinusAssign);
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(2503);
				match(StarAssign);
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(2504);
				match(DivAssign);
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(2505);
				match(ModAssign);
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(2506);
				match(XorAssign);
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(2507);
				match(AndAssign);
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(2508);
				match(OrAssign);
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(2509);
				match(LeftShift);
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(2510);
				match(RightShift);
				}
				break;
			case 29:
				enterOuterAlt(_localctx, 29);
				{
				setState(2511);
				match(RightShiftAssign);
				}
				break;
			case 30:
				enterOuterAlt(_localctx, 30);
				{
				setState(2512);
				match(LeftShiftAssign);
				}
				break;
			case 31:
				enterOuterAlt(_localctx, 31);
				{
				setState(2513);
				match(Equal);
				}
				break;
			case 32:
				enterOuterAlt(_localctx, 32);
				{
				setState(2514);
				match(NotEqual);
				}
				break;
			case 33:
				enterOuterAlt(_localctx, 33);
				{
				setState(2515);
				match(LessEqual);
				}
				break;
			case 34:
				enterOuterAlt(_localctx, 34);
				{
				setState(2516);
				match(GreaterEqual);
				}
				break;
			case 35:
				enterOuterAlt(_localctx, 35);
				{
				setState(2517);
				match(T__10);
				}
				break;
			case 36:
				enterOuterAlt(_localctx, 36);
				{
				setState(2518);
				match(T__11);
				}
				break;
			case 37:
				enterOuterAlt(_localctx, 37);
				{
				setState(2519);
				match(T__12);
				}
				break;
			case 38:
				enterOuterAlt(_localctx, 38);
				{
				setState(2520);
				match(T__13);
				}
				break;
			case 39:
				enterOuterAlt(_localctx, 39);
				{
				setState(2521);
				match(PlusPlus);
				}
				break;
			case 40:
				enterOuterAlt(_localctx, 40);
				{
				setState(2522);
				match(MinusMinus);
				}
				break;
			case 41:
				enterOuterAlt(_localctx, 41);
				{
				setState(2523);
				match(Comma);
				}
				break;
			case 42:
				enterOuterAlt(_localctx, 42);
				{
				setState(2524);
				match(ArrowStar);
				}
				break;
			case 43:
				enterOuterAlt(_localctx, 43);
				{
				setState(2525);
				match(Arrow);
				}
				break;
			case 44:
				enterOuterAlt(_localctx, 44);
				{
				setState(2526);
				match(LeftParen);
				setState(2527);
				match(RightParen);
				}
				break;
			case 45:
				enterOuterAlt(_localctx, 45);
				{
				setState(2528);
				match(LeftBracket);
				setState(2529);
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
		enterRule(_localctx, 410, RULE_literal);
		try {
			setState(2540);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,322,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2532);
				match(Integerliteral);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2533);
				match(Characterliteral);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2534);
				match(Floatingliteral);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2535);
				match(Stringliteral);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2536);
				booleanliteral();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2537);
				pointerliteral();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2538);
				userdefinedliteral();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2539);
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
		enterRule(_localctx, 412, RULE_booleanliteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2542);
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
		enterRule(_localctx, 414, RULE_pointerliteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2544);
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
		enterRule(_localctx, 416, RULE_userdefinedliteral);
		try {
			setState(2551);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Userdefinedintegerliteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(2546);
				match(Userdefinedintegerliteral);
				}
				break;
			case Userdefinedfloatingliteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(2547);
				match(Userdefinedfloatingliteral);
				}
				break;
			case Userdefinedstringliteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(2548);
				match(Userdefinedstringliteral);
				}
				break;
			case Userdefinedcharacterliteral:
				enterOuterAlt(_localctx, 4);
				{
				setState(2549);
				match(Userdefinedcharacterliteral);
				}
				break;
			case T__4:
			case Encodingprefix:
				enterOuterAlt(_localctx, 5);
				{
				setState(2550);
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
		case 14:
			return nestednamespecifier_sempred((NestednamespecifierContext)_localctx, predIndex);
		case 19:
			return capturelist_sempred((CapturelistContext)_localctx, predIndex);
		case 24:
			return postfixexpression_sempred((PostfixexpressionContext)_localctx, predIndex);
		case 35:
			return noptrnewdeclarator_sempred((NoptrnewdeclaratorContext)_localctx, predIndex);
		case 40:
			return pmexpression_sempred((PmexpressionContext)_localctx, predIndex);
		case 41:
			return multiplicativeexpression_sempred((MultiplicativeexpressionContext)_localctx, predIndex);
		case 42:
			return additiveexpression_sempred((AdditiveexpressionContext)_localctx, predIndex);
		case 43:
			return shiftexpression_sempred((ShiftexpressionContext)_localctx, predIndex);
		case 45:
			return relationalexpression_sempred((RelationalexpressionContext)_localctx, predIndex);
		case 46:
			return equalityexpression_sempred((EqualityexpressionContext)_localctx, predIndex);
		case 47:
			return andexpression_sempred((AndexpressionContext)_localctx, predIndex);
		case 48:
			return exclusiveorexpression_sempred((ExclusiveorexpressionContext)_localctx, predIndex);
		case 49:
			return inclusiveorexpression_sempred((InclusiveorexpressionContext)_localctx, predIndex);
		case 50:
			return logicalandexpression_sempred((LogicalandexpressionContext)_localctx, predIndex);
		case 51:
			return logicalorexpression_sempred((LogicalorexpressionContext)_localctx, predIndex);
		case 55:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		case 61:
			return statementseq_sempred((StatementseqContext)_localctx, predIndex);
		case 70:
			return declarationseq_sempred((DeclarationseqContext)_localctx, predIndex);
		case 97:
			return enumeratorlist_sempred((EnumeratorlistContext)_localctx, predIndex);
		case 115:
			return attributespecifierseq_sempred((AttributespecifierseqContext)_localctx, predIndex);
		case 118:
			return attributelist_sempred((AttributelistContext)_localctx, predIndex);
		case 124:
			return balancedtokenseq_sempred((BalancedtokenseqContext)_localctx, predIndex);
		case 126:
			return initdeclaratorlist_sempred((InitdeclaratorlistContext)_localctx, predIndex);
		case 130:
			return noptrdeclarator_sempred((NoptrdeclaratorContext)_localctx, predIndex);
		case 141:
			return noptrabstractdeclarator_sempred((NoptrabstractdeclaratorContext)_localctx, predIndex);
		case 143:
			return noptrabstractpackdeclarator_sempred((NoptrabstractpackdeclaratorContext)_localctx, predIndex);
		case 145:
			return parameterdeclarationlist_sempred((ParameterdeclarationlistContext)_localctx, predIndex);
		case 152:
			return initializerlist_sempred((InitializerlistContext)_localctx, predIndex);
		case 162:
			return memberdeclaratorlist_sempred((MemberdeclaratorlistContext)_localctx, predIndex);
		case 164:
			return virtspecifierseq_sempred((VirtspecifierseqContext)_localctx, predIndex);
		case 168:
			return basespecifierlist_sempred((BasespecifierlistContext)_localctx, predIndex);
		case 183:
			return templateparameterlist_sempred((TemplateparameterlistContext)_localctx, predIndex);
		case 189:
			return templateargumentlist_sempred((TemplateargumentlistContext)_localctx, predIndex);
		case 202:
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
			return precpred(_ctx, 3);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a1\u09fc\4\2\t"+
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
		"\4\u00d2\t\u00d2\3\2\5\2\u01a6\n\2\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\5"+
		"\3\5\3\6\3\6\3\6\3\6\3\6\5\6\u01b7\n\6\3\7\5\7\u01ba\n\7\3\7\3\7\3\7\3"+
		"\7\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n\5\n\u01cd\n\n\3"+
		"\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u01dc"+
		"\n\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5\f\u01e6\n\f\3\r\3\r\5\r\u01ea"+
		"\n\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u01f5\n\16\3\17"+
		"\3\17\5\17\u01f9\n\17\3\17\3\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20"+
		"\3\20\3\20\3\20\5\20\u0208\n\20\3\20\3\20\3\20\3\20\3\20\5\20\u020f\n"+
		"\20\3\20\3\20\3\20\7\20\u0214\n\20\f\20\16\20\u0217\13\20\3\21\3\21\5"+
		"\21\u021b\n\21\3\21\3\21\3\22\3\22\5\22\u0221\n\22\3\22\3\22\3\23\3\23"+
		"\3\23\3\23\3\23\3\23\5\23\u022b\n\23\3\24\3\24\3\25\3\25\3\25\5\25\u0232"+
		"\n\25\3\25\3\25\3\25\3\25\5\25\u0238\n\25\7\25\u023a\n\25\f\25\16\25\u023d"+
		"\13\25\3\26\3\26\5\26\u0241\n\26\3\27\3\27\3\27\3\27\5\27\u0247\n\27\3"+
		"\30\3\30\3\30\3\30\3\30\5\30\u024e\n\30\3\31\3\31\3\31\3\31\5\31\u0254"+
		"\n\31\3\31\5\31\u0257\n\31\3\31\5\31\u025a\n\31\3\31\5\31\u025d\n\31\3"+
		"\32\3\32\3\32\3\32\3\32\5\32\u0264\n\32\3\32\3\32\3\32\3\32\3\32\5\32"+
		"\u026b\n\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\5\32\u029f\n\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\5\32\u02ae"+
		"\n\32\3\32\3\32\3\32\3\32\5\32\u02b4\n\32\3\32\3\32\3\32\3\32\5\32\u02ba"+
		"\n\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\7\32\u02c7"+
		"\n\32\f\32\16\32\u02ca\13\32\3\33\3\33\3\34\3\34\3\35\3\35\3\36\5\36\u02d3"+
		"\n\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36"+
		"\5\36\u02e2\n\36\3\36\3\36\3\36\3\36\5\36\u02e8\n\36\3\37\3\37\3\37\3"+
		"\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3"+
		"\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\5\37\u0306\n\37"+
		"\3 \3 \3!\5!\u030b\n!\3!\3!\5!\u030f\n!\3!\3!\5!\u0313\n!\3!\5!\u0316"+
		"\n!\3!\3!\5!\u031a\n!\3!\3!\3!\3!\5!\u0320\n!\5!\u0322\n!\3\"\3\"\3\""+
		"\3\"\3#\3#\5#\u032a\n#\3$\3$\5$\u032e\n$\3$\5$\u0331\n$\3%\3%\3%\3%\3"+
		"%\5%\u0338\n%\3%\3%\3%\3%\3%\5%\u033f\n%\7%\u0341\n%\f%\16%\u0344\13%"+
		"\3&\3&\5&\u0348\n&\3&\3&\5&\u034c\n&\3\'\5\'\u034f\n\'\3\'\3\'\3\'\5\'"+
		"\u0354\n\'\3\'\3\'\3\'\3\'\5\'\u035a\n\'\3(\3(\3(\3(\3(\3)\3)\3)\3)\3"+
		")\3)\5)\u0367\n)\3*\3*\3*\3*\3*\3*\3*\3*\3*\7*\u0372\n*\f*\16*\u0375\13"+
		"*\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\7+\u0383\n+\f+\16+\u0386\13+\3,"+
		"\3,\3,\3,\3,\3,\3,\3,\3,\7,\u0391\n,\f,\16,\u0394\13,\3-\3-\3-\3-\3-\3"+
		"-\3-\7-\u039d\n-\f-\16-\u03a0\13-\3.\3.\3/\3/\3/\3/\3/\3/\3/\3/\3/\3/"+
		"\3/\3/\3/\3/\3/\7/\u03b3\n/\f/\16/\u03b6\13/\3\60\3\60\3\60\3\60\3\60"+
		"\3\60\3\60\3\60\3\60\7\60\u03c1\n\60\f\60\16\60\u03c4\13\60\3\61\3\61"+
		"\3\61\3\61\3\61\3\61\7\61\u03cc\n\61\f\61\16\61\u03cf\13\61\3\62\3\62"+
		"\3\62\3\62\3\62\3\62\7\62\u03d7\n\62\f\62\16\62\u03da\13\62\3\63\3\63"+
		"\3\63\3\63\3\63\3\63\7\63\u03e2\n\63\f\63\16\63\u03e5\13\63\3\64\3\64"+
		"\3\64\3\64\3\64\3\64\3\64\3\64\3\64\7\64\u03f0\n\64\f\64\16\64\u03f3\13"+
		"\64\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\7\65\u03fe\n\65\f\65"+
		"\16\65\u0401\13\65\3\66\3\66\3\66\3\66\3\66\3\66\3\66\5\66\u040a\n\66"+
		"\3\67\3\67\3\67\3\67\3\67\3\67\5\67\u0412\n\67\38\38\39\39\39\39\39\3"+
		"9\79\u041c\n9\f9\169\u041f\139\3:\3:\3;\3;\5;\u0425\n;\3;\3;\5;\u0429"+
		"\n;\3;\3;\5;\u042d\n;\3;\3;\5;\u0431\n;\3;\3;\5;\u0435\n;\3;\3;\3;\5;"+
		"\u043a\n;\3;\5;\u043d\n;\3<\5<\u0440\n<\3<\3<\3<\3<\5<\u0446\n<\3<\3<"+
		"\3<\3<\3<\3<\5<\u044e\n<\3<\3<\3<\5<\u0453\n<\3=\5=\u0456\n=\3=\3=\3>"+
		"\3>\5>\u045c\n>\3>\3>\3?\3?\3?\3?\3?\3?\5?\u0466\n?\3?\3?\7?\u046a\n?"+
		"\f?\16?\u046d\13?\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3"+
		"@\3@\3@\5@\u0483\n@\3A\3A\5A\u0487\nA\3A\3A\3A\3A\3A\3A\5A\u048f\nA\3"+
		"A\3A\3A\3A\5A\u0495\nA\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3"+
		"B\3B\3B\5B\u04a9\nB\3B\3B\5B\u04ad\nB\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3"+
		"B\5B\u04ba\nB\3C\3C\5C\u04be\nC\3D\5D\u04c1\nD\3D\3D\3D\3E\3E\5E\u04c8"+
		"\nE\3F\3F\3F\3F\3F\3F\5F\u04d0\nF\3F\3F\3F\3F\3F\3F\3F\3F\5F\u04da\nF"+
		"\3G\3G\3H\3H\3H\3H\3H\7H\u04e3\nH\fH\16H\u04e6\13H\3I\3I\3I\3I\3I\3I\3"+
		"I\3I\3I\5I\u04f1\nI\3J\3J\3J\3J\3J\3J\3J\3J\5J\u04fb\nJ\3K\3K\3K\5K\u0500"+
		"\nK\3K\3K\3K\3K\3L\5L\u0507\nL\3L\5L\u050a\nL\3L\3L\3L\5L\u050f\nL\3L"+
		"\3L\3L\5L\u0514\nL\3M\3M\3M\3M\3M\3M\5M\u051c\nM\3M\3M\3M\3N\3N\3O\3O"+
		"\3O\3P\3P\3P\3P\3P\3P\5P\u052c\nP\3Q\3Q\5Q\u0530\nQ\3Q\3Q\3Q\5Q\u0535"+
		"\nQ\3R\3R\3S\3S\3T\3T\3U\3U\3U\5U\u0540\nU\3V\3V\3V\3V\5V\u0546\nV\3W"+
		"\3W\5W\u054a\nW\3W\3W\3W\5W\u054f\nW\3X\3X\5X\u0553\nX\3X\3X\3X\5X\u0558"+
		"\nX\3Y\5Y\u055b\nY\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y"+
		"\3Y\3Y\3Y\5Y\u0571\nY\3Z\3Z\3Z\3Z\5Z\u0577\nZ\3[\3[\3[\3[\3[\3[\3[\3["+
		"\3[\5[\u0582\n[\3\\\3\\\5\\\u0586\n\\\3\\\5\\\u0589\n\\\3\\\3\\\3\\\3"+
		"\\\3\\\3\\\3\\\3\\\5\\\u0593\n\\\3\\\3\\\3\\\3\\\5\\\u0599\n\\\3\\\5\\"+
		"\u059c\n\\\3]\3]\3^\3^\3^\5^\u05a3\n^\3^\3^\3^\3^\3^\3^\3^\3^\5^\u05ad"+
		"\n^\3_\3_\5_\u05b1\n_\3_\5_\u05b4\n_\3_\5_\u05b7\n_\3_\3_\5_\u05bb\n_"+
		"\3_\3_\3_\5_\u05c0\n_\5_\u05c2\n_\3`\3`\5`\u05c6\n`\3`\3`\5`\u05ca\n`"+
		"\3`\3`\3a\3a\3a\3a\3a\5a\u05d3\na\3b\3b\3b\3c\3c\3c\3c\3c\3c\7c\u05de"+
		"\nc\fc\16c\u05e1\13c\3d\3d\3d\3d\3d\5d\u05e8\nd\3e\3e\3f\3f\5f\u05ee\n"+
		"f\3g\3g\3h\3h\5h\u05f4\nh\3i\3i\5i\u05f8\ni\3j\5j\u05fb\nj\3j\3j\3j\3"+
		"j\3j\3j\3k\5k\u0604\nk\3k\3k\3k\3k\3k\3k\3l\5l\u060d\nl\3l\3l\3l\3l\3"+
		"l\3m\5m\u0615\nm\3n\3n\3o\3o\3o\3o\3o\3o\3p\5p\u0620\np\3p\3p\3q\3q\5"+
		"q\u0626\nq\3q\3q\3q\3q\3q\3q\3q\3q\3q\5q\u0631\nq\3r\5r\u0634\nr\3r\3"+
		"r\3r\5r\u0639\nr\3r\3r\3r\3s\3s\3s\3s\3s\3s\3t\3t\3t\3t\5t\u0648\nt\3"+
		"t\3t\3t\3t\5t\u064e\nt\3u\3u\3u\3u\3u\7u\u0655\nu\fu\16u\u0658\13u\3v"+
		"\3v\3v\3v\3v\3v\3v\5v\u0661\nv\3w\3w\3w\3w\5w\u0667\nw\3w\3w\3w\3w\3w"+
		"\3w\5w\u066f\nw\3w\3w\5w\u0673\nw\3x\3x\5x\u0677\nx\3x\3x\3x\5x\u067c"+
		"\nx\3x\3x\3x\5x\u0681\nx\3x\3x\3x\3x\3x\7x\u0688\nx\fx\16x\u068b\13x\3"+
		"y\3y\5y\u068f\ny\3z\3z\5z\u0693\nz\3{\3{\3{\3{\3|\3|\3}\3}\3}\3}\3~\3"+
		"~\5~\u06a1\n~\3~\3~\7~\u06a5\n~\f~\16~\u06a8\13~\3\177\3\177\3\177\3\177"+
		"\3\177\3\177\3\177\3\177\3\177\3\177\3\177\3\177\5\177\u06b6\n\177\3\u0080"+
		"\3\u0080\3\u0080\3\u0080\3\u0080\3\u0080\7\u0080\u06be\n\u0080\f\u0080"+
		"\16\u0080\u06c1\13\u0080\3\u0081\3\u0081\5\u0081\u06c5\n\u0081\3\u0082"+
		"\3\u0082\3\u0082\3\u0082\3\u0082\5\u0082\u06cc\n\u0082\3\u0083\3\u0083"+
		"\3\u0083\3\u0083\5\u0083\u06d2\n\u0083\3\u0084\3\u0084\3\u0084\5\u0084"+
		"\u06d7\n\u0084\3\u0084\3\u0084\3\u0084\3\u0084\5\u0084\u06dd\n\u0084\3"+
		"\u0084\3\u0084\3\u0084\3\u0084\3\u0084\5\u0084\u06e4\n\u0084\3\u0084\3"+
		"\u0084\5\u0084\u06e8\n\u0084\7\u0084\u06ea\n\u0084\f\u0084\16\u0084\u06ed"+
		"\13\u0084\3\u0085\3\u0085\3\u0085\3\u0085\5\u0085\u06f3\n\u0085\3\u0085"+
		"\5\u0085\u06f6\n\u0085\3\u0085\5\u0085\u06f9\n\u0085\3\u0085\5\u0085\u06fc"+
		"\n\u0085\3\u0086\3\u0086\3\u0086\5\u0086\u0701\n\u0086\3\u0087\3\u0087"+
		"\5\u0087\u0705\n\u0087\3\u0087\5\u0087\u0708\n\u0087\3\u0087\3\u0087\5"+
		"\u0087\u070c\n\u0087\3\u0087\3\u0087\5\u0087\u0710\n\u0087\3\u0087\3\u0087"+
		"\3\u0087\5\u0087\u0715\n\u0087\3\u0087\5\u0087\u0718\n\u0087\5\u0087\u071a"+
		"\n\u0087\3\u0088\3\u0088\5\u0088\u071e\n\u0088\3\u0089\3\u0089\3\u008a"+
		"\3\u008a\3\u008b\5\u008b\u0725\n\u008b\3\u008b\3\u008b\3\u008c\3\u008c"+
		"\5\u008c\u072b\n\u008c\3\u008d\3\u008d\5\u008d\u072f\n\u008d\3\u008d\3"+
		"\u008d\3\u008d\3\u008d\5\u008d\u0735\n\u008d\3\u008e\3\u008e\3\u008e\5"+
		"\u008e\u073a\n\u008e\5\u008e\u073c\n\u008e\3\u008f\3\u008f\3\u008f\3\u008f"+
		"\5\u008f\u0742\n\u008f\3\u008f\3\u008f\5\u008f\u0746\n\u008f\3\u008f\3"+
		"\u008f\3\u008f\3\u008f\5\u008f\u074c\n\u008f\3\u008f\3\u008f\3\u008f\3"+
		"\u008f\3\u008f\5\u008f\u0753\n\u008f\3\u008f\3\u008f\5\u008f\u0757\n\u008f"+
		"\7\u008f\u0759\n\u008f\f\u008f\16\u008f\u075c\13\u008f\3\u0090\3\u0090"+
		"\3\u0090\3\u0090\5\u0090\u0762\n\u0090\3\u0091\3\u0091\3\u0091\3\u0091"+
		"\3\u0091\3\u0091\3\u0091\3\u0091\5\u0091\u076c\n\u0091\3\u0091\3\u0091"+
		"\5\u0091\u0770\n\u0091\7\u0091\u0772\n\u0091\f\u0091\16\u0091\u0775\13"+
		"\u0091\3\u0092\5\u0092\u0778\n\u0092\3\u0092\5\u0092\u077b\n\u0092\3\u0092"+
		"\3\u0092\3\u0092\3\u0092\5\u0092\u0781\n\u0092\3\u0093\3\u0093\3\u0093"+
		"\3\u0093\3\u0093\3\u0093\7\u0093\u0789\n\u0093\f\u0093\16\u0093\u078c"+
		"\13\u0093\3\u0094\5\u0094\u078f\n\u0094\3\u0094\3\u0094\3\u0094\3\u0094"+
		"\5\u0094\u0795\n\u0094\3\u0094\3\u0094\3\u0094\3\u0094\3\u0094\3\u0094"+
		"\5\u0094\u079d\n\u0094\3\u0094\3\u0094\5\u0094\u07a1\n\u0094\3\u0094\5"+
		"\u0094\u07a4\n\u0094\3\u0094\3\u0094\5\u0094\u07a8\n\u0094\3\u0094\3\u0094"+
		"\3\u0094\5\u0094\u07ad\n\u0094\3\u0095\5\u0095\u07b0\n\u0095\3\u0095\5"+
		"\u0095\u07b3\n\u0095\3\u0095\3\u0095\5\u0095\u07b7\n\u0095\3\u0095\3\u0095"+
		"\3\u0096\5\u0096\u07bc\n\u0096\3\u0096\3\u0096\3\u0096\3\u0096\3\u0096"+
		"\3\u0096\3\u0096\3\u0096\5\u0096\u07c6\n\u0096\3\u0097\3\u0097\3\u0097"+
		"\3\u0097\3\u0097\5\u0097\u07cd\n\u0097\3\u0098\3\u0098\3\u0098\5\u0098"+
		"\u07d2\n\u0098\3\u0099\3\u0099\5\u0099\u07d6\n\u0099\3\u009a\3\u009a\3"+
		"\u009a\5\u009a\u07db\n\u009a\3\u009a\3\u009a\3\u009a\3\u009a\5\u009a\u07e1"+
		"\n\u009a\7\u009a\u07e3\n\u009a\f\u009a\16\u009a\u07e6\13\u009a\3\u009b"+
		"\3\u009b\3\u009b\5\u009b\u07eb\n\u009b\3\u009b\3\u009b\3\u009b\3\u009b"+
		"\5\u009b\u07f1\n\u009b\3\u009c\3\u009c\5\u009c\u07f5\n\u009c\3\u009d\3"+
		"\u009d\3\u009d\5\u009d\u07fa\n\u009d\3\u009d\3\u009d\3\u009e\3\u009e\5"+
		"\u009e\u0800\n\u009e\3\u009e\3\u009e\5\u009e\u0804\n\u009e\3\u009e\5\u009e"+
		"\u0807\n\u009e\3\u009e\3\u009e\5\u009e\u080b\n\u009e\3\u009e\5\u009e\u080e"+
		"\n\u009e\5\u009e\u0810\n\u009e\3\u009f\5\u009f\u0813\n\u009f\3\u009f\3"+
		"\u009f\3\u00a0\3\u00a0\3\u00a1\3\u00a1\3\u00a2\3\u00a2\5\u00a2\u081d\n"+
		"\u00a2\3\u00a2\3\u00a2\3\u00a2\5\u00a2\u0822\n\u00a2\5\u00a2\u0824\n\u00a2"+
		"\3\u00a3\5\u00a3\u0827\n\u00a3\3\u00a3\5\u00a3\u082a\n\u00a3\3\u00a3\5"+
		"\u00a3\u082d\n\u00a3\3\u00a3\3\u00a3\3\u00a3\3\u00a3\3\u00a3\3\u00a3\3"+
		"\u00a3\5\u00a3\u0836\n\u00a3\3\u00a4\3\u00a4\3\u00a4\3\u00a4\3\u00a4\3"+
		"\u00a4\7\u00a4\u083e\n\u00a4\f\u00a4\16\u00a4\u0841\13\u00a4\3\u00a5\3"+
		"\u00a5\5\u00a5\u0845\n\u00a5\3\u00a5\5\u00a5\u0848\n\u00a5\3\u00a5\3\u00a5"+
		"\5\u00a5\u084c\n\u00a5\3\u00a5\5\u00a5\u084f\n\u00a5\3\u00a5\5\u00a5\u0852"+
		"\n\u00a5\3\u00a5\3\u00a5\5\u00a5\u0856\n\u00a5\3\u00a6\3\u00a6\3\u00a6"+
		"\3\u00a6\3\u00a6\7\u00a6\u085d\n\u00a6\f\u00a6\16\u00a6\u0860\13\u00a6"+
		"\3\u00a7\3\u00a7\3\u00a8\3\u00a8\3\u00a8\3\u00a8\3\u00a9\3\u00a9\3\u00a9"+
		"\3\u00aa\3\u00aa\3\u00aa\5\u00aa\u086e\n\u00aa\3\u00aa\3\u00aa\3\u00aa"+
		"\3\u00aa\5\u00aa\u0874\n\u00aa\7\u00aa\u0876\n\u00aa\f\u00aa\16\u00aa"+
		"\u0879\13\u00aa\3\u00ab\5\u00ab\u087c\n\u00ab\3\u00ab\3\u00ab\5\u00ab"+
		"\u0880\n\u00ab\3\u00ab\3\u00ab\5\u00ab\u0884\n\u00ab\3\u00ab\3\u00ab\5"+
		"\u00ab\u0888\n\u00ab\3\u00ab\3\u00ab\5\u00ab\u088c\n\u00ab\3\u00ab\3\u00ab"+
		"\5\u00ab\u0890\n\u00ab\3\u00ac\5\u00ac\u0893\n\u00ac\3\u00ac\3\u00ac\5"+
		"\u00ac\u0897\n\u00ac\3\u00ad\3\u00ad\3\u00ae\3\u00ae\3\u00af\3\u00af\3"+
		"\u00af\3\u00b0\3\u00b0\5\u00b0\u08a2\n\u00b0\3\u00b1\3\u00b1\5\u00b1\u08a6"+
		"\n\u00b1\3\u00b2\3\u00b2\3\u00b2\3\u00b3\3\u00b3\5\u00b3\u08ad\n\u00b3"+
		"\3\u00b3\3\u00b3\5\u00b3\u08b1\n\u00b3\3\u00b3\3\u00b3\3\u00b3\5\u00b3"+
		"\u08b6\n\u00b3\3\u00b4\3\u00b4\3\u00b4\5\u00b4\u08bb\n\u00b4\3\u00b4\3"+
		"\u00b4\3\u00b4\3\u00b4\3\u00b4\5\u00b4\u08c2\n\u00b4\3\u00b5\3\u00b5\5"+
		"\u00b5\u08c6\n\u00b5\3\u00b6\3\u00b6\3\u00b6\3\u00b7\3\u00b7\3\u00b7\5"+
		"\u00b7\u08ce\n\u00b7\3\u00b7\3\u00b7\3\u00b7\3\u00b7\5\u00b7\u08d4\n\u00b7"+
		"\5\u00b7\u08d6\n\u00b7\3\u00b8\3\u00b8\3\u00b8\3\u00b8\3\u00b8\3\u00b8"+
		"\3\u00b9\3\u00b9\3\u00b9\3\u00b9\3\u00b9\3\u00b9\7\u00b9\u08e4\n\u00b9"+
		"\f\u00b9\16\u00b9\u08e7\13\u00b9\3\u00ba\3\u00ba\5\u00ba\u08eb\n\u00ba"+
		"\3\u00bb\3\u00bb\5\u00bb\u08ef\n\u00bb\3\u00bb\5\u00bb\u08f2\n\u00bb\3"+
		"\u00bb\3\u00bb\5\u00bb\u08f6\n\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\5"+
		"\u00bb\u08fc\n\u00bb\3\u00bb\5\u00bb\u08ff\n\u00bb\3\u00bb\3\u00bb\5\u00bb"+
		"\u0903\n\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\3\u00bb\5\u00bb\u090d\n\u00bb\3\u00bb\5\u00bb\u0910\n\u00bb\3\u00bb\3"+
		"\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\5\u00bb\u0918\n\u00bb\3\u00bb\3"+
		"\u00bb\3\u00bb\5\u00bb\u091d\n\u00bb\3\u00bc\3\u00bc\3\u00bc\5\u00bc\u0922"+
		"\n\u00bc\3\u00bc\3\u00bc\3\u00bd\3\u00bd\3\u00bd\3\u00bd\5\u00bd\u092a"+
		"\n\u00bd\3\u00bd\3\u00bd\3\u00bd\3\u00bd\3\u00bd\5\u00bd\u0931\n\u00bd"+
		"\3\u00bd\3\u00bd\5\u00bd\u0935\n\u00bd\3\u00be\3\u00be\3\u00bf\3\u00bf"+
		"\3\u00bf\5\u00bf\u093c\n\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\5\u00bf"+
		"\u0942\n\u00bf\7\u00bf\u0944\n\u00bf\f\u00bf\16\u00bf\u0947\13\u00bf\3"+
		"\u00c0\3\u00c0\3\u00c0\5\u00c0\u094c\n\u00c0\3\u00c1\3\u00c1\3\u00c1\3"+
		"\u00c1\3\u00c1\3\u00c1\3\u00c1\5\u00c1\u0955\n\u00c1\3\u00c1\3\u00c1\5"+
		"\u00c1\u0959\n\u00c1\3\u00c2\5\u00c2\u095c\n\u00c2\3\u00c2\3\u00c2\3\u00c2"+
		"\3\u00c3\3\u00c3\3\u00c3\3\u00c3\3\u00c3\3\u00c4\3\u00c4\3\u00c4\3\u00c4"+
		"\3\u00c5\3\u00c5\5\u00c5\u096c\n\u00c5\3\u00c5\3\u00c5\3\u00c5\3\u00c6"+
		"\3\u00c6\5\u00c6\u0973\n\u00c6\3\u00c7\3\u00c7\3\u00c7\3\u00c7\3\u00c7"+
		"\3\u00c7\3\u00c8\5\u00c8\u097c\n\u00c8\3\u00c8\3\u00c8\3\u00c8\3\u00c8"+
		"\5\u00c8\u0982\n\u00c8\3\u00c8\3\u00c8\5\u00c8\u0986\n\u00c8\3\u00c8\5"+
		"\u00c8\u0989\n\u00c8\3\u00c9\3\u00c9\5\u00c9\u098d\n\u00c9\3\u00ca\3\u00ca"+
		"\5\u00ca\u0991\n\u00ca\3\u00cb\3\u00cb\3\u00cb\5\u00cb\u0996\n\u00cb\3"+
		"\u00cb\3\u00cb\3\u00cc\3\u00cc\3\u00cc\5\u00cc\u099d\n\u00cc\3\u00cc\3"+
		"\u00cc\3\u00cc\3\u00cc\5\u00cc\u09a3\n\u00cc\7\u00cc\u09a5\n\u00cc\f\u00cc"+
		"\16\u00cc\u09a8\13\u00cc\3\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00cd"+
		"\5\u00cd\u09b0\n\u00cd\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce"+
		"\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce"+
		"\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce"+
		"\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce"+
		"\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce"+
		"\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce"+
		"\5\u00ce\u09e5\n\u00ce\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf"+
		"\3\u00cf\3\u00cf\5\u00cf\u09ef\n\u00cf\3\u00d0\3\u00d0\3\u00d1\3\u00d1"+
		"\3\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d2\5\u00d2\u09fa\n\u00d2\3\u00d2"+
		"\2$\36(\62HRTVX\\^`bdfhp|\u008e\u00c4\u00e8\u00ee\u00fa\u00fe\u0106\u011c"+
		"\u0120\u0124\u0132\u0146\u014a\u0152\u0170\u017c\u0196\u00d3\2\4\6\b\n"+
		"\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\"+
		"^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e\u0090"+
		"\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6\u00a8"+
		"\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be\u00c0"+
		"\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4\u00d6\u00d8"+
		"\u00da\u00dc\u00de\u00e0\u00e2\u00e4\u00e6\u00e8\u00ea\u00ec\u00ee\u00f0"+
		"\u00f2\u00f4\u00f6\u00f8\u00fa\u00fc\u00fe\u0100\u0102\u0104\u0106\u0108"+
		"\u010a\u010c\u010e\u0110\u0112\u0114\u0116\u0118\u011a\u011c\u011e\u0120"+
		"\u0122\u0124\u0126\u0128\u012a\u012c\u012e\u0130\u0132\u0134\u0136\u0138"+
		"\u013a\u013c\u013e\u0140\u0142\u0144\u0146\u0148\u014a\u014c\u014e\u0150"+
		"\u0152\u0154\u0156\u0158\u015a\u015c\u015e\u0160\u0162\u0164\u0166\u0168"+
		"\u016a\u016c\u016e\u0170\u0172\u0174\u0176\u0178\u017a\u017c\u017e\u0180"+
		"\u0182\u0184\u0186\u0188\u018a\u018c\u018e\u0190\u0192\u0194\u0196\u0198"+
		"\u019a\u019c\u019e\u01a0\u01a2\2\16\4\2kkoo\5\2\13\fegkm\3\2z{\5\2oor"+
		"y|}\7\2..99CCIIPP\5\2,,\66\66ZZ\4\2  \\\\\4\2\r\rkk\5\2\37\37LLWW\4\2"+
		"\60\60??\3\2@B\4\2//RR\2\u0b1d\2\u01a5\3\2\2\2\4\u01a9\3\2\2\2\6\u01ab"+
		"\3\2\2\2\b\u01ad\3\2\2\2\n\u01b6\3\2\2\2\f\u01b9\3\2\2\2\16\u01bf\3\2"+
		"\2\2\20\u01c4\3\2\2\2\22\u01cc\3\2\2\2\24\u01db\3\2\2\2\26\u01e5\3\2\2"+
		"\2\30\u01e9\3\2\2\2\32\u01f4\3\2\2\2\34\u01f6\3\2\2\2\36\u0207\3\2\2\2"+
		" \u0218\3\2\2\2\"\u021e\3\2\2\2$\u022a\3\2\2\2&\u022c\3\2\2\2(\u022e\3"+
		"\2\2\2*\u0240\3\2\2\2,\u0246\3\2\2\2.\u024d\3\2\2\2\60\u024f\3\2\2\2\62"+
		"\u029e\3\2\2\2\64\u02cb\3\2\2\2\66\u02cd\3\2\2\28\u02cf\3\2\2\2:\u02e7"+
		"\3\2\2\2<\u0305\3\2\2\2>\u0307\3\2\2\2@\u0321\3\2\2\2B\u0323\3\2\2\2D"+
		"\u0327\3\2\2\2F\u0330\3\2\2\2H\u0332\3\2\2\2J\u034b\3\2\2\2L\u0359\3\2"+
		"\2\2N\u035b\3\2\2\2P\u0366\3\2\2\2R\u0368\3\2\2\2T\u0376\3\2\2\2V\u0387"+
		"\3\2\2\2X\u0395\3\2\2\2Z\u03a1\3\2\2\2\\\u03a3\3\2\2\2^\u03b7\3\2\2\2"+
		"`\u03c5\3\2\2\2b\u03d0\3\2\2\2d\u03db\3\2\2\2f\u03e6\3\2\2\2h\u03f4\3"+
		"\2\2\2j\u0409\3\2\2\2l\u0411\3\2\2\2n\u0413\3\2\2\2p\u0415\3\2\2\2r\u0420"+
		"\3\2\2\2t\u043c\3\2\2\2v\u0452\3\2\2\2x\u0455\3\2\2\2z\u0459\3\2\2\2|"+
		"\u0465\3\2\2\2~\u0482\3\2\2\2\u0080\u0494\3\2\2\2\u0082\u04b9\3\2\2\2"+
		"\u0084\u04bd\3\2\2\2\u0086\u04c0\3\2\2\2\u0088\u04c7\3\2\2\2\u008a\u04d9"+
		"\3\2\2\2\u008c\u04db\3\2\2\2\u008e\u04dd\3\2\2\2\u0090\u04f0\3\2\2\2\u0092"+
		"\u04fa\3\2\2\2\u0094\u04fc\3\2\2\2\u0096\u0513\3\2\2\2\u0098\u0515\3\2"+
		"\2\2\u009a\u0520\3\2\2\2\u009c\u0522\3\2\2\2\u009e\u052b\3\2\2\2\u00a0"+
		"\u0534\3\2\2\2\u00a2\u0536\3\2\2\2\u00a4\u0538\3\2\2\2\u00a6\u053a\3\2"+
		"\2\2\u00a8\u053f\3\2\2\2\u00aa\u0545\3\2\2\2\u00ac\u054e\3\2\2\2\u00ae"+
		"\u0557\3\2\2\2\u00b0\u0570\3\2\2\2\u00b2\u0576\3\2\2\2\u00b4\u0581\3\2"+
		"\2\2\u00b6\u059b\3\2\2\2\u00b8\u059d\3\2\2\2\u00ba\u05ac\3\2\2\2\u00bc"+
		"\u05c1\3\2\2\2\u00be\u05c3\3\2\2\2\u00c0\u05d2\3\2\2\2\u00c2\u05d4\3\2"+
		"\2\2\u00c4\u05d7\3\2\2\2\u00c6\u05e7\3\2\2\2\u00c8\u05e9\3\2\2\2\u00ca"+
		"\u05ed\3\2\2\2\u00cc\u05ef\3\2\2\2\u00ce\u05f3\3\2\2\2\u00d0\u05f7\3\2"+
		"\2\2\u00d2\u05fa\3\2\2\2\u00d4\u0603\3\2\2\2\u00d6\u060c\3\2\2\2\u00d8"+
		"\u0614\3\2\2\2\u00da\u0616\3\2\2\2\u00dc\u0618\3\2\2\2\u00de\u061f\3\2"+
		"\2\2\u00e0\u0630\3\2\2\2\u00e2\u0633\3\2\2\2\u00e4\u063d\3\2\2\2\u00e6"+
		"\u064d\3\2\2\2\u00e8\u064f\3\2\2\2\u00ea\u0660\3\2\2\2\u00ec\u0672\3\2"+
		"\2\2\u00ee\u067b\3\2\2\2\u00f0\u068c\3\2\2\2\u00f2\u0692\3\2\2\2\u00f4"+
		"\u0694\3\2\2\2\u00f6\u0698\3\2\2\2\u00f8\u069a\3\2\2\2\u00fa\u069e\3\2"+
		"\2\2\u00fc\u06b5\3\2\2\2\u00fe\u06b7\3\2\2\2\u0100\u06c2\3\2\2\2\u0102"+
		"\u06cb\3\2\2\2\u0104\u06d1\3\2\2\2\u0106\u06dc\3\2\2\2\u0108\u06ee\3\2"+
		"\2\2\u010a\u06fd\3\2\2\2\u010c\u0719\3\2\2\2\u010e\u071b\3\2\2\2\u0110"+
		"\u071f\3\2\2\2\u0112\u0721\3\2\2\2\u0114\u0724\3\2\2\2\u0116\u0728\3\2"+
		"\2\2\u0118\u0734\3\2\2\2\u011a\u073b\3\2\2\2\u011c\u074b\3\2\2\2\u011e"+
		"\u0761\3\2\2\2\u0120\u0763\3\2\2\2\u0122\u0780\3\2\2\2\u0124\u0782\3\2"+
		"\2\2\u0126\u07ac\3\2\2\2\u0128\u07af\3\2\2\2\u012a\u07c5\3\2\2\2\u012c"+
		"\u07cc\3\2\2\2\u012e\u07d1\3\2\2\2\u0130\u07d5\3\2\2\2\u0132\u07d7\3\2"+
		"\2\2\u0134\u07f0\3\2\2\2\u0136\u07f4\3\2\2\2\u0138\u07f6\3\2\2\2\u013a"+
		"\u080f\3\2\2\2\u013c\u0812\3\2\2\2\u013e\u0816\3\2\2\2\u0140\u0818\3\2"+
		"\2\2\u0142\u0823\3\2\2\2\u0144\u0835\3\2\2\2\u0146\u0837\3\2\2\2\u0148"+
		"\u0855\3\2\2\2\u014a\u0857\3\2\2\2\u014c\u0861\3\2\2\2\u014e\u0863\3\2"+
		"\2\2\u0150\u0867\3\2\2\2\u0152\u086a\3\2\2\2\u0154\u088f\3\2\2\2\u0156"+
		"\u0896\3\2\2\2\u0158\u0898\3\2\2\2\u015a\u089a\3\2\2\2\u015c\u089c\3\2"+
		"\2\2\u015e\u089f\3\2\2\2\u0160\u08a3\3\2\2\2\u0162\u08a7\3\2\2\2\u0164"+
		"\u08b5\3\2\2\2\u0166\u08c1\3\2\2\2\u0168\u08c5\3\2\2\2\u016a\u08c7\3\2"+
		"\2\2\u016c\u08d5\3\2\2\2\u016e\u08d7\3\2\2\2\u0170\u08dd\3\2\2\2\u0172"+
		"\u08ea\3\2\2\2\u0174\u091c\3\2\2\2\u0176\u091e\3\2\2\2\u0178\u0934\3\2"+
		"\2\2\u017a\u0936\3\2\2\2\u017c\u0938\3\2\2\2\u017e\u094b\3\2\2\2\u0180"+
		"\u0958\3\2\2\2\u0182\u095b\3\2\2\2\u0184\u0960\3\2\2\2\u0186\u0965\3\2"+
		"\2\2\u0188\u0969\3\2\2\2\u018a\u0970\3\2\2\2\u018c\u0974\3\2\2\2\u018e"+
		"\u0988\3\2\2\2\u0190\u098a\3\2\2\2\u0192\u0990\3\2\2\2\u0194\u0992\3\2"+
		"\2\2\u0196\u0999\3\2\2\2\u0198\u09af\3\2\2\2\u019a\u09e4\3\2\2\2\u019c"+
		"\u09ee\3\2\2\2\u019e\u09f0\3\2\2\2\u01a0\u09f2\3\2\2\2\u01a2\u09f9\3\2"+
		"\2\2\u01a4\u01a6\5\u008eH\2\u01a5\u01a4\3\2\2\2\u01a5\u01a6\3\2\2\2\u01a6"+
		"\u01a7\3\2\2\2\u01a7\u01a8\7\2\2\3\u01a8\3\3\2\2\2\u01a9\u01aa\7\3\2\2"+
		"\u01aa\5\3\2\2\2\u01ab\u01ac\7\4\2\2\u01ac\7\3\2\2\2\u01ad\u01ae\7\5\2"+
		"\2\u01ae\u01af\5|?\2\u01af\u01b0\7\6\2\2\u01b0\t\3\2\2\2\u01b1\u01b7\5"+
		"\16\b\2\u01b2\u01b3\5\4\3\2\u01b3\u01b4\5\24\13\2\u01b4\u01b5\5\6\4\2"+
		"\u01b5\u01b7\3\2\2\2\u01b6\u01b1\3\2\2\2\u01b6\u01b2\3\2\2\2\u01b7\13"+
		"\3\2\2\2\u01b8\u01ba\7\21\2\2\u01b9\u01b8\3\2\2\2\u01b9\u01ba\3\2\2\2"+
		"\u01ba\u01bb\3\2\2\2\u01bb\u01bc\7\7\2\2\u01bc\u01bd\5\24\13\2\u01bd\u01be"+
		"\7\7\2\2\u01be\r\3\2\2\2\u01bf\u01c0\7\b\2\2\u01c0\u01c1\5\20\t\2\u01c1"+
		"\u01c2\7`\2\2\u01c2\u01c3\5\22\n\2\u01c3\17\3\2\2\2\u01c4\u01c5\5\4\3"+
		"\2\u01c5\u01c6\7\u0090\2\2\u01c6\u01c7\7\t\2\2\u01c7\u01c8\5\4\3\2\u01c8"+
		"\u01c9\5\24\13\2\u01c9\21\3\2\2\2\u01ca\u01cd\5\n\6\2\u01cb\u01cd\5\b"+
		"\5\2\u01cc\u01ca\3\2\2\2\u01cc\u01cb\3\2\2\2\u01cd\23\3\2\2\2\u01ce\u01cf"+
		"\7\u0090\2\2\u01cf\u01d0\7\u008d\2\2\u01d0\u01dc\5\24\13\2\u01d1\u01d2"+
		"\7\u0090\2\2\u01d2\u01d3\7_\2\2\u01d3\u01d4\7\u0090\2\2\u01d4\u01d5\7"+
		"\n\2\2\u01d5\u01dc\5\24\13\2\u01d6\u01d7\7\u0090\2\2\u01d7\u01d8\7_\2"+
		"\2\u01d8\u01d9\7\u0090\2\2\u01d9\u01dc\7`\2\2\u01da\u01dc\7\u0090\2\2"+
		"\u01db\u01ce\3\2\2\2\u01db\u01d1\3\2\2\2\u01db\u01d6\3\2\2\2\u01db\u01da"+
		"\3\2\2\2\u01dc\25\3\2\2\2\u01dd\u01e6\5\u019c\u00cf\2\u01de\u01e6\7O\2"+
		"\2\u01df\u01e0\7_\2\2\u01e0\u01e1\5p9\2\u01e1\u01e2\7`\2\2\u01e2\u01e6"+
		"\3\2\2\2\u01e3\u01e6\5\30\r\2\u01e4\u01e6\5 \21\2\u01e5\u01dd\3\2\2\2"+
		"\u01e5\u01de\3\2\2\2\u01e5\u01df\3\2\2\2\u01e5\u01e3\3\2\2\2\u01e5\u01e4"+
		"\3\2\2\2\u01e6\27\3\2\2\2\u01e7\u01ea\5\32\16\2\u01e8\u01ea\5\34\17\2"+
		"\u01e9\u01e7\3\2\2\2\u01e9\u01e8\3\2\2\2\u01ea\31\3\2\2\2\u01eb\u01f5"+
		"\7\u0090\2\2\u01ec\u01f5\5\u016a\u00b6\2\u01ed\u01f5\5\u015c\u00af\2\u01ee"+
		"\u01f5\5\u016c\u00b7\2\u01ef\u01f0\7m\2\2\u01f0\u01f5\5\u0136\u009c\2"+
		"\u01f1\u01f2\7m\2\2\u01f2\u01f5\5\u00b4[\2\u01f3\u01f5\5\u0178\u00bd\2"+
		"\u01f4\u01eb\3\2\2\2\u01f4\u01ec\3\2\2\2\u01f4\u01ed\3\2\2\2\u01f4\u01ee"+
		"\3\2\2\2\u01f4\u01ef\3\2\2\2\u01f4\u01f1\3\2\2\2\u01f4\u01f3\3\2\2\2\u01f5"+
		"\33\3\2\2\2\u01f6\u01f8\5\36\20\2\u01f7\u01f9\7N\2\2\u01f8\u01f7\3\2\2"+
		"\2\u01f8\u01f9\3\2\2\2\u01f9\u01fa\3\2\2\2\u01fa\u01fb\5\32\16\2\u01fb"+
		"\35\3\2\2\2\u01fc\u01fd\b\20\1\2\u01fd\u0208\7\u008b\2\2\u01fe\u01ff\5"+
		"\u00b2Z\2\u01ff\u0200\7\u008b\2\2\u0200\u0208\3\2\2\2\u0201\u0202\5\u00ca"+
		"f\2\u0202\u0203\7\u008b\2\2\u0203\u0208\3\2\2\2\u0204\u0205\5\u00b4[\2"+
		"\u0205\u0206\7\u008b\2\2\u0206\u0208\3\2\2\2\u0207\u01fc\3\2\2\2\u0207"+
		"\u01fe\3\2\2\2\u0207\u0201\3\2\2\2\u0207\u0204\3\2\2\2\u0208\u0215\3\2"+
		"\2\2\u0209\u020a\f\4\2\2\u020a\u020b\7\u0090\2\2\u020b\u0214\7\u008b\2"+
		"\2\u020c\u020e\f\3\2\2\u020d\u020f\7N\2\2\u020e\u020d\3\2\2\2\u020e\u020f"+
		"\3\2\2\2\u020f\u0210\3\2\2\2\u0210\u0211\5\u0176\u00bc\2\u0211\u0212\7"+
		"\u008b\2\2\u0212\u0214\3\2\2\2\u0213\u0209\3\2\2\2\u0213\u020c\3\2\2\2"+
		"\u0214\u0217\3\2\2\2\u0215\u0213\3\2\2\2\u0215\u0216\3\2\2\2\u0216\37"+
		"\3\2\2\2\u0217\u0215\3\2\2\2\u0218\u021a\5\"\22\2\u0219\u021b\5\60\31"+
		"\2\u021a\u0219\3\2\2\2\u021a\u021b\3\2\2\2\u021b\u021c\3\2\2\2\u021c\u021d"+
		"\5z>\2\u021d!\3\2\2\2\u021e\u0220\7a\2\2\u021f\u0221\5$\23\2\u0220\u021f"+
		"\3\2\2\2\u0220\u0221\3\2\2\2\u0221\u0222\3\2\2\2\u0222\u0223\7b\2\2\u0223"+
		"#\3\2\2\2\u0224\u022b\5&\24\2\u0225\u022b\5(\25\2\u0226\u0227\5&\24\2"+
		"\u0227\u0228\7\u0086\2\2\u0228\u0229\5(\25\2\u0229\u022b\3\2\2\2\u022a"+
		"\u0224\3\2\2\2\u022a\u0225\3\2\2\2\u022a\u0226\3\2\2\2\u022b%\3\2\2\2"+
		"\u022c\u022d\t\2\2\2\u022d\'\3\2\2\2\u022e\u022f\b\25\1\2\u022f\u0231"+
		"\5*\26\2\u0230\u0232\7\u008f\2\2\u0231\u0230\3\2\2\2\u0231\u0232\3\2\2"+
		"\2\u0232\u023b\3\2\2\2\u0233\u0234\f\3\2\2\u0234\u0235\7\u0086\2\2\u0235"+
		"\u0237\5*\26\2\u0236\u0238\7\u008f\2\2\u0237\u0236\3\2\2\2\u0237\u0238"+
		"\3\2\2\2\u0238\u023a\3\2\2\2\u0239\u0233\3\2\2\2\u023a\u023d\3\2\2\2\u023b"+
		"\u0239\3\2\2\2\u023b\u023c\3\2\2\2\u023c)\3\2\2\2\u023d\u023b\3\2\2\2"+
		"\u023e\u0241\5,\27\2\u023f\u0241\5.\30\2\u0240\u023e\3\2\2\2\u0240\u023f"+
		"\3\2\2\2\u0241+\3\2\2\2\u0242\u0247\7\u0090\2\2\u0243\u0244\7k\2\2\u0244"+
		"\u0247\7\u0090\2\2\u0245\u0247\7O\2\2\u0246\u0242\3\2\2\2\u0246\u0243"+
		"\3\2\2\2\u0246\u0245\3\2\2\2\u0247-\3\2\2\2\u0248\u0249\7\u0090\2\2\u0249"+
		"\u024e\5\u012c\u0097\2\u024a\u024b\7k\2\2\u024b\u024c\7\u0090\2\2\u024c"+
		"\u024e\5\u012c\u0097\2\u024d\u0248\3\2\2\2\u024d\u024a\3\2\2\2\u024e/"+
		"\3\2\2\2\u024f\u0250\7_\2\2\u0250\u0251\5\u0122\u0092\2\u0251\u0253\7"+
		"`\2\2\u0252\u0254\79\2\2\u0253\u0252\3\2\2\2\u0253\u0254\3\2\2\2\u0254"+
		"\u0256\3\2\2\2\u0255\u0257\5\u0192\u00ca\2\u0256\u0255\3\2\2\2\u0256\u0257"+
		"\3\2\2\2\u0257\u0259\3\2\2\2\u0258\u025a\5\u00e8u\2\u0259\u0258\3\2\2"+
		"\2\u0259\u025a\3\2\2\2\u025a\u025c\3\2\2\2\u025b\u025d\5\u010a\u0086\2"+
		"\u025c\u025b\3\2\2\2\u025c\u025d\3\2\2\2\u025d\61\3\2\2\2\u025e\u025f"+
		"\b\32\1\2\u025f\u029f\5\26\f\2\u0260\u0261\5\u00b0Y\2\u0261\u0263\7_\2"+
		"\2\u0262\u0264\58\35\2\u0263\u0262\3\2\2\2\u0263\u0264\3\2\2\2\u0264\u0265"+
		"\3\2\2\2\u0265\u0266\7`\2\2\u0266\u029f\3\2\2\2\u0267\u0268\5\u0180\u00c1"+
		"\2\u0268\u026a\7_\2\2\u0269\u026b\58\35\2\u026a\u0269\3\2\2\2\u026a\u026b"+
		"\3\2\2\2\u026b\u026c\3\2\2\2\u026c\u026d\7`\2\2\u026d\u029f\3\2\2\2\u026e"+
		"\u026f\5\u00b0Y\2\u026f\u0270\5\u0134\u009b\2\u0270\u029f\3\2\2\2\u0271"+
		"\u0272\5\u0180\u00c1\2\u0272\u0273\5\u0134\u009b\2\u0273\u029f\3\2\2\2"+
		"\u0274\u0275\7)\2\2\u0275\u0276\7p\2\2\u0276\u0277\5\u0116\u008c\2\u0277"+
		"\u0278\7q\2\2\u0278\u0279\7_\2\2\u0279\u027a\5p9\2\u027a\u027b\7`\2\2"+
		"\u027b\u029f\3\2\2\2\u027c\u027d\7K\2\2\u027d\u027e\7p\2\2\u027e\u027f"+
		"\5\u0116\u008c\2\u027f\u0280\7q\2\2\u0280\u0281\7_\2\2\u0281\u0282\5p"+
		"9\2\u0282\u0283\7`\2\2\u0283\u029f\3\2\2\2\u0284\u0285\7D\2\2\u0285\u0286"+
		"\7p\2\2\u0286\u0287\5\u0116\u008c\2\u0287\u0288\7q\2\2\u0288\u0289\7_"+
		"\2\2\u0289\u028a\5p9\2\u028a\u028b\7`\2\2\u028b\u029f\3\2\2\2\u028c\u028d"+
		"\7\"\2\2\u028d\u028e\7p\2\2\u028e\u028f\5\u0116\u008c\2\u028f\u0290\7"+
		"q\2\2\u0290\u0291\7_\2\2\u0291\u0292\5p9\2\u0292\u0293\7`\2\2\u0293\u029f"+
		"\3\2\2\2\u0294\u0295\5\66\34\2\u0295\u0296\7_\2\2\u0296\u0297\5p9\2\u0297"+
		"\u0298\7`\2\2\u0298\u029f\3\2\2\2\u0299\u029a\5\66\34\2\u029a\u029b\7"+
		"_\2\2\u029b\u029c\5\u0116\u008c\2\u029c\u029d\7`\2\2\u029d\u029f\3\2\2"+
		"\2\u029e\u025e\3\2\2\2\u029e\u0260\3\2\2\2\u029e\u0267\3\2\2\2\u029e\u026e"+
		"\3\2\2\2\u029e\u0271\3\2\2\2\u029e\u0274\3\2\2\2\u029e\u027c\3\2\2\2\u029e"+
		"\u0284\3\2\2\2\u029e\u028c\3\2\2\2\u029e\u0294\3\2\2\2\u029e\u0299\3\2"+
		"\2\2\u029f\u02c8\3\2\2\2\u02a0\u02a1\f\25\2\2\u02a1\u02a2\7a\2\2\u02a2"+
		"\u02a3\5p9\2\u02a3\u02a4\7b\2\2\u02a4\u02c7\3\2\2\2\u02a5\u02a6\f\24\2"+
		"\2\u02a6\u02a7\7a\2\2\u02a7\u02a8\5\u0134\u009b\2\u02a8\u02a9\7b\2\2\u02a9"+
		"\u02c7\3\2\2\2\u02aa\u02ab\f\23\2\2\u02ab\u02ad\7_\2\2\u02ac\u02ae\58"+
		"\35\2\u02ad\u02ac\3\2\2\2\u02ad\u02ae\3\2\2\2\u02ae\u02af\3\2\2\2\u02af"+
		"\u02c7\7`\2\2\u02b0\u02b1\f\16\2\2\u02b1\u02b3\7\u008d\2\2\u02b2\u02b4"+
		"\7N\2\2\u02b3\u02b2\3\2\2\2\u02b3\u02b4\3\2\2\2\u02b4\u02b5\3\2\2\2\u02b5"+
		"\u02c7\5\30\r\2\u02b6\u02b7\f\r\2\2\u02b7\u02b9\7\u0088\2\2\u02b8\u02ba"+
		"\7N\2\2\u02b9\u02b8\3\2\2\2\u02b9\u02ba\3\2\2\2\u02ba\u02bb\3\2\2\2\u02bb"+
		"\u02c7\5\30\r\2\u02bc\u02bd\f\f\2\2\u02bd\u02be\7\u008d\2\2\u02be\u02c7"+
		"\5:\36\2\u02bf\u02c0\f\13\2\2\u02c0\u02c1\7\u0088\2\2\u02c1\u02c7\5:\36"+
		"\2\u02c2\u02c3\f\n\2\2\u02c3\u02c7\7\u0084\2\2\u02c4\u02c5\f\t\2\2\u02c5"+
		"\u02c7\7\u0085\2\2\u02c6\u02a0\3\2\2\2\u02c6\u02a5\3\2\2\2\u02c6\u02aa"+
		"\3\2\2\2\u02c6\u02b0\3\2\2\2\u02c6\u02b6\3\2\2\2\u02c6\u02bc\3\2\2\2\u02c6"+
		"\u02bf\3\2\2\2\u02c6\u02c2\3\2\2\2\u02c6\u02c4\3\2\2\2\u02c7\u02ca\3\2"+
		"\2\2\u02c8\u02c6\3\2\2\2\u02c8\u02c9\3\2\2\2\u02c9\63\3\2\2\2\u02ca\u02c8"+
		"\3\2\2\2\u02cb\u02cc\7U\2\2\u02cc\65\3\2\2\2\u02cd\u02ce\7U\2\2\u02ce"+
		"\67\3\2\2\2\u02cf\u02d0\5\u0132\u009a\2\u02d09\3\2\2\2\u02d1\u02d3\5\36"+
		"\20\2\u02d2\u02d1\3\2\2\2\u02d2\u02d3\3\2\2\2\u02d3\u02d4\3\2\2\2\u02d4"+
		"\u02d5\5\u00b2Z\2\u02d5\u02d6\7\u008b\2\2\u02d6\u02d7\7m\2\2\u02d7\u02d8"+
		"\5\u00b2Z\2\u02d8\u02e8\3\2\2\2\u02d9\u02da\5\36\20\2\u02da\u02db\7N\2"+
		"\2\u02db\u02dc\5\u0176\u00bc\2\u02dc\u02dd\7\u008b\2\2\u02dd\u02de\7m"+
		"\2\2\u02de\u02df\5\u00b2Z\2\u02df\u02e8\3\2\2\2\u02e0\u02e2\5\36\20\2"+
		"\u02e1\u02e0\3\2\2\2\u02e1\u02e2\3\2\2\2\u02e2\u02e3\3\2\2\2\u02e3\u02e4"+
		"\7m\2\2\u02e4\u02e8\5\u00b2Z\2\u02e5\u02e6\7m\2\2\u02e6\u02e8\5\u00b4"+
		"[\2\u02e7\u02d2\3\2\2\2\u02e7\u02d9\3\2\2\2\u02e7\u02e1\3\2\2\2\u02e7"+
		"\u02e5\3\2\2\2\u02e8;\3\2\2\2\u02e9\u0306\5\62\32\2\u02ea\u02eb\7\u0084"+
		"\2\2\u02eb\u0306\5P)\2\u02ec\u02ed\7\u0085\2\2\u02ed\u0306\5P)\2\u02ee"+
		"\u02ef\5> \2\u02ef\u02f0\5P)\2\u02f0\u0306\3\2\2\2\u02f1\u02f2\7H\2\2"+
		"\u02f2\u0306\5<\37\2\u02f3\u02f4\7H\2\2\u02f4\u02f5\7_\2\2\u02f5\u02f6"+
		"\5\u0116\u008c\2\u02f6\u02f7\7`\2\2\u02f7\u0306\3\2\2\2\u02f8\u02f9\7"+
		"H\2\2\u02f9\u02fa\7\u008f\2\2\u02fa\u02fb\7_\2\2\u02fb\u02fc\7\u0090\2"+
		"\2\u02fc\u0306\7`\2\2\u02fd\u02fe\7\25\2\2\u02fe\u02ff\7_\2\2\u02ff\u0300"+
		"\5\u0116\u008c\2\u0300\u0301\7`\2\2\u0301\u0306\3\2\2\2\u0302\u0306\5"+
		"N(\2\u0303\u0306\5@!\2\u0304\u0306\5L\'\2\u0305\u02e9\3\2\2\2\u0305\u02ea"+
		"\3\2\2\2\u0305\u02ec\3\2\2\2\u0305\u02ee\3\2\2\2\u0305\u02f1\3\2\2\2\u0305"+
		"\u02f3\3\2\2\2\u0305\u02f8\3\2\2\2\u0305\u02fd\3\2\2\2\u0305\u0302\3\2"+
		"\2\2\u0305\u0303\3\2\2\2\u0305\u0304\3\2\2\2\u0306=\3\2\2\2\u0307\u0308"+
		"\t\3\2\2\u0308?\3\2\2\2\u0309\u030b\7\u008b\2\2\u030a\u0309\3\2\2\2\u030a"+
		"\u030b\3\2\2\2\u030b\u030c\3\2\2\2\u030c\u030e\7;\2\2\u030d\u030f\5B\""+
		"\2\u030e\u030d\3\2\2\2\u030e\u030f\3\2\2\2\u030f\u0310\3\2\2\2\u0310\u0312"+
		"\5D#\2\u0311\u0313\5J&\2\u0312\u0311\3\2\2\2\u0312\u0313\3\2\2\2\u0313"+
		"\u0322\3\2\2\2\u0314\u0316\7\u008b\2\2\u0315\u0314\3\2\2\2\u0315\u0316"+
		"\3\2\2\2\u0316\u0317\3\2\2\2\u0317\u0319\7;\2\2\u0318\u031a\5B\"\2\u0319"+
		"\u0318\3\2\2\2\u0319\u031a\3\2\2\2\u031a\u031b\3\2\2\2\u031b\u031c\7_"+
		"\2\2\u031c\u031d\5\u0116\u008c\2\u031d\u031f\7`\2\2\u031e\u0320\5J&\2"+
		"\u031f\u031e\3\2\2\2\u031f\u0320\3\2\2\2\u0320\u0322\3\2\2\2\u0321\u030a"+
		"\3\2\2\2\u0321\u0315\3\2\2\2\u0322A\3\2\2\2\u0323\u0324\7_\2\2\u0324\u0325"+
		"\58\35\2\u0325\u0326\7`\2\2\u0326C\3\2\2\2\u0327\u0329\5\u00acW\2\u0328"+
		"\u032a\5F$\2\u0329\u0328\3\2\2\2\u0329\u032a\3\2\2\2\u032aE\3\2\2\2\u032b"+
		"\u032d\5\u010c\u0087\2\u032c\u032e\5F$\2\u032d\u032c\3\2\2\2\u032d\u032e"+
		"\3\2\2\2\u032e\u0331\3\2\2\2\u032f\u0331\5H%\2\u0330\u032b\3\2\2\2\u0330"+
		"\u032f\3\2\2\2\u0331G\3\2\2\2\u0332\u0333\b%\1\2\u0333\u0334\7a\2\2\u0334"+
		"\u0335\5p9\2\u0335\u0337\7b\2\2\u0336\u0338\5\u00e8u\2\u0337\u0336\3\2"+
		"\2\2\u0337\u0338\3\2\2\2\u0338\u0342\3\2\2\2\u0339\u033a\f\3\2\2\u033a"+
		"\u033b\7a\2\2\u033b\u033c\5r:\2\u033c\u033e\7b\2\2\u033d\u033f\5\u00e8"+
		"u\2\u033e\u033d\3\2\2\2\u033e\u033f\3\2\2\2\u033f\u0341\3\2\2\2\u0340"+
		"\u0339\3\2\2\2\u0341\u0344\3\2\2\2\u0342\u0340\3\2\2\2\u0342\u0343\3\2"+
		"\2\2\u0343I\3\2\2\2\u0344\u0342\3\2\2\2\u0345\u0347\7_\2\2\u0346\u0348"+
		"\58\35\2\u0347\u0346\3\2\2\2\u0347\u0348\3\2\2\2\u0348\u0349\3\2\2\2\u0349"+
		"\u034c\7`\2\2\u034a\u034c\5\u0134\u009b\2\u034b\u0345\3\2\2\2\u034b\u034a"+
		"\3\2\2\2\u034cK\3\2\2\2\u034d\u034f\7\u008b\2\2\u034e\u034d\3\2\2\2\u034e"+
		"\u034f\3\2\2\2\u034f\u0350\3\2\2\2\u0350\u0351\7&\2\2\u0351\u035a\5P)"+
		"\2\u0352\u0354\7\u008b\2\2\u0353\u0352\3\2\2\2\u0353\u0354\3\2\2\2\u0354"+
		"\u0355\3\2\2\2\u0355\u0356\7&\2\2\u0356\u0357\7a\2\2\u0357\u0358\7b\2"+
		"\2\u0358\u035a\5P)\2\u0359\u034e\3\2\2\2\u0359\u0353\3\2\2\2\u035aM\3"+
		"\2\2\2\u035b\u035c\7<\2\2\u035c\u035d\7_\2\2\u035d\u035e\5p9\2\u035e\u035f"+
		"\7`\2\2\u035fO\3\2\2\2\u0360\u0367\5<\37\2\u0361\u0362\7_\2\2\u0362\u0363"+
		"\5\u0116\u008c\2\u0363\u0364\7`\2\2\u0364\u0365\5P)\2\u0365\u0367\3\2"+
		"\2\2\u0366\u0360\3\2\2\2\u0366\u0361\3\2\2\2\u0367Q\3\2\2\2\u0368\u0369"+
		"\b*\1\2\u0369\u036a\5P)\2\u036a\u0373\3\2\2\2\u036b\u036c\f\4\2\2\u036c"+
		"\u036d\7\u008e\2\2\u036d\u0372\5P)\2\u036e\u036f\f\3\2\2\u036f\u0370\7"+
		"\u0087\2\2\u0370\u0372\5P)\2\u0371\u036b\3\2\2\2\u0371\u036e\3\2\2\2\u0372"+
		"\u0375\3\2\2\2\u0373\u0371\3\2\2\2\u0373\u0374\3\2\2\2\u0374S\3\2\2\2"+
		"\u0375\u0373\3\2\2\2\u0376\u0377\b+\1\2\u0377\u0378\5R*\2\u0378\u0384"+
		"\3\2\2\2\u0379\u037a\f\5\2\2\u037a\u037b\7g\2\2\u037b\u0383\5R*\2\u037c"+
		"\u037d\f\4\2\2\u037d\u037e\7h\2\2\u037e\u0383\5R*\2\u037f\u0380\f\3\2"+
		"\2\u0380\u0381\7i\2\2\u0381\u0383\5R*\2\u0382\u0379\3\2\2\2\u0382\u037c"+
		"\3\2\2\2\u0382\u037f\3\2\2\2\u0383\u0386\3\2\2\2\u0384\u0382\3\2\2\2\u0384"+
		"\u0385\3\2\2\2\u0385U\3\2\2\2\u0386\u0384\3\2\2\2\u0387\u0388\b,\1\2\u0388"+
		"\u0389\5T+\2\u0389\u0392\3\2\2\2\u038a\u038b\f\4\2\2\u038b\u038c\7e\2"+
		"\2\u038c\u0391\5T+\2\u038d\u038e\f\3\2\2\u038e\u038f\7f\2\2\u038f\u0391"+
		"\5T+\2\u0390\u038a\3\2\2\2\u0390\u038d\3\2\2\2\u0391\u0394\3\2\2\2\u0392"+
		"\u0390\3\2\2\2\u0392\u0393\3\2\2\2\u0393W\3\2\2\2\u0394\u0392\3\2\2\2"+
		"\u0395\u0396\b-\1\2\u0396\u0397\5V,\2\u0397\u039e\3\2\2\2\u0398\u0399"+
		"\f\3\2\2\u0399\u039a\5Z.\2\u039a\u039b\5V,\2\u039b\u039d\3\2\2\2\u039c"+
		"\u0398\3\2\2\2\u039d\u03a0\3\2\2\2\u039e\u039c\3\2\2\2\u039e\u039f\3\2"+
		"\2\2\u039fY\3\2\2\2\u03a0\u039e\3\2\2\2\u03a1\u03a2\t\4\2\2\u03a2[\3\2"+
		"\2\2\u03a3\u03a4\b/\1\2\u03a4\u03a5\5X-\2\u03a5\u03b4\3\2\2\2\u03a6\u03a7"+
		"\f\6\2\2\u03a7\u03a8\7p\2\2\u03a8\u03b3\5X-\2\u03a9\u03aa\f\5\2\2\u03aa"+
		"\u03ab\7q\2\2\u03ab\u03b3\5X-\2\u03ac\u03ad\f\4\2\2\u03ad\u03ae\7\u0080"+
		"\2\2\u03ae\u03b3\5X-\2\u03af\u03b0\f\3\2\2\u03b0\u03b1\7\u0081\2\2\u03b1"+
		"\u03b3\5X-\2\u03b2\u03a6\3\2\2\2\u03b2\u03a9\3\2\2\2\u03b2\u03ac\3\2\2"+
		"\2\u03b2\u03af\3\2\2\2\u03b3\u03b6\3\2\2\2\u03b4\u03b2\3\2\2\2\u03b4\u03b5"+
		"\3\2\2\2\u03b5]\3\2\2\2\u03b6\u03b4\3\2\2\2\u03b7\u03b8\b\60\1\2\u03b8"+
		"\u03b9\5\\/\2\u03b9\u03c2\3\2\2\2\u03ba\u03bb\f\4\2\2\u03bb\u03bc\7~\2"+
		"\2\u03bc\u03c1\5\\/\2\u03bd\u03be\f\3\2\2\u03be\u03bf\7\177\2\2\u03bf"+
		"\u03c1\5\\/\2\u03c0\u03ba\3\2\2\2\u03c0\u03bd\3\2\2\2\u03c1\u03c4\3\2"+
		"\2\2\u03c2\u03c0\3\2\2\2\u03c2\u03c3\3\2\2\2\u03c3_\3\2\2\2\u03c4\u03c2"+
		"\3\2\2\2\u03c5\u03c6\b\61\1\2\u03c6\u03c7\5^\60\2\u03c7\u03cd\3\2\2\2"+
		"\u03c8\u03c9\f\3\2\2\u03c9\u03ca\7k\2\2\u03ca\u03cc\5^\60\2\u03cb\u03c8"+
		"\3\2\2\2\u03cc\u03cf\3\2\2\2\u03cd\u03cb\3\2\2\2\u03cd\u03ce\3\2\2\2\u03ce"+
		"a\3\2\2\2\u03cf\u03cd\3\2\2\2\u03d0\u03d1\b\62\1\2\u03d1\u03d2\5`\61\2"+
		"\u03d2\u03d8\3\2\2\2\u03d3\u03d4\f\3\2\2\u03d4\u03d5\7j\2\2\u03d5\u03d7"+
		"\5`\61\2\u03d6\u03d3\3\2\2\2\u03d7\u03da\3\2\2\2\u03d8\u03d6\3\2\2\2\u03d8"+
		"\u03d9\3\2\2\2\u03d9c\3\2\2\2\u03da\u03d8\3\2\2\2\u03db\u03dc\b\63\1\2"+
		"\u03dc\u03dd\5b\62\2\u03dd\u03e3\3\2\2\2\u03de\u03df\f\3\2\2\u03df\u03e0"+
		"\7l\2\2\u03e0\u03e2\5b\62\2\u03e1\u03de\3\2\2\2\u03e2\u03e5\3\2\2\2\u03e3"+
		"\u03e1\3\2\2\2\u03e3\u03e4\3\2\2\2\u03e4e\3\2\2\2\u03e5\u03e3\3\2\2\2"+
		"\u03e6\u03e7\b\64\1\2\u03e7\u03e8\5d\63\2\u03e8\u03f1\3\2\2\2\u03e9\u03ea"+
		"\f\4\2\2\u03ea\u03eb\7\r\2\2\u03eb\u03f0\5d\63\2\u03ec\u03ed\f\3\2\2\u03ed"+
		"\u03ee\7\16\2\2\u03ee\u03f0\5d\63\2\u03ef\u03e9\3\2\2\2\u03ef\u03ec\3"+
		"\2\2\2\u03f0\u03f3\3\2\2\2\u03f1\u03ef\3\2\2\2\u03f1\u03f2\3\2\2\2\u03f2"+
		"g\3\2\2\2\u03f3\u03f1\3\2\2\2\u03f4\u03f5\b\65\1\2\u03f5\u03f6\5f\64\2"+
		"\u03f6\u03ff\3\2\2\2\u03f7\u03f8\f\4\2\2\u03f8\u03f9\7\17\2\2\u03f9\u03fe"+
		"\5f\64\2\u03fa\u03fb\f\3\2\2\u03fb\u03fc\7\20\2\2\u03fc\u03fe\5f\64\2"+
		"\u03fd\u03f7\3\2\2\2\u03fd\u03fa\3\2\2\2\u03fe\u0401\3\2\2\2\u03ff\u03fd"+
		"\3\2\2\2\u03ff\u0400\3\2\2\2\u0400i\3\2\2\2\u0401\u03ff\3\2\2\2\u0402"+
		"\u040a\5h\65\2\u0403\u0404\5h\65\2\u0404\u0405\7\u0089\2\2\u0405\u0406"+
		"\5p9\2\u0406\u0407\7\u008a\2\2\u0407\u0408\5l\67\2\u0408\u040a\3\2\2\2"+
		"\u0409\u0402\3\2\2\2\u0409\u0403\3\2\2\2\u040ak\3\2\2\2\u040b\u0412\5"+
		"j\66\2\u040c\u040d\5h\65\2\u040d\u040e\5n8\2\u040e\u040f\5\u0130\u0099"+
		"\2\u040f\u0412\3\2\2\2\u0410\u0412\5\u0190\u00c9\2\u0411\u040b\3\2\2\2"+
		"\u0411\u040c\3\2\2\2\u0411\u0410\3\2\2\2\u0412m\3\2\2\2\u0413\u0414\t"+
		"\5\2\2\u0414o\3\2\2\2\u0415\u0416\b9\1\2\u0416\u0417\5l\67\2\u0417\u041d"+
		"\3\2\2\2\u0418\u0419\f\3\2\2\u0419\u041a\7\u0086\2\2\u041a\u041c\5l\67"+
		"\2\u041b\u0418\3\2\2\2\u041c\u041f\3\2\2\2\u041d\u041b\3\2\2\2\u041d\u041e"+
		"\3\2\2\2\u041eq\3\2\2\2\u041f\u041d\3\2\2\2\u0420\u0421\5j\66\2\u0421"+
		"s\3\2\2\2\u0422\u043d\5v<\2\u0423\u0425\5\u00e8u\2\u0424\u0423\3\2\2\2"+
		"\u0424\u0425\3\2\2\2\u0425\u0426\3\2\2\2\u0426\u043d\5x=\2\u0427\u0429"+
		"\5\u00e8u\2\u0428\u0427\3\2\2\2\u0428\u0429\3\2\2\2\u0429\u042a\3\2\2"+
		"\2\u042a\u043d\5z>\2\u042b\u042d\5\u00e8u\2\u042c\u042b\3\2\2\2\u042c"+
		"\u042d\3\2\2\2\u042d\u042e\3\2\2\2\u042e\u043d\5~@\2\u042f\u0431\5\u00e8"+
		"u\2\u0430\u042f\3\2\2\2\u0430\u0431\3\2\2\2\u0431\u0432\3\2\2\2\u0432"+
		"\u043d\5\u0082B\2\u0433\u0435\5\u00e8u\2\u0434\u0433\3\2\2\2\u0434\u0435"+
		"\3\2\2\2\u0435\u0436\3\2\2\2\u0436\u043d\5\u008aF\2\u0437\u043d\5\u008c"+
		"G\2\u0438\u043a\5\u00e8u\2\u0439\u0438\3\2\2\2\u0439\u043a\3\2\2\2\u043a"+
		"\u043b\3\2\2\2\u043b\u043d\5\u0186\u00c4\2\u043c\u0422\3\2\2\2\u043c\u0424"+
		"\3\2\2\2\u043c\u0428\3\2\2\2\u043c\u042c\3\2\2\2\u043c\u0430\3\2\2\2\u043c"+
		"\u0434\3\2\2\2\u043c\u0437\3\2\2\2\u043c\u0439\3\2\2\2\u043du\3\2\2\2"+
		"\u043e\u0440\5\u00e8u\2\u043f\u043e\3\2\2\2\u043f\u0440\3\2\2\2\u0440"+
		"\u0441\3\2\2\2\u0441\u0442\7\u0090\2\2\u0442\u0443\7\u008a\2\2\u0443\u0453"+
		"\5t;\2\u0444\u0446\5\u00e8u\2\u0445\u0444\3\2\2\2\u0445\u0446\3\2\2\2"+
		"\u0446\u0447\3\2\2\2\u0447\u0448\7\32\2\2\u0448\u0449\5r:\2\u0449\u044a"+
		"\7\u008a\2\2\u044a\u044b\5t;\2\u044b\u0453\3\2\2\2\u044c\u044e\5\u00e8"+
		"u\2\u044d\u044c\3\2\2\2\u044d\u044e\3\2\2\2\u044e\u044f\3\2\2\2\u044f"+
		"\u0450\7%\2\2\u0450\u0451\7\u008a\2\2\u0451\u0453\5t;\2\u0452\u043f\3"+
		"\2\2\2\u0452\u0445\3\2\2\2\u0452\u044d\3\2\2\2\u0453w\3\2\2\2\u0454\u0456"+
		"\5p9\2\u0455\u0454\3\2\2\2\u0455\u0456\3\2\2\2\u0456\u0457\3\2\2\2\u0457"+
		"\u0458\7\u008c\2\2\u0458y\3\2\2\2\u0459\u045b\7c\2\2\u045a\u045c\5|?\2"+
		"\u045b\u045a\3\2\2\2\u045b\u045c\3\2\2\2\u045c\u045d\3\2\2\2\u045d\u045e"+
		"\7d\2\2\u045e{\3\2\2\2\u045f\u0460\b?\1\2\u0460\u0466\5t;\2\u0461\u0462"+
		"\5\n\6\2\u0462\u0463\5|?\4\u0463\u0466\3\2\2\2\u0464\u0466\5\n\6\2\u0465"+
		"\u045f\3\2\2\2\u0465\u0461\3\2\2\2\u0465\u0464\3\2\2\2\u0466\u046b\3\2"+
		"\2\2\u0467\u0468\f\5\2\2\u0468\u046a\5t;\2\u0469\u0467\3\2\2\2\u046a\u046d"+
		"\3\2\2\2\u046b\u0469\3\2\2\2\u046b\u046c\3\2\2\2\u046c}\3\2\2\2\u046d"+
		"\u046b\3\2\2\2\u046e\u046f\7\65\2\2\u046f\u0470\7_\2\2\u0470\u0471\5\u0080"+
		"A\2\u0471\u0472\7`\2\2\u0472\u0473\5t;\2\u0473\u0483\3\2\2\2\u0474\u0475"+
		"\7\65\2\2\u0475\u0476\7_\2\2\u0476\u0477\5\u0080A\2\u0477\u0478\7`\2\2"+
		"\u0478\u0479\5t;\2\u0479\u047a\7*\2\2\u047a\u047b\5t;\2\u047b\u0483\3"+
		"\2\2\2\u047c\u047d\7M\2\2\u047d\u047e\7_\2\2\u047e\u047f\5\u0080A\2\u047f"+
		"\u0480\7`\2\2\u0480\u0481\5t;\2\u0481\u0483\3\2\2\2\u0482\u046e\3\2\2"+
		"\2\u0482\u0474\3\2\2\2\u0482\u047c\3\2\2\2\u0483\177\3\2\2\2\u0484\u0495"+
		"\5p9\2\u0485\u0487\5\u00e8u\2\u0486\u0485\3\2\2\2\u0486\u0487\3\2\2\2"+
		"\u0487\u0488\3\2\2\2\u0488\u0489\5\u00a0Q\2\u0489\u048a\5\u0102\u0082"+
		"\2\u048a\u048b\7o\2\2\u048b\u048c\5\u0130\u0099\2\u048c\u0495\3\2\2\2"+
		"\u048d\u048f\5\u00e8u\2\u048e\u048d\3\2\2\2\u048e\u048f\3\2\2\2\u048f"+
		"\u0490\3\2\2\2\u0490\u0491\5\u00a0Q\2\u0491\u0492\5\u0102\u0082\2\u0492"+
		"\u0493\5\u0134\u009b\2\u0493\u0495\3\2\2\2\u0494\u0484\3\2\2\2\u0494\u0486"+
		"\3\2\2\2\u0494\u048e\3\2\2\2\u0495\u0081\3\2\2\2\u0496\u0497\7^\2\2\u0497"+
		"\u0498\7_\2\2\u0498\u0499\5\u0080A\2\u0499\u049a\7`\2\2\u049a\u049b\5"+
		"t;\2\u049b\u04ba\3\2\2\2\u049c\u049d\7\'\2\2\u049d\u049e\5t;\2\u049e\u049f"+
		"\7^\2\2\u049f\u04a0\7_\2\2\u04a0\u04a1\5p9\2\u04a1\u04a2\7`\2\2\u04a2"+
		"\u04a3\7\u008c\2\2\u04a3\u04ba\3\2\2\2\u04a4\u04a5\7\62\2\2\u04a5\u04a6"+
		"\7_\2\2\u04a6\u04a8\5\u0084C\2\u04a7\u04a9\5\u0080A\2\u04a8\u04a7\3\2"+
		"\2\2\u04a8\u04a9\3\2\2\2\u04a9\u04aa\3\2\2\2\u04aa\u04ac\7\u008c\2\2\u04ab"+
		"\u04ad\5p9\2\u04ac\u04ab\3\2\2\2\u04ac\u04ad\3\2\2\2\u04ad\u04ae\3\2\2"+
		"\2\u04ae\u04af\7`\2\2\u04af\u04b0\5t;\2\u04b0\u04ba\3\2\2\2\u04b1\u04b2"+
		"\7\62\2\2\u04b2\u04b3\7_\2\2\u04b3\u04b4\5\u0086D\2\u04b4\u04b5\7\u008a"+
		"\2\2\u04b5\u04b6\5\u0088E\2\u04b6\u04b7\7`\2\2\u04b7\u04b8\5t;\2\u04b8"+
		"\u04ba\3\2\2\2\u04b9\u0496\3\2\2\2\u04b9\u049c\3\2\2\2\u04b9\u04a4\3\2"+
		"\2\2\u04b9\u04b1\3\2\2\2\u04ba\u0083\3\2\2\2\u04bb\u04be\5x=\2\u04bc\u04be"+
		"\5\u0096L\2\u04bd\u04bb\3\2\2\2\u04bd\u04bc\3\2\2\2\u04be\u0085\3\2\2"+
		"\2\u04bf\u04c1\5\u00e8u\2\u04c0\u04bf\3\2\2\2\u04c0\u04c1\3\2\2\2\u04c1"+
		"\u04c2\3\2\2\2\u04c2\u04c3\5\u00a0Q\2\u04c3\u04c4\5\u0102\u0082\2\u04c4"+
		"\u0087\3\2\2\2\u04c5\u04c8\5p9\2\u04c6\u04c8\5\u0134\u009b\2\u04c7\u04c5"+
		"\3\2\2\2\u04c7\u04c6\3\2\2\2\u04c8\u0089\3\2\2\2\u04c9\u04ca\7\31\2\2"+
		"\u04ca\u04da\7\u008c\2\2\u04cb\u04cc\7#\2\2\u04cc\u04da\7\u008c\2\2\u04cd"+
		"\u04cf\7E\2\2\u04ce\u04d0\5p9\2\u04cf\u04ce\3\2\2\2\u04cf\u04d0\3\2\2"+
		"\2\u04d0\u04d1\3\2\2\2\u04d1\u04da\7\u008c\2\2\u04d2\u04d3\7E\2\2\u04d3"+
		"\u04d4\5\u0134\u009b\2\u04d4\u04d5\7\u008c\2\2\u04d5\u04da\3\2\2\2\u04d6"+
		"\u04d7\7\64\2\2\u04d7\u04d8\7\u0090\2\2\u04d8\u04da\7\u008c\2\2\u04d9"+
		"\u04c9\3\2\2\2\u04d9\u04cb\3\2\2\2\u04d9\u04cd\3\2\2\2\u04d9\u04d2\3\2"+
		"\2\2\u04d9\u04d6\3\2\2\2\u04da\u008b\3\2\2\2\u04db\u04dc\5\u0092J\2\u04dc"+
		"\u008d\3\2\2\2\u04dd\u04de\bH\1\2\u04de\u04df\5\u0090I\2\u04df\u04e4\3"+
		"\2\2\2\u04e0\u04e1\f\3\2\2\u04e1\u04e3\5\u0090I\2\u04e2\u04e0\3\2\2\2"+
		"\u04e3\u04e6\3\2\2\2\u04e4\u04e2\3\2\2\2\u04e4\u04e5\3\2\2\2\u04e5\u008f"+
		"\3\2\2\2\u04e6\u04e4\3\2\2\2\u04e7\u04f1\5\u0092J\2\u04e8\u04f1\5\u0128"+
		"\u0095\2\u04e9\u04f1\5\u016e\u00b8\2\u04ea\u04f1\5\u0182\u00c2\2\u04eb"+
		"\u04f1\5\u0184\u00c3\2\u04ec\u04f1\5\u00e6t\2\u04ed\u04f1\5\u00ceh\2\u04ee"+
		"\u04f1\5\u009aN\2\u04ef\u04f1\5\u009cO\2\u04f0\u04e7\3\2\2\2\u04f0\u04e8"+
		"\3\2\2\2\u04f0\u04e9\3\2\2\2\u04f0\u04ea\3\2\2\2\u04f0\u04eb\3\2\2\2\u04f0"+
		"\u04ec\3\2\2\2\u04f0\u04ed\3\2\2\2\u04f0\u04ee\3\2\2\2\u04f0\u04ef\3\2"+
		"\2\2\u04f1\u0091\3\2\2\2\u04f2\u04fb\5\u0096L\2\u04f3\u04fb\5\u00e4s\2"+
		"\u04f4\u04fb\5\u00dco\2\u04f5\u04fb\5\u00e0q\2\u04f6\u04fb\5\u00e2r\2"+
		"\u04f7\u04fb\5\u0098M\2\u04f8\u04fb\5\u0094K\2\u04f9\u04fb\5\u00be`\2"+
		"\u04fa\u04f2\3\2\2\2\u04fa\u04f3\3\2\2\2\u04fa\u04f4\3\2\2\2\u04fa\u04f5"+
		"\3\2\2\2\u04fa\u04f6\3\2\2\2\u04fa\u04f7\3\2\2\2\u04fa\u04f8\3\2\2\2\u04fa"+
		"\u04f9\3\2\2\2\u04fb\u0093\3\2\2\2\u04fc\u04fd\7Y\2\2\u04fd\u04ff\7\u0090"+
		"\2\2\u04fe\u0500\5\u00e8u\2\u04ff\u04fe\3\2\2\2\u04ff\u0500\3\2\2\2\u0500"+
		"\u0501\3\2\2\2\u0501\u0502\7o\2\2\u0502\u0503\5\u0116\u008c\2\u0503\u0504"+
		"\7\u008c\2\2\u0504\u0095\3\2\2\2\u0505\u0507\5\u00a0Q\2\u0506\u0505\3"+
		"\2\2\2\u0506\u0507\3\2\2\2\u0507\u0509\3\2\2\2\u0508\u050a\5\u00fe\u0080"+
		"\2\u0509\u0508\3\2\2\2\u0509\u050a\3\2\2\2\u050a\u050b\3\2\2\2\u050b\u0514"+
		"\7\u008c\2\2\u050c\u050e\5\u00e8u\2\u050d\u050f\5\u00a0Q\2\u050e\u050d"+
		"\3\2\2\2\u050e\u050f\3\2\2\2\u050f\u0510\3\2\2\2\u0510\u0511\5\u00fe\u0080"+
		"\2\u0511\u0512\7\u008c\2\2\u0512\u0514\3\2\2\2\u0513\u0506\3\2\2\2\u0513"+
		"\u050c\3\2\2\2\u0514\u0097\3\2\2\2\u0515\u0516\7J\2\2\u0516\u0517\7_\2"+
		"\2\u0517\u0518\5r:\2\u0518\u051b\7\u0086\2\2\u0519\u051c\7\u0099\2\2\u051a"+
		"\u051c\5\f\7\2\u051b\u0519\3\2\2\2\u051b\u051a\3\2\2\2\u051c\u051d\3\2"+
		"\2\2\u051d\u051e\7`\2\2\u051e\u051f\7\u008c\2\2\u051f\u0099\3\2\2\2\u0520"+
		"\u0521\7\u008c\2\2\u0521\u009b\3\2\2\2\u0522\u0523\5\u00e8u\2\u0523\u0524"+
		"\7\u008c\2\2\u0524\u009d\3\2\2\2\u0525\u052c\5\u00a2R\2\u0526\u052c\5"+
		"\u00a8U\2\u0527\u052c\5\u00a4S\2\u0528\u052c\7\63\2\2\u0529\u052c\7T\2"+
		"\2\u052a\u052c\7!\2\2\u052b\u0525\3\2\2\2\u052b\u0526\3\2\2\2\u052b\u0527"+
		"\3\2\2\2\u052b\u0528\3\2\2\2\u052b\u0529\3\2\2\2\u052b\u052a\3\2\2\2\u052c"+
		"\u009f\3\2\2\2\u052d\u052f\5\u009eP\2\u052e\u0530\5\u00e8u\2\u052f\u052e"+
		"\3\2\2\2\u052f\u0530\3\2\2\2\u0530\u0535\3\2\2\2\u0531\u0532\5\u009eP"+
		"\2\u0532\u0533\5\u00a0Q\2\u0533\u0535\3\2\2\2\u0534\u052d\3\2\2\2\u0534"+
		"\u0531\3\2\2\2\u0535\u00a1\3\2\2\2\u0536\u0537\t\6\2\2\u0537\u00a3\3\2"+
		"\2\2\u0538\u0539\t\7\2\2\u0539\u00a5\3\2\2\2\u053a\u053b\7\u0090\2\2\u053b"+
		"\u00a7\3\2\2\2\u053c\u0540\5\u00aaV\2\u053d\u0540\5\u0138\u009d\2\u053e"+
		"\u0540\5\u00ba^\2\u053f\u053c\3\2\2\2\u053f\u053d\3\2\2\2\u053f\u053e"+
		"\3\2\2\2\u0540\u00a9\3\2\2\2\u0541\u0546\5\u00b0Y\2\u0542\u0546\5\u00b6"+
		"\\\2\u0543\u0546\5\u0180\u00c1\2\u0544\u0546\5\u0110\u0089\2\u0545\u0541"+
		"\3\2\2\2\u0545\u0542\3\2\2\2\u0545\u0543\3\2\2\2\u0545\u0544\3\2\2\2\u0546"+
		"\u00ab\3\2\2\2\u0547\u0549\5\u00a8U\2\u0548\u054a\5\u00e8u\2\u0549\u0548"+
		"\3\2\2\2\u0549\u054a\3\2\2\2\u054a\u054f\3\2\2\2\u054b\u054c\5\u00a8U"+
		"\2\u054c\u054d\5\u00acW\2\u054d\u054f\3\2\2\2\u054e\u0547\3\2\2\2\u054e"+
		"\u054b\3\2\2\2\u054f\u00ad\3\2\2\2\u0550\u0552\5\u00aaV\2\u0551\u0553"+
		"\5\u00e8u\2\u0552\u0551\3\2\2\2\u0552\u0553\3\2\2\2\u0553\u0558\3\2\2"+
		"\2\u0554\u0555\5\u00aaV\2\u0555\u0556\5\u00aeX\2\u0556\u0558\3\2\2\2\u0557"+
		"\u0550\3\2\2\2\u0557\u0554\3\2\2\2\u0558\u00af\3\2\2\2\u0559\u055b\5\36"+
		"\20\2\u055a\u0559\3\2\2\2\u055a\u055b\3\2\2\2\u055b\u055c\3\2\2\2\u055c"+
		"\u0571\5\u00b2Z\2\u055d\u055e\5\36\20\2\u055e\u055f\7N\2\2\u055f\u0560"+
		"\5\u0176\u00bc\2\u0560\u0571\3\2\2\2\u0561\u0571\7\34\2\2\u0562\u0571"+
		"\7\35\2\2\u0563\u0571\7\36\2\2\u0564\u0571\7]\2\2\u0565\u0571\7\30\2\2"+
		"\u0566\u0571\7F\2\2\u0567\u0571\7\67\2\2\u0568\u0571\78\2\2\u0569\u0571"+
		"\7G\2\2\u056a\u0571\7X\2\2\u056b\u0571\7\61\2\2\u056c\u0571\7(\2\2\u056d"+
		"\u0571\7[\2\2\u056e\u0571\7\27\2\2\u056f\u0571\5\u00b4[\2\u0570\u055a"+
		"\3\2\2\2\u0570\u055d\3\2\2\2\u0570\u0561\3\2\2\2\u0570\u0562\3\2\2\2\u0570"+
		"\u0563\3\2\2\2\u0570\u0564\3\2\2\2\u0570\u0565\3\2\2\2\u0570\u0566\3\2"+
		"\2\2\u0570\u0567\3\2\2\2\u0570\u0568\3\2\2\2\u0570\u0569\3\2\2\2\u0570"+
		"\u056a\3\2\2\2\u0570\u056b\3\2\2\2\u0570\u056c\3\2\2\2\u0570\u056d\3\2"+
		"\2\2\u0570\u056e\3\2\2\2\u0570\u056f\3\2\2\2\u0571\u00b1\3\2\2\2\u0572"+
		"\u0577\5\u0136\u009c\2\u0573\u0577\5\u00b8]\2\u0574\u0577\5\u00a6T\2\u0575"+
		"\u0577\5\u0176\u00bc\2\u0576\u0572\3\2\2\2\u0576\u0573\3\2\2\2\u0576\u0574"+
		"\3\2\2\2\u0576\u0575\3\2\2\2\u0577\u00b3\3\2\2\2\u0578\u0579\7$\2\2\u0579"+
		"\u057a\7_\2\2\u057a\u057b\5p9\2\u057b\u057c\7`\2\2\u057c\u0582\3\2\2\2"+
		"\u057d\u057e\7$\2\2\u057e\u057f\7_\2\2\u057f\u0580\7\27\2\2\u0580\u0582"+
		"\7`\2\2\u0581\u0578\3\2\2\2\u0581\u057d\3\2\2\2\u0582\u00b5\3\2\2\2\u0583"+
		"\u0585\5\u0140\u00a1\2\u0584\u0586\5\u00e8u\2\u0585\u0584\3\2\2\2\u0585"+
		"\u0586\3\2\2\2\u0586\u0588\3\2\2\2\u0587\u0589\5\36\20\2\u0588\u0587\3"+
		"\2\2\2\u0588\u0589\3\2\2\2\u0589\u058a\3\2\2\2\u058a\u058b\7\u0090\2\2"+
		"\u058b\u059c\3\2\2\2\u058c\u058d\5\u0140\u00a1\2\u058d\u058e\5\u0176\u00bc"+
		"\2\u058e\u059c\3\2\2\2\u058f\u0590\5\u0140\u00a1\2\u0590\u0592\5\36\20"+
		"\2\u0591\u0593\7N\2\2\u0592\u0591\3\2\2\2\u0592\u0593\3\2\2\2\u0593\u0594"+
		"\3\2\2\2\u0594\u0595\5\u0176\u00bc\2\u0595\u059c\3\2\2\2\u0596\u0598\7"+
		"+\2\2\u0597\u0599\5\36\20\2\u0598\u0597\3\2\2\2\u0598\u0599\3\2\2\2\u0599"+
		"\u059a\3\2\2\2\u059a\u059c\7\u0090\2\2\u059b\u0583\3\2\2\2\u059b\u058c"+
		"\3\2\2\2\u059b\u058f\3\2\2\2\u059b\u0596\3\2\2\2\u059c\u00b7\3\2\2\2\u059d"+
		"\u059e\7\u0090\2\2\u059e\u00b9\3\2\2\2\u059f\u05a0\5\u00bc_\2\u05a0\u05a2"+
		"\7c\2\2\u05a1\u05a3\5\u00c4c\2\u05a2\u05a1\3\2\2\2\u05a2\u05a3\3\2\2\2"+
		"\u05a3\u05a4\3\2\2\2\u05a4\u05a5\7d\2\2\u05a5\u05ad\3\2\2\2\u05a6\u05a7"+
		"\5\u00bc_\2\u05a7\u05a8\7c\2\2\u05a8\u05a9\5\u00c4c\2\u05a9\u05aa\7\u0086"+
		"\2\2\u05aa\u05ab\7d\2\2\u05ab\u05ad\3\2\2\2\u05ac\u059f\3\2\2\2\u05ac"+
		"\u05a6\3\2\2\2\u05ad\u00bb\3\2\2\2\u05ae\u05b0\5\u00c0a\2\u05af\u05b1"+
		"\5\u00e8u\2\u05b0\u05af\3\2\2\2\u05b0\u05b1\3\2\2\2\u05b1\u05b3\3\2\2"+
		"\2\u05b2\u05b4\7\u0090\2\2\u05b3\u05b2\3\2\2\2\u05b3\u05b4\3\2\2\2\u05b4"+
		"\u05b6\3\2\2\2\u05b5\u05b7\5\u00c2b\2\u05b6\u05b5\3\2\2\2\u05b6\u05b7"+
		"\3\2\2\2\u05b7\u05c2\3\2\2\2\u05b8\u05ba\5\u00c0a\2\u05b9\u05bb\5\u00e8"+
		"u\2\u05ba\u05b9\3\2\2\2\u05ba\u05bb\3\2\2\2\u05bb\u05bc\3\2\2\2\u05bc"+
		"\u05bd\5\36\20\2\u05bd\u05bf\7\u0090\2\2\u05be\u05c0\5\u00c2b\2\u05bf"+
		"\u05be\3\2\2\2\u05bf\u05c0\3\2\2\2\u05c0\u05c2\3\2\2\2\u05c1\u05ae\3\2"+
		"\2\2\u05c1\u05b8\3\2\2\2\u05c2\u00bd\3\2\2\2\u05c3\u05c5\5\u00c0a\2\u05c4"+
		"\u05c6\5\u00e8u\2\u05c5\u05c4\3\2\2\2\u05c5\u05c6\3\2\2\2\u05c6\u05c7"+
		"\3\2\2\2\u05c7\u05c9\7\u0090\2\2\u05c8\u05ca\5\u00c2b\2\u05c9\u05c8\3"+
		"\2\2\2\u05c9\u05ca\3\2\2\2\u05ca\u05cb\3\2\2\2\u05cb\u05cc\7\u008c\2\2"+
		"\u05cc\u00bf\3\2\2\2\u05cd\u05d3\7+\2\2\u05ce\u05cf\7+\2\2\u05cf\u05d3"+
		"\7\37\2\2\u05d0\u05d1\7+\2\2\u05d1\u05d3\7L\2\2\u05d2\u05cd\3\2\2\2\u05d2"+
		"\u05ce\3\2\2\2\u05d2\u05d0\3\2\2\2\u05d3\u00c1\3\2\2\2\u05d4\u05d5\7\u008a"+
		"\2\2\u05d5\u05d6\5\u00acW\2\u05d6\u00c3\3\2\2\2\u05d7\u05d8\bc\1\2\u05d8"+
		"\u05d9\5\u00c6d\2\u05d9\u05df\3\2\2\2\u05da\u05db\f\3\2\2\u05db\u05dc"+
		"\7\u0086\2\2\u05dc\u05de\5\u00c6d\2\u05dd\u05da\3\2\2\2\u05de\u05e1\3"+
		"\2\2\2\u05df\u05dd\3\2\2\2\u05df\u05e0\3\2\2\2\u05e0\u00c5\3\2\2\2\u05e1"+
		"\u05df\3\2\2\2\u05e2\u05e8\5\u00c8e\2\u05e3\u05e4\5\u00c8e\2\u05e4\u05e5"+
		"\7o\2\2\u05e5\u05e6\5r:\2\u05e6\u05e8\3\2\2\2\u05e7\u05e2\3\2\2\2\u05e7"+
		"\u05e3\3\2\2\2\u05e8\u00c7\3\2\2\2\u05e9\u05ea\7\u0090\2\2\u05ea\u00c9"+
		"\3\2\2\2\u05eb\u05ee\5\u00ccg\2\u05ec\u05ee\5\u00dan\2\u05ed\u05eb\3\2"+
		"\2\2\u05ed\u05ec\3\2\2\2\u05ee\u00cb\3\2\2\2\u05ef\u05f0\7\u0090\2\2\u05f0"+
		"\u00cd\3\2\2\2\u05f1\u05f4\5\u00d0i\2\u05f2\u05f4\5\u00d6l\2\u05f3\u05f1"+
		"\3\2\2\2\u05f3\u05f2\3\2\2\2\u05f4\u00cf\3\2\2\2\u05f5\u05f8\5\u00d2j"+
		"\2\u05f6\u05f8\5\u00d4k\2\u05f7\u05f5\3\2\2\2\u05f7\u05f6\3\2\2\2\u05f8"+
		"\u00d1\3\2\2\2\u05f9\u05fb\7\66\2\2\u05fa\u05f9\3\2\2\2\u05fa\u05fb\3"+
		"\2\2\2\u05fb\u05fc\3\2\2\2\u05fc\u05fd\7:\2\2\u05fd\u05fe\7\u0090\2\2"+
		"\u05fe\u05ff\7c\2\2\u05ff\u0600\5\u00d8m\2\u0600\u0601\7d\2\2\u0601\u00d3"+
		"\3\2\2\2\u0602\u0604\7\66\2\2\u0603\u0602\3\2\2\2\u0603\u0604\3\2\2\2"+
		"\u0604\u0605\3\2\2\2\u0605\u0606\7:\2\2\u0606\u0607\5\u00ccg\2\u0607\u0608"+
		"\7c\2\2\u0608\u0609\5\u00d8m\2\u0609\u060a\7d\2\2\u060a\u00d5\3\2\2\2"+
		"\u060b\u060d\7\66\2\2\u060c\u060b\3\2\2\2\u060c\u060d\3\2\2\2\u060d\u060e"+
		"\3\2\2\2\u060e\u060f\7:\2\2\u060f\u0610\7c\2\2\u0610\u0611\5\u00d8m\2"+
		"\u0611\u0612\7d\2\2\u0612\u00d7\3\2\2\2\u0613\u0615\5\u008eH\2\u0614\u0613"+
		"\3\2\2\2\u0614\u0615\3\2\2\2\u0615\u00d9\3\2\2\2\u0616\u0617\7\u0090\2"+
		"\2\u0617\u00db\3\2\2\2\u0618\u0619\7:\2\2\u0619\u061a\7\u0090\2\2\u061a"+
		"\u061b\7o\2\2\u061b\u061c\5\u00dep\2\u061c\u061d\7\u008c\2\2\u061d\u00dd"+
		"\3\2\2\2\u061e\u0620\5\36\20\2\u061f\u061e\3\2\2\2\u061f\u0620\3\2\2\2"+
		"\u0620\u0621\3\2\2\2\u0621\u0622\5\u00caf\2\u0622\u00df\3\2\2\2\u0623"+
		"\u0625\7Y\2\2\u0624\u0626\7V\2\2\u0625\u0624\3\2\2\2\u0625\u0626\3\2\2"+
		"\2\u0626\u0627\3\2\2\2\u0627\u0628\5\36\20\2\u0628\u0629\5\32\16\2\u0629"+
		"\u062a\7\u008c\2\2\u062a\u0631\3\2\2\2\u062b\u062c\7Y\2\2\u062c\u062d"+
		"\7\u008b\2\2\u062d\u062e\5\32\16\2\u062e\u062f\7\u008c\2\2\u062f\u0631"+
		"\3\2\2\2\u0630\u0623\3\2\2\2\u0630\u062b\3\2\2\2\u0631\u00e1\3\2\2\2\u0632"+
		"\u0634\5\u00e8u\2\u0633\u0632\3\2\2\2\u0633\u0634\3\2\2\2\u0634\u0635"+
		"\3\2\2\2\u0635\u0636\7Y\2\2\u0636\u0638\7:\2\2\u0637\u0639\5\36\20\2\u0638"+
		"\u0637\3\2\2\2\u0638\u0639\3\2\2\2\u0639\u063a\3\2\2\2\u063a\u063b\5\u00ca"+
		"f\2\u063b\u063c\7\u008c\2\2\u063c\u00e3\3\2\2\2\u063d\u063e\7\26\2\2\u063e"+
		"\u063f\7_\2\2\u063f\u0640\7\u0099\2\2\u0640\u0641\7`\2\2\u0641\u0642\7"+
		"\u008c\2\2\u0642\u00e5\3\2\2\2\u0643\u0644\7.\2\2\u0644\u0645\7\u0099"+
		"\2\2\u0645\u0647\7c\2\2\u0646\u0648\5\u008eH\2\u0647\u0646\3\2\2\2\u0647"+
		"\u0648\3\2\2\2\u0648\u0649\3\2\2\2\u0649\u064e\7d\2\2\u064a\u064b\7.\2"+
		"\2\u064b\u064c\7\u0099\2\2\u064c\u064e\5\u0090I\2\u064d\u0643\3\2\2\2"+
		"\u064d\u064a\3\2\2\2\u064e\u00e7\3\2\2\2\u064f\u0650\bu\1\2\u0650\u0651"+
		"\5\u00eav\2\u0651\u0656\3\2\2\2\u0652\u0653\f\3\2\2\u0653\u0655\5\u00ea"+
		"v\2\u0654\u0652\3\2\2\2\u0655\u0658\3\2\2\2\u0656\u0654\3\2\2\2\u0656"+
		"\u0657\3\2\2\2\u0657\u00e9\3\2\2\2\u0658\u0656\3\2\2\2\u0659\u065a\7a"+
		"\2\2\u065a\u065b\7a\2\2\u065b\u065c\5\u00eex\2\u065c\u065d\7b\2\2\u065d"+
		"\u065e\7b\2\2\u065e\u0661\3\2\2\2\u065f\u0661\5\u00ecw\2\u0660\u0659\3"+
		"\2\2\2\u0660\u065f\3\2\2\2\u0661\u00eb\3\2\2\2\u0662\u0663\7\24\2\2\u0663"+
		"\u0664\7_\2\2\u0664\u0666\5\u0116\u008c\2\u0665\u0667\7\u008f\2\2\u0666"+
		"\u0665\3\2\2\2\u0666\u0667\3\2\2\2\u0667\u0668\3\2\2\2\u0668\u0669\7`"+
		"\2\2\u0669\u0673\3\2\2\2\u066a\u066b\7\24\2\2\u066b\u066c\7_\2\2\u066c"+
		"\u066e\5r:\2\u066d\u066f\7\u008f\2\2\u066e\u066d\3\2\2\2\u066e\u066f\3"+
		"\2\2\2\u066f\u0670\3\2\2\2\u0670\u0671\7`\2\2\u0671\u0673\3\2\2\2\u0672"+
		"\u0662\3\2\2\2\u0672\u066a\3\2\2\2\u0673\u00ed\3\2\2\2\u0674\u0676\bx"+
		"\1\2\u0675\u0677\5\u00f0y\2\u0676\u0675\3\2\2\2\u0676\u0677\3\2\2\2\u0677"+
		"\u067c\3\2\2\2\u0678\u0679\5\u00f0y\2\u0679\u067a\7\u008f\2\2\u067a\u067c"+
		"\3\2\2\2\u067b\u0674\3\2\2\2\u067b\u0678\3\2\2\2\u067c\u0689\3\2\2\2\u067d"+
		"\u067e\f\5\2\2\u067e\u0680\7\u0086\2\2\u067f\u0681\5\u00f0y\2\u0680\u067f"+
		"\3\2\2\2\u0680\u0681\3\2\2\2\u0681\u0688\3\2\2\2\u0682\u0683\f\3\2\2\u0683"+
		"\u0684\7\u0086\2\2\u0684\u0685\5\u00f0y\2\u0685\u0686\7\u008f\2\2\u0686"+
		"\u0688\3\2\2\2\u0687\u067d\3\2\2\2\u0687\u0682\3\2\2\2\u0688\u068b\3\2"+
		"\2\2\u0689\u0687\3\2\2\2\u0689\u068a\3\2\2\2\u068a\u00ef\3\2\2\2\u068b"+
		"\u0689\3\2\2\2\u068c\u068e\5\u00f2z\2\u068d\u068f\5\u00f8}\2\u068e\u068d"+
		"\3\2\2\2\u068e\u068f\3\2\2\2\u068f\u00f1\3\2\2\2\u0690\u0693\7\u0090\2"+
		"\2\u0691\u0693\5\u00f4{\2\u0692\u0690\3\2\2\2\u0692\u0691\3\2\2\2\u0693"+
		"\u00f3\3\2\2\2\u0694\u0695\5\u00f6|\2\u0695\u0696\7\u008b\2\2\u0696\u0697"+
		"\7\u0090\2\2\u0697\u00f5\3\2\2\2\u0698\u0699\7\u0090\2\2\u0699\u00f7\3"+
		"\2\2\2\u069a\u069b\7_\2\2\u069b\u069c\5\u00fa~\2\u069c\u069d\7`\2\2\u069d"+
		"\u00f9\3\2\2\2\u069e\u06a0\b~\1\2\u069f\u06a1\5\u00fc\177\2\u06a0\u069f"+
		"\3\2\2\2\u06a0\u06a1\3\2\2\2\u06a1\u06a6\3\2\2\2\u06a2\u06a3\f\3\2\2\u06a3"+
		"\u06a5\5\u00fc\177\2\u06a4\u06a2\3\2\2\2\u06a5\u06a8\3\2\2\2\u06a6\u06a4"+
		"\3\2\2\2\u06a6\u06a7\3\2\2\2\u06a7\u00fb\3\2\2\2\u06a8\u06a6\3\2\2\2\u06a9"+
		"\u06aa\7_\2\2\u06aa\u06ab\5\u00fa~\2\u06ab\u06ac\7`\2\2\u06ac\u06b6\3"+
		"\2\2\2\u06ad\u06ae\7a\2\2\u06ae\u06af\5\u00fa~\2\u06af\u06b0\7b\2\2\u06b0"+
		"\u06b6\3\2\2\2\u06b1\u06b2\7c\2\2\u06b2\u06b3\5\u00fa~\2\u06b3\u06b4\7"+
		"d\2\2\u06b4\u06b6\3\2\2\2\u06b5\u06a9\3\2\2\2\u06b5\u06ad\3\2\2\2\u06b5"+
		"\u06b1\3\2\2\2\u06b6\u00fd\3\2\2\2\u06b7\u06b8\b\u0080\1\2\u06b8\u06b9"+
		"\5\u0100\u0081\2\u06b9\u06bf\3\2\2\2\u06ba\u06bb\f\3\2\2\u06bb\u06bc\7"+
		"\u0086\2\2\u06bc\u06be\5\u0100\u0081\2\u06bd\u06ba\3\2\2\2\u06be\u06c1"+
		"\3\2\2\2\u06bf\u06bd\3\2\2\2\u06bf\u06c0\3\2\2\2\u06c0\u00ff\3\2\2\2\u06c1"+
		"\u06bf\3\2\2\2\u06c2\u06c4\5\u0102\u0082\2\u06c3\u06c5\5\u012c\u0097\2"+
		"\u06c4\u06c3\3\2\2\2\u06c4\u06c5\3\2\2\2\u06c5\u0101\3\2\2\2\u06c6\u06cc"+
		"\5\u0104\u0083\2\u06c7\u06c8\5\u0106\u0084\2\u06c8\u06c9\5\u0108\u0085"+
		"\2\u06c9\u06ca\5\u010a\u0086\2\u06ca\u06cc\3\2\2\2\u06cb\u06c6\3\2\2\2"+
		"\u06cb\u06c7\3\2\2\2\u06cc\u0103\3\2\2\2\u06cd\u06d2\5\u0106\u0084\2\u06ce"+
		"\u06cf\5\u010c\u0087\2\u06cf\u06d0\5\u0104\u0083\2\u06d0\u06d2\3\2\2\2"+
		"\u06d1\u06cd\3\2\2\2\u06d1\u06ce\3\2\2\2\u06d2\u0105\3\2\2\2\u06d3\u06d4"+
		"\b\u0084\1\2\u06d4\u06d6\5\u0114\u008b\2\u06d5\u06d7\5\u00e8u\2\u06d6"+
		"\u06d5\3\2\2\2\u06d6\u06d7\3\2\2\2\u06d7\u06dd\3\2\2\2\u06d8\u06d9\7_"+
		"\2\2\u06d9\u06da\5\u0104\u0083\2\u06da\u06db\7`\2\2\u06db\u06dd\3\2\2"+
		"\2\u06dc\u06d3\3\2\2\2\u06dc\u06d8\3\2\2\2\u06dd\u06eb\3\2\2\2\u06de\u06df"+
		"\f\5\2\2\u06df\u06ea\5\u0108\u0085\2\u06e0\u06e1\f\4\2\2\u06e1\u06e3\7"+
		"a\2\2\u06e2\u06e4\5r:\2\u06e3\u06e2\3\2\2\2\u06e3\u06e4\3\2\2\2\u06e4"+
		"\u06e5\3\2\2\2\u06e5\u06e7\7b\2\2\u06e6\u06e8\5\u00e8u\2\u06e7\u06e6\3"+
		"\2\2\2\u06e7\u06e8\3\2\2\2\u06e8\u06ea\3\2\2\2\u06e9\u06de\3\2\2\2\u06e9"+
		"\u06e0\3\2\2\2\u06ea\u06ed\3\2\2\2\u06eb\u06e9\3\2\2\2\u06eb\u06ec\3\2"+
		"\2\2\u06ec\u0107\3\2\2\2\u06ed\u06eb\3\2\2\2\u06ee\u06ef\7_\2\2\u06ef"+
		"\u06f0\5\u0122\u0092\2\u06f0\u06f2\7`\2\2\u06f1\u06f3\5\u010e\u0088\2"+
		"\u06f2\u06f1\3\2\2\2\u06f2\u06f3\3\2\2\2\u06f3\u06f5\3\2\2\2\u06f4\u06f6"+
		"\5\u0112\u008a\2\u06f5\u06f4\3\2\2\2\u06f5\u06f6\3\2\2\2\u06f6\u06f8\3"+
		"\2\2\2\u06f7\u06f9\5\u0192\u00ca\2\u06f8\u06f7\3\2\2\2\u06f8\u06f9\3\2"+
		"\2\2\u06f9\u06fb\3\2\2\2\u06fa\u06fc\5\u00e8u\2\u06fb\u06fa\3\2\2\2\u06fb"+
		"\u06fc\3\2\2\2\u06fc\u0109\3\2\2\2\u06fd\u06fe\7\u0088\2\2\u06fe\u0700"+
		"\5\u00aeX\2\u06ff\u0701\5\u0118\u008d\2\u0700\u06ff\3\2\2\2\u0700\u0701"+
		"\3\2\2\2\u0701\u010b\3\2\2\2\u0702\u0704\7g\2\2\u0703\u0705\5\u00e8u\2"+
		"\u0704\u0703\3\2\2\2\u0704\u0705\3\2\2\2\u0705\u0707\3\2\2\2\u0706\u0708"+
		"\5\u010e\u0088\2\u0707\u0706\3\2\2\2\u0707\u0708\3\2\2\2\u0708\u071a\3"+
		"\2\2\2\u0709\u070b\7k\2\2\u070a\u070c\5\u00e8u\2\u070b\u070a\3\2\2\2\u070b"+
		"\u070c\3\2\2\2\u070c\u071a\3\2\2\2\u070d\u070f\7\r\2\2\u070e\u0710\5\u00e8"+
		"u\2\u070f\u070e\3\2\2\2\u070f\u0710\3\2\2\2\u0710\u071a\3\2\2\2\u0711"+
		"\u0712\5\36\20\2\u0712\u0714\7g\2\2\u0713\u0715\5\u00e8u\2\u0714\u0713"+
		"\3\2\2\2\u0714\u0715\3\2\2\2\u0715\u0717\3\2\2\2\u0716\u0718\5\u010e\u0088"+
		"\2\u0717\u0716\3\2\2\2\u0717\u0718\3\2\2\2\u0718\u071a\3\2\2\2\u0719\u0702"+
		"\3\2\2\2\u0719\u0709\3\2\2\2\u0719\u070d\3\2\2\2\u0719\u0711\3\2\2\2\u071a"+
		"\u010d\3\2\2\2\u071b\u071d\5\u0110\u0089\2\u071c\u071e\5\u010e\u0088\2"+
		"\u071d\u071c\3\2\2\2\u071d\u071e\3\2\2\2\u071e\u010f\3\2\2\2\u071f\u0720"+
		"\t\b\2\2\u0720\u0111\3\2\2\2\u0721\u0722\t\t\2\2\u0722\u0113\3\2\2\2\u0723"+
		"\u0725\7\u008f\2\2\u0724\u0723\3\2\2\2\u0724\u0725\3\2\2\2\u0725\u0726"+
		"\3\2\2\2\u0726\u0727\5\30\r\2\u0727\u0115\3\2\2\2\u0728\u072a\5\u00ac"+
		"W\2\u0729\u072b\5\u0118\u008d\2\u072a\u0729\3\2\2\2\u072a\u072b\3\2\2"+
		"\2\u072b\u0117\3\2\2\2\u072c\u0735\5\u011a\u008e\2\u072d\u072f\5\u011c"+
		"\u008f\2\u072e\u072d\3\2\2\2\u072e\u072f\3\2\2\2\u072f\u0730\3\2\2\2\u0730"+
		"\u0731\5\u0108\u0085\2\u0731\u0732\5\u010a\u0086\2\u0732\u0735\3\2\2\2"+
		"\u0733\u0735\5\u011e\u0090\2\u0734\u072c\3\2\2\2\u0734\u072e\3\2\2\2\u0734"+
		"\u0733\3\2\2\2\u0735\u0119\3\2\2\2\u0736\u073c\5\u011c\u008f\2\u0737\u0739"+
		"\5\u010c\u0087\2\u0738\u073a\5\u011a\u008e\2\u0739\u0738\3\2\2\2\u0739"+
		"\u073a\3\2\2\2\u073a\u073c\3\2\2\2\u073b\u0736\3\2\2\2\u073b\u0737\3\2"+
		"\2\2\u073c\u011b\3\2\2\2\u073d\u073e\b\u008f\1\2\u073e\u074c\5\u0108\u0085"+
		"\2\u073f\u0741\7a\2\2\u0740\u0742\5r:\2\u0741\u0740\3\2\2\2\u0741\u0742"+
		"\3\2\2\2\u0742\u0743\3\2\2\2\u0743\u0745\7b\2\2\u0744\u0746\5\u00e8u\2"+
		"\u0745\u0744\3\2\2\2\u0745\u0746\3\2\2\2\u0746\u074c\3\2\2\2\u0747\u0748"+
		"\7_\2\2\u0748\u0749\5\u011a\u008e\2\u0749\u074a\7`\2\2\u074a\u074c\3\2"+
		"\2\2\u074b\u073d\3\2\2\2\u074b\u073f\3\2\2\2\u074b\u0747\3\2\2\2\u074c"+
		"\u075a\3\2\2\2\u074d\u074e\f\7\2\2\u074e\u0759\5\u0108\u0085\2\u074f\u0750"+
		"\f\5\2\2\u0750\u0752\7a\2\2\u0751\u0753\5r:\2\u0752\u0751\3\2\2\2\u0752"+
		"\u0753\3\2\2\2\u0753\u0754\3\2\2\2\u0754\u0756\7b\2\2\u0755\u0757\5\u00e8"+
		"u\2\u0756\u0755\3\2\2\2\u0756\u0757\3\2\2\2\u0757\u0759\3\2\2\2\u0758"+
		"\u074d\3\2\2\2\u0758\u074f\3\2\2\2\u0759\u075c\3\2\2\2\u075a\u0758\3\2"+
		"\2\2\u075a\u075b\3\2\2\2\u075b\u011d\3\2\2\2\u075c\u075a\3\2\2\2\u075d"+
		"\u0762\5\u0120\u0091\2\u075e\u075f\5\u010c\u0087\2\u075f\u0760\5\u011e"+
		"\u0090\2\u0760\u0762\3\2\2\2\u0761\u075d\3\2\2\2\u0761\u075e\3\2\2\2\u0762"+
		"\u011f\3\2\2\2\u0763\u0764\b\u0091\1\2\u0764\u0765\7\u008f\2\2\u0765\u0773"+
		"\3\2\2\2\u0766\u0767\f\5\2\2\u0767\u0772\5\u0108\u0085\2\u0768\u0769\f"+
		"\4\2\2\u0769\u076b\7a\2\2\u076a\u076c\5r:\2\u076b\u076a\3\2\2\2\u076b"+
		"\u076c\3\2\2\2\u076c\u076d\3\2\2\2\u076d\u076f\7b\2\2\u076e\u0770\5\u00e8"+
		"u\2\u076f\u076e\3\2\2\2\u076f\u0770\3\2\2\2\u0770\u0772\3\2\2\2\u0771"+
		"\u0766\3\2\2\2\u0771\u0768\3\2\2\2\u0772\u0775\3\2\2\2\u0773\u0771\3\2"+
		"\2\2\u0773\u0774\3\2\2\2\u0774\u0121\3\2\2\2\u0775\u0773\3\2\2\2\u0776"+
		"\u0778\5\u0124\u0093\2\u0777\u0776\3\2\2\2\u0777\u0778\3\2\2\2\u0778\u077a"+
		"\3\2\2\2\u0779\u077b\7\u008f\2\2\u077a\u0779\3\2\2\2\u077a\u077b\3\2\2"+
		"\2\u077b\u0781\3\2\2\2\u077c\u077d\5\u0124\u0093\2\u077d\u077e\7\u0086"+
		"\2\2\u077e\u077f\7\u008f\2\2\u077f\u0781\3\2\2\2\u0780\u0777\3\2\2\2\u0780"+
		"\u077c\3\2\2\2\u0781\u0123\3\2\2\2\u0782\u0783\b\u0093\1\2\u0783\u0784"+
		"\5\u0126\u0094\2\u0784\u078a\3\2\2\2\u0785\u0786\f\3\2\2\u0786\u0787\7"+
		"\u0086\2\2\u0787\u0789\5\u0126\u0094\2\u0788\u0785\3\2\2\2\u0789\u078c"+
		"\3\2\2\2\u078a\u0788\3\2\2\2\u078a\u078b\3\2\2\2\u078b\u0125\3\2\2\2\u078c"+
		"\u078a\3\2\2\2\u078d\u078f\5\u00e8u\2\u078e\u078d\3\2\2\2\u078e\u078f"+
		"\3\2\2\2\u078f\u0790\3\2\2\2\u0790\u0791\5\u00a0Q\2\u0791\u0792\5\u0102"+
		"\u0082\2\u0792\u07ad\3\2\2\2\u0793\u0795\5\u00e8u\2\u0794\u0793\3\2\2"+
		"\2\u0794\u0795\3\2\2\2\u0795\u0796\3\2\2\2\u0796\u0797\5\u00a0Q\2\u0797"+
		"\u0798\5\u0102\u0082\2\u0798\u0799\7o\2\2\u0799\u079a\5\u0130\u0099\2"+
		"\u079a\u07ad\3\2\2\2\u079b\u079d\5\u00e8u\2\u079c\u079b\3\2\2\2\u079c"+
		"\u079d\3\2\2\2\u079d\u079e\3\2\2\2\u079e\u07a0\5\u00a0Q\2\u079f\u07a1"+
		"\5\u0118\u008d\2\u07a0\u079f\3\2\2\2\u07a0\u07a1\3\2\2\2\u07a1\u07ad\3"+
		"\2\2\2\u07a2\u07a4\5\u00e8u\2\u07a3\u07a2\3\2\2\2\u07a3\u07a4\3\2\2\2"+
		"\u07a4\u07a5\3\2\2\2\u07a5\u07a7\5\u00a0Q\2\u07a6\u07a8\5\u0118\u008d"+
		"\2\u07a7\u07a6\3\2\2\2\u07a7\u07a8\3\2\2\2\u07a8\u07a9\3\2\2\2\u07a9\u07aa"+
		"\7o\2\2\u07aa\u07ab\5\u0130\u0099\2\u07ab\u07ad\3\2\2\2\u07ac\u078e\3"+
		"\2\2\2\u07ac\u0794\3\2\2\2\u07ac\u079c\3\2\2\2\u07ac\u07a3\3\2\2\2\u07ad"+
		"\u0127\3\2\2\2\u07ae\u07b0\5\u00e8u\2\u07af\u07ae\3\2\2\2\u07af\u07b0"+
		"\3\2\2\2\u07b0\u07b2\3\2\2\2\u07b1\u07b3\5\u00a0Q\2\u07b2\u07b1\3\2\2"+
		"\2\u07b2\u07b3\3\2\2\2\u07b3\u07b4\3\2\2\2\u07b4\u07b6\5\u0102\u0082\2"+
		"\u07b5\u07b7\5\u014a\u00a6\2\u07b6\u07b5\3\2\2\2\u07b6\u07b7\3\2\2\2\u07b7"+
		"\u07b8\3\2\2\2\u07b8\u07b9\5\u012a\u0096\2\u07b9\u0129\3\2\2\2\u07ba\u07bc"+
		"\5\u0162\u00b2\2\u07bb\u07ba\3\2\2\2\u07bb\u07bc\3\2\2\2\u07bc\u07bd\3"+
		"\2\2\2\u07bd\u07c6\5z>\2\u07be\u07c6\5\u0188\u00c5\2\u07bf\u07c0\7o\2"+
		"\2\u07c0\u07c1\7%\2\2\u07c1\u07c6\7\u008c\2\2\u07c2\u07c3\7o\2\2\u07c3"+
		"\u07c4\7&\2\2\u07c4\u07c6\7\u008c\2\2\u07c5\u07bb\3\2\2\2\u07c5\u07be"+
		"\3\2\2\2\u07c5\u07bf\3\2\2\2\u07c5\u07c2\3\2\2\2\u07c6\u012b\3\2\2\2\u07c7"+
		"\u07cd\5\u012e\u0098\2\u07c8\u07c9\7_\2\2\u07c9\u07ca\58\35\2\u07ca\u07cb"+
		"\7`\2\2\u07cb\u07cd\3\2\2\2\u07cc\u07c7\3\2\2\2\u07cc\u07c8\3\2\2\2\u07cd"+
		"\u012d\3\2\2\2\u07ce\u07cf\7o\2\2\u07cf\u07d2\5\u0130\u0099\2\u07d0\u07d2"+
		"\5\u0134\u009b\2\u07d1\u07ce\3\2\2\2\u07d1\u07d0\3\2\2\2\u07d2\u012f\3"+
		"\2\2\2\u07d3\u07d6\5l\67\2\u07d4\u07d6\5\u0134\u009b\2\u07d5\u07d3\3\2"+
		"\2\2\u07d5\u07d4\3\2\2\2\u07d6\u0131\3\2\2\2\u07d7\u07d8\b\u009a\1\2\u07d8"+
		"\u07da\5\u0130\u0099\2\u07d9\u07db\7\u008f\2\2\u07da\u07d9\3\2\2\2\u07da"+
		"\u07db\3\2\2\2\u07db\u07e4\3\2\2\2\u07dc\u07dd\f\3\2\2\u07dd\u07de\7\u0086"+
		"\2\2\u07de\u07e0\5\u0130\u0099\2\u07df\u07e1\7\u008f\2\2\u07e0\u07df\3"+
		"\2\2\2\u07e0\u07e1\3\2\2\2\u07e1\u07e3\3\2\2\2\u07e2\u07dc\3\2\2\2\u07e3"+
		"\u07e6\3\2\2\2\u07e4\u07e2\3\2\2\2\u07e4\u07e5\3\2\2\2\u07e5\u0133\3\2"+
		"\2\2\u07e6\u07e4\3\2\2\2\u07e7\u07e8\7c\2\2\u07e8\u07ea\5\u0132\u009a"+
		"\2\u07e9\u07eb\7\u0086\2\2\u07ea\u07e9\3\2\2\2\u07ea\u07eb\3\2\2\2\u07eb"+
		"\u07ec\3\2\2\2\u07ec\u07ed\7d\2\2\u07ed\u07f1\3\2\2\2\u07ee\u07ef\7c\2"+
		"\2\u07ef\u07f1\7d\2\2\u07f0\u07e7\3\2\2\2\u07f0\u07ee\3\2\2\2\u07f1\u0135"+
		"\3\2\2\2\u07f2\u07f5\7\u0090\2\2\u07f3\u07f5\5\u0176\u00bc\2\u07f4\u07f2"+
		"\3\2\2\2\u07f4\u07f3\3\2\2\2\u07f5\u0137\3\2\2\2\u07f6\u07f7\5\u013a\u009e"+
		"\2\u07f7\u07f9\7c\2\2\u07f8\u07fa\5\u0142\u00a2\2\u07f9\u07f8\3\2\2\2"+
		"\u07f9\u07fa\3\2\2\2\u07fa\u07fb\3\2\2\2\u07fb\u07fc\7d\2\2\u07fc\u0139"+
		"\3\2\2\2\u07fd\u07ff\5\u0140\u00a1\2\u07fe\u0800\5\u00e8u\2\u07ff\u07fe"+
		"\3\2\2\2\u07ff\u0800\3\2\2\2\u0800\u0801\3\2\2\2\u0801\u0803\5\u013c\u009f"+
		"\2\u0802\u0804\5\u013e\u00a0\2\u0803\u0802\3\2\2\2\u0803\u0804\3\2\2\2"+
		"\u0804\u0806\3\2\2\2\u0805\u0807\5\u0150\u00a9\2\u0806\u0805\3\2\2\2\u0806"+
		"\u0807\3\2\2\2\u0807\u0810\3\2\2\2\u0808\u080a\5\u0140\u00a1\2\u0809\u080b"+
		"\5\u00e8u\2\u080a\u0809\3\2\2\2\u080a\u080b\3\2\2\2\u080b\u080d\3\2\2"+
		"\2\u080c\u080e\5\u0150\u00a9\2\u080d\u080c\3\2\2\2\u080d\u080e\3\2\2\2"+
		"\u080e\u0810\3\2\2\2\u080f\u07fd\3\2\2\2\u080f\u0808\3\2\2\2\u0810\u013b"+
		"\3\2\2\2\u0811\u0813\5\36\20\2\u0812\u0811\3\2\2\2\u0812\u0813\3\2\2\2"+
		"\u0813\u0814\3\2\2\2\u0814\u0815\5\u0136\u009c\2\u0815\u013d\3\2\2\2\u0816"+
		"\u0817\7\60\2\2\u0817\u013f\3\2\2\2\u0818\u0819\t\n\2\2\u0819\u0141\3"+
		"\2\2\2\u081a\u081c\5\u0144\u00a3\2\u081b\u081d\5\u0142\u00a2\2\u081c\u081b"+
		"\3\2\2\2\u081c\u081d\3\2\2\2\u081d\u0824\3\2\2\2\u081e\u081f\5\u015a\u00ae"+
		"\2\u081f\u0821\7\u008a\2\2\u0820\u0822\5\u0142\u00a2\2\u0821\u0820\3\2"+
		"\2\2\u0821\u0822\3\2\2\2\u0822\u0824\3\2\2\2\u0823\u081a\3\2\2\2\u0823"+
		"\u081e\3\2\2\2\u0824\u0143\3\2\2\2\u0825\u0827\5\u00e8u\2\u0826\u0825"+
		"\3\2\2\2\u0826\u0827\3\2\2\2\u0827\u0829\3\2\2\2\u0828\u082a\5\u00a0Q"+
		"\2\u0829\u0828\3\2\2\2\u0829\u082a\3\2\2\2\u082a\u082c\3\2\2\2\u082b\u082d"+
		"\5\u0146\u00a4\2\u082c\u082b\3\2\2\2\u082c\u082d\3\2\2\2\u082d\u082e\3"+
		"\2\2\2\u082e\u0836\7\u008c\2\2\u082f\u0836\5\u0128\u0095\2\u0830\u0836"+
		"\5\u00e0q\2\u0831\u0836\5\u0098M\2\u0832\u0836\5\u016e\u00b8\2\u0833\u0836"+
		"\5\u0094K\2\u0834\u0836\5\u009aN\2\u0835\u0826\3\2\2\2\u0835\u082f\3\2"+
		"\2\2\u0835\u0830\3\2\2\2\u0835\u0831\3\2\2\2\u0835\u0832\3\2\2\2\u0835"+
		"\u0833\3\2\2\2\u0835\u0834\3\2\2\2\u0836\u0145\3\2\2\2\u0837\u0838\b\u00a4"+
		"\1\2\u0838\u0839\5\u0148\u00a5\2\u0839\u083f\3\2\2\2\u083a\u083b\f\3\2"+
		"\2\u083b\u083c\7\u0086\2\2\u083c\u083e\5\u0148\u00a5\2\u083d\u083a\3\2"+
		"\2\2\u083e\u0841\3\2\2\2\u083f\u083d\3\2\2\2\u083f\u0840\3\2\2\2\u0840"+
		"\u0147\3\2\2\2\u0841\u083f\3\2\2\2\u0842\u0844\5\u0102\u0082\2\u0843\u0845"+
		"\5\u014a\u00a6\2\u0844\u0843\3\2\2\2\u0844\u0845\3\2\2\2\u0845\u0847\3"+
		"\2\2\2\u0846\u0848\5\u014e\u00a8\2\u0847\u0846\3\2\2\2\u0847\u0848\3\2"+
		"\2\2\u0848\u0856\3\2\2\2\u0849\u084b\5\u0102\u0082\2\u084a\u084c\5\u012e"+
		"\u0098\2\u084b\u084a\3\2\2\2\u084b\u084c\3\2\2\2\u084c\u0856\3\2\2\2\u084d"+
		"\u084f\7\u0090\2\2\u084e\u084d\3\2\2\2\u084e\u084f\3\2\2\2\u084f\u0851"+
		"\3\2\2\2\u0850\u0852\5\u00e8u\2\u0851\u0850\3\2\2\2\u0851\u0852\3\2\2"+
		"\2\u0852\u0853\3\2\2\2\u0853\u0854\7\u008a\2\2\u0854\u0856\5r:\2\u0855"+
		"\u0842\3\2\2\2\u0855\u0849\3\2\2\2\u0855\u084e\3\2\2\2\u0856\u0149\3\2"+
		"\2\2\u0857\u0858\b\u00a6\1\2\u0858\u0859\5\u014c\u00a7\2\u0859\u085e\3"+
		"\2\2\2\u085a\u085b\f\3\2\2\u085b\u085d\5\u014c\u00a7\2\u085c\u085a\3\2"+
		"\2\2\u085d\u0860\3\2\2\2\u085e\u085c\3\2\2\2\u085e\u085f\3\2\2\2\u085f"+
		"\u014b\3\2\2\2\u0860\u085e\3\2\2\2\u0861\u0862\t\13\2\2\u0862\u014d\3"+
		"\2\2\2\u0863\u0864\7o\2\2\u0864\u0865\7\u0093\2\2\u0865\u0866\b\u00a8"+
		"\1\2\u0866\u014f\3\2\2\2\u0867\u0868\7\u008a\2\2\u0868\u0869\5\u0152\u00aa"+
		"\2\u0869\u0151\3\2\2\2\u086a\u086b\b\u00aa\1\2\u086b\u086d\5\u0154\u00ab"+
		"\2\u086c\u086e\7\u008f\2\2\u086d\u086c\3\2\2\2\u086d\u086e\3\2\2\2\u086e"+
		"\u0877\3\2\2\2\u086f\u0870\f\3\2\2\u0870\u0871\7\u0086\2\2\u0871\u0873"+
		"\5\u0154\u00ab\2\u0872\u0874\7\u008f\2\2\u0873\u0872\3\2\2\2\u0873\u0874"+
		"\3\2\2\2\u0874\u0876\3\2\2\2\u0875\u086f\3\2\2\2\u0876\u0879\3\2\2\2\u0877"+
		"\u0875\3\2\2\2\u0877\u0878\3\2\2\2\u0878\u0153\3\2\2\2\u0879\u0877\3\2"+
		"\2\2\u087a\u087c\5\u00e8u\2\u087b\u087a\3\2\2\2\u087b\u087c\3\2\2\2\u087c"+
		"\u087d\3\2\2\2\u087d\u0890\5\u0158\u00ad\2\u087e\u0880\5\u00e8u\2\u087f"+
		"\u087e\3\2\2\2\u087f\u0880\3\2\2\2\u0880\u0881\3\2\2\2\u0881\u0883\7Z"+
		"\2\2\u0882\u0884\5\u015a\u00ae\2\u0883\u0882\3\2\2\2\u0883\u0884\3\2\2"+
		"\2\u0884\u0885\3\2\2\2\u0885\u0890\5\u0158\u00ad\2\u0886\u0888\5\u00e8"+
		"u\2\u0887\u0886\3\2\2\2\u0887\u0888\3\2\2\2\u0888\u0889\3\2\2\2\u0889"+
		"\u088b\5\u015a\u00ae\2\u088a\u088c\7Z\2\2\u088b\u088a\3\2\2\2\u088b\u088c"+
		"\3\2\2\2\u088c\u088d\3\2\2\2\u088d\u088e\5\u0158\u00ad\2\u088e\u0890\3"+
		"\2\2\2\u088f\u087b\3\2\2\2\u088f\u087f\3\2\2\2\u088f\u0887\3\2\2\2\u0890"+
		"\u0155\3\2\2\2\u0891\u0893\5\36\20\2\u0892\u0891\3\2\2\2\u0892\u0893\3"+
		"\2\2\2\u0893\u0894\3\2\2\2\u0894\u0897\5\u0136\u009c\2\u0895\u0897\5\u00b4"+
		"[\2\u0896\u0892\3\2\2\2\u0896\u0895\3\2\2\2\u0897\u0157\3\2\2\2\u0898"+
		"\u0899\5\u0156\u00ac\2\u0899\u0159\3\2\2\2\u089a\u089b\t\f\2\2\u089b\u015b"+
		"\3\2\2\2\u089c\u089d\7>\2\2\u089d\u089e\5\u015e\u00b0\2\u089e\u015d\3"+
		"\2\2\2\u089f\u08a1\5\u00acW\2\u08a0\u08a2\5\u0160\u00b1\2\u08a1\u08a0"+
		"\3\2\2\2\u08a1\u08a2\3\2\2\2\u08a2\u015f\3\2\2\2\u08a3\u08a5\5\u010c\u0087"+
		"\2\u08a4\u08a6\5\u0160\u00b1\2\u08a5\u08a4\3\2\2\2\u08a5\u08a6\3\2\2\2"+
		"\u08a6\u0161\3\2\2\2\u08a7\u08a8\7\u008a\2\2\u08a8\u08a9\5\u0164\u00b3"+
		"\2\u08a9\u0163\3\2\2\2\u08aa\u08ac\5\u0166\u00b4\2\u08ab\u08ad\7\u008f"+
		"\2\2\u08ac\u08ab\3\2\2\2\u08ac\u08ad\3\2\2\2\u08ad\u08b6\3\2\2\2\u08ae"+
		"\u08b0\5\u0166\u00b4\2\u08af\u08b1\7\u008f\2\2\u08b0\u08af\3\2\2\2\u08b0"+
		"\u08b1\3\2\2\2\u08b1\u08b2\3\2\2\2\u08b2\u08b3\7\u0086\2\2\u08b3\u08b4"+
		"\5\u0164\u00b3\2\u08b4\u08b6\3\2\2\2\u08b5\u08aa\3\2\2\2\u08b5\u08ae\3"+
		"\2\2\2\u08b6\u0165\3\2\2\2\u08b7\u08b8\5\u0168\u00b5\2\u08b8\u08ba\7_"+
		"\2\2\u08b9\u08bb\58\35\2\u08ba\u08b9\3\2\2\2\u08ba\u08bb\3\2\2\2\u08bb"+
		"\u08bc\3\2\2\2\u08bc\u08bd\7`\2\2\u08bd\u08c2\3\2\2\2\u08be\u08bf\5\u0168"+
		"\u00b5\2\u08bf\u08c0\5\u0134\u009b\2\u08c0\u08c2\3\2\2\2\u08c1\u08b7\3"+
		"\2\2\2\u08c1\u08be\3\2\2\2\u08c2\u0167\3\2\2\2\u08c3\u08c6\5\u0156\u00ac"+
		"\2\u08c4\u08c6\7\u0090\2\2\u08c5\u08c3\3\2\2\2\u08c5\u08c4\3\2\2\2\u08c6"+
		"\u0169\3\2\2\2\u08c7\u08c8\7>\2\2\u08c8\u08c9\5\u019a\u00ce\2\u08c9\u016b"+
		"\3\2\2\2\u08ca\u08cd\7>\2\2\u08cb\u08ce\7\u0099\2\2\u08cc\u08ce\5\f\7"+
		"\2\u08cd\u08cb\3\2\2\2\u08cd\u08cc\3\2\2\2\u08ce\u08cf\3\2\2\2\u08cf\u08d6"+
		"\7\u0090\2\2\u08d0\u08d3\7>\2\2\u08d1\u08d4\7\u009c\2\2\u08d2\u08d4\5"+
		"\f\7\2\u08d3\u08d1\3\2\2\2\u08d3\u08d2\3\2\2\2\u08d4\u08d6\3\2\2\2\u08d5"+
		"\u08ca\3\2\2\2\u08d5\u08d0\3\2\2\2\u08d6\u016d\3\2\2\2\u08d7\u08d8\7N"+
		"\2\2\u08d8\u08d9\7p\2\2\u08d9\u08da\5\u0170\u00b9\2\u08da\u08db\7q\2\2"+
		"\u08db\u08dc\5\u0090I\2\u08dc\u016f\3\2\2\2\u08dd\u08de\b\u00b9\1\2\u08de"+
		"\u08df\5\u0172\u00ba\2\u08df\u08e5\3\2\2\2\u08e0\u08e1\f\3\2\2\u08e1\u08e2"+
		"\7\u0086\2\2\u08e2\u08e4\5\u0172\u00ba\2\u08e3\u08e0\3\2\2\2\u08e4\u08e7"+
		"\3\2\2\2\u08e5\u08e3\3\2\2\2\u08e5\u08e6\3\2\2\2\u08e6\u0171\3\2\2\2\u08e7"+
		"\u08e5\3\2\2\2\u08e8\u08eb\5\u0174\u00bb\2\u08e9\u08eb\5\u0126\u0094\2"+
		"\u08ea\u08e8\3\2\2\2\u08ea\u08e9\3\2\2\2\u08eb\u0173\3\2\2\2\u08ec\u08ee"+
		"\7\37\2\2\u08ed\u08ef\7\u008f\2\2\u08ee\u08ed\3\2\2\2\u08ee\u08ef\3\2"+
		"\2\2\u08ef\u08f1\3\2\2\2\u08f0\u08f2\7\u0090\2\2\u08f1\u08f0\3\2\2\2\u08f1"+
		"\u08f2\3\2\2\2\u08f2\u091d\3\2\2\2\u08f3\u08f5\7\37\2\2\u08f4\u08f6\7"+
		"\u0090\2\2\u08f5\u08f4\3\2\2\2\u08f5\u08f6\3\2\2\2\u08f6\u08f7\3\2\2\2"+
		"\u08f7\u08f8\7o\2\2\u08f8\u091d\5\u0116\u008c\2\u08f9\u08fb\7V\2\2\u08fa"+
		"\u08fc\7\u008f\2\2\u08fb\u08fa\3\2\2\2\u08fb\u08fc\3\2\2\2\u08fc\u08fe"+
		"\3\2\2\2\u08fd\u08ff\7\u0090\2\2\u08fe\u08fd\3\2\2\2\u08fe\u08ff\3\2\2"+
		"\2\u08ff\u091d\3\2\2\2\u0900\u0902\7V\2\2\u0901\u0903\7\u0090\2\2\u0902"+
		"\u0901\3\2\2\2\u0902\u0903\3\2\2\2\u0903\u0904\3\2\2\2\u0904\u0905\7o"+
		"\2\2\u0905\u091d\5\u0116\u008c\2\u0906\u0907\7N\2\2\u0907\u0908\7p\2\2"+
		"\u0908\u0909\5\u0170\u00b9\2\u0909\u090a\7q\2\2\u090a\u090c\7\37\2\2\u090b"+
		"\u090d\7\u008f\2\2\u090c\u090b\3\2\2\2\u090c\u090d\3\2\2\2\u090d\u090f"+
		"\3\2\2\2\u090e\u0910\7\u0090\2\2\u090f\u090e\3\2\2\2\u090f\u0910\3\2\2"+
		"\2\u0910\u091d\3\2\2\2\u0911\u0912\7N\2\2\u0912\u0913\7p\2\2\u0913\u0914"+
		"\5\u0170\u00b9\2\u0914\u0915\7q\2\2\u0915\u0917\7\37\2\2\u0916\u0918\7"+
		"\u0090\2\2\u0917\u0916\3\2\2\2\u0917\u0918\3\2\2\2\u0918\u0919\3\2\2\2"+
		"\u0919\u091a\7o\2\2\u091a\u091b\5\30\r\2\u091b\u091d\3\2\2\2\u091c\u08ec"+
		"\3\2\2\2\u091c\u08f3\3\2\2\2\u091c\u08f9\3\2\2\2\u091c\u0900\3\2\2\2\u091c"+
		"\u0906\3\2\2\2\u091c\u0911\3\2\2\2\u091d\u0175\3\2\2\2\u091e\u091f\5\u017a"+
		"\u00be\2\u091f\u0921\7p\2\2\u0920\u0922\5\u017c\u00bf\2\u0921\u0920\3"+
		"\2\2\2\u0921\u0922\3\2\2\2\u0922\u0923\3\2\2\2\u0923\u0924\7q\2\2\u0924"+
		"\u0177\3\2\2\2\u0925\u0935\5\u0176\u00bc\2\u0926\u0927\5\u016a\u00b6\2"+
		"\u0927\u0929\7p\2\2\u0928\u092a\5\u017c\u00bf\2\u0929\u0928\3\2\2\2\u0929"+
		"\u092a\3\2\2\2\u092a\u092b\3\2\2\2\u092b\u092c\7q\2\2\u092c\u0935\3\2"+
		"\2\2\u092d\u092e\5\u016c\u00b7\2\u092e\u0930\7p\2\2\u092f\u0931\5\u017c"+
		"\u00bf\2\u0930\u092f\3\2\2\2\u0930\u0931\3\2\2\2\u0931\u0932\3\2\2\2\u0932"+
		"\u0933\7q\2\2\u0933\u0935\3\2\2\2\u0934\u0925\3\2\2\2\u0934\u0926\3\2"+
		"\2\2\u0934\u092d\3\2\2\2\u0935\u0179\3\2\2\2\u0936\u0937\7\u0090\2\2\u0937"+
		"\u017b\3\2\2\2\u0938\u0939\b\u00bf\1\2\u0939\u093b\5\u017e\u00c0\2\u093a"+
		"\u093c\7\u008f\2\2\u093b\u093a\3\2\2\2\u093b\u093c\3\2\2\2\u093c\u0945"+
		"\3\2\2\2\u093d\u093e\f\3\2\2\u093e\u093f\7\u0086\2\2\u093f\u0941\5\u017e"+
		"\u00c0\2\u0940\u0942\7\u008f\2\2\u0941\u0940\3\2\2\2\u0941\u0942\3\2\2"+
		"\2\u0942\u0944\3\2\2\2\u0943\u093d\3\2\2\2\u0944\u0947\3\2\2\2\u0945\u0943"+
		"\3\2\2\2\u0945\u0946\3\2\2\2\u0946\u017d\3\2\2\2\u0947\u0945\3\2\2\2\u0948"+
		"\u094c\5\u0116\u008c\2\u0949\u094c\5r:\2\u094a\u094c\5\30\r\2\u094b\u0948"+
		"\3\2\2\2\u094b\u0949\3\2\2\2\u094b\u094a\3\2\2\2\u094c\u017f\3\2\2\2\u094d"+
		"\u094e\7V\2\2\u094e\u094f\5\36\20\2\u094f\u0950\7\u0090\2\2\u0950\u0959"+
		"\3\2\2\2\u0951\u0952\7V\2\2\u0952\u0954\5\36\20\2\u0953\u0955\7N\2\2\u0954"+
		"\u0953\3\2\2\2\u0954\u0955\3\2\2\2\u0955\u0956\3\2\2\2\u0956\u0957\5\u0176"+
		"\u00bc\2\u0957\u0959\3\2\2\2\u0958\u094d\3\2\2\2\u0958\u0951\3\2\2\2\u0959"+
		"\u0181\3\2\2\2\u095a\u095c\7.\2\2\u095b\u095a\3\2\2\2\u095b\u095c\3\2"+
		"\2\2\u095c\u095d\3\2\2\2\u095d\u095e\7N\2\2\u095e\u095f\5\u0090I\2\u095f"+
		"\u0183\3\2\2\2\u0960\u0961\7N\2\2\u0961\u0962\7p\2\2\u0962\u0963\7q\2"+
		"\2\u0963\u0964\5\u0090I\2\u0964\u0185\3\2\2\2\u0965\u0966\7S\2\2\u0966"+
		"\u0967\5z>\2\u0967\u0968\5\u018a\u00c6\2\u0968\u0187\3\2\2\2\u0969\u096b"+
		"\7S\2\2\u096a\u096c\5\u0162\u00b2\2\u096b\u096a\3\2\2\2\u096b\u096c\3"+
		"\2\2\2\u096c\u096d\3\2\2\2\u096d\u096e\5z>\2\u096e\u096f\5\u018a\u00c6"+
		"\2\u096f\u0189\3\2\2\2\u0970\u0972\5\u018c\u00c7\2\u0971\u0973\5\u018a"+
		"\u00c6\2\u0972\u0971\3\2\2\2\u0972\u0973\3\2\2\2\u0973\u018b\3\2\2\2\u0974"+
		"\u0975\7\33\2\2\u0975\u0976\7_\2\2\u0976\u0977\5\u018e\u00c8\2\u0977\u0978"+
		"\7`\2\2\u0978\u0979\5z>\2\u0979\u018d\3\2\2\2\u097a\u097c\5\u00e8u\2\u097b"+
		"\u097a\3\2\2\2\u097b\u097c\3\2\2\2\u097c\u097d\3\2\2\2\u097d\u097e\5\u00ac"+
		"W\2\u097e\u097f\5\u0102\u0082\2\u097f\u0989\3\2\2\2\u0980\u0982\5\u00e8"+
		"u\2\u0981\u0980\3\2\2\2\u0981\u0982\3\2\2\2\u0982\u0983\3\2\2\2\u0983"+
		"\u0985\5\u00acW\2\u0984\u0986\5\u0118\u008d\2\u0985\u0984\3\2\2\2\u0985"+
		"\u0986\3\2\2\2\u0986\u0989\3\2\2\2\u0987\u0989\7\u008f\2\2\u0988\u097b"+
		"\3\2\2\2\u0988\u0981\3\2\2\2\u0988\u0987\3\2\2\2\u0989\u018f\3\2\2\2\u098a"+
		"\u098c\7Q\2\2\u098b\u098d\5l\67\2\u098c\u098b\3\2\2\2\u098c\u098d\3\2"+
		"\2\2\u098d\u0191\3\2\2\2\u098e\u0991\5\u0194\u00cb\2\u098f\u0991\5\u0198";
	private static final String _serializedATNSegment1 =
		"\u00cd\2\u0990\u098e\3\2\2\2\u0990\u098f\3\2\2\2\u0991\u0193\3\2\2\2\u0992"+
		"\u0993\7Q\2\2\u0993\u0995\7_\2\2\u0994\u0996\5\u0196\u00cc\2\u0995\u0994"+
		"\3\2\2\2\u0995\u0996\3\2\2\2\u0996\u0997\3\2\2\2\u0997\u0998\7`\2\2\u0998"+
		"\u0195\3\2\2\2\u0999\u099a\b\u00cc\1\2\u099a\u099c\5\u0116\u008c\2\u099b"+
		"\u099d\7\u008f\2\2\u099c\u099b\3\2\2\2\u099c\u099d\3\2\2\2\u099d\u09a6"+
		"\3\2\2\2\u099e\u099f\f\3\2\2\u099f\u09a0\7\u0086\2\2\u09a0\u09a2\5\u0116"+
		"\u008c\2\u09a1\u09a3\7\u008f\2\2\u09a2\u09a1\3\2\2\2\u09a2\u09a3\3\2\2"+
		"\2\u09a3\u09a5\3\2\2\2\u09a4\u099e\3\2\2\2\u09a5\u09a8\3\2\2\2\u09a6\u09a4"+
		"\3\2\2\2\u09a6\u09a7\3\2\2\2\u09a7\u0197\3\2\2\2\u09a8\u09a6\3\2\2\2\u09a9"+
		"\u09aa\7<\2\2\u09aa\u09ab\7_\2\2\u09ab\u09ac\5r:\2\u09ac\u09ad\7`\2\2"+
		"\u09ad\u09b0\3\2\2\2\u09ae\u09b0\7<\2\2\u09af\u09a9\3\2\2\2\u09af\u09ae"+
		"\3\2\2\2\u09b0\u0199\3\2\2\2\u09b1\u09e5\7;\2\2\u09b2\u09e5\7&\2\2\u09b3"+
		"\u09b4\7;\2\2\u09b4\u09b5\7a\2\2\u09b5\u09e5\7b\2\2\u09b6\u09b7\7&\2\2"+
		"\u09b7\u09b8\7a\2\2\u09b8\u09e5\7b\2\2\u09b9\u09e5\7e\2\2\u09ba\u09e5"+
		"\7f\2\2\u09bb\u09e5\7g\2\2\u09bc\u09e5\7h\2\2\u09bd\u09e5\7i\2\2\u09be"+
		"\u09e5\7j\2\2\u09bf\u09e5\7k\2\2\u09c0\u09e5\7l\2\2\u09c1\u09e5\7m\2\2"+
		"\u09c2\u09e5\7\13\2\2\u09c3\u09e5\7\f\2\2\u09c4\u09e5\7o\2\2\u09c5\u09e5"+
		"\7p\2\2\u09c6\u09e5\7q\2\2\u09c7\u09e5\7r\2\2\u09c8\u09e5\7s\2\2\u09c9"+
		"\u09e5\7t\2\2\u09ca\u09e5\7u\2\2\u09cb\u09e5\7v\2\2\u09cc\u09e5\7w\2\2"+
		"\u09cd\u09e5\7x\2\2\u09ce\u09e5\7y\2\2\u09cf\u09e5\7z\2\2\u09d0\u09e5"+
		"\7{\2\2\u09d1\u09e5\7}\2\2\u09d2\u09e5\7|\2\2\u09d3\u09e5\7~\2\2\u09d4"+
		"\u09e5\7\177\2\2\u09d5\u09e5\7\u0080\2\2\u09d6\u09e5\7\u0081\2\2\u09d7"+
		"\u09e5\7\r\2\2\u09d8\u09e5\7\16\2\2\u09d9\u09e5\7\17\2\2\u09da\u09e5\7"+
		"\20\2\2\u09db\u09e5\7\u0084\2\2\u09dc\u09e5\7\u0085\2\2\u09dd\u09e5\7"+
		"\u0086\2\2\u09de\u09e5\7\u0087\2\2\u09df\u09e5\7\u0088\2\2\u09e0\u09e1"+
		"\7_\2\2\u09e1\u09e5\7`\2\2\u09e2\u09e3\7a\2\2\u09e3\u09e5\7b\2\2\u09e4"+
		"\u09b1\3\2\2\2\u09e4\u09b2\3\2\2\2\u09e4\u09b3\3\2\2\2\u09e4\u09b6\3\2"+
		"\2\2\u09e4\u09b9\3\2\2\2\u09e4\u09ba\3\2\2\2\u09e4\u09bb\3\2\2\2\u09e4"+
		"\u09bc\3\2\2\2\u09e4\u09bd\3\2\2\2\u09e4\u09be\3\2\2\2\u09e4\u09bf\3\2"+
		"\2\2\u09e4\u09c0\3\2\2\2\u09e4\u09c1\3\2\2\2\u09e4\u09c2\3\2\2\2\u09e4"+
		"\u09c3\3\2\2\2\u09e4\u09c4\3\2\2\2\u09e4\u09c5\3\2\2\2\u09e4\u09c6\3\2"+
		"\2\2\u09e4\u09c7\3\2\2\2\u09e4\u09c8\3\2\2\2\u09e4\u09c9\3\2\2\2\u09e4"+
		"\u09ca\3\2\2\2\u09e4\u09cb\3\2\2\2\u09e4\u09cc\3\2\2\2\u09e4\u09cd\3\2"+
		"\2\2\u09e4\u09ce\3\2\2\2\u09e4\u09cf\3\2\2\2\u09e4\u09d0\3\2\2\2\u09e4"+
		"\u09d1\3\2\2\2\u09e4\u09d2\3\2\2\2\u09e4\u09d3\3\2\2\2\u09e4\u09d4\3\2"+
		"\2\2\u09e4\u09d5\3\2\2\2\u09e4\u09d6\3\2\2\2\u09e4\u09d7\3\2\2\2\u09e4"+
		"\u09d8\3\2\2\2\u09e4\u09d9\3\2\2\2\u09e4\u09da\3\2\2\2\u09e4\u09db\3\2"+
		"\2\2\u09e4\u09dc\3\2\2\2\u09e4\u09dd\3\2\2\2\u09e4\u09de\3\2\2\2\u09e4"+
		"\u09df\3\2\2\2\u09e4\u09e0\3\2\2\2\u09e4\u09e2\3\2\2\2\u09e5\u019b\3\2"+
		"\2\2\u09e6\u09ef\7\u0091\2\2\u09e7\u09ef\7\u0097\2\2\u09e8\u09ef\7\u0098"+
		"\2\2\u09e9\u09ef\7\u0099\2\2\u09ea\u09ef\5\u019e\u00d0\2\u09eb\u09ef\5"+
		"\u01a0\u00d1\2\u09ec\u09ef\5\u01a2\u00d2\2\u09ed\u09ef\5\f\7\2\u09ee\u09e6"+
		"\3\2\2\2\u09ee\u09e7\3\2\2\2\u09ee\u09e8\3\2\2\2\u09ee\u09e9\3\2\2\2\u09ee"+
		"\u09ea\3\2\2\2\u09ee\u09eb\3\2\2\2\u09ee\u09ec\3\2\2\2\u09ee\u09ed\3\2"+
		"\2\2\u09ef\u019d\3\2\2\2\u09f0\u09f1\t\r\2\2\u09f1\u019f\3\2\2\2\u09f2"+
		"\u09f3\7=\2\2\u09f3\u01a1\3\2\2\2\u09f4\u09fa\7\u009a\2\2\u09f5\u09fa"+
		"\7\u009b\2\2\u09f6\u09fa\7\u009c\2\2\u09f7\u09fa\7\u009d\2\2\u09f8\u09fa"+
		"\5\f\7\2\u09f9\u09f4\3\2\2\2\u09f9\u09f5\3\2\2\2\u09f9\u09f6\3\2\2\2\u09f9"+
		"\u09f7\3\2\2\2\u09f9\u09f8\3\2\2\2\u09fa\u01a3\3\2\2\2\u0146\u01a5\u01b6"+
		"\u01b9\u01cc\u01db\u01e5\u01e9\u01f4\u01f8\u0207\u020e\u0213\u0215\u021a"+
		"\u0220\u022a\u0231\u0237\u023b\u0240\u0246\u024d\u0253\u0256\u0259\u025c"+
		"\u0263\u026a\u029e\u02ad\u02b3\u02b9\u02c6\u02c8\u02d2\u02e1\u02e7\u0305"+
		"\u030a\u030e\u0312\u0315\u0319\u031f\u0321\u0329\u032d\u0330\u0337\u033e"+
		"\u0342\u0347\u034b\u034e\u0353\u0359\u0366\u0371\u0373\u0382\u0384\u0390"+
		"\u0392\u039e\u03b2\u03b4\u03c0\u03c2\u03cd\u03d8\u03e3\u03ef\u03f1\u03fd"+
		"\u03ff\u0409\u0411\u041d\u0424\u0428\u042c\u0430\u0434\u0439\u043c\u043f"+
		"\u0445\u044d\u0452\u0455\u045b\u0465\u046b\u0482\u0486\u048e\u0494\u04a8"+
		"\u04ac\u04b9\u04bd\u04c0\u04c7\u04cf\u04d9\u04e4\u04f0\u04fa\u04ff\u0506"+
		"\u0509\u050e\u0513\u051b\u052b\u052f\u0534\u053f\u0545\u0549\u054e\u0552"+
		"\u0557\u055a\u0570\u0576\u0581\u0585\u0588\u0592\u0598\u059b\u05a2\u05ac"+
		"\u05b0\u05b3\u05b6\u05ba\u05bf\u05c1\u05c5\u05c9\u05d2\u05df\u05e7\u05ed"+
		"\u05f3\u05f7\u05fa\u0603\u060c\u0614\u061f\u0625\u0630\u0633\u0638\u0647"+
		"\u064d\u0656\u0660\u0666\u066e\u0672\u0676\u067b\u0680\u0687\u0689\u068e"+
		"\u0692\u06a0\u06a6\u06b5\u06bf\u06c4\u06cb\u06d1\u06d6\u06dc\u06e3\u06e7"+
		"\u06e9\u06eb\u06f2\u06f5\u06f8\u06fb\u0700\u0704\u0707\u070b\u070f\u0714"+
		"\u0717\u0719\u071d\u0724\u072a\u072e\u0734\u0739\u073b\u0741\u0745\u074b"+
		"\u0752\u0756\u0758\u075a\u0761\u076b\u076f\u0771\u0773\u0777\u077a\u0780"+
		"\u078a\u078e\u0794\u079c\u07a0\u07a3\u07a7\u07ac\u07af\u07b2\u07b6\u07bb"+
		"\u07c5\u07cc\u07d1\u07d5\u07da\u07e0\u07e4\u07ea\u07f0\u07f4\u07f9\u07ff"+
		"\u0803\u0806\u080a\u080d\u080f\u0812\u081c\u0821\u0823\u0826\u0829\u082c"+
		"\u0835\u083f\u0844\u0847\u084b\u084e\u0851\u0855\u085e\u086d\u0873\u0877"+
		"\u087b\u087f\u0883\u0887\u088b\u088f\u0892\u0896\u08a1\u08a5\u08ac\u08b0"+
		"\u08b5\u08ba\u08c1\u08c5\u08cd\u08d3\u08d5\u08e5\u08ea\u08ee\u08f1\u08f5"+
		"\u08fb\u08fe\u0902\u090c\u090f\u0917\u091c\u0921\u0929\u0930\u0934\u093b"+
		"\u0941\u0945\u094b\u0954\u0958\u095b\u096b\u0972\u097b\u0981\u0985\u0988"+
		"\u098c\u0990\u0995\u099c\u09a2\u09a6\u09af\u09e4\u09ee\u09f9";
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