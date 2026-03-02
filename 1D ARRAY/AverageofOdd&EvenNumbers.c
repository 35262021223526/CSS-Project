#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sumEven = 0, sumOdd = 0;
    int countEven = 0, countOdd = 0;
    float avgEven, avgOdd;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0) {      // even number
            sumEven += arr[i];
            countEven++;
        } else {                   // odd number
            sumOdd += arr[i];
            countOdd++;
        }
    }

    // Calculating averages
    if(countEven > 0)
        avgEven = (float)sumEven / countEven;
    else
        avgEven = 0;

    if(countOdd > 0)
        avgOdd = (float)sumOdd / countOdd;
    else
        avgOdd = 0;

    // Printing results
    printf("Average of even numbers = %.2f\n", avgEven);
    printf("Average of odd numbers  = %.2f\n", avgOdd);

    return 0;
}
