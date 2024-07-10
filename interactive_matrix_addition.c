#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], resultMatrix[3][3];

    // Input for matrix1
    printf("Enter elements of Matrix 1 (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for matrix2
    printf("Enter elements of Matrix 2 (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix addition
    printf("Sum of matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
