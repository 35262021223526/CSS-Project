#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char *p1, *p2;

    // Input strings
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Assign pointers
    p1 = str1;
    p2 = str2;

    // Move pointer p1 to end of first string
    while (*p1 != '\0') {
        p1++;
    }

    // Copy contents of str2 to str1 using pointers
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }

    // Add null terminator at the end
    *p1 = '\0';

    // Display concatenated string
    printf("\nConcatenated string: %s", str1);

    return 0;
}
