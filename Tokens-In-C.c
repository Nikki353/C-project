In C language, tokens are the smallest units in the source code that the compiler can recognize. Tokens are categorized into several types:

Keywords: These are reserved words that have special meaning in C. Examples include int, float, if, else, while, for, return, etc.

Identifiers: These are names given to variables, functions, arrays, etc., created by the programmer. An identifier must start with a letter (uppercase or lowercase) or an underscore (_), followed by letters, digits, or underscores.

Constants: These are literal values that do not change during program execution. Constants can be of various types:

Integer constants: Examples include 0, 123, -456.
Floating-point constants: Examples include 0.0, 3.14, -2.5.
Character constants: Enclosed in single quotes, such as 'a', 'b', '%'.
String constants: Enclosed in double quotes, such as "hello", "world".
String literals: Sequences of characters enclosed in" "double quotes ("), " such as "Hello, World!".

Operators: Symbols that perform operations on variables and values. Examples include +, -, *, /, =, ==, !=, <, >, etc.

Punctuation: Characters used to separate tokens or to denote the structure of a program. Examples include {, }, (, ), [, ], ,, ;, etc.

Whitespace: Spaces, tabs, newline characters that separate tokens but are otherwise ignored by the compiler.

Here is a simple example to illustrate tokens in C:

#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;

    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

In this program:

Keywords include #include, int, main, return.
Identifiers include num1, num2, sum.
Constants include 10, 20, 0 (in return 0).
String literals include "Sum of %d and %d is %d\n".
Operators include =, +, ;.
Punctuation includes {, }, (, ), ,.
