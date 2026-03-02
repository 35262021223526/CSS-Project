#include <stdio.h>

int main() {
    int arr[100][100];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Sum of each row
    printf("\nSum of each row:\n");
    for(i = 0; i < rows; i++) {
        int rowSum = 0;
        for(j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d sum = %d\n", i, rowSum);
    }

    // Sum of each column
    printf("\nSum of each column:\n");
    for(j = 0; j < cols; j++) {
        int colSum = 0;
        for(i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("Column %d sum = %d\n", j, colSum);
    }

    return 0;
}
