#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    int op = 0;
    int gol1, gol2;
    int grenais = 0, empate = 0, inter = 0, gremio = 0;

    do {
        grenais++;
        scanf("%d%d", &gol1, &gol2);

        (gol1 == gol2) ? empate++ : (gol1 > gol2) ? inter++ : gremio++; 

        puts("Novo grenal (1-sim 2-nao)");
        scanf("%d", &op);
    } while(op != 2);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
    if (inter == gremio) {
        printf("Nao houve vencedor\n");
    } else {
        printf("%s venceu mais\n", (inter > gremio) ? "Inter" : "Gremio");
    }

    return 0;
}