#include <stdio.h>

int main() {
    int num1 = 5789;
    int arr[4];
    int sum = 0;

    // Extract digits into array
    arr[0] = 5;
    arr[1] = 7;
    arr[2] = 8;
    arr[3] = 9;

    // Sum of array digits
    for (int i = 0; i < 4; i++) {
        sum += arr[i];
    }

    float average = sum / 4.0;

    printf("Number = %d\n", num1);
    printf("Digits : ");
    for (int i = 0; i < 4; i++) printf("%d ", arr[i]);
    printf("\nSum of digits = %d\n", sum);
    printf("Average = %.2f\n\n", average);

    // ============================
    // Reverse and product of 9875
    // ============================

    int num2 = 9875;
    int reverse = 0, product = 1, digit;

    int temp = num2;
    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        product *= digit;
        temp /= 10;
    }

    printf("Number = %d\n", num2);
    printf("Reverse = %d\n", reverse);
    printf("Product of digits = %d\n", product);

    return 0;
}
