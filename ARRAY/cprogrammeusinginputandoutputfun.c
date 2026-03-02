#include <stdio.h>

// Function to take input
void input(int arr[], int size) {
    int i;
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to print output
void output(int arr[], int size) {
    int i;
    printf("\nArray elements are:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[5];

    // Calling input function
    input(arr, 5);

    // Calling output function
    output(arr, 5);

    return 0;
}
