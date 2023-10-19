#include <stdio.h>
 
int main() {
 
    int abas, acoes, total, i;
    char string[50];
    
    scanf("%d %d", &abas, &acoes);
    
    for (i = 0; i < acoes; i++) {
        scanf("%s", &string[0]);
        
        if (string[0] == 'f'){
            abas++;
        } else {
            abas--;
        }
    }
    
    printf("%d\n", abas);

    return 0;
}