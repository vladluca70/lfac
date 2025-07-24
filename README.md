# 🌟 Custom Programming Language — Built with YACC/Bison & C++

## 📘 Overview

This project is the result of designing and implementing a **custom programming language** from scratch, using **YACC/Bison** for parsing and **C++** for semantic analysis and evaluation. The language supports user-defined classes, expressions, control structures, symbol tables, and Abstract Syntax Trees (ASTs). The entire structure encourages modularity, correctness, and semantic clarity.

---

## 🔧 Language Design

The language is organized into **four logical sections**:
1. 🧱 **Class declarations**
2. 🌐 **Global variable declarations**
3. 🧠 **Function definitions**
4. 🚀 **Program entry point** (main function)

---

## ✨ Supported Features

### ✅ Types and Declarations
- Built-in types: `int`, `float`, `char`, `string`, `bool`
- Array types
- Variable and function declarations
- Class declarations:
  - Members and methods
  - Object instantiation
  - Field and method access
  - Classes allowed only in the global scope

### 🔁 Control Structures & Expressions
- Control statements: `if`, `while`, `for`
- Assignment: `left_value = expression`  
  (`left_value` can be a variable, array element, or class field)
- Arithmetic and boolean expressions:
  - Operators: `+`, `-`, `*`, `/`, `<`, `>`, `==`, `&&`, `||`, `!`, etc.
  - Boolean values: `true`, `false`
- Function calls (including nested calls and expressions as parameters)
- Predefined functions:
  - `Print(expr)` → evaluates and prints the result and type
  - `TypeOf(expr)` → prints the type of the expression

---

## 🗃️ Symbol Table System

Each **scope** in the language (global, class, function, block) has its own **symbol table**, implemented via a `SymTable` class. Scopes are nested, and each symbol table holds:

- Variables: `name`, `type`, `value`
- Functions: `name`, return type, parameter types, enclosing class (if any)
- Classes: `name`

A symbol table keeps a pointer to its **enclosing scope's** symbol table to allow correct name resolution.

Symbol tables are generated during parsing and **saved to an output file** for inspection.

---

## 🧪 Semantic Analysis

The semantic checker ensures:

- All variables/functions are declared before use ❗
- No duplicate declarations in the same scope ❌
- All operands in an expression are of the same type ➕
- Left side and right side of assignments match in type 📏
- Function call arguments match the expected types ✅

If violations occur, **detailed error messages** are displayed, including line numbers and variable names.

---

## 🌲 AST (Abstract Syntax Tree) Evaluation

Each expression is parsed into an **ASTNode** structure. The AST is then:

- Evaluated recursively (bottom-up)
- Typed (each node knows its resulting type)
- Used in constructs like `Print()` and `TypeOf()` to display values and types

---

## 🛠️ Implementation Notes

- 🚫 No global ASTs or unnecessary global variables were used.
- 🧼 The `.y` (Bison) file is clean, delegating logic to external C++ classes.
- 🧱 Classes used:
  - `SymTable`
  - `ASTNode`
  - Various type/value wrappers (for robust type safety)
- 🧩 Extensive modularity was enforced for:
  - Clarity
  - Testability
  - Code reuse

---

## 🧠 Extra Credit

- 🧭 **Nested scope resolution** is fully supported
- 🌳 **Dynamic AST evaluation** at runtime
- 📝 **Structured output formatting** for:
  - Symbol tables
  - Expressions
- 🛡️ **Clean error handling** during:
  - Syntax analysis
  - Semantic analysis

---

## 📚 Final Thoughts

This project was a great opportunity to **deeply understand** how **compilers and interpreters** work — from:

- 📐 Grammar design  
- 🔍 Parsing  
- ✅ Semantic validation  
- 🌲 AST evaluation  
- 📦 Symbol management  

Built entirely with ❤️ using **YACC/Bison** and **C++**.
