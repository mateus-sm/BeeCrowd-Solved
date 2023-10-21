#include <stdio.h>
 
int main() {
 
    int a, b, inicio, fim, soma = 0;

    scanf("%d %d", &a, &b);
    while (a > 0 && b > 0) {
        if (a > b) {
            fim = a;
            inicio = b;
        } else {
            fim = b;
            inicio = a;
        }

        for (;inicio <= fim; inicio++) {
            soma += inicio;
            printf("%d ", inicio);
        }
        printf("Sum=%d\n", soma);
        soma = 0;

        scanf("%d %d", &a, &b);
    }
 
    return 0;
}