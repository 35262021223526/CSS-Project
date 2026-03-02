#include <stdio.h>

int main() {
    char str[100], reversed[100];
    char *start, *end;
    int length = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Set start pointer to beginning of string
    start = str;

    // Find length of string using pointer
    while (*start != '\0') {
        length++;
        start++;
    }

    // Now set pointers for reversing
    start = str;            // Point to beginning
    end = str + length - 1; // Point to last character

    // Reverse string using pointers
    for (int i = 0; i < length; i++) {
        reversed[i] = *end;
        end--;
    }

    // Add null terminator at end of reversed string
    reversed[length] = '\0';

    // Display reversed string
    printf("\nReversed string: %s", reversed);

    return 0;
}
