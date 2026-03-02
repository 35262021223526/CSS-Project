#include <stdio.h>

int main() {
    int arr[100][100], transpose[100][100];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Find transpose: rows become columns
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    // Print transpose
    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
