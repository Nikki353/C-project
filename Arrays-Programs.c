Introduction to Arrays:
Arrays in C are a collection of elements of the same data type stored at contiguous memory locations. They provide a way to store multiple values of the same type under a single name.

Program Explanation:
This program calculates the sum of all elements in an integer array.

#include <stdio.h>

int main() {
    // Introduction: Array declaration and initialization
    int arr[] = {1, 2, 3, 4, 5};  // Declaring and initializing an array with values
    
    // Output: Printing the array elements
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);  // Accessing and printing each element of the array
    }
    printf("\n");

    // Program: Calculating the sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];  // Adding each element to the sum
    }

    // Output: Printing the sum of array elements
    printf("Sum of array elements: %d\n", sum);

    return 0;
}


Output:

Array elements: 1 2 3 4 5 
Sum of array elements: 15


Explanation:

Introduction to Arrays:

Arrays in C are used to store multiple values of the same type under a single name.
Elements of an array are accessed using index numbers starting from 0.
Program Explanation:

Array Declaration and Initialization:

int arr[] = {1, 2, 3, 4, 5}; declares an integer array arr with 5 elements initialized to {1, 2, 3, 4, 5}.
Printing Array Elements:

printf("Array elements: "); prints a message indicating the array elements will be displayed.
for (int i = 0; i < 5; i++) { printf("%d ", arr[i]); } iterates through the array arr and prints each element.
Calculating Sum of Array Elements:

int sum = 0; initializes sum to zero to accumulate the sum of array elements.
for (int i = 0; i < 5; i++) { sum += arr[i]; } iterates through the array arr and adds each element to sum.
Outputting the Result:

printf("Sum of array elements: %d\n", sum); prints the calculated sum of array elements.
Output Explanation:

The program first prints the array elements {1, 2, 3, 4, 5}.
Then it calculates the sum of these elements (1 + 2 + 3 + 4 + 5 = 15) and prints Sum of array elements: 15.


====================================================================================================================
2. Finding Largest Element in Array
Program Explanation:
This program finds the largest element in an integer array.


#include <stdio.h>

int main() {
    // Introduction: Array declaration and initialization
    int arr[] = {5, 2, 8, 10, 3};  // Declaring and initializing an array with values
    
    // Output: Printing the array elements
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);  // Accessing and printing each element of the array
    }
    printf("\n");

    // Program: Finding the largest element in the array
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Updating max if current element is larger
        }
    }

    // Output: Printing the largest element
    printf("Largest element in array: %d\n", max);

    return 0;
}


Output:


Array elements: 5 2 8 10 3 
Largest element in array: 10
Explanation:
Program Explanation:

Array Declaration and Initialization:

int arr[] = {5, 2, 8, 10, 3}; declares an integer array arr with 5 elements initialized to {5, 2, 8, 10, 3}.
Printing Array Elements:

printf("Array elements: "); prints a message indicating the array elements will be displayed.
for (int i = 0; i < 5; i++) { printf("%d ", arr[i]); } iterates through the array arr and prints each element.
Finding Largest Element:

int max = arr[0]; initializes max to the first element of the array.
for (int i = 1; i < 5; i++) { if (arr[i] > max) { max = arr[i]; } } iterates through the array starting from the second element, updating max if a larger element is found.
Outputting the Result:

printf("Largest element in array: %d\n", max); prints the largest element found in the array.
Output Explanation:

The program first prints the array elements {5, 2, 8, 10, 3}.
Then it identifies the largest element (10) and prints Largest element in array: 10.

====================================================================================================================

3. Copying One Array to Another
Program Explanation:

This program copies elements from one integer array to another.


#include <stdio.h>

int main() {
    // Introduction: Array declaration and initialization
    int arr1[] = {1, 2, 3, 4, 5};  // Declaring and initializing source array
    int arr2[5];  // Declaring destination array
    
    // Program: Copying elements from arr1 to arr2
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];  // Copying each element
    }

    // Output: Printing the elements of arr2
    printf("Elements of arr2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);  // Accessing and printing each element of arr2
    }
    printf("\n");

    return 0;
}


