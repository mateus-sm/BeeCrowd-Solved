#include <stdio.h>

int main () {
    int i, casos;
    double media, a, b, c;

    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        media = (a * 2 + b * 3 + c * 5) / 10;
        printf("%.1lf\n", media);
    }

    return 0;
}