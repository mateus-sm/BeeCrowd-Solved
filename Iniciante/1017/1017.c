#include <stdio.h>
 
int main() {
    int horas, kmPh,  eficiencia = 12;
    double distancia, gasto;

    scanf("%d", &horas);
    scanf("%d", &kmPh);

    distancia = horas * kmPh;

    gasto = distancia / eficiencia;

    printf("%.3lf\n", gasto);

    return 0;
}