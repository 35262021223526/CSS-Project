#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse array in-place
    for(i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Print reversed array
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
