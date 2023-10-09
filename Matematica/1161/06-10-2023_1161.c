#include <stdio.h>

int main() {
    unsigned long long m, n;

    while (scanf("%llu %llu", &m, &n) != EOF) {
        unsigned long long fm = 1;
        unsigned long long fn = 1;

        // Calculate factorial for m
        for (unsigned long long i = m; i > 1; i--) {
            fm *= i;
        }

        // Handle special cases for m
        if (m == 0 || m == 1) {
            fm = 1;
        } else if (m == 2) {
            fm = 2;
        }

        // Calculate factorial for n
        for (unsigned long long i = n; i > 1; i--) {
            fn *= i;
        }

        // Handle special cases for n
        if (n == 0 || n == 1) {
            fn = 1;
        } else if (n == 2) {
            fn = 2;
        }

        unsigned long long soma = fm + fn;

        printf("%llu\n", soma);
    }

    return 0;
}