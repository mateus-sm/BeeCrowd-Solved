#include <stdio.h>
#define TL 12

double somaMatriz(double mat[][12]);
double mediaMatriz(double mat[][12]);

int main(void) {
    int linha;
    char op;
    double mat[TL][TL];
    double resultado;

    scanf("%d", &linha);
    scanf(" %c", &op); //Não usar fflsush(). Usar espaço antes do %c 

    for (size_t i = 0; i < TL; i++) {
        for (size_t j = 0; j < TL; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    if (op == 'S') {
        resultado = somaMatriz(mat);
    } else {
        resultado = mediaMatriz(mat);
    }

    printf("%.1lf\n", resultado);

    return 0;
}

double somaMatriz(double mat[][12]) {
    double soma = 0;

    for(size_t linha = 0; linha < TL; linha++) {
        for(size_t coluna = 0; coluna < (int) TL - (linha + 1); coluna++) {
            soma += mat[linha][coluna];
        }
    }

    return soma;
}

double mediaMatriz(double mat[][12]) {
    return somaMatriz(mat) / (double) 66;
}