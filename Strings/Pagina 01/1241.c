#include <stdio.h>
#include <string.h>
#define TF 1000

void repeticao() {
    char str1[TF], str2[TF];
    char strAux[TF];
    int TL1 = 0, TL2 = 0;
    int i = 0, j = 0, k = 0;

    scanf("%s",&str1);
    scanf("%s",&str2);

    if (strlen(str1) < strlen(str2)) {
        strcpy(strAux,str1);
        strcpy(str1,str2);
        strcpy(str2,strAux);
    }

    TL1 = strlen(str1);
    TL2 = strlen(str2);

    k = 0;
    for (i = TL1 - 1, j = TL2 - 1; j >= 0; i--, j--) {
        if (str2[j] == str1[i]) {
            k++;
        } else {
            break;
        }
    }

    
    if (k == TL2) {
        printf("encaixa\n");
    } else {
        printf("nao encaixa\n");
    }
    
}

int main() {
    int numcasos, i;

    scanf("%d", &numcasos);
    fflush(stdin);

    for (i = 0; i < numcasos; i++) {
        repeticao();
    }

    return 0;
}