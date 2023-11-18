#include <stdio.h>
#include <string.h>
#define TF 1000
 
void repeticao() {
    int vet1[TF], vet2[TF];
    char str[TF];
    int TL1 = 0, TL2 = 0;
    int i = 0, j = 0, k = 0;

    gets(str);

    while (i < strlen(str) && str[i] != ' ') {
        vet1[TL1] = str[i] - '0';  // Converte caractere para inteiro
        i++;
        TL1++;
    }
    i++;  // Ignora o espaço
    while (i < strlen(str)) {
        vet2[TL2] = str[i] - '0';  // Converte caractere para inteiro
        i++;
        TL2++;
    }


    for (i = TL1 - 1, j = TL2 - 1; j >= 0; i--, j--) {
        if (vet2[j] == vet1[i]) {
            k++;
        } else {
            break; // If a mismatch is found, break out of the loop
        }
    }

    if (k == TL2) {
        printf("encaixa\n");
    } else {
        printf("nao encaixa\n");
    }

}

void casos() {
    int numcasos, i;
    scanf("%d", &numcasos);
    fflush(stdin);

    for (i = 0; i < numcasos; i++) {
        repeticao();
    }
}

int main() {
    casos();
    return 0;
}