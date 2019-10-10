
// Generated from AergiaCpp14.g4 by ANTLR 4.7.2

#pragma once


#include "../antlr/src/antlr4-runtime.h"
#include "AergiaCpp14Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by AergiaCpp14Parser.
 */
class  AergiaCpp14Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTranslationunit(AergiaCpp14Parser::TranslationunitContext *ctx) = 0;
  virtual void exitTranslationunit(AergiaCpp14Parser::TranslationunitContext *ctx) = 0;

  virtual void enterAergiaexpressionbegin(AergiaCpp14Parser::AergiaexpressionbeginContext *ctx) = 0;
  virtual void exitAergiaexpressionbegin(AergiaCpp14Parser::AergiaexpressionbeginContext *ctx) = 0;

  virtual void enterAergiaexpressionend(AergiaCpp14Parser::AergiaexpressionendContext *ctx) = 0;
  virtual void exitAergiaexpressionend(AergiaCpp14Parser::AergiaexpressionendContext *ctx) = 0;

  virtual void enterAergiaBlock(AergiaCpp14Parser::AergiaBlockContext *ctx) = 0;
  virtual void exitAergiaBlock(AergiaCpp14Parser::AergiaBlockContext *ctx) = 0;

  virtual void enterAergiaexpression(AergiaCpp14Parser::AergiaexpressionContext *ctx) = 0;
  virtual void exitAergiaexpression(AergiaCpp14Parser::AergiaexpressionContext *ctx) = 0;

  virtual void enterAergiaExpression_type_target(AergiaCpp14Parser::AergiaExpression_type_targetContext *ctx) = 0;
  virtual void exitAergiaExpression_type_target(AergiaCpp14Parser::AergiaExpression_type_targetContext *ctx) = 0;

  virtual void enterAergiaExpression_value_target(AergiaCpp14Parser::AergiaExpression_value_targetContext *ctx) = 0;
  virtual void exitAergiaExpression_value_target(AergiaCpp14Parser::AergiaExpression_value_targetContext *ctx) = 0;

  virtual void enterAergiaExpression_identifier_target(AergiaCpp14Parser::AergiaExpression_identifier_targetContext *ctx) = 0;
  virtual void exitAergiaExpression_identifier_target(AergiaCpp14Parser::AergiaExpression_identifier_targetContext *ctx) = 0;

  virtual void enterAergiaexpression_any_target(AergiaCpp14Parser::Aergiaexpression_any_targetContext *ctx) = 0;
  virtual void exitAergiaexpression_any_target(AergiaCpp14Parser::Aergiaexpression_any_targetContext *ctx) = 0;

  virtual void enterAergiaString(AergiaCpp14Parser::AergiaStringContext *ctx) = 0;
  virtual void exitAergiaString(AergiaCpp14Parser::AergiaStringContext *ctx) = 0;

  virtual void enterAnonymousExpression(AergiaCpp14Parser::AnonymousExpressionContext *ctx) = 0;
  virtual void exitAnonymousExpression(AergiaCpp14Parser::AnonymousExpressionContext *ctx) = 0;

  virtual void enterAnoynmousBody(AergiaCpp14Parser::AnoynmousBodyContext *ctx) = 0;
  virtual void exitAnoynmousBody(AergiaCpp14Parser::AnoynmousBodyContext *ctx) = 0;

  virtual void enterForeach(AergiaCpp14Parser::ForeachContext *ctx) = 0;
  virtual void exitForeach(AergiaCpp14Parser::ForeachContext *ctx) = 0;

  virtual void enterForeachheader(AergiaCpp14Parser::ForeachheaderContext *ctx) = 0;
  virtual void exitForeachheader(AergiaCpp14Parser::ForeachheaderContext *ctx) = 0;

  virtual void enterForeachbody(AergiaCpp14Parser::ForeachbodyContext *ctx) = 0;
  virtual void exitForeachbody(AergiaCpp14Parser::ForeachbodyContext *ctx) = 0;

  virtual void enterCallchain(AergiaCpp14Parser::CallchainContext *ctx) = 0;
  virtual void exitCallchain(AergiaCpp14Parser::CallchainContext *ctx) = 0;

  virtual void enterPrimaryexpression(AergiaCpp14Parser::PrimaryexpressionContext *ctx) = 0;
  virtual void exitPrimaryexpression(AergiaCpp14Parser::PrimaryexpressionContext *ctx) = 0;

  virtual void enterIdexpression(AergiaCpp14Parser::IdexpressionContext *ctx) = 0;
  virtual void exitIdexpression(AergiaCpp14Parser::IdexpressionContext *ctx) = 0;

  virtual void enterUnqualifiedid(AergiaCpp14Parser::UnqualifiedidContext *ctx) = 0;
  virtual void exitUnqualifiedid(AergiaCpp14Parser::UnqualifiedidContext *ctx) = 0;

  virtual void enterQualifiedid(AergiaCpp14Parser::QualifiedidContext *ctx) = 0;
  virtual void exitQualifiedid(AergiaCpp14Parser::QualifiedidContext *ctx) = 0;

  virtual void enterNestednamespecifier(AergiaCpp14Parser::NestednamespecifierContext *ctx) = 0;
  virtual void exitNestednamespecifier(AergiaCpp14Parser::NestednamespecifierContext *ctx) = 0;

  virtual void enterLambdaexpression(AergiaCpp14Parser::LambdaexpressionContext *ctx) = 0;
  virtual void exitLambdaexpression(AergiaCpp14Parser::LambdaexpressionContext *ctx) = 0;

  virtual void enterLambdaintroducer(AergiaCpp14Parser::LambdaintroducerContext *ctx) = 0;
  virtual void exitLambdaintroducer(AergiaCpp14Parser::LambdaintroducerContext *ctx) = 0;

  virtual void enterLambdacapture(AergiaCpp14Parser::LambdacaptureContext *ctx) = 0;
  virtual void exitLambdacapture(AergiaCpp14Parser::LambdacaptureContext *ctx) = 0;

  virtual void enterCapturedefault(AergiaCpp14Parser::CapturedefaultContext *ctx) = 0;
  virtual void exitCapturedefault(AergiaCpp14Parser::CapturedefaultContext *ctx) = 0;

  virtual void enterCapturelist(AergiaCpp14Parser::CapturelistContext *ctx) = 0;
  virtual void exitCapturelist(AergiaCpp14Parser::CapturelistContext *ctx) = 0;

  virtual void enterCapture(AergiaCpp14Parser::CaptureContext *ctx) = 0;
  virtual void exitCapture(AergiaCpp14Parser::CaptureContext *ctx) = 0;

  virtual void enterSimplecapture(AergiaCpp14Parser::SimplecaptureContext *ctx) = 0;
  virtual void exitSimplecapture(AergiaCpp14Parser::SimplecaptureContext *ctx) = 0;

  virtual void enterInitcapture(AergiaCpp14Parser::InitcaptureContext *ctx) = 0;
  virtual void exitInitcapture(AergiaCpp14Parser::InitcaptureContext *ctx) = 0;

  virtual void enterLambdadeclarator(AergiaCpp14Parser::LambdadeclaratorContext *ctx) = 0;
  virtual void exitLambdadeclarator(AergiaCpp14Parser::LambdadeclaratorContext *ctx) = 0;

  virtual void enterPostfixexpression(AergiaCpp14Parser::PostfixexpressionContext *ctx) = 0;
  virtual void exitPostfixexpression(AergiaCpp14Parser::PostfixexpressionContext *ctx) = 0;

  virtual void enterTypeidofexpr(AergiaCpp14Parser::TypeidofexprContext *ctx) = 0;
  virtual void exitTypeidofexpr(AergiaCpp14Parser::TypeidofexprContext *ctx) = 0;

  virtual void enterTypeidofthetypeid(AergiaCpp14Parser::TypeidofthetypeidContext *ctx) = 0;
  virtual void exitTypeidofthetypeid(AergiaCpp14Parser::TypeidofthetypeidContext *ctx) = 0;

  virtual void enterExpressionlist(AergiaCpp14Parser::ExpressionlistContext *ctx) = 0;
  virtual void exitExpressionlist(AergiaCpp14Parser::ExpressionlistContext *ctx) = 0;

  virtual void enterPseudodestructorname(AergiaCpp14Parser::PseudodestructornameContext *ctx) = 0;
  virtual void exitPseudodestructorname(AergiaCpp14Parser::PseudodestructornameContext *ctx) = 0;

  virtual void enterUnaryexpression(AergiaCpp14Parser::UnaryexpressionContext *ctx) = 0;
  virtual void exitUnaryexpression(AergiaCpp14Parser::UnaryexpressionContext *ctx) = 0;

  virtual void enterUnaryoperator(AergiaCpp14Parser::UnaryoperatorContext *ctx) = 0;
  virtual void exitUnaryoperator(AergiaCpp14Parser::UnaryoperatorContext *ctx) = 0;

  virtual void enterNewexpression(AergiaCpp14Parser::NewexpressionContext *ctx) = 0;
  virtual void exitNewexpression(AergiaCpp14Parser::NewexpressionContext *ctx) = 0;

  virtual void enterNewplacement(AergiaCpp14Parser::NewplacementContext *ctx) = 0;
  virtual void exitNewplacement(AergiaCpp14Parser::NewplacementContext *ctx) = 0;

  virtual void enterNewtypeid(AergiaCpp14Parser::NewtypeidContext *ctx) = 0;
  virtual void exitNewtypeid(AergiaCpp14Parser::NewtypeidContext *ctx) = 0;

  virtual void enterNewdeclarator(AergiaCpp14Parser::NewdeclaratorContext *ctx) = 0;
  virtual void exitNewdeclarator(AergiaCpp14Parser::NewdeclaratorContext *ctx) = 0;

  virtual void enterNoptrnewdeclarator(AergiaCpp14Parser::NoptrnewdeclaratorContext *ctx) = 0;
  virtual void exitNoptrnewdeclarator(AergiaCpp14Parser::NoptrnewdeclaratorContext *ctx) = 0;

  virtual void enterNewinitializer(AergiaCpp14Parser::NewinitializerContext *ctx) = 0;
  virtual void exitNewinitializer(AergiaCpp14Parser::NewinitializerContext *ctx) = 0;

  virtual void enterDeleteexpression(AergiaCpp14Parser::DeleteexpressionContext *ctx) = 0;
  virtual void exitDeleteexpression(AergiaCpp14Parser::DeleteexpressionContext *ctx) = 0;

  virtual void enterNoexceptexpression(AergiaCpp14Parser::NoexceptexpressionContext *ctx) = 0;
  virtual void exitNoexceptexpression(AergiaCpp14Parser::NoexceptexpressionContext *ctx) = 0;

  virtual void enterCastexpression(AergiaCpp14Parser::CastexpressionContext *ctx) = 0;
  virtual void exitCastexpression(AergiaCpp14Parser::CastexpressionContext *ctx) = 0;

  virtual void enterPmexpression(AergiaCpp14Parser::PmexpressionContext *ctx) = 0;
  virtual void exitPmexpression(AergiaCpp14Parser::PmexpressionContext *ctx) = 0;

  virtual void enterMultiplicativeexpression(AergiaCpp14Parser::MultiplicativeexpressionContext *ctx) = 0;
  virtual void exitMultiplicativeexpression(AergiaCpp14Parser::MultiplicativeexpressionContext *ctx) = 0;

  virtual void enterAdditiveexpression(AergiaCpp14Parser::AdditiveexpressionContext *ctx) = 0;
  virtual void exitAdditiveexpression(AergiaCpp14Parser::AdditiveexpressionContext *ctx) = 0;

  virtual void enterShiftexpression(AergiaCpp14Parser::ShiftexpressionContext *ctx) = 0;
  virtual void exitShiftexpression(AergiaCpp14Parser::ShiftexpressionContext *ctx) = 0;

  virtual void enterShiftoperator(AergiaCpp14Parser::ShiftoperatorContext *ctx) = 0;
  virtual void exitShiftoperator(AergiaCpp14Parser::ShiftoperatorContext *ctx) = 0;

  virtual void enterRelationalexpression(AergiaCpp14Parser::RelationalexpressionContext *ctx) = 0;
  virtual void exitRelationalexpression(AergiaCpp14Parser::RelationalexpressionContext *ctx) = 0;

  virtual void enterEqualityexpression(AergiaCpp14Parser::EqualityexpressionContext *ctx) = 0;
  virtual void exitEqualityexpression(AergiaCpp14Parser::EqualityexpressionContext *ctx) = 0;

  virtual void enterAndexpression(AergiaCpp14Parser::AndexpressionContext *ctx) = 0;
  virtual void exitAndexpression(AergiaCpp14Parser::AndexpressionContext *ctx) = 0;

  virtual void enterExclusiveorexpression(AergiaCpp14Parser::ExclusiveorexpressionContext *ctx) = 0;
  virtual void exitExclusiveorexpression(AergiaCpp14Parser::ExclusiveorexpressionContext *ctx) = 0;

  virtual void enterInclusiveorexpression(AergiaCpp14Parser::InclusiveorexpressionContext *ctx) = 0;
  virtual void exitInclusiveorexpression(AergiaCpp14Parser::InclusiveorexpressionContext *ctx) = 0;

  virtual void enterLogicalandexpression(AergiaCpp14Parser::LogicalandexpressionContext *ctx) = 0;
  virtual void exitLogicalandexpression(AergiaCpp14Parser::LogicalandexpressionContext *ctx) = 0;

  virtual void enterLogicalorexpression(AergiaCpp14Parser::LogicalorexpressionContext *ctx) = 0;
  virtual void exitLogicalorexpression(AergiaCpp14Parser::LogicalorexpressionContext *ctx) = 0;

  virtual void enterConditionalexpression(AergiaCpp14Parser::ConditionalexpressionContext *ctx) = 0;
  virtual void exitConditionalexpression(AergiaCpp14Parser::ConditionalexpressionContext *ctx) = 0;

  virtual void enterAssignmentexpression(AergiaCpp14Parser::AssignmentexpressionContext *ctx) = 0;
  virtual void exitAssignmentexpression(AergiaCpp14Parser::AssignmentexpressionContext *ctx) = 0;

  virtual void enterAssignmentoperator(AergiaCpp14Parser::AssignmentoperatorContext *ctx) = 0;
  virtual void exitAssignmentoperator(AergiaCpp14Parser::AssignmentoperatorContext *ctx) = 0;

  virtual void enterExpression(AergiaCpp14Parser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(AergiaCpp14Parser::ExpressionContext *ctx) = 0;

  virtual void enterConstantexpression(AergiaCpp14Parser::ConstantexpressionContext *ctx) = 0;
  virtual void exitConstantexpression(AergiaCpp14Parser::ConstantexpressionContext *ctx) = 0;

  virtual void enterStatement(AergiaCpp14Parser::StatementContext *ctx) = 0;
  virtual void exitStatement(AergiaCpp14Parser::StatementContext *ctx) = 0;

  virtual void enterLabeledstatement(AergiaCpp14Parser::LabeledstatementContext *ctx) = 0;
  virtual void exitLabeledstatement(AergiaCpp14Parser::LabeledstatementContext *ctx) = 0;

  virtual void enterExpressionstatement(AergiaCpp14Parser::ExpressionstatementContext *ctx) = 0;
  virtual void exitExpressionstatement(AergiaCpp14Parser::ExpressionstatementContext *ctx) = 0;

  virtual void enterCompoundstatement(AergiaCpp14Parser::CompoundstatementContext *ctx) = 0;
  virtual void exitCompoundstatement(AergiaCpp14Parser::CompoundstatementContext *ctx) = 0;

  virtual void enterStatementseq(AergiaCpp14Parser::StatementseqContext *ctx) = 0;
  virtual void exitStatementseq(AergiaCpp14Parser::StatementseqContext *ctx) = 0;

  virtual void enterSelectionstatement(AergiaCpp14Parser::SelectionstatementContext *ctx) = 0;
  virtual void exitSelectionstatement(AergiaCpp14Parser::SelectionstatementContext *ctx) = 0;

  virtual void enterCondition(AergiaCpp14Parser::ConditionContext *ctx) = 0;
  virtual void exitCondition(AergiaCpp14Parser::ConditionContext *ctx) = 0;

  virtual void enterIterationstatement(AergiaCpp14Parser::IterationstatementContext *ctx) = 0;
  virtual void exitIterationstatement(AergiaCpp14Parser::IterationstatementContext *ctx) = 0;

  virtual void enterForinitstatement(AergiaCpp14Parser::ForinitstatementContext *ctx) = 0;
  virtual void exitForinitstatement(AergiaCpp14Parser::ForinitstatementContext *ctx) = 0;

  virtual void enterForrangedeclaration(AergiaCpp14Parser::ForrangedeclarationContext *ctx) = 0;
  virtual void exitForrangedeclaration(AergiaCpp14Parser::ForrangedeclarationContext *ctx) = 0;

  virtual void enterForrangeinitializer(AergiaCpp14Parser::ForrangeinitializerContext *ctx) = 0;
  virtual void exitForrangeinitializer(AergiaCpp14Parser::ForrangeinitializerContext *ctx) = 0;

  virtual void enterJumpstatement(AergiaCpp14Parser::JumpstatementContext *ctx) = 0;
  virtual void exitJumpstatement(AergiaCpp14Parser::JumpstatementContext *ctx) = 0;

  virtual void enterDeclarationstatement(AergiaCpp14Parser::DeclarationstatementContext *ctx) = 0;
  virtual void exitDeclarationstatement(AergiaCpp14Parser::DeclarationstatementContext *ctx) = 0;

  virtual void enterDeclarationseq(AergiaCpp14Parser::DeclarationseqContext *ctx) = 0;
  virtual void exitDeclarationseq(AergiaCpp14Parser::DeclarationseqContext *ctx) = 0;

  virtual void enterDeclaration(AergiaCpp14Parser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(AergiaCpp14Parser::DeclarationContext *ctx) = 0;

  virtual void enterBlockdeclaration(AergiaCpp14Parser::BlockdeclarationContext *ctx) = 0;
  virtual void exitBlockdeclaration(AergiaCpp14Parser::BlockdeclarationContext *ctx) = 0;

  virtual void enterAliasdeclaration(AergiaCpp14Parser::AliasdeclarationContext *ctx) = 0;
  virtual void exitAliasdeclaration(AergiaCpp14Parser::AliasdeclarationContext *ctx) = 0;

  virtual void enterSimpledeclaration(AergiaCpp14Parser::SimpledeclarationContext *ctx) = 0;
  virtual void exitSimpledeclaration(AergiaCpp14Parser::SimpledeclarationContext *ctx) = 0;

  virtual void enterStatic_assertdeclaration(AergiaCpp14Parser::Static_assertdeclarationContext *ctx) = 0;
  virtual void exitStatic_assertdeclaration(AergiaCpp14Parser::Static_assertdeclarationContext *ctx) = 0;

  virtual void enterEmptydeclaration(AergiaCpp14Parser::EmptydeclarationContext *ctx) = 0;
  virtual void exitEmptydeclaration(AergiaCpp14Parser::EmptydeclarationContext *ctx) = 0;

  virtual void enterAttributedeclaration(AergiaCpp14Parser::AttributedeclarationContext *ctx) = 0;
  virtual void exitAttributedeclaration(AergiaCpp14Parser::AttributedeclarationContext *ctx) = 0;

  virtual void enterDeclspecifier(AergiaCpp14Parser::DeclspecifierContext *ctx) = 0;
  virtual void exitDeclspecifier(AergiaCpp14Parser::DeclspecifierContext *ctx) = 0;

  virtual void enterDeclspecifierseq(AergiaCpp14Parser::DeclspecifierseqContext *ctx) = 0;
  virtual void exitDeclspecifierseq(AergiaCpp14Parser::DeclspecifierseqContext *ctx) = 0;

  virtual void enterStorageclassspecifier(AergiaCpp14Parser::StorageclassspecifierContext *ctx) = 0;
  virtual void exitStorageclassspecifier(AergiaCpp14Parser::StorageclassspecifierContext *ctx) = 0;

  virtual void enterFunctionspecifier(AergiaCpp14Parser::FunctionspecifierContext *ctx) = 0;
  virtual void exitFunctionspecifier(AergiaCpp14Parser::FunctionspecifierContext *ctx) = 0;

  virtual void enterTypedefname(AergiaCpp14Parser::TypedefnameContext *ctx) = 0;
  virtual void exitTypedefname(AergiaCpp14Parser::TypedefnameContext *ctx) = 0;

  virtual void enterTypespecifier(AergiaCpp14Parser::TypespecifierContext *ctx) = 0;
  virtual void exitTypespecifier(AergiaCpp14Parser::TypespecifierContext *ctx) = 0;

  virtual void enterTrailingtypespecifier(AergiaCpp14Parser::TrailingtypespecifierContext *ctx) = 0;
  virtual void exitTrailingtypespecifier(AergiaCpp14Parser::TrailingtypespecifierContext *ctx) = 0;

  virtual void enterTypespecifierseq(AergiaCpp14Parser::TypespecifierseqContext *ctx) = 0;
  virtual void exitTypespecifierseq(AergiaCpp14Parser::TypespecifierseqContext *ctx) = 0;

  virtual void enterTrailingtypespecifierseq(AergiaCpp14Parser::TrailingtypespecifierseqContext *ctx) = 0;
  virtual void exitTrailingtypespecifierseq(AergiaCpp14Parser::TrailingtypespecifierseqContext *ctx) = 0;

  virtual void enterSimpletypespecifier(AergiaCpp14Parser::SimpletypespecifierContext *ctx) = 0;
  virtual void exitSimpletypespecifier(AergiaCpp14Parser::SimpletypespecifierContext *ctx) = 0;

  virtual void enterThetypename(AergiaCpp14Parser::ThetypenameContext *ctx) = 0;
  virtual void exitThetypename(AergiaCpp14Parser::ThetypenameContext *ctx) = 0;

  virtual void enterDecltypespecifier(AergiaCpp14Parser::DecltypespecifierContext *ctx) = 0;
  virtual void exitDecltypespecifier(AergiaCpp14Parser::DecltypespecifierContext *ctx) = 0;

  virtual void enterElaboratedtypespecifier(AergiaCpp14Parser::ElaboratedtypespecifierContext *ctx) = 0;
  virtual void exitElaboratedtypespecifier(AergiaCpp14Parser::ElaboratedtypespecifierContext *ctx) = 0;

  virtual void enterEnumname(AergiaCpp14Parser::EnumnameContext *ctx) = 0;
  virtual void exitEnumname(AergiaCpp14Parser::EnumnameContext *ctx) = 0;

  virtual void enterEnumspecifier(AergiaCpp14Parser::EnumspecifierContext *ctx) = 0;
  virtual void exitEnumspecifier(AergiaCpp14Parser::EnumspecifierContext *ctx) = 0;

  virtual void enterEnumhead(AergiaCpp14Parser::EnumheadContext *ctx) = 0;
  virtual void exitEnumhead(AergiaCpp14Parser::EnumheadContext *ctx) = 0;

  virtual void enterOpaqueenumdeclaration(AergiaCpp14Parser::OpaqueenumdeclarationContext *ctx) = 0;
  virtual void exitOpaqueenumdeclaration(AergiaCpp14Parser::OpaqueenumdeclarationContext *ctx) = 0;

  virtual void enterEnumkey(AergiaCpp14Parser::EnumkeyContext *ctx) = 0;
  virtual void exitEnumkey(AergiaCpp14Parser::EnumkeyContext *ctx) = 0;

  virtual void enterEnumbase(AergiaCpp14Parser::EnumbaseContext *ctx) = 0;
  virtual void exitEnumbase(AergiaCpp14Parser::EnumbaseContext *ctx) = 0;

  virtual void enterEnumeratorlist(AergiaCpp14Parser::EnumeratorlistContext *ctx) = 0;
  virtual void exitEnumeratorlist(AergiaCpp14Parser::EnumeratorlistContext *ctx) = 0;

  virtual void enterEnumeratordefinition(AergiaCpp14Parser::EnumeratordefinitionContext *ctx) = 0;
  virtual void exitEnumeratordefinition(AergiaCpp14Parser::EnumeratordefinitionContext *ctx) = 0;

  virtual void enterEnumerator(AergiaCpp14Parser::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(AergiaCpp14Parser::EnumeratorContext *ctx) = 0;

  virtual void enterNamespacename(AergiaCpp14Parser::NamespacenameContext *ctx) = 0;
  virtual void exitNamespacename(AergiaCpp14Parser::NamespacenameContext *ctx) = 0;

  virtual void enterOriginalnamespacename(AergiaCpp14Parser::OriginalnamespacenameContext *ctx) = 0;
  virtual void exitOriginalnamespacename(AergiaCpp14Parser::OriginalnamespacenameContext *ctx) = 0;

  virtual void enterNamespacedefinition(AergiaCpp14Parser::NamespacedefinitionContext *ctx) = 0;
  virtual void exitNamespacedefinition(AergiaCpp14Parser::NamespacedefinitionContext *ctx) = 0;

  virtual void enterNamednamespacedefinition(AergiaCpp14Parser::NamednamespacedefinitionContext *ctx) = 0;
  virtual void exitNamednamespacedefinition(AergiaCpp14Parser::NamednamespacedefinitionContext *ctx) = 0;

  virtual void enterOriginalnamespacedefinition(AergiaCpp14Parser::OriginalnamespacedefinitionContext *ctx) = 0;
  virtual void exitOriginalnamespacedefinition(AergiaCpp14Parser::OriginalnamespacedefinitionContext *ctx) = 0;

  virtual void enterUnnamednamespacedefinition(AergiaCpp14Parser::UnnamednamespacedefinitionContext *ctx) = 0;
  virtual void exitUnnamednamespacedefinition(AergiaCpp14Parser::UnnamednamespacedefinitionContext *ctx) = 0;

  virtual void enterNamespacebody(AergiaCpp14Parser::NamespacebodyContext *ctx) = 0;
  virtual void exitNamespacebody(AergiaCpp14Parser::NamespacebodyContext *ctx) = 0;

  virtual void enterNamespacealias(AergiaCpp14Parser::NamespacealiasContext *ctx) = 0;
  virtual void exitNamespacealias(AergiaCpp14Parser::NamespacealiasContext *ctx) = 0;

  virtual void enterNamespacealiasdefinition(AergiaCpp14Parser::NamespacealiasdefinitionContext *ctx) = 0;
  virtual void exitNamespacealiasdefinition(AergiaCpp14Parser::NamespacealiasdefinitionContext *ctx) = 0;

  virtual void enterQualifiednamespacespecifier(AergiaCpp14Parser::QualifiednamespacespecifierContext *ctx) = 0;
  virtual void exitQualifiednamespacespecifier(AergiaCpp14Parser::QualifiednamespacespecifierContext *ctx) = 0;

  virtual void enterUsingdeclaration(AergiaCpp14Parser::UsingdeclarationContext *ctx) = 0;
  virtual void exitUsingdeclaration(AergiaCpp14Parser::UsingdeclarationContext *ctx) = 0;

  virtual void enterUsingdirective(AergiaCpp14Parser::UsingdirectiveContext *ctx) = 0;
  virtual void exitUsingdirective(AergiaCpp14Parser::UsingdirectiveContext *ctx) = 0;

  virtual void enterAsmdefinition(AergiaCpp14Parser::AsmdefinitionContext *ctx) = 0;
  virtual void exitAsmdefinition(AergiaCpp14Parser::AsmdefinitionContext *ctx) = 0;

  virtual void enterLinkagespecification(AergiaCpp14Parser::LinkagespecificationContext *ctx) = 0;
  virtual void exitLinkagespecification(AergiaCpp14Parser::LinkagespecificationContext *ctx) = 0;

  virtual void enterAttributespecifierseq(AergiaCpp14Parser::AttributespecifierseqContext *ctx) = 0;
  virtual void exitAttributespecifierseq(AergiaCpp14Parser::AttributespecifierseqContext *ctx) = 0;

  virtual void enterAttributespecifier(AergiaCpp14Parser::AttributespecifierContext *ctx) = 0;
  virtual void exitAttributespecifier(AergiaCpp14Parser::AttributespecifierContext *ctx) = 0;

  virtual void enterAlignmentspecifier(AergiaCpp14Parser::AlignmentspecifierContext *ctx) = 0;
  virtual void exitAlignmentspecifier(AergiaCpp14Parser::AlignmentspecifierContext *ctx) = 0;

  virtual void enterAttributelist(AergiaCpp14Parser::AttributelistContext *ctx) = 0;
  virtual void exitAttributelist(AergiaCpp14Parser::AttributelistContext *ctx) = 0;

  virtual void enterAttribute(AergiaCpp14Parser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(AergiaCpp14Parser::AttributeContext *ctx) = 0;

  virtual void enterAttributetoken(AergiaCpp14Parser::AttributetokenContext *ctx) = 0;
  virtual void exitAttributetoken(AergiaCpp14Parser::AttributetokenContext *ctx) = 0;

  virtual void enterAttributescopedtoken(AergiaCpp14Parser::AttributescopedtokenContext *ctx) = 0;
  virtual void exitAttributescopedtoken(AergiaCpp14Parser::AttributescopedtokenContext *ctx) = 0;

  virtual void enterAttributenamespace(AergiaCpp14Parser::AttributenamespaceContext *ctx) = 0;
  virtual void exitAttributenamespace(AergiaCpp14Parser::AttributenamespaceContext *ctx) = 0;

  virtual void enterAttributeargumentclause(AergiaCpp14Parser::AttributeargumentclauseContext *ctx) = 0;
  virtual void exitAttributeargumentclause(AergiaCpp14Parser::AttributeargumentclauseContext *ctx) = 0;

  virtual void enterBalancedtokenseq(AergiaCpp14Parser::BalancedtokenseqContext *ctx) = 0;
  virtual void exitBalancedtokenseq(AergiaCpp14Parser::BalancedtokenseqContext *ctx) = 0;

  virtual void enterBalancedtoken(AergiaCpp14Parser::BalancedtokenContext *ctx) = 0;
  virtual void exitBalancedtoken(AergiaCpp14Parser::BalancedtokenContext *ctx) = 0;

  virtual void enterInitdeclaratorlist(AergiaCpp14Parser::InitdeclaratorlistContext *ctx) = 0;
  virtual void exitInitdeclaratorlist(AergiaCpp14Parser::InitdeclaratorlistContext *ctx) = 0;

  virtual void enterInitdeclarator(AergiaCpp14Parser::InitdeclaratorContext *ctx) = 0;
  virtual void exitInitdeclarator(AergiaCpp14Parser::InitdeclaratorContext *ctx) = 0;

  virtual void enterDeclarator(AergiaCpp14Parser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(AergiaCpp14Parser::DeclaratorContext *ctx) = 0;

  virtual void enterPtrdeclarator(AergiaCpp14Parser::PtrdeclaratorContext *ctx) = 0;
  virtual void exitPtrdeclarator(AergiaCpp14Parser::PtrdeclaratorContext *ctx) = 0;

  virtual void enterNoptrdeclarator(AergiaCpp14Parser::NoptrdeclaratorContext *ctx) = 0;
  virtual void exitNoptrdeclarator(AergiaCpp14Parser::NoptrdeclaratorContext *ctx) = 0;

  virtual void enterParametersandqualifiers(AergiaCpp14Parser::ParametersandqualifiersContext *ctx) = 0;
  virtual void exitParametersandqualifiers(AergiaCpp14Parser::ParametersandqualifiersContext *ctx) = 0;

  virtual void enterTrailingreturntype(AergiaCpp14Parser::TrailingreturntypeContext *ctx) = 0;
  virtual void exitTrailingreturntype(AergiaCpp14Parser::TrailingreturntypeContext *ctx) = 0;

  virtual void enterPtroperator(AergiaCpp14Parser::PtroperatorContext *ctx) = 0;
  virtual void exitPtroperator(AergiaCpp14Parser::PtroperatorContext *ctx) = 0;

  virtual void enterCvqualifierseq(AergiaCpp14Parser::CvqualifierseqContext *ctx) = 0;
  virtual void exitCvqualifierseq(AergiaCpp14Parser::CvqualifierseqContext *ctx) = 0;

  virtual void enterCvqualifier(AergiaCpp14Parser::CvqualifierContext *ctx) = 0;
  virtual void exitCvqualifier(AergiaCpp14Parser::CvqualifierContext *ctx) = 0;

  virtual void enterRefqualifier(AergiaCpp14Parser::RefqualifierContext *ctx) = 0;
  virtual void exitRefqualifier(AergiaCpp14Parser::RefqualifierContext *ctx) = 0;

  virtual void enterDeclaratorid(AergiaCpp14Parser::DeclaratoridContext *ctx) = 0;
  virtual void exitDeclaratorid(AergiaCpp14Parser::DeclaratoridContext *ctx) = 0;

  virtual void enterThetypeid(AergiaCpp14Parser::ThetypeidContext *ctx) = 0;
  virtual void exitThetypeid(AergiaCpp14Parser::ThetypeidContext *ctx) = 0;

  virtual void enterAbstractdeclarator(AergiaCpp14Parser::AbstractdeclaratorContext *ctx) = 0;
  virtual void exitAbstractdeclarator(AergiaCpp14Parser::AbstractdeclaratorContext *ctx) = 0;

  virtual void enterPtrabstractdeclarator(AergiaCpp14Parser::PtrabstractdeclaratorContext *ctx) = 0;
  virtual void exitPtrabstractdeclarator(AergiaCpp14Parser::PtrabstractdeclaratorContext *ctx) = 0;

  virtual void enterNoptrabstractdeclarator(AergiaCpp14Parser::NoptrabstractdeclaratorContext *ctx) = 0;
  virtual void exitNoptrabstractdeclarator(AergiaCpp14Parser::NoptrabstractdeclaratorContext *ctx) = 0;

  virtual void enterAbstractpackdeclarator(AergiaCpp14Parser::AbstractpackdeclaratorContext *ctx) = 0;
  virtual void exitAbstractpackdeclarator(AergiaCpp14Parser::AbstractpackdeclaratorContext *ctx) = 0;

  virtual void enterNoptrabstractpackdeclarator(AergiaCpp14Parser::NoptrabstractpackdeclaratorContext *ctx) = 0;
  virtual void exitNoptrabstractpackdeclarator(AergiaCpp14Parser::NoptrabstractpackdeclaratorContext *ctx) = 0;

  virtual void enterParameterdeclarationclause(AergiaCpp14Parser::ParameterdeclarationclauseContext *ctx) = 0;
  virtual void exitParameterdeclarationclause(AergiaCpp14Parser::ParameterdeclarationclauseContext *ctx) = 0;

  virtual void enterParameterdeclarationlist(AergiaCpp14Parser::ParameterdeclarationlistContext *ctx) = 0;
  virtual void exitParameterdeclarationlist(AergiaCpp14Parser::ParameterdeclarationlistContext *ctx) = 0;

  virtual void enterParameterdeclaration(AergiaCpp14Parser::ParameterdeclarationContext *ctx) = 0;
  virtual void exitParameterdeclaration(AergiaCpp14Parser::ParameterdeclarationContext *ctx) = 0;

  virtual void enterFunctiondefinition(AergiaCpp14Parser::FunctiondefinitionContext *ctx) = 0;
  virtual void exitFunctiondefinition(AergiaCpp14Parser::FunctiondefinitionContext *ctx) = 0;

  virtual void enterFunctionbody(AergiaCpp14Parser::FunctionbodyContext *ctx) = 0;
  virtual void exitFunctionbody(AergiaCpp14Parser::FunctionbodyContext *ctx) = 0;

  virtual void enterInitializer(AergiaCpp14Parser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(AergiaCpp14Parser::InitializerContext *ctx) = 0;

  virtual void enterBraceorequalinitializer(AergiaCpp14Parser::BraceorequalinitializerContext *ctx) = 0;
  virtual void exitBraceorequalinitializer(AergiaCpp14Parser::BraceorequalinitializerContext *ctx) = 0;

  virtual void enterInitializerclause(AergiaCpp14Parser::InitializerclauseContext *ctx) = 0;
  virtual void exitInitializerclause(AergiaCpp14Parser::InitializerclauseContext *ctx) = 0;

  virtual void enterInitializerlist(AergiaCpp14Parser::InitializerlistContext *ctx) = 0;
  virtual void exitInitializerlist(AergiaCpp14Parser::InitializerlistContext *ctx) = 0;

  virtual void enterBracedinitlist(AergiaCpp14Parser::BracedinitlistContext *ctx) = 0;
  virtual void exitBracedinitlist(AergiaCpp14Parser::BracedinitlistContext *ctx) = 0;

  virtual void enterClassname(AergiaCpp14Parser::ClassnameContext *ctx) = 0;
  virtual void exitClassname(AergiaCpp14Parser::ClassnameContext *ctx) = 0;

  virtual void enterClassspecifier(AergiaCpp14Parser::ClassspecifierContext *ctx) = 0;
  virtual void exitClassspecifier(AergiaCpp14Parser::ClassspecifierContext *ctx) = 0;

  virtual void enterClasshead(AergiaCpp14Parser::ClassheadContext *ctx) = 0;
  virtual void exitClasshead(AergiaCpp14Parser::ClassheadContext *ctx) = 0;

  virtual void enterClassheadname(AergiaCpp14Parser::ClassheadnameContext *ctx) = 0;
  virtual void exitClassheadname(AergiaCpp14Parser::ClassheadnameContext *ctx) = 0;

  virtual void enterClassvirtspecifier(AergiaCpp14Parser::ClassvirtspecifierContext *ctx) = 0;
  virtual void exitClassvirtspecifier(AergiaCpp14Parser::ClassvirtspecifierContext *ctx) = 0;

  virtual void enterClasskey(AergiaCpp14Parser::ClasskeyContext *ctx) = 0;
  virtual void exitClasskey(AergiaCpp14Parser::ClasskeyContext *ctx) = 0;

  virtual void enterMemberspecification(AergiaCpp14Parser::MemberspecificationContext *ctx) = 0;
  virtual void exitMemberspecification(AergiaCpp14Parser::MemberspecificationContext *ctx) = 0;

  virtual void enterMemberdeclaration(AergiaCpp14Parser::MemberdeclarationContext *ctx) = 0;
  virtual void exitMemberdeclaration(AergiaCpp14Parser::MemberdeclarationContext *ctx) = 0;

  virtual void enterMemberdeclaratorlist(AergiaCpp14Parser::MemberdeclaratorlistContext *ctx) = 0;
  virtual void exitMemberdeclaratorlist(AergiaCpp14Parser::MemberdeclaratorlistContext *ctx) = 0;

  virtual void enterMemberdeclarator(AergiaCpp14Parser::MemberdeclaratorContext *ctx) = 0;
  virtual void exitMemberdeclarator(AergiaCpp14Parser::MemberdeclaratorContext *ctx) = 0;

  virtual void enterMemberFunctionDeclaration(AergiaCpp14Parser::MemberFunctionDeclarationContext *ctx) = 0;
  virtual void exitMemberFunctionDeclaration(AergiaCpp14Parser::MemberFunctionDeclarationContext *ctx) = 0;

  virtual void enterVirtspecifierseq(AergiaCpp14Parser::VirtspecifierseqContext *ctx) = 0;
  virtual void exitVirtspecifierseq(AergiaCpp14Parser::VirtspecifierseqContext *ctx) = 0;

  virtual void enterVirtspecifier(AergiaCpp14Parser::VirtspecifierContext *ctx) = 0;
  virtual void exitVirtspecifier(AergiaCpp14Parser::VirtspecifierContext *ctx) = 0;

  virtual void enterPurespecifier(AergiaCpp14Parser::PurespecifierContext *ctx) = 0;
  virtual void exitPurespecifier(AergiaCpp14Parser::PurespecifierContext *ctx) = 0;

  virtual void enterBaseclause(AergiaCpp14Parser::BaseclauseContext *ctx) = 0;
  virtual void exitBaseclause(AergiaCpp14Parser::BaseclauseContext *ctx) = 0;

  virtual void enterBasespecifierlist(AergiaCpp14Parser::BasespecifierlistContext *ctx) = 0;
  virtual void exitBasespecifierlist(AergiaCpp14Parser::BasespecifierlistContext *ctx) = 0;

  virtual void enterBasespecifier(AergiaCpp14Parser::BasespecifierContext *ctx) = 0;
  virtual void exitBasespecifier(AergiaCpp14Parser::BasespecifierContext *ctx) = 0;

  virtual void enterClassordecltype(AergiaCpp14Parser::ClassordecltypeContext *ctx) = 0;
  virtual void exitClassordecltype(AergiaCpp14Parser::ClassordecltypeContext *ctx) = 0;

  virtual void enterBasetypespecifier(AergiaCpp14Parser::BasetypespecifierContext *ctx) = 0;
  virtual void exitBasetypespecifier(AergiaCpp14Parser::BasetypespecifierContext *ctx) = 0;

  virtual void enterAccessspecifier(AergiaCpp14Parser::AccessspecifierContext *ctx) = 0;
  virtual void exitAccessspecifier(AergiaCpp14Parser::AccessspecifierContext *ctx) = 0;

  virtual void enterConversionfunctionid(AergiaCpp14Parser::ConversionfunctionidContext *ctx) = 0;
  virtual void exitConversionfunctionid(AergiaCpp14Parser::ConversionfunctionidContext *ctx) = 0;

  virtual void enterConversiontypeid(AergiaCpp14Parser::ConversiontypeidContext *ctx) = 0;
  virtual void exitConversiontypeid(AergiaCpp14Parser::ConversiontypeidContext *ctx) = 0;

  virtual void enterConversiondeclarator(AergiaCpp14Parser::ConversiondeclaratorContext *ctx) = 0;
  virtual void exitConversiondeclarator(AergiaCpp14Parser::ConversiondeclaratorContext *ctx) = 0;

  virtual void enterCtorinitializer(AergiaCpp14Parser::CtorinitializerContext *ctx) = 0;
  virtual void exitCtorinitializer(AergiaCpp14Parser::CtorinitializerContext *ctx) = 0;

  virtual void enterMeminitializerlist(AergiaCpp14Parser::MeminitializerlistContext *ctx) = 0;
  virtual void exitMeminitializerlist(AergiaCpp14Parser::MeminitializerlistContext *ctx) = 0;

  virtual void enterMeminitializer(AergiaCpp14Parser::MeminitializerContext *ctx) = 0;
  virtual void exitMeminitializer(AergiaCpp14Parser::MeminitializerContext *ctx) = 0;

  virtual void enterMeminitializerid(AergiaCpp14Parser::MeminitializeridContext *ctx) = 0;
  virtual void exitMeminitializerid(AergiaCpp14Parser::MeminitializeridContext *ctx) = 0;

  virtual void enterOperatorfunctionid(AergiaCpp14Parser::OperatorfunctionidContext *ctx) = 0;
  virtual void exitOperatorfunctionid(AergiaCpp14Parser::OperatorfunctionidContext *ctx) = 0;

  virtual void enterLiteraloperatorid(AergiaCpp14Parser::LiteraloperatoridContext *ctx) = 0;
  virtual void exitLiteraloperatorid(AergiaCpp14Parser::LiteraloperatoridContext *ctx) = 0;

  virtual void enterTemplatedeclaration(AergiaCpp14Parser::TemplatedeclarationContext *ctx) = 0;
  virtual void exitTemplatedeclaration(AergiaCpp14Parser::TemplatedeclarationContext *ctx) = 0;

  virtual void enterTemplateparameterlist(AergiaCpp14Parser::TemplateparameterlistContext *ctx) = 0;
  virtual void exitTemplateparameterlist(AergiaCpp14Parser::TemplateparameterlistContext *ctx) = 0;

  virtual void enterTemplateparameter(AergiaCpp14Parser::TemplateparameterContext *ctx) = 0;
  virtual void exitTemplateparameter(AergiaCpp14Parser::TemplateparameterContext *ctx) = 0;

  virtual void enterTypeparameter(AergiaCpp14Parser::TypeparameterContext *ctx) = 0;
  virtual void exitTypeparameter(AergiaCpp14Parser::TypeparameterContext *ctx) = 0;

  virtual void enterSimpletemplateid(AergiaCpp14Parser::SimpletemplateidContext *ctx) = 0;
  virtual void exitSimpletemplateid(AergiaCpp14Parser::SimpletemplateidContext *ctx) = 0;

  virtual void enterTemplateid(AergiaCpp14Parser::TemplateidContext *ctx) = 0;
  virtual void exitTemplateid(AergiaCpp14Parser::TemplateidContext *ctx) = 0;

  virtual void enterTemplatename(AergiaCpp14Parser::TemplatenameContext *ctx) = 0;
  virtual void exitTemplatename(AergiaCpp14Parser::TemplatenameContext *ctx) = 0;

  virtual void enterTemplateargumentlist(AergiaCpp14Parser::TemplateargumentlistContext *ctx) = 0;
  virtual void exitTemplateargumentlist(AergiaCpp14Parser::TemplateargumentlistContext *ctx) = 0;

  virtual void enterTemplateargument(AergiaCpp14Parser::TemplateargumentContext *ctx) = 0;
  virtual void exitTemplateargument(AergiaCpp14Parser::TemplateargumentContext *ctx) = 0;

  virtual void enterTypenamespecifier(AergiaCpp14Parser::TypenamespecifierContext *ctx) = 0;
  virtual void exitTypenamespecifier(AergiaCpp14Parser::TypenamespecifierContext *ctx) = 0;

  virtual void enterExplicitinstantiation(AergiaCpp14Parser::ExplicitinstantiationContext *ctx) = 0;
  virtual void exitExplicitinstantiation(AergiaCpp14Parser::ExplicitinstantiationContext *ctx) = 0;

  virtual void enterExplicitspecialization(AergiaCpp14Parser::ExplicitspecializationContext *ctx) = 0;
  virtual void exitExplicitspecialization(AergiaCpp14Parser::ExplicitspecializationContext *ctx) = 0;

  virtual void enterTryblock(AergiaCpp14Parser::TryblockContext *ctx) = 0;
  virtual void exitTryblock(AergiaCpp14Parser::TryblockContext *ctx) = 0;

  virtual void enterFunctiontryblock(AergiaCpp14Parser::FunctiontryblockContext *ctx) = 0;
  virtual void exitFunctiontryblock(AergiaCpp14Parser::FunctiontryblockContext *ctx) = 0;

  virtual void enterHandlerseq(AergiaCpp14Parser::HandlerseqContext *ctx) = 0;
  virtual void exitHandlerseq(AergiaCpp14Parser::HandlerseqContext *ctx) = 0;

  virtual void enterHandler(AergiaCpp14Parser::HandlerContext *ctx) = 0;
  virtual void exitHandler(AergiaCpp14Parser::HandlerContext *ctx) = 0;

  virtual void enterExceptiondeclaration(AergiaCpp14Parser::ExceptiondeclarationContext *ctx) = 0;
  virtual void exitExceptiondeclaration(AergiaCpp14Parser::ExceptiondeclarationContext *ctx) = 0;

  virtual void enterThrowexpression(AergiaCpp14Parser::ThrowexpressionContext *ctx) = 0;
  virtual void exitThrowexpression(AergiaCpp14Parser::ThrowexpressionContext *ctx) = 0;

  virtual void enterExceptionspecification(AergiaCpp14Parser::ExceptionspecificationContext *ctx) = 0;
  virtual void exitExceptionspecification(AergiaCpp14Parser::ExceptionspecificationContext *ctx) = 0;

  virtual void enterDynamicexceptionspecification(AergiaCpp14Parser::DynamicexceptionspecificationContext *ctx) = 0;
  virtual void exitDynamicexceptionspecification(AergiaCpp14Parser::DynamicexceptionspecificationContext *ctx) = 0;

  virtual void enterTypeidlist(AergiaCpp14Parser::TypeidlistContext *ctx) = 0;
  virtual void exitTypeidlist(AergiaCpp14Parser::TypeidlistContext *ctx) = 0;

  virtual void enterNoexceptspecification(AergiaCpp14Parser::NoexceptspecificationContext *ctx) = 0;
  virtual void exitNoexceptspecification(AergiaCpp14Parser::NoexceptspecificationContext *ctx) = 0;

  virtual void enterPreprocessorDirective(AergiaCpp14Parser::PreprocessorDirectiveContext *ctx) = 0;
  virtual void exitPreprocessorDirective(AergiaCpp14Parser::PreprocessorDirectiveContext *ctx) = 0;

  virtual void enterTheoperator(AergiaCpp14Parser::TheoperatorContext *ctx) = 0;
  virtual void exitTheoperator(AergiaCpp14Parser::TheoperatorContext *ctx) = 0;

  virtual void enterLiteral(AergiaCpp14Parser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(AergiaCpp14Parser::LiteralContext *ctx) = 0;

  virtual void enterBooleanliteral(AergiaCpp14Parser::BooleanliteralContext *ctx) = 0;
  virtual void exitBooleanliteral(AergiaCpp14Parser::BooleanliteralContext *ctx) = 0;

  virtual void enterPointerliteral(AergiaCpp14Parser::PointerliteralContext *ctx) = 0;
  virtual void exitPointerliteral(AergiaCpp14Parser::PointerliteralContext *ctx) = 0;

  virtual void enterUserdefinedliteral(AergiaCpp14Parser::UserdefinedliteralContext *ctx) = 0;
  virtual void exitUserdefinedliteral(AergiaCpp14Parser::UserdefinedliteralContext *ctx) = 0;


};

