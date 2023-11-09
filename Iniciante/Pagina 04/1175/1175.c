#include <stdio.h>
#define TF 20

int main() {
    int vet[TF];
    int i, j, aux;

    for (i = 0; i < TF; i++) {
        scanf("%d", &vet[i]);
    }


    for (i = 0, j = TF - 1; i < TF /2; i++, j--) {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
    }

    for (i = 0; i < TF; i++) {
        printf("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}