
// Generated from AergiaCpp14.g4 by ANTLR 4.7.2

#pragma once


#include "../antlr/src/antlr4-runtime.h"
#include "AergiaCpp14Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by AergiaCpp14Parser.
 */
class  AergiaCpp14Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by AergiaCpp14Parser.
   */
    virtual antlrcpp::Any visitTranslationunit(AergiaCpp14Parser::TranslationunitContext *context) = 0;

    virtual antlrcpp::Any visitAergiaexpressionbegin(AergiaCpp14Parser::AergiaexpressionbeginContext *context) = 0;

    virtual antlrcpp::Any visitAergiaexpressionend(AergiaCpp14Parser::AergiaexpressionendContext *context) = 0;

    virtual antlrcpp::Any visitAergiaBlock(AergiaCpp14Parser::AergiaBlockContext *context) = 0;

    virtual antlrcpp::Any visitAergiaexpression(AergiaCpp14Parser::AergiaexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAnonymousExpression(AergiaCpp14Parser::AnonymousExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAnoynmousBody(AergiaCpp14Parser::AnoynmousBodyContext *context) = 0;

    virtual antlrcpp::Any visitForeach(AergiaCpp14Parser::ForeachContext *context) = 0;

    virtual antlrcpp::Any visitForeachheader(AergiaCpp14Parser::ForeachheaderContext *context) = 0;

    virtual antlrcpp::Any visitForeachbody(AergiaCpp14Parser::ForeachbodyContext *context) = 0;

    virtual antlrcpp::Any visitCallchain(AergiaCpp14Parser::CallchainContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryexpression(AergiaCpp14Parser::PrimaryexpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdexpression(AergiaCpp14Parser::IdexpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnqualifiedid(AergiaCpp14Parser::UnqualifiedidContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedid(AergiaCpp14Parser::QualifiedidContext *context) = 0;

    virtual antlrcpp::Any visitNestednamespecifier(AergiaCpp14Parser::NestednamespecifierContext *context) = 0;

    virtual antlrcpp::Any visitLambdaexpression(AergiaCpp14Parser::LambdaexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLambdaintroducer(AergiaCpp14Parser::LambdaintroducerContext *context) = 0;

    virtual antlrcpp::Any visitLambdacapture(AergiaCpp14Parser::LambdacaptureContext *context) = 0;

    virtual antlrcpp::Any visitCapturedefault(AergiaCpp14Parser::CapturedefaultContext *context) = 0;

    virtual antlrcpp::Any visitCapturelist(AergiaCpp14Parser::CapturelistContext *context) = 0;

    virtual antlrcpp::Any visitCapture(AergiaCpp14Parser::CaptureContext *context) = 0;

    virtual antlrcpp::Any visitSimplecapture(AergiaCpp14Parser::SimplecaptureContext *context) = 0;

    virtual antlrcpp::Any visitInitcapture(AergiaCpp14Parser::InitcaptureContext *context) = 0;

    virtual antlrcpp::Any visitLambdadeclarator(AergiaCpp14Parser::LambdadeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPostfixexpression(AergiaCpp14Parser::PostfixexpressionContext *context) = 0;

    virtual antlrcpp::Any visitTypeidofexpr(AergiaCpp14Parser::TypeidofexprContext *context) = 0;

    virtual antlrcpp::Any visitTypeidofthetypeid(AergiaCpp14Parser::TypeidofthetypeidContext *context) = 0;

    virtual antlrcpp::Any visitExpressionlist(AergiaCpp14Parser::ExpressionlistContext *context) = 0;

    virtual antlrcpp::Any visitPseudodestructorname(AergiaCpp14Parser::PseudodestructornameContext *context) = 0;

    virtual antlrcpp::Any visitUnaryexpression(AergiaCpp14Parser::UnaryexpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryoperator(AergiaCpp14Parser::UnaryoperatorContext *context) = 0;

    virtual antlrcpp::Any visitNewexpression(AergiaCpp14Parser::NewexpressionContext *context) = 0;

    virtual antlrcpp::Any visitNewplacement(AergiaCpp14Parser::NewplacementContext *context) = 0;

    virtual antlrcpp::Any visitNewtypeid(AergiaCpp14Parser::NewtypeidContext *context) = 0;

    virtual antlrcpp::Any visitNewdeclarator(AergiaCpp14Parser::NewdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrnewdeclarator(AergiaCpp14Parser::NoptrnewdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNewinitializer(AergiaCpp14Parser::NewinitializerContext *context) = 0;

    virtual antlrcpp::Any visitDeleteexpression(AergiaCpp14Parser::DeleteexpressionContext *context) = 0;

    virtual antlrcpp::Any visitNoexceptexpression(AergiaCpp14Parser::NoexceptexpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastexpression(AergiaCpp14Parser::CastexpressionContext *context) = 0;

    virtual antlrcpp::Any visitPmexpression(AergiaCpp14Parser::PmexpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeexpression(AergiaCpp14Parser::MultiplicativeexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveexpression(AergiaCpp14Parser::AdditiveexpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftexpression(AergiaCpp14Parser::ShiftexpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftoperator(AergiaCpp14Parser::ShiftoperatorContext *context) = 0;

    virtual antlrcpp::Any visitRelationalexpression(AergiaCpp14Parser::RelationalexpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityexpression(AergiaCpp14Parser::EqualityexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndexpression(AergiaCpp14Parser::AndexpressionContext *context) = 0;

    virtual antlrcpp::Any visitExclusiveorexpression(AergiaCpp14Parser::ExclusiveorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitInclusiveorexpression(AergiaCpp14Parser::InclusiveorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalandexpression(AergiaCpp14Parser::LogicalandexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalorexpression(AergiaCpp14Parser::LogicalorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalexpression(AergiaCpp14Parser::ConditionalexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentexpression(AergiaCpp14Parser::AssignmentexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentoperator(AergiaCpp14Parser::AssignmentoperatorContext *context) = 0;

    virtual antlrcpp::Any visitExpression(AergiaCpp14Parser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConstantexpression(AergiaCpp14Parser::ConstantexpressionContext *context) = 0;

    virtual antlrcpp::Any visitStatement(AergiaCpp14Parser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitLabeledstatement(AergiaCpp14Parser::LabeledstatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressionstatement(AergiaCpp14Parser::ExpressionstatementContext *context) = 0;

    virtual antlrcpp::Any visitCompoundstatement(AergiaCpp14Parser::CompoundstatementContext *context) = 0;

    virtual antlrcpp::Any visitStatementseq(AergiaCpp14Parser::StatementseqContext *context) = 0;

    virtual antlrcpp::Any visitSelectionstatement(AergiaCpp14Parser::SelectionstatementContext *context) = 0;

    virtual antlrcpp::Any visitCondition(AergiaCpp14Parser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitIterationstatement(AergiaCpp14Parser::IterationstatementContext *context) = 0;

    virtual antlrcpp::Any visitForinitstatement(AergiaCpp14Parser::ForinitstatementContext *context) = 0;

    virtual antlrcpp::Any visitForrangedeclaration(AergiaCpp14Parser::ForrangedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitForrangeinitializer(AergiaCpp14Parser::ForrangeinitializerContext *context) = 0;

    virtual antlrcpp::Any visitJumpstatement(AergiaCpp14Parser::JumpstatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationstatement(AergiaCpp14Parser::DeclarationstatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationseq(AergiaCpp14Parser::DeclarationseqContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(AergiaCpp14Parser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitBlockdeclaration(AergiaCpp14Parser::BlockdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAliasdeclaration(AergiaCpp14Parser::AliasdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSimpledeclaration(AergiaCpp14Parser::SimpledeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatic_assertdeclaration(AergiaCpp14Parser::Static_assertdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEmptydeclaration(AergiaCpp14Parser::EmptydeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAttributedeclaration(AergiaCpp14Parser::AttributedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclspecifier(AergiaCpp14Parser::DeclspecifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclspecifierseq(AergiaCpp14Parser::DeclspecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitStorageclassspecifier(AergiaCpp14Parser::StorageclassspecifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionspecifier(AergiaCpp14Parser::FunctionspecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypedefname(AergiaCpp14Parser::TypedefnameContext *context) = 0;

    virtual antlrcpp::Any visitTypespecifier(AergiaCpp14Parser::TypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitTrailingtypespecifier(AergiaCpp14Parser::TrailingtypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypespecifierseq(AergiaCpp14Parser::TypespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitTrailingtypespecifierseq(AergiaCpp14Parser::TrailingtypespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitSimpletypespecifier(AergiaCpp14Parser::SimpletypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitThetypename(AergiaCpp14Parser::ThetypenameContext *context) = 0;

    virtual antlrcpp::Any visitDecltypespecifier(AergiaCpp14Parser::DecltypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitElaboratedtypespecifier(AergiaCpp14Parser::ElaboratedtypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumname(AergiaCpp14Parser::EnumnameContext *context) = 0;

    virtual antlrcpp::Any visitEnumspecifier(AergiaCpp14Parser::EnumspecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumhead(AergiaCpp14Parser::EnumheadContext *context) = 0;

    virtual antlrcpp::Any visitOpaqueenumdeclaration(AergiaCpp14Parser::OpaqueenumdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEnumkey(AergiaCpp14Parser::EnumkeyContext *context) = 0;

    virtual antlrcpp::Any visitEnumbase(AergiaCpp14Parser::EnumbaseContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratorlist(AergiaCpp14Parser::EnumeratorlistContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratordefinition(AergiaCpp14Parser::EnumeratordefinitionContext *context) = 0;

    virtual antlrcpp::Any visitEnumerator(AergiaCpp14Parser::EnumeratorContext *context) = 0;

    virtual antlrcpp::Any visitNamespacename(AergiaCpp14Parser::NamespacenameContext *context) = 0;

    virtual antlrcpp::Any visitOriginalnamespacename(AergiaCpp14Parser::OriginalnamespacenameContext *context) = 0;

    virtual antlrcpp::Any visitNamespacedefinition(AergiaCpp14Parser::NamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNamednamespacedefinition(AergiaCpp14Parser::NamednamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitOriginalnamespacedefinition(AergiaCpp14Parser::OriginalnamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitUnnamednamespacedefinition(AergiaCpp14Parser::UnnamednamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNamespacebody(AergiaCpp14Parser::NamespacebodyContext *context) = 0;

    virtual antlrcpp::Any visitNamespacealias(AergiaCpp14Parser::NamespacealiasContext *context) = 0;

    virtual antlrcpp::Any visitNamespacealiasdefinition(AergiaCpp14Parser::NamespacealiasdefinitionContext *context) = 0;

    virtual antlrcpp::Any visitQualifiednamespacespecifier(AergiaCpp14Parser::QualifiednamespacespecifierContext *context) = 0;

    virtual antlrcpp::Any visitUsingdeclaration(AergiaCpp14Parser::UsingdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUsingdirective(AergiaCpp14Parser::UsingdirectiveContext *context) = 0;

    virtual antlrcpp::Any visitAsmdefinition(AergiaCpp14Parser::AsmdefinitionContext *context) = 0;

    virtual antlrcpp::Any visitLinkagespecification(AergiaCpp14Parser::LinkagespecificationContext *context) = 0;

    virtual antlrcpp::Any visitAttributespecifierseq(AergiaCpp14Parser::AttributespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitAttributespecifier(AergiaCpp14Parser::AttributespecifierContext *context) = 0;

    virtual antlrcpp::Any visitAlignmentspecifier(AergiaCpp14Parser::AlignmentspecifierContext *context) = 0;

    virtual antlrcpp::Any visitAttributelist(AergiaCpp14Parser::AttributelistContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(AergiaCpp14Parser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitAttributetoken(AergiaCpp14Parser::AttributetokenContext *context) = 0;

    virtual antlrcpp::Any visitAttributescopedtoken(AergiaCpp14Parser::AttributescopedtokenContext *context) = 0;

    virtual antlrcpp::Any visitAttributenamespace(AergiaCpp14Parser::AttributenamespaceContext *context) = 0;

    virtual antlrcpp::Any visitAttributeargumentclause(AergiaCpp14Parser::AttributeargumentclauseContext *context) = 0;

    virtual antlrcpp::Any visitBalancedtokenseq(AergiaCpp14Parser::BalancedtokenseqContext *context) = 0;

    virtual antlrcpp::Any visitBalancedtoken(AergiaCpp14Parser::BalancedtokenContext *context) = 0;

    virtual antlrcpp::Any visitInitdeclaratorlist(AergiaCpp14Parser::InitdeclaratorlistContext *context) = 0;

    virtual antlrcpp::Any visitInitdeclarator(AergiaCpp14Parser::InitdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDeclarator(AergiaCpp14Parser::DeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPtrdeclarator(AergiaCpp14Parser::PtrdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrdeclarator(AergiaCpp14Parser::NoptrdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitParametersandqualifiers(AergiaCpp14Parser::ParametersandqualifiersContext *context) = 0;

    virtual antlrcpp::Any visitTrailingreturntype(AergiaCpp14Parser::TrailingreturntypeContext *context) = 0;

    virtual antlrcpp::Any visitPtroperator(AergiaCpp14Parser::PtroperatorContext *context) = 0;

    virtual antlrcpp::Any visitCvqualifierseq(AergiaCpp14Parser::CvqualifierseqContext *context) = 0;

    virtual antlrcpp::Any visitCvqualifier(AergiaCpp14Parser::CvqualifierContext *context) = 0;

    virtual antlrcpp::Any visitRefqualifier(AergiaCpp14Parser::RefqualifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclaratorid(AergiaCpp14Parser::DeclaratoridContext *context) = 0;

    virtual antlrcpp::Any visitThetypeid(AergiaCpp14Parser::ThetypeidContext *context) = 0;

    virtual antlrcpp::Any visitAbstractdeclarator(AergiaCpp14Parser::AbstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPtrabstractdeclarator(AergiaCpp14Parser::PtrabstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrabstractdeclarator(AergiaCpp14Parser::NoptrabstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitAbstractpackdeclarator(AergiaCpp14Parser::AbstractpackdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrabstractpackdeclarator(AergiaCpp14Parser::NoptrabstractpackdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclarationclause(AergiaCpp14Parser::ParameterdeclarationclauseContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclarationlist(AergiaCpp14Parser::ParameterdeclarationlistContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclaration(AergiaCpp14Parser::ParameterdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctiondefinition(AergiaCpp14Parser::FunctiondefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionbody(AergiaCpp14Parser::FunctionbodyContext *context) = 0;

    virtual antlrcpp::Any visitInitializer(AergiaCpp14Parser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitBraceorequalinitializer(AergiaCpp14Parser::BraceorequalinitializerContext *context) = 0;

    virtual antlrcpp::Any visitInitializerclause(AergiaCpp14Parser::InitializerclauseContext *context) = 0;

    virtual antlrcpp::Any visitInitializerlist(AergiaCpp14Parser::InitializerlistContext *context) = 0;

    virtual antlrcpp::Any visitBracedinitlist(AergiaCpp14Parser::BracedinitlistContext *context) = 0;

    virtual antlrcpp::Any visitClassname(AergiaCpp14Parser::ClassnameContext *context) = 0;

    virtual antlrcpp::Any visitClassspecifier(AergiaCpp14Parser::ClassspecifierContext *context) = 0;

    virtual antlrcpp::Any visitClasshead(AergiaCpp14Parser::ClassheadContext *context) = 0;

    virtual antlrcpp::Any visitClassheadname(AergiaCpp14Parser::ClassheadnameContext *context) = 0;

    virtual antlrcpp::Any visitClassvirtspecifier(AergiaCpp14Parser::ClassvirtspecifierContext *context) = 0;

    virtual antlrcpp::Any visitClasskey(AergiaCpp14Parser::ClasskeyContext *context) = 0;

    virtual antlrcpp::Any visitMemberspecification(AergiaCpp14Parser::MemberspecificationContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclaration(AergiaCpp14Parser::MemberdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclaratorlist(AergiaCpp14Parser::MemberdeclaratorlistContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclarator(AergiaCpp14Parser::MemberdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitMemberFunctionDeclaration(AergiaCpp14Parser::MemberFunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVirtspecifierseq(AergiaCpp14Parser::VirtspecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitVirtspecifier(AergiaCpp14Parser::VirtspecifierContext *context) = 0;

    virtual antlrcpp::Any visitPurespecifier(AergiaCpp14Parser::PurespecifierContext *context) = 0;

    virtual antlrcpp::Any visitBaseclause(AergiaCpp14Parser::BaseclauseContext *context) = 0;

    virtual antlrcpp::Any visitBasespecifierlist(AergiaCpp14Parser::BasespecifierlistContext *context) = 0;

    virtual antlrcpp::Any visitBasespecifier(AergiaCpp14Parser::BasespecifierContext *context) = 0;

    virtual antlrcpp::Any visitClassordecltype(AergiaCpp14Parser::ClassordecltypeContext *context) = 0;

    virtual antlrcpp::Any visitBasetypespecifier(AergiaCpp14Parser::BasetypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitAccessspecifier(AergiaCpp14Parser::AccessspecifierContext *context) = 0;

    virtual antlrcpp::Any visitConversionfunctionid(AergiaCpp14Parser::ConversionfunctionidContext *context) = 0;

    virtual antlrcpp::Any visitConversiontypeid(AergiaCpp14Parser::ConversiontypeidContext *context) = 0;

    virtual antlrcpp::Any visitConversiondeclarator(AergiaCpp14Parser::ConversiondeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitCtorinitializer(AergiaCpp14Parser::CtorinitializerContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializerlist(AergiaCpp14Parser::MeminitializerlistContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializer(AergiaCpp14Parser::MeminitializerContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializerid(AergiaCpp14Parser::MeminitializeridContext *context) = 0;

    virtual antlrcpp::Any visitOperatorfunctionid(AergiaCpp14Parser::OperatorfunctionidContext *context) = 0;

    virtual antlrcpp::Any visitLiteraloperatorid(AergiaCpp14Parser::LiteraloperatoridContext *context) = 0;

    virtual antlrcpp::Any visitTemplatedeclaration(AergiaCpp14Parser::TemplatedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTemplateparameterlist(AergiaCpp14Parser::TemplateparameterlistContext *context) = 0;

    virtual antlrcpp::Any visitTemplateparameter(AergiaCpp14Parser::TemplateparameterContext *context) = 0;

    virtual antlrcpp::Any visitTypeparameter(AergiaCpp14Parser::TypeparameterContext *context) = 0;

    virtual antlrcpp::Any visitSimpletemplateid(AergiaCpp14Parser::SimpletemplateidContext *context) = 0;

    virtual antlrcpp::Any visitTemplateid(AergiaCpp14Parser::TemplateidContext *context) = 0;

    virtual antlrcpp::Any visitTemplatename(AergiaCpp14Parser::TemplatenameContext *context) = 0;

    virtual antlrcpp::Any visitTemplateargumentlist(AergiaCpp14Parser::TemplateargumentlistContext *context) = 0;

    virtual antlrcpp::Any visitTemplateargument(AergiaCpp14Parser::TemplateargumentContext *context) = 0;

    virtual antlrcpp::Any visitTypenamespecifier(AergiaCpp14Parser::TypenamespecifierContext *context) = 0;

    virtual antlrcpp::Any visitExplicitinstantiation(AergiaCpp14Parser::ExplicitinstantiationContext *context) = 0;

    virtual antlrcpp::Any visitExplicitspecialization(AergiaCpp14Parser::ExplicitspecializationContext *context) = 0;

    virtual antlrcpp::Any visitTryblock(AergiaCpp14Parser::TryblockContext *context) = 0;

    virtual antlrcpp::Any visitFunctiontryblock(AergiaCpp14Parser::FunctiontryblockContext *context) = 0;

    virtual antlrcpp::Any visitHandlerseq(AergiaCpp14Parser::HandlerseqContext *context) = 0;

    virtual antlrcpp::Any visitHandler(AergiaCpp14Parser::HandlerContext *context) = 0;

    virtual antlrcpp::Any visitExceptiondeclaration(AergiaCpp14Parser::ExceptiondeclarationContext *context) = 0;

    virtual antlrcpp::Any visitThrowexpression(AergiaCpp14Parser::ThrowexpressionContext *context) = 0;

    virtual antlrcpp::Any visitExceptionspecification(AergiaCpp14Parser::ExceptionspecificationContext *context) = 0;

    virtual antlrcpp::Any visitDynamicexceptionspecification(AergiaCpp14Parser::DynamicexceptionspecificationContext *context) = 0;

    virtual antlrcpp::Any visitTypeidlist(AergiaCpp14Parser::TypeidlistContext *context) = 0;

    virtual antlrcpp::Any visitNoexceptspecification(AergiaCpp14Parser::NoexceptspecificationContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorDirective(AergiaCpp14Parser::PreprocessorDirectiveContext *context) = 0;

    virtual antlrcpp::Any visitTheoperator(AergiaCpp14Parser::TheoperatorContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(AergiaCpp14Parser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanliteral(AergiaCpp14Parser::BooleanliteralContext *context) = 0;

    virtual antlrcpp::Any visitPointerliteral(AergiaCpp14Parser::PointerliteralContext *context) = 0;

    virtual antlrcpp::Any visitUserdefinedliteral(AergiaCpp14Parser::UserdefinedliteralContext *context) = 0;


};

