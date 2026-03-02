#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int *p1, *p2, *p3;
    int rows, cols;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Assign pointers
    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &sum[0][0];

    // Add matrices using pointers
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(p3 + i * cols + j) = *(p1 + i * cols + j) + *(p2 + i * cols + j);
        }
    }

    // Display result
    printf("\nResultant Matrix (Sum):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