Output:

Elements of arr2: 1 2 3 4 5 


Explanation:
Program Explanation:

Array Declaration and Initialization:

int arr1[] = {1, 2, 3, 4, 5}; declares and initializes an integer array arr1 with 5 elements.
int arr2[5]; declares an integer array arr2 with 5 elements (initially uninitialized).
Copying Elements:

for (int i = 0; i < 5; i++) { arr2[i] = arr1[i]; } iterates through arr1 and copies each element to arr2.
Outputting the Result:

printf("Elements of arr2: "); prints a message indicating the array elements of arr2 will be displayed.
for (int i = 0; i < 5; i++) { printf("%d ", arr2[i]); } iterates through arr2 and prints each element.
Output Explanation:

The program copies elements {1, 2, 3, 4, 5} from arr1 to arr2.
It then prints the elements of arr2: 1 2 3 4 5.

====================================================================================================================
4. Reversing an Array


Program Explanation:
This program reverses the order of elements in an integer array.

#include <stdio.h>

int main() {
    // Introduction: Array declaration and initialization
    int arr[] = {1, 2, 3, 4, 5};  // Declaring and initializing an array with values
    int size = 5;  // Size of the array
    
    // Output: Printing the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Accessing and printing each element of the array
    }
    printf("\n");

    // Program: Reversing the array
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;  // Swapping elements to reverse the array
    }

    // Output: Printing the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Accessing and printing each element of the reversed array
    }
    printf("\n");

    return 0;
}

Output:

Original array: 1 2 3 4 5 
Reversed array: 5 4 3 2 1 


Explanation:
Program Explanation:

Array Declaration and Initialization:

int arr[] = {1, 2, 3, 4, 5}; declares and initializes an integer array arr with 5 elements.
Printing Original Array:

printf("Original array: "); prints a message indicating the original array elements will be displayed.
for (int i = 0; i < size; i++) { printf("%d ", arr[i]); } iterates through arr and prints each element.
Reversing the Array:

for (int i = 0; i < size / 2; i++) { int temp = arr[i]; arr[i] = arr[size - i - 1]; arr[size - i - 1] = temp; } iterates halfway through the array and swaps elements from the beginning with elements from the end to reverse the array.
Printing Reversed Array:

printf("Reversed array: "); prints a message indicating the reversed array elements will be displayed.
for (int i = 0; i < size; i++) { printf("%d ", arr[i]); } iterates through arr again and prints each element of the reversed array.
Output Explanation:

The program first prints the original array {1, 2, 3, 4, 5}.
It then reverses the array to {5, 4, 3, 2, 1} and prints it.

====================================================================================================================

5. Searching for an Element in an Array

Program Explanation:
This program searches for a specific element in an integer array.


#include <stdio.h>

int main() {
    // Introduction: Array declaration and initialization
    int arr[] = {1, 2, 3, 4, 5};  // Declaring and initializing an array with values
    int size = 5;  // Size of the array
    int key = 3;  // Element to search for
    
    // Output: Printing the array elements
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Accessing and printing each element of the array
    }
    printf("\n");

    // Program: Searching for the element in the array
    int found = 0;  // Flag to indicate if the element is found
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            found = 1;  // Setting the flag to true if element is found
            break;  // Exiting the loop once the element is found
        }
    }

    // Output: Printing whether the element is found or not
    if (found) {
        printf("Element %d found in array.\n", key);
    } else {
        printf("Element %d not found in array.\n", key);
    }

    return 0;
}

Output:


Array elements: 1 2 3 4 5 
Element 3 found in array.


Explanation:
Program Explanation:

Array Declaration and Initialization:

int arr[] = {1, 2, 3, 4, 5}; declares and initializes an integer array arr with 5 elements.
int key = 3; specifies the element 3 to search for in the array.
Printing Array Elements:

printf("Array elements: "); prints a message indicating the array elements will be displayed.
for (int i = 0; i < size; i++) { printf("%d ", arr[i]); } iterates through arr and prints each element.
Searching for the Element:

