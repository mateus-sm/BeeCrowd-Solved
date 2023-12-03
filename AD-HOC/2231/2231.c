#include <stdio.h>
#include <string.h>
 
int main() {
 
    int numcasos_temperatura, conjunto_minutos;
    int termino, inicio, limite, fim, soma, i, teste = 0;
    float media_atual, maior, menor;
    
    scanf("%d %d", &numcasos_temperatura, &conjunto_minutos);

    while(numcasos_temperatura != 0 && conjunto_minutos != 0) {

        int vet[numcasos_temperatura];

        for (i = 0; i < numcasos_temperatura; i++) {
            scanf("%d", &vet[i]);
        }

        menor = 201;
        maior = -201;
        inicio = 0;
        termino = 1;
        while (termino != 0) {

            media_atual = 0;
            soma = 0;
            fim = inicio + conjunto_minutos;
            for (i = inicio; i < fim; i++) {
                soma += vet[i];
            }
            
            //printf("soma = %d ", soma);
            //printf("\n");

            media_atual = soma / conjunto_minutos;

            if (media_atual > maior) {
                maior = media_atual;
            } 
            if (media_atual < menor) {
                menor = media_atual;
            }

            limite = numcasos_temperatura - conjunto_minutos;
            //printf("limite = %d\n", limite);

            if (inicio == limite) {
                termino = 0;
            }

            inicio++;
        }
        
        teste++;
        printf("Teste %d\n", teste);
        printf("%.0f %.0f\n", menor, maior);
        printf("\n");

        scanf("%d %d", &numcasos_temperatura, &conjunto_minutos);
    }

    return 0;
}