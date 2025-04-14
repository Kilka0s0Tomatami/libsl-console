
// Generated from D:/PROjects/libsl-generated-3/grammar/LibSLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LibSLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LibSLParser.
 */
class  LibSLParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(LibSLParser::FileContext *ctx) = 0;
  virtual void exitFile(LibSLParser::FileContext *ctx) = 0;

  virtual void enterGlobalStatement(LibSLParser::GlobalStatementContext *ctx) = 0;
  virtual void exitGlobalStatement(LibSLParser::GlobalStatementContext *ctx) = 0;

  virtual void enterTopLevelDecl(LibSLParser::TopLevelDeclContext *ctx) = 0;
  virtual void exitTopLevelDecl(LibSLParser::TopLevelDeclContext *ctx) = 0;

  virtual void enterHeader(LibSLParser::HeaderContext *ctx) = 0;
  virtual void exitHeader(LibSLParser::HeaderContext *ctx) = 0;

  virtual void enterTypealiasStatement(LibSLParser::TypealiasStatementContext *ctx) = 0;
  virtual void exitTypealiasStatement(LibSLParser::TypealiasStatementContext *ctx) = 0;

  virtual void enterTypeDefBlock(LibSLParser::TypeDefBlockContext *ctx) = 0;
  virtual void exitTypeDefBlock(LibSLParser::TypeDefBlockContext *ctx) = 0;

  virtual void enterTargetType(LibSLParser::TargetTypeContext *ctx) = 0;
  virtual void exitTargetType(LibSLParser::TargetTypeContext *ctx) = 0;

  virtual void enterTypeList(LibSLParser::TypeListContext *ctx) = 0;
  virtual void exitTypeList(LibSLParser::TypeListContext *ctx) = 0;

  virtual void enterTypeDefBlockStatement(LibSLParser::TypeDefBlockStatementContext *ctx) = 0;
  virtual void exitTypeDefBlockStatement(LibSLParser::TypeDefBlockStatementContext *ctx) = 0;

  virtual void enterEnumBlock(LibSLParser::EnumBlockContext *ctx) = 0;
  virtual void exitEnumBlock(LibSLParser::EnumBlockContext *ctx) = 0;

  virtual void enterEnumBlockStatement(LibSLParser::EnumBlockStatementContext *ctx) = 0;
  virtual void exitEnumBlockStatement(LibSLParser::EnumBlockStatementContext *ctx) = 0;

  virtual void enterTypesSection(LibSLParser::TypesSectionContext *ctx) = 0;
  virtual void exitTypesSection(LibSLParser::TypesSectionContext *ctx) = 0;

  virtual void enterSemanticTypeDecl(LibSLParser::SemanticTypeDeclContext *ctx) = 0;
  virtual void exitSemanticTypeDecl(LibSLParser::SemanticTypeDeclContext *ctx) = 0;

  virtual void enterSimpleSemanticType(LibSLParser::SimpleSemanticTypeContext *ctx) = 0;
  virtual void exitSimpleSemanticType(LibSLParser::SimpleSemanticTypeContext *ctx) = 0;

  virtual void enterEnumSemanticType(LibSLParser::EnumSemanticTypeContext *ctx) = 0;
  virtual void exitEnumSemanticType(LibSLParser::EnumSemanticTypeContext *ctx) = 0;

  virtual void enterEnumSemanticTypeEntry(LibSLParser::EnumSemanticTypeEntryContext *ctx) = 0;
  virtual void exitEnumSemanticTypeEntry(LibSLParser::EnumSemanticTypeEntryContext *ctx) = 0;

  virtual void enterAnnotationDecl(LibSLParser::AnnotationDeclContext *ctx) = 0;
  virtual void exitAnnotationDecl(LibSLParser::AnnotationDeclContext *ctx) = 0;

  virtual void enterAnnotationDeclParams(LibSLParser::AnnotationDeclParamsContext *ctx) = 0;
  virtual void exitAnnotationDeclParams(LibSLParser::AnnotationDeclParamsContext *ctx) = 0;

  virtual void enterAnnotationDeclParamsPart(LibSLParser::AnnotationDeclParamsPartContext *ctx) = 0;
  virtual void exitAnnotationDeclParamsPart(LibSLParser::AnnotationDeclParamsPartContext *ctx) = 0;

  virtual void enterActionDecl(LibSLParser::ActionDeclContext *ctx) = 0;
  virtual void exitActionDecl(LibSLParser::ActionDeclContext *ctx) = 0;

  virtual void enterActionDeclParamList(LibSLParser::ActionDeclParamListContext *ctx) = 0;
  virtual void exitActionDeclParamList(LibSLParser::ActionDeclParamListContext *ctx) = 0;

  virtual void enterActionParameter(LibSLParser::ActionParameterContext *ctx) = 0;
  virtual void exitActionParameter(LibSLParser::ActionParameterContext *ctx) = 0;

  virtual void enterAutomatonDecl(LibSLParser::AutomatonDeclContext *ctx) = 0;
  virtual void exitAutomatonDecl(LibSLParser::AutomatonDeclContext *ctx) = 0;

  virtual void enterConstructorVariables(LibSLParser::ConstructorVariablesContext *ctx) = 0;
  virtual void exitConstructorVariables(LibSLParser::ConstructorVariablesContext *ctx) = 0;

  virtual void enterAutomatonStatement(LibSLParser::AutomatonStatementContext *ctx) = 0;
  virtual void exitAutomatonStatement(LibSLParser::AutomatonStatementContext *ctx) = 0;

  virtual void enterImplementedConcepts(LibSLParser::ImplementedConceptsContext *ctx) = 0;
  virtual void exitImplementedConcepts(LibSLParser::ImplementedConceptsContext *ctx) = 0;

  virtual void enterConcept_CPP(LibSLParser::Concept_CPPContext *ctx) = 0;
  virtual void exitConcept_CPP(LibSLParser::Concept_CPPContext *ctx) = 0;

  virtual void enterAutomatonStateDecl(LibSLParser::AutomatonStateDeclContext *ctx) = 0;
  virtual void exitAutomatonStateDecl(LibSLParser::AutomatonStateDeclContext *ctx) = 0;

  virtual void enterAutomatonShiftDecl(LibSLParser::AutomatonShiftDeclContext *ctx) = 0;
  virtual void exitAutomatonShiftDecl(LibSLParser::AutomatonShiftDeclContext *ctx) = 0;

  virtual void enterFunctionsList(LibSLParser::FunctionsListContext *ctx) = 0;
  virtual void exitFunctionsList(LibSLParser::FunctionsListContext *ctx) = 0;

  virtual void enterFunctionsListPart(LibSLParser::FunctionsListPartContext *ctx) = 0;
  virtual void exitFunctionsListPart(LibSLParser::FunctionsListPartContext *ctx) = 0;

  virtual void enterVariableDecl(LibSLParser::VariableDeclContext *ctx) = 0;
  virtual void exitVariableDecl(LibSLParser::VariableDeclContext *ctx) = 0;

  virtual void enterNameWithType(LibSLParser::NameWithTypeContext *ctx) = 0;
  virtual void exitNameWithType(LibSLParser::NameWithTypeContext *ctx) = 0;

  virtual void enterTypeExpression(LibSLParser::TypeExpressionContext *ctx) = 0;
  virtual void exitTypeExpression(LibSLParser::TypeExpressionContext *ctx) = 0;

  virtual void enterTypeIdentifier(LibSLParser::TypeIdentifierContext *ctx) = 0;
  virtual void exitTypeIdentifier(LibSLParser::TypeIdentifierContext *ctx) = 0;

  virtual void enterGeneric(LibSLParser::GenericContext *ctx) = 0;
  virtual void exitGeneric(LibSLParser::GenericContext *ctx) = 0;

  virtual void enterTypeArgument(LibSLParser::TypeArgumentContext *ctx) = 0;
  virtual void exitTypeArgument(LibSLParser::TypeArgumentContext *ctx) = 0;

  virtual void enterTypeIdentifierBounded(LibSLParser::TypeIdentifierBoundedContext *ctx) = 0;
  virtual void exitTypeIdentifierBounded(LibSLParser::TypeIdentifierBoundedContext *ctx) = 0;

  virtual void enterVariableAssignment(LibSLParser::VariableAssignmentContext *ctx) = 0;
  virtual void exitVariableAssignment(LibSLParser::VariableAssignmentContext *ctx) = 0;

  virtual void enterAssignmentRight(LibSLParser::AssignmentRightContext *ctx) = 0;
  virtual void exitAssignmentRight(LibSLParser::AssignmentRightContext *ctx) = 0;

  virtual void enterCallAutomatonConstructorWithNamedArgs(LibSLParser::CallAutomatonConstructorWithNamedArgsContext *ctx) = 0;
  virtual void exitCallAutomatonConstructorWithNamedArgs(LibSLParser::CallAutomatonConstructorWithNamedArgsContext *ctx) = 0;

  virtual void enterNamedArgs(LibSLParser::NamedArgsContext *ctx) = 0;
  virtual void exitNamedArgs(LibSLParser::NamedArgsContext *ctx) = 0;

  virtual void enterArgPair(LibSLParser::ArgPairContext *ctx) = 0;
  virtual void exitArgPair(LibSLParser::ArgPairContext *ctx) = 0;

  virtual void enterHeaderWithAsterisk(LibSLParser::HeaderWithAsteriskContext *ctx) = 0;
  virtual void exitHeaderWithAsterisk(LibSLParser::HeaderWithAsteriskContext *ctx) = 0;

  virtual void enterConstructorDecl(LibSLParser::ConstructorDeclContext *ctx) = 0;
  virtual void exitConstructorDecl(LibSLParser::ConstructorDeclContext *ctx) = 0;

  virtual void enterConstructorHeader(LibSLParser::ConstructorHeaderContext *ctx) = 0;
  virtual void exitConstructorHeader(LibSLParser::ConstructorHeaderContext *ctx) = 0;

  virtual void enterDestructorDecl(LibSLParser::DestructorDeclContext *ctx) = 0;
  virtual void exitDestructorDecl(LibSLParser::DestructorDeclContext *ctx) = 0;

  virtual void enterDestructorHeader(LibSLParser::DestructorHeaderContext *ctx) = 0;
  virtual void exitDestructorHeader(LibSLParser::DestructorHeaderContext *ctx) = 0;

  virtual void enterProcDecl(LibSLParser::ProcDeclContext *ctx) = 0;
  virtual void exitProcDecl(LibSLParser::ProcDeclContext *ctx) = 0;

  virtual void enterProcHeader(LibSLParser::ProcHeaderContext *ctx) = 0;
  virtual void exitProcHeader(LibSLParser::ProcHeaderContext *ctx) = 0;

  virtual void enterFunctionDecl(LibSLParser::FunctionDeclContext *ctx) = 0;
  virtual void exitFunctionDecl(LibSLParser::FunctionDeclContext *ctx) = 0;

  virtual void enterFunctionHeader(LibSLParser::FunctionHeaderContext *ctx) = 0;
  virtual void exitFunctionHeader(LibSLParser::FunctionHeaderContext *ctx) = 0;

  virtual void enterFunctionDeclArgList(LibSLParser::FunctionDeclArgListContext *ctx) = 0;
  virtual void exitFunctionDeclArgList(LibSLParser::FunctionDeclArgListContext *ctx) = 0;

  virtual void enterParameter(LibSLParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(LibSLParser::ParameterContext *ctx) = 0;

  virtual void enterAnnotationUsage(LibSLParser::AnnotationUsageContext *ctx) = 0;
  virtual void exitAnnotationUsage(LibSLParser::AnnotationUsageContext *ctx) = 0;

  virtual void enterFunctionContract(LibSLParser::FunctionContractContext *ctx) = 0;
  virtual void exitFunctionContract(LibSLParser::FunctionContractContext *ctx) = 0;

  virtual void enterFunctionBody(LibSLParser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(LibSLParser::FunctionBodyContext *ctx) = 0;

  virtual void enterFunctionBodyStatement(LibSLParser::FunctionBodyStatementContext *ctx) = 0;
  virtual void exitFunctionBodyStatement(LibSLParser::FunctionBodyStatementContext *ctx) = 0;

  virtual void enterIfStatement(LibSLParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(LibSLParser::IfStatementContext *ctx) = 0;

  virtual void enterElseStatement(LibSLParser::ElseStatementContext *ctx) = 0;
  virtual void exitElseStatement(LibSLParser::ElseStatementContext *ctx) = 0;

  virtual void enterActionUsage(LibSLParser::ActionUsageContext *ctx) = 0;
  virtual void exitActionUsage(LibSLParser::ActionUsageContext *ctx) = 0;

  virtual void enterProcUsage(LibSLParser::ProcUsageContext *ctx) = 0;
  virtual void exitProcUsage(LibSLParser::ProcUsageContext *ctx) = 0;

  virtual void enterExpressionsList(LibSLParser::ExpressionsListContext *ctx) = 0;
  virtual void exitExpressionsList(LibSLParser::ExpressionsListContext *ctx) = 0;

  virtual void enterAnnotationArgs(LibSLParser::AnnotationArgsContext *ctx) = 0;
  virtual void exitAnnotationArgs(LibSLParser::AnnotationArgsContext *ctx) = 0;

  virtual void enterArgName(LibSLParser::ArgNameContext *ctx) = 0;
  virtual void exitArgName(LibSLParser::ArgNameContext *ctx) = 0;

  virtual void enterRequiresContract(LibSLParser::RequiresContractContext *ctx) = 0;
  virtual void exitRequiresContract(LibSLParser::RequiresContractContext *ctx) = 0;

  virtual void enterEnsuresContract(LibSLParser::EnsuresContractContext *ctx) = 0;
  virtual void exitEnsuresContract(LibSLParser::EnsuresContractContext *ctx) = 0;

  virtual void enterAssignsContract(LibSLParser::AssignsContractContext *ctx) = 0;
  virtual void exitAssignsContract(LibSLParser::AssignsContractContext *ctx) = 0;

  virtual void enterExpression(LibSLParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(LibSLParser::ExpressionContext *ctx) = 0;

  virtual void enterHasAutomatonConcept(LibSLParser::HasAutomatonConceptContext *ctx) = 0;
  virtual void exitHasAutomatonConcept(LibSLParser::HasAutomatonConceptContext *ctx) = 0;

  virtual void enterBitShiftOp(LibSLParser::BitShiftOpContext *ctx) = 0;
  virtual void exitBitShiftOp(LibSLParser::BitShiftOpContext *ctx) = 0;

  virtual void enterLShift(LibSLParser::LShiftContext *ctx) = 0;
  virtual void exitLShift(LibSLParser::LShiftContext *ctx) = 0;

  virtual void enterRShift(LibSLParser::RShiftContext *ctx) = 0;
  virtual void exitRShift(LibSLParser::RShiftContext *ctx) = 0;

  virtual void enterURShift(LibSLParser::URShiftContext *ctx) = 0;
  virtual void exitURShift(LibSLParser::URShiftContext *ctx) = 0;

  virtual void enterULShift(LibSLParser::ULShiftContext *ctx) = 0;
  virtual void exitULShift(LibSLParser::ULShiftContext *ctx) = 0;

  virtual void enterExpressionAtomic(LibSLParser::ExpressionAtomicContext *ctx) = 0;
  virtual void exitExpressionAtomic(LibSLParser::ExpressionAtomicContext *ctx) = 0;

  virtual void enterPrimitiveLiteral(LibSLParser::PrimitiveLiteralContext *ctx) = 0;
  virtual void exitPrimitiveLiteral(LibSLParser::PrimitiveLiteralContext *ctx) = 0;

  virtual void enterQualifiedAccess(LibSLParser::QualifiedAccessContext *ctx) = 0;
  virtual void exitQualifiedAccess(LibSLParser::QualifiedAccessContext *ctx) = 0;

  virtual void enterSimpleCall(LibSLParser::SimpleCallContext *ctx) = 0;
  virtual void exitSimpleCall(LibSLParser::SimpleCallContext *ctx) = 0;

  virtual void enterIdentifierList(LibSLParser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(LibSLParser::IdentifierListContext *ctx) = 0;

  virtual void enterArrayLiteral(LibSLParser::ArrayLiteralContext *ctx) = 0;
  virtual void exitArrayLiteral(LibSLParser::ArrayLiteralContext *ctx) = 0;

  virtual void enterPeriodSeparatedFullName(LibSLParser::PeriodSeparatedFullNameContext *ctx) = 0;
  virtual void exitPeriodSeparatedFullName(LibSLParser::PeriodSeparatedFullNameContext *ctx) = 0;

  virtual void enterIntegerNumber(LibSLParser::IntegerNumberContext *ctx) = 0;
  virtual void exitIntegerNumber(LibSLParser::IntegerNumberContext *ctx) = 0;

  virtual void enterFloatNumber(LibSLParser::FloatNumberContext *ctx) = 0;
  virtual void exitFloatNumber(LibSLParser::FloatNumberContext *ctx) = 0;

  virtual void enterSuffix(LibSLParser::SuffixContext *ctx) = 0;
  virtual void exitSuffix(LibSLParser::SuffixContext *ctx) = 0;

  virtual void enterTypeConstraint(LibSLParser::TypeConstraintContext *ctx) = 0;
  virtual void exitTypeConstraint(LibSLParser::TypeConstraintContext *ctx) = 0;

  virtual void enterWhereConstraints(LibSLParser::WhereConstraintsContext *ctx) = 0;
  virtual void exitWhereConstraints(LibSLParser::WhereConstraintsContext *ctx) = 0;

  virtual void enterGenericBound(LibSLParser::GenericBoundContext *ctx) = 0;
  virtual void exitGenericBound(LibSLParser::GenericBoundContext *ctx) = 0;

  virtual void enterTypeIdentifierName(LibSLParser::TypeIdentifierNameContext *ctx) = 0;
  virtual void exitTypeIdentifierName(LibSLParser::TypeIdentifierNameContext *ctx) = 0;


};

