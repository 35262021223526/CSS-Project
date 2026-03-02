#include <stdio.h>

void printSpaces(int s) {
    if (s == 0)
        return;
    printf(" ");
    printSpaces(s - 1);
}

void printStars(int s) {
    if (s == 0)
        return;
    printf("* ");
    printStars(s - 1);
}

void printPattern(int n, int i) {
    if (i > n)
        return;

    // Print leading spaces
    printSpaces(n - i);

    // Print stars (2*i - 1 stars)
    printStars(2 * i - 1);

    printf("\n");

    printPattern(n, i + 1);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printPattern(n, 1);

    return 0;
}
