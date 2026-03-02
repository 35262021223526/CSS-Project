#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int firstRepeating = -1;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                firstRepeating = arr[i];
                goto end;   // stop when the first repeating element is found
            }
        }
    }

end:
    if(firstRepeating != -1)
        printf("First repeating element = %d\n", firstRepeating);
    else
        printf("No repeating elements found\n");

    return 0;
}
