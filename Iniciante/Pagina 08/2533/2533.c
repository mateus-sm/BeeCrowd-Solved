#include <stdio.h>

int main(void) {
    int vezes, n1, h1, somatoriaNotaHora, somatoriaHora;
    float ira;

    while(scanf("%d", &vezes) != EOF) {

        somatoriaNotaHora = 0, somatoriaHora = 0;

        while (vezes > 0) {
            scanf("%d%d", &n1, &h1);
            somatoriaNotaHora += n1 * h1;
            somatoriaHora += h1;
            vezes--;    
        }
        
        ira = (float) somatoriaNotaHora / (float) (somatoriaHora * 100);

        printf("%.4f\n", ira);
    }

    return 0;
}