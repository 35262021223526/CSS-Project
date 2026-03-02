#include <stdio.h>

int main() {
    int arr[100], n, search, found = 0;
    int *ptr;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements in array
    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("\nEnter element to search: ");
    scanf("%d", &search);

    // Pointer to array start
    ptr = arr;

    // Search element using pointer
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == search) {
            found = 1;
            printf("\nElement %d found at position %d.\n", search, i + 1);
            break;
        }
    }

    // If not found
    if (!found) {
        printf("\nElement %d not found in the array.\n", search);
    }

    return 0;
}
