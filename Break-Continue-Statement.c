In C programming, break and continue are two control statements used within loops (like for, while, do-while) to alter their normal flow of execution. Here’s how each works, along with examples:

1. break Statement:
The break statement is used to immediately terminate the loop it is in and transfer control to the statement immediately following the loop.

Syntax:

break;
Example:


#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; ++i) {
        if (i == 5) {
            break;  // terminates the loop when i becomes 5
        }
        printf("%d ", i);
    }
    printf("\nOutside the loop\n");

    return 0;
}



Explanation:

In this example, the for loop runs from i = 1 to i <= 10.
Inside the loop, there is an if statement that checks if i equals 5.
When i becomes 5, the break statement is executed, causing the loop to terminate immediately.
Therefore, the output will be 1 2 3 4, and then "Outside the loop" will be printed.




2. continue Statement:
The continue statement is used to skip the current iteration of the loop and continue with the next iteration.

Syntax:


continue;
Example:


#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 5; ++i) {
        if (i == 3) {
            continue;  // skips the rest of the loop body for i = 3
        }
        printf("%d ", i);
    }
    printf("\nOutside the loop\n");

    return 0;
}


Explanation:

In this example, the for loop runs from i = 1 to i <= 5.
Inside the loop, there is an if statement that checks if i equals 3.

When i equals 3, the continue statement is executed, which skips the remaining code inside the loop for that iteration.
Therefore, the output will be 1 2 4 5, and then "Outside the loop" will be printed.

Key Differences:

break terminates the entire loop and transfers control to the statement immediately following the loop.

continue skips the remaining code inside the loop for the current iteration and proceeds to the next iteration of the loop.
