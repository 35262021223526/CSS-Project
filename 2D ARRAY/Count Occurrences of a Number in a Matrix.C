#include <stdio.h>

int main() {
    int arr[100][100];
    int rows, cols, i, j, target, count = 0;

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

    // Input number to count
    printf("Enter the number to count: ");
    scanf("%d", &target);

    // Counting occurrences
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] == target) {
                count++;
            }
        }
    }

    // Output result
    printf("Number %d appears %d time(s) in the matrix.\n", target, count);

    return 0;
}
