#include <stdio.h>

int multiply(int a, int b) {
    if (b == 0)
        return 0;
    else
        return a + multiply(a, b - 1);
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    result = multiply(num1, num2);

    printf("Multiplication = %d\n", result);

    return 0;
}
