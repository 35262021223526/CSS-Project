#include <stdio.h>

// Function to print centered star pattern
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {

        int spaces = n - i;        // Leading spaces
        int stars  = 2 * i - 1;    // Star count

        // Print leading spaces
        for (int s = 1; s <= spaces; s++) {
            printf("  ");   // two spaces for better alignment
        }

        // Print stars
        for (int j = 1; j <= stars; j++) {
            printf("* ");
        }

        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}