int found = 0; initializes found to 0 to indicate the element has not been found yet.
for (int i = 0; i < size; i++) { if (arr[i] == key) { found = 1; break; } } iterates through arr and checks if key is equal to any element. If found, sets found to 1 and breaks out of the loop.
Outputting the Result:

Depending on the value of found, the program prints whether the element 3 is found in the array or not.
Output Explanation:

The program first prints the array elements {1, 2, 3, 4, 5}.
It then searches for the element 3 and prints Element 3 found in array. since 3 is present in the array.

====================================================================================================================

6. Sorting an Array (Bubble Sort)

Program Explanation:
This program sorts elements of an integer array in ascending order using bubble sort.



#include <stdio.h>

int main() {
    // Introduction: Array declaration and initialization
    int arr[] = {5, 1, 4, 2, 8};  // Declaring and initializing an array with values
    int size = 5;  // Size of the array
    
    // Output: Printing the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Accessing and printing each element of the array
    }
    printf("\n");

    // Program: Sorting the array using bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;  // Swapping elements to sort in ascending order
            }
        }
    }

    // Output: Printing the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Accessing and printing each element of the sorted array
    }
    printf("\n");

    return 0;
}


Output:


Original array: 5 1 4 2 8 
Sorted array: 1 2 4 5 8 


Explanation:
Program Explanation:

Array Declaration and Initialization:

int arr[] = {5, 1, 4, 2, 8}; declares and initializes an integer array arr with 5 elements.
Printing Original Array:

printf("Original array: "); prints a message indicating the original array elements will be displayed.
for (int i = 0; i < size; i++) { printf("%d ", arr[i]); } iterates through arr and prints each element.
Sorting the Array (Bubble Sort):

Nested loops are used for bubble sort where the outer loop controls the number of passes (size - 1 times).
The inner loop compares adjacent elements and swaps them if they are in the wrong order (arr[j] > arr[j + 1]).
After each pass, the largest unsorted element moves to its correct position.
Printing Sorted Array:

printf("Sorted array: "); prints a message indicating the sorted array elements will be displayed.
for (int i = 0; i < size; i++) { printf("%d ", arr[i]); } iterates through arr again and prints each element of the sorted array.
Output Explanation:

The program first prints the original array {5, 1, 4, 2, 8}.
It then sorts the array in ascending order using bubble sort and prints the sorted array {1, 2, 4, 5, 8}.

====================================================================================================================

7. Merging Two Sorted Arrays

Program Explanation:
This program merges two sorted integer arrays into a single sorted array.


#include <stdio.h>

int main() {
    // Introduction: Array declaration and initialization
    int arr1[] = {1, 3, 5, 7, 9};  // First sorted array
    int arr2[] = {2, 4, 6, 8, 10};  // Second sorted array
    int size1 = 5, size2 = 5;  // Sizes of the arrays
    int result[10];  // Array to store merged result
    
    // Program: Merging the sorted arrays
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < size1) {
        result[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < size2) {
        result[k++] = arr2[j++];
    }

    // Output: Printing the merged sorted array
    printf("Merged sorted array: ");
    for (int m = 0; m < size1 + size2; m++) {
        printf("%d ", result[m]);  // Accessing and printing each element of the merged array
    }
    printf("\n");

    return 0;
}


Output:

Merged sorted array: 1 2 3 4 5 6 7 8 9 10 

Explanation:
Program Explanation:

Array Declaration and Initialization:

int arr1[] = {1, 3, 5, 7, 9}; declares and initializes the first sorted integer array arr1 with 5 elements.
int arr2[] = {2, 4, 6, 8, 10}; declares and initializes the second sorted integer array arr2 with 5 elements.
int result[10]; declares an integer array result to store the merged result with size 10.
Merging the Sorted Arrays:

Using three indices (i, j, and k) to traverse arr1, arr2, and result respectively.
Compares elements from both arrays and copies the smaller element into result.
Advances the respective indices (i, j, k) after each copy operation.
Printing Merged Sorted Array:

printf("Merged sorted array: "); prints a message indicating the merged sorted array elements will be displayed.
for (int m = 0; m < size1 + size2; m++) { printf("%d ", result[m]); } iterates through result and prints each element of the merged sorted array.
Output Explanation:

