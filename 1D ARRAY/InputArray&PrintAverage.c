#include <stdio.h>

int main() {
    int arr[100], n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];   // add while taking input
    }

    // Calculating average
    average = sum / n;

    // Printing average
    printf("Average of the elements = %.2f\n", average);

    return 0;
}
