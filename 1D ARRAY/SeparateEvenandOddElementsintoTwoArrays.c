#include <stdio.h>

int main() {
    int arr[100], even[100], odd[100];
    int n, i, e = 0, o = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0) {
            even[e++] = arr[i];  // store even numbers
        } else {
            odd[o++] = arr[i];   // store odd numbers
        }
    }

    // Print even array
    printf("\nEven elements:\n");
    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    // Print odd array
    printf("\n\nOdd elements:\n");
    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
