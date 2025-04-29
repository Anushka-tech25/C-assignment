#ifndef HEADER_H
#define HEADER_H

int factorial(int *n);
int evenodd(int *l);
int prime(int *a);

int evenodd(int *l) {
    return (*l % 2 == 0) ? 0 : 1;
}

int prime(int *a) {
    if (*a <= 1) return 0;
    for (int i = 2; i <= *a / 2; i++) {
        if (*a % i == 0) return 0;
    }
    return 1;
}

int factorial(int *n) {
    int prod = 1;
    for (int i = 1; i <= *n; i++) {
        prod *= i;
    }
    return prod;
}

#endif



    

