#include <stdio.h>

int main(){
    double salario, qntvenda, total;
    char NOME[50];

    scanf("%s", &NOME);
    scanf("%lf %lf", &salario, &qntvenda);
    total = ((qntvenda * 0.15) + salario);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}