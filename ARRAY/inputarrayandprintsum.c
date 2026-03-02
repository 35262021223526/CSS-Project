#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;

    // Taking input from the user
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculating sum
    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Printing sum
    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
