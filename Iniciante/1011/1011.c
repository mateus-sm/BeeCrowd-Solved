#include <stdio.h>

int main() {
    double volume, R, Pi;

    Pi = 3.14159;

    scanf("%lf", &R);
    volume = (4.0/3) * Pi * (R*R*R);
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}