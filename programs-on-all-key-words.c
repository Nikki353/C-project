auto
Program Name: auto_example.c


break
Program Name: break_example.c


case
Program Name: case_example.c


char
Program Name: char_example.c

const
Program Name: const_example.c

continue
Program Name: continue_example.c

default
Program Name: default_example.c

do
Program Name: do_example.c

double
Program Name: double_example.c

else
Program Name: else_example.c

enum
Program Name: enum_example.c

extern
Program Name: extern_example.c

float
Program Name: float_example.c

for
Program Name: for_example.c

goto
Program Name: goto_example.c

if
Program Name: if_example.c


int
Program Name: int_example.c


long
Program Name: long_example.c


register
Program Name: register_example.c


return
Program Name: return_example.c

short
Program Name: short_example.c


signed
Program Name: signed_example.c


sizeof
Program Name: sizeof_example.c


static
Program Name: static_example.c


struct
Program Name: struct_example.c

switch
Program Name: switch_example.c

typedef
Program Name: typedef_example.c

union
Program Name: union_example.c

unsigned
Program Name: unsigned_example.c

void
Program Name: void_example.c

volatile
Program Name: volatile_example.c

while
Program Name: while_example.c

return
Program Name: return_example.c

*****************************************************************************************************************
1. auto
Example:

#include <stdio.h>

int main() {
    auto int num = 5;
    printf("Number = %d\n", num);
    return 0;
}

Explanation:

auto int num = 5;: Declares a variable num with automatic storage duration. In practice, auto is often implied and may be omitted.
printf("Number = %d\n", num);: Prints the value of num to the console.


Output:
Number = 5

====================================================
2. break
Example:

#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        printf("i = %d\n", i);
    }
    return 0;
}


Explanation:

for (int i = 0; i < 10; i++): Starts a loop from i = 0 to i < 10.
if (i == 5) { break; }: Exits the loop when i equals 5.
printf("i = %d\n", i);: Prints the value of i each iteration until the loop is broken.
Output:

i = 0
i = 1
i = 2
i = 3
i = 4

====================================================
3. case
Example:

#include <stdio.h>

int main() {
    int day = 2;
    
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        default:
            printf("Other day\n");
    }
    return 0;
}

Explanation:

switch (day): Evaluates the value of day.
case 2:: Matches day to 2, and executes the corresponding block.
printf("Tuesday\n");: Prints "Tuesday" because day equals 2.

Output:

Tuesday

====================================================
4. char
Example:

#include <stdio.h>

int main() {
    char letter = 'A';
    printf("Letter = %c\n", letter);
    return 0;
}

Explanation:

char letter = 'A';: Declares a character variable letter and initializes it to 'A'.
printf("Letter = %c\n", letter);: Prints the value of letter.

Output:

Letter = A

====================================================
5. const
Example:

#include <stdio.h>

int main() {
    const int MAX = 100;
    printf("MAX = %d\n", MAX);
    // MAX = 200; // This would cause a compile-time error
    return 0;
}


Explanation:

const int MAX = 100;: Declares MAX as a constant integer with value 100, which cannot be changed.
printf("MAX = %d\n", MAX);: Prints the value of MAX.


Output:

MAX = 100

====================================================
6. continue
Example:

#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("i = %d\n", i);
    }
    return 0;
}

Explanation:

for (int i = 0; i < 10; i++): Iterates from i = 0 to i < 10.
if (i % 2 == 0) { continue; }: Skips the current iteration if i is even, continuing to the next iteration.
printf("i = %d\n", i);: Prints the value of i only when i is odd.

Output:

i = 1
i = 3
i = 5
i = 7
i = 9

====================================================
7. default
Example:

#include <stdio.h>

int main() {
    int number = 5;

    switch (number) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        default:
            printf("Other\n");
    }
    return 0;
}

Explanation:

switch (number): Evaluates the value of number.
default:: Executes when no other case matches number.
printf("Other\n");: Prints "Other" because number does not match any case.

Output:

Other

====================================================
8. do
Example:

#include <stdio.h>

int main() {
    int i = 0;

    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);

    return 0;
}
Explanation:

do { ... } while (i < 5);: Executes the block at least once before checking the condition i < 5.
printf("i = %d\n", i);: Prints the value of i and increments it.

