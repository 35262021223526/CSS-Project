#include <stdio.h>

int main() {
    int arr[100], n, i, element, index = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to delete
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    // Searching the element
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            index = i;      // store index
            break;
        }
    }

    if(index == -1) {
        printf("Element not found in array.\n");
    } else {
        // Shifting elements to left
        for(i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // reduce size

        // Printing updated array
        printf("Array after deleting %d:\n", element);
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
