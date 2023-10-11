#include <stdio.h>
 
int main() {
 
    float valor;

    scanf("%f", &valor);

    if (valor > 0 && valor <= 2000) {
        printf("Isento\n");
    } 
    if (valor >= 2000.01 && valor <= 3000) {
        valor = valor - 2000;
        valor = valor * 0.08;
        printf("R$ %.2f\n", valor);
    }
    if (valor >= 3000.01 && valor <= 4500) {
        valor = valor - 3000;
        valor = valor * 0.18 + 80;
        printf("R$ %.2f\n", valor);
    }
    if (valor > 4500) {
        valor = valor - 4500;
        valor = valor * 0.28 + 80 + 270;
        printf("R$ %.2f\n", valor);
    }
    

    return 0;
}