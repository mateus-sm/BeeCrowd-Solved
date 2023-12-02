// Justificador 1
#include <stdio.h>
#include <string.h>
 
int main() {
 
    int numcasos, i, l, c, TL, maior, pos, pos_espaco;
    
    scanf("%d ", &numcasos);

    while (numcasos > 0) {

        char mat[numcasos][51];

        // Para i menor que numero de casos
        maior = 0;
        for (l = 0; l < numcasos; l++) {
            // Pega string
            scanf(" %[^\n]", &mat[l]);

            // Calcula tamanho
            TL = strlen(mat[l]);
            //printf("%d\n", TL);
            
            // Verifica maior string da matriz
            if (TL > maior) {
                maior = TL;
                //pos = l;
            }
        }

        // Impressão comum
        /*
        // Passar por todas as linhas
        for (l = 0; l < TFL; l++){

            // Achar TL da string atual
            TL = strlen(mat[l]);
            //printf("%d\n", TL);

            // Parar de imprimir espaços quando o resto couber a string atual
            pos_espaco = maior - TL;
            for (c = 0; c < maior; c++) {
                if (c < pos_espaco) {
                    printf(" ");
                } else {
                    printf("%c", mat[l][c - pos_espaco]);
                }
            }
            printf("\n");
        }
        */

        // Impressão com format string
        for (i = 0; i < numcasos; i++){
            printf("%*s\n", maior, mat[i]); 
        }

        //Prints para teste
        /*
        for (l = 0; l < TFL; l++) {
            for (c = 0; c < TL; c++) {
                printf("%c", mat[l][c]);
            }
            printf("\n");
        }
        printf("tamanho do maior = %d\n", maior);
        printf("pos do maior = %d\n", pos);
        */
        scanf("%d ", &numcasos);

        if (numcasos > 0) {
            printf("\n");
        }
        
    }

    return 0;
}