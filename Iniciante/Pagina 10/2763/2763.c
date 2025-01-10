#include <stdio.h>
#include <string.h>

int main(void) {
    char CPF[50];

    while (scanf("%s", &CPF) != EOF) {

        for (int i = 0; CPF[i] != '\0'; i++) {
            if (CPF[i] == '.' || CPF[i] == '-') {
                printf("\n");
            } else {
                printf("%c", CPF[i]);
            }
        }
        
        printf("\n");
    }

    //system("pause");
    return 0;
}