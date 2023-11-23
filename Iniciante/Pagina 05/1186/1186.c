#include <stdio.h>
#define TF 12

int main() {
    char operacao;
    float mat[TF][TF];
    double soma = 0, media = 0;
    int l, c, max, cont = 0, lmax = 0;

    scanf(" %c", &operacao);

    for (l = 0; l < TF; l++) {
        for (c = 0; c < TF; c++) {
            scanf("%f", &mat[l][c]);
        }
    }

    
    for (l = 11; l > 0; l--) {
        lmax++;
        for (max = lmax; max < TF; max++) {
            soma += mat[l][max];
            cont++;
        }
    }

    if (operacao == 'S') {
        printf("%.1lf\n", soma);
    } 
    if (operacao == 'M') {
        media = soma / cont;
        printf("%.1lf\n", media);
    }


    return 0;
}