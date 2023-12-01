// Justificador 2
#include <stdio.h>
#include <string.h>
 
int main() {
 
    int numcasos, i, l, c, TL, TFL, maior, pos, pos_espaco, termino, spc;
    char mat[100][51];

    scanf("%d ", &numcasos);

    while (numcasos != 0) {
        //para i menor que numero de casos
        TFL = 0;
        for (l = 0; l < numcasos; l++) {
            //pega string
            fflush(stdin);
            gets(mat[l]);
            TFL++;
        }

        //para todas as linhas, arruma string para que ela nao tenha espaços desnecessarios
        for (l = 0; l < TFL; l++) {
            TL = strlen(mat[l]);

            termino = 1;
            while (termino != 0) {
                
                //achar pos
                pos = 0;
                spc = 0;
                for (i = 0; i < TL; i++){
                    if (mat[l][i] == ' ') {
                        spc++;
                    } else {
                        spc = 0;
                    }

                    if (spc == 2) {
                        pos = i;
                        i = TL;
                    }
                }
                //printf("%d\n", pos);
                
                //nao encontrou nenhuma instancia onde tem dois espaços seguidos
                if (pos == 0) {
                    //depois de remanejar tudo, se o primeiro caracter da string for um espaço
                    //faz remanejamento final
                    if (mat[l][0] == ' ') {
                        for (i = 0; i < TL; i++){
                            mat[l][i] = mat[l][i + 1];
                        }
                    }
                    termino = 0;
                } else {
                    //encontrou instancia onde tem dois espaços seguidos
                    //remanejar
                    for (i = pos; i < TL; i++) {
                        mat[l][i] = mat[l][i + 1];
                    }    
                }

                //puts(mat[l]);  
            }
        }

        //remove espaço no final caso houver
        for (l = 0; l < TFL; l++) {
            TL = strlen(mat[l]);

            if (mat[l][TL - 1] == ' ') {
                mat[l][TL - 1] = '\0';
            }
        }

        //achar maior
        maior = 0;
        for (l = 0; l < TFL; l++) {
            // Calcula tamanho
            TL = strlen(mat[l]);
            
            // Verifica maior string da matriz
            if (TL > maior) {
                maior = TL;
            }
        }

        //IMPRESSAO
        for (i = 0; i < numcasos; i++) {
            printf("%*s\n", maior, mat[i]);
            //printf("tl = %d\n", strlen(mat[i])); 
        }
        //printf("maior = %d\n", maior);
	    
        scanf("%d ", &numcasos);

        if (numcasos > 0) {
            printf("\n");
        }
    }

    return 0;
}