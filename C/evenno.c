#include <stdio.h>

void printEven() {
    int i;
    for(i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    printf("Even numbers between 1 to 10:\n");
    printEven();
    return 0;
}
