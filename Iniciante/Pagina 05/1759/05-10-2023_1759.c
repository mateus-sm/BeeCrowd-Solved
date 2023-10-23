#include <stdio.h>
 
int main() {
 
    int contador;

    scanf("%d", &contador);

    while (contador > 0) {
        
        if (contador == 1) {
            printf("Ho");
        } else {
            printf("Ho ");
        }
        
        contador--;
    }
 
    printf("!\n");

    return 0;
}