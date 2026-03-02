#include <stdio.h>

int main() {
    int A[100][100], B[100][100], C[100][100];
    int r1, c1, r2, c2, i, j, k;

    // Input size of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input size of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication compatibility
    if(c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        printf("Columns of first matrix must equal rows of second matrix.\n");
        return 0;
    }

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix to 0
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result matrix
    printf("\nResultant Matrix (A × B):\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
