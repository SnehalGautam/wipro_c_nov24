#include <stdio.h>

int main() {
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns for the first matrix (rowsA colsA): ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter the number of rows and columns for the second matrix (rowsB colsB): ");
    scanf("%d %d", &rowsB, &colsB);


    if (colsA != rowsB) {
        printf(" Number of columns in Matrix A must equal number of rows in Matrix B.\n");
        return 1;
    }

    int A[rowsA][colsA], B[rowsB][colsB], C[rowsA][colsB];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant Matrix (Product of A and B):\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}