#include <stdio.h>

int main(void) {
    int vezes, pa, pb, somaa, somab, anos;
    double ga, gb;

    scanf("%d", &vezes);

    while (vezes > 0) {
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
        
        anos = 0, somaa = pa, somab = pb;
        while(anos <= 100 && somaa <= somab) {
            somaa += (ga > 0 || gb < 0) ? (int) (pa * ((double) ga / 100.0)) : 0;
            pa = somaa;
            somab += (gb > 0 || gb < 0) ? (int) (pb * ((double) gb / 100.0)) : 0;
            pb = somab;
            anos++;

            //printf("%d %d %d\n", somaa, somab, anos);
        }

        if (anos > 100) {
            puts("Mais de 1 seculo.");
        } else {
            printf("%d anos.\n", anos);
        }
        
        vezes--;
    }

    return 0;
}