#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);  // (or use fgets(str, 100, stdin);)

    // Assign pointer to string
    ptr = str;

    // Count characters using pointer
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    // Print result
    printf("\nLength of the string = %d", length);

    return 0;
}
