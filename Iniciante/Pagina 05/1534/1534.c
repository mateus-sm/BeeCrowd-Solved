#include <stdio.h>

int main(void) {
    int TL;

    while(scanf("%d", &TL) != EOF) {
        int mat[TL][TL];

        for (size_t i = 0; i < TL; i++) {
            for (size_t j = 0; j < TL; j++) {
                mat[i][j] = 3;
            }
            
        }

        for (size_t linha = 0; linha < TL; linha++) {
            mat[linha][linha] = 1;
            mat[linha][TL - linha - 1] = 2;
        }
        
        for (size_t linha = 0; linha < TL; linha++) {
            for (size_t coluna = 0; coluna < TL; coluna++) {
                printf("%d", mat[linha][coluna]);
            }
            puts("");
        }
        
    }

    return 0;
}