Output:

i = 0
i = 1
i = 2
i = 3
i = 4
====================================================
9. double
Example:

#include <stdio.h>

int main() {
    double pi = 3.14159;
    printf("Pi = %lf\n", pi);
    return 0;
}

Explanation:

double pi = 3.14159;: Declares a double precision floating-point variable pi.
printf("Pi = %lf\n", pi);: Prints the value of pi with double precision format.

Output:

Pi = 3.141590

====================================================
10. else
Example:

#include <stdio.h>

int main() {
    int num = 10;

    if (num > 5) {
        printf("Number is greater than 5\n");
    } else {
        printf("Number is 5 or less\n");
    }

    return 0;
}

Explanation:

if (num > 5): Checks if num is greater than 5.
else: Executes if the condition is false.
printf("Number is greater than 5\n");: Prints the message if num is greater than 5.

Output:

Number is greater than 5

====================================================
11. enum
Example:

#include <stdio.h>

enum Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    enum Weekday today = FRIDAY;
    printf("Today is day number %d\n", today);
    return 0;
}


Explanation:

enum Weekday { ... };: Defines an enumeration for days of the week.
enum Weekday today = FRIDAY;: Sets today to the value of FRIDAY.
printf("Today is day number %d\n", today);: Prints the integer value associated with FRIDAY (4).


Output:

Today is day number 4

====================================================
12. extern
Example:

// file1.c
#include <stdio.h>

int num = 10; // Definition

// file2.c
#include <stdio.h>

extern int num; // Declaration

int main() {
    printf("Number = %d\n", num);
    return 0;
}

Explanation:

int num = 10;: Defines the variable num in one file.
extern int num;: Declares num in another file, allowing access to the same variable.
printf("Number = %d\n", num);: Prints the value of num.

Output (if files are compiled together):

Number = 10


====================================================
13. float
Example:

#include <stdio.h>

int main() {
    float pi = 3.14f;
    printf("Pi = %f\n", pi);
    return 0;
}

Explanation:

float pi = 3.14f;: Declares a float variable pi.
printf("Pi = %f\n", pi);: Prints the value of pi with float format.

Output:

Pi = 3.140000

====================================================
14. for
Example:

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
    return 0;
}

Explanation:

for (int i = 0; i < 5; i++): Starts a loop with i initialized to 0, continues as long as i < 5, and increments i after each iteration.
printf("i = %d\n", i);: Prints the value of i each iteration.

Output:

i = 0
i = 1
i = 2
i = 3
i = 4

====================================================
15. goto
Example:

#include <stdio.h>

int main() {
    int i = 0;

    start:
    if (i >= 5) {
        goto end;
    }
    printf("i = %d\n", i);
    i++;
    goto start;

    end:
    return 0;
}

Explanation:

start:: Label marking the start of a block.
if (i >= 5) { goto end; }: Jumps to the end label if i is 5 or greater.
goto start;: Jumps back to the start label.
end:: Label marking the end of the program.

Output:

i = 0
i = 1
i = 2
i = 3
i = 4

====================================================
16. if
Example:

#include <stdio.h>

int main() {
    int num = 10;

    if (num > 5) {
        printf("Number is greater than 5\n");
    }
    return 0;
}

Explanation:

if (num > 5): Checks if num is greater than 5.
printf("Number is greater than 5\n");: Prints a message if the condition is true.

Output:

Number is greater than 5

====================================================
17. int
Example:

#include <stdio.h>

int main() {
    int age = 25;
    printf("Age = %d\n", age);
    return 0;
}

Explanation:

int age = 25;: Declares an integer variable age and initializes it to 25.
printf("Age = %d\n", age);: Prints the value of age.

Output:

Age = 25

====================================================
18. long
Example:

#include <stdio.h>

int main() {
    long distance = 123456789L;
    printf("Distance = %ld\n", distance);
    return 0;
}

Explanation:

long distance = 123456789L;: Declares a long integer variable distance.
printf("Distance = %ld\n", distance);: Prints the value of distance.

Output:

Distance = 123456789

====================================================
19. register
Example:

#include <stdio.h>

