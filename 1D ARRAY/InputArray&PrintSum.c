#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculating sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Printing sum
    printf("Sum of all elements = %d\n", sum);

    return 0;
}
