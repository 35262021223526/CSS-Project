#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Pointer points to array
    ptr = arr;

    // Input array elements using pointer
    printf("\nEnter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", (ptr + i)); // Using pointer arithmetic
    }

    // Print array using pointer
    printf("\nArray elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); // Dereferencing pointer
    }

    return 0;
}
