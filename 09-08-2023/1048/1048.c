#include <stdio.h>
 
int main() {
 
    float salario = 0, base = 0;

    scanf("%f", &salario);
    
    if (salario > 0 && salario <= 400.00){

        base = salario * 0.15;
        salario =  salario + base;

        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", base);
        printf("Em percentual: 15 %%\n");
        
    } else if (salario >= 400.01 && salario <= 800.00) {
        base = salario * 0.12;
        salario =  salario + base;

        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", base);
        printf("Em percentual: 12 %%\n");
        
    } else if (salario >= 800.01 && salario <= 1200.00) {
        base = salario * 0.10;
        salario =  salario + base;

        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", base);
        printf("Em percentual: 10 %%\n");

    } else if (salario >= 1200.01 && salario <= 2000.00) {
        base = salario * 0.07;
        salario =  salario + base;

        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", base);
        printf("Em percentual: 7 %%\n");

    } else if (salario > 2000.00) {
        base = salario * 0.04;
        salario =  salario + base;

        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", base);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}