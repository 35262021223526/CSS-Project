#include <stdio.h>

int main() {
    int arr[100][100];
    int rows, cols, i, j, target;
    int found = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input 2D array
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Input element to search
    printf("Enter the element to find: ");
    scanf("%d", &target);

    // Search element in matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] == target) {
                printf("Element %d found at index: [%d][%d]\n", target, i, j);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }

    if(!found) {
        printf("Element %d not found in the matrix.\n", target);
    }

    return 0;
}
