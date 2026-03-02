#include <stdio.h>

int main() {
    int arr[100][100];
    int rows, cols, i, j;
    long long product = 1;  // Use long long for large product

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            product *= arr[i][j];   // Multiply to product
        }
    }

    // Output the product
    printf("\nProduct of all elements = %lld\n", product);

    return 0;
}
