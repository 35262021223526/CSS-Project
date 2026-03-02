#include <stdio.h>

int digitCount(int n) {
    if (n == 0)
        return 0;
    return 1 + digitCount(n / 10);
}

int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

void process(int n) {
    int count = digitCount(n);
    printf("Total digits = %d\n", count);

    int reversed = reverseNumber(n, 0);
    printf("Reversed number = %d\n", reversed);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    process(num);

    return 0;
}
