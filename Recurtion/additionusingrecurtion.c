#include <stdio.h>

int add(int a, int b) {
    if (b == 0)
        return a;
    else
        return add(a + 1, b - 1);
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = add(num1, num2);

    printf("Addition = %d\n", result);

    return 0;
}