int main() {
    register int count = 0;
    for (count = 0; count < 5; count++) {
        printf("Count = %d\n", count);
    }
    return 0;
}

Explanation:

register int count = 0;: Suggests to the compiler to use a CPU register for the variable count (though the compiler might ignore this).
for (count = 0; count < 5; count++): Iterates from count = 0 to count < 5.
printf("Count = %d\n", count);: Prints the value of count.

Output:
Count = 0
Count = 1
Count = 2
Count = 3
Count = 4
====================================================
20. return
Example:

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    printf("Result = %d\n", result);
    return 0;
}

Explanation:

return a + b;: Returns the sum of a and b from the add function.
int result = add(3, 4);: Calls add with 3 and 4, storing the result.
printf("Result = %d\n", result);: Prints the result of the addition.

Output:
Result = 7

====================================================
21. short
Example:

#include <stdio.h>

int main() {
    short age = 25;
    printf("Age = %d\n", age);
    return 0;
}

Explanation:

short age = 25;: Declares a short integer variable age.
printf("Age = %d\n", age);: Prints the value of age.

Output:

Age = 25
====================================================
22. signed
Example:

#include <stdio.h>

int main() {
    signed int num = -10;
    printf("Num = %d\n", num);
    return 0;
}

Explanation:

signed int num = -10;: Declares a signed integer variable num with a negative value.
printf("Num = %d\n", num);: Prints the value of num.

Output:

Num = -10

====================================================
23. sizeof
Example:

#include <stdio.h>

int main() {
    int num;
    printf("Size of int = %zu bytes\n", sizeof(num));
    return 0;
}

Explanation:

sizeof(num): Evaluates the size of the num variable in bytes.
printf("Size of int = %zu bytes\n", sizeof(num));: Prints the size of an int.

Output (may vary by system):

Size of int = 4 bytes

====================================================
24. static

Example:

#include <stdio.h>

void counter() {
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}

int main() {
    counter();
    counter();
    return 0;
}

Explanation:

static int count = 0;: Declares a static variable count that retains its value between function calls.
count++;: Increments the value of count.
printf("Count = %d\n", count);: Prints the current value of count.

Output:

Count = 1
Count = 2

====================================================
25. struct

Example:

#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p = {"Alice", 30};
    printf("Name = %s, Age = %d\n", p.name, p.age);
    return 0;
}

Explanation:

struct Person { ... };: Defines a structure with name and age fields.
struct Person p = {"Alice", 30};: Creates and initializes a variable p of type struct Person.
printf("Name = %s, Age = %d\n", p.name, p.age);: Prints the fields of the structure.

Output:

Name = Alice, Age = 30

====================================================
26. switch
Example:

#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Unknown day\n");
    }
    return 0;
}

Explanation:

switch (day): Evaluates the value of day.
case 3:: Matches day to 3, executing the block for Wednesday.
printf("Wednesday\n");: Prints "Wednesday".


Output:

Wednesday

====================================================
27. typedef
Example:

#include <stdio.h>

typedef unsigned long ulong;

int main() {
    ulong number = 123456789UL;
    printf("Number = %lu\n", number);
    return 0;
}
Explanation:

typedef unsigned long ulong;: Creates an alias ulong for unsigned long.
ulong number = 123456789UL;: Declares a variable number of type ulong.
printf("Number = %lu\n", number);: Prints the value of number.


Output:

Number = 123456789

====================================================
28. union
Example:


#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    
    data.i = 10;
    printf("Data.i = %d\n", data.i);
    
    data.f = 220.5;
    printf("Data.f = %f\n", data.f);
    
    snprintf(data.str, sizeof(data.str), "Hello");
    printf("Data.str = %s\n", data.str);

    return 0;
}

Explanation:

union Data { ... };: Defines a union where all members share the same memory location.
data.i = 10;: Sets the integer value.
data.f = 220.5;: Sets the float value, overwriting previous value.
snprintf(data.str, sizeof(data.str), "Hello");: Sets the string value, overwriting previous values.

Output:

Data.i = 10
Data.f = 220.500000
Data.str = Hello

====================================================
29. unsigned
Example:

#include <stdio.h>

int main() {
    unsigned int num = 300;
    printf("Num = %u\n", num);
    return 0;
}

Explanation:

