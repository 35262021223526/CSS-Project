#include <stdio.h>

int main() {
    int A[100][100], B[100][100], C[100][100];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Adding matrices
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Printing result (Sum matrix)
    printf("\nResultant Matrix (A + B):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
