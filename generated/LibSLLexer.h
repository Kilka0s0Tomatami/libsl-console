
// Generated from D:/PROjects/libsl-generated-3/grammar/LibSLLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LibSLLexer : public antlr4::Lexer {
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

  explicit LibSLLexer(antlr4::CharStream *input);

  ~LibSLLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

