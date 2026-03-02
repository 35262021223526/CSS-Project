#include <stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0;   // base case
    } else {
        return n + sum(n - 1);   // recursive call
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of numbers from 1 to %d = %d\n", n, sum(n));

    return 0;
}
