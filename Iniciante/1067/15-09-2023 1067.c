#include <stdio.h>
 
int main() {
 
    int valor, auxiliar;
    int i;
    
    scanf("%d", &valor);
    
    for (i = 0; i <= valor; i++) {
        if (i % 2 == 0){
            continue;
        } else {
            printf("%d\n", i);
        }
    }
 
    return 0;
}