#include <stdio.h>

int main() {
    int arr1[5], arr2[5], merged[10];
    int i, j;

    // Input for first array
    printf("Enter 5 elements for first array:\n");
    for(i = 0; i < 5; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("\nEnter 5 elements for second array:\n");
    for(i = 0; i < 5; i++) {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    // Merging arrays
    for(i = 0; i < 5; i++) {
        merged[i] = arr1[i];
    }

    for(j = 0; j < 5; j++) {
        merged[i + j] = arr2[j];
    }

    // Output merged array
    printf("\nMerged Array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
