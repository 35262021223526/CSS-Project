#include <stdio.h>

int reverseNumber(int num, int rev) {
    // Base case: when number becomes 0
    if (num == 0)
        return rev;

    // Recursive step: take last digit and add to reverse
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int reversed = reverseNumber(number, 0);

    printf("Original Number: %d\n", number);
    printf("Reversed Number: %d\n", reversed);

    return 0;
}
