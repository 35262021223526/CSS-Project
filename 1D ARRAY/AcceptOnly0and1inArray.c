#include <stdio.h>

int main() {
    int arr[100], n, i, value;
    int count = 0;  // number of valid elements stored

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);

    printf("Enter the elements (only 0 or 1 allowed):\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &value);

        if(value == 0 || value == 1) {
            arr[count] = value;  // store only valid input
            count++;
        } else {
            printf("Invalid input! Only 0 or 1 allowed. Value ignored.\n");
        }
    }

    // Printing stored array
    printf("\nStored array (only 0s and 1s):\n");
    for(i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
