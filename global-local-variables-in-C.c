In C programming, variable declarations can vary based on several factors such as storage class, scope, and lifetime. Here are the main types of variable declarations in C, along with examples, step-by-step explanations, and their respective outputs:




======================================================================

Automatic Variables:

Automatic variables are declared inside a function without any storage class specifier (like static or extern).
They are initialized to garbage values if not explicitly initialized.
They have local scope and are destroyed when the function exits.



Example:


#include <stdio.h>

void testFunction() {
    // Automatic variable declaration
    int autoVar;
    autoVar = 42; // Initialization

    // Printing the value of autoVar
    printf("Automatic variable: %d\n", autoVar);
}

int main() {
    testFunction();
    return 0;
}


Explanation:

autoVar is an automatic variable declared inside the testFunction.
It is initialized to 42 and its value is printed within the function.


Output:


Automatic variable: 42



======================================================================

Static Variables:

Static variables are declared with the static keyword inside a function or block.
They retain their value between function calls.
They are initialized to zero if not explicitly initialized.
Example:


#include <stdio.h>

void increment() {
    // Static variable declaration
    static int staticVar;

    // Incrementing staticVar and printing its value
    staticVar++;
    printf("Static variable: %d\n", staticVar);
}

int main() {
    // Calling increment function multiple times
    increment();
    increment();
    increment();
    return 0;
}


Explanation:

staticVar is a static variable declared inside the increment function.
It retains its value (0 initially) between function calls.

Output:


Static variable: 1
Static variable: 2
Static variable: 3



======================================================================

Global Variables:

Global variables are declared outside of any function or block.
They are accessible throughout the entire program.
They are initialized to zero if not explicitly initialized.


Example:


#include <stdio.h>

// Global variable declaration
int globalVar = 10;

void testFunction() {
    // Accessing globalVar inside a function
    printf("Global variable inside function: %d\n", globalVar);
}

int main() {
    // Accessing globalVar inside main
    printf("Global variable in main: %d\n", globalVar);

    // Modifying globalVar
    globalVar = 20;
    printf("Modified global variable in main: %d\n", globalVar);

    // Calling function that accesses globalVar
    testFunction();

    return 0;
}


Explanation:

globalVar is a global variable declared outside any function.
It is initialized to 10 and can be accessed and modified from any part of the program.


Output:


Global variable in main: 10
Modified global variable in main: 20
Global variable inside function: 20
