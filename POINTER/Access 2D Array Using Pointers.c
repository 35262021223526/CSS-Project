#include <stdio.h>

int main() {
    int arr[10][10], rows, cols;
    int *ptr;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input elements
    printf("\nEnter elements of the %dx%d array:\n", rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Pointer points to the first element of array
    ptr = &arr[0][0];

    // Display array using pointer arithmetic
    printf("\nArray elements using pointer:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(ptr + i * cols + j)); 
        }
        printf("\n");
    }

    return 0;
}
