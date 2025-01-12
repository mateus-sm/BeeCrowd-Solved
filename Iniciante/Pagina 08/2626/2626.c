#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool vitoria(char[], char[]);

int main(void) {
    char dodo[20], leo[20], peper[20];

    while ((scanf("%s %s %s\n", &dodo, &leo, &peper)) != EOF) {
        //Resolve vencedor
        if (vitoria(dodo, leo) && vitoria(dodo, peper)) {
            puts("Os atributos dos monstros vao ser inteligencia, sabedoria...");   
        } else if (vitoria(leo, dodo) && vitoria(leo, peper)) {
            puts("Iron Maiden's gonna get you, no matter how far!");
        } else if (vitoria(peper, leo) && vitoria(peper, dodo)) {
            puts("Urano perdeu algo muito precioso...");
        } else {
            puts("Putz vei, o Leo ta demorando muito pra jogar...");
        }
    }

    return 0;
}

bool vitoria(char op[20], char op2[20]) {
    if ((strcmp(op, "papel") == 0) && (strcmp(op2, "pedra") == 0)) {
        return true;
    }
    if ((strcmp(op, "pedra") == 0) && (strcmp(op2, "tesoura") == 0)) {
        return true;
    }
    if ((strcmp(op, "tesoura") == 0) && (strcmp(op2, "papel") == 0)) {
        return true;
    } 
    return false;
}