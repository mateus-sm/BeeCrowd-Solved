#include <stdio.h>

int main(void) {
    int TL;

    scanf("%d", &TL);

    while(TL != 0) {
        if (TL == 1) {
            puts("  1");
        }

        if (TL == 2) {
            puts("  1   2");
            puts("  2   1");
        }

        if (TL >= 3) {
            int mat[TL][TL];

            for(size_t linha = 0; linha < TL; linha++) {
                mat[linha][linha] = 1;
            }

            for (size_t i = 1; i < TL; i++) {
                for(size_t linha = i; linha < TL; linha++) {
                    mat[linha - i][linha] = i + 1;
                    mat[linha][linha - i] = i + 1;
                    //printMat(mat, TL); system("pause");
                }
            }
            
            for(size_t linha = 0; linha < TL; linha++) {
                printf("%3.d", mat[linha][0]);
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