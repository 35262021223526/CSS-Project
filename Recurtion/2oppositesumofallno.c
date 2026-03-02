#include <stdio.h>

int main() {
    int sp, ep, i, sum = 0, iteration = 1;

    printf("Enter SP: ");
    scanf("%d", &sp);

    printf("Enter EP: ");
    scanf("%d", &ep);

    for(i = sp; i <= ep; i++) {

        if(i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;

        printf("Iteration %d: sum = %s%d\n",
               iteration,
               (i % 2 == 0 ? "-" : "+"),
               i);

        iteration++;
    }

    printf("\nFinal Opposite Sum = %d", sum);

    return 0;
}
