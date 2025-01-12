#include <stdio.h>

int main(void) {
    double S = 1;

    for (int i = 3, j = 2; i <= 39; i += 2, j *= 2) {
        S += (double) i / (double) j;
    }

    printf("%.2lf\n", S);

    return 0;
}