#include <stdio.h>

// Function declaration
int subtract(int a, int b) {
    return a - b;   // Return subtraction
}

int main() {
    int num1, num2, result;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the function
    result = subtract(num1, num2);

    // Printing result
    printf("Subtraction = %d\n", result);

    return 0;
}
