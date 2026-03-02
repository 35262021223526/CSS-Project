#include <stdio.h>

int main() {
    int arr[10], i;
    int evenSum = 0, oddSum = 0;

    // Taking input
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);

        // Checking even or odd and adding to sum
        if(arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    // Output results
    printf("\nSum of even numbers = %d", evenSum);
    printf("\nSum of odd numbers  = %d\n", oddSum);

    return 0;
}
