#include <stdio.h>
#define TF 5

int main() {
    int vet[TF];
    int i, j, aux;

    for (i = 0; i < TF; i++) {
        scanf("%d", &vet[i]);
    }


    for (i = 0, j = 4; i < TF /2; i++, j--) {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
    }

    for (i = 0; i < TF; i++) {
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    return 0;
}