An overview of the ranges for different data types in C programming, along with explanations:

1. Integer Data Types

int: Typically 4 bytes (32 bits). The range depends on the compiler and system architecture (32-bit or 64-bit).
Range: -2147483648 to 2147483647 (on most systems)
    
short: Usually 2 bytes (16 bits).
Range: -32768 to 32767
    
long: Usually 4 bytes (32 bits) on 32-bit systems, and 8 bytes (64 bits) on 64-bit systems.
Range: -2147483648 to 2147483647 on 32-bit systems
Range: -9223372036854775808 to 9223372036854775807 on 64-bit systems

long long: Guaranteed to be at least 8 bytes (64 bits).
Range: -9223372036854775808 to 9223372036854775807


2. Floating Point Data Types

float: Typically 4 bytes (32 bits).
Range: Approximately -3.4E38 to 3.4E38 with 7 significant digits.

double: Usually 8 bytes (64 bits).
Range: Approximately -1.7E308 to 1.7E308 with 15 significant digits.

long double: Size and range depend on the compiler and system.
Range: Approximately -1.1E4932 to 1.1E4932 with 19 significant digits.


3. Character Data Type
char: Typically 1 byte (8 bits), capable of holding a single ASCII character.
Range: -128 to 127 (signed) or 0 to 255 (unsigned)


4. Boolean Data Type
bool: Available in C99 and later (through stdbool.h). Represents true or false.
Typically implemented as an int where false is 0 and true is 1.


5. Enumerated Data Type
Enumerations (enum): A user-defined type consisting of a set of named constants called enumerators.
Uses the underlying type (int by default unless specified otherwise).
Explanation:
Range: Indicates the minimum and maximum values that a data type can represent.
System Dependence: The exact size and range of data types (int, long, float, etc.) can vary depending on the compiler and system architecture (32-bit vs 64-bit).




C programs that use different data types:

1. Integer Data Types



#include <stdio.h>

int main() {
    // Integer data types
    int num1 = 10;
    short num2 = 20;
    long num3 = 30;
    long long num4 = 40;

    // Printing values
    printf("Integer data types:\n");
    printf("int: %d\n", num1);
    printf("short: %d\n", num2);
    printf("long: %ld\n", num3);
    printf("long long: %lld\n", num4);

    return 0;
}





2. Floating Point Data Types

#include <stdio.h>

int main() {
    // Floating point data types
    float num1 = 3.14;
    double num2 = 6.283185;
    long double num3 = 9.8696044;

    // Printing values
    printf("Floating point data types:\n");
    printf("float: %f\n", num1);
    printf("double: %lf\n", num2);
    printf("long double: %Lf\n", num3);

    return 0;
}



3. Character Data Type

#include <stdio.h>

int main() {
    // Character data type
    char ch = 'A';

    // Printing value
    printf("Character data type:\n");
    printf("char: %c\n", ch);

    return 0;
}




4. Boolean Data Type (Available in C99 and later)

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Boolean data type
    bool isTrue = true;
    bool isFalse = false;

    // Printing values
    printf("Boolean data type:\n");
    printf("true: %d\n", isTrue);  // true prints as 1
    printf("false: %d\n", isFalse);  // false prints as 0

    return 0;
}





5. Enumerated Data Type

#include <stdio.h>

enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main() {
    // Enumerated data type
    enum Day today = Wednesday;

    // Printing value (as integer)
    printf("Enumerated data type:\n");
    printf("Today is day number %d\n", today);

    return 0;
}


6. Void Data Type

#include <stdio.h>

int main() {
    // Void data type (no value)
    void *ptr;

    // Printing size (usually 8 bytes on 64-bit systems)
    printf("Void data type:\n");
    printf("Size of void pointer: %lu bytes\n", sizeof(ptr));

    return 0;
}
