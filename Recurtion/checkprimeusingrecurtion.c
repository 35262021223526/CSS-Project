#include <stdio.h>

int isPrimeRec(int n, int i) {
    if (n <= 1)
        return 0; // 0 and 1 are not prime

    if (i > n / 2)
        return 1; // no divisor found → prime

    if (n % i == 0)
        return 0; // divisor found → not prime

    return isPrimeRec(n, i + 1); // test next divisor
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrimeRec(num, 2))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
