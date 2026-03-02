#include <stdio.h>

// Function to reverse the number
void reverseNumber(int n) {
    int rev = 0;

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    printf("Reversed Number: %d\n", rev);
}

// Function to count digits and call reverseNumber()
void digitCount(int n) {
    int count = 0, temp = n;

    while (temp > 0) {
        count++;
        temp /= 10;
    }

    printf("Digit Count: %d\n", count);

    // Calling reverse function
    reverseNumber(n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    digitCount(num);

    return 0;
}
