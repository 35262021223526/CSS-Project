#include <stdio.h>

// Function to calculate GCD using Euclidean Algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;   // when b becomes 0, a is the GCD
}

int main() {
    int num1, num2;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the function
    int gcd = findGCD(num1, num2);

    // Printing result
    printf("GCD : %d\n", gcd);

    return 0;
}
