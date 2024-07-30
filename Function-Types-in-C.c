In C programming, functions are fundamental building blocks that help in organizing and managing code efficiently. They enable you to encapsulate logic, reuse code, and improve program readability. Functions in C can be categorized into several types based on their behavior and purpose. 

Here’s an overview of the types of functions in C, along with examples and explanations:
===============================================================================

1. Standard Library Functions
These functions are provided by the C Standard Library and are used to perform common tasks like input/output operations, string manipulations, and mathematical calculations.

Example:


#include <stdio.h>
#include <math.h>

int main() {
    double number = 16.0;
    double result;

    // Using the sqrt function from the math library
    result = sqrt(number);

    // Using the printf function from the stdio library
    printf("The square root of %.2f is %.2f\n", number, result);

    return 0;
}

Explanation:

#include <stdio.h> and #include <math.h> include standard library headers.
sqrt() calculates the square root of a number. This function is part of the math library.
printf() is used to print formatted output to the console.


===============================================================================

2. User-Defined Functions
These are functions created by the programmer to perform specific tasks. They help in breaking down a complex problem into smaller, manageable parts.

Example:

#include <stdio.h>

// Function declaration
int add(int, int);

int main() {
    int a = 5, b = 3;
    int sum;

    // Function call
    sum = add(a, b);

    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

// Function definition
int add(int x, int y) {
    return x + y;
}

Explanation:

add(int x, int y) is a user-defined function that returns the sum of two integers.
The function is declared before main() and defined after it.
The main() function calls add() with a and b as arguments and prints the result.


===============================================================================

3. Recursive Functions
These functions call themselves in order to solve a problem. Recursive functions must have a base case to prevent infinite recursion.

Example:

#include <stdio.h>

// Function declaration
int factorial(int);

int main() {
    int number = 5;
    int result;

    result = factorial(number);

    printf("Factorial of %d is %d\n", number, result);

    return 0;
}

// Recursive function definition
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

Explanation:

factorial(int n) calculates the factorial of n using recursion.
The base case is when n is 0 or 1.
For other values, the function calls itself with n-1.


===============================================================================

4. Inline Functions
These functions are defined with the inline keyword and are expanded in place where they are called. This can potentially increase execution speed by eliminating function call overhead.

Example:

#include <stdio.h>

// Inline function definition
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 4;
    int result;

    result = square(num);

    printf("The square of %d is %d\n", num, result);

    return 0;
}

Explanation:

inline int square(int x) is an inline function.
The compiler tries to replace the call to square() with its body to improve performance.

===============================================================================

5. Static Functions
Static functions are functions that are limited to the file in which they are defined. They are not visible or accessible from other files.

Example:

#include <stdio.h>

// Static function declaration
static void greet(void);

int main() {
    greet();
    return 0;
}

// Static function definition
static void greet(void) {
    printf("Hello from static function!\n");
}

Explanation:

static void greet(void) is a static function.
It can only be called from within the same file.

===============================================================================

6. Functions with Variable Arguments
These functions can accept a variable number of arguments. The stdarg.h library provides macros to handle variable arguments.

Example:

#include <stdio.h>
#include <stdarg.h>

// Function to find the maximum of variable arguments
int max_of_all(int num, ...) {
    va_list args;
    va_start(args, num);
    
    int max = va_arg(args, int);
    for (int i = 1; i < num; i++) {
        int val = va_arg(args, int);
        if (val > max) {
            max = val;
        }
    }
    
    va_end(args);
    return max;
}

int main() {
    int result;

    result = max_of_all(4, 10, 20, 30, 40);

    printf("The maximum value is %d\n", result);

    return 0;
}

Explanation:

max_of_all(int num, ...) accepts a variable number of arguments.
va_list, va_start(), va_arg(), and va_end() are used to handle the variable arguments.

***********************************************************

Example Programs: 

=============================================================

1. Standard Library Functions
Example Code:

#include <stdio.h>
#include <math.h>

int main() {
    double number = 16.0;
    double result;

    // Using the sqrt function from the math library
    result = sqrt(number);

    // Using the printf function from the stdio library
    printf("The square root of %.2f is %.2f\n", number, result);

    return 0;
}

Expected Output:

The square root of 16.00 is 4.00



=============================================================

2. User-Defined Functions

Example Code:

#include <stdio.h>

// Function declaration
int add(int, int);

int main() {
    int a = 5, b = 3;
    int sum;

    // Function call
    sum = add(a, b);

    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

// Function definition
int add(int x, int y) {
    return x + y;
}
Expected Output:

The sum of 5 and 3 is 8


=============================================================
3. Recursive Functions

Example Code:

#include <stdio.h>

// Function declaration
int factorial(int);

int main() {
    int number = 5;
    int result;

    result = factorial(number);

    printf("Factorial of %d is %d\n", number, result);

    return 0;
}

// Recursive function definition
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}


Expected Output:

Factorial of 5 is 120

=============================================================

4. Inline Functions

Example Code:


#include <stdio.h>

// Inline function definition
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 4;
    int result;

    result = square(num);

    printf("The square of %d is %d\n", num, result);

    return 0;
}

Expected Output:

The square of 4 is 16


=============================================================
5. Static Functions

Example Code:


#include <stdio.h>

// Static function declaration
static void greet(void);

int main() {
    greet();
    return 0;
}

// Static function definition
static void greet(void) {
    printf("Hello from static function!\n");
}
Expected Output:

Hello from static function!


=============================================================

6. Functions with Variable Arguments

Example Code:


#include <stdio.h>
#include <stdarg.h>

// Function to find the maximum of variable arguments
int max_of_all(int num, ...) {
    va_list args;
    va_start(args, num);
    
    int max = va_arg(args, int);
    for (int i = 1; i < num; i++) {
        int val = va_arg(args, int);
        if (val > max) {
            max = val;
        }
    }
    
    va_end(args);
    return max;
}

int main() {
    int result;

    result = max_of_all(4, 10, 20, 30, 40);

    printf("The maximum value is %d\n", result);

    return 0;
}


Expected Output:


The maximum value is 40
