#include <stdio.h>
#define SIZE 100

int main(void) {
    double x;
    double N[SIZE];

    scanf("%lf", &x);

    N[0] = x;
    for (size_t i = 1; i < SIZE; i++) {
        N[i] = N[i - 1] / 2;
    }

    for (size_t i = 0; i < SIZE; i++) {
        printf("N[%u] = %.4lf\n", i, N[i]);
    }

    //system("pause");
    return 0;
}