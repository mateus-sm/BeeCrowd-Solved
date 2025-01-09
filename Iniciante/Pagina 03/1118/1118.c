#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validaNota(double);

int main(void) {
    double n1, n2; 
    int op;

    do {
        do {
            scanf("%lf", &n1);
        } while(!validaNota(n1));

        do {
            scanf("%lf", &n2);
        } while(!validaNota(n2));

        printf("media = %.2lf\n", (n1 + n2) / 2);

        do {
            puts("novo calculo (1-sim 2-nao)");
            scanf("%d", &op);
        } while(op != 1 && op != 2);
    } while(op != 2);


    return 0;
}

bool validaNota(double num) {
    if (num < 0 || num > 10) {
        puts("nota invalida");
        return false;
    }

    return true;
}