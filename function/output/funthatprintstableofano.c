#include <stdio.h>

// Function that prints the table of a number
void printTable(int n) {
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int num;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling the function
    printTable(num);

    return 0;
}
