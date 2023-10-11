#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, x1, x2, delta;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    delta = b * b - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    
    if (delta > 0 && a != 0) {
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
}