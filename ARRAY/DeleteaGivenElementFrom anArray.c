#include <stdio.h>

int main() {
    int n, num, pos = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &num);

    // Find position of element to delete
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        printf("Element %d not found in the array.\n", num);
    } else {
        // Shift elements to the left
        for(int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Reduce size

        printf("Array after deleting %d:\n", num);
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
