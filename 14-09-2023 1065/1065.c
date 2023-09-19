#include <stdio.h>
 
int main() {
 
    int contador = 5, valor, contadornumero;
    int i;

    for (i = 0; i < contador; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            contadornumero++;
        }
        
    }

    printf("%d valores pares\n", contadornumero);
 
    return 0;
}