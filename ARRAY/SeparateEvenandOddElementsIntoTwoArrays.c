#include <stdio.h>

int main() {
    int arr[10], even[10], odd[10];
    int i, e = 0, o = 0;

    // Taking input
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);

        // Separate even & odd
        if(arr[i] % 2 == 0) {
            even[e] = arr[i];
            e++;
        } else {
            odd[o] = arr[i];
            o++;
        }
    }

    // Display even array
    printf("\nEven numbers:\n");
    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    // Display odd array
    printf("\n\nOdd numbers:\n");
    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
