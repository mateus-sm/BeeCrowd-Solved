#include <stdio.h>
 
int main() {
 
    int contador = 5, valor, pares = 0, impares = 0, positivos = 0, negativos = 0;
    int i;

    for (i = 0; i < contador; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        
        if (valor != 0){
              if (valor >= 0) {
                positivos++;
            } else {
                negativos++;
            }  
        }
        
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
 
    return 0;
}