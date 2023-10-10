#include <stdio.h>

int main(){
    int c, n;
    double v, total;

    scanf("%d %d %lf", &c, &n, &v);
    total = n * v;
    scanf("%d %d %lf", &c, &n, &v);
    total += n * v;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}