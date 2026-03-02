#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find first repeating element
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("First repeating element is: %d\n", arr[i]);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }

    if(!found)
        printf("No repeating elements found.\n");

    return 0;
}
