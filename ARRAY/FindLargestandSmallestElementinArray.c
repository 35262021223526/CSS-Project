#include <stdio.h>

int main() {
    int arr[10], i;
    int largest, smallest;

    // Taking input
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest
    largest = smallest = arr[0];

    // Finding largest and smallest
    for(i = 1; i < 10; i++) {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    // Output
    printf("\nLargest element = %d", largest);
    printf("\nSmallest element = %d\n", smallest);

    return 0;
}
