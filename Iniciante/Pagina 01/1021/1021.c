#include <stdio.h>
 
int main() {
    int N100, N50, N20, N10, N5, N2;
    int a100, a50, a20, a10, a5, a2;
    int M1, M50, M25, M10, M5, M01;
    int b1; 
    double b50, b25, b10, b5, b01;
    int notas;
    double valor;

    
    scanf("%lf", &valor); valor = valor + 0.001;

    printf ("NOTAS:\n");
    N100 = valor / 100;
    printf("%d nota(s) de R$ 100.00\n", N100);
    a100 = N100 * 100;
    N50 = (valor - a100) / 50;
    printf("%d nota(s) de R$ 50.00\n", N50);
    a50 = N50 * 50;
    N20 = (valor - (a100 + a50)) / 20;
    printf("%d nota(s) de R$ 20.00\n", N20);
    a20 = N20 * 20;
    N10 = (valor - (a100 + a50 + a20)) / 10;
    printf("%d nota(s) de R$ 10.00\n", N10);
    a10 = N10 * 10;
    N5 = (valor - (a100 + a50 + a20 + a10)) / 5;
    printf("%d nota(s) de R$ 5.00\n", N5);
    a5 = N5 * 5;
    N2 = (valor - (a100 + a50 + a20 + a10 + a5)) / 2;
    printf("%d nota(s) de R$ 2.00\n", N2);
    a2 = N2 * 2;
    

    notas = (a100 + a50 + a20 + a10 + a5 + a2);
    printf("MOEDAS:\n");
    M1 = (valor - notas / 1);
    printf("%d moeda(s) de R$ 1.00\n", M1 );
    b1 = M1 * 1;
    M50 = ((valor - notas - b1) / 0.5);
    printf("%d moeda(s) de R$ 0.50\n", M50);
    b50 = M50 * 0.5;
    M25 = ((valor - (notas + b1 + b50)) / 0.25);
    printf("%d moeda(s) de R$ 0.25\n", M25);
    b25 = M25 * 0.25;
    M10 = ((valor - (notas + b1 + b50 + b25)) / 0.10);
    printf("%d moeda(s) de R$ 0.10\n", M10);
    b10 = M10 * 0.10;
    M5 = ((valor - (notas + b1 + b50 + b25 + b10)) / 0.05);
    printf("%d moeda(s) de R$ 0.05\n", M5);
    b5 = M5 * 0.05;
    M01 = ((valor - (notas + b1 + b50 + b25 + b10 + b5)) / 0.01);
    printf("%d moeda(s) de R$ 0.01\n", M01);
    

    return 0;
}