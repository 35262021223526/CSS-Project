#include <stdio.h>

int main() {
    int arr[100], n, i, index;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking input in array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking index number
    printf("Enter the index to access (0 to %d): ", n - 1);
    scanf("%d", &index);

    // Checking index validity
    if(index >= 0 && index < n) {
        printf("Value at index %d = %d\n", index, arr[index]);
    } else {
        printf("Invalid index! Please enter a value between 0 and %d.\n", n - 1);
    }

    return 0;
}
