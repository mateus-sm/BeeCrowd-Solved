#include <stdio.h>
 
int main() {
 
    int numero;
    double media = 0, contador = 0;

    scanf("%d", &numero);

    while (numero >= 0) {
        contador++;
        media += numero;
        scanf("%d", &numero);
    }

    media = media / contador;

    printf("%lf\n", media);
 
    return 0;
}