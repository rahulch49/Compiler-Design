# Mini-Compiler for Java
A compiler is a computer program that transforms source code written in a programming  language (the source language) into another computer language (the target language),  with the latter often having a binary form known as object code. This project is a Mini Compiler for the Java language, written in the language C. The main tools used are Lex and Yacc. The project was implemented through a series of stages such as generation of the symbol table (Phase 1), generation of intermediate code and optimization of the intermediate code (Phaser 2). The mini Java compiler is capable of efficiently compiling the given input Java code, while catching any errors that might be present in the source code. The goal of this project was to generate optimized intermediate code representation.

The mini-compiler implemented in this project handles the syntax and semantics of the Java language’s grammar. It identifies the syntax errors present in the input program and provides useful error messages along with the line numbers which indeed helps in faster error correction. It identifies errors such as missing semicolons, unidentified tokens, using undeclared variables, mismatched brackets,  etc. The compiler is also capable of ignoring single and multi-line comments that may be present in the code. It also handles all the necessary operators like arithmetic operators, logical operators, comparison operators, unary and assignment operators.
Java constructs that are implemented in this project are - 
For loop
While loop
The yac file takes care of error handling and recovery. Thus the semantics and syntactical usage of these constructs will be handled as and when they appear in the input program.

