#include <stdio.h>

int isPrimeRec(int n, int i) {
    if (n <= 1)
        return 0;  // not prime

    if (i > n / 2)
        return 1;  // no divisor found → prime

    if (n % i == 0)
        return 0;  // divisor found → not prime

    return isPrimeRec(n, i + 1);
}

void printPrimes(int start, int end) {
    if (start > end)
        return;

    if (isPrimeRec(start, 2))
        printf("%d ", start);

    printPrimes(start + 1, end);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d are:\n", a, b);
    printPrimes(a, b);

    return 0;
}

