#include <stdio.h>
#include <string.h>

int main() {
    
    int contador;
    int i = 0;
    int quantia;
    char tipo;
    int coelhos = 0, ratos = 0, sapos = 0;
    int total = 0;

    
    scanf("%d", &contador);
    
    for (i = 0; i < contador; i++) {
        scanf("%d %c", &quantia, &tipo);

        total += quantia; 

        if (tipo == 'C') {
            coelhos += quantia;
        }
        if (tipo == 'R') {
            ratos += quantia;
        }
        if (tipo == 'S') {
            sapos += quantia;
        }

    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    
    double percentualcoelho = (coelhos * 100.00) / total;
    printf("Percentual de coelhos: %.2lf %%\n", percentualcoelho);
    double percentualrato = (ratos * 100.00) / total;
    printf("Percentual de ratos: %.2lf %%\n", percentualrato);
    double percentualsapo = (sapos * 100.00) / total;
    printf("Percentual de sapos: %.2lf %%\n", percentualsapo);
    
    return 0;
}