unsigned int num = 300;: Declares an unsigned integer variable num.
printf("Num = %u\n", num);: Prints the value of num.


Output:

Num = 300

====================================================
30. void
Example:

#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    greet();
    return 0;
}

Explanation:

void greet(): Defines a function that does not return a value.
printf("Hello, World!\n");: Prints a greeting message.

Output:


Hello, World!

====================================================
31. volatile
Example:

#include <stdio.h>

int main() {
    volatile int flag = 1;
    
    while (flag) {
        printf("Flag is still set\n");
        // In a real program, flag might be modified by an external event
    }
    
    return 0;
}

Explanation:

volatile int flag = 1;: Declares a volatile variable flag, which might be changed by external factors.
while (flag): Continuously checks the value of flag.
printf("Flag is still set\n");: Prints a message if flag remains set.


Output:

Flag is still set

====================================================
32. while
Example:

#include <stdio.h>

int main() {
    int i = 0;

    while (i < 5) {
        printf("i = %d\n", i);
        i++;
    }
    return 0;
}

Explanation:

while (i < 5): Executes the loop as long as i is less than 5.
printf("i = %d\n", i);: Prints the value of i each iteration.
i++;: Increments i.

Output:

i = 0
i = 1
i = 2
i = 3
i = 4

====================================================
33. return
Example:

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

Explanation:

printf("Hello, World!\n");: Prints "Hello, World!" to the console.
return 0;: Ends the main function and returns 0, indicating successful execution.
Output:

Hello, World!


******************************************************************************************
    
******************************************************************************************
#Only Programs and its Output.


1. auto
Example:



#include <stdio.h>

int main() {
    auto int num = 5;
    printf("Number = %d\n", num);
    return 0;
}

Output:
Number = 5

====================================================
2. break
Example:



#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        printf("i = %d\n", i);
    }
    return 0;
}


Output:

i = 0
i = 1
i = 2
i = 3
i = 4

====================================================
3. case
Example:


#include <stdio.h>

int main() {
    int day = 2;
    
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        default:
            printf("Other day\n");
    }
    return 0;
}


Output:

Tuesday

====================================================
4. char
Example:



#include <stdio.h>

int main() {
    char letter = 'A';
    printf("Letter = %c\n", letter);
    return 0;
}

Output:
Letter = A

====================================================
5. const
Example:

#include <stdio.h>

int main() {
    const int MAX = 100;
    printf("MAX = %d\n", MAX);
    // MAX = 200; // This would cause a compile-time error
    return 0;
}

Output:
MAX = 100

====================================================
6. continue
Example:

#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("i = %d\n", i);
    }
    return 0;
}


Output:

i = 1
i = 3
i = 5
i = 7
i = 9

====================================================
7. default
Example:


#include <stdio.h>

int main() {
    int number = 5;

    switch (number) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        default:
            printf("Other\n");
    }
    return 0;
}


Output:
Other
====================================================

8. do
Example:

#include <stdio.h>

int main() {
    int i = 0;

    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);

    return 0;
}

Output:

i = 0
i = 1
i = 2
i = 3
i = 4
====================================================

9. double
Example:

#include <stdio.h>

int main() {
    double pi = 3.14159;
    printf("Pi = %lf\n", pi);
    return 0;
}


Output:

Pi = 3.141590

====================================================
10. else
Example:


#include <stdio.h>

int main() {
    int num = 10;

    if (num > 5) {
        printf("Number is greater than 5\n");
    } else {
        printf("Number is 5 or less\n");
    }

    return 0;
}

Output:



Number is greater than 5
====================================================

11. enum
Example:


#include <stdio.h>

enum Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    enum Weekday today = FRIDAY;
    printf("Today is day number %d\n", today);
    return 0;
}


Output:


Today is day number 4

====================================================
12. extern

Example:

// file1.c
#include <stdio.h>

int num = 10; // Definition

// file2.c
#include <stdio.h>

extern int num; // Declaration

int main() {
    printf("Number = %d\n", num);
    return 0;
}


Output (assuming file1.c is compiled separately):

Number = 10
====================================================
13. float
Example:

#include <stdio.h>

int main() {
    float pi = 3.14f;
    printf("Pi = %f\n", pi);
    return 0;
}

