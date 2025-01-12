#include <stdio.h>

int main(void) {
    double S = 1;

    for (int i = 2; i <= 100; i++) {
        S += 1 / (double) i;
    }

    printf("%.2lf\n", S);

    return 0;
}