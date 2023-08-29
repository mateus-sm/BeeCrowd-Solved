#include <stdio.h>
 
int main() {
 
    int casos, x[20], soma = 0, i = 0, j = 0, k = 1;

    scanf("%d", &casos);

    //loop de scan
    for (i = 0; i < casos; i++) {
        scanf("%d", &x[j]);
        j++;
    }
    //j termina valendo 3
    j = 0;

    //loop de teste de numeros
    for (i = 0; i < casos; i++) {
        //teste de loop num
        //printf("%d\n", i);
        

        //loop de divisores
        for (k = 1; k < x[j]; k++) {
            //teste loop divisores
            //printf("%d\n", k);
            

            //soma recebendo divisores
            if (x[j] % k == 0) {
                soma += k;
            }
            //teste soma
            //printf("soma: %d\n", soma);
        }
        
        
        if (soma == x[i]) {
            printf("%d eh perfeito\n", x[i]);
        } else {
            printf("%d nao eh perfeito\n", x[i]);
        }
        soma = 0;
        j++;
    }    
    
    //teste loop scan
    //j = 0;
    //printf("%d\n", x[j]);
    //printf("%d\n", x[j + 1]);
    //printf("%d\n", x[j + 2]);


    return 0;
}