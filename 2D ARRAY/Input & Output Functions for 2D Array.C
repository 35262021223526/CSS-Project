#include <stdio.h>

// Function to take input in matrix
void input(int arr[100][100], int rows, int cols) {
    int i, j;
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to print matrix
void output(int arr[100][100], int rows, int cols) {
    int i, j;
    printf("\nThe Matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[100][100];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    input(matrix, rows, cols);   // call input function
    output(matrix, rows, cols);  // call output function

    return 0;
}
