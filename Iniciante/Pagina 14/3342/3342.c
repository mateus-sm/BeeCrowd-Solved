#include <stdio.h>
 
int main() {
    int n = 0, preto = 0, branco = 0;
    int i, g, flag;

    scanf("%d", &n);

    //repetiçao para a equaçao que calcula brancos e pretos em uma coluna
    g = 0;
    flag = 0;
    while (g < n) {

        //flag para alterar qual cor começa qual coluna
        if (flag == 0) { 
            for (i = 1; i <= n; i++) {
                //calculo da primeira coluna
                if (i % 2 == 0) {
                    preto++;
                } else {
                    branco++;
                }
                flag = 1;
            }
        } else {
            for (i = 1; i <= n; i++) {
                //calculo da segunda coluna
                if (i % 2 == 0) {
                    branco++;
                } else {
                    preto++;
                }
                flag = 0;
            }
        
        }

        g++;
    }

    printf("%d casas brancas e %d casas pretas\n", branco, preto);

    return 0;
}