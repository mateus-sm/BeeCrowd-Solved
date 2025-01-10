#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int m, n, j, len;
    char str[100], saida[100];

    scanf("%d %d", &m, &n);
    
    //Enquanto os valores nao atenderem a condiçao de parada vai continuar rodando
    while(m != 0 || n != 0) {
        str[0] = '\0'; 
        saida[0] = '\0';

        //passar o valor da soma para string
        len = sprintf(str, "%d", m + n);

        j = 0;
        for(int i = 0; i < len; i++) {
            if (str[i] != '0') {
                //printf("%c", str[i]);
                saida[j++] = str[i];
            }
        }

        saida[j] = '\0';
        printf("%s\n", saida);

        scanf("%d %d", &m, &n);
    }

    return 0;
}