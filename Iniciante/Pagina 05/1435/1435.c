#include <stdio.h>

int main(void) {
    int TL;

    scanf("%d", &TL);

    while(TL != 0) {
        if (TL == 1) {
            puts("  1");
        }

        if (TL == 2) {
            puts("  1   1");
            puts("  1   1");
        }

        if (TL >= 3) {
            int mat[TL][TL];

            for (size_t i = 0; i < (TL / 2) + 1; i++) {
                for(size_t linha = i; linha < TL - i; linha++) {
                    //[O][0] até [0][TL] -> [1][1] até [1][TL - 1]
                    mat[i][linha] = i + 1;
                    
                    //[TL][0] até [TL][TL] -> [TL - 1][1] até [TL - 1][TL - 1]
                    mat[TL - i - 1][linha] = i + 1;
                    //printMat(mat, TL); system("pause");
                }
                for(size_t coluna = i; coluna < TL - i; coluna++) {
                    mat[coluna][i] = i + 1;
                    mat[coluna][TL - i - 1] = i + 1;
                    //printMat(mat, TL); system("pause");
                }
            }
            
            for(size_t linha = 0; linha < TL; linha++) {
                printf("%3.d", mat[linha][0]); // pra que colocar o output desse jeito...
                for(size_t coluna = 1; coluna < TL; coluna++) {
                    printf("%4.d", mat[linha][coluna]);
                }
                puts("");
            }
        }

        puts("");
        scanf("%d", &TL);
    }

    return 0;
}