#include <stdio.h>
#define TF 100

int main() {
 
    int i, j = 0;
    double vet[TF];

    for (i = 0; i < TF; i++) {
        scanf("%lf", &vet[i]);
    }
    
    for (i = 0; i < TF; i++) {
        if(vet[i] <= 10) {
            printf("A[%d] = %.1lf\n", i, vet[i]);
        }
    } 
 
    return 0;
}