#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;   // 0 and 1 are not prime

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0;       // Not prime
    }
    return 1;               // Prime
}

int main() {
    int start, end;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop from start to end and print primes
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
