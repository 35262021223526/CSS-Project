#include <stdio.h>

// Function to swap using pointers
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping:");
    printf("\na = %d, b = %d", a, b);

    // Call function and pass addresses
    swap(&a, &b);

    printf("\n\nAfter swapping:");
    printf("\na = %d, b = %d", a, b);

    return 0;
}
