#include <stdio.h>
 
int main() {
 
    int i, j, n;
    int vet[100] = {0, 1, 1};
    
    scanf("%d", &n);
    
    if (n == 0) {
        printf("0");
    }

    if (n == 1) {
        printf("%d", vet[0]);
    } else {
        if (n == 2) {
            printf("%d", vet[0]);
            printf(" %d", vet[1]);  
        } else {
            if (n == 3) {
                printf("%d", vet[0]);
                printf(" %d", vet[1]);  
                printf(" %d", vet[2]);  
            } else {
                if (n >= 4) {
                    printf("%d", vet[0]);
                    printf(" %d", vet[1]);  
                    printf(" %d", vet[2]);
                    for (i = 3; i < n ; i++) {
                        vet[i] = vet[i - 1] + vet[i - 2];
                        printf(" %d", vet[i]); 
                    }
                }
            }
        }
    }

    printf("\n");
    
    
    return 0;
}