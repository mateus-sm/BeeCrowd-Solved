#include <stdio.h>
 
int main() {
 
    int tempo, horas, minutos, segundos, auxiliar1, auxiliar2;

    scanf("%d", &tempo);

    horas = ((tempo / 60) / 60);
    auxiliar1 = ((horas * 60) * 60);

    minutos = ((tempo - auxiliar1) / 60);
    auxiliar2 = minutos * 60;

    segundos = tempo - auxiliar1 - auxiliar2;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}