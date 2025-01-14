#include <stdio.h>
#define TL 12

double somaMatriz(double mat[]);
double mediaMatriz(double mat[]);

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
        resultado = somaMatriz(mat[linha]);
    } else {
        resultado = mediaMatriz(mat[linha]);
    }

    printf("%.1lf\n", resultado);

    return 0;
}

double somaMatriz(double mat[]) {
    double soma = 0;

    for (size_t i = 0; i < TL; i++) {
        soma += mat[i]; 
    }

    return soma;
}

double mediaMatriz(double mat[]) {
    double media = 0;

    for (size_t i = 0; i < TL; i++) {
        media += mat[i]; 
    }

    media = (double) media / (double) TL;

    return media;
}