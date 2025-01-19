#include <stdio.h>

int main(void) {
    int TL, aux;

    scanf("%d", &TL);

    while(TL != 0) {
        if (TL == 1) {
            puts("1");
        }

        if (TL == 2) {
            puts("1 1");
            puts("1 1");
        }

        int mat[TL][TL];
        for(int linha = 0; linha < TL; linha++) {
            for(int coluna = 0; coluna < TL; coluna++) {
                mat[linha][coluna] = 0;
            }
        }

        int aux = TL * TL;
        int aux2 = 0;
        if (TL >= 3) {
            while (aux2 <= aux) {
                for (int i = 0; i < TL - 1; i++) {
                    for(int linha = i; linha < TL - 1; linha++) {
                        //[O][0] até [0][TL] -> [1][1] até [1][TL - 1]
                        mat[i][linha] = i + 1;
                        aux2++;
                        
                        //[TL][0] até [TL][TL] -> [TL - 1][1] até [TL - 1][TL - 1]
                        mat[TL - i - 1][linha] = i + 1;
                        aux2++;
                    }
                    for(int coluna = i; coluna < TL - 1; coluna++) {
                        mat[coluna][i] = i + 1;
                        aux2++;
                        mat[coluna][TL - i - 1] = i + 1;
                        aux2++;
                    }
                }
            }
            

            for(size_t linha = 0; linha < TL; linha++) {
                for(size_t coluna = 0; coluna < TL; coluna++) {
                    printf("%d ", mat[linha][coluna]);
                }
                puts("");
            }            
        }


        scanf("%d", &TL);
    }

    return 0;
}