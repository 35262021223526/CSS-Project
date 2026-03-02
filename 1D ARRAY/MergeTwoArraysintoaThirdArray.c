#include <stdio.h>

int main() {
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, i, k = 0;

    // Input size of first array
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    // Input elements of first array
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    // Input elements of second array
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merging arr1 into arr3
    for(i = 0; i < n1; i++) {
        arr3[k++] = arr1[i];
    }

    // Merging arr2 into arr3
    for(i = 0; i < n2; i++) {
        arr3[k++] = arr2[i];
    }

    // Printing merged array
    printf("\nMerged Array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
