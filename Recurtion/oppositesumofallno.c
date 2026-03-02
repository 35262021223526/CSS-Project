#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0)
            sum = sum - i;  // subtract even numbers
        else
            sum = sum + i;  // add odd numbers
    }

    printf("Opposite sum = %d", sum);

    return 0;
}
