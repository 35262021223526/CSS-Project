#include <stdio.h>

void input(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void output(int arr[], int n) {
    printf("Array elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[10];
    int n;

    printf("Enter how many elements you want to store: ");
    scanf("%d", &n);

    input(arr, n);    // call input function
    output(arr, n);   // call output function

    return 0;
}
