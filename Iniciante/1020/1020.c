#include <stdio.h>

int main() {
    int VED, ano, mes, dia;
    scanf("%d", &VED);
    ano = VED / 365;
    mes = (VED % 365) / 30;
    dia = (VED % 365) % 30;
    printf ("%d ano(s)\n", ano);
    printf ("%d mes(es)\n", mes);
    printf ("%d dia(s)\n", dia);
    return 0;
}