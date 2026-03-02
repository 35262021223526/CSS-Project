#include <stdio.h>

// Function that returns addition
int add(int x, int y) {
    return x + y;
}

int main() {
    int num1, num2, result;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the function and storing the returned value
    result = add(num1, num2);

    // Printing the result
    printf("Addition = %d\n", result);

    return 0;
}
