#include <stdio.h>
 
int main() {
    
    int contador = 0, valor,  i;
    
    scanf("%d", &valor);
    
    while (contador < 6) {

        if (valor % 2 == 0) { 
            
        } else {
            printf("%d\n", valor);
            contador++;
        }

        valor++;

    }
    
    return 0;
}