#include <stdio.h>

void printTable(int n, int i) {
    if (i > 10)
        return;

    printf("%d x %d = %d\n", n, i, n * i);
    printTable(n, i + 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printTable(num, 1);

    return 0;
}
