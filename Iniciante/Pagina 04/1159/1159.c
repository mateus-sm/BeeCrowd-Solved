#include <stdio.h>

int main(void) {
    int x, soma;

    scanf("%d", &x);
    while(x != 0) {
        soma = 0;
        for (int i = 0; i < 5; i++) {
            if (i == 0) {
                soma += (x % 2 == 0) ? x : ++x;
                x += 2;
            } else {
                soma += x;
                x += 2;
            }
        }

        printf("%d\n", soma);

        scanf("%d", &x);
    }


    return 0;
}