Output:

Pi = 3.140000

====================================================

14. for
Example:

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
    return 0;
}

Output:

i = 0
i = 1
i = 2
i = 3
i = 4

====================================================

15. goto

Example:

#include <stdio.h>

int main() {
    int i = 0;

    start:
    if (i >= 5) {
        goto end;
    }
    printf("i = %d\n", i);
    i++;
    goto start;

    end:
    return 0;
}

Output:

i = 0
i = 1
i = 2
i = 3
i = 4

====================================================
16. if
Example:

#include <stdio.h>

int main() {
    int num = 10;

    if (num > 5) {
        printf("Number is greater than 5\n");
    }
    return 0;
}

Output:

Number is greater than 5

====================================================

17. int

Example:

#include <stdio.h>

int main() {
    int age = 25;
    printf("Age = %d\n", age);
    return 0;
}

Output:

Age = 25

====================================================
18. long


Example:

#include <stdio.h>

int main() {
    long distance = 123456789L;
    printf("Distance = %ld\n", distance);
    return 0;
}

Output:

Distance = 123456789

====================================================
19. register
Example:


#include <stdio.h>

int main() {
    register int count = 0;
    for (count = 0; count < 5; count++) {
        printf("Count = %d\n", count);
    }
    return 0;
}

Output:

Count = 0
Count = 1
Count = 2
Count = 3
Count = 4

====================================================

20. return
Example:


#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    printf("Result = %d\n", result);
    return 0;
}

Output:

Result = 7


====================================================

21. short
Example:

#include <stdio.h>

int main() {
    short age = 25;
    printf("Age = %d\n", age);
    return 0;
}

Output:

Age = 25


====================================================
22. signed
Example:


#include <stdio.h>

int main() {
    signed int num = -10;
    printf("Num = %d\n", num);
    return 0;
}

Output:

Num = -10

====================================================
23. sizeof
Example:


#include <stdio.h>

int main() {
    int num;
    printf("Size of int = %zu bytes\n", sizeof(num));
    return 0;
}
Output (may vary by system):


Size of int = 4 bytes

====================================================
24. static
Example:


#include <stdio.h>

void counter() {
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}

int main() {
    counter();
    counter();
    return 0;
}

Output:


Count = 1
Count = 2


====================================================
25. struct
Example:


#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p = {"Alice", 30};
    printf("Name = %s, Age = %d\n", p.name, p.age);
    return 0;
}
Output:


Name = Alice, Age = 30

====================================================
26. switch

Example:



#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Unknown day\n");
    }
    return 0;
}


Output:

Wednesday


====================================================

27. typedef

Example:

#include <stdio.h>

typedef unsigned long ulong;

int main() {
    ulong number = 123456789UL;
    printf("Number = %lu\n", number);
    return 0;
}

Output:


Number = 123456789


====================================================
28. union
Example:


#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    
    data.i = 10;
    printf("Data.i = %d\n", data.i);
    
    data.f = 220.5;
    printf("Data.f = %f\n", data.f);
    
    snprintf(data.str, sizeof(data.str), "Hello");
    printf("Data.str = %s\n", data.str);

    return 0;
}

Output:

Data.i = 10
Data.f = 220.500000
Data.str = Hello

====================================================
29. unsigned

Example:


#include <stdio.h>

int main() {
    unsigned int num = 300;
    printf("Num = %u\n", num);
    return 0;
}


Output:

Num = 300

====================================================
30. void
Example:

#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    greet();
    return 0;
}

Output:

Hello, World!

====================================================

31. volatile


Example:

#include <stdio.h>

int main() {
    volatile int flag = 1;
    
    while (flag) {
        // Some operation that might change flag
        printf("Flag is still set\n");
        // In a real program, flag might be modified by an external event
    }
    
    return 0;
}

Output:

Flag is still set
Note: This loop will run indefinitely unless flag is modified externally.

====================================================

32. while

Example:


#include <stdio.h>

int main() {
    int i = 0;

    while (i < 5) {
        printf("i = %d\n", i);
        i++;
    }
    return 0;
}

Output:


i = 0
i = 1
i = 2
i = 3
i = 4

====================================================

33. return

Example:

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}


Output:

Hello, World!
