#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting in ascending order (Bubble Sort)
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output sorted array
    printf("Array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
