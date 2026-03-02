#include <stdio.h>

int main() {
    int arr[5], i;
    float sum = 0, avg;

    // Taking input from user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculating average
    avg = sum / 5;

    // Printing average
    printf("\nAverage of the elements = %.2f\n", avg);

    return 0;
}