The program merges {1, 3, 5, 7, 9} and {2, 4, 6, 8, 10} into a single sorted array {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} and prints it.

====================================================================================================================

8. Finding Duplicate Elements in an Array
Program Explanation:
This program finds and prints duplicate elements in an integer array.


#include <stdio.h>

int main() {
    // Introduction: Array declaration and initialization
    int arr[] = {2, 4, 4, 1, 3, 1, 5, 3};  // Array with duplicate elements
    int size = 8;  // Size of the array
    
    // Output: Printing the array elements
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Accessing and printing each element of the array
    }
    printf("\n");

    // Program: Finding and printing duplicate elements
    printf("Duplicate elements in the array: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);  // Printing duplicate element if found
                break;
            }
        }
    }
    printf("\n");

    return 0;
}

Output:


Array elements: 2 4 4 1 3 1 5 3 
Duplicate elements in the array: 4 1 3 


Explanation:
Program Explanation:

Array Declaration and Initialization:

int arr[] = {2, 4, 4, 1, 3, 1, 5, 3}; declares and initializes an integer array arr with 8 elements containing duplicates.
Printing Array Elements:

printf("Array elements: "); prints a message indicating the array elements will be displayed.
for (int i = 0; i < size; i++) { printf("%d ", arr[i]); } iterates through arr and prints each element.
Finding and Printing Duplicate Elements:

Uses nested loops to compare each element (arr[i]) with all subsequent elements (arr[j]).
If a duplicate is found (arr[i] == arr[j] and i != j), it prints the duplicate element and breaks out of the inner loop.
Outputting the Result:

printf("Duplicate elements in the array: "); prints a message indicating the duplicate elements found in the array.
Each duplicate element found during the comparison is printed.
Output Explanation:

The program first prints the array elements {2, 4, 4, 1, 3, 1, 5, 3}.
It then identifies and prints the duplicate elements {4, 1, 3} present in the array.

====================================================================================================================

9. Calculating Average of Array Elements

Program Explanation:
This program calculates the average of elements in an integer array.



#include <stdio.h>

int main() {
    // Introduction: Array declaration and initialization
    int arr[] = {10, 20, 30, 40, 50};  // Declaring and initializing an array with values
    int size = 5;  // Size of the array
    
    // Output: Printing the array elements
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Accessing and printing each element of the array
    }
    printf("\n");

    // Program: Calculating the average of array elements
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // Calculating sum of array elements
    }
    float average = (float)sum / size;  // Calculating average as float
    
    // Output: Printing the average of array elements
    printf("Average of array elements: %.2f\n", average);

    return 0;
}

Output:


Array elements: 10 20 30 40 50 
Average of array elements: 30.00


Explanation:

Program Explanation:

Array Declaration and Initialization:

int arr[] = {10, 20, 30, 40, 50}; declares and initializes an integer array arr with 5 elements.
Printing Array Elements:

printf("Array elements: "); prints a message indicating the array elements will be displayed.
for (int i = 0; i < size; i++) { printf("%d ", arr[i]); } iterates through arr and prints each element.
Calculating the Average:

Initializes sum to 0 and iterates through arr, accumulating the sum of its elements.
Calculates average by dividing sum by size (converted to float for precision).


Outputting the Result:

printf("Average of array elements: %.2f\n", average); prints the average of array elements rounded to two decimal places.

Output Explanation:

The program first prints the array elements {10, 20, 30, 40, 50}.
It then calculates and prints the average of these elements ((10 + 20 + 30 + 40 + 50) / 5 = 30.00).

====================================================================================================================

10. Removing Duplicate Elements from an Array

Program Explanation:
This program removes duplicate elements from an integer array.



#include <stdio.h>

