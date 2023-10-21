#include <stdio.h>

int main() {
    int casos, contador = 0, a, b, fim, inicio;
    int i;

    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
        scanf("%d %d", &a, &b);
        
        if (a > b) {
            fim = a;
            inicio = b + 1;
        } else {
            fim = b;
            inicio = a + 1;
        }

        for (;inicio < fim; inicio++) {
            if (inicio % 2 != 0) {
                contador += inicio;
            }
        }

        printf("%d\n", contador);
        contador = 0;
    }

}