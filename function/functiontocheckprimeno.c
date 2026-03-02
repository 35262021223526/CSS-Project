#include <stdio.h>

// Function to check if a number is prime
void checkPrime(int n) {
    int i, flag = 1;

    if (n <= 1) {
        flag = 0;   // Numbers <= 1 are not prime
    } 
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("%d is a Prime Number\n", n);
    else
        printf("%d is Not a Prime Number\n", n);
}

int main() {
    int num;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling the function
    checkPrime(num);

    return 0;
}