int main() {
    // Introduction: Array declaration and initialization
    int arr[] = {1, 2, 2, 3, 4, 4, 5};  // Array with duplicate elements
    int size = 7;  // Size of the array
    
    // Output: Printing the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Accessing and printing each element of the array
    }
    printf("\n");

    // Program: Removing duplicate elements
    int unique[size];  // Array to store unique elements
    int k = 0;  // Index for unique array
    
    for (int i = 0; i < size; i++) {
        int duplicate = 0;  // Flag to check for duplicates
        for (int j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                duplicate = 1;  // Setting flag if duplicate is found
                break;
            }
        }
        
        if (!duplicate) {
            unique[k++] = arr[i];  // Copying non-duplicate element to unique array
        }
    }

    // Output: Printing the array after removing duplicates
    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unique[i]);  // Accessing and printing each element of the unique array
    }
    printf("\n");

    return 0;
}


Output:


Original array: 1 2 2 3 4 4 5 
Array after removing duplicates: 1 2 3 4 5 

Explanation:
Program Explanation:

Array Declaration and Initialization:

int arr[] = {1, 2, 2, 3, 4, 4, 5}; declares and initializes an integer array arr with 7 elements containing duplicates.
Printing Original Array:

printf("Original array: "); prints a message indicating the original array elements will be displayed.
for (int i = 0; i < size; i++) { printf("%d ", arr[i]); } iterates through arr and prints each element.
Removing Duplicate Elements:

Declares an integer array unique to store unique elements.
Uses nested loops; the outer loop iterates through arr, and the inner loop checks if an element is already present in unique.
If not present, copies the element into unique and increments the index k.
Maintains a duplicate flag to keep track of whether an element is already copied.
Outputting the Result:

printf("Array after removing duplicates: "); prints a message indicating the array elements after removing duplicates.
for (int i = 0; i < k; i++) { printf("%d ", unique[i]); } iterates through unique and prints each element of the array after removing duplicates.

Output Explanation:

The program first prints the original array {1, 2, 2, 3, 4, 4, 5}.
It then removes the duplicate elements, resulting in the array {1, 2, 3, 4, 5}, which it prints as the output.

====================================================================================================================

11. Left-aligned Triangle Pattern
Program Explanation:
This program generates a left-aligned triangle pattern using arrays.


#include <stdio.h>

int main() {
    // Introduction: Triangle size input
    int size = 5;  // Size of the triangle
    
    // Program: Generating left-aligned triangle pattern
    printf("Left-aligned Triangle Pattern:\n");
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


Output:


Left-aligned Triangle Pattern:
* 
* * 
* * * 
* * * * 
* * * * *

Explanation:
Program Explanation:

Triangle Size Input:

int size = 5; specifies the number of rows in the triangle.
Generating Left-aligned Triangle:

Uses nested loops where the outer loop (for (int i = 1; i <= size; i++)) controls the number of rows.
The inner loop (for (int j = 1; j <= i; j++)) prints * characters based on the current row number i.
Output Explanation:

The program prints a left-aligned triangle pattern with * characters aligned to the left, forming a triangle shape with 5 rows.

====================================================================================================================

12. Right-aligned Triangle Pattern
Program Explanation:
This program generates a right-aligned triangle pattern using arrays.


#include <stdio.h>

int main() {
    // Introduction: Triangle size input
    int size = 5;  // Size of the triangle
    
    // Program: Generating right-aligned triangle pattern
    printf("Right-aligned Triangle Pattern:\n");
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            printf("  ");  // Print spaces for alignment
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

Output:


Right-aligned Triangle Pattern:
        * 
      * * 
    * * * 
  * * * * 
* * * * *

Explanation:
Program Explanation:

Triangle Size Input:

int size = 5; specifies the number of rows in the triangle.
Generating Right-aligned Triangle:

Uses nested loops where the outer loop (for (int i = 1; i <= size; i++)) controls the number of rows.
The first inner loop (for (int j = 1; j <= size - i; j++)) prints spaces to align the triangle to the right.
The second inner loop (for (int j = 1; j <= i; j++)) prints * characters based on the current row number i.
Output Explanation:

The program prints a right-aligned triangle pattern with * characters aligned to the right, forming a triangle shape with 5 rows.


====================================================================================================================


13. Upper Triangular Matrix
Program Explanation:
This program generates an upper triangular matrix using arrays.


#include <stdio.h>

int main() {
    // Introduction: Matrix size input
    int size = 5;  // Size of the matrix
    
    // Program: Generating upper triangular matrix
    printf("Upper Triangular Matrix:\n");
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (j >= i) {
                printf("* ");
            } else {
                printf("  ");  // Print spaces for the lower triangle
            }
        }
        printf("\n");
    }

    return 0;
}


