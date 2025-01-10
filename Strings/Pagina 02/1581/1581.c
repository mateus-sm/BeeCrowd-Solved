#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int ncasos, igualdade = 0, i, k; 

    scanf("%d", &ncasos);

    while(ncasos--) {
        scanf("%d", &k);
        char idioma[k][21];

        for(i = 0; i < k; i++) {
            scanf("%s", idioma[i]);
        }
        i = 1;

        while(i < k) {
            if(strcmp(idioma[0], idioma[i])!=0) {
                igualdade = 1;
                break;
            }
            igualdade = 0;
            i++;
        }

        if (igualdade == 0) {
            printf("%s\n", idioma[0]);
        } else {
            printf("ingles\n");
        }

    }
    return 0;
}