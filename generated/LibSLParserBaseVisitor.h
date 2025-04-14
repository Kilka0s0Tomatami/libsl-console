
// Generated from D:/PROjects/libsl-generated-3/grammar/LibSLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LibSLParserVisitor.h"


/**
 * This class provides an empty implementation of LibSLParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LibSLParserBaseVisitor : public LibSLParserVisitor {
public:

  virtual std::any visitFile(LibSLParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGlobalStatement(LibSLParser::GlobalStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTopLevelDecl(LibSLParser::TopLevelDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHeader(LibSLParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypealiasStatement(LibSLParser::TypealiasStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDefBlock(LibSLParser::TypeDefBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTargetType(LibSLParser::TargetTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeList(LibSLParser::TypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDefBlockStatement(LibSLParser::TypeDefBlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumBlock(LibSLParser::EnumBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumBlockStatement(LibSLParser::EnumBlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypesSection(LibSLParser::TypesSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSemanticTypeDecl(LibSLParser::SemanticTypeDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleSemanticType(LibSLParser::SimpleSemanticTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumSemanticType(LibSLParser::EnumSemanticTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumSemanticTypeEntry(LibSLParser::EnumSemanticTypeEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotationDecl(LibSLParser::AnnotationDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotationDeclParams(LibSLParser::AnnotationDeclParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotationDeclParamsPart(LibSLParser::AnnotationDeclParamsPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActionDecl(LibSLParser::ActionDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActionDeclParamList(LibSLParser::ActionDeclParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActionParameter(LibSLParser::ActionParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAutomatonDecl(LibSLParser::AutomatonDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorVariables(LibSLParser::ConstructorVariablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAutomatonStatement(LibSLParser::AutomatonStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplementedConcepts(LibSLParser::ImplementedConceptsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConcept_CPP(LibSLParser::Concept_CPPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAutomatonStateDecl(LibSLParser::AutomatonStateDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAutomatonShiftDecl(LibSLParser::AutomatonShiftDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionsList(LibSLParser::FunctionsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionsListPart(LibSLParser::FunctionsListPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDecl(LibSLParser::VariableDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNameWithType(LibSLParser::NameWithTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeExpression(LibSLParser::TypeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeIdentifier(LibSLParser::TypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric(LibSLParser::GenericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeArgument(LibSLParser::TypeArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeIdentifierBounded(LibSLParser::TypeIdentifierBoundedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableAssignment(LibSLParser::VariableAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentRight(LibSLParser::AssignmentRightContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallAutomatonConstructorWithNamedArgs(LibSLParser::CallAutomatonConstructorWithNamedArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedArgs(LibSLParser::NamedArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgPair(LibSLParser::ArgPairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHeaderWithAsterisk(LibSLParser::HeaderWithAsteriskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorDecl(LibSLParser::ConstructorDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorHeader(LibSLParser::ConstructorHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDestructorDecl(LibSLParser::DestructorDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDestructorHeader(LibSLParser::DestructorHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcDecl(LibSLParser::ProcDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcHeader(LibSLParser::ProcHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDecl(LibSLParser::FunctionDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionHeader(LibSLParser::FunctionHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclArgList(LibSLParser::FunctionDeclArgListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(LibSLParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotationUsage(LibSLParser::AnnotationUsageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionContract(LibSLParser::FunctionContractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionBody(LibSLParser::FunctionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionBodyStatement(LibSLParser::FunctionBodyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(LibSLParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseStatement(LibSLParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActionUsage(LibSLParser::ActionUsageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcUsage(LibSLParser::ProcUsageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionsList(LibSLParser::ExpressionsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotationArgs(LibSLParser::AnnotationArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgName(LibSLParser::ArgNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRequiresContract(LibSLParser::RequiresContractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnsuresContract(LibSLParser::EnsuresContractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignsContract(LibSLParser::AssignsContractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(LibSLParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHasAutomatonConcept(LibSLParser::HasAutomatonConceptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitShiftOp(LibSLParser::BitShiftOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLShift(LibSLParser::LShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRShift(LibSLParser::RShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitURShift(LibSLParser::URShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitULShift(LibSLParser::ULShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionAtomic(LibSLParser::ExpressionAtomicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitiveLiteral(LibSLParser::PrimitiveLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedAccess(LibSLParser::QualifiedAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleCall(LibSLParser::SimpleCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierList(LibSLParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayLiteral(LibSLParser::ArrayLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeriodSeparatedFullName(LibSLParser::PeriodSeparatedFullNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerNumber(LibSLParser::IntegerNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatNumber(LibSLParser::FloatNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSuffix(LibSLParser::SuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeConstraint(LibSLParser::TypeConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereConstraints(LibSLParser::WhereConstraintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenericBound(LibSLParser::GenericBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeIdentifierName(LibSLParser::TypeIdentifierNameContext *ctx) override {
    return visitChildren(ctx);
  }


};

