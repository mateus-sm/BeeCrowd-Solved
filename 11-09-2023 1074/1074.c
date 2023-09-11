#include <stdio.h>
 
int main() {
 
    int valor, contador;
    int i;

    scanf("%d", &contador);

    for (i = 0; i < contador; i++){
        scanf("%d", &valor);

        if(valor == 0){
            printf("NULL\n");
        } else {
            if (valor > 0 && valor % 2 == 0){
                printf("EVEN POSITIVE\n");
            }
            if (valor < 0 && valor % 2 == 0){
            printf("EVEN NEGATIVE\n"); 
            }
            if (valor > 0 && valor % 2 != 0){
            printf("ODD POSITIVE\n"); 
            }
            if (valor < 0 && valor % 2 != 0){
            printf("ODD NEGATIVE\n"); 
            }
        }
    }
 
    return 0;
}