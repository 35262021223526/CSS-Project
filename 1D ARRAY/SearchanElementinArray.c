#include <stdio.h>

int main() {
    int arr[100], n, i, num;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number to search
    printf("Enter the number to search: ");
    scanf("%d", &num);

    // Search in array
    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    // Output result
    if(found)
        printf("Number %d is present in the array.\n", num);
    else
        printf("Number %d is NOT present in the array.\n", num);

    return 0;
}
