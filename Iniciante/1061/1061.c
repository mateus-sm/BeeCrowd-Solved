#include <stdio.h>
 
int main() {
 
    int di, hi, mi, si; 
    int df, hf, mf, sf;
    int dt, ht, mt, st;
    int totalinicial, totalfinal, total, dias, horas, minutos;

    scanf("Dia %d\n", &di);
    scanf("%d : %d : %d\n", &hi, &mi, &si);
    scanf("Dia %d\n", &df);
    scanf("%d : %d : %d\n", &hf, &mf, &sf);

    totalinicial = di * 86400 + hi * 3600 + mi * 60 + si;
    totalfinal = df * 86400 + hf * 3600 + mf * 60 + sf;

    total = totalfinal - totalinicial;
    dias = total / 86400;
    total -= dias * 86400;
    horas = total / 3600;
    total -= horas * 3600;
    minutos = total / 60;
    total -= minutos * 60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", total);

    return 0;

}