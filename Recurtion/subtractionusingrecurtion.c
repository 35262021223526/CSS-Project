#include <stdio.h>

int subtract(int a, int b) {
    // Base case
    if (b == 0)
        return a;
    else
        return subtract(a - 1, b - 1);
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    result = subtract(num1, num2);

    printf("Subtraction = %d\n", result);

    return 0;
}
