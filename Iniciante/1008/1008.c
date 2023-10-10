#include <stdio.h>

int main(){
    int Nfunc, Ghora;
    double horas, salario;
    scanf("%d %d %lf", &Nfunc, &Ghora, &horas);
    salario = horas * Ghora;
    printf("NUMBER = %d\n", Nfunc);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}