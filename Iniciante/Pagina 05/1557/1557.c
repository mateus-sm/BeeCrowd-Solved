#include <stdio.h>
#include <math.h>

int size(int);

int main(void) {
    int TL;

    scanf("%d", &TL);

    while(TL != 0) {
        int mat[TL][TL];

        //popula matriz
        for (size_t linha = 0; linha < TL; linha++) {
            for (size_t coluna = 0; coluna < TL; coluna++) {
                mat[linha][coluna] = pow(2, coluna + linha);
            }
        }

        int tamanhoDigito = size(mat[TL - 1][TL - 1]) + 1;
        //printf("Tamanho de %d eh igual a: %d\n", mat[TL - 1][TL - 1], tamanhoDigito);

        for(size_t linha = 0; linha < TL; linha++) {
            //imprimir a primeira coluna com um espaço a menos, simplesmente porque sim.
            printf("%*d", tamanhoDigito - 1, mat[linha][0]);
            for(size_t coluna = 1; coluna < TL; coluna++) {
                printf("%*d", tamanhoDigito, mat[linha][coluna]);
            }
            puts("");
        }

        puts("");
        scanf("%d", &TL);
    }

    return 0;
}

int size(int num) {
    int aux = num;
    int tamanho = 0;

    while (aux != 0) {
        aux = aux / 10;
        tamanho++;
    }

    return tamanho;
}