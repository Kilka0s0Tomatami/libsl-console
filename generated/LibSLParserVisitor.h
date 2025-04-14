
// Generated from D:/PROjects/libsl-generated-3/grammar/LibSLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LibSLParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LibSLParser.
 */
class  LibSLParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LibSLParser.
   */
    virtual std::any visitFile(LibSLParser::FileContext *context) = 0;

    virtual std::any visitGlobalStatement(LibSLParser::GlobalStatementContext *context) = 0;

    virtual std::any visitTopLevelDecl(LibSLParser::TopLevelDeclContext *context) = 0;

    virtual std::any visitHeader(LibSLParser::HeaderContext *context) = 0;

    virtual std::any visitTypealiasStatement(LibSLParser::TypealiasStatementContext *context) = 0;

    virtual std::any visitTypeDefBlock(LibSLParser::TypeDefBlockContext *context) = 0;

    virtual std::any visitTargetType(LibSLParser::TargetTypeContext *context) = 0;

    virtual std::any visitTypeList(LibSLParser::TypeListContext *context) = 0;

    virtual std::any visitTypeDefBlockStatement(LibSLParser::TypeDefBlockStatementContext *context) = 0;

    virtual std::any visitEnumBlock(LibSLParser::EnumBlockContext *context) = 0;

    virtual std::any visitEnumBlockStatement(LibSLParser::EnumBlockStatementContext *context) = 0;

    virtual std::any visitTypesSection(LibSLParser::TypesSectionContext *context) = 0;

    virtual std::any visitSemanticTypeDecl(LibSLParser::SemanticTypeDeclContext *context) = 0;

    virtual std::any visitSimpleSemanticType(LibSLParser::SimpleSemanticTypeContext *context) = 0;

    virtual std::any visitEnumSemanticType(LibSLParser::EnumSemanticTypeContext *context) = 0;

    virtual std::any visitEnumSemanticTypeEntry(LibSLParser::EnumSemanticTypeEntryContext *context) = 0;

    virtual std::any visitAnnotationDecl(LibSLParser::AnnotationDeclContext *context) = 0;

    virtual std::any visitAnnotationDeclParams(LibSLParser::AnnotationDeclParamsContext *context) = 0;

    virtual std::any visitAnnotationDeclParamsPart(LibSLParser::AnnotationDeclParamsPartContext *context) = 0;

    virtual std::any visitActionDecl(LibSLParser::ActionDeclContext *context) = 0;

    virtual std::any visitActionDeclParamList(LibSLParser::ActionDeclParamListContext *context) = 0;

    virtual std::any visitActionParameter(LibSLParser::ActionParameterContext *context) = 0;

    virtual std::any visitAutomatonDecl(LibSLParser::AutomatonDeclContext *context) = 0;

    virtual std::any visitConstructorVariables(LibSLParser::ConstructorVariablesContext *context) = 0;

    virtual std::any visitAutomatonStatement(LibSLParser::AutomatonStatementContext *context) = 0;

    virtual std::any visitImplementedConcepts(LibSLParser::ImplementedConceptsContext *context) = 0;

    virtual std::any visitConcept_CPP(LibSLParser::Concept_CPPContext *context) = 0;

    virtual std::any visitAutomatonStateDecl(LibSLParser::AutomatonStateDeclContext *context) = 0;

    virtual std::any visitAutomatonShiftDecl(LibSLParser::AutomatonShiftDeclContext *context) = 0;

    virtual std::any visitFunctionsList(LibSLParser::FunctionsListContext *context) = 0;

    virtual std::any visitFunctionsListPart(LibSLParser::FunctionsListPartContext *context) = 0;

    virtual std::any visitVariableDecl(LibSLParser::VariableDeclContext *context) = 0;

    virtual std::any visitNameWithType(LibSLParser::NameWithTypeContext *context) = 0;

    virtual std::any visitTypeExpression(LibSLParser::TypeExpressionContext *context) = 0;

    virtual std::any visitTypeIdentifier(LibSLParser::TypeIdentifierContext *context) = 0;

    virtual std::any visitGeneric(LibSLParser::GenericContext *context) = 0;

    virtual std::any visitTypeArgument(LibSLParser::TypeArgumentContext *context) = 0;

    virtual std::any visitTypeIdentifierBounded(LibSLParser::TypeIdentifierBoundedContext *context) = 0;

    virtual std::any visitVariableAssignment(LibSLParser::VariableAssignmentContext *context) = 0;

    virtual std::any visitAssignmentRight(LibSLParser::AssignmentRightContext *context) = 0;

    virtual std::any visitCallAutomatonConstructorWithNamedArgs(LibSLParser::CallAutomatonConstructorWithNamedArgsContext *context) = 0;

    virtual std::any visitNamedArgs(LibSLParser::NamedArgsContext *context) = 0;

    virtual std::any visitArgPair(LibSLParser::ArgPairContext *context) = 0;

    virtual std::any visitHeaderWithAsterisk(LibSLParser::HeaderWithAsteriskContext *context) = 0;

    virtual std::any visitConstructorDecl(LibSLParser::ConstructorDeclContext *context) = 0;

    virtual std::any visitConstructorHeader(LibSLParser::ConstructorHeaderContext *context) = 0;

    virtual std::any visitDestructorDecl(LibSLParser::DestructorDeclContext *context) = 0;

    virtual std::any visitDestructorHeader(LibSLParser::DestructorHeaderContext *context) = 0;

    virtual std::any visitProcDecl(LibSLParser::ProcDeclContext *context) = 0;

    virtual std::any visitProcHeader(LibSLParser::ProcHeaderContext *context) = 0;

    virtual std::any visitFunctionDecl(LibSLParser::FunctionDeclContext *context) = 0;

    virtual std::any visitFunctionHeader(LibSLParser::FunctionHeaderContext *context) = 0;

    virtual std::any visitFunctionDeclArgList(LibSLParser::FunctionDeclArgListContext *context) = 0;

    virtual std::any visitParameter(LibSLParser::ParameterContext *context) = 0;

    virtual std::any visitAnnotationUsage(LibSLParser::AnnotationUsageContext *context) = 0;

    virtual std::any visitFunctionContract(LibSLParser::FunctionContractContext *context) = 0;

    virtual std::any visitFunctionBody(LibSLParser::FunctionBodyContext *context) = 0;

    virtual std::any visitFunctionBodyStatement(LibSLParser::FunctionBodyStatementContext *context) = 0;

    virtual std::any visitIfStatement(LibSLParser::IfStatementContext *context) = 0;

    virtual std::any visitElseStatement(LibSLParser::ElseStatementContext *context) = 0;

    virtual std::any visitActionUsage(LibSLParser::ActionUsageContext *context) = 0;

    virtual std::any visitProcUsage(LibSLParser::ProcUsageContext *context) = 0;

    virtual std::any visitExpressionsList(LibSLParser::ExpressionsListContext *context) = 0;

    virtual std::any visitAnnotationArgs(LibSLParser::AnnotationArgsContext *context) = 0;

    virtual std::any visitArgName(LibSLParser::ArgNameContext *context) = 0;

    virtual std::any visitRequiresContract(LibSLParser::RequiresContractContext *context) = 0;

    virtual std::any visitEnsuresContract(LibSLParser::EnsuresContractContext *context) = 0;

    virtual std::any visitAssignsContract(LibSLParser::AssignsContractContext *context) = 0;

    virtual std::any visitExpression(LibSLParser::ExpressionContext *context) = 0;

    virtual std::any visitHasAutomatonConcept(LibSLParser::HasAutomatonConceptContext *context) = 0;

    virtual std::any visitBitShiftOp(LibSLParser::BitShiftOpContext *context) = 0;

    virtual std::any visitLShift(LibSLParser::LShiftContext *context) = 0;

    virtual std::any visitRShift(LibSLParser::RShiftContext *context) = 0;

    virtual std::any visitURShift(LibSLParser::URShiftContext *context) = 0;

    virtual std::any visitULShift(LibSLParser::ULShiftContext *context) = 0;

    virtual std::any visitExpressionAtomic(LibSLParser::ExpressionAtomicContext *context) = 0;

    virtual std::any visitPrimitiveLiteral(LibSLParser::PrimitiveLiteralContext *context) = 0;

    virtual std::any visitQualifiedAccess(LibSLParser::QualifiedAccessContext *context) = 0;

    virtual std::any visitSimpleCall(LibSLParser::SimpleCallContext *context) = 0;

    virtual std::any visitIdentifierList(LibSLParser::IdentifierListContext *context) = 0;

    virtual std::any visitArrayLiteral(LibSLParser::ArrayLiteralContext *context) = 0;

    virtual std::any visitPeriodSeparatedFullName(LibSLParser::PeriodSeparatedFullNameContext *context) = 0;

    virtual std::any visitIntegerNumber(LibSLParser::IntegerNumberContext *context) = 0;

    virtual std::any visitFloatNumber(LibSLParser::FloatNumberContext *context) = 0;

    virtual std::any visitSuffix(LibSLParser::SuffixContext *context) = 0;

    virtual std::any visitTypeConstraint(LibSLParser::TypeConstraintContext *context) = 0;

    virtual std::any visitWhereConstraints(LibSLParser::WhereConstraintsContext *context) = 0;

    virtual std::any visitGenericBound(LibSLParser::GenericBoundContext *context) = 0;

    virtual std::any visitTypeIdentifierName(LibSLParser::TypeIdentifierNameContext *context) = 0;


};

