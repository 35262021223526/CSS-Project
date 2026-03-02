#include <stdio.h>

int main() {
    int arr[5], i;
    long long product = 1;   // Use long long to avoid overflow

    // Taking input from user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        product *= arr[i];   // multiply while taking input
    }

    // Printing the product
    printf("\nProduct of all elements = %lld\n", product);

    return 0;
}
