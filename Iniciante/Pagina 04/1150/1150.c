#include <stdio.h>

int main(void) {
    int X, Z, soma, count;

    while (scanf("%d", &X) != EOF) {
        
        do {
            scanf("%d", &Z);
        } while(Z <= X);

        soma = 0, count = 0;
        while (soma < Z) {
            soma += X;
            X++;
            count++;
        }

        printf("%d\n", count);
    }

    return 0;
}