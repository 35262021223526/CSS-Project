#include <stdio.h>

int main() {
    int arr[5], i;

    // Taking input from user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Displaying elements in reverse order
    printf("\nArray elements in reverse order:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
