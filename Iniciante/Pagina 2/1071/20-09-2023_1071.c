#include <stdio.h>
 
int main() {
    int inicio, fim, aux, somaimpar = 0;

    scanf("%d %d", &inicio, &fim);

    if (inicio > fim) {
        aux = inicio;
        inicio = fim;
        fim = aux;
    }

    for (inicio = inicio + 1; inicio < fim; inicio++) {
        if (inicio % 2 != 0) {
            somaimpar += inicio;
            //printf("%d\n", inicio); 
        }
        
    }

    printf("%d\n", somaimpar);

}