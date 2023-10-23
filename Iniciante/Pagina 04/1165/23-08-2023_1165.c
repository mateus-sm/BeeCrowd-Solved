#include <stdio.h>
 
int main() {
 
    int casosteste, numero[100], numeroa;
    int contador;
    int i = 0, j = 0, k = 0; 

    scanf("%d", &casosteste);
    //loop de leitura
    for(i = 0; i < casosteste; i++) {
        scanf("%d", &numero[i]); 
    }

    for(k = 0; k < casosteste; k++) {
        for(j = 2; j < numero[k]; j++) {
            if (numero[k] % j == 0) {
                contador++;
            }
        }

        if (contador >= 1) {
            printf("%d nao eh primo\n", numero[k]);
        } else {
            printf("%d eh primo\n", numero[k]);
        }
            
        contador = 0;
    }
        
    return 0;
}