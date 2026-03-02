#include <stdio.h>

// Function that prints multiplication
void printMultiplication(int a, int b) {
    int mul = a * b;
    printf("Multiplication = %d\n", mul);
}

int main() {
    int num1, num2;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the function
    printMultiplication(num1, num2);

    return 0;
}
