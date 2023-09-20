#include <stdio.h>
 
int main() {
 
    int contador = 6;
    double total = 0, media, valor, contadornumero;
    int i;

    for (i = 0; i < contador; i++) {
        scanf("%lf", &valor);

        if (valor > 0) {
            contadornumero++;
            total += valor;
        }
    }

    media = total / contadornumero;

    printf("%.0lf valores positivos\n", contadornumero);
    printf("%.1lf\n", media);
 
    return 0;
}