#include <stdio.h>
#include <math.h>
#define TF 10

int main() {
    
    int num, i = 0;
    int vet[TF];
    
    scanf("%d", &num);
    vet[0] = num;
    
    for (i = 0; i < TF; i++) {
        printf("N[%d] = %d\n", i, num);
        num = num * 2;
    }
    
}