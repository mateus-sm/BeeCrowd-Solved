#include <stdio.h>

int main(void) {
    int a, n, soma;

    while (scanf("%d", &a) != EOF) {
        soma = 0;
        do {
            scanf("%d", &n);
        } while(n <= 0);

        int aux = n - 1;
        for (int i = 0; i <= aux; i++) {
            soma += a + i;
        }

        printf("%d\n", soma);
    }

    return 0;
}