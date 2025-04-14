
// Generated from D:/PROjects/libsl-generated-3/grammar/LibSLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LibSLParserListener.h"


/**
 * This class provides an empty implementation of LibSLParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LibSLParserBaseListener : public LibSLParserListener {
public:

  virtual void enterFile(LibSLParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(LibSLParser::FileContext * /*ctx*/) override { }

  virtual void enterGlobalStatement(LibSLParser::GlobalStatementContext * /*ctx*/) override { }
  virtual void exitGlobalStatement(LibSLParser::GlobalStatementContext * /*ctx*/) override { }

  virtual void enterTopLevelDecl(LibSLParser::TopLevelDeclContext * /*ctx*/) override { }
  virtual void exitTopLevelDecl(LibSLParser::TopLevelDeclContext * /*ctx*/) override { }

  virtual void enterHeader(LibSLParser::HeaderContext * /*ctx*/) override { }
  virtual void exitHeader(LibSLParser::HeaderContext * /*ctx*/) override { }

  virtual void enterTypealiasStatement(LibSLParser::TypealiasStatementContext * /*ctx*/) override { }
  virtual void exitTypealiasStatement(LibSLParser::TypealiasStatementContext * /*ctx*/) override { }

  virtual void enterTypeDefBlock(LibSLParser::TypeDefBlockContext * /*ctx*/) override { }
  virtual void exitTypeDefBlock(LibSLParser::TypeDefBlockContext * /*ctx*/) override { }

  virtual void enterTargetType(LibSLParser::TargetTypeContext * /*ctx*/) override { }
  virtual void exitTargetType(LibSLParser::TargetTypeContext * /*ctx*/) override { }

  virtual void enterTypeList(LibSLParser::TypeListContext * /*ctx*/) override { }
  virtual void exitTypeList(LibSLParser::TypeListContext * /*ctx*/) override { }

  virtual void enterTypeDefBlockStatement(LibSLParser::TypeDefBlockStatementContext * /*ctx*/) override { }
  virtual void exitTypeDefBlockStatement(LibSLParser::TypeDefBlockStatementContext * /*ctx*/) override { }

  virtual void enterEnumBlock(LibSLParser::EnumBlockContext * /*ctx*/) override { }
  virtual void exitEnumBlock(LibSLParser::EnumBlockContext * /*ctx*/) override { }

  virtual void enterEnumBlockStatement(LibSLParser::EnumBlockStatementContext * /*ctx*/) override { }
  virtual void exitEnumBlockStatement(LibSLParser::EnumBlockStatementContext * /*ctx*/) override { }

  virtual void enterTypesSection(LibSLParser::TypesSectionContext * /*ctx*/) override { }
  virtual void exitTypesSection(LibSLParser::TypesSectionContext * /*ctx*/) override { }

  virtual void enterSemanticTypeDecl(LibSLParser::SemanticTypeDeclContext * /*ctx*/) override { }
  virtual void exitSemanticTypeDecl(LibSLParser::SemanticTypeDeclContext * /*ctx*/) override { }

  virtual void enterSimpleSemanticType(LibSLParser::SimpleSemanticTypeContext * /*ctx*/) override { }
  virtual void exitSimpleSemanticType(LibSLParser::SimpleSemanticTypeContext * /*ctx*/) override { }

  virtual void enterEnumSemanticType(LibSLParser::EnumSemanticTypeContext * /*ctx*/) override { }
  virtual void exitEnumSemanticType(LibSLParser::EnumSemanticTypeContext * /*ctx*/) override { }

  virtual void enterEnumSemanticTypeEntry(LibSLParser::EnumSemanticTypeEntryContext * /*ctx*/) override { }
  virtual void exitEnumSemanticTypeEntry(LibSLParser::EnumSemanticTypeEntryContext * /*ctx*/) override { }

  virtual void enterAnnotationDecl(LibSLParser::AnnotationDeclContext * /*ctx*/) override { }
  virtual void exitAnnotationDecl(LibSLParser::AnnotationDeclContext * /*ctx*/) override { }

  virtual void enterAnnotationDeclParams(LibSLParser::AnnotationDeclParamsContext * /*ctx*/) override { }
  virtual void exitAnnotationDeclParams(LibSLParser::AnnotationDeclParamsContext * /*ctx*/) override { }

  virtual void enterAnnotationDeclParamsPart(LibSLParser::AnnotationDeclParamsPartContext * /*ctx*/) override { }
  virtual void exitAnnotationDeclParamsPart(LibSLParser::AnnotationDeclParamsPartContext * /*ctx*/) override { }

  virtual void enterActionDecl(LibSLParser::ActionDeclContext * /*ctx*/) override { }
  virtual void exitActionDecl(LibSLParser::ActionDeclContext * /*ctx*/) override { }

  virtual void enterActionDeclParamList(LibSLParser::ActionDeclParamListContext * /*ctx*/) override { }
  virtual void exitActionDeclParamList(LibSLParser::ActionDeclParamListContext * /*ctx*/) override { }

  virtual void enterActionParameter(LibSLParser::ActionParameterContext * /*ctx*/) override { }
  virtual void exitActionParameter(LibSLParser::ActionParameterContext * /*ctx*/) override { }

  virtual void enterAutomatonDecl(LibSLParser::AutomatonDeclContext * /*ctx*/) override { }
  virtual void exitAutomatonDecl(LibSLParser::AutomatonDeclContext * /*ctx*/) override { }

  virtual void enterConstructorVariables(LibSLParser::ConstructorVariablesContext * /*ctx*/) override { }
  virtual void exitConstructorVariables(LibSLParser::ConstructorVariablesContext * /*ctx*/) override { }

  virtual void enterAutomatonStatement(LibSLParser::AutomatonStatementContext * /*ctx*/) override { }
  virtual void exitAutomatonStatement(LibSLParser::AutomatonStatementContext * /*ctx*/) override { }

  virtual void enterImplementedConcepts(LibSLParser::ImplementedConceptsContext * /*ctx*/) override { }
  virtual void exitImplementedConcepts(LibSLParser::ImplementedConceptsContext * /*ctx*/) override { }

  virtual void enterConcept_CPP(LibSLParser::Concept_CPPContext * /*ctx*/) override { }
  virtual void exitConcept_CPP(LibSLParser::Concept_CPPContext * /*ctx*/) override { }

  virtual void enterAutomatonStateDecl(LibSLParser::AutomatonStateDeclContext * /*ctx*/) override { }
  virtual void exitAutomatonStateDecl(LibSLParser::AutomatonStateDeclContext * /*ctx*/) override { }

  virtual void enterAutomatonShiftDecl(LibSLParser::AutomatonShiftDeclContext * /*ctx*/) override { }
  virtual void exitAutomatonShiftDecl(LibSLParser::AutomatonShiftDeclContext * /*ctx*/) override { }

  virtual void enterFunctionsList(LibSLParser::FunctionsListContext * /*ctx*/) override { }
  virtual void exitFunctionsList(LibSLParser::FunctionsListContext * /*ctx*/) override { }

  virtual void enterFunctionsListPart(LibSLParser::FunctionsListPartContext * /*ctx*/) override { }
  virtual void exitFunctionsListPart(LibSLParser::FunctionsListPartContext * /*ctx*/) override { }

  virtual void enterVariableDecl(LibSLParser::VariableDeclContext * /*ctx*/) override { }
  virtual void exitVariableDecl(LibSLParser::VariableDeclContext * /*ctx*/) override { }

  virtual void enterNameWithType(LibSLParser::NameWithTypeContext * /*ctx*/) override { }
  virtual void exitNameWithType(LibSLParser::NameWithTypeContext * /*ctx*/) override { }

  virtual void enterTypeExpression(LibSLParser::TypeExpressionContext * /*ctx*/) override { }
  virtual void exitTypeExpression(LibSLParser::TypeExpressionContext * /*ctx*/) override { }

  virtual void enterTypeIdentifier(LibSLParser::TypeIdentifierContext * /*ctx*/) override { }
  virtual void exitTypeIdentifier(LibSLParser::TypeIdentifierContext * /*ctx*/) override { }

  virtual void enterGeneric(LibSLParser::GenericContext * /*ctx*/) override { }
  virtual void exitGeneric(LibSLParser::GenericContext * /*ctx*/) override { }

  virtual void enterTypeArgument(LibSLParser::TypeArgumentContext * /*ctx*/) override { }
  virtual void exitTypeArgument(LibSLParser::TypeArgumentContext * /*ctx*/) override { }

  virtual void enterTypeIdentifierBounded(LibSLParser::TypeIdentifierBoundedContext * /*ctx*/) override { }
  virtual void exitTypeIdentifierBounded(LibSLParser::TypeIdentifierBoundedContext * /*ctx*/) override { }

  virtual void enterVariableAssignment(LibSLParser::VariableAssignmentContext * /*ctx*/) override { }
  virtual void exitVariableAssignment(LibSLParser::VariableAssignmentContext * /*ctx*/) override { }

  virtual void enterAssignmentRight(LibSLParser::AssignmentRightContext * /*ctx*/) override { }
  virtual void exitAssignmentRight(LibSLParser::AssignmentRightContext * /*ctx*/) override { }

  virtual void enterCallAutomatonConstructorWithNamedArgs(LibSLParser::CallAutomatonConstructorWithNamedArgsContext * /*ctx*/) override { }
  virtual void exitCallAutomatonConstructorWithNamedArgs(LibSLParser::CallAutomatonConstructorWithNamedArgsContext * /*ctx*/) override { }

  virtual void enterNamedArgs(LibSLParser::NamedArgsContext * /*ctx*/) override { }
  virtual void exitNamedArgs(LibSLParser::NamedArgsContext * /*ctx*/) override { }

  virtual void enterArgPair(LibSLParser::ArgPairContext * /*ctx*/) override { }
  virtual void exitArgPair(LibSLParser::ArgPairContext * /*ctx*/) override { }

  virtual void enterHeaderWithAsterisk(LibSLParser::HeaderWithAsteriskContext * /*ctx*/) override { }
  virtual void exitHeaderWithAsterisk(LibSLParser::HeaderWithAsteriskContext * /*ctx*/) override { }

  virtual void enterConstructorDecl(LibSLParser::ConstructorDeclContext * /*ctx*/) override { }
  virtual void exitConstructorDecl(LibSLParser::ConstructorDeclContext * /*ctx*/) override { }

  virtual void enterConstructorHeader(LibSLParser::ConstructorHeaderContext * /*ctx*/) override { }
  virtual void exitConstructorHeader(LibSLParser::ConstructorHeaderContext * /*ctx*/) override { }

  virtual void enterDestructorDecl(LibSLParser::DestructorDeclContext * /*ctx*/) override { }
  virtual void exitDestructorDecl(LibSLParser::DestructorDeclContext * /*ctx*/) override { }

  virtual void enterDestructorHeader(LibSLParser::DestructorHeaderContext * /*ctx*/) override { }
  virtual void exitDestructorHeader(LibSLParser::DestructorHeaderContext * /*ctx*/) override { }

  virtual void enterProcDecl(LibSLParser::ProcDeclContext * /*ctx*/) override { }
  virtual void exitProcDecl(LibSLParser::ProcDeclContext * /*ctx*/) override { }

  virtual void enterProcHeader(LibSLParser::ProcHeaderContext * /*ctx*/) override { }
  virtual void exitProcHeader(LibSLParser::ProcHeaderContext * /*ctx*/) override { }

  virtual void enterFunctionDecl(LibSLParser::FunctionDeclContext * /*ctx*/) override { }
  virtual void exitFunctionDecl(LibSLParser::FunctionDeclContext * /*ctx*/) override { }

  virtual void enterFunctionHeader(LibSLParser::FunctionHeaderContext * /*ctx*/) override { }
  virtual void exitFunctionHeader(LibSLParser::FunctionHeaderContext * /*ctx*/) override { }

  virtual void enterFunctionDeclArgList(LibSLParser::FunctionDeclArgListContext * /*ctx*/) override { }
  virtual void exitFunctionDeclArgList(LibSLParser::FunctionDeclArgListContext * /*ctx*/) override { }

  virtual void enterParameter(LibSLParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(LibSLParser::ParameterContext * /*ctx*/) override { }

  virtual void enterAnnotationUsage(LibSLParser::AnnotationUsageContext * /*ctx*/) override { }
  virtual void exitAnnotationUsage(LibSLParser::AnnotationUsageContext * /*ctx*/) override { }

  virtual void enterFunctionContract(LibSLParser::FunctionContractContext * /*ctx*/) override { }
  virtual void exitFunctionContract(LibSLParser::FunctionContractContext * /*ctx*/) override { }

  virtual void enterFunctionBody(LibSLParser::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(LibSLParser::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterFunctionBodyStatement(LibSLParser::FunctionBodyStatementContext * /*ctx*/) override { }
  virtual void exitFunctionBodyStatement(LibSLParser::FunctionBodyStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(LibSLParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(LibSLParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterElseStatement(LibSLParser::ElseStatementContext * /*ctx*/) override { }
  virtual void exitElseStatement(LibSLParser::ElseStatementContext * /*ctx*/) override { }

  virtual void enterActionUsage(LibSLParser::ActionUsageContext * /*ctx*/) override { }
  virtual void exitActionUsage(LibSLParser::ActionUsageContext * /*ctx*/) override { }

  virtual void enterProcUsage(LibSLParser::ProcUsageContext * /*ctx*/) override { }
  virtual void exitProcUsage(LibSLParser::ProcUsageContext * /*ctx*/) override { }

  virtual void enterExpressionsList(LibSLParser::ExpressionsListContext * /*ctx*/) override { }
  virtual void exitExpressionsList(LibSLParser::ExpressionsListContext * /*ctx*/) override { }

  virtual void enterAnnotationArgs(LibSLParser::AnnotationArgsContext * /*ctx*/) override { }
  virtual void exitAnnotationArgs(LibSLParser::AnnotationArgsContext * /*ctx*/) override { }

  virtual void enterArgName(LibSLParser::ArgNameContext * /*ctx*/) override { }
  virtual void exitArgName(LibSLParser::ArgNameContext * /*ctx*/) override { }

  virtual void enterRequiresContract(LibSLParser::RequiresContractContext * /*ctx*/) override { }
  virtual void exitRequiresContract(LibSLParser::RequiresContractContext * /*ctx*/) override { }

  virtual void enterEnsuresContract(LibSLParser::EnsuresContractContext * /*ctx*/) override { }
  virtual void exitEnsuresContract(LibSLParser::EnsuresContractContext * /*ctx*/) override { }

  virtual void enterAssignsContract(LibSLParser::AssignsContractContext * /*ctx*/) override { }
  virtual void exitAssignsContract(LibSLParser::AssignsContractContext * /*ctx*/) override { }

  virtual void enterExpression(LibSLParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(LibSLParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterHasAutomatonConcept(LibSLParser::HasAutomatonConceptContext * /*ctx*/) override { }
  virtual void exitHasAutomatonConcept(LibSLParser::HasAutomatonConceptContext * /*ctx*/) override { }

  virtual void enterBitShiftOp(LibSLParser::BitShiftOpContext * /*ctx*/) override { }
  virtual void exitBitShiftOp(LibSLParser::BitShiftOpContext * /*ctx*/) override { }

  virtual void enterLShift(LibSLParser::LShiftContext * /*ctx*/) override { }
  virtual void exitLShift(LibSLParser::LShiftContext * /*ctx*/) override { }

  virtual void enterRShift(LibSLParser::RShiftContext * /*ctx*/) override { }
  virtual void exitRShift(LibSLParser::RShiftContext * /*ctx*/) override { }

  virtual void enterURShift(LibSLParser::URShiftContext * /*ctx*/) override { }
  virtual void exitURShift(LibSLParser::URShiftContext * /*ctx*/) override { }

  virtual void enterULShift(LibSLParser::ULShiftContext * /*ctx*/) override { }
  virtual void exitULShift(LibSLParser::ULShiftContext * /*ctx*/) override { }

  virtual void enterExpressionAtomic(LibSLParser::ExpressionAtomicContext * /*ctx*/) override { }
  virtual void exitExpressionAtomic(LibSLParser::ExpressionAtomicContext * /*ctx*/) override { }

  virtual void enterPrimitiveLiteral(LibSLParser::PrimitiveLiteralContext * /*ctx*/) override { }
  virtual void exitPrimitiveLiteral(LibSLParser::PrimitiveLiteralContext * /*ctx*/) override { }

  virtual void enterQualifiedAccess(LibSLParser::QualifiedAccessContext * /*ctx*/) override { }
  virtual void exitQualifiedAccess(LibSLParser::QualifiedAccessContext * /*ctx*/) override { }

  virtual void enterSimpleCall(LibSLParser::SimpleCallContext * /*ctx*/) override { }
  virtual void exitSimpleCall(LibSLParser::SimpleCallContext * /*ctx*/) override { }

  virtual void enterIdentifierList(LibSLParser::IdentifierListContext * /*ctx*/) override { }
  virtual void exitIdentifierList(LibSLParser::IdentifierListContext * /*ctx*/) override { }

  virtual void enterArrayLiteral(LibSLParser::ArrayLiteralContext * /*ctx*/) override { }
  virtual void exitArrayLiteral(LibSLParser::ArrayLiteralContext * /*ctx*/) override { }

  virtual void enterPeriodSeparatedFullName(LibSLParser::PeriodSeparatedFullNameContext * /*ctx*/) override { }
  virtual void exitPeriodSeparatedFullName(LibSLParser::PeriodSeparatedFullNameContext * /*ctx*/) override { }

  virtual void enterIntegerNumber(LibSLParser::IntegerNumberContext * /*ctx*/) override { }
  virtual void exitIntegerNumber(LibSLParser::IntegerNumberContext * /*ctx*/) override { }

  virtual void enterFloatNumber(LibSLParser::FloatNumberContext * /*ctx*/) override { }
  virtual void exitFloatNumber(LibSLParser::FloatNumberContext * /*ctx*/) override { }

  virtual void enterSuffix(LibSLParser::SuffixContext * /*ctx*/) override { }
  virtual void exitSuffix(LibSLParser::SuffixContext * /*ctx*/) override { }

  virtual void enterTypeConstraint(LibSLParser::TypeConstraintContext * /*ctx*/) override { }
  virtual void exitTypeConstraint(LibSLParser::TypeConstraintContext * /*ctx*/) override { }

  virtual void enterWhereConstraints(LibSLParser::WhereConstraintsContext * /*ctx*/) override { }
  virtual void exitWhereConstraints(LibSLParser::WhereConstraintsContext * /*ctx*/) override { }

  virtual void enterGenericBound(LibSLParser::GenericBoundContext * /*ctx*/) override { }
  virtual void exitGenericBound(LibSLParser::GenericBoundContext * /*ctx*/) override { }

  virtual void enterTypeIdentifierName(LibSLParser::TypeIdentifierNameContext * /*ctx*/) override { }
  virtual void exitTypeIdentifierName(LibSLParser::TypeIdentifierNameContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

