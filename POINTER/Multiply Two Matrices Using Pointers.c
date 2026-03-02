#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int *p1, *p2, *p3;
    int r1, c1, r2, c2;

    // Input matrix sizes
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("\nMatrix multiplication not possible. Columns of first matrix must equal rows of second.\n");
        return 0;
    }

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Set pointers to matrices
    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &result[0][0];

    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(p3 + i*c2 + j) = 0;
        }
    }

    // Multiply using pointers
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                *(p3 + i*c2 + j) += (*(p1 + i*c1 + k)) * (*(p2 + k*c2 + j));
            }
        }
    }

    // Display result
    printf("\nResultant Matrix (Multiplication):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", *(p3 + i*c2 + j));
        }
        printf("\n");
    }

    return 0;
}
