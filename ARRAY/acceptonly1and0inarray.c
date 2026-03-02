#include <stdio.h>

int main() {
    int arr[5], i, x;

    printf("Enter 5 elements (only 0 or 1 allowed):\n");

    for(i = 0; i < 5; ) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x);

        if(x == 0 || x == 1) {
            arr[i] = x;      // valid input stored
            i++;            // move to next index
        } else {
            printf("Invalid! Only 0 or 1 allowed. Try again.\n");
        }
    }

    // Display stored elements
    printf("\nArray elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
