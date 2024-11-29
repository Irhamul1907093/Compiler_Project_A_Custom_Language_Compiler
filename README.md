# Custom Compiler - Lex & Bison Implementation

## Overview

This project implements a custom compiler for a simple programming language using **Lex** (for lexical analysis) and **Bison** (for parsing). The compiler supports basic features such as variable declarations, control flow structures, mathematical operations, and built-in functions. It also includes error handling for syntax and logical issues.

The project is structured with two primary components:
- **Lexer (`.l` file)**: Tokenizes the input source code into recognizable symbols.
- **Parser (`.y` file)**: Processes the tokens and constructs the abstract syntax tree (AST) based on predefined grammar rules.

## Key Features

- **Variable Declarations**: Supports multiple data types (`integer`, `float`, `string`, etc.) and initialization of variables.
- **Control Flow Structures**: Supports `if`, `else`, `elsif`, `while`, `for`, and `continue` statements.
- **Mathematical Operations**: Includes basic arithmetic operations (addition, subtraction, multiplication, division) and built-in functions such as factorial, prime checking, and sine.
- **Function Support**: Allows the definition and calling of functions with parameters and return types.
- **Comments**: Both single-line and multi-line comments are supported.
- **Error Handling**: Reports errors for unrecognized characters, undeclared variables, and syntax issues.

## Technologies Used

- **Lex** (for lexical analysis): Tokenizes the input source code based on the rules defined in the `.l` file.
- **Bison** (for syntax parsing): Processes the tokens and checks the structure of the input code based on the grammar rules defined in the `.y` file.
- **C**: The implementation language for Lex and Bison specifications, error handling, and runtime operations.

## Workflow

1. **Lexical Analysis**: The lexer reads the input code and tokenizes it into recognized symbols (tokens).
2. **Syntax Parsing**: The parser processes the tokens and constructs the abstract syntax tree (AST) based on the grammar rules.
3. **Semantic Analysis**: The parser checks for semantic errors, such as undeclared variables or invalid operations.
4. **Output**: The program generates the output or error messages based on the parsed code.

## Setup and Usage

### Prerequisites

1. Install **Lex** and **Bison** on your system. (Instructions can be found in their respective documentations).
2. Make sure you have a C compiler (like GCC) installed.

### Steps to Build

1. **Generate the Lexer and Parser:**
    - Run the following commands to generate the necessary files:
    ```bash
    lex <lexer_file.l>
    bison -d <parser_file.y>
    ```
2. **Compile the Generated Files:**
    - Use `gcc` to compile the generated C files:
    ```bash
    gcc lex.yy.c 1907093.tab.c -o compiler -ll -ly
    ```

3. **Run the Compiler:**
    - Provide an input source code file (e.g., `input.txt`) and run the compiler:
    ```bash
    ./compiler input.txt
    ```

4. **Output:**
    - The output will be printed in the console or written to a file (e.g., `output1.txt`).

### Example Input

```txt
intezar x;
x = 5;
foo(3,4);
