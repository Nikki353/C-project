In C programming, character sets and the ASCII table play crucial roles in handling characters and their representations. Here’s an overview of these concepts:

Character Set in C

A character set is a collection of characters and their corresponding integer representations that a computer system recognizes and can handle. In C, the character set is primarily based on the ASCII (American Standard Code for Information Interchange) character set, which defines codes for characters such as letters, digits, punctuation marks, and control characters.

ASCII Table

The ASCII table (ASCII stands for American Standard Code for Information Interchange) is a standard character encoding scheme that assigns numeric codes to characters. Here is a brief overview of the ASCII table relevant to C programming:

Basic ASCII Characters: ASCII defines codes for printable characters (from 32 to 126) and control characters (from 0 to 31 and 127).
Character Representation: Each character is represented by a numeric code. For example, the character 'A' is represented by the code 65, 'B' by 66, and so on.
Escape Sequences: ASCII also includes escape sequences (like \n for newline and \t for tab) that are used to represent characters that cannot be easily typed or displayed.

ASCII Table Example
Here is a simplified ASCII table snippet for printable characters (32 to 126):


  Dec  Hex    Character
---------------------------
   32   20        (space)
   33   21         !
   34   22         "       "
   35   23         #
   36   24         $
   37   25         %
   38   26         &
   39   27         '     '
   40   28         (
   41   29         )
   42   2A         *
   43   2B         +
   44   2C         ,
   45   2D         -
   46   2E         .
   47   2F         /
   48   30         0
   49   31         1
   50   32         2
   51   33         3
   52   34         4
   53   35         5
   54   36         6
   55   37         7
   56   38         8
   57   39         9
   58   3A         :
   59   3B         ;
   60   3C         <
   61   3D         =
   62   3E         >
   63   3F         ?
   64   40         @
   65   41         A
   66   42         B
   67   43         C
   68   44         D
   69   45         E
   70   46         F
   71   47         G
   72   48         H
   73   49         I
   74   4A         J
   75   4B         K
   76   4C         L
   77   4D         M
   78   4E         N
   79   4F         O
   80   50         P
   81   51         Q
   82   52         R
   83   53         S
   84   54         T
   85   55         U
   86   56         V
   87   57         W
   88   58         X
   89   59         Y
   90   5A         Z
   91   5B         [   
   92   5C         \   
   93   5D         ]
   94   5E         ^
   95   5F         _
   96   60         `
   97   61         a
   98   62         b
   99   63         c
  100   64         d
  101   65         e
  102   66         f
  103   67         g
  104   68         h
  105   69         i
  106   6A         j
  107   6B         k
  108   6C         l
  109   6D         m
  110   6E         n
  111   6F         o
  112   70         p
  113   71         q
  114   72         r
  115   73         s
  116   74         t
  117   75         u
  118   76         v
  119   77         w
  120   78         x
  121   79         y
  122   7A         z
  123   7B         {
  124   7C         |
  125   7D         }
  126   7E         ~


Using ASCII Characters in C

In C programming, ASCII characters are represented using their integer values. For example, to assign the character 'A' to a variable in C, you can use:


char myChar = 'A';
Here, 'A' is represented internally as its ASCII value, which is 65.



Some of the Example Programs 

Program 1: Printing ASCII Table
This program prints the ASCII table from 32 to 126, showing each character along with its ASCII value.


#include <stdio.h>

int main() {
    int i;

    printf("ASCII Table from 32 to 126:\n");
    printf("---------------------------\n");
    for (i = 32; i <= 126; ++i) {
        printf("%3d  %c\n", i, (char)i);
    }

    return 0;
}



Program 2: Character Input and Output
This program demonstrates basic input and output of characters in C.


#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("You entered: %c\n", ch);

    return 0;
}


Program 3: Counting Characters in a String
This program counts the number of characters in a string entered by the user.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets input
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    length = strlen(str);
    printf("Length of the string: %d\n", length);

    return 0;
}


Program 4: Converting Lowercase to Uppercase

This program converts all lowercase letters in a string to uppercase.


#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; ++i) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    printf("String in uppercase: %s\n", str);

    return 0;
}


Program 5: Checking Palindrome String
This program checks whether a given string is a palindrome (reads the same forward and backward).

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j;
    int isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets input
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Ignore case while checking palindrome
    for (i = 0, j = strlen(str) - 1; i < j; ++i, --j) {
        if (tolower(str[i]) != tolower(str[j])) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


Explanation:
Program 1 prints the ASCII table from 32 to 126 using a loop and %c format specifier to print characters corresponding to ASCII values.
Program 2 demonstrates reading a single character input from the user using scanf and printing it back.
Program 3 calculates and prints the length of a string entered by the user, handling input with fgets.
Program 4 converts all lowercase letters in a string to uppercase using functions from <ctype.h>.
Program 5 checks if a string entered by the user is a palindrome by comparing characters from the start and end of the string, ignoring case sensitivity.
