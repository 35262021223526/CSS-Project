#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // Taking input
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Displaying array
    printf("The elements of the array are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
