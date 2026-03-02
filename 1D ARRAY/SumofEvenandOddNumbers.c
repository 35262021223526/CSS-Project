#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sumEven = 0, sumOdd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking input in array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0) {
            sumEven += arr[i];   // add to even sum
        } else {
            sumOdd += arr[i];    // add to odd sum
        }
    }

    // Output
    printf("Sum of even numbers = %d\n", sumEven);
    printf("Sum of odd numbers  = %d\n", sumOdd);

    return 0;
}
