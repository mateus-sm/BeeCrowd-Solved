#include <stdio.h>
 
int main() {
    int N100, N50, N20, N10, N5, N2, N1;
    int a100, a50, a20, a10, a5, a2;
    int M1, M50, M25, M10, M5, M01;
    int valor;
    //int b1; 
    //int notas;
    //double b50, b25, b10, b5, b01;
    //double valor;

    //scanf("%lf", &valor);
    scanf("%d", &valor); //valor = valor + 0.001;

    printf("%d\n", valor);
    
    //printf ("NOTAS:\n");
    N100 = valor / 100;
    printf("%d nota(s) de R$ 100,00\n", N100);
    a100 = N100 * 100;
    N50 = (valor - a100) / 50;
    printf("%d nota(s) de R$ 50,00\n", N50);
    a50 = N50 * 50;
    N20 = (valor - (a100 + a50)) / 20;
    printf("%d nota(s) de R$ 20,00\n", N20);
    a20 = N20 * 20;
    N10 = (valor - (a100 + a50 + a20)) / 10;
    printf("%d nota(s) de R$ 10,00\n", N10);
    a10 = N10 * 10;
    N5 = (valor - (a100 + a50 + a20 + a10)) / 5;
    printf("%d nota(s) de R$ 5,00\n", N5);
    a5 = N5 * 5;
    N2 = (valor - (a100 + a50 + a20 + a10 + a5)) / 2;
    printf("%d nota(s) de R$ 2,00\n", N2);
    a2 = N2 * 2;
    N1 = (valor - (a100 + a50 + a20 + a10 + a5 + a2)) / 1;
    printf("%d nota(s) de R$ 1,00\n", N1);
    //printf("%d %d %d %d %d %d", a100, a50, a20, a10, a5, a2);


    return 0;
}