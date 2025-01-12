#include <stdio.h>

int main(void) {
    int vezes, x, y, soma;

    scanf("%d", &vezes);

    while(vezes > 0) {
        scanf("%d %d", &x, &y);

        soma = 0;
        for (int i = 0; i < y; i++) {
            if (i == 0) {
                soma += (x % 2 == 0) ? ++x : x;
                x += 2;
            } else {
                soma += x;
                x += 2;
            }
        }

        printf("%d\n", soma);

        vezes--;
    }


    return 0;
}