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



==================================================================

Example Program: Arithmetic Operations Using Functions

#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Addition
    int sum = add(num1, num2);
    printf("Sum: %d\n", sum);

    // Subtraction
    int difference = subtract(num1, num2);
    printf("Difference: %d\n", difference);

    // Multiplication
    int product = multiply(num1, num2);
    printf("Product: %d\n", product);

    // Division
    float quotient = divide(num1, num2);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0; // Error case, returning 0
    } else {
        return (float)a / b; // Typecasting to float for accurate division
    }
}

Explanation:

Function Declarations:

Each arithmetic operation (add, subtract, multiply, divide) is declared with its respective return type (int for addition, subtraction, multiplication; float for division) and parameters (int a, int b).


Main Function:

Prompts the user to enter two integers (num1 and num2).
Calls each arithmetic function with num1 and num2 as arguments and stores the returned results.
Prints the results of each operation (Sum, Difference, Product, Quotient).


Function Definitions:

Each function (add, subtract, multiply, divide) performs its respective arithmetic operation on the provided parameters (a and b).
add(a, b) returns the sum of a and b.
subtract(a, b) returns the difference of a and b.
multiply(a, b) returns the product of a and b.
divide(a, b) performs division of a by b and returns the quotient as a float. It checks for division by zero and handles the error case by printing an error message and returning 0.


Sample Output:

Enter two numbers: 10 5
Sum: 15
Difference: 5
Product: 50
Quotient: 2.00


Key Points:

Return Types: 

    Each function returns a value of the specified type (int or float).

Function Parameters: 
    Functions accept parameters (a and b) which are used to perform the operations.

Error Handling: 
    The divide function checks if b is zero before performing the division operation to avoid a division by zero error..




