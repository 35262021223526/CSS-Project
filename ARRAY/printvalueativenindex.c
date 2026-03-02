#include <stdio.h>

int main() {
    int arr[5], i, index;

    // Taking input for the array
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Taking index input
    printf("\nEnter an index (0 to 4): ");
    scanf("%d", &index);

    // Checking valid index
    if(index >= 0 && index < 5) {
        printf("Value at index %d = %d\n", index, arr[index]);
    } else {
        printf("Invalid index! Please enter a value between 0 and 4.\n");
    }

    return 0;
}
