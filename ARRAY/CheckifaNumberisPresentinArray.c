#include <stdio.h>

int main() {
    int n, num, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("%d is present in the array.\n", num);
    else
        printf("%d is NOT present in the array.\n", num);

    return 0;
}
