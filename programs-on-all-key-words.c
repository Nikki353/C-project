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
