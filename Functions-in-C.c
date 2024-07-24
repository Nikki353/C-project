Functions in C are blocks of code that perform a specific task. They provide modularity to a program by allowing you to break down the code into smaller, manageable pieces, which can be called (invoked) whenever needed. Here is an introduction to functions in C with examples and explanations:

Syntax of a Function in C

return_type function_name(parameters) {
    // function body
    // statements
    return value;  // optional return statement
}

return_type: Specifies the type of data that the function will return to the calling function or statement. If the function does not return a value, use void as the return type.

function_name: A unique identifier for the function within the scope of the program.

parameters: Optional input values that the function can accept. They are variables or constants declared in the function header and used within the function body.

function body: Contains the statements that define what the function does.

return value: Specifies the value that the function sends back to the calling function. The return statement is optional for functions with a void return type.

===============================================================
Example 1: Function without Parameters and Return Value

#include <stdio.h>

// Function declaration
void greet() {
    printf("Hello, World!\n");
}

// Main function
int main() {
    // Function call
    greet();  // Output: Hello, World!
    return 0;
}

Explanation:
The greet() function is defined with void as the return type because it does not return any value (printf outputs directly).
In main(), greet() is called, causing "Hello, World!" to be printed to the console.

===============================================================
Example 2: Function with Parameters and Return Value

#include <stdio.h>

// Function declaration
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

// Main function
int main() {
    int result;
    // Function call
    result = add(3, 5);  // result will be 8
    printf("Sum is: %d\n", result);  // Output: Sum is: 8
    return 0;
}

Explanation:

The add(int a, int b) function takes two integer parameters a and b and returns their sum (a + b).
In main(), add(3, 5) is called, which returns 8. This value is stored in result and then printed to the console.
Key Points to Remember:

    Function Declaration: Functions should be declared before they are used (either by placing their entire code before main() or by using a function prototype).

Function Prototypes: 
    Specify the function's name, return type, and parameters (if any) to inform the compiler about the function's existence.

Calling a Function: 
        To execute a function, use its name followed by parentheses containing any required arguments.

Return Statement: 
        It specifies the value to be returned to the calling function. Functions without a void return type must return a value of the specified type.

Function Scope: 
        Variables declared within a function are local to that function and can't be accessed outside of it.
