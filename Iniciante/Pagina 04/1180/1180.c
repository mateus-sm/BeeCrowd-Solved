#include <stdio.h>

int main(void) {
    int menor;
    size_t TL, pos;

    scanf("%u", &TL);

    int vet[TL];

    for(size_t i = 0; i < TL; i++) {
        scanf("%d", &vet[i]);
    }

    menor = vet[0];
    for (size_t i = 0; i < TL; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
            pos = i;
        }
    }
    
    printf("Menor valor: %d\nPosicao: %u\n", menor, pos);

    //system("pause");

    return 0;
}