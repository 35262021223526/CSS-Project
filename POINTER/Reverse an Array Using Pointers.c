#include <stdio.h>

int main() {
    int arr[100], n;
    int *start, *end, temp;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assign pointers
    start = arr;        // Points to first element
    end = arr + n - 1;  // Points to last element

    // Reverse using pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    // Print reversed array
    printf("\nReversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
