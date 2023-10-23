#include <stdio.h>
 
int main() {
    int i, j, total, sizelinha, numlinha, cont = 1;
    
    scanf("%d %d", &sizelinha, &total);
    
    numlinha = total / sizelinha;

    for (i = 0; i < numlinha; i++) {
        for (j = 0; j < sizelinha; j++) {
            if (j == sizelinha - 1){
                printf("%d\n", cont);
                cont++; 
            } else {
                printf("%d ", cont);
                cont++; 
            }
        }
    }
    
    return 0;
}