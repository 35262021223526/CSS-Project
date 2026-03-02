#include <stdio.h>

int main() {
    int arr[100][100];
    int rows, cols, i, j, k, l, temp;

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

    // Sorting in descending order
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {

            for(k = 0; k < rows; k++) {
                for(l = 0; l < cols; l++) {

                    if(arr[i][j] > arr[k][l]) {  
                        // Swap for descending order
                        temp = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = temp;
                    }

                }
            }

        }
    }

    // Print sorted matrix
    printf("\nMatrix in descending order:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
