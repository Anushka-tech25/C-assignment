#include <stdio.h>
#include "header.h"

int main() {
    int n, a, l;

    printf("Enter number to check even/odd:\n");
    scanf("%d", &l);
    if (evenodd(&l) == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    printf("Enter number to find factorial:\n");
    scanf("%d", &n);
    printf("Factorial: %d\n", factorial(&n));

    printf("Enter number to check prime:\n");
    scanf("%d", &a);
    if (prime(&a) == 1) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}

   
