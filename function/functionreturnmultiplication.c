#include <stdio.h>

// Function that returns multiplication
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2, result;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the function
    result = multiply(num1, num2);

    // Printing the result
    printf("Multiplication = %d\n", result);

    return 0;
}
