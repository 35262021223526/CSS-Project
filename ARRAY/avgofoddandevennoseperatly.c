#include <stdio.h>

int main() {
    int arr[10], i;
    int oddSum = 0, evenSum = 0;
    int oddCount = 0, evenCount = 0;
    float oddAvg = 0, evenAvg = 0;

    // Taking input
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);

        // Check odd or even
        if(arr[i] % 2 == 0) {
            evenSum += arr[i];
            evenCount++;
        } else {
            oddSum += arr[i];
            oddCount++;
        }
    }

    // Calculate averages (avoid divide by zero)
    if(oddCount > 0)
        oddAvg = (float)oddSum / oddCount;
    if(evenCount > 0)
        evenAvg = (float)evenSum / evenCount;

    // Output
    printf("\nSum of odd numbers = %d", oddSum);
    printf("\nAverage of odd numbers = %.2f", oddAvg);

    printf("\n\nSum of even numbers = %d", evenSum);
    printf("\nAverage of even numbers = %.2f\n", evenAvg);

    return 0;
}
