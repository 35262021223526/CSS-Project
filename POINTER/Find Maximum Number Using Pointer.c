#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Assign addresses to pointers
    p1 = &a;
    p2 = &b;

    // Determine maximum using pointer dereferencing
    if (*p1 > *p2) {
        printf("\nMaximum number is: %d", *p1);
    } else {
        printf("\nMaximum number is: %d", *p2);
    }

    return 0;
}
