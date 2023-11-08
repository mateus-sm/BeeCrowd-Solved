#include <stdio.h>
#define TF 5

int main() {

    int vetPar[TF], vetImpar[TF], input;
    int contador = 0, contadorPar = 0, contadorImpar = 0, i = 0;

    while (contador < 15) {
        //for (i = 0; contadorPar <= TF && contadorImpar <= TF; i++) {
            scanf("%d", &input);

            if (input % 2 == 0) {
                vetPar[contadorPar] = input;
                contadorPar++;
                contador++;
            } else {
                vetImpar[contadorImpar] = input;
                contadorImpar++;
                contador++;
            }

        //}

        if (contadorPar == TF) {
            for (i = 0; i < TF; i++) {
                printf("par[%d] = %d\n", i, vetPar[i]);
            }
            contadorPar = 0;
        } 
        if (contadorImpar == TF) {
            for (i = 0; i < TF; i++) {
                printf("impar[%d] = %d\n", i, vetImpar[i]);
            }
            contadorImpar = 0;
        }

    }

    for (i = 0; i < contadorImpar; i++) {
            printf("impar[%d] = %d\n", i, vetImpar[i]);
    }
    for (i = 0; i < contadorPar; i++) {
        printf("par[%d] = %d\n", i, vetPar[i]);
    }

    return 0;
}