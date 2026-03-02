#include <stdio.h>

int main() {
    int arr[100][100];
    int rows, cols, i, j;
    int max, min;

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

    // Initialize max and min with first element
    max = min = arr[0][0];

    // Find max and min
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];

            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    // Output results
    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
