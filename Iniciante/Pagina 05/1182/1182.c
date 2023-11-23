#include <stdio.h>
#define TF 12

/*
void printMat(float mat[TF][TF]) {
    printf("Matriz :\n");
    for (int l = 0; l < TF; l++) {
        for (int c = 0; c < TF; c++) {
            printf("%f ", mat[l][c]);
        }
        printf("\n");
    }
}
*/

int main() {
 
    int coluna, i, l, c;
    char operacao;
    float mat[TF][TF];
    double soma = 0, media = 0;

    scanf("%d", &coluna);
    fflush(stdin);
    scanf(" %c", &operacao);
    fflush(stdin);

    for (l = 0; l < TF; l++) {
        for (c = 0; c < TF; c++){
            //printf("Digite o elemento da posicao %d %d: ", l, c);
            scanf("%f", &mat[l][c]);
            //printMat(mat);
        }
    }

    for (i = 0; i <= TF; i++) {
        soma += mat[i][coluna];
    }

    if (operacao == 'S') {
        printf("%.1lf\n", soma);
    } 
    if (operacao == 'M') {
        media = soma / TF;
        printf("%.1lf\n", media);
    }
 
    return 0;
}