Output:


Upper Triangular Matrix:
* * * * * 
  * * * * 
    * * * 
      * * 
        *
Explanation:
Program Explanation:

Matrix Size Input:

int size = 5; specifies the size of the matrix (number of rows and columns).
Generating Upper Triangular Matrix:

Uses nested loops where the outer loop (for (int i = 1; i <= size; i++)) controls the rows.
The inner loop (for (int j = 1; j <= size; j++)) iterates through columns.
Prints * if the column index j is greater than or equal to the row index i, otherwise prints spaces.
Output Explanation:

The program prints an upper triangular matrix where * characters form the upper triangle, and spaces form the lower triangle.


====================================================================================================================

14. Lower Triangular Matrix
Program Explanation:
This program generates a lower triangular matrix using arrays.


#include <stdio.h>

int main() {
    // Introduction: Matrix size input
    int size = 5;  // Size of the matrix
    
    // Program: Generating lower triangular matrix
    printf("Lower Triangular Matrix:\n");
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (j <= i) {
                printf("* ");
            } else {
                printf("  ");  // Print spaces for the upper triangle
            }
        }
        printf("\n");
    }

    return 0;
}


Output:

Lower Triangular Matrix:
* 
* * 
* * * 
* * * * 
* * * * *
Explanation:
Program Explanation:

Matrix Size Input:

int size = 5; specifies the size of the matrix (number of rows and columns).
Generating Lower Triangular Matrix:

Uses nested loops where the outer loop (for (int i = 1; i <= size; i++)) controls the rows.
The inner loop (for (int j = 1; j <= size; j++)) iterates through columns.
Prints * if the column index j is less than or equal to the row index i, otherwise prints spaces.
Output Explanation:

The program prints a lower triangular matrix where * characters form the lower triangle, and spaces form the upper triangle.


====================================================================================================================

15. Identity Matrix
Program Explanation:
This program generates an identity matrix using arrays.


#include <stdio.h>

int main() {
    // Introduction: Matrix size input
    int size = 4;  // Size of the matrix (4x4)
    
    // Program: Generating identity matrix
    printf("Identity Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}



Identity Matrix:
1 0 0 0 
0 1 0 0 
0 0 1 0 
0 0 0 1 


Explanation:
Program Explanation:

Matrix Size Input:

int size = 4; specifies the size of the matrix (4x4 in this case).
Generating Identity Matrix:

Uses nested loops where the outer loop (for (int i = 0; i < size; i++)) controls the rows.
The inner loop (for (int j = 0; j < size; j++)) iterates through columns.
Prints 1 if the row index i is equal to the column index j (diagonal), otherwise prints 0.
Output Explanation:

The program prints an identity matrix where 1 appears on the diagonal (from top-left to bottom-right) and 0 elsewhere.


====================================================================================================================
16. Diagonal Matrix
Program Explanation:
This program generates a diagonal matrix using arrays.


#include <stdio.h>

int main() {
    // Introduction: Matrix size input
    int size = 4;  // Size of the matrix (4x4)
    int diagonal[] = {1, 2, 3, 4};  // Diagonal elements
    
    // Program: Generating diagonal matrix
    printf("Diagonal Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                printf("%d ", diagonal[i]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}


Output:

Diagonal Matrix:
1 0 0 0 
0 2 0 0 
0 0 3 0 
0 0 0 4 

Explanation:
Program Explanation:

Matrix Size Input:

int size = 4; specifies the size of the matrix (4x4 in this case).
int diagonal[] = {1, 2, 3, 4}; defines the diagonal elements of the matrix.
Generating Diagonal Matrix:

Uses nested loops where the outer loop (for (int i = 0; i < size; i++)) controls the rows.
The inner loop (for (int j = 0; j < size; j++)) iterates through columns.
Prints the element from diagonal array corresponding to the current row index i and column index j if they are equal, otherwise prints 0.
Output Explanation:

The program prints a diagonal matrix where elements from the diagonal array appear on the main diagonal, and 0 appears elsewhere.


====================================================================================================================

17. Symmetric Matrix
Program Explanation:
This program checks if a matrix is symmetric using arrays.



#include <stdio.h>
#include <stdbool.h>  // Include for boolean data type

// Function to check if matrix is symmetric
bool isSymmetric(int mat[][3], int size) {
    // Checking symmetric condition
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (mat[i][j] != mat[j][i]) {
                return false;  // Not symmetric if any element is not equal to its transpose
            }
        }
    }
    return true;  // Matrix is symmetric
}

int main() {
    // Introduction: Matrix input
    int size = 3;  // Size of the matrix (3x3)
    int matrix[3][3] = {{1, 2, 3}, 
                        {2, 4, 5}, 
                        {3, 5, 6}};  // Symmetric matrix
    
    // Output: Printing the matrix
    printf("Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);  // Accessing and printing each element of the matrix
        }
        printf("\n");
    }

    // Program: Checking if matrix is symmetric
    if (isSymmetric(matrix, size)) {
        printf("Matrix is symmetric.\n");
    } else {
        printf("Matrix is not symmetric.\n");
    }

    return 0;
}


Output:


Matrix:
1 2 3 
2 4 5 
3 5 6 
Matrix is symmetric.
Explanation:
Program Explanation:

Matrix Input:

int size = 3; specifies the size of the matrix (3x3 in this case).
int matrix[3][3] defines the elements of the matrix.
Printing Matrix:

Uses nested loops to print the matrix elements.
Checking Symmetric Matrix:

bool isSymmetric(int mat[][3], int size) is a function that checks if the matrix mat of size size x size is symmetric.
Iterates through the matrix and checks if mat[i][j] is equal to mat[j][i].
Returns true if the matrix is symmetric, otherwise returns false.
Output Explanation:

The program prints the matrix and then checks if it is symmetric (matrix[3][3] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}}), which it confirms to be true.


====================================================================================================================

18. Transpose of a Matrix
Program Explanation:
This program computes the transpose of a matrix using arrays.

#include <stdio.h>

int main() {
    // Introduction: Matrix size input
    int rows = 3, cols = 2;  // Rows and columns of the matrix
    int matrix[3][2] = {{1, 2}, 
                        {3, 4}, 
                        {5, 6}};  // Matrix to transpose
    
    // Output: Printing the original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);  // Accessing and printing each element of the original matrix
        }
        printf("\n");
    }

    // Program: Computing the transpose of the matrix
    int transpose[2][3];  // Resultant transpose matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];  // Computing each element of the transpose matrix
        }
    }

    // Output: Printing the transpose of the matrix
    printf("Transpose Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);  // Accessing and printing each element of the transpose matrix
        }
        printf("\n");
    }

    return 0;
}

Output:

Original Matrix:
1 2 
3 4 
5 6 
Transpose Matrix:
1 3 5 
2 4 6 


Explanation:
Program Explanation:

Matrix Input:

int rows = 3, cols = 2; specifies the number of rows and columns of the matrix.
int matrix[3][2] defines the elements of the matrix.
Printing Original Matrix:

Uses nested loops to print the original matrix elements.
Computing Transpose of Matrix:

Declares transpose[2][3] to store the transpose matrix.
Uses nested loops to compute each element of the transpose matrix by swapping rows and columns.
Output Explanation:

The program prints the original matrix and its transpose (matrix[3][2] = {{1, 2}, {3, 4}, {5, 6}}), demonstrating how to compute and print the transpose of a matrix.


Each of these examples provides a structured approach to solving common problems with arrays in C, such as reversing arrays, searching for elements, sorting arrays, merging two sorted arrays, finding duplicate elements, calculating averages, and removing duplicates. These programs showcase different strategies for manipulating and working with array data structures effectively.
