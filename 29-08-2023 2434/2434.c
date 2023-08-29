#include <stdio.h>
 
int main() {
 
    int dias, valori, auxiliar, auxiliar2, valorf;
    int i = 0, j = 0;
    int movimentacao[50];
    
    scanf("%d %d", &dias, &valori);
    
    //loop de leitura
    for (i = 0; i < dias; i++) {
        scanf("%d", &movimentacao[i]);
        fflush(stdin);
    }
    valorf = valori;
    
    
    //loop de transacoes
    for (i = 0; i < dias; i++) {
        valori += (movimentacao[j]); //auxiliar = 1100 + -800, auxiliar = 300
        
        //checagem de menor valor
        if (valori < valorf) {
            valorf = valori; //valorf = 300  
        }
        j++;
        
    }
    
    printf("%d\n", valorf);
    
    
    return 0;
}