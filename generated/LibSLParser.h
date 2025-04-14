
// Generated from D:/PROjects/libsl-generated-3/grammar/LibSLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LibSLParser : public antlr4::Parser {
public:
  enum {
    SEMICOLON = 1, ASSIGN_OP = 2, EQ = 3, L_BRACE = 4, R_BRACE = 5, L_BRACKET = 6, 
    R_BRACKET = 7, L_SQUARE_BRACKET = 8, R_SQUARE_BRACKET = 9, DOT = 10, 
    COLON = 11, COMMA = 12, MINUS_ARROW = 13, L_ARROW = 14, R_ARROW = 15, 
    ASTERISK = 16, SLASH = 17, PERCENT = 18, PLUS = 19, MINUS = 20, INCREMENT = 21, 
    DECREMENT = 22, PLUS_EQ = 23, MINUS_EQ = 24, ASTERISK_EQ = 25, SLASH_EQ = 26, 
    PERCENT_EQ = 27, EXCLAMATION = 28, EXCLAMATION_EQ = 29, L_ARROW_EQ = 30, 
    R_ARROW_EQ = 31, AMPERSAND = 32, DOUBLE_AMPERSAND = 33, BIT_OR = 34, 
    LOGIC_OR = 35, XOR = 36, TILDE = 37, AMPERSAND_EQ = 38, OR_EQ = 39, 
    XOR_EQ = 40, R_SHIFT_EQ = 41, L_SHIFT_EQ = 42, APOSTROPHE = 43, BACK_QOUTE = 44, 
    ImportStatement = 45, IncludeStatement = 46, IMPORT = 47, INCLUDE = 48, 
    LIBSL = 49, LIBRARY = 50, VERSION = 51, LANGUAGE = 52, URL = 53, TYPEALIAS = 54, 
    TYPE = 55, TYPES = 56, ENUM = 57, ANNOTATION = 58, AUTOMATON = 59, CONCEPT_CPP = 60, 
    VAR = 61, VAL = 62, INITSTATE = 63, STATE = 64, FINISHSTATE = 65, SHIFT = 66, 
    NEW = 67, FUN = 68, CONSTRUCTOR = 69, DESTRUCTOR = 70, PROC = 71, AT = 72, 
    ACTION = 73, REQUIRES = 74, ENSURES = 75, ASSIGNS = 76, TRUE = 77, FALSE = 78, 
    DEFINE = 79, IF = 80, ELSE = 81, BY = 82, IS = 83, AS = 84, NULL_CPP = 85, 
    IN = 86, OUT = 87, WHERE = 88, IntegerLiteral = 89, FloatingPointLiteral = 90, 
    Identifier = 91, DoubleQuotedString = 92, CHARACTER = 93, Digit = 94, 
    WS = 95, BR = 96, COMMENT = 97, LINE_COMMENT = 98, UNBOUNDED = 99
  };

  enum {
    RuleFile = 0, RuleGlobalStatement = 1, RuleTopLevelDecl = 2, RuleHeader = 3, 
    RuleTypealiasStatement = 4, RuleTypeDefBlock = 5, RuleTargetType = 6, 
    RuleTypeList = 7, RuleTypeDefBlockStatement = 8, RuleEnumBlock = 9, 
    RuleEnumBlockStatement = 10, RuleTypesSection = 11, RuleSemanticTypeDecl = 12, 
    RuleSimpleSemanticType = 13, RuleEnumSemanticType = 14, RuleEnumSemanticTypeEntry = 15, 
    RuleAnnotationDecl = 16, RuleAnnotationDeclParams = 17, RuleAnnotationDeclParamsPart = 18, 
    RuleActionDecl = 19, RuleActionDeclParamList = 20, RuleActionParameter = 21, 
    RuleAutomatonDecl = 22, RuleConstructorVariables = 23, RuleAutomatonStatement = 24, 
    RuleImplementedConcepts = 25, RuleConcept_CPP = 26, RuleAutomatonStateDecl = 27, 
    RuleAutomatonShiftDecl = 28, RuleFunctionsList = 29, RuleFunctionsListPart = 30, 
    RuleVariableDecl = 31, RuleNameWithType = 32, RuleTypeExpression = 33, 
    RuleTypeIdentifier = 34, RuleGeneric = 35, RuleTypeArgument = 36, RuleTypeIdentifierBounded = 37, 
    RuleVariableAssignment = 38, RuleAssignmentRight = 39, RuleCallAutomatonConstructorWithNamedArgs = 40, 
    RuleNamedArgs = 41, RuleArgPair = 42, RuleHeaderWithAsterisk = 43, RuleConstructorDecl = 44, 
    RuleConstructorHeader = 45, RuleDestructorDecl = 46, RuleDestructorHeader = 47, 
    RuleProcDecl = 48, RuleProcHeader = 49, RuleFunctionDecl = 50, RuleFunctionHeader = 51, 
    RuleFunctionDeclArgList = 52, RuleParameter = 53, RuleAnnotationUsage = 54, 
    RuleFunctionContract = 55, RuleFunctionBody = 56, RuleFunctionBodyStatement = 57, 
    RuleIfStatement = 58, RuleElseStatement = 59, RuleActionUsage = 60, 
    RuleProcUsage = 61, RuleExpressionsList = 62, RuleAnnotationArgs = 63, 
    RuleArgName = 64, RuleRequiresContract = 65, RuleEnsuresContract = 66, 
    RuleAssignsContract = 67, RuleExpression = 68, RuleHasAutomatonConcept = 69, 
    RuleBitShiftOp = 70, RuleLShift = 71, RuleRShift = 72, RuleURShift = 73, 
    RuleULShift = 74, RuleExpressionAtomic = 75, RulePrimitiveLiteral = 76, 
    RuleQualifiedAccess = 77, RuleSimpleCall = 78, RuleIdentifierList = 79, 
    RuleArrayLiteral = 80, RulePeriodSeparatedFullName = 81, RuleIntegerNumber = 82, 
    RuleFloatNumber = 83, RuleSuffix = 84, RuleTypeConstraint = 85, RuleWhereConstraints = 86, 
    RuleGenericBound = 87, RuleTypeIdentifierName = 88
  };

  explicit LibSLParser(antlr4::TokenStream *input);

  LibSLParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~LibSLParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class FileContext;
  class GlobalStatementContext;
  class TopLevelDeclContext;
  class HeaderContext;
  class TypealiasStatementContext;
  class TypeDefBlockContext;
  class TargetTypeContext;
  class TypeListContext;
  class TypeDefBlockStatementContext;
  class EnumBlockContext;
  class EnumBlockStatementContext;
  class TypesSectionContext;
  class SemanticTypeDeclContext;
  class SimpleSemanticTypeContext;
  class EnumSemanticTypeContext;
  class EnumSemanticTypeEntryContext;
  class AnnotationDeclContext;
  class AnnotationDeclParamsContext;
  class AnnotationDeclParamsPartContext;
  class ActionDeclContext;
  class ActionDeclParamListContext;
  class ActionParameterContext;
  class AutomatonDeclContext;
  class ConstructorVariablesContext;
  class AutomatonStatementContext;
  class ImplementedConceptsContext;
  class Concept_CPPContext;
  class AutomatonStateDeclContext;
  class AutomatonShiftDeclContext;
  class FunctionsListContext;
  class FunctionsListPartContext;
  class VariableDeclContext;
  class NameWithTypeContext;
  class TypeExpressionContext;
  class TypeIdentifierContext;
  class GenericContext;
  class TypeArgumentContext;
  class TypeIdentifierBoundedContext;
  class VariableAssignmentContext;
  class AssignmentRightContext;
  class CallAutomatonConstructorWithNamedArgsContext;
  class NamedArgsContext;
  class ArgPairContext;
  class HeaderWithAsteriskContext;
  class ConstructorDeclContext;
  class ConstructorHeaderContext;
  class DestructorDeclContext;
  class DestructorHeaderContext;
  class ProcDeclContext;
  class ProcHeaderContext;
  class FunctionDeclContext;
  class FunctionHeaderContext;
  class FunctionDeclArgListContext;
  class ParameterContext;
  class AnnotationUsageContext;
  class FunctionContractContext;
  class FunctionBodyContext;
  class FunctionBodyStatementContext;
  class IfStatementContext;
  class ElseStatementContext;
  class ActionUsageContext;
  class ProcUsageContext;
  class ExpressionsListContext;
  class AnnotationArgsContext;
  class ArgNameContext;
  class RequiresContractContext;
  class EnsuresContractContext;
  class AssignsContractContext;
  class ExpressionContext;
  class HasAutomatonConceptContext;
  class BitShiftOpContext;
  class LShiftContext;
  class RShiftContext;
  class URShiftContext;
  class ULShiftContext;
  class ExpressionAtomicContext;
  class PrimitiveLiteralContext;
  class QualifiedAccessContext;
  class SimpleCallContext;
  class IdentifierListContext;
  class ArrayLiteralContext;
  class PeriodSeparatedFullNameContext;
  class IntegerNumberContext;
  class FloatNumberContext;
  class SuffixContext;
  class TypeConstraintContext;
  class WhereConstraintsContext;
  class GenericBoundContext;
  class TypeIdentifierNameContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    HeaderContext *header();
    std::vector<GlobalStatementContext *> globalStatement();
    GlobalStatementContext* globalStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileContext* file();

  class  GlobalStatementContext : public antlr4::ParserRuleContext {
  public:
    GlobalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ImportStatement();
    antlr4::tree::TerminalNode *IncludeStatement();
    TypesSectionContext *typesSection();
    TypealiasStatementContext *typealiasStatement();
    TypeDefBlockContext *typeDefBlock();
    EnumBlockContext *enumBlock();
    AnnotationDeclContext *annotationDecl();
    ActionDeclContext *actionDecl();
    TopLevelDeclContext *topLevelDecl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalStatementContext* globalStatement();

  class  TopLevelDeclContext : public antlr4::ParserRuleContext {
  public:
    TopLevelDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AutomatonDeclContext *automatonDecl();
    FunctionDeclContext *functionDecl();
    VariableDeclContext *variableDecl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TopLevelDeclContext* topLevelDecl();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *lslver = nullptr;
    antlr4::Token *libraryName = nullptr;
    antlr4::Token *ver = nullptr;
    antlr4::Token *lang = nullptr;
    antlr4::Token *link = nullptr;
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    antlr4::tree::TerminalNode *LIBSL();
    antlr4::tree::TerminalNode *LIBRARY();
    std::vector<antlr4::tree::TerminalNode *> DoubleQuotedString();
    antlr4::tree::TerminalNode* DoubleQuotedString(size_t i);
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *URL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderContext* header();

  class  TypealiasStatementContext : public antlr4::ParserRuleContext {
  public:
    LibSLParser::TypeIdentifierContext *left = nullptr;
    LibSLParser::TypeIdentifierContext *right = nullptr;
    TypealiasStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEALIAS();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<TypeIdentifierContext *> typeIdentifier();
    TypeIdentifierContext* typeIdentifier(size_t i);
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypealiasStatementContext* typealiasStatement();

  class  TypeDefBlockContext : public antlr4::ParserRuleContext {
  public:
    LibSLParser::TypeIdentifierContext *type = nullptr;
    TypeDefBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    TypeIdentifierContext *typeIdentifier();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);
    TargetTypeContext *targetType();
    WhereConstraintsContext *whereConstraints();
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    std::vector<TypeDefBlockStatementContext *> typeDefBlockStatement();
    TypeDefBlockStatementContext* typeDefBlockStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefBlockContext* typeDefBlock();

  class  TargetTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *for_CPP = nullptr;
    TargetTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeListContext *typeList();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *IS();
    TypeIdentifierContext *typeIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetTypeContext* targetType();

  class  TypeListContext : public antlr4::ParserRuleContext {
  public:
    TypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeIdentifierContext *> typeIdentifier();
    TypeIdentifierContext* typeIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeListContext* typeList();

  class  TypeDefBlockStatementContext : public antlr4::ParserRuleContext {
  public:
    TypeDefBlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclContext *variableDecl();
    FunctionDeclContext *functionDecl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefBlockStatementContext* typeDefBlockStatement();

  class  EnumBlockContext : public antlr4::ParserRuleContext {
  public:
    EnumBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);
    std::vector<EnumBlockStatementContext *> enumBlockStatement();
    EnumBlockStatementContext* enumBlockStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumBlockContext* enumBlock();

  class  EnumBlockStatementContext : public antlr4::ParserRuleContext {
  public:
    EnumBlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    IntegerNumberContext *integerNumber();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumBlockStatementContext* enumBlockStatement();

  class  TypesSectionContext : public antlr4::ParserRuleContext {
  public:
    TypesSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    std::vector<SemanticTypeDeclContext *> semanticTypeDecl();
    SemanticTypeDeclContext* semanticTypeDecl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypesSectionContext* typesSection();

  class  SemanticTypeDeclContext : public antlr4::ParserRuleContext {
  public:
    SemanticTypeDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleSemanticTypeContext *simpleSemanticType();
    EnumSemanticTypeContext *enumSemanticType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SemanticTypeDeclContext* semanticTypeDecl();

  class  SimpleSemanticTypeContext : public antlr4::ParserRuleContext {
  public:
    LibSLParser::TypeIdentifierContext *semanticName = nullptr;
    LibSLParser::TypeIdentifierContext *realName = nullptr;
    SimpleSemanticTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<TypeIdentifierContext *> typeIdentifier();
    TypeIdentifierContext* typeIdentifier(size_t i);
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleSemanticTypeContext* simpleSemanticType();

  class  EnumSemanticTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *semanticName = nullptr;
    LibSLParser::TypeIdentifierContext *realName = nullptr;
    EnumSemanticTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    antlr4::tree::TerminalNode *Identifier();
    TypeIdentifierContext *typeIdentifier();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);
    std::vector<EnumSemanticTypeEntryContext *> enumSemanticTypeEntry();
    EnumSemanticTypeEntryContext* enumSemanticTypeEntry(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumSemanticTypeContext* enumSemanticType();

  class  EnumSemanticTypeEntryContext : public antlr4::ParserRuleContext {
  public:
    EnumSemanticTypeEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *COLON();
    ExpressionAtomicContext *expressionAtomic();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumSemanticTypeEntryContext* enumSemanticTypeEntry();

  class  AnnotationDeclContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    AnnotationDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANNOTATION();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *Identifier();
    AnnotationDeclParamsContext *annotationDeclParams();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationDeclContext* annotationDecl();

  class  AnnotationDeclParamsContext : public antlr4::ParserRuleContext {
  public:
    AnnotationDeclParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnnotationDeclParamsPartContext *> annotationDeclParamsPart();
    AnnotationDeclParamsPartContext* annotationDeclParamsPart(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationDeclParamsContext* annotationDeclParams();

  class  AnnotationDeclParamsPartContext : public antlr4::ParserRuleContext {
  public:
    AnnotationDeclParamsPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameWithTypeContext *nameWithType();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationDeclParamsPartContext* annotationDeclParamsPart();

  class  ActionDeclContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionName = nullptr;
    LibSLParser::TypeIdentifierContext *actionType = nullptr;
    ActionDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *Identifier();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);
    GenericContext *generic();
    ActionDeclParamListContext *actionDeclParamList();
    antlr4::tree::TerminalNode *COLON();
    WhereConstraintsContext *whereConstraints();
    TypeIdentifierContext *typeIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionDeclContext* actionDecl();

  class  ActionDeclParamListContext : public antlr4::ParserRuleContext {
  public:
    ActionDeclParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ActionParameterContext *> actionParameter();
    ActionParameterContext* actionParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionDeclParamListContext* actionDeclParamList();

  class  ActionParameterContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    LibSLParser::TypeIdentifierContext *type = nullptr;
    ActionParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *Identifier();
    TypeIdentifierContext *typeIdentifier();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionParameterContext* actionParameter();

  class  AutomatonDeclContext : public antlr4::ParserRuleContext {
  public:
    LibSLParser::PeriodSeparatedFullNameContext *name = nullptr;
    LibSLParser::TypeExpressionContext *type = nullptr;
    AutomatonDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTOMATON();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    PeriodSeparatedFullNameContext *periodSeparatedFullName();
    TypeExpressionContext *typeExpression();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);
    antlr4::tree::TerminalNode *CONCEPT_CPP();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    std::vector<ImplementedConceptsContext *> implementedConcepts();
    ImplementedConceptsContext* implementedConcepts(size_t i);
    std::vector<AutomatonStatementContext *> automatonStatement();
    AutomatonStatementContext* automatonStatement(size_t i);
    std::vector<ConstructorVariablesContext *> constructorVariables();
    ConstructorVariablesContext* constructorVariables(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AutomatonDeclContext* automatonDecl();

  class  ConstructorVariablesContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *keyword = nullptr;
    ConstructorVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameWithTypeContext *nameWithType();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *VAL();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    AssignmentRightContext *assignmentRight();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorVariablesContext* constructorVariables();

  class  AutomatonStatementContext : public antlr4::ParserRuleContext {
  public:
    AutomatonStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AutomatonStateDeclContext *automatonStateDecl();
    AutomatonShiftDeclContext *automatonShiftDecl();
    ConstructorDeclContext *constructorDecl();
    DestructorDeclContext *destructorDecl();
    ProcDeclContext *procDecl();
    FunctionDeclContext *functionDecl();
    VariableDeclContext *variableDecl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AutomatonStatementContext* automatonStatement();

  class  ImplementedConceptsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *implements = nullptr;
    ImplementedConceptsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Concept_CPPContext *> concept_CPP();
    Concept_CPPContext* concept_CPP(size_t i);
    antlr4::tree::TerminalNode *Identifier();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImplementedConceptsContext* implementedConcepts();

  class  Concept_CPPContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    Concept_CPPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concept_CPPContext* concept_CPP();

  class  AutomatonStateDeclContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *keyword = nullptr;
    AutomatonStateDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *INITSTATE();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *FINISHSTATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AutomatonStateDeclContext* automatonStateDecl();

  class  AutomatonShiftDeclContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *from = nullptr;
    antlr4::Token *to = nullptr;
    AutomatonShiftDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHIFT();
    antlr4::tree::TerminalNode *MINUS_ARROW();
    antlr4::tree::TerminalNode *BY();
    FunctionsListPartContext *functionsListPart();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *L_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *R_SQUARE_BRACKET();
    FunctionsListContext *functionsList();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *R_BRACKET();
    antlr4::tree::TerminalNode *L_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AutomatonShiftDeclContext* automatonShiftDecl();

  class  FunctionsListContext : public antlr4::ParserRuleContext {
  public:
    FunctionsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionsListPartContext *> functionsListPart();
    FunctionsListPartContext* functionsListPart(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionsListContext* functionsList();

  class  FunctionsListPartContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    FunctionsListPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    std::vector<TypeIdentifierContext *> typeIdentifier();
    TypeIdentifierContext* typeIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionsListPartContext* functionsListPart();

  class  VariableDeclContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *keyword = nullptr;
    VariableDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameWithTypeContext *nameWithType();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *VAL();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    AssignmentRightContext *assignmentRight();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclContext* variableDecl();

  class  NameWithTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    LibSLParser::TypeExpressionContext *type = nullptr;
    NameWithTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *Identifier();
    TypeExpressionContext *typeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameWithTypeContext* nameWithType();

  class  TypeExpressionContext : public antlr4::ParserRuleContext {
  public:
    TypeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    std::vector<TypeExpressionContext *> typeExpression();
    TypeExpressionContext* typeExpression(size_t i);
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *BIT_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeExpressionContext* typeExpression();
  TypeExpressionContext* typeExpression(int precedence);
  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *asterisk = nullptr;
    LibSLParser::TypeIdentifierNameContext *name = nullptr;
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierNameContext *typeIdentifierName();
    GenericContext *generic();
    antlr4::tree::TerminalNode *ASTERISK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  GenericContext : public antlr4::ParserRuleContext {
  public:
    GenericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_ARROW();
    std::vector<TypeArgumentContext *> typeArgument();
    TypeArgumentContext* typeArgument(size_t i);
    antlr4::tree::TerminalNode *R_ARROW();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GenericContext* generic();

  class  TypeArgumentContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    TypeIdentifierBoundedContext *typeIdentifierBounded();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeArgumentContext* typeArgument();

  class  TypeIdentifierBoundedContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentifierBoundedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GenericBoundContext *genericBound();
    TypeIdentifierContext *typeIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierBoundedContext* typeIdentifierBounded();

  class  VariableAssignmentContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    VariableAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedAccessContext *qualifiedAccess();
    AssignmentRightContext *assignmentRight();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    antlr4::tree::TerminalNode *PLUS_EQ();
    antlr4::tree::TerminalNode *MINUS_EQ();
    antlr4::tree::TerminalNode *ASTERISK_EQ();
    antlr4::tree::TerminalNode *SLASH_EQ();
    antlr4::tree::TerminalNode *PERCENT_EQ();
    antlr4::tree::TerminalNode *AMPERSAND_EQ();
    antlr4::tree::TerminalNode *OR_EQ();
    antlr4::tree::TerminalNode *XOR_EQ();
    antlr4::tree::TerminalNode *R_SHIFT_EQ();
    antlr4::tree::TerminalNode *L_SHIFT_EQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableAssignmentContext* variableAssignment();

  class  AssignmentRightContext : public antlr4::ParserRuleContext {
  public:
    AssignmentRightContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentRightContext* assignmentRight();

  class  CallAutomatonConstructorWithNamedArgsContext : public antlr4::ParserRuleContext {
  public:
    LibSLParser::PeriodSeparatedFullNameContext *name = nullptr;
    CallAutomatonConstructorWithNamedArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    PeriodSeparatedFullNameContext *periodSeparatedFullName();
    GenericContext *generic();
    NamedArgsContext *namedArgs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallAutomatonConstructorWithNamedArgsContext* callAutomatonConstructorWithNamedArgs();

  class  NamedArgsContext : public antlr4::ParserRuleContext {
  public:
    NamedArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgPairContext *> argPair();
    ArgPairContext* argPair(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedArgsContext* namedArgs();

  class  ArgPairContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    ArgPairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN_OP();
    ExpressionAtomicContext *expressionAtomic();
    antlr4::tree::TerminalNode *STATE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgPairContext* argPair();

  class  HeaderWithAsteriskContext : public antlr4::ParserRuleContext {
  public:
    HeaderWithAsteriskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderWithAsteriskContext* headerWithAsterisk();

  class  ConstructorDeclContext : public antlr4::ParserRuleContext {
  public:
    ConstructorDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstructorHeaderContext *constructorHeader();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *L_BRACE();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorDeclContext* constructorDecl();

  class  ConstructorHeaderContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *functionName = nullptr;
    LibSLParser::TypeIdentifierContext *functionType = nullptr;
    ConstructorHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRUCTOR();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);
    HeaderWithAsteriskContext *headerWithAsterisk();
    FunctionDeclArgListContext *functionDeclArgList();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *Identifier();
    TypeIdentifierContext *typeIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorHeaderContext* constructorHeader();

  class  DestructorDeclContext : public antlr4::ParserRuleContext {
  public:
    DestructorDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DestructorHeaderContext *destructorHeader();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *L_BRACE();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DestructorDeclContext* destructorDecl();

  class  DestructorHeaderContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *functionName = nullptr;
    LibSLParser::TypeIdentifierContext *functionType = nullptr;
    DestructorHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESTRUCTOR();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);
    HeaderWithAsteriskContext *headerWithAsterisk();
    FunctionDeclArgListContext *functionDeclArgList();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *Identifier();
    TypeIdentifierContext *typeIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DestructorHeaderContext* destructorHeader();

  class  ProcDeclContext : public antlr4::ParserRuleContext {
  public:
    ProcDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProcHeaderContext *procHeader();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *L_BRACE();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcDeclContext* procDecl();

  class  ProcHeaderContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *functionName = nullptr;
    LibSLParser::TypeExpressionContext *functionType = nullptr;
    ProcHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROC();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    antlr4::tree::TerminalNode *Identifier();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);
    HeaderWithAsteriskContext *headerWithAsterisk();
    GenericContext *generic();
    FunctionDeclArgListContext *functionDeclArgList();
    antlr4::tree::TerminalNode *COLON();
    WhereConstraintsContext *whereConstraints();
    TypeExpressionContext *typeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcHeaderContext* procHeader();

  class  FunctionDeclContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionHeaderContext *functionHeader();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *L_BRACE();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclContext* functionDecl();

  class  FunctionHeaderContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *modifier = nullptr;
    LibSLParser::PeriodSeparatedFullNameContext *automatonName = nullptr;
    antlr4::Token *functionName = nullptr;
    LibSLParser::TypeExpressionContext *functionType = nullptr;
    FunctionHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUN();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);
    antlr4::tree::TerminalNode *DOT();
    HeaderWithAsteriskContext *headerWithAsterisk();
    GenericContext *generic();
    FunctionDeclArgListContext *functionDeclArgList();
    antlr4::tree::TerminalNode *COLON();
    WhereConstraintsContext *whereConstraints();
    PeriodSeparatedFullNameContext *periodSeparatedFullName();
    TypeExpressionContext *typeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionHeaderContext* functionHeader();

  class  FunctionDeclArgListContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclArgListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclArgListContext* functionDeclArgList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    LibSLParser::TypeExpressionContext *type = nullptr;
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *Identifier();
    TypeExpressionContext *typeExpression();
    std::vector<AnnotationUsageContext *> annotationUsage();
    AnnotationUsageContext* annotationUsage(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  AnnotationUsageContext : public antlr4::ParserRuleContext {
  public:
    AnnotationUsageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    std::vector<AnnotationArgsContext *> annotationArgs();
    AnnotationArgsContext* annotationArgs(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationUsageContext* annotationUsage();

  class  FunctionContractContext : public antlr4::ParserRuleContext {
  public:
    FunctionContractContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RequiresContractContext *requiresContract();
    EnsuresContractContext *ensuresContract();
    AssignsContractContext *assignsContract();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContractContext* functionContract();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionContractContext *> functionContract();
    FunctionContractContext* functionContract(size_t i);
    std::vector<FunctionBodyStatementContext *> functionBodyStatement();
    FunctionBodyStatementContext* functionBodyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionBodyContext* functionBody();

  class  FunctionBodyStatementContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableAssignmentContext *variableAssignment();
    VariableDeclContext *variableDecl();
    IfStatementContext *ifStatement();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionBodyStatementContext* functionBodyStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    std::vector<FunctionBodyStatementContext *> functionBodyStatement();
    FunctionBodyStatementContext* functionBodyStatement(size_t i);
    ElseStatementContext *elseStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    std::vector<FunctionBodyStatementContext *> functionBodyStatement();
    FunctionBodyStatementContext* functionBodyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStatementContext* elseStatement();

  class  ActionUsageContext : public antlr4::ParserRuleContext {
  public:
    ActionUsageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    GenericContext *generic();
    ExpressionsListContext *expressionsList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionUsageContext* actionUsage();

  class  ProcUsageContext : public antlr4::ParserRuleContext {
  public:
    ProcUsageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedAccessContext *qualifiedAccess();
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    GenericContext *generic();
    ExpressionsListContext *expressionsList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcUsageContext* procUsage();

  class  ExpressionsListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionsListContext* expressionsList();

  class  AnnotationArgsContext : public antlr4::ParserRuleContext {
  public:
    AnnotationArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    ArgNameContext *argName();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationArgsContext* annotationArgs();

  class  ArgNameContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    ArgNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN_OP();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgNameContext* argName();

  class  RequiresContractContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    RequiresContractContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRES();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequiresContractContext* requiresContract();

  class  EnsuresContractContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    EnsuresContractContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENSURES();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnsuresContractContext* ensuresContract();

  class  AssignsContractContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    AssignsContractContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGNS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignsContractContext* assignsContract();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *apostrophe = nullptr;
    antlr4::Token *lbracket = nullptr;
    antlr4::Token *rbracket = nullptr;
    antlr4::Token *unaryOp = nullptr;
    antlr4::Token *op = nullptr;
    antlr4::Token *typeOp = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionAtomicContext *expressionAtomic();
    QualifiedAccessContext *qualifiedAccess();
    antlr4::tree::TerminalNode *APOSTROPHE();
    ProcUsageContext *procUsage();
    ActionUsageContext *actionUsage();
    CallAutomatonConstructorWithNamedArgsContext *callAutomatonConstructorWithNamedArgs();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    HasAutomatonConceptContext *hasAutomatonConcept();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *EXCLAMATION();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();
    BitShiftOpContext *bitShiftOp();
    antlr4::tree::TerminalNode *L_ARROW();
    antlr4::tree::TerminalNode *R_ARROW();
    antlr4::tree::TerminalNode *L_ARROW_EQ();
    antlr4::tree::TerminalNode *R_ARROW_EQ();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *EXCLAMATION_EQ();
    antlr4::tree::TerminalNode *BIT_OR();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *LOGIC_OR();
    antlr4::tree::TerminalNode *DOUBLE_AMPERSAND();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *IS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  HasAutomatonConceptContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *has = nullptr;
    antlr4::Token *name = nullptr;
    HasAutomatonConceptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedAccessContext *qualifiedAccess();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HasAutomatonConceptContext* hasAutomatonConcept();

  class  BitShiftOpContext : public antlr4::ParserRuleContext {
  public:
    BitShiftOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LShiftContext *lShift();
    RShiftContext *rShift();
    URShiftContext *uRShift();
    ULShiftContext *uLShift();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitShiftOpContext* bitShiftOp();

  class  LShiftContext : public antlr4::ParserRuleContext {
  public:
    LShiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> L_ARROW();
    antlr4::tree::TerminalNode* L_ARROW(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LShiftContext* lShift();

  class  RShiftContext : public antlr4::ParserRuleContext {
  public:
    RShiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> R_ARROW();
    antlr4::tree::TerminalNode* R_ARROW(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RShiftContext* rShift();

  class  URShiftContext : public antlr4::ParserRuleContext {
  public:
    URShiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> R_ARROW();
    antlr4::tree::TerminalNode* R_ARROW(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  URShiftContext* uRShift();

  class  ULShiftContext : public antlr4::ParserRuleContext {
  public:
    ULShiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> L_ARROW();
    antlr4::tree::TerminalNode* L_ARROW(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ULShiftContext* uLShift();

  class  ExpressionAtomicContext : public antlr4::ParserRuleContext {
  public:
    ExpressionAtomicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimitiveLiteralContext *primitiveLiteral();
    ArrayLiteralContext *arrayLiteral();
    QualifiedAccessContext *qualifiedAccess();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionAtomicContext* expressionAtomic();

  class  PrimitiveLiteralContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *bool_CPP = nullptr;
    antlr4::Token *nullLiteral = nullptr;
    PrimitiveLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerNumberContext *integerNumber();
    FloatNumberContext *floatNumber();
    antlr4::tree::TerminalNode *DoubleQuotedString();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *NULL_CPP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimitiveLiteralContext* primitiveLiteral();

  class  QualifiedAccessContext : public antlr4::ParserRuleContext {
  public:
    QualifiedAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PeriodSeparatedFullNameContext *periodSeparatedFullName();
    SimpleCallContext *simpleCall();
    antlr4::tree::TerminalNode *DOT();
    std::vector<QualifiedAccessContext *> qualifiedAccess();
    QualifiedAccessContext* qualifiedAccess(size_t i);
    ProcUsageContext *procUsage();
    antlr4::tree::TerminalNode *L_SQUARE_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *R_SQUARE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedAccessContext* qualifiedAccess();
  QualifiedAccessContext* qualifiedAccess(int precedence);
  class  SimpleCallContext : public antlr4::ParserRuleContext {
  public:
    SimpleCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *L_BRACKET();
    QualifiedAccessContext *qualifiedAccess();
    antlr4::tree::TerminalNode *R_BRACKET();
    GenericContext *generic();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleCallContext* simpleCall();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  ArrayLiteralContext : public antlr4::ParserRuleContext {
  public:
    ArrayLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *R_SQUARE_BRACKET();
    ExpressionsListContext *expressionsList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayLiteralContext* arrayLiteral();

  class  PeriodSeparatedFullNameContext : public antlr4::ParserRuleContext {
  public:
    PeriodSeparatedFullNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BACK_QOUTE();
    antlr4::tree::TerminalNode* BACK_QOUTE(size_t i);
    antlr4::tree::TerminalNode *UNBOUNDED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PeriodSeparatedFullNameContext* periodSeparatedFullName();

  class  IntegerNumberContext : public antlr4::ParserRuleContext {
  public:
    IntegerNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerNumberContext* integerNumber();

  class  FloatNumberContext : public antlr4::ParserRuleContext {
  public:
    FloatNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FloatingPointLiteral();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatNumberContext* floatNumber();

  class  SuffixContext : public antlr4::ParserRuleContext {
  public:
    SuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SuffixContext* suffix();

  class  TypeConstraintContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *paramName = nullptr;
    LibSLParser::TypeArgumentContext *paramConstraint = nullptr;
    TypeConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *Identifier();
    TypeArgumentContext *typeArgument();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeConstraintContext* typeConstraint();

  class  WhereConstraintsContext : public antlr4::ParserRuleContext {
  public:
    WhereConstraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    std::vector<TypeConstraintContext *> typeConstraint();
    TypeConstraintContext* typeConstraint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereConstraintsContext* whereConstraints();

  class  GenericBoundContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *bound = nullptr;
    GenericBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GenericBoundContext* genericBound();

  class  TypeIdentifierNameContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentifierNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PeriodSeparatedFullNameContext *periodSeparatedFullName();
    PrimitiveLiteralContext *primitiveLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierNameContext* typeIdentifierName();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool typeExpressionSempred(TypeExpressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool qualifiedAccessSempred(QualifiedAccessContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

