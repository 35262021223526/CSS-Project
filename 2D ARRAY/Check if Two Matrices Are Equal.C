#include <stdio.h>

int main() {
    int A[100][100], B[100][100];
    int rows1, cols1, rows2, cols2;
    int i, j, equal = 1;

    // Input size of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input size of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if dimensions match
    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrices are NOT equal (different dimensions).\n");
        return 0;
    }

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Compare matrices
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            if(A[i][j] != B[i][j]) {
                equal = 0;
                break;
            }
        }
        if(!equal)
            break;
    }

    // Output result
    if(equal)
        printf("Matrices are EQUAL.\n");
    else
        printf("Matrices are NOT equal.\n");

    return 0;
}
