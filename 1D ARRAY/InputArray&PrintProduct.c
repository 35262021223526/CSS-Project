#include <stdio.h>

int main() {
    int arr[100], n, i;
    long long product = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        product *= arr[i];   // multiply while taking input
    }

    // Printing product
    printf("Product of all elements = %lld\n", product);

    return 0;
}
