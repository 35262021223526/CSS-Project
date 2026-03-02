#include <stdio.h>

int main() {
    int arr[100][100];
    int rows, cols, i, j, k, l;
    int found = 0;

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

    // Find first repeating element
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {

            // Compare with remaining elements
            for(k = i; k < rows; k++) {
                for(l = (k == i ? j + 1 : 0); l < cols; l++) {

                    if(arr[i][j] == arr[k][l]) {
                        printf("First repeating element in the matrix: %d\n", arr[i][j]);
                        found = 1;
                        break;
                    }
                }
                if(found) break;
            }
            if(found) break;
        }
        if(found) break;
    }

    if(!found)
        printf("No repeating element found in the matrix.\n");

    return 0;
}
