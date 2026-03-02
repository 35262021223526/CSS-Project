#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // Taking input from the user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Displaying the array elements
    printf("\nThe elements of the array